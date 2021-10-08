/*
==============
Snd_GetStringFlags
==============
*/

int __fastcall Snd_GetStringFlags(const char *flags, const SndCsvParseEntry *p_entry, const char *sourceFile)
{
  return ?Snd_GetStringFlags@@YAHPEBDPEBUSndCsvParseEntry@@0@Z(flags, p_entry, sourceFile);
}

/*
==============
Snd_GetStringIndex
==============
*/

int __fastcall Snd_GetStringIndex(const char *value, const SndCsvParseEntry *p_entry, const char *sourceFile)
{
  return ?Snd_GetStringIndex@@YAHPEBDPEBUSndCsvParseEntry@@0@Z(value, p_entry, sourceFile);
}

/*
==============
SND_ParseInit
==============
*/

void __fastcall SND_ParseInit(const SndGlobals *p_globals)
{
  ?SND_ParseInit@@YAXPEBUSndGlobals@@@Z(p_globals);
}

/*
==============
SND_JsonSetDuck
==============
*/

int __fastcall SND_JsonSetDuck(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  return ?SND_JsonSetDuck@@YAHPEBDIPEBX00IPEAXPEA_N@Z(filename, entry_count, entries, column_name, entry, row_number, structure, has);
}

/*
==============
SND_CsvSetField
==============
*/

int __fastcall SND_CsvSetField(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  return ?SND_CsvSetField@@YAHPEBDIPEBX00IPEAXPEA_N@Z(filename, entry_count, entries, column_name, entry, row_number, structure, has);
}

/*
==============
SND_JsonSetField
==============
*/

int __fastcall SND_JsonSetField(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  return ?SND_JsonSetField@@YAHPEBDIPEBX00IPEAXPEA_N@Z(filename, entry_count, entries, column_name, entry, row_number, structure, has);
}

/*
==============
SND_CsvSetField
==============
*/
__int64 SND_CsvSetField(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  __int64 v13; 
  const char *v14; 
  const char *v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  const char *v20; 
  const char *name; 
  __int64 v27; 
  const char *v28; 
  signed __int64 v29; 
  int v30; 
  __int64 v31; 
  int v32; 
  int v33; 
  int v34; 
  SndCsvParseEntryType type; 
  bool v36; 
  bool *v37; 
  __int64 v38; 
  unsigned __int64 v39; 
  unsigned int length; 
  unsigned int v41; 
  int v42; 
  bool v45; 
  char v46; 
  const char *v51; 
  int v52; 
  bool v54; 
  char v57; 
  unsigned __int64 offset; 
  int v62; 
  bool v63; 
  char v66; 
  unsigned __int64 v68; 
  int v69; 
  bool v70; 
  char v73; 
  unsigned __int64 v75; 
  unsigned int v76; 
  bool v80; 
  bool v81; 
  bool v82; 
  char v87; 
  int v91; 
  int StringIndex; 
  int v93; 
  int StringFlags; 
  unsigned __int64 v97; 
  int v98; 
  bool v100; 
  char v101; 
  int v104; 
  bool v106; 
  char v107; 
  int v113; 
  bool v115; 
  char v116; 
  int v123; 
  bool v125; 
  char v126; 
  int v133; 
  bool v135; 
  char v136; 
  int v142; 
  bool v144; 
  char v145; 
  bool v146; 
  int v150; 
  bool v152; 
  char v155; 
  int v156; 
  bool v158; 
  char v159; 
  char *fmt; 
  char *fmta; 
  __int64 v171; 
  __int64 v172; 
  __int64 v173; 
  __int64 v174; 
  int v175; 
  __int64 v176; 
  __int64 v177; 
  int v184; 
  const char *v185; 

  v185 = column_name;
  LODWORD(v13) = 0;
  v14 = column_name;
  v176 = 0i64;
  _RSI = (const SndCsvParseEntry *)entries;
  v16 = filename;
  v17 = -1;
  if ( entry_count )
  {
    v18 = entry_count;
    v19 = 0i64;
    v20 = entry;
    __asm
    {
      vmovaps [rsp+0F0h+var_50], xmm6
      vmovaps [rsp+0F0h+var_60], xmm7
      vmovss  xmm7, cs:__real@3d4ccccd
      vmovaps [rsp+0F0h+var_70], xmm8
      vmovss  xmm8, cs:__real@41200000
      vmovaps [rsp+0F0h+var_80], xmm9
      vmovss  xmm9, cs:__real@37803e84
    }
    v177 = 0i64;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      _RDI = v19;
      name = _RSI[v19].name;
      if ( name )
      {
        v27 = 0x7FFFFFFFi64;
        v28 = v14;
        if ( !v14 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v14 = v185;
          v16 = filename;
          LODWORD(v13) = v176;
          v19 = v177;
        }
        v29 = name - v14;
        do
        {
          v30 = (unsigned __int8)v28[v29];
          v31 = v27;
          v32 = *(unsigned __int8 *)v28++;
          --v27;
          if ( !v31 )
            break;
          if ( v30 != v32 )
          {
            v33 = v30 + 32;
            if ( (unsigned int)(v30 - 65) > 0x19 )
              v33 = v30;
            v30 = v33;
            v34 = v32 + 32;
            if ( (unsigned int)(v32 - 65) > 0x19 )
              v34 = v32;
            if ( v30 != v34 )
              goto LABEL_190;
          }
        }
        while ( v30 );
        if ( v20 && *v20 || (type = _RSI[_RDI].type, type == SND_CSV_HASH) )
        {
          v37 = has;
          v38 = v177;
        }
        else
        {
          v36 = type == SND_CSV_FLAG || type == SND_CSV_FLAG_BITS;
          if ( _RSI[_RDI].required && !v36 )
            Com_PrintError(1, "ERROR: %s row %u had empty required column %s\n", v16, row_number, _RSI[_RDI].name);
          v37 = has;
          v38 = v177;
          if ( has )
            has[v177] = 1;
        }
        switch ( _RSI[_RDI].type )
        {
          case SND_CSV_STRING:
            v39 = -1i64;
            do
              ++v39;
            while ( v20[v39] );
            if ( v39 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v39, "unsigned", v39) )
              __debugbreak();
            length = _RSI[_RDI].length;
            if ( (unsigned int)v39 > length - 1 )
            {
              LODWORD(v173) = row_number;
              LODWORD(fmt) = _RSI[_RDI].length;
              Com_PrintError(1, "ERROR: %s string too long: %s (max %u) col '%s' row %u\n", filename, v20, fmt, _RSI[_RDI].name, v173);
              length = _RSI[_RDI].length;
            }
            Core_strcpy((char *)structure + _RSI[_RDI].offset, length, v20);
            goto LABEL_187;
          case SND_CSV_FLOAT:
            v42 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v45 = v42 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v42 == 1 )
            {
              v46 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v42 )
                __asm { vcomiss xmm0, xmm2 }
              v46 = 1;
            }
            if ( v45 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_50;
              __asm { vmovss  xmm0, dword ptr [rsi+rdi*8+24h] }
              _RAX = _RSI[_RDI].offset;
              _RCX = structure;
              __asm
              {
                vmovss  [rbp+37h+arg_10], xmm0
                vmovss  dword ptr [rcx+rax], xmm0
              }
            }
            else
            {
              if ( v46 )
              {
LABEL_50:
                v51 = "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %u\n";
                goto LABEL_186;
              }
              _RAX = _RSI[_RDI].offset;
              _RCX = structure;
              __asm { vmovss  dword ptr [rcx+rax], xmm0 }
            }
            goto LABEL_187;
          case SND_CSV_INT:
            v52 = j_sscanf(v20, "%d", &v175);
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm1, dword ptr [rsi+rdi*8+1Ch]
            }
            v54 = v52 != 1;
            __asm { vucomiss xmm0, xmm1 }
            if ( v52 == 1 )
              goto LABEL_55;
            __asm { vcvttss2si eax, xmm0 }
            if ( v175 < _EAX )
              goto LABEL_54;
            __asm { vcvttss2si eax, xmm1 }
            if ( v175 <= _EAX )
LABEL_55:
              v57 = 0;
            else
LABEL_54:
              v57 = 1;
            if ( v54 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_61;
              __asm { vcvttss2si ecx, dword ptr [rsi+rdi*8+24h] }
              offset = _RSI[_RDI].offset;
              v175 = _ECX;
              *(_DWORD *)((char *)structure + offset) = _ECX;
            }
            else
            {
              if ( v57 )
                goto LABEL_61;
              *(_DWORD *)((char *)structure + _RSI[_RDI].offset) = v175;
            }
            goto LABEL_187;
          case SND_CSV_ENUM:
            StringIndex = Snd_GetStringIndex(v20, &_RSI[(unsigned int)v176], filename);
            v175 = StringIndex;
            if ( StringIndex >= 0 )
              *(_DWORD *)((char *)structure + _RSI[_RDI].offset) = StringIndex;
            goto LABEL_187;
          case SND_CSV_FLAG:
            StringFlags = Snd_GetStringFlags(v20, &_RSI[(unsigned int)v176], filename);
            v97 = _RSI[_RDI].offset;
            v175 = StringFlags;
            *(_DWORD *)((char *)structure + v97) = StringFlags;
            goto LABEL_187;
          case SND_CSV_USHORT_DBSPL:
            v113 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v115 = v113 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v113 == 1 )
            {
              v116 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v113 )
                __asm { vcomiss xmm0, xmm2 }
              v116 = 1;
            }
            if ( v115 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_185;
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                vmovss  [rbp+37h+arg_10], xmm0
              }
            }
            else if ( v116 )
            {
              goto LABEL_185;
            }
            __asm
            {
              vsubss  xmm0, xmm0, cs:__real@42c80000
              vmulss  xmm1, xmm0, xmm7; Y
              vmovaps xmm0, xmm8; X
            }
            *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm9
              vblendvps xmm0, xmm0, xmm6, xmm1
              vmulss  xmm0, xmm0, cs:__real@477fff00
              vcvttss2si ecx, xmm0
            }
            *(_WORD *)((char *)structure + _RSI[_RDI].offset) = _ECX;
            goto LABEL_187;
          case SND_CSV_FLOAT_DBSPL:
            v123 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v125 = v123 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v123 == 1 )
            {
              v126 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v123 )
                __asm { vcomiss xmm0, xmm2 }
              v126 = 1;
            }
            if ( v125 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_185;
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                vmovss  [rbp+37h+arg_10], xmm0
              }
            }
            else if ( v126 )
            {
              goto LABEL_185;
            }
            __asm
            {
              vsubss  xmm0, xmm0, cs:__real@42c80000
              vmulss  xmm1, xmm0, xmm7; Y
            }
            goto LABEL_142;
          case SND_CSV_CENTS:
            v98 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v100 = v98 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v98 == 1 )
            {
              v101 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v98 )
                __asm { vcomiss xmm0, xmm2 }
              v101 = 1;
            }
            if ( v100 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_185;
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                vmovss  [rbp+37h+arg_10], xmm0
              }
            }
            else if ( v101 )
            {
              goto LABEL_185;
            }
            __asm { vmulss  xmm0, xmm0, cs:__real@3a5a740e; X }
            *(float *)&_XMM0 = exp2f(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, cs:__real@46fffe00
              vcvttss2si ecx, xmm1
            }
            *(_WORD *)((char *)structure + _RSI[_RDI].offset) = _ECX;
            goto LABEL_187;
          case SND_CSV_SEMITONE:
            v104 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v106 = v104 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v104 == 1 )
            {
              v107 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v104 )
                __asm { vcomiss xmm0, xmm2 }
              v107 = 1;
            }
            if ( v106 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_185;
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                vmovss  [rbp+37h+arg_10], xmm0
                vmulss  xmm0, xmm0, cs:__real@3daaaaab; X
              }
              *(float *)&_XMM0 = exp2f(*(float *)&_XMM0);
              _RAX = _RSI[_RDI].offset;
              _RCX = structure;
              __asm { vmovss  dword ptr [rcx+rax], xmm0 }
            }
            else
            {
              if ( v107 )
                goto LABEL_185;
              __asm { vmulss  xmm0, xmm0, cs:__real@3daaaaab; X }
              *(float *)&_XMM0 = exp2f(*(float *)&_XMM0);
              _RAX = _RSI[_RDI].offset;
              _RCX = structure;
              __asm { vmovss  dword ptr [rcx+rax], xmm0 }
            }
            goto LABEL_187;
          case SND_CSV_HASH:
            v41 = SND_HashName(v20);
            *(_DWORD *)((char *)structure + _RSI[_RDI].offset) = v41;
            goto LABEL_187;
          case SND_CSV_ENUM_BITS:
            v93 = Snd_GetStringIndex(v20, &_RSI[(unsigned int)v176], filename);
            goto LABEL_98;
          case SND_CSV_FLAG_BITS:
            v93 = Snd_GetStringFlags(v20, &_RSI[(unsigned int)v176], filename);
LABEL_98:
            v175 = v93;
            if ( v93 >= 0 )
            {
              __asm
              {
                vcvttss2si ecx, dword ptr [rsi+rdi*8+18h]
                vcvttss2si r9d, dword ptr [rsi+rdi*8+1Ch]
              }
              *(_DWORD *)((char *)structure + _RSI[_RDI].offset) = ((v93 & ((1 << _ECX) - 1)) << _ER9) | *(_DWORD *)((_BYTE *)structure + _RSI[_RDI].offset) & ~(((1 << _ECX) - 1) << _ER9);
            }
            goto LABEL_187;
          case SND_CSV_BYTE:
            v69 = j_sscanf(v20, "%d", &v175);
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm1, dword ptr [rsi+rdi*8+1Ch]
            }
            v70 = v69 != 1;
            __asm { vucomiss xmm0, xmm1 }
            if ( v69 == 1 )
              goto LABEL_76;
            __asm { vcvttss2si eax, xmm0 }
            if ( v175 < _EAX )
              goto LABEL_75;
            __asm { vcvttss2si eax, xmm1 }
            if ( v175 <= _EAX )
LABEL_76:
              v73 = 0;
            else
LABEL_75:
              v73 = 1;
            if ( v70 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_61;
              __asm { vcvttss2si ecx, dword ptr [rsi+rdi*8+24h] }
              v75 = _RSI[_RDI].offset;
              v175 = _ECX;
              *((_BYTE *)structure + v75) = _ECX;
            }
            else
            {
              if ( v73 )
                goto LABEL_61;
              *((_BYTE *)structure + _RSI[_RDI].offset) = v175;
            }
            goto LABEL_187;
          case SND_CSV_ENUM_BYTE:
            v91 = Snd_GetStringIndex(v20, &_RSI[(unsigned int)v176], filename);
            v175 = v91;
            if ( v91 >= 0 )
              *((_BYTE *)structure + _RSI[_RDI].offset) = v91;
            goto LABEL_187;
          case SND_CSV_SHORT:
          case SND_CSV_USHORT:
            v62 = j_sscanf(v20, "%d", &v175);
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm1, dword ptr [rsi+rdi*8+1Ch]
            }
            v63 = v62 != 1;
            __asm { vucomiss xmm0, xmm1 }
            if ( v62 == 1 )
              goto LABEL_66;
            __asm { vcvttss2si eax, xmm0 }
            if ( v175 < _EAX )
              goto LABEL_65;
            __asm { vcvttss2si eax, xmm1 }
            if ( v175 <= _EAX )
LABEL_66:
              v66 = 0;
            else
LABEL_65:
              v66 = 1;
            if ( v63 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_61;
              __asm { vcvttss2si ecx, dword ptr [rsi+rdi*8+24h] }
              v68 = _RSI[_RDI].offset;
              v175 = _ECX;
              *(_WORD *)((char *)structure + v68) = _ECX;
            }
            else
            {
              if ( v66 )
                goto LABEL_61;
              *(_WORD *)((char *)structure + _RSI[_RDI].offset) = v175;
            }
            goto LABEL_187;
          case SND_CSV_NORM_BYTE:
            v76 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm2, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm3, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm1, [rbp+37h+arg_10]
            }
            v80 = v76 == 0;
            v81 = v76 <= 1;
            v82 = v76 != 1;
            __asm { vucomiss xmm2, xmm3 }
            if ( v76 == 1 )
              goto LABEL_86;
            __asm
            {
              vcvttss2si eax, xmm2
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vcomiss xmm1, xmm0
            }
            if ( v80 )
              goto LABEL_85;
            __asm
            {
              vcvttss2si eax, xmm3
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vcomiss xmm1, xmm0
            }
            if ( v81 )
LABEL_86:
              v87 = 0;
            else
LABEL_85:
              v87 = 1;
            if ( v82 )
            {
              if ( !_RSI[_RDI].required )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rsi+rdi*8+24h]
                  vmovss  [rbp+37h+arg_10], xmm1
                }
LABEL_91:
                __asm
                {
                  vmulss  xmm0, xmm1, cs:__real@437f0000
                  vcvttss2si ecx, xmm0
                }
                *((_BYTE *)structure + _RSI[_RDI].offset) = _ECX;
                goto LABEL_187;
              }
            }
            else if ( !v87 )
            {
              goto LABEL_91;
            }
            LODWORD(v174) = row_number;
            __asm
            {
              vcvttss2si edx, xmm2
              vcvttss2si ecx, xmm3
            }
            LODWORD(v171) = _ECX;
            LODWORD(fmt) = _EDX;
            Com_PrintError(1, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %u\n", filename, v20, fmt, v171, _RSI[_RDI].name, v174);
            goto LABEL_187;
          case SND_CSV_DISTANCE:
            v150 = j_sscanf(v20, "%d", &v175);
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm1, dword ptr [rsi+rdi*8+1Ch]
            }
            _ECX = v175;
            v152 = v150 != 1;
            __asm { vucomiss xmm0, xmm1 }
            if ( v150 == 1 )
              goto LABEL_169;
            __asm { vcvttss2si eax, xmm0 }
            if ( v175 < _EAX )
              goto LABEL_168;
            __asm { vcvttss2si eax, xmm1 }
            if ( v175 <= _EAX )
LABEL_169:
              v155 = 0;
            else
LABEL_168:
              v155 = 1;
            if ( v152 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_61;
              __asm { vcvttss2si ecx, dword ptr [rsi+rdi*8+24h] }
              v175 = _ECX;
            }
            else if ( v155 )
            {
LABEL_61:
              LODWORD(v174) = row_number;
              __asm
              {
                vcvttss2si edx, xmm0
                vcvttss2si ecx, xmm1
              }
              LODWORD(v171) = _ECX;
              LODWORD(fmt) = _EDX;
              Com_PrintError(1, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %u\n", filename, v20, fmt, v171, _RSI[_RDI].name, v174);
              goto LABEL_187;
            }
            *(_WORD *)((char *)structure + _RSI[_RDI].offset) = _ECX / 2;
            goto LABEL_187;
          case SND_CSV_FLOAT_DB:
            v133 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v135 = v133 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v133 == 1 )
            {
              v136 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v133 )
                __asm { vcomiss xmm0, xmm2 }
              v136 = 1;
            }
            if ( v135 )
            {
              if ( _RSI[_RDI].required )
                goto LABEL_185;
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                vmovss  [rbp+37h+arg_10], xmm0
              }
            }
            else if ( v136 )
            {
              goto LABEL_185;
            }
            __asm
            {
              vmulss  xmm1, xmm0, xmm7; Y
              vmovaps xmm0, xmm8; X
            }
            *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            _RAX = _RSI[_RDI].offset;
            _RCX = structure;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm9
              vblendvps xmm0, xmm0, xmm6, xmm1
              vmovss  dword ptr [rcx+rax], xmm0
            }
            goto LABEL_187;
          case SND_CSV_FLOAT_DB_NORM:
            v142 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v144 = v142 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v142 == 1 )
            {
              v145 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v142 )
                __asm { vcomiss xmm0, xmm2 }
              v145 = 1;
            }
            if ( v144 )
            {
              v146 = !_RSI[_RDI].required;
              if ( _RSI[_RDI].required )
                goto LABEL_185;
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                vmovss  [rbp+37h+arg_10], xmm0
              }
            }
            else
            {
              v146 = v145 == 0;
              if ( v145 )
                goto LABEL_185;
            }
            __asm
            {
              vsubss  xmm1, xmm0, cs:__real@41400000
              vcomiss xmm1, cs:__real@c2c80000
            }
            if ( v146 )
            {
              _RAX = _RSI[_RDI].offset;
              _RCX = structure;
              __asm
              {
                vmovaps xmm0, xmm6
                vmovss  dword ptr [rcx+rax], xmm6
              }
            }
            else
            {
              __asm { vmulss  xmm1, xmm1, xmm7 }
LABEL_142:
              __asm { vmovaps xmm0, xmm8; X }
              *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              _RAX = _RSI[_RDI].offset;
              _RCX = structure;
              __asm
              {
                vcmpltss xmm1, xmm0, xmm9
                vblendvps xmm0, xmm0, xmm6, xmm1
                vmovss  dword ptr [rcx+rax], xmm0
              }
            }
            goto LABEL_187;
          case SND_CSV_ONEPOLE_CUTOFF:
            v156 = j_sscanf(v20, "%f", &v184);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rdi*8+18h]
              vmovss  xmm2, dword ptr [rsi+rdi*8+1Ch]
              vmovss  xmm0, [rbp+37h+arg_10]
            }
            v158 = v156 != 1;
            __asm { vucomiss xmm1, xmm2 }
            if ( v156 == 1 )
            {
              v159 = 0;
            }
            else
            {
              __asm { vcomiss xmm0, xmm1 }
              if ( v156 )
                __asm { vcomiss xmm0, xmm2 }
              v159 = 1;
            }
            if ( v158 )
            {
              if ( !_RSI[_RDI].required )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsi+rdi*8+24h]
                  vmovss  [rbp+37h+arg_10], xmm0
                }
LABEL_184:
                __asm
                {
                  vmulss  xmm0, xmm0, cs:__real@382ec33e; X
                  vmovss  xmm1, cs:__real@3eaaaaab; Y
                }
                *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
                _RAX = _RSI[_RDI].offset;
                _RCX = structure;
                __asm { vmovss  dword ptr [rcx+rax], xmm0 }
                goto LABEL_187;
              }
            }
            else if ( !v159 )
            {
              goto LABEL_184;
            }
LABEL_185:
            v51 = "ERROR: %s invalid value %s [%f, %f] col '%s' row %u\n";
LABEL_186:
            LODWORD(v174) = row_number;
            __asm
            {
              vcvtss2sd xmm0, xmm2, xmm2
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+0F0h+var_C8], xmm0
              vmovsd  [rsp+0F0h+fmt], xmm1
            }
            Com_PrintError(1, v51, filename, v20, fmta, v172, _RSI[_RDI].name, v174);
LABEL_187:
            if ( v37 )
              v37[v38] = 1;
            LODWORD(v13) = v176;
            v19 = v177;
            v17 = v176;
LABEL_190:
            v18 = entry_count;
            v14 = v185;
            break;
          default:
            goto LABEL_187;
        }
      }
      v16 = filename;
      v13 = (unsigned int)(v13 + 1);
      ++v19;
      v176 = v13;
      v177 = v19;
    }
    while ( (unsigned int)v13 < v18 );
    __asm
    {
      vmovaps xmm9, [rsp+0F0h+var_80]
      vmovaps xmm8, [rsp+0F0h+var_70]
      vmovaps xmm7, [rsp+0F0h+var_60]
      vmovaps xmm6, [rsp+0F0h+var_50]
    }
  }
  return v17;
}

/*
==============
SND_JsonSetDuck
==============
*/
__int64 SND_JsonSetDuck(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  bool *v15; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v23; 
  bool *v24; 
  const char *v30; 
  int v31; 
  bool v34; 
  char v37; 
  int v38; 
  bool v41; 
  char v45; 
  int v56; 
  bool v57; 
  char v60; 
  int v63; 
  unsigned __int64 v64; 
  unsigned int VolModIndexFromName; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  int v75; 
  __int64 v76; 
  int v77; 
  int v78; 
  int v79; 
  unsigned int v80; 
  bool v82; 
  char v83; 
  __int64 v84; 
  __int64 v85; 
  int v86; 
  __int64 v87; 
  int v88; 
  int v89; 
  int v90; 
  unsigned int v91; 
  bool v93; 
  char v94; 
  __int64 v95; 
  __int64 v96; 
  int v97; 
  __int64 v98; 
  int v99; 
  int v100; 
  int v101; 
  unsigned int v102; 
  bool v104; 
  char v105; 
  const char *jsonName; 
  __int64 v120; 
  __int64 v121; 
  int v122; 
  __int64 v123; 
  int v124; 
  int v125; 
  int v126; 
  __int64 v127; 
  __int64 v128; 
  int v129; 
  __int64 v130; 
  int v131; 
  int v132; 
  int v133; 
  unsigned int v134; 
  bool v136; 
  char v137; 
  int v138; 
  __int64 v139; 
  int v140; 
  int v141; 
  int v142; 
  __int64 v148; 
  double v149; 
  __int128 v150; 
  double v151; 
  double v152; 
  __int64 v153; 
  double v154; 
  double v155; 
  double v156; 
  __int64 v157; 
  __int64 v158; 
  int v159; 
  const char *v160; 
  int v161; 
  unsigned int v162; 
  char *s1; 
  bool *v164; 
  char valuePropName[1024]; 
  char propName[1024]; 

  _R13 = structure;
  v15 = has;
  s1 = (char *)column_name;
  v162 = entry_count;
  v19 = -1;
  v160 = filename;
  v164 = has;
  if ( !structure )
  {
    Com_PrintError(9, "ERROR: %s - missing duck structure: %s col '%s' row %d\n", filename, entry, column_name, row_number);
    return v19;
  }
  __asm
  {
    vmovaps [rsp+910h+var_40], xmm6
    vmovaps [rsp+910h+var_50], xmm7
  }
  SND_DevHostParseDuckColumn(column_name, propName, valuePropName);
  if ( !valuePropName[0] )
  {
    v20 = 0;
    if ( !entry_count )
      goto LABEL_152;
    __asm
    {
      vmovss  xmm6, cs:__real@382ec33e
      vmovss  xmm7, cs:__real@3eaaaaab
    }
    v23 = v162;
    v24 = has;
    __asm { vmovaps [rsp+910h+var_60], xmm8 }
    _RBX = (char *)entries + 24;
    __asm
    {
      vmovss  xmm8, cs:__real@3d4ccccd
      vmovaps [rsp+910h+var_70], xmm9
      vmovss  xmm9, cs:__real@41200000
      vmovaps [rsp+910h+var_80], xmm10
      vmovss  xmm10, cs:__real@37803e84
      vmovaps [rsp+910h+var_90], xmm11
      vxorps  xmm11, xmm11, xmm11
    }
    while ( 1 )
    {
      v30 = (const char *)*((_QWORD *)_RBX - 3);
      if ( v30 )
        break;
LABEL_60:
      ++v20;
      _RBX += 72;
      ++v24;
      if ( v20 >= v23 )
      {
        __asm
        {
          vmovaps xmm11, [rsp+910h+var_90]
          vmovaps xmm10, [rsp+910h+var_80]
          vmovaps xmm9, [rsp+910h+var_70]
          vmovaps xmm8, [rsp+910h+var_60]
        }
        goto LABEL_152;
      }
    }
    if ( I_stricmp(v30, s1) )
    {
LABEL_59:
      v23 = v162;
      goto LABEL_60;
    }
    if ( (!entry || !*entry) && *((_DWORD *)_RBX - 2) != 2 && v15 )
      *v24 = 1;
    switch ( *((_DWORD *)_RBX - 2) )
    {
      case 1:
        v63 = *((_DWORD *)_RBX + 4);
        v64 = -1i64;
        do
          ++v64;
        while ( entry[v64] );
        if ( truncate_cast<int,unsigned __int64>(v64) > v63 - 1 )
        {
          LODWORD(v157) = row_number;
          LODWORD(v148) = v63;
          Com_PrintError(9, "ERROR: %s string too long: %s (max %d) col '%s' row %d\n", v160, entry, v148, *((const char **)_RBX - 3), v157);
          v63 = *((_DWORD *)_RBX + 4);
        }
        Core_strcpy((char *)structure + *((_QWORD *)_RBX - 2), v63, entry);
        v15 = v164;
        goto LABEL_56;
      case 2:
        *(_DWORD *)((char *)structure + *((_QWORD *)_RBX - 2)) = SND_HashName(entry);
        goto LABEL_56;
      case 3:
        v56 = j_sscanf(entry, "%d", &v161);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbx]
          vmovsd  xmm1, qword ptr [rbx+8]
        }
        v57 = v56 != 1;
        __asm { vucomisd xmm0, xmm1 }
        if ( v56 == 1 )
          goto LABEL_45;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v161 < _EAX )
          goto LABEL_44;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v161 <= _EAX )
LABEL_45:
          v60 = 0;
        else
LABEL_44:
          v60 = 1;
        if ( !v57 && !v60 )
        {
          *(_DWORD *)((char *)structure + *((_QWORD *)_RBX - 2)) = v161;
          goto LABEL_56;
        }
        break;
      case 4:
        v38 = j_sscanf(entry, "%f", &v159);
        __asm
        {
          vmovsd  xmm2, qword ptr [rbx]
          vmovsd  xmm3, qword ptr [rbx+8]
        }
        v41 = v38 != 1;
        __asm { vucomisd xmm2, xmm3 }
        if ( v38 == 1 )
        {
          v45 = 0;
        }
        else
        {
          __asm
          {
            vmovss  xmm1, [rsp+910h+var_8D0]
            vcvtss2sd xmm0, xmm1, xmm1
            vcomisd xmm0, xmm2
          }
          if ( v38 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm1, xmm1
              vcomisd xmm0, xmm3
            }
          }
          v45 = 1;
        }
        if ( v41 || v45 )
        {
          LODWORD(v158) = row_number;
          __asm
          {
            vmovsd  qword ptr [rsp+910h+var_8F0+8], xmm3
            vmovsd  qword ptr [rsp+910h+var_8F0], xmm2
          }
          Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v160, entry, v149, v154, *((const char **)_RBX - 3), v158);
        }
        else if ( I_stricmp(*((const char **)_RBX - 3), "DuckAliasHpf") && I_stricmp(*((const char **)_RBX - 3), "DuckAliasLpf") )
        {
          if ( I_stricmp(*((const char **)_RBX - 3), "DuckAliasAttenuation") )
          {
            _RAX = *((_QWORD *)_RBX - 2);
            __asm
            {
              vmovss  xmm0, [rsp+910h+var_8D0]
              vmovss  dword ptr [rax+r13], xmm0
            }
          }
          else
          {
            __asm
            {
              vmulss  xmm1, xmm8, [rsp+910h+var_8D0]; Y
              vmovaps xmm0, xmm9; X
            }
            *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            _RAX = *((_QWORD *)_RBX - 2);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm10
              vblendvps xmm0, xmm0, xmm11, xmm1
              vmovss  dword ptr [rax+r13], xmm0
            }
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm6, [rsp+910h+var_8D0]; X
            vmovaps xmm1, xmm7; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          _RAX = *((_QWORD *)_RBX - 2);
          __asm { vmovss  dword ptr [rax+r13], xmm0 }
        }
        goto LABEL_56;
      case 6:
        v31 = j_sscanf(entry, "%d", &v161);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbx]
          vmovsd  xmm1, qword ptr [rbx+8]
        }
        v34 = v31 != 1;
        __asm { vucomisd xmm0, xmm1 }
        if ( v31 == 1 )
          goto LABEL_23;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v161 < _EAX )
          goto LABEL_22;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v161 <= _EAX )
LABEL_23:
          v37 = 0;
        else
LABEL_22:
          v37 = 1;
        if ( !v34 && !v37 )
        {
          *(_WORD *)((char *)structure + *((_QWORD *)_RBX - 2)) = v161;
          goto LABEL_56;
        }
        break;
      default:
        LODWORD(v153) = row_number;
        Com_PrintError(9, "ERROR: %s field not found: Entry %s, name %s, row_number %d\n", v160, entry, *((const char **)_RBX - 3), v153);
LABEL_56:
        if ( v15 )
          *v24 = 1;
        v19 = v20;
        goto LABEL_59;
    }
    LODWORD(v158) = row_number;
    __asm
    {
      vcvttsd2si ecx, xmm1
      vcvttsd2si edx, xmm0
    }
    LODWORD(v153) = _ECX;
    LODWORD(v148) = _EDX;
    Com_PrintError(9, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %d\n", v160, entry, v148, v153, *((const char **)_RBX - 3), v158);
    goto LABEL_56;
  }
  VolModIndexFromName = SND_GetVolModIndexFromName(propName);
  _RDI = (int)VolModIndexFromName;
  if ( VolModIndexFromName > 0x7F )
  {
    Com_PrintError(9, "ERROR: Invalid duck group name (%s) in %s. Row %s\n", propName, filename, entry);
  }
  else
  {
    v71 = 0x7FFFFFFFi64;
    v72 = 0i64;
    v73 = 0x7FFFFFFFi64;
    v74 = 0i64;
    do
    {
      v75 = (unsigned __int8)valuePropName[v74];
      v76 = v73;
      v77 = (unsigned __int8)aHpf[v74++];
      --v73;
      __asm
      {
        vxorpd  xmm7, xmm7, xmm7
        vxorps  xmm6, xmm6, xmm6
      }
      if ( !v76 )
        break;
      if ( v75 != v77 )
      {
        v78 = v75 + 32;
        if ( (unsigned int)(v75 - 65) > 0x19 )
          v78 = v75;
        v75 = v78;
        v79 = v77 + 32;
        if ( (unsigned int)(v77 - 65) > 0x19 )
          v79 = v77;
        if ( v75 != v79 )
        {
          v84 = 0x7FFFFFFFi64;
          v85 = 0i64;
          do
          {
            v86 = (unsigned __int8)valuePropName[v85];
            v87 = v84;
            v88 = (unsigned __int8)aLpf_1[v85++];
            --v84;
            if ( !v87 )
              break;
            if ( v86 != v88 )
            {
              v89 = v86 + 32;
              if ( (unsigned int)(v86 - 65) > 0x19 )
                v89 = v86;
              v86 = v89;
              v90 = v88 + 32;
              if ( (unsigned int)(v88 - 65) > 0x19 )
                v90 = v88;
              if ( v86 != v90 )
              {
                v95 = 0x7FFFFFFFi64;
                v96 = 0i64;
                do
                {
                  v97 = (unsigned __int8)valuePropName[v96];
                  v98 = v95;
                  v99 = (unsigned __int8)aAttenuation_0[v96++];
                  --v95;
                  if ( !v98 )
                    break;
                  if ( v97 != v99 )
                  {
                    v100 = v97 + 32;
                    if ( (unsigned int)(v97 - 65) > 0x19 )
                      v100 = v97;
                    v97 = v100;
                    v101 = v99 + 32;
                    if ( (unsigned int)(v99 - 65) > 0x19 )
                      v101 = v99;
                    if ( v97 != v101 )
                      goto LABEL_115;
                  }
                }
                while ( v97 );
                v102 = j_sscanf(entry, "%f", &v159);
                __asm { vmovss  xmm0, [rsp+910h+var_8D0] }
                v104 = v102 != 1;
                __asm { vcomiss xmm0, cs:__real@c2c80000 }
                if ( !v102 )
                  goto LABEL_99;
                __asm { vcomiss xmm0, cs:__real@42f00000 }
                if ( v102 <= 1 )
                  v105 = 0;
                else
LABEL_99:
                  v105 = 1;
                if ( v104 || v105 )
                {
                  __asm
                  {
                    vmovaps xmm0, cs:__xmm@405e000000000000c059000000000000
                    vmovups [rsp+910h+var_8F0], xmm0
                  }
                  Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v160, entry, *(double *)&v150, *((double *)&v150 + 1), SND_DUCK_VALUE[7].jsonName, row_number);
                }
                else
                {
                  __asm
                  {
                    vmulss  xmm1, xmm0, cs:__real@3d4ccccd; Y
                    vmovss  xmm0, cs:__real@41200000; X
                  }
                  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
                  _RAX = *((_QWORD *)structure + 13);
                  __asm
                  {
                    vcmpltss xmm1, xmm0, cs:__real@37803e84
                    vblendvps xmm0, xmm0, xmm6, xmm1
                    vmovss  dword ptr [rax+rdi*4], xmm0
                  }
                }
                goto LABEL_115;
              }
            }
          }
          while ( v86 );
          v91 = j_sscanf(entry, "%f", &v159);
          __asm { vmovss  xmm0, [rsp+910h+var_8D0] }
          v93 = v91 != 1;
          __asm { vcomiss xmm0, xmm6 }
          if ( !v91 )
            goto LABEL_104;
          __asm { vcomiss xmm0, cs:__real@46bb8000 }
          if ( v91 <= 1 )
            v94 = 0;
          else
LABEL_104:
            v94 = 1;
          if ( !v93 && !v94 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, cs:__real@382ec33e; X
              vmovss  xmm1, cs:__real@3eaaaaab; Y
            }
            *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            _RAX = *((_QWORD *)structure + 15);
            __asm { vmovss  dword ptr [rax+rdi*4], xmm0 }
            goto LABEL_115;
          }
          jsonName = SND_DUCK_VALUE[6].jsonName;
          goto LABEL_114;
        }
      }
    }
    while ( v75 );
    v80 = j_sscanf(entry, "%f", &v159);
    __asm { vmovss  xmm0, [rsp+910h+var_8D0] }
    v82 = v80 != 1;
    __asm { vcomiss xmm0, xmm6 }
    if ( !v80 )
      goto LABEL_109;
    __asm { vcomiss xmm0, cs:__real@46bb8000 }
    if ( v80 <= 1 )
      v83 = 0;
    else
LABEL_109:
      v83 = 1;
    if ( !v82 && !v83 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@382ec33e; X
        vmovss  xmm1, cs:__real@3eaaaaab; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      _RAX = *((_QWORD *)structure + 14);
      __asm { vmovss  dword ptr [rax+rdi*4], xmm0 }
      goto LABEL_115;
    }
    jsonName = SND_DUCK_VALUE[5].jsonName;
LABEL_114:
    __asm
    {
      vmovsd  xmm0, cs:__real@40d7700000000000
      vmovsd  qword ptr [rsp+910h+var_8F0+8], xmm0
      vmovsd  qword ptr [rsp+910h+var_8F0], xmm7
    }
    Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v160, entry, v151, v155, jsonName, row_number);
LABEL_115:
    v120 = 0x7FFFFFFFi64;
    v121 = 0i64;
    do
    {
      v122 = (unsigned __int8)valuePropName[v121];
      v123 = v120;
      v124 = (unsigned __int8)aFocuscone_1[v121++];
      --v120;
      if ( !v123 )
        break;
      if ( v122 != v124 )
      {
        v125 = v122 + 32;
        if ( (unsigned int)(v122 - 65) > 0x19 )
          v125 = v122;
        v122 = v125;
        v126 = v124 + 32;
        if ( (unsigned int)(v124 - 65) > 0x19 )
          v126 = v124;
        if ( v122 != v126 )
          goto LABEL_125;
      }
    }
    while ( v122 );
    *(_DWORD *)(*((_QWORD *)structure + 17) + 4 * _RDI) = SND_HashName(entry);
LABEL_125:
    v127 = 0x7FFFFFFFi64;
    v128 = 0i64;
    while ( 1 )
    {
      v129 = (unsigned __int8)valuePropName[v128];
      v130 = v127;
      v131 = (unsigned __int8)aFocusamount[v128++];
      --v127;
      if ( !v130 )
      {
LABEL_134:
        v134 = j_sscanf(entry, "%f", &v159);
        __asm { vmovss  xmm0, [rsp+910h+var_8D0] }
        v136 = v134 != 1;
        __asm { vcomiss xmm0, xmm6 }
        if ( !v134 )
          goto LABEL_146;
        __asm { vcomiss xmm0, cs:__real@3f800000 }
        if ( v134 <= 1 )
          v137 = 0;
        else
LABEL_146:
          v137 = 1;
        if ( v136 || v137 )
        {
          __asm { vmovsd  xmm0, cs:__real@3ff0000000000000 }
          LODWORD(v158) = row_number;
          __asm
          {
            vmovsd  qword ptr [rsp+910h+var_8F0+8], xmm0
            vmovsd  qword ptr [rsp+910h+var_8F0], xmm7
          }
          Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v160, entry, v152, v156, SND_DUCK_VALUE[10].jsonName, v158);
        }
        else
        {
          _RAX = *((_QWORD *)structure + 16);
          __asm { vmovss  dword ptr [rax+rdi*4], xmm0 }
        }
        goto LABEL_152;
      }
      if ( v129 != v131 )
      {
        v132 = v129 + 32;
        if ( (unsigned int)(v129 - 65) > 0x19 )
          v132 = v129;
        v129 = v132;
        v133 = v131 + 32;
        if ( (unsigned int)(v131 - 65) > 0x19 )
          v133 = v131;
        if ( v129 != v133 )
          break;
      }
      if ( !v129 )
        goto LABEL_134;
    }
    do
    {
      v138 = (unsigned __int8)valuePropName[v72];
      v139 = v71;
      v140 = (unsigned __int8)aUsedefaultvalu_0[v72++];
      --v71;
      if ( !v139 )
        break;
      if ( v138 != v140 )
      {
        v141 = v138 + 32;
        if ( (unsigned int)(v138 - 65) > 0x19 )
          v141 = v138;
        v138 = v141;
        v142 = v140 + 32;
        if ( (unsigned int)(v140 - 65) > 0x19 )
          v142 = v140;
        if ( v138 != v142 )
          break;
      }
    }
    while ( v138 );
  }
LABEL_152:
  __asm
  {
    vmovaps xmm7, [rsp+910h+var_50]
    vmovaps xmm6, [rsp+910h+var_40]
  }
  return v19;
}

/*
==============
SND_JsonSetField
==============
*/
__int64 SND_JsonSetField(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  const char *v8; 
  const char *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  bool *v15; 
  bool *i; 
  __int64 v17; 
  __int64 v18; 
  const char *v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  bool v29; 
  char v32; 
  int v33; 
  bool v37; 
  char v40; 
  int v42; 
  bool v43; 
  char v46; 
  int v49; 
  unsigned __int64 v50; 
  char *fmt; 
  char *fmta; 
  __int64 v54; 
  double v55; 
  __int64 v56; 
  __int64 v57; 
  int v58; 
  int v59; 
  unsigned int v62; 

  v8 = column_name;
  v9 = filename;
  v10 = 0;
  v11 = -1;
  v62 = 0;
  if ( entry_count )
  {
    v12 = entry_count;
    _RBX = (char *)entries + 24;
    _R12 = structure;
    v15 = has;
    for ( i = has; ; ++i )
    {
      v17 = *((_QWORD *)_RBX - 3);
      if ( v17 )
        break;
LABEL_64:
      v9 = filename;
      ++v10;
      _RBX += 72;
      v62 = v10;
      if ( v10 >= v12 )
        return v11;
    }
    v18 = 0x7FFFFFFFi64;
    v19 = v8;
    if ( !v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v15 = has;
      v8 = column_name;
      v9 = filename;
      v10 = v62;
    }
    v20 = v17 - (_QWORD)v8;
    do
    {
      v21 = (unsigned __int8)v19[v20];
      v22 = v18;
      v23 = *(unsigned __int8 *)v19++;
      --v18;
      if ( !v22 )
        break;
      if ( v21 != v23 )
      {
        v24 = v21 + 32;
        if ( (unsigned int)(v21 - 65) > 0x19 )
          v24 = v21;
        v21 = v24;
        v25 = v23 + 32;
        if ( (unsigned int)(v23 - 65) > 0x19 )
          v25 = v23;
        if ( v21 != v25 )
          goto LABEL_63;
      }
    }
    while ( v21 );
    if ( (!entry || !*entry) && *((_DWORD *)_RBX - 2) != 2 && v15 )
      *i = 1;
    switch ( *((_DWORD *)_RBX - 2) )
    {
      case 1:
        v49 = *((_DWORD *)_RBX + 4);
        v50 = -1i64;
        do
          ++v50;
        while ( entry[v50] );
        if ( truncate_cast<int,unsigned __int64>(v50) > v49 - 1 )
        {
          LODWORD(v56) = row_number;
          LODWORD(fmt) = v49;
          Com_PrintError(9, "ERROR: %s string too long: %s (max %d) col '%s' row %u\n", filename, entry, fmt, *((const char **)_RBX - 3), v56);
          v49 = *((_DWORD *)_RBX + 4);
        }
        Core_strcpy((char *)structure + *((_QWORD *)_RBX - 2), v49, entry);
        break;
      case 2:
        *(_DWORD *)((char *)structure + *((_QWORD *)_RBX - 2)) = SND_HashName(entry);
        break;
      case 3:
        v42 = j_sscanf(entry, "%d", &v58);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbx]
          vmovsd  xmm1, qword ptr [rbx+8]
        }
        v43 = v42 != 1;
        __asm { vucomisd xmm0, xmm1 }
        if ( v42 == 1 )
          goto LABEL_49;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v58 < _EAX )
          goto LABEL_48;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v58 <= _EAX )
LABEL_49:
          v46 = 0;
        else
LABEL_48:
          v46 = 1;
        if ( !v43 && !v46 )
        {
          *(_DWORD *)((char *)structure + *((_QWORD *)_RBX - 2)) = v58;
          break;
        }
        goto LABEL_53;
      case 4:
        v33 = j_sscanf(entry, "%f", &v59);
        __asm
        {
          vmovsd  xmm2, qword ptr [rbx]
          vmovsd  xmm3, qword ptr [rbx+8]
          vmovss  xmm1, [rsp+98h+var_54]
        }
        v37 = v33 != 1;
        __asm { vucomisd xmm2, xmm3 }
        if ( v33 == 1 )
        {
          v40 = 0;
        }
        else
        {
          __asm
          {
            vcvtss2sd xmm0, xmm1, xmm1
            vcomisd xmm0, xmm2
          }
          if ( v33 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm1, xmm1
              vcomisd xmm0, xmm3
            }
          }
          v40 = 1;
        }
        if ( v37 || v40 )
        {
          LODWORD(v57) = row_number;
          __asm
          {
            vmovsd  [rsp+98h+var_70], xmm3
            vmovsd  [rsp+98h+fmt], xmm2
          }
          Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %u\n", filename, entry, *(double *)&fmta, v55, *((const char **)_RBX - 3), v57);
        }
        else
        {
          _RAX = *((_QWORD *)_RBX - 2);
          __asm { vmovss  dword ptr [r12+rax], xmm1 }
        }
        break;
      case 6:
        v26 = j_sscanf(entry, "%d", &v58);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbx]
          vmovsd  xmm1, qword ptr [rbx+8]
        }
        v29 = v26 != 1;
        __asm { vucomisd xmm0, xmm1 }
        if ( v26 == 1 )
          goto LABEL_32;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v58 < _EAX )
          goto LABEL_31;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v58 <= _EAX )
LABEL_32:
          v32 = 0;
        else
LABEL_31:
          v32 = 1;
        if ( !v29 && !v32 )
        {
          *(_WORD *)((char *)structure + *((_QWORD *)_RBX - 2)) = v58;
          break;
        }
LABEL_53:
        LODWORD(v57) = row_number;
        __asm
        {
          vcvttsd2si ecx, xmm1
          vcvttsd2si edx, xmm0
        }
        LODWORD(v54) = _ECX;
        LODWORD(fmt) = _EDX;
        Com_PrintError(9, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %u\n", filename, entry, fmt, v54, *((const char **)_RBX - 3), v57);
        break;
      default:
        LODWORD(v54) = row_number;
        Com_PrintError(9, "ERROR: %s field not found: Entry %s, name %s, row_number %u\n", v9, entry, *((const char **)_RBX - 3), v54);
        break;
    }
    v15 = has;
    if ( has )
      *i = 1;
    v10 = v62;
    v11 = v62;
LABEL_63:
    v12 = entry_count;
    v8 = column_name;
    goto LABEL_64;
  }
  return v11;
}

/*
==============
SND_ParseInit
==============
*/
void SND_ParseInit(const SndGlobals *p_globals)
{
  __int64 v2; 
  unsigned int i; 
  __int64 v4; 

  memset_0(ENTCHANNELS, 0, sizeof(ENTCHANNELS));
  v2 = 0i64;
  for ( i = 0; i < p_globals->entchannelCount; ENTCHANNELS[v4] = p_globals->entchannelInfo[v4].name )
    v4 = i++;
  memset_0(VOLMODS, 0, sizeof(VOLMODS));
  if ( p_globals->volmodinfoCount )
  {
    do
    {
      VOLMODS[v2] = p_globals->volmodinfo[v2].name;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < p_globals->volmodinfoCount );
  }
}

/*
==============
Snd_GetStringFlags
==============
*/
__int64 Snd_GetStringFlags(const char *flags, const SndCsvParseEntry *p_entry, const char *sourceFile)
{
  char v3; 
  unsigned int v4; 
  char *i; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  int StringIndex; 
  char value[64]; 

  v3 = *flags;
  v4 = 0;
  for ( i = (char *)flags; *i; v3 = *i )
  {
    do
    {
      if ( (unsigned __int8)(v3 - 9) > 0x17u )
        break;
      v3 = *++i;
    }
    while ( v3 );
    v8 = 0i64;
    v9 = (char *)(value - i);
    do
    {
      v10 = (unsigned __int8)*i;
      if ( !(_BYTE)v10 )
        break;
      if ( (unsigned __int8)(v10 - 9) <= 0x17u )
        break;
      i[(_QWORD)v9] = v10;
      v8 = (unsigned int)(v8 + 1);
      ++i;
    }
    while ( (unsigned int)v8 < 0x40 );
    if ( (unsigned int)v8 >= 0x40ui64 )
    {
      j___report_rangecheckfailure(v10);
      JUMPOUT(0x1416EFDD1i64);
    }
    value[v8] = 0;
    if ( value[0] )
    {
      StringIndex = Snd_GetStringIndex(value, p_entry, sourceFile);
      if ( StringIndex >= 0 )
        v4 |= StringIndex;
    }
  }
  return v4;
}

/*
==============
Snd_GetStringIndex
==============
*/
int Snd_GetStringIndex(const char *value, const SndCsvParseEntry *p_entry, const char *sourceFile)
{
  int result; 
  const char **enum_ids; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  signed __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  const char *i; 
  const char *v21; 

  _R14 = p_entry;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 24, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 25, ASSERT_TYPE_ASSERT, "(p_entry)", (const char *)&queryFormat, "p_entry") )
    __debugbreak();
  if ( !_R14->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 26, ASSERT_TYPE_ASSERT, "(p_entry->name)", (const char *)&queryFormat, "p_entry->name") )
    __debugbreak();
  if ( !_R14->enum_ids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 27, ASSERT_TYPE_ASSERT, "(p_entry->enum_ids)", (const char *)&queryFormat, "p_entry->enum_ids") )
    __debugbreak();
  if ( !sourceFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 28, ASSERT_TYPE_ASSERT, "(sourceFile)", (const char *)&queryFormat, "sourceFile") )
    __debugbreak();
  if ( *value || _R14->required )
  {
    enum_ids = _R14->enum_ids;
    LODWORD(v8) = 0;
    LODWORD(v9) = 0;
    if ( *enum_ids )
    {
      v10 = 0i64;
      do
      {
        v11 = enum_ids[v10];
        v12 = 0x7FFFFFFFi64;
        v13 = value;
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v14 = v11 - value;
        while ( 1 )
        {
          v15 = (unsigned __int8)v13[v14];
          v16 = v12;
          v17 = *(unsigned __int8 *)v13++;
          --v12;
          if ( !v16 )
            return v9;
          if ( v15 != v17 )
          {
            v18 = v15 + 32;
            if ( (unsigned int)(v15 - 65) > 0x19 )
              v18 = v15;
            v15 = v18;
            v19 = v17 + 32;
            if ( (unsigned int)(v17 - 65) > 0x19 )
              v19 = v17;
            if ( v15 != v19 )
              break;
          }
          if ( !v15 )
            return v9;
        }
        enum_ids = _R14->enum_ids;
        v9 = (unsigned int)(v9 + 1);
        v10 = v9;
      }
      while ( enum_ids[v9] );
    }
    Com_PrintError(1, "ERROR: Sound alias file %s: Unknown %s '%s'; should be one of ", sourceFile, _R14->name, value);
    for ( i = *_R14->enum_ids; i; i = _R14->enum_ids[v8] )
    {
      v21 = (char *)&queryFormat.fmt + 3;
      if ( (_DWORD)v8 )
        v21 = ",";
      Com_PrintError(1, "%s%s", v21, i);
      v8 = (unsigned int)(v8 + 1);
    }
    Com_PrintError(1, "\n");
    return -1;
  }
  else
  {
    __asm { vcvttss2si eax, dword ptr [r14+24h] }
  }
  return result;
}

