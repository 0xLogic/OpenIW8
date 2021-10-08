/*
==============
yy_load_buffer_state
==============
*/

void yy_load_buffer_state(void)
{
  ?yy_load_buffer_state@@YAXXZ();
}

/*
==============
yy_switch_to_buffer
==============
*/

void __fastcall yy_switch_to_buffer(yy_buffer_state *new_buffer)
{
  ?yy_switch_to_buffer@@YAXPEAUyy_buffer_state@@@Z(new_buffer);
}

/*
==============
yy_flush_buffer
==============
*/

void __fastcall yy_flush_buffer(yy_buffer_state *b)
{
  ?yy_flush_buffer@@YAXPEAUyy_buffer_state@@@Z(b);
}

/*
==============
yy_create_buffer
==============
*/

yy_buffer_state *__fastcall yy_create_buffer(_iobuf *file, int size)
{
  return ?yy_create_buffer@@YAPEAUyy_buffer_state@@PEAU_iobuf@@H@Z(file, size);
}

/*
==============
yy_scan_bytes
==============
*/

yy_buffer_state *__fastcall yy_scan_bytes(const char *bytes, int len)
{
  return ?yy_scan_bytes@@YAPEAUyy_buffer_state@@PEBDH@Z(bytes, len);
}

/*
==============
yy_scan_string
==============
*/

yy_buffer_state *__fastcall yy_scan_string(const char *yy_str)
{
  return ?yy_scan_string@@YAPEAUyy_buffer_state@@PEBD@Z(yy_str);
}

/*
==============
yy_scan_buffer
==============
*/

yy_buffer_state *__fastcall yy_scan_buffer(char *base, unsigned int size)
{
  return ?yy_scan_buffer@@YAPEAUyy_buffer_state@@PEADI@Z(base, size);
}

/*
==============
yy_delete_buffer
==============
*/

void __fastcall yy_delete_buffer(yy_buffer_state *b)
{
  ?yy_delete_buffer@@YAXPEAUyy_buffer_state@@@Z(b);
}

/*
==============
yyrestart
==============
*/

void __fastcall yyrestart(_iobuf *input_file)
{
  ?yyrestart@@YAXPEAU_iobuf@@@Z(input_file);
}

/*
==============
yy_init_buffer
==============
*/

void __fastcall yy_init_buffer(yy_buffer_state *b, _iobuf *file)
{
  ?yy_init_buffer@@YAXPEAUyy_buffer_state@@PEAU_iobuf@@@Z(b, file);
}

/*
==============
yy_create_buffer
==============
*/
yy_buffer_state *yy_create_buffer(_iobuf *file, int size)
{
  yy_buffer_state *v4; 
  yy_buffer_state *v5; 
  char *v6; 

  v4 = (yy_buffer_state *)malloc(0x38ui64);
  v5 = v4;
  if ( !v4 || (v4->yy_buf_size = size, v6 = (char *)malloc((unsigned int)(size + 2)), (v5->yy_ch_buf = v6) == NULL) )
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");
  v5->yy_is_our_buffer = 1;
  yy_init_buffer(v5, file);
  return v5;
}

/*
==============
yy_delete_buffer
==============
*/
void yy_delete_buffer(yy_buffer_state *b)
{
  yy_buffer_state *v1; 

  if ( b )
  {
    v1 = yy_current_buffer;
    if ( b == yy_current_buffer )
      v1 = NULL;
    yy_current_buffer = v1;
    if ( b->yy_is_our_buffer )
      free(b->yy_ch_buf);
    free(b);
  }
}

/*
==============
yy_fatal_error
==============
*/
void __noreturn yy_fatal_error(const char *msg)
{
  _iobuf *v2; 

  v2 = __acrt_iob_func(2u);
  j_fprintf(v2, "%s\n", msg);
  exit(2);
}

/*
==============
yy_flush_buffer
==============
*/
void yy_flush_buffer(yy_buffer_state *b)
{
  char *yy_ch_buf; 
  yy_buffer_state *v2; 
  int yy_n_chars; 

  if ( b )
  {
    b->yy_n_chars = 0;
    *b->yy_ch_buf = 0;
    b->yy_ch_buf[1] = 0;
    yy_ch_buf = b->yy_ch_buf;
    b->yy_buffer_status = 0;
    v2 = yy_current_buffer;
    b->yy_buf_pos = yy_ch_buf;
    b->yy_at_bol = 1;
    if ( b == v2 )
    {
      yy_n_chars = v2->yy_n_chars;
      yytext = v2->yy_buf_pos;
      ::yy_n_chars = yy_n_chars;
      yyin = v2->yy_input_file;
      yy_hold_char = *yytext;
      yy_c_buf_p = yytext;
    }
  }
}

/*
==============
yy_get_next_buffer
==============
*/
__int64 yy_get_next_buffer()
{
  yy_buffer_state *v0; 
  char *v1; 
  char *v2; 
  char *yy_ch_buf; 
  int v5; 
  __int64 v6; 
  char v7; 
  unsigned int v8; 
  int v9; 
  int i; 
  int v11; 
  void **p_yy_ch_buf; 
  unsigned int yy_buf_size; 
  int v14; 
  char *v15; 
  int v16; 
  char *v17; 
  int v18; 

  v0 = yy_current_buffer;
  LODWORD(v1) = (_DWORD)yy_c_buf_p;
  v2 = yytext;
  yy_ch_buf = yy_current_buffer->yy_ch_buf;
  if ( yy_c_buf_p > &yy_ch_buf[yy_n_chars + 1] )
    yy_fatal_error("fatal flex scanner internal error--end of buffer missed");
  if ( !yy_current_buffer->yy_fill_buffer )
    return (unsigned int)(yy_c_buf_p - yytext != 1) + 1;
  v5 = (_DWORD)yy_c_buf_p - (_DWORD)yytext - 1;
  if ( v5 > 0 )
  {
    v6 = (unsigned int)v5;
    do
    {
      v7 = *v2++;
      *yy_ch_buf++ = v7;
      --v6;
    }
    while ( v6 );
  }
  v8 = 0;
  if ( v0->yy_buffer_status == 2 )
  {
    v9 = 0;
    v0->yy_n_chars = 0;
    yy_n_chars = 0;
  }
  else
  {
    for ( i = v0->yy_buf_size - v5 - 1; i <= 0; yy_c_buf_p = v1 )
    {
      v11 = (_DWORD)v1 - LODWORD(v0->yy_ch_buf);
      p_yy_ch_buf = (void **)&v0->yy_ch_buf;
      if ( v0->yy_is_our_buffer )
      {
        yy_buf_size = v0->yy_buf_size;
        if ( (int)(2 * yy_buf_size) > 0 )
          v14 = 2 * yy_buf_size;
        else
          v14 = yy_buf_size + (yy_buf_size >> 3);
        v0->yy_buf_size = v14;
        v15 = (char *)realloc(*p_yy_ch_buf, (unsigned int)(v14 + 2));
        v0 = yy_current_buffer;
      }
      else
      {
        v15 = NULL;
      }
      *p_yy_ch_buf = v15;
      if ( !v15 )
        yy_fatal_error("fatal error - scanner input buffer overflow");
      v1 = &v15[v11];
      i = v0->yy_buf_size - v5 - 1;
    }
    if ( i > 0x2000 )
      i = 0x2000;
    v16 = Scr_ScanFile(g_pScrCompileContext, &v0->yy_ch_buf[v5], i);
    v0 = yy_current_buffer;
    v9 = v16;
    yy_n_chars = v16;
    yy_current_buffer->yy_n_chars = v16;
    if ( v16 )
      goto LABEL_24;
  }
  if ( v5 )
  {
    v8 = 2;
    v0->yy_buffer_status = 2;
  }
  else
  {
    v8 = 1;
    yyrestart(yyin);
    v0 = yy_current_buffer;
    v9 = yy_n_chars;
  }
LABEL_24:
  v17 = v0->yy_ch_buf;
  v18 = v5 + v9;
  yy_n_chars = v18;
  v17[v18] = 0;
  v0->yy_ch_buf[v18 + 1] = 0;
  yytext = v0->yy_ch_buf;
  return v8;
}

/*
==============
yy_get_previous_state
==============
*/
__int64 yy_get_previous_state()
{
  char *v0; 
  __int64 result; 
  unsigned __int8 v2; 
  __int64 v3; 

  v0 = yytext;
  for ( result = (unsigned int)yy_start; v0 < yy_c_buf_p; result = (unsigned int)yy_nxt[yy_base[(int)result] + v2] )
  {
    if ( *v0 )
      v2 = yy_ec[(unsigned __int8)*v0];
    else
      v2 = 1;
    v3 = (int)result;
    if ( yy_accept[v3] )
    {
      yy_last_accepting_state = result;
      yy_last_accepting_cpos = v0;
    }
    if ( yy_chk[v2 + yy_base[v3]] != (_DWORD)result )
    {
      do
      {
        result = yy_def[v3];
        if ( (int)result >= 320 )
          v2 = yy_meta[v2];
        v3 = result;
      }
      while ( yy_chk[v2 + yy_base[result]] != (_DWORD)result );
    }
    ++v0;
  }
  return result;
}

/*
==============
yy_init_buffer
==============
*/
void yy_init_buffer(yy_buffer_state *b, _iobuf *file)
{
  yy_buffer_state *v3; 
  int yy_n_chars; 

  if ( b )
  {
    v3 = yy_current_buffer;
    b->yy_n_chars = 0;
    *b->yy_ch_buf = 0;
    b->yy_ch_buf[1] = 0;
    b->yy_buf_pos = b->yy_ch_buf;
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    if ( b == v3 )
    {
      yy_n_chars = v3->yy_n_chars;
      yytext = v3->yy_buf_pos;
      ::yy_n_chars = yy_n_chars;
      yyin = v3->yy_input_file;
      yy_hold_char = *yytext;
      yy_c_buf_p = yytext;
    }
  }
  b->yy_input_file = file;
  b->yy_fill_buffer = 1;
  b->yy_is_interactive = 0;
}

/*
==============
yy_load_buffer_state
==============
*/
void yy_load_buffer_state(void)
{
  int yy_n_chars; 

  yy_n_chars = yy_current_buffer->yy_n_chars;
  yytext = yy_current_buffer->yy_buf_pos;
  ::yy_n_chars = yy_n_chars;
  yyin = yy_current_buffer->yy_input_file;
  yy_hold_char = *yytext;
  yy_c_buf_p = yytext;
}

/*
==============
yy_scan_buffer
==============
*/
yy_buffer_state *yy_scan_buffer(char *base, unsigned int size)
{
  __int64 v3; 
  _DWORD *v4; 
  _DWORD *v5; 

  if ( size < 2 )
    return 0i64;
  v3 = size - 2;
  if ( base[v3] || base[size - 1] )
    return 0i64;
  v4 = malloc(0x38ui64);
  v5 = v4;
  if ( !v4 )
    yy_fatal_error("out of dynamic memory in yy_scan_buffer()");
  v4[6] = v3;
  *((_QWORD *)v4 + 1) = base;
  *((_QWORD *)v4 + 2) = base;
  *((_QWORD *)v4 + 4) = 0i64;
  *(_QWORD *)v4 = 0i64;
  v4[12] = 0;
  v4[7] = v3;
  *((_QWORD *)v4 + 5) = 1i64;
  yy_switch_to_buffer((yy_buffer_state *)v4);
  return (yy_buffer_state *)v5;
}

/*
==============
yy_scan_bytes
==============
*/
yy_buffer_state *yy_scan_bytes(const char *bytes, int len)
{
  __int64 v2; 
  unsigned int v4; 
  char *v5; 
  char *v6; 
  char *v7; 
  const char *v8; 
  __int64 v9; 
  yy_buffer_state *v10; 
  yy_buffer_state *v11; 
  yy_buffer_state *result; 

  v2 = len;
  v4 = len + 2;
  v5 = (char *)malloc((unsigned int)(len + 2));
  v6 = v5;
  if ( !v5 )
    yy_fatal_error("out of dynamic memory in yy_scan_bytes()");
  if ( (int)v2 > 0 )
  {
    v7 = v5;
    v8 = (const char *)(bytes - v5);
    v9 = v2;
    do
    {
      *v7 = v7[(_QWORD)v8];
      ++v7;
      --v9;
    }
    while ( v9 );
  }
  *(_WORD *)&v5[v2] = 0;
  if ( v4 < 2 || v5[v4 - 2] || v5[v4 - 1] )
    yy_fatal_error("bad buffer in yy_scan_bytes()");
  v10 = (yy_buffer_state *)malloc(0x38ui64);
  v11 = v10;
  if ( !v10 )
    yy_fatal_error("out of dynamic memory in yy_scan_buffer()");
  v10->yy_buf_size = v2;
  v10->yy_ch_buf = v6;
  v10->yy_buf_pos = v6;
  *(_QWORD *)&v10->yy_is_our_buffer = 0i64;
  v10->yy_input_file = NULL;
  v10->yy_buffer_status = 0;
  v10->yy_n_chars = v2;
  *(_QWORD *)&v10->yy_at_bol = 1i64;
  yy_switch_to_buffer(v10);
  result = v11;
  v11->yy_is_our_buffer = 1;
  return result;
}

/*
==============
yy_scan_string
==============
*/
yy_buffer_state *yy_scan_string(const char *yy_str)
{
  int v2; 
  const char *v3; 
  char *v4; 
  char *v5; 
  char *v6; 
  const char *v7; 
  __int64 v8; 
  yy_buffer_state *v9; 
  yy_buffer_state *v10; 
  yy_buffer_state *result; 

  v2 = 0;
  if ( *yy_str )
  {
    v3 = yy_str;
    do
    {
      ++v2;
      ++v3;
    }
    while ( *v3 );
  }
  v4 = (char *)malloc((unsigned int)(v2 + 2));
  v5 = v4;
  if ( !v4 )
    yy_fatal_error("out of dynamic memory in yy_scan_bytes()");
  if ( v2 > 0 )
  {
    v6 = v4;
    v7 = (const char *)(yy_str - v4);
    v8 = v2;
    do
    {
      *v6 = v6[(_QWORD)v7];
      ++v6;
      --v8;
    }
    while ( v8 );
  }
  *(_WORD *)&v4[v2] = 0;
  if ( (unsigned int)(v2 + 2) < 2 || v4[v2] || v4[v2 + 1] )
    yy_fatal_error("bad buffer in yy_scan_bytes()");
  v9 = (yy_buffer_state *)malloc(0x38ui64);
  v10 = v9;
  if ( !v9 )
    yy_fatal_error("out of dynamic memory in yy_scan_buffer()");
  v9->yy_buf_size = v2;
  v9->yy_ch_buf = v5;
  v9->yy_buf_pos = v5;
  *(_QWORD *)&v9->yy_is_our_buffer = 0i64;
  v9->yy_input_file = NULL;
  v9->yy_n_chars = v2;
  *(_QWORD *)&v9->yy_at_bol = 1i64;
  v9->yy_buffer_status = 0;
  yy_switch_to_buffer(v9);
  result = v10;
  v10->yy_is_our_buffer = 1;
  return result;
}

/*
==============
yy_switch_to_buffer
==============
*/
void yy_switch_to_buffer(yy_buffer_state *new_buffer)
{
  yy_buffer_state *v2; 
  char *v3; 
  int yy_n_chars; 

  v2 = yy_current_buffer;
  if ( yy_current_buffer != new_buffer )
  {
    if ( yy_current_buffer )
    {
      v3 = yy_c_buf_p;
      *yy_c_buf_p = yy_hold_char;
      v2->yy_n_chars = ::yy_n_chars;
      v2->yy_buf_pos = v3;
    }
    yy_n_chars = new_buffer->yy_n_chars;
    yytext = new_buffer->yy_buf_pos;
    ::yy_n_chars = yy_n_chars;
    yyin = new_buffer->yy_input_file;
    yy_hold_char = *yytext;
    yy_current_buffer = new_buffer;
    yy_c_buf_p = yytext;
    yy_did_buffer_switch_on_eof = 1;
  }
}

/*
==============
yylex
==============
*/
__int64 yylex()
{
  int v0; 
  int v1; 
  _iobuf *v2; 
  yy_buffer_state *buffer; 
  int yy_n_chars; 
  char *yy_buf_pos; 
  char v6; 
  char *v7; 
  __int64 v8; 
  char *v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  int v12; 
  char *v13; 
  char *v14; 
  int v15; 
  int next_buffer; 
  int v17; 
  int v18; 
  int previous_state; 
  unsigned __int8 v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  unsigned int v28; 
  unsigned int v29; 
  char v30; 
  unsigned int v31; 
  char v32; 
  unsigned int v33; 
  unsigned int v34; 
  int result; 

  v0 = 0;
  if ( yy_init )
  {
    v1 = yy_start;
    yy_init = 0;
    if ( !yy_start )
      v1 = 1;
    yy_start = v1;
    v2 = yyin;
    if ( !yyin )
    {
      v2 = __acrt_iob_func(0);
      yyin = v2;
    }
    if ( !yyout )
    {
      yyout = __acrt_iob_func(1u);
      v2 = yyin;
    }
    buffer = yy_current_buffer;
    if ( !yy_current_buffer )
    {
      buffer = yy_create_buffer(v2, 0x4000);
      yy_current_buffer = buffer;
    }
    yy_n_chars = buffer->yy_n_chars;
    yy_buf_pos = buffer->yy_buf_pos;
    yytext = yy_buf_pos;
    ::yy_n_chars = yy_n_chars;
    yyin = buffer->yy_input_file;
    v6 = *yy_buf_pos;
  }
  else
  {
    buffer = yy_current_buffer;
    yy_buf_pos = yy_c_buf_p;
    v6 = yy_hold_char;
  }
  while ( 1 )
  {
LABEL_12:
    *yy_buf_pos = v6;
    v7 = yy_buf_pos;
    LODWORD(v8) = yy_start;
    v9 = yy_buf_pos;
    do
    {
$yy_match:
      v10 = yy_ec[(unsigned __int8)*v7];
      v11 = (int)v8;
      if ( yy_accept[v11] )
      {
        yy_last_accepting_state = v8;
        yy_last_accepting_cpos = v7;
      }
      if ( yy_chk[yy_base[v11] + v10] != (_DWORD)v8 )
      {
        do
        {
          v8 = yy_def[v11];
          if ( (int)v8 >= 320 )
            v10 = yy_meta[v10];
          v11 = v8;
        }
        while ( yy_chk[yy_base[v8] + v10] != (_DWORD)v8 );
      }
      ++v7;
      v8 = yy_nxt[yy_base[(int)v8] + v10];
    }
    while ( yy_base[v8] != 799 );
    while ( 2 )
    {
      v12 = yy_accept[(int)v8];
      if ( !yy_accept[(int)v8] )
      {
        v7 = yy_last_accepting_cpos;
        v12 = yy_accept[yy_last_accepting_state];
      }
      yytext = v9;
      yy_c_buf_p = v7;
      yyleng = (_DWORD)v7 - (_DWORD)v9;
      yy_buf_pos = v7;
      v6 = *v7;
      v13 = v7;
      *v7 = 0;
      v14 = yytext;
      yy_hold_char = v6;
$do_action:
      switch ( v12 )
      {
        case 0:
          *v7 = v6;
          v7 = yy_last_accepting_cpos;
          LODWORD(v8) = yy_last_accepting_state;
          continue;
        case 1:
        case 3:
        case 4:
        case 5:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          goto LABEL_12;
        case 2:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          yy_start = 3;
          goto LABEL_12;
        case 6:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          yy_start = 5;
          goto LABEL_12;
        case 7:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          Scr_StartInlineLex(v14 + 7, yyleng - 8);
          if ( ++inline_stack_ptr >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scr_lex.txt", 98, ASSERT_TYPE_ASSERT, "(inline_stack_ptr < 4)", (const char *)&queryFormat, "inline_stack_ptr < MAX_INLINE_DEPTH") )
            __debugbreak();
          SetupYYBufferState();
          yy_switch_to_buffer(&inline_stack[inline_stack_ptr]);
          yy_buf_pos = yy_c_buf_p;
          v6 = yy_hold_char;
          buffer = yy_current_buffer;
          yy_start = 3;
          goto LABEL_12;
        case 8:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          v27 = StringValue(v14 + 1, yyleng - 2);
          v28 = 257;
          v29 = 259;
          goto LABEL_62;
        case 9:
          *v7 = v6;
          yytext = v9;
          yy_c_buf_p = v7 - 1;
          yyleng = (_DWORD)v7 - 1 - (_DWORD)v9;
          v30 = *(v7 - 1);
          *yy_c_buf_p = 0;
          yy_hold_char = v30;
          v31 = g_out_pos;
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          CompileError(g_pScrCompileContext, v31, "unterminated string", v13);
          return 259i64;
        case 10:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          v27 = StringValue(v14 + 2, yyleng - 3);
          v28 = 257;
          v29 = 260;
LABEL_62:
          if ( v27 )
            return v29;
          return v28;
        case 11:
          *v7 = v6;
          yytext = v9;
          yy_c_buf_p = v7 - 1;
          yyleng = (_DWORD)v7 - 1 - (_DWORD)v9;
          v32 = *(v7 - 1);
          *yy_c_buf_p = 0;
          yy_hold_char = v32;
          v33 = g_out_pos;
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          CompileError(g_pScrCompileContext, v33, "unterminated istring", v13);
          return 260i64;
        case 12:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 261i64;
        case 13:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 262i64;
        case 14:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 263i64;
        case 15:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 264i64;
        case 16:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 265i64;
        case 17:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 266i64;
        case 18:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 267i64;
        case 19:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 268i64;
        case 20:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 269i64;
        case 21:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 270i64;
        case 22:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 271i64;
        case 23:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 272i64;
        case 24:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 273i64;
        case 25:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 274i64;
        case 26:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 275i64;
        case 27:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 276i64;
        case 28:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 277i64;
        case 29:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 278i64;
        case 30:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 279i64;
        case 31:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 280i64;
        case 32:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 281i64;
        case 33:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 282i64;
        case 34:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 283i64;
        case 35:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 284i64;
        case 36:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 285i64;
        case 37:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 286i64;
        case 38:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 287i64;
        case 39:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          if ( Scr_ParseIntegerString(v14, &result) )
          {
            v0 = 1;
            yylval.val.type = result;
          }
          else
          {
            CompileError(g_pScrCompileContext, g_sourcePos, "int out of bounds: \"%s\"", v14);
          }
          v28 = 257;
          if ( v0 )
            return 288;
          return v28;
        case 40:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          if ( j_sscanf(v14, "%f", &yylval) == 1 )
          {
            return 289;
          }
          else
          {
            CompileError(g_pScrCompileContext, g_sourcePos, "failed to create float: \"%s\"", v14);
            return 257;
          }
        case 41:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 291i64;
        case 42:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 290i64;
        case 43:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 295i64;
        case 44:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 292i64;
        case 45:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 294i64;
        case 46:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 293i64;
        case 47:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 296i64;
        case 48:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 297i64;
        case 49:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 298i64;
        case 50:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 299i64;
        case 51:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 300i64;
        case 52:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 301i64;
        case 53:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 302i64;
        case 54:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 303i64;
        case 55:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 304i64;
        case 56:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 305i64;
        case 57:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 306i64;
        case 58:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 307i64;
        case 59:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 308i64;
        case 60:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 309i64;
        case 61:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 310i64;
        case 62:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 311i64;
        case 63:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 312i64;
        case 64:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 313i64;
        case 65:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 314i64;
        case 66:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 315i64;
        case 67:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 316i64;
        case 68:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 317i64;
        case 69:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 318i64;
        case 70:
          v26 = 319i64;
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return v26;
        case 71:
          v26 = 320i64;
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return v26;
        case 72:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 321i64;
        case 73:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 322i64;
        case 74:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 323i64;
        case 75:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 324i64;
        case 76:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 325i64;
        case 77:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 326i64;
        case 78:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 327i64;
        case 79:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 328i64;
        case 80:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 329i64;
        case 81:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 331i64;
        case 82:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 332i64;
        case 83:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 333i64;
        case 84:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 334i64;
        case 85:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 335i64;
        case 86:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 336i64;
        case 87:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 337i64;
        case 88:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 338i64;
        case 89:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 339i64;
        case 90:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 340i64;
        case 91:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 341i64;
        case 92:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 342i64;
        case 93:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 343i64;
        case 94:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 346i64;
        case 95:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 347i64;
        case 96:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 348i64;
        case 97:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 344i64;
        case 98:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 345i64;
        case 99:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 349i64;
        case 100:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 350i64;
        case 101:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 351i64;
        case 102:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          return 352i64;
        case 103:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          yylval.val.type = j_SL_GetStringOfSize(v14, 0, yyleng + 1, 16);
          return 353i64;
        case 104:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          yylval.val.type = j_SL_GetStringOfSize(v14, 0, yyleng + 1, 16);
          return 258i64;
        case 105:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          yylval.val.type = j_SL_GetStringOfSize(v14, 0, yyleng + 1, 16);
          return 330i64;
        case 106:
          v34 = g_out_pos;
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          CompileError(g_pScrCompileContext, v34, "bad token '%s'", v14);
          return 257i64;
        case 107:
          yylval.pos = g_out_pos;
          g_sourcePos = g_out_pos;
          g_out_pos += yyleng;
          fwrite(v14, yyleng, 1ui64, yyout);
          goto LABEL_58;
        case 108:
          *v7 = v6;
          v15 = (_DWORD)v7 - (_DWORD)v14 - 1;
          if ( !buffer->yy_buffer_status )
          {
            ::yy_n_chars = buffer->yy_n_chars;
            buffer->yy_input_file = yyin;
            buffer->yy_buffer_status = 1;
          }
          if ( v13 <= &buffer->yy_ch_buf[::yy_n_chars] )
          {
            v9 = yytext;
            v7 = &yytext[v15];
            yy_c_buf_p = v7;
            previous_state = yy_get_previous_state();
            LODWORD(v8) = previous_state;
            v20 = 1;
            LODWORD(v21) = previous_state;
            v22 = previous_state;
            if ( yy_accept[previous_state] )
            {
              yy_last_accepting_state = previous_state;
              yy_last_accepting_cpos = v7;
            }
            if ( yy_chk[yy_base[previous_state] + 1] != previous_state )
            {
              do
              {
                v21 = yy_def[v22];
                if ( (int)v21 >= 320 )
                  v20 = yy_meta[v20];
                v22 = yy_def[v22];
              }
              while ( yy_chk[yy_base[v21] + v20] != (_DWORD)v21 );
            }
            v23 = yy_nxt[yy_base[(int)v21] + v20];
            if ( v23 == 319 )
              v23 = 0;
            if ( v23 )
            {
              ++v7;
              LODWORD(v8) = v23;
              goto $yy_match;
            }
            continue;
          }
          next_buffer = yy_get_next_buffer();
          if ( !next_buffer )
          {
            v9 = yytext;
            v7 = &yytext[v15];
            yy_c_buf_p = v7;
            v24 = yy_get_previous_state();
            buffer = yy_current_buffer;
            LODWORD(v8) = v24;
            goto $yy_match;
          }
          v17 = next_buffer - 1;
          if ( !v17 )
          {
            v14 = yytext;
            yy_buf_pos = yytext;
            buffer = yy_current_buffer;
            yy_did_buffer_switch_on_eof = 0;
            yy_c_buf_p = yytext;
            v6 = yy_hold_char;
            v13 = yytext;
            v12 = (yy_start - 1) / 2 + 109;
            goto $do_action;
          }
          if ( v17 == 1 )
          {
            buffer = yy_current_buffer;
            v7 = &yy_current_buffer->yy_ch_buf[::yy_n_chars];
            yy_c_buf_p = v7;
            v18 = yy_get_previous_state();
            v9 = yytext;
            LODWORD(v8) = v18;
            continue;
          }
LABEL_58:
          buffer = yy_current_buffer;
          yy_buf_pos = yy_c_buf_p;
          v6 = yy_hold_char;
          break;
        case 109:
          return 0i64;
        case 110:
          if ( !Scr_EndInline() )
            return 0i64;
          v25 = inline_stack_ptr;
          if ( inline_stack_ptr <= 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scr_lex.txt", 107, ASSERT_TYPE_ASSERT, "(inline_stack_ptr > 0)", (const char *)&queryFormat, "inline_stack_ptr > 0") )
              __debugbreak();
            v25 = inline_stack_ptr;
          }
          inline_stack_ptr = v25 - 1;
          yy_switch_to_buffer(&inline_stack[v25 - 1]);
          yy_buf_pos = yy_c_buf_p;
          v6 = yy_hold_char;
          buffer = yy_current_buffer;
          goto LABEL_12;
        case 111:
          CompileError(g_pScrCompileContext, g_sourcePos, "unterminated comment", v13);
          return 0i64;
        default:
          yy_fatal_error("fatal flex scanner internal error--no action found");
      }
      break;
    }
  }
}

/*
==============
yyrestart
==============
*/
void yyrestart(_iobuf *input_file)
{
  yy_buffer_state *buffer; 

  buffer = yy_current_buffer;
  if ( !yy_current_buffer )
  {
    buffer = yy_create_buffer(yyin, 0x4000);
    yy_current_buffer = buffer;
  }
  yy_init_buffer(buffer, input_file);
  yy_n_chars = buffer->yy_n_chars;
  yytext = buffer->yy_buf_pos;
  yyin = buffer->yy_input_file;
  yy_hold_char = *yytext;
  yy_c_buf_p = yytext;
}

