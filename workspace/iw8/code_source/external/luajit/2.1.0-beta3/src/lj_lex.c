/*
==============
lj_lex_setup
==============
*/
__int64 lj_lex_setup(lua_State *L, LexState *ls)
{
  int v2; 
  int v5; 
  int c; 
  const char *p; 
  const char *pe; 
  const char *v9; 
  const char *v10; 
  int v11; 
  TValue *top; 
  signed __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  v2 = 0;
  ls->L = L;
  ls->fs = NULL;
  ls->p = NULL;
  ls->pe = NULL;
  ls->vstack = NULL;
  *(_QWORD *)&ls->sizevstack = 0i64;
  ls->bcstack = NULL;
  ls->sizebcstack = 0;
  ls->tok = 0;
  ls->lookahead = 289;
  ls->linenumber = 1;
  ls->lastline = 1;
  v5 = lex_more(ls);
  ls->c = v5;
  c = v5;
  if ( v5 == 239 )
  {
    p = ls->p;
    pe = ls->pe;
    v9 = p + 2;
    if ( p + 2 <= pe && *p == -69 && p[1] == -65 )
    {
      ls->p = v9;
      if ( v9 >= pe )
      {
        c = lex_more(ls);
      }
      else
      {
        c = *(unsigned __int8 *)v9;
        ls->p = p + 3;
      }
      ls->c = c;
      v2 = 1;
    }
  }
  if ( c == 35 )
  {
    while ( 1 )
    {
      v10 = ls->p;
      if ( v10 >= ls->pe )
      {
        v11 = lex_more(ls);
      }
      else
      {
        v11 = *(unsigned __int8 *)v10;
        ls->p = v10 + 1;
      }
      ls->c = v11;
      if ( v11 == -1 )
        return 0i64;
      if ( v11 == 10 || v11 == 13 )
      {
        lex_newline(ls);
        c = ls->c;
        v2 = 1;
        break;
      }
    }
  }
  if ( c != 27 )
    return 0i64;
  if ( v2 )
  {
    top = L->top;
    L->top = top + 1;
    v14 = (unsigned __int64)j_lj_err_str(L, LJ_ERR_BCBAD) | 0xFFFD800000000000ui64;
    top->u64 = v14;
    v15 = v14 >> 47;
    if ( (unsigned int)(v14 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v16 = v14 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v15 != *(unsigned __int8 *)(v16 + 9) || (*(_BYTE *)(v16 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    j_lj_err_throw(L, 3);
  }
  return 1i64;
}

/*
==============
lj_lex_cleanup
==============
*/
void lj_lex_cleanup(lua_State *L, LexState *ls)
{
  __int64 sizebcstack; 
  unsigned __int64 ptr64; 
  BCInsLine *bcstack; 
  __int64 v6; 
  VarInfo *vstack; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 

  sizebcstack = ls->sizebcstack;
  ptr64 = L->glref.ptr64;
  bcstack = ls->bcstack;
  sizebcstack *= 8i64;
  v6 = *(_QWORD *)(ptr64 + 24);
  *(_QWORD *)(ptr64 + 48) -= sizebcstack;
  (*(void (__fastcall **)(__int64, BCInsLine *, __int64, _QWORD))(ptr64 + 16))(v6, bcstack, sizebcstack, 0i64);
  vstack = ls->vstack;
  v8 = *(_QWORD *)(ptr64 + 24);
  v9 = 24i64 * ls->sizevstack;
  *(_QWORD *)(ptr64 + 48) -= v9;
  (*(void (__fastcall **)(__int64, VarInfo *, __int64, _QWORD))(ptr64 + 16))(v8, vstack, v9, 0i64);
  v10 = (unsigned int)(LODWORD(ls->sb.e.ptr64) - LODWORD(ls->sb.b.ptr64));
  v11 = ls->sb.b.ptr64;
  *(_QWORD *)(ptr64 + 48) -= v10;
  (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD))(ptr64 + 16))(*(_QWORD *)(ptr64 + 24), v11, v10, 0i64);
}

/*
==============
lj_lex_next
==============
*/
void lj_lex_next(LexState *ls)
{
  int lookahead; 

  lookahead = ls->lookahead;
  ls->lastline = ls->linenumber;
  if ( lookahead == 289 )
  {
    ls->tok = lex_scan(ls, &ls->tokval);
  }
  else
  {
    ls->tokval.u64 = ls->lookaheadval.u64;
    ls->lookahead = 289;
    ls->tok = lookahead;
  }
}

/*
==============
lj_lex_lookahead
==============
*/
int lj_lex_lookahead(LexState *ls)
{
  int result; 

  if ( ls->lookahead != 289 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lex.c", 465, "ls->lookahead == TK_eof") )
    __debugbreak();
  result = lex_scan(ls, &ls->lookaheadval);
  ls->lookahead = result;
  return result;
}

/*
==============
lj_lex_token2str
==============
*/
const char *lj_lex_token2str(LexState *ls, int tok)
{
  __int64 v2; 
  __int64 v4; 
  const char *v5; 
  lua_State *L; 

  v2 = tok;
  if ( tok > 256 )
    return (const char *)qword_144744738[tok];
  v4 = (unsigned int)tok;
  v5 = "%c";
  L = ls->L;
  if ( (lj_char_bits[v2 + 1] & 1) != 0 )
    v5 = "char(%d)";
  return j_lj_strfmt_pushf(L, v5, v4);
}

/*
==============
lj_lex_error
==============
*/
void __noreturn lj_lex_error(LexState *ls, int tok, ErrMsg em, ...)
{
  const char *v4; 
  char *ptr64; 
  va_list va; 

  va_start(va, em);
  if ( tok )
  {
    if ( (unsigned int)(tok - 286) <= 2 )
    {
      if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
        ptr64 = j_lj_buf_more2(&ls->sb, 1u);
      else
        ptr64 = (char *)ls->sb.p.ptr64;
      *ptr64 = 0;
      ls->sb.p.ptr64 = (unsigned __int64)(ptr64 + 1);
      v4 = (const char *)ls->sb.b.ptr64;
    }
    else
    {
      v4 = j_lj_lex_token2str(ls, tok);
    }
  }
  else
  {
    v4 = NULL;
  }
  j_lj_err_lex(ls->L, ls->chunkname, v4, ls->linenumber, em, va);
}

/*
==============
lj_lex_init
==============
*/
void lj_lex_init(lua_State *L)
{
  const char **v2; 
  unsigned int i; 
  const char *v4; 
  unsigned __int64 v5; 
  GCstr *v6; 

  v2 = (const char **)tokennames;
  for ( i = 0; i < 0x16; v6->reserved = i )
  {
    v4 = *v2;
    v5 = -1i64;
    do
      ++v5;
    while ( v4[v5] );
    v6 = j_lj_str_new(L, v4, v5);
    ++v2;
    ++i;
    v6->marked |= 0x20u;
  }
}

/*
==============
lex_longstring
==============
*/
void lex_longstring(LexState *ls, TValue *tv, int sep)
{
  int c; 
  char *ptr64; 
  const char *p; 
  int v9; 
  int v10; 
  char *v11; 
  const char *v12; 
  int v13; 
  int v14; 
  char *v15; 
  char *v16; 
  const char *v17; 
  int v18; 
  unsigned __int64 v19; 
  lua_State *L; 
  __int64 v21; 
  ErrMsg v22; 

  c = ls->c;
  if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
    ptr64 = j_lj_buf_more2(&ls->sb, 1u);
  else
    ptr64 = (char *)ls->sb.p.ptr64;
  *ptr64 = c;
  ls->sb.p.ptr64 = (unsigned __int64)(ptr64 + 1);
  p = ls->p;
  if ( p >= ls->pe )
  {
    v9 = lex_more(ls);
  }
  else
  {
    v9 = *(unsigned __int8 *)p;
    ls->p = p + 1;
  }
  ls->c = v9;
  if ( v9 == 10 || v9 == 13 )
  {
    lex_newline(ls);
    v9 = ls->c;
  }
  if ( v9 == -1 )
  {
LABEL_42:
    v22 = LJ_ERR_XLCOM;
    if ( tv )
      v22 = LJ_ERR_XLSTR;
    j_lj_lex_error(ls, 289, v22);
  }
  LOBYTE(v10) = v9;
  while ( 1 )
  {
    if ( v9 == 10 || v9 == 13 )
    {
      if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
        v16 = j_lj_buf_more2(&ls->sb, 1u);
      else
        v16 = (char *)ls->sb.p.ptr64;
      *v16 = 10;
      ls->sb.p.ptr64 = (unsigned __int64)(v16 + 1);
      lex_newline(ls);
      if ( !tv )
        ls->sb.p.ptr64 = ls->sb.b.ptr64;
      goto LABEL_29;
    }
    if ( v9 != 93 )
    {
      if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
        v11 = j_lj_buf_more2(&ls->sb, 1u);
      else
        v11 = (char *)ls->sb.p.ptr64;
      *v11 = v10;
      ls->sb.p.ptr64 = (unsigned __int64)(v11 + 1);
      v12 = ls->p;
      if ( v12 >= ls->pe )
      {
        ls->c = lex_more(ls);
      }
      else
      {
        v13 = *(unsigned __int8 *)v12;
        ls->p = v12 + 1;
        ls->c = v13;
      }
      goto LABEL_29;
    }
    if ( lex_skipeq(ls) == sep )
      break;
LABEL_29:
    v10 = ls->c;
    v9 = v10;
    if ( v10 == -1 )
      goto LABEL_42;
  }
  v14 = ls->c;
  if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
    v15 = j_lj_buf_more2(&ls->sb, 1u);
  else
    v15 = (char *)ls->sb.p.ptr64;
  *v15 = v14;
  ls->sb.p.ptr64 = (unsigned __int64)(v15 + 1);
  v17 = ls->p;
  if ( v17 >= ls->pe )
  {
    v18 = lex_more(ls);
  }
  else
  {
    v18 = *(unsigned __int8 *)v17;
    ls->p = v17 + 1;
  }
  ls->c = v18;
  if ( tv )
  {
    v19 = (unsigned __int64)j_lj_parse_keepstr(ls, (const char *)(ls->sb.b.ptr64 + (unsigned int)(sep + 2)), (unsigned int)(LODWORD(ls->sb.p.ptr64) - 2 * sep - LODWORD(ls->sb.b.ptr64) - 4));
    L = ls->L;
    tv->u64 = v19 | 0xFFFD800000000000ui64;
    v21 = (__int64)(v19 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v21 + 4) > 0xFFFFFFF6 && (~(_DWORD)v21 != *(unsigned __int8 *)((v19 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v19 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
}

/*
==============
lex_more
==============
*/
__int64 lex_more(LexState *ls)
{
  const char *v2; 
  __int64 v4; 

  v2 = ls->rfunc(ls->L, ls->rdata, &v4);
  if ( !v2 || !v4 )
    return 0xFFFFFFFFi64;
  ls->pe = &v2[v4];
  ls->p = v2 + 1;
  return *(unsigned __int8 *)v2;
}

/*
==============
lex_newline
==============
*/
void lex_newline(LexState *ls)
{
  int c; 
  const char *p; 
  int v4; 
  const char *v5; 
  int v6; 

  c = ls->c;
  if ( c != 10 && c != 13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lex.c", 79, "(ls->c == '\\n' || ls->c == '\\r')") )
    __debugbreak();
  p = ls->p;
  if ( p >= ls->pe )
  {
    v4 = lex_more(ls);
  }
  else
  {
    v4 = *(unsigned __int8 *)p;
    ls->p = p + 1;
  }
  ls->c = v4;
  if ( (v4 == 10 || v4 == 13) && v4 != c )
  {
    v5 = ls->p;
    if ( v5 >= ls->pe )
    {
      v6 = lex_more(ls);
    }
    else
    {
      v6 = *(unsigned __int8 *)v5;
      ls->p = v5 + 1;
    }
    ls->c = v6;
  }
  if ( ++ls->linenumber >= 2147483392 )
    j_lj_lex_error(ls, ls->tok, LJ_ERR_XLINES);
}

/*
==============
lex_number
==============
*/
void lex_number(LexState *ls, TValue *tv)
{
  int v3; 
  int c; 
  int v6; 
  char *v7; 
  const char *p; 
  char *ptr64; 
  const char *v10; 
  char *v11; 
  StrScanFmt v12; 

  v3 = 101;
  if ( (lj_char_bits[ls->c + 1] & 8) == 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lex.c", 93, "((lj_char_bits+1)[((ls->c))] & 0x08)") )
    __debugbreak();
  c = ls->c;
  v6 = c;
  if ( c == 48 )
  {
    v7 = LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) ? j_lj_buf_more2(&ls->sb, 1u) : (char *)ls->sb.p.ptr64;
    *v7 = 48;
    ls->sb.p.ptr64 = (unsigned __int64)(v7 + 1);
    p = ls->p;
    if ( p >= ls->pe )
    {
      v6 = lex_more(ls);
    }
    else
    {
      v6 = *(unsigned __int8 *)p;
      ls->p = p + 1;
    }
    ls->c = v6;
    if ( (v6 | 0x20) == 120 )
      v3 = 112;
  }
  while ( (lj_char_bits[v6 + 1] & 0x80u) != 0 || v6 == 46 || ((v6 - 43) & 0xFFFFFFFD) == 0 && (c | 0x20) == v3 )
  {
    c = v6;
    if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
      ptr64 = j_lj_buf_more2(&ls->sb, 1u);
    else
      ptr64 = (char *)ls->sb.p.ptr64;
    *ptr64 = v6;
    ls->sb.p.ptr64 = (unsigned __int64)(ptr64 + 1);
    v10 = ls->p;
    if ( v10 >= ls->pe )
    {
      v6 = lex_more(ls);
    }
    else
    {
      v6 = *(unsigned __int8 *)v10;
      ls->p = v10 + 1;
    }
    ls->c = v6;
  }
  if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
    v11 = j_lj_buf_more2(&ls->sb, 1u);
  else
    v11 = (char *)ls->sb.p.ptr64;
  *v11 = 0;
  ls->sb.p.ptr64 = (unsigned __int64)(v11 + 1);
  v12 = j_lj_strscan_scan((const unsigned __int8 *)ls->sb.b.ptr64, tv, 2u);
  if ( v12 != STRSCAN_NUM )
  {
    my_lua_assert_0(v12 == STRSCAN_ERROR, "c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lex.c", 130, "fmt == STRSCAN_ERROR", "fmt == STRSCAN_ERROR");
    j_lj_lex_error(ls, 286, LJ_ERR_XNUMBER);
  }
}

/*
==============
lex_scan
==============
*/
__int64 lex_scan(LexState *ls, TValue *tv)
{
  __int64 c; 
  const char *p; 
  int v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  int i; 
  int v11; 
  const char *v12; 
  char *v13; 
  __int64 result; 
  int v15; 
  const char *v16; 
  int v17; 
  const char *v18; 
  int v19; 
  const char *v20; 
  int v21; 
  const char *v22; 
  int v23; 
  const char *v24; 
  int v25; 
  const char *v26; 
  int v27; 
  const char *v28; 
  int v29; 
  const char *v30; 
  int v31; 
  const char *v32; 
  int v33; 
  const char *v34; 
  int v35; 
  char *ptr64; 
  const char *v37; 
  int v38; 
  const char *v39; 
  int v40; 
  const char *v41; 
  int v42; 
  const char *v43; 
  int v44; 
  const char *v45; 
  unsigned __int64 v46; 
  lua_State *L; 
  GCstr *v48; 
  __int64 v49; 
  unsigned __int8 reserved; 

  ls->sb.p.ptr64 = ls->sb.b.ptr64;
  c = ls->c;
  if ( (lj_char_bits[c + 1] & 0x80u) == 0 )
  {
    while ( 1 )
    {
      switch ( (int)c )
      {
        case -1:
          return 289i64;
        case 9:
        case 11:
        case 12:
        case 32:
          p = ls->p;
          if ( p >= ls->pe )
          {
            ls->c = lex_more(ls);
          }
          else
          {
            v6 = *(unsigned __int8 *)p;
            ls->p = p + 1;
            ls->c = v6;
          }
          goto LABEL_25;
        case 10:
        case 13:
          lex_newline(ls);
          goto LABEL_25;
        case 34:
        case 39:
          lex_string(ls, tv);
          return 288i64;
        case 45:
          v7 = ls->p;
          if ( v7 >= ls->pe )
          {
            v8 = lex_more(ls);
          }
          else
          {
            v8 = *(unsigned __int8 *)v7;
            ls->p = v7 + 1;
          }
          ls->c = v8;
          if ( v8 != 45 )
            return 45i64;
          v9 = ls->p;
          if ( v9 >= ls->pe )
          {
            i = lex_more(ls);
          }
          else
          {
            i = *(unsigned __int8 *)v9;
            ls->p = v9 + 1;
          }
          ls->c = i;
          if ( i != 91 )
            goto LABEL_18;
          v11 = lex_skipeq(ls);
          ls->sb.p.ptr64 = ls->sb.b.ptr64;
          if ( v11 < 0 )
          {
LABEL_18:
            for ( i = ls->c; i != 10; ls->c = i )
            {
              if ( i == 13 || i == -1 )
                break;
              v12 = ls->p;
              if ( v12 >= ls->pe )
              {
                i = lex_more(ls);
              }
              else
              {
                i = *(unsigned __int8 *)v12;
                ls->p = v12 + 1;
              }
            }
          }
          else
          {
            lex_longstring(ls, NULL, v11);
            ls->sb.p.ptr64 = ls->sb.b.ptr64;
          }
LABEL_25:
          c = ls->c;
          if ( (lj_char_bits[c + 1] & 0x80u) != 0 )
            goto LABEL_26;
          break;
        case 46:
          if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
            ptr64 = j_lj_buf_more2(&ls->sb, 1u);
          else
            ptr64 = (char *)ls->sb.p.ptr64;
          *ptr64 = c;
          ls->sb.p.ptr64 = (unsigned __int64)(ptr64 + 1);
          v37 = ls->p;
          if ( v37 >= ls->pe )
          {
            v38 = lex_more(ls);
          }
          else
          {
            v38 = *(unsigned __int8 *)v37;
            ls->p = v37 + 1;
          }
          ls->c = v38;
          if ( v38 == 46 )
          {
            v39 = ls->p;
            if ( v39 >= ls->pe )
            {
              v40 = lex_more(ls);
            }
            else
            {
              v40 = *(unsigned __int8 *)v39;
              ls->p = v39 + 1;
            }
            ls->c = v40;
            if ( v40 == 46 )
            {
              v41 = ls->p;
              if ( v41 >= ls->pe )
              {
                ls->c = lex_more(ls);
                return 280i64;
              }
              else
              {
                v42 = *(unsigned __int8 *)v41;
                ls->p = v41 + 1;
                result = 280i64;
                ls->c = v42;
              }
            }
            else
            {
              return 279i64;
            }
          }
          else
          {
            if ( (lj_char_bits[v38 + 1] & 8) != 0 )
              goto LABEL_109;
            return 46i64;
          }
          return result;
        case 58:
          v32 = ls->p;
          if ( v32 >= ls->pe )
          {
            v33 = lex_more(ls);
          }
          else
          {
            v33 = *(unsigned __int8 *)v32;
            ls->p = v32 + 1;
          }
          ls->c = v33;
          if ( v33 != 58 )
            return 58i64;
          v34 = ls->p;
          if ( v34 >= ls->pe )
          {
            ls->c = lex_more(ls);
            return 285i64;
          }
          else
          {
            v35 = *(unsigned __int8 *)v34;
            ls->p = v34 + 1;
            result = 285i64;
            ls->c = v35;
          }
          return result;
        case 60:
          v20 = ls->p;
          if ( v20 >= ls->pe )
          {
            v21 = lex_more(ls);
          }
          else
          {
            v21 = *(unsigned __int8 *)v20;
            ls->p = v20 + 1;
          }
          ls->c = v21;
          if ( v21 != 61 )
            return 60i64;
          v22 = ls->p;
          if ( v22 >= ls->pe )
          {
            ls->c = lex_more(ls);
            return 283i64;
          }
          else
          {
            v23 = *(unsigned __int8 *)v22;
            ls->p = v22 + 1;
            result = 283i64;
            ls->c = v23;
          }
          return result;
        case 61:
          v16 = ls->p;
          if ( v16 >= ls->pe )
          {
            v17 = lex_more(ls);
          }
          else
          {
            v17 = *(unsigned __int8 *)v16;
            ls->p = v16 + 1;
          }
          ls->c = v17;
          if ( v17 != 61 )
            return 61i64;
          v18 = ls->p;
          if ( v18 >= ls->pe )
          {
            ls->c = lex_more(ls);
            return 281i64;
          }
          else
          {
            v19 = *(unsigned __int8 *)v18;
            ls->p = v18 + 1;
            result = 281i64;
            ls->c = v19;
          }
          return result;
        case 62:
          v24 = ls->p;
          if ( v24 >= ls->pe )
          {
            v25 = lex_more(ls);
          }
          else
          {
            v25 = *(unsigned __int8 *)v24;
            ls->p = v24 + 1;
          }
          ls->c = v25;
          if ( v25 != 61 )
            return 62i64;
          v26 = ls->p;
          if ( v26 >= ls->pe )
          {
            ls->c = lex_more(ls);
            return 282i64;
          }
          else
          {
            v27 = *(unsigned __int8 *)v26;
            ls->p = v26 + 1;
            result = 282i64;
            ls->c = v27;
          }
          return result;
        case 91:
          v15 = lex_skipeq(ls);
          if ( v15 < 0 )
          {
            if ( v15 != -1 )
              j_lj_lex_error(ls, 288, LJ_ERR_XLDELIM);
            return 91i64;
          }
          else
          {
            lex_longstring(ls, tv, v15);
            return 288i64;
          }
        case 126:
          v28 = ls->p;
          if ( v28 >= ls->pe )
          {
            v29 = lex_more(ls);
          }
          else
          {
            v29 = *(unsigned __int8 *)v28;
            ls->p = v28 + 1;
          }
          ls->c = v29;
          if ( v29 != 61 )
            return 126i64;
          v30 = ls->p;
          if ( v30 >= ls->pe )
          {
            ls->c = lex_more(ls);
            return 284i64;
          }
          else
          {
            v31 = *(unsigned __int8 *)v30;
            ls->p = v30 + 1;
            result = 284i64;
            ls->c = v31;
          }
          return result;
        default:
          v43 = ls->p;
          if ( v43 >= ls->pe )
          {
            ls->c = lex_more(ls);
            return (unsigned int)c;
          }
          else
          {
            v44 = *(unsigned __int8 *)v43;
            ls->p = v43 + 1;
            result = (unsigned int)c;
            ls->c = v44;
          }
          return result;
      }
    }
  }
LABEL_26:
  if ( (lj_char_bits[(int)c + 1] & 8) != 0 )
  {
LABEL_109:
    lex_number(ls, tv);
    return 286i64;
  }
  else
  {
    do
    {
      if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
        v13 = j_lj_buf_more2(&ls->sb, 1u);
      else
        v13 = (char *)ls->sb.p.ptr64;
      *v13 = c;
      ls->sb.p.ptr64 = (unsigned __int64)(v13 + 1);
      v45 = ls->p;
      if ( v45 >= ls->pe )
      {
        LODWORD(c) = lex_more(ls);
      }
      else
      {
        LODWORD(c) = *(unsigned __int8 *)v45;
        ls->p = v45 + 1;
      }
      ls->c = c;
    }
    while ( (lj_char_bits[(int)c + 1] & 0x80u) != 0 );
    v46 = (unsigned __int64)j_lj_parse_keepstr(ls, (const char *)ls->sb.b.ptr64, (unsigned int)(LODWORD(ls->sb.p.ptr64) - LODWORD(ls->sb.b.ptr64)));
    L = ls->L;
    v48 = (GCstr *)v46;
    tv->u64 = v46 | 0xFFFD800000000000ui64;
    v49 = (__int64)(v46 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v49 + 4) > 0xFFFFFFF6 && (~(_DWORD)v49 != *(unsigned __int8 *)((v46 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v46 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
    reserved = v48->reserved;
    if ( reserved )
      return (unsigned int)reserved + 256;
    else
      return 287i64;
  }
}

/*
==============
lex_skipeq
==============
*/
__int64 lex_skipeq(LexState *ls)
{
  int c; 
  unsigned int v2; 
  int v4; 
  char *v5; 
  const char *p; 

  c = ls->c;
  v2 = 0;
  if ( ((c - 91) & 0xFFFFFFFD) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lex.c", 140, "s == '[' || s == ']'") )
    __debugbreak();
  v4 = ls->c;
  while ( 1 )
  {
    v5 = LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) ? j_lj_buf_more2(&ls->sb, 1u) : (char *)ls->sb.p.ptr64;
    *v5 = v4;
    ls->sb.p.ptr64 = (unsigned __int64)(v5 + 1);
    p = ls->p;
    if ( p >= ls->pe )
    {
      v4 = lex_more(ls);
    }
    else
    {
      v4 = *(unsigned __int8 *)p;
      ls->p = p + 1;
    }
    ls->c = v4;
    if ( v4 != 61 )
      break;
    ++v2;
  }
  if ( v4 != c )
    return ~v2;
  return v2;
}

/*
==============
lex_string
==============
*/
void lex_string(LexState *ls, TValue *tv)
{
  int c; 
  char *ptr64; 
  const char *p; 
  int v7; 
  char *v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  const char *v12; 
  int v13; 
  char v14; 
  unsigned __int8 v15; 
  const char *v16; 
  int v17; 
  unsigned __int8 v18; 
  const char *v19; 
  int v20; 
  const char *v21; 
  int v22; 
  unsigned __int8 v23; 
  const char *v24; 
  char *v25; 
  char v26; 
  char *v27; 
  char *v28; 
  char v29; 
  const char *v30; 
  int v31; 
  const char *v32; 
  char *v33; 
  const char *v34; 
  int v35; 
  int v36; 
  const char *v37; 
  int v38; 
  const char *v39; 
  int v40; 
  char *v41; 
  char *v42; 
  const char *v43; 
  int v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  lua_State *L; 
  __int64 v49; 

  c = ls->c;
  if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
    ptr64 = j_lj_buf_more2(&ls->sb, 1u);
  else
    ptr64 = (char *)ls->sb.p.ptr64;
  *ptr64 = c;
  ls->sb.p.ptr64 = (unsigned __int64)(ptr64 + 1);
  p = ls->p;
  if ( p >= ls->pe )
  {
    v7 = lex_more(ls);
  }
  else
  {
    v7 = *(unsigned __int8 *)p;
    ls->p = p + 1;
  }
  ls->c = v7;
  while ( v7 != c )
  {
    if ( v7 == -1 )
      j_lj_lex_error(ls, 289, LJ_ERR_XSTR);
    if ( v7 == 10 || v7 == 13 )
      j_lj_lex_error(ls, 288, LJ_ERR_XSTR);
    if ( v7 != 92 )
      goto $LN44_73;
    v11 = ls->p;
    if ( v11 >= ls->pe )
    {
      v7 = lex_more(ls);
    }
    else
    {
      v7 = *(unsigned __int8 *)v11;
      ls->p = v11 + 1;
    }
    ls->c = v7;
    switch ( v7 )
    {
      case -1:
        goto $LN228_1;
      case 10:
      case 13:
        if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
          v33 = j_lj_buf_more2(&ls->sb, 1u);
        else
          v33 = (char *)ls->sb.p.ptr64;
        *v33 = 10;
        ls->sb.p.ptr64 = (unsigned __int64)(v33 + 1);
        lex_newline(ls);
        goto $LN228_1;
      case 34:
      case 39:
      case 92:
        goto $LN44_73;
      case 97:
        LOBYTE(v7) = 7;
        goto $LN44_73;
      case 98:
        LOBYTE(v7) = 8;
        goto $LN44_73;
      case 102:
        LOBYTE(v7) = 12;
        goto $LN44_73;
      case 110:
        LOBYTE(v7) = 10;
        goto $LN44_73;
      case 114:
        LOBYTE(v7) = 13;
        goto $LN44_73;
      case 116:
        LOBYTE(v7) = 9;
        goto $LN44_73;
      case 117:
        v19 = ls->p;
        if ( v19 >= ls->pe )
        {
          v20 = lex_more(ls);
        }
        else
        {
          v20 = *(unsigned __int8 *)v19;
          ls->p = v19 + 1;
        }
        ls->c = v20;
        if ( v20 != 123 )
          goto $err_xesc;
        v21 = ls->p;
        if ( v21 >= ls->pe )
        {
          v22 = lex_more(ls);
        }
        else
        {
          v22 = *(unsigned __int8 *)v21;
          ls->p = v21 + 1;
        }
        ls->c = v22;
        v7 = 0;
        break;
      case 118:
        LOBYTE(v7) = 11;
        goto $LN44_73;
      case 120:
        v12 = ls->p;
        if ( v12 >= ls->pe )
        {
          v13 = lex_more(ls);
        }
        else
        {
          v13 = *(unsigned __int8 *)v12;
          ls->p = v12 + 1;
        }
        ls->c = v13;
        v14 = 16 * (v13 & 0xF);
        v15 = lj_char_bits[v13 + 1];
        if ( (v15 & 8) != 0 )
          goto LABEL_35;
        if ( (v15 & 0x10) == 0 )
          goto $err_xesc;
        v14 -= 112;
LABEL_35:
        v16 = ls->p;
        if ( v16 >= ls->pe )
        {
          v17 = lex_more(ls);
        }
        else
        {
          v17 = *(unsigned __int8 *)v16;
          ls->p = v16 + 1;
        }
        ls->c = v17;
        LOBYTE(v7) = (v17 & 0xF) + v14;
        v18 = lj_char_bits[v17 + 1];
        if ( (v18 & 8) != 0 )
          goto $LN44_73;
        if ( (v18 & 0x10) == 0 )
          goto $err_xesc;
        LOBYTE(v7) = v7 + 9;
        goto $LN44_73;
      case 122:
        v30 = ls->p;
        if ( v30 >= ls->pe )
        {
          v31 = lex_more(ls);
        }
        else
        {
          v31 = *(unsigned __int8 *)v30;
          ls->p = v30 + 1;
        }
        ls->c = v31;
        while ( (lj_char_bits[v31 + 1] & 2) != 0 )
        {
          if ( v31 == 10 || v31 == 13 )
          {
            lex_newline(ls);
            v31 = ls->c;
          }
          else
          {
            v32 = ls->p;
            if ( v32 >= ls->pe )
            {
              v31 = lex_more(ls);
            }
            else
            {
              v31 = *(unsigned __int8 *)v32;
              ls->p = v32 + 1;
            }
            ls->c = v31;
          }
        }
        goto $LN228_1;
      default:
        if ( (lj_char_bits[v7 + 1] & 8) == 0 )
          goto $err_xesc;
        v34 = ls->p;
        v35 = v7 - 48;
        if ( v34 >= ls->pe )
        {
          v36 = lex_more(ls);
        }
        else
        {
          v36 = *(unsigned __int8 *)v34;
          ls->p = v34 + 1;
        }
        ls->c = v36;
        if ( (lj_char_bits[v36 + 1] & 8) == 0 )
          goto LABEL_111;
        v37 = ls->p;
        v35 = v36 + 10 * v35 - 48;
        if ( v37 >= ls->pe )
        {
          v38 = lex_more(ls);
        }
        else
        {
          v38 = *(unsigned __int8 *)v37;
          ls->p = v37 + 1;
        }
        ls->c = v38;
        if ( (lj_char_bits[v38 + 1] & 8) == 0 )
          goto LABEL_111;
        v35 = v38 + 10 * v35 - 48;
        if ( v35 > 255 )
          goto $err_xesc;
        v39 = ls->p;
        if ( v39 >= ls->pe )
        {
          v40 = lex_more(ls);
        }
        else
        {
          v40 = *(unsigned __int8 *)v39;
          ls->p = v39 + 1;
        }
        ls->c = v40;
LABEL_111:
        if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
          v41 = j_lj_buf_more2(&ls->sb, 1u);
        else
          v41 = (char *)ls->sb.p.ptr64;
        *v41 = v35;
        ls->sb.p.ptr64 = (unsigned __int64)(v41 + 1);
        goto $LN228_1;
    }
    do
    {
      v7 = (16 * v7) | v22 & 0xF;
      v23 = lj_char_bits[v22 + 1];
      if ( (v23 & 8) == 0 )
      {
        if ( (v23 & 0x10) == 0 )
          goto $err_xesc;
        v7 += 9;
      }
      if ( v7 >= 1114112 )
        goto $err_xesc;
      v24 = ls->p;
      if ( v24 >= ls->pe )
      {
        v22 = lex_more(ls);
      }
      else
      {
        v22 = *(unsigned __int8 *)v24;
        ls->p = v24 + 1;
      }
      ls->c = v22;
    }
    while ( v22 != 125 );
    if ( v7 >= 2048 )
    {
      if ( v7 < 0x10000 )
      {
        if ( (unsigned int)(v7 - 55296) <= 0x7FF )
$err_xesc:
          j_lj_lex_error(ls, 288, LJ_ERR_XESC);
        if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
          v28 = j_lj_buf_more2(&ls->sb, 1u);
        else
          v28 = (char *)ls->sb.p.ptr64;
        v29 = (v7 >> 12) | 0xE0;
      }
      else
      {
        if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
          v27 = j_lj_buf_more2(&ls->sb, 1u);
        else
          v27 = (char *)ls->sb.p.ptr64;
        *v27 = (v7 >> 18) | 0xF0;
        v28 = v27 + 1;
        ls->sb.p.ptr64 = (unsigned __int64)v28;
        if ( LODWORD(ls->sb.e.ptr64) == (_DWORD)v28 )
          v28 = j_lj_buf_more2(&ls->sb, 1u);
        v29 = (v7 >> 12) & 0x3F | 0x80;
      }
      *v28 = v29;
      ls->sb.p.ptr64 = (unsigned __int64)(v28 + 1);
      if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
        v25 = j_lj_buf_more2(&ls->sb, 1u);
      else
        v25 = (char *)ls->sb.p.ptr64;
      v26 = (v7 >> 6) & 0x3F | 0x80;
    }
    else
    {
      if ( v7 < 128 )
        goto $LN44_73;
      if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
        v25 = j_lj_buf_more2(&ls->sb, 1u);
      else
        v25 = (char *)ls->sb.p.ptr64;
      v26 = (v7 >> 6) | 0xC0;
    }
    *v25 = v26;
    LOBYTE(v7) = v7 & 0x3F | 0x80;
    ls->sb.p.ptr64 = (unsigned __int64)(v25 + 1);
$LN44_73:
    if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
      v8 = j_lj_buf_more2(&ls->sb, 1u);
    else
      v8 = (char *)ls->sb.p.ptr64;
    *v8 = v7;
    ls->sb.p.ptr64 = (unsigned __int64)(v8 + 1);
    v9 = ls->p;
    if ( v9 >= ls->pe )
    {
      ls->c = lex_more(ls);
    }
    else
    {
      v10 = *(unsigned __int8 *)v9;
      ls->p = v9 + 1;
      ls->c = v10;
    }
$LN228_1:
    v7 = ls->c;
  }
  if ( LODWORD(ls->sb.e.ptr64) == LODWORD(ls->sb.p.ptr64) )
    v42 = j_lj_buf_more2(&ls->sb, 1u);
  else
    v42 = (char *)ls->sb.p.ptr64;
  *v42 = v7;
  ls->sb.p.ptr64 = (unsigned __int64)(v42 + 1);
  v43 = ls->p;
  if ( v43 >= ls->pe )
  {
    v44 = lex_more(ls);
  }
  else
  {
    v44 = *(unsigned __int8 *)v43;
    ls->p = v43 + 1;
  }
  v45 = ls->sb.b.ptr64;
  v46 = (unsigned int)(LODWORD(ls->sb.p.ptr64) - LODWORD(ls->sb.b.ptr64) - 2);
  ls->c = v44;
  v47 = (unsigned __int64)j_lj_parse_keepstr(ls, (const char *)(v45 + 1), v46);
  L = ls->L;
  tv->u64 = v47 | 0xFFFD800000000000ui64;
  v49 = (__int64)(v47 | 0xFFFD800000000000ui64) >> 47;
  if ( (unsigned int)(v49 + 4) > 0xFFFFFFF6 && (~(_DWORD)v49 != *(unsigned __int8 *)((v47 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v47 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
}

