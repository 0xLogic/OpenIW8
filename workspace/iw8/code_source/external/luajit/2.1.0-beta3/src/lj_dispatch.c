/*
==============
lua_sethook
==============
*/
__int64 lua_sethook(lua_State *L, void (*func)(lua_State *, lua_Debug *), int mask, int count)
{
  global_State *ptr64; 
  int v5; 

  ptr64 = (global_State *)L->glref.ptr64;
  v5 = mask & 0xF;
  if ( !func || !v5 )
  {
    func = NULL;
    LOBYTE(v5) = 0;
  }
  ptr64->hookmask &= 0xF0u;
  ptr64->hookmask |= v5;
  ptr64->hookf = func;
  ptr64->hookcstart = count;
  ptr64->hookcount = count;
  j_lj_dispatch_update(ptr64);
  return 1i64;
}

/*
==============
lua_gethook
==============
*/
void (*lua_gethook(lua_State *L))(lua_State *, lua_Debug *)
{
  return *(void (__fastcall **)(lua_State *, lua_Debug *))(L->glref.ptr64 + 328);
}

/*
==============
lua_gethookmask
==============
*/
__int64 lua_gethookmask(lua_State *L)
{
  return *(_BYTE *)(L->glref.ptr64 + 209) & 0xF;
}

/*
==============
lua_gethookcount
==============
*/
__int64 lua_gethookcount(lua_State *L)
{
  return *(unsigned int *)(L->glref.ptr64 + 324);
}

/*
==============
lj_dispatch_init
==============
*/
void lj_dispatch_init(GG_State *GG)
{
  void (__fastcall **dispatch)(); 
  __int64 v2; 
  const unsigned __int16 *v3; 
  void (__fastcall **v4)(); 
  void (__fastcall *v5)(); 

  dispatch = GG->dispatch;
  v2 = 89i64;
  v3 = lj_bc_ofs;
  v4 = &GG->dispatch[154];
  do
  {
    ++v4;
    v5 = (void (__fastcall *)())((char *)lj_vm_asm_begin + *v3++);
    *dispatch++ = v5;
    *(v4 - 1) = v5;
    --v2;
  }
  while ( v2 );
  GG->dispatch[89] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[89]);
  GG->dispatch[90] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[90]);
  GG->dispatch[91] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[91]);
  GG->dispatch[92] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[92]);
  GG->dispatch[93] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[93]);
  GG->dispatch[94] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[94]);
  GG->dispatch[95] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[95]);
  GG->dispatch[96] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[96]);
  GG->dispatch[97] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[97]);
  GG->dispatch[98] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[98]);
  GG->dispatch[99] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[99]);
  GG->dispatch[100] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[100]);
  GG->dispatch[101] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[101]);
  GG->dispatch[102] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[102]);
  GG->dispatch[103] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[103]);
  GG->dispatch[104] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[104]);
  GG->dispatch[105] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[105]);
  GG->dispatch[106] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[106]);
  GG->dispatch[107] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[107]);
  GG->dispatch[108] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[108]);
  GG->dispatch[109] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[109]);
  GG->dispatch[110] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[110]);
  GG->dispatch[111] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[111]);
  GG->dispatch[112] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[112]);
  GG->dispatch[113] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[113]);
  GG->dispatch[114] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[114]);
  GG->dispatch[115] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[115]);
  GG->dispatch[116] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[116]);
  GG->dispatch[117] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[117]);
  GG->dispatch[118] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[118]);
  GG->dispatch[119] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[119]);
  GG->dispatch[120] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[120]);
  GG->dispatch[121] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[121]);
  GG->dispatch[122] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[122]);
  GG->dispatch[123] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[123]);
  GG->dispatch[124] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[124]);
  GG->dispatch[125] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[125]);
  GG->dispatch[126] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[126]);
  GG->dispatch[127] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[127]);
  GG->dispatch[128] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[128]);
  GG->dispatch[129] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[129]);
  GG->dispatch[130] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[130]);
  GG->dispatch[131] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[131]);
  GG->dispatch[132] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[132]);
  GG->dispatch[133] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[133]);
  GG->dispatch[134] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[134]);
  GG->dispatch[135] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[135]);
  GG->dispatch[136] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[136]);
  GG->dispatch[137] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[137]);
  GG->dispatch[138] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[138]);
  GG->dispatch[139] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[139]);
  GG->dispatch[140] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[140]);
  GG->dispatch[141] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[141]);
  GG->dispatch[142] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[142]);
  GG->dispatch[143] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[143]);
  GG->dispatch[144] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[144]);
  GG->dispatch[145] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[145]);
  GG->dispatch[146] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[146]);
  GG->dispatch[147] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[147]);
  GG->dispatch[148] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[148]);
  GG->dispatch[149] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[149]);
  GG->dispatch[150] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[150]);
  GG->dispatch[151] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[151]);
  GG->dispatch[152] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[152]);
  GG->dispatch[153] = (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[153]);
  GG->dispatch[79] = GG->dispatch[80];
  GG->dispatch[82] = GG->dispatch[83];
  GG->dispatch[85] = GG->dispatch[86];
  GG->dispatch[89] = GG->dispatch[90];
  GG->dispatch[92] = GG->dispatch[93];
  GG->g.bc_cfunc_int = 5215;
  GG->g.bc_cfunc_ext = 5215;
  GG->bcff[0] = 97;
  GG->bcff[1] = 98;
  GG->bcff[2] = 99;
  GG->bcff[3] = 100;
  GG->bcff[4] = 101;
  GG->bcff[5] = 102;
  GG->bcff[6] = 103;
  GG->bcff[7] = 104;
  GG->bcff[8] = 105;
  GG->bcff[9] = 106;
  GG->bcff[10] = 107;
  GG->bcff[11] = 108;
  GG->bcff[12] = 109;
  GG->bcff[13] = 110;
  GG->bcff[14] = 111;
  GG->bcff[15] = 112;
  GG->bcff[16] = 113;
  GG->bcff[17] = 114;
  GG->bcff[18] = 115;
  GG->bcff[19] = 116;
  GG->bcff[20] = 117;
  GG->bcff[21] = 118;
  GG->bcff[22] = 119;
  GG->bcff[23] = 120;
  GG->bcff[24] = 121;
  GG->bcff[25] = 122;
  GG->bcff[26] = 123;
  GG->bcff[27] = 124;
  GG->bcff[28] = 125;
  GG->bcff[29] = 126;
  GG->bcff[30] = 127;
  GG->bcff[31] = 128;
  GG->bcff[32] = 129;
  GG->bcff[33] = 130;
  GG->bcff[34] = 131;
  GG->bcff[35] = 132;
  GG->bcff[36] = 133;
  GG->bcff[37] = 134;
  GG->bcff[38] = 135;
  GG->bcff[39] = 136;
  GG->bcff[40] = 137;
  GG->bcff[41] = 138;
  GG->bcff[42] = 139;
  GG->bcff[43] = 140;
  GG->bcff[44] = 141;
  GG->bcff[45] = 142;
  GG->bcff[46] = 143;
  GG->bcff[47] = 144;
  GG->bcff[48] = 145;
  GG->bcff[49] = 146;
  GG->bcff[50] = 147;
  GG->bcff[51] = 148;
  GG->bcff[52] = 149;
  GG->bcff[53] = 150;
  GG->bcff[54] = 151;
  GG->bcff[55] = 152;
  GG->bcff[56] = 153;
}

/*
==============
lj_dispatch_update
==============
*/
void lj_dispatch_update(global_State *g)
{
  unsigned __int8 dispatchmode; 
  unsigned __int8 v2; 
  global_State *v3; 
  unsigned __int64 gcptr64; 
  char v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  char v8; 
  __int64 v11; 
  unsigned __int64 v19; 
  __int64 (__fastcall *v20)(); 
  GCRef *v21; 
  __int64 v22; 
  global_State *v23; 
  __int64 (__fastcall *v24)(int, int, int, int, int, int, int, int, int, int, int, __int64); 

  dispatchmode = g->dispatchmode;
  v2 = g->hookmask & 3 | ((char)g->hookmask >> 7) & 0x44 | ((g->hookmask & 0xC) != 0 ? 4 : 0);
  if ( dispatchmode == v2 )
    return;
  g->dispatchmode = v2;
  v3 = g + 1;
  gcptr64 = g[3].gcroot[18].gcptr64;
  v5 = dispatchmode ^ v2;
  v6 = g[3].gcroot[21].gcptr64;
  v7 = g[3].gcroot[24].gcptr64;
  g[3].gcroot[17].gcptr64 = gcptr64;
  g[3].gcroot[20].gcptr64 = v6;
  v8 = v2 & 4;
  v3[2].gcroot[23].gcptr64 = v7;
  if ( ((dispatchmode ^ v2) & 0x64) != 0 )
  {
    if ( v8 )
    {
      v21 = (GCRef *)&j_lj_vm_profhook;
      v22 = 11i64;
      if ( (v2 & 0x40) == 0 )
        v21 = (GCRef *)&j_lj_vm_inshook;
      v23 = v3;
      do
      {
        v23->strhash = v21;
        *(_QWORD *)&v23->strmask = v21;
        v23->allocf = (void *(__fastcall *)(void *, void *, unsigned __int64, unsigned __int64))v21;
        v23 = (global_State *)((char *)v23 + 64);
        v23[-1].gcroot[31].gcptr64 = (unsigned __int64)v21;
        v23[-1].gcroot[32].gcptr64 = (unsigned __int64)v21;
        v23[-1].gcroot[33].gcptr64 = (unsigned __int64)v21;
        v23[-1].gcroot[34].gcptr64 = (unsigned __int64)v21;
        v23[-1].gcroot[35].gcptr64 = (unsigned __int64)v21;
        --v22;
      }
      while ( v22 );
      v23->strhash = v21;
      goto LABEL_17;
    }
    _RDX = v3;
    _RCX = &v3[1].gcroot[22];
    v11 = 5i64;
    do
    {
      _RDX = (global_State *)((char *)_RDX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups xmm1, xmmword ptr [rcx+70h]
      }
      _RCX += 16;
      __asm
      {
        vmovups ymmword ptr [rdx-80h], ymm0
        vmovups ymm0, ymmword ptr [rcx-60h]
        vmovups ymmword ptr [rdx-60h], ymm0
        vmovups ymm0, ymmword ptr [rcx-40h]
        vmovups ymmword ptr [rdx-40h], ymm0
        vmovups xmm0, xmmword ptr [rcx-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v11;
    }
    while ( v11 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
    }
    v19 = _RCX[8].gcptr64;
    __asm { vmovups ymmword ptr [rdx+20h], ymm0 }
    *(_QWORD *)&_RDX->gc.currentwhite = v19;
    if ( (v2 & 2) != 0 )
      goto LABEL_7;
  }
  else if ( !v8 )
  {
    v3->gcroot[31].gcptr64 = gcptr64;
    v3->gcroot[34].gcptr64 = v6;
    *(_QWORD *)&v3[1].strmask = v7;
    if ( (v2 & 2) == 0 )
    {
      v3->gcroot[25].gcptr64 = v3[2].gcroot[11].gcptr64;
      v3->gcroot[26].gcptr64 = v3[2].gcroot[12].gcptr64;
      v3->gcroot[27].gcptr64 = v3[2].gcroot[13].gcptr64;
      v20 = (__int64 (__fastcall *)())v3[2].gcroot[14].gcptr64;
      goto LABEL_16;
    }
LABEL_7:
    v20 = j_lj_vm_rethook;
    v3->gcroot[25].gcptr64 = (unsigned __int64)j_lj_vm_rethook;
    v3->gcroot[26].gcptr64 = (unsigned __int64)j_lj_vm_rethook;
    v3->gcroot[27].gcptr64 = (unsigned __int64)j_lj_vm_rethook;
LABEL_16:
    v3->gcroot[28].gcptr64 = (unsigned __int64)v20;
  }
LABEL_17:
  if ( (v5 & 1) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v24 = j_lj_vm_callhook;
      v3[1].loadfiled = j_lj_vm_callhook;
      v3[1].gc.total = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.threshold = (unsigned __int64)j_lj_vm_callhook;
      *(_QWORD *)&v3[1].gc.currentwhite = j_lj_vm_callhook;
      v3[1].gc.root.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.sweep.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.gray.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.grayagain.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.weak.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.mmudata.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.debt = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gc.estimate = (unsigned __int64)j_lj_vm_callhook;
      *(_QWORD *)&v3[1].gc.stepmul = j_lj_vm_callhook;
      *(_QWORD *)&v3[1].vmstate = j_lj_vm_callhook;
      v3[1].tmpbuf.p.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].tmpbuf.e.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].tmpbuf.b.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].tmpbuf.L.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].strempty.nextgc.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      *(_QWORD *)&v3[1].strempty.marked = j_lj_vm_callhook;
      *(_QWORD *)&v3[1].strempty.len = j_lj_vm_callhook;
      *(_QWORD *)&v3[1].stremptyz = j_lj_vm_callhook;
      v3[1].mainthref.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].registrytv.u64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].tmptv.u64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].tmptv2.u64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].nilnode.val.u64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].nilnode.key.u64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].nilnode.next.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].uvhead.nextgc.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      *(_QWORD *)&v3[1].uvhead.marked = j_lj_vm_callhook;
      v3[1].uvhead.tv.u64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].uvhead.next.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].uvhead.v.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      *(_QWORD *)&v3[1].uvhead.dhash = j_lj_vm_callhook;
      *(_QWORD *)&v3[1].hookcount = j_lj_vm_callhook;
      v3[1].hookf = (void (__fastcall *)(lua_State *, lua_Debug *))j_lj_vm_callhook;
      v3[1].wrapf = (int (__fastcall *)(lua_State *))j_lj_vm_callhook;
      v3[1].panic = (int (__fastcall *)(lua_State *))j_lj_vm_callhook;
      *(_QWORD *)&v3[1].bc_cfunc_int = j_lj_vm_callhook;
      v3[1].cur_L.gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].jit_base.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].ctype_state.ptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[0].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[1].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[2].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[3].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[4].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[5].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[6].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[7].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[8].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[9].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[10].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[11].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[12].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[13].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[14].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[15].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[16].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[17].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[18].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[19].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
      v3[1].gcroot[20].gcptr64 = (unsigned __int64)j_lj_vm_callhook;
    }
    else
    {
      v3[1].loadfiled = (char *)lj_vm_asm_begin + lj_bc_ofs[89];
      v3[1].gc.total = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[90];
      v3[1].gc.threshold = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[91];
      *(_QWORD *)&v3[1].gc.currentwhite = (char *)lj_vm_asm_begin + lj_bc_ofs[92];
      v3[1].gc.root.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[93];
      v3[1].gc.sweep.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[94];
      v3[1].gc.gray.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[95];
      v3[1].gc.grayagain.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[96];
      v3[1].gc.weak.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[97];
      v3[1].gc.mmudata.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[98];
      v3[1].gc.debt = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[99];
      v3[1].gc.estimate = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[100];
      *(_QWORD *)&v3[1].gc.stepmul = (char *)lj_vm_asm_begin + lj_bc_ofs[101];
      *(_QWORD *)&v3[1].vmstate = (char *)lj_vm_asm_begin + lj_bc_ofs[102];
      v3[1].tmpbuf.p.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[103];
      v3[1].tmpbuf.e.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[104];
      v3[1].tmpbuf.b.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[105];
      v3[1].tmpbuf.L.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[106];
      v3[1].strempty.nextgc.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[107];
      *(_QWORD *)&v3[1].strempty.marked = (char *)lj_vm_asm_begin + lj_bc_ofs[108];
      *(_QWORD *)&v3[1].strempty.len = (char *)lj_vm_asm_begin + lj_bc_ofs[109];
      *(_QWORD *)&v3[1].stremptyz = (char *)lj_vm_asm_begin + lj_bc_ofs[110];
      v3[1].mainthref.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[111];
      v3[1].registrytv.u64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[112];
      v3[1].tmptv.u64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[113];
      v3[1].tmptv2.u64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[114];
      v3[1].nilnode.val.u64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[115];
      v3[1].nilnode.key.u64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[116];
      v3[1].nilnode.next.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[117];
      v3[1].uvhead.nextgc.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[118];
      *(_QWORD *)&v3[1].uvhead.marked = (char *)lj_vm_asm_begin + lj_bc_ofs[119];
      v3[1].uvhead.tv.u64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[120];
      v3[1].uvhead.next.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[121];
      v3[1].uvhead.v.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[122];
      *(_QWORD *)&v3[1].uvhead.dhash = (char *)lj_vm_asm_begin + lj_bc_ofs[123];
      *(_QWORD *)&v3[1].hookcount = (char *)lj_vm_asm_begin + lj_bc_ofs[124];
      v3[1].hookf = (void (__fastcall *)(lua_State *, lua_Debug *))((char *)lj_vm_asm_begin + lj_bc_ofs[125]);
      v3[1].wrapf = (int (__fastcall *)(lua_State *))((char *)lj_vm_asm_begin + lj_bc_ofs[126]);
      v3[1].panic = (int (__fastcall *)(lua_State *))((char *)lj_vm_asm_begin + lj_bc_ofs[127]);
      *(_QWORD *)&v3[1].bc_cfunc_int = (char *)lj_vm_asm_begin + lj_bc_ofs[128];
      v3[1].cur_L.gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[129];
      v3[1].jit_base.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[130];
      v3[1].ctype_state.ptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[131];
      v3[1].gcroot[0].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[132];
      v3[1].gcroot[1].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[133];
      v3[1].gcroot[2].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[134];
      v3[1].gcroot[3].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[135];
      v3[1].gcroot[4].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[136];
      v3[1].gcroot[5].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[137];
      v3[1].gcroot[6].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[138];
      v3[1].gcroot[7].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[139];
      v3[1].gcroot[8].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[140];
      v3[1].gcroot[9].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[141];
      v3[1].gcroot[10].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[142];
      v3[1].gcroot[11].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[143];
      v3[1].gcroot[12].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[144];
      v3[1].gcroot[13].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[145];
      v3[1].gcroot[14].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[146];
      v3[1].gcroot[15].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[147];
      v3[1].gcroot[16].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[148];
      v3[1].gcroot[17].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[149];
      v3[1].gcroot[18].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[150];
      v3[1].gcroot[19].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[151];
      v3[1].gcroot[20].gcptr64 = (unsigned __int64)lj_vm_asm_begin + lj_bc_ofs[152];
      v24 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, __int64))((char *)lj_vm_asm_begin + lj_bc_ofs[153]);
    }
    v3[1].gcroot[21].gcptr64 = (unsigned __int64)v24;
  }
  if ( (v2 & 1) == 0 )
  {
    v3[1].loadfiled = (char *)lj_vm_asm_begin + lj_bc_ofs[90];
    *(_QWORD *)&v3[1].gc.currentwhite = (char *)lj_vm_asm_begin + lj_bc_ofs[93];
  }
}

/*
==============
lj_dispatch_ins
==============
*/
void lj_dispatch_ins(lua_State *L, const unsigned int *pc)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 ptr64; 
  GCproto *v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  char v11; 
  unsigned int v12; 
  int v13; 

  v4 = L->base[-2].u64 & 0x7FFFFFFFFFFFi64;
  if ( *(_BYTE *)(v4 + 0xA) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_dispatch.c", 408, "((fn)->c.ffid == 0)") )
    __debugbreak();
  v5 = (unsigned __int64)L->cframe & 0xFFFFFFFFFFFFFFFCui64;
  ptr64 = L->glref.ptr64;
  v7 = (GCproto *)(*(_QWORD *)(v4 + 32) - 104i64);
  v8 = *(_QWORD *)(v5 + 96);
  v9 = *(_DWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 96) = pc;
  v10 = cur_topslot(v7, pc, v9);
  L->top = &L->base[v10];
  v11 = *(_BYTE *)(ptr64 + 209);
  if ( (v11 & 8) != 0 && !*(_DWORD *)(ptr64 + 320) )
  {
    *(_DWORD *)(ptr64 + 320) = *(_DWORD *)(ptr64 + 324);
    callhook(L, 3, -1);
    L->top = &L->base[v10];
    v11 = *(_BYTE *)(ptr64 + 209);
  }
  if ( (v11 & 4) != 0 )
  {
    v12 = ((__int64)(v8 - (_QWORD)v7 - 104) >> 2) - 1;
    v13 = j_lj_debug_line(v7, (((char *)pc - (char *)v7 - 104) >> 2) - 1);
    if ( (unsigned __int64)pc <= v8 || v12 >= v7->sizebc || v13 != j_lj_debug_line(v7, v12) )
    {
      callhook(L, 2, v13);
      L->top = &L->base[v10];
    }
  }
  if ( (*(_BYTE *)(ptr64 + 209) & 2) != 0 && (unsigned int)*((unsigned __int8 *)pc - 4) - 73 <= 3 )
    callhook(L, 1, -1);
}

/*
==============
lj_dispatch_call
==============
*/
void (*lj_dispatch_call(lua_State *L, const unsigned int *pc))()
{
  TValue *base; 
  unsigned __int64 ptr64; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  TValue *top; 

  base = L->base;
  ptr64 = L->glref.ptr64;
  if ( *(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
  {
    if ( (__int64)(L->maxstack.ptr64 - (unsigned __int64)L->top) <= 160 )
      j_lj_state_growstack(L, 0x14u);
    v11 = 0;
  }
  else
  {
    v6 = *(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20);
    v7 = *(unsigned __int8 *)(v6 - 94);
    v8 = *(unsigned __int8 *)(v6 - 93);
    v9 = L->top - base;
    if ( (*(_BYTE *)(v6 - 43) & 2) != 0 )
      v8 += v9 + 1;
    if ( (signed __int64)(L->maxstack.ptr64 - (unsigned __int64)L->top) <= 8i64 * v8 )
      j_lj_state_growstack(L, v8);
    v10 = v7 - v9;
    v11 = 0;
    if ( v10 >= 0 )
      v11 = v10;
  }
  if ( (*(_BYTE *)(ptr64 + 209) & 1) != 0 )
  {
    if ( v11 > 0 )
    {
      v12 = (unsigned int)v11;
      do
      {
        L->top->u64 = -1i64;
        ++L->top;
        --v12;
      }
      while ( v12 );
    }
    callhook(L, 0, -1);
    if ( v11 > 0 )
    {
      top = L->top;
      do
      {
        --top;
        --v11;
        if ( top->u64 != -1i64 )
          break;
        L->top = top;
      }
      while ( v11 > 0 );
    }
  }
  return (void (__fastcall *)())((char *)lj_vm_asm_begin + lj_bc_ofs[*((unsigned __int8 *)pc - 4)]);
}

/*
==============
lj_dispatch_profile
==============
*/
void lj_dispatch_profile(lua_State *L, const unsigned int *pc)
{
  unsigned __int64 v4; 
  GCproto *v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned __int64 ptr64; 

  v4 = L->base[-2].u64 & 0x7FFFFFFFFFFFi64;
  if ( *(_BYTE *)(v4 + 0xA) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_dispatch.c", 543, "((fn)->c.ffid == 0)") )
    __debugbreak();
  v5 = (GCproto *)(*(_QWORD *)(v4 + 32) - 104i64);
  v6 = (unsigned __int64)L->cframe & 0xFFFFFFFFFFFFFFFCui64;
  v7 = *(_QWORD *)(v6 + 96);
  v8 = *(_DWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 96) = pc;
  L->top = &L->base[cur_topslot(v5, pc, v8)];
  j_lj_profile_interpreter(L);
  *(_QWORD *)(v6 + 96) = v7;
  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 360) = L;
  *(_DWORD *)(ptr64 + 144) = -1;
}

/*
==============
luaJIT_setmode
==============
*/
__int64 luaJIT_setmode(lua_State *L, int idx, int mode)
{
  unsigned __int64 ptr64; 
  __int64 v5; 
  TValue *v6; 
  __int64 u64; 

  ptr64 = L->glref.ptr64;
  if ( (*(_BYTE *)(ptr64 + 209) & 0x40) != 0 )
    j_lj_err_caller(L, LJ_ERR_NOGCMM);
  if ( !(_BYTE)mode )
    goto LABEL_15;
  if ( (unsigned __int8)mode <= 1u )
    return 0i64;
  if ( (unsigned __int8)mode > 4u )
  {
    if ( (unsigned __int8)mode == 16 )
    {
      if ( (mode & 0x100) != 0 )
      {
        if ( idx )
        {
          v5 = idx;
          v6 = idx <= 0 ? &L->top[v5] : &L->base[v5 - 1];
          u64 = v6->u64;
          if ( (unsigned int)(u64 >> 47) == -4 )
          {
            *(_QWORD *)(ptr64 + 336) = u64 & 0x7FFFFFFFFFFFi64;
            *(_DWORD *)(ptr64 + 356) = 96;
            return 1i64;
          }
        }
        return 0i64;
      }
      *(_DWORD *)(ptr64 + 356) = 95;
      return 1i64;
    }
  }
  else
  {
LABEL_15:
    if ( (mode & 0x100) == 0 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
luaJIT_version_2_1_0_beta3
==============
*/
void luaJIT_version_2_1_0_beta3()
{
  ;
}

/*
==============
callhook
==============
*/
void callhook(lua_State *L, int event, int line)
{
  global_State *ptr64; 
  void (__fastcall *hookf)(lua_State *, lua_Debug *); 
  __int64 v6; 
  signed __int64 v7; 
  int v8[32]; 

  ptr64 = (global_State *)L->glref.ptr64;
  hookf = ptr64->hookf;
  if ( hookf && (ptr64->hookmask & 0x10) == 0 )
  {
    v6 = (__int64)&L->base[-1] - L->stack.ptr64;
    v8[0] = event;
    v8[29] = v6 >> 3;
    v7 = L->maxstack.ptr64 - (unsigned __int64)L->top;
    v8[10] = line;
    if ( v7 <= 168 )
      j_lj_state_growstack(L, 0x15u);
    j_lj_profile_hook_enter(ptr64);
    hookf(L, (lua_Debug *)v8);
    if ( (ptr64->hookmask & 0x10) == 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_dispatch.c", 377, "((g)->hookmask & 0x10)") )
        __debugbreak();
    }
    ptr64->cur_L.gcptr64 = (unsigned __int64)L;
    j_lj_profile_hook_leave(ptr64);
  }
}

/*
==============
cur_topslot
==============
*/
__int64 cur_topslot(GCproto *pt, const unsigned int *pc, unsigned int nres)
{
  unsigned int v3; 

  v3 = *(pc - 1);
  if ( (_BYTE)v3 == 50 )
    v3 = pc[((unsigned __int64)v3 >> 16) - 0x8000];
  if ( (unsigned __int8)v3 == 63 )
    return BYTE1(v3) + nres - 1;
  if ( (((unsigned __int8)v3 - 65) & 0xFFFFFFFD) == 0 )
    return BYTE1(v3) + nres + BYTE2(v3) + 1;
  if ( (unsigned __int8)v3 == 73 )
    return HIWORD(v3) + nres + BYTE1(v3) - 1;
  return pt->framesize;
}

