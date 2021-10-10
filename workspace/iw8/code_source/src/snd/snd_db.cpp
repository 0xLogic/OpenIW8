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
  __int64 v8; 
  const char *v9; 
  const char *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  const char *v15; 
  __int64 v16; 
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
  bool v27; 
  bool *v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  float v34; 
  float v35; 
  bool v36; 
  bool v37; 
  __int64 v38; 
  const char *v39; 
  int v40; 
  float v41; 
  float v42; 
  bool v43; 
  bool v44; 
  __int64 v45; 
  int v46; 
  bool v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  bool v52; 
  __int64 v53; 
  int v54; 
  float v55; 
  float v56; 
  float v57; 
  bool v58; 
  bool v59; 
  int v60; 
  int StringIndex; 
  int v62; 
  int v63; 
  int v64; 
  int StringFlags; 
  __int64 v66; 
  int v67; 
  float v68; 
  bool v69; 
  bool v70; 
  float v71; 
  int v72; 
  bool v73; 
  bool v74; 
  float v75; 
  int v76; 
  float v77; 
  bool v78; 
  bool v79; 
  float v80; 
  int v84; 
  float v85; 
  bool v86; 
  bool v87; 
  float v88; 
  int v92; 
  float v93; 
  bool v94; 
  bool v95; 
  float v96; 
  int v100; 
  float v101; 
  bool v102; 
  bool v103; 
  int v104; 
  int v105; 
  bool v106; 
  bool v107; 
  int v108; 
  float v109; 
  bool v110; 
  bool v111; 
  char *fmt; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  int v117; 
  __int64 v118; 
  __int64 v119; 
  float v122; 
  const char *v123; 

  v123 = column_name;
  LODWORD(v8) = 0;
  v9 = column_name;
  v118 = 0i64;
  v11 = filename;
  v12 = -1;
  if ( entry_count )
  {
    v13 = entry_count;
    v14 = 0i64;
    v15 = entry;
    v119 = 0i64;
    do
    {
      v16 = 6 * v14;
      v17 = *((_QWORD *)entries + 6 * v14);
      if ( v17 )
      {
        v18 = 0x7FFFFFFFi64;
        v19 = v9;
        if ( !v9 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v9 = v123;
          v11 = filename;
          LODWORD(v8) = v118;
          v14 = v119;
        }
        v20 = v17 - (_QWORD)v9;
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
              goto LABEL_190;
          }
        }
        while ( v21 );
        if ( v15 && *v15 || (v26 = *((_DWORD *)entries + 2 * v16 + 5), v26 == 9) )
        {
          v28 = has;
          v29 = v119;
        }
        else
        {
          v27 = v26 == 4 || v26 == 11;
          if ( *((_BYTE *)entries + 8 * v16 + 16) && !v27 )
            Com_PrintError(1, "ERROR: %s row %u had empty required column %s\n", v11, row_number, *((const char **)entries + v16));
          v28 = has;
          v29 = v119;
          if ( has )
            has[v119] = 1;
        }
        switch ( *((_DWORD *)entries + 2 * v16 + 5) )
        {
          case 0:
            v30 = -1i64;
            do
              ++v30;
            while ( v15[v30] );
            if ( v30 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v30, "unsigned", v30) )
              __debugbreak();
            v31 = *((_DWORD *)entries + 2 * v16 + 8);
            if ( (unsigned int)v30 > v31 - 1 )
            {
              LODWORD(v115) = row_number;
              LODWORD(fmt) = *((_DWORD *)entries + 2 * v16 + 8);
              Com_PrintError(1, "ERROR: %s string too long: %s (max %u) col '%s' row %u\n", filename, v15, fmt, *((const char **)entries + v16), v115);
              v31 = *((_DWORD *)entries + 2 * v16 + 8);
            }
            Core_strcpy((char *)structure + *((_QWORD *)entries + v16 + 1), v31, v15);
            goto LABEL_187;
          case 1:
            v33 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v36 = v33 != 1;
            v37 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v36 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_50;
              v38 = *((_QWORD *)entries + v16 + 1);
              v122 = *((float *)entries + 2 * v16 + 9);
              *(float *)((char *)structure + v38) = v122;
            }
            else
            {
              if ( v37 )
              {
LABEL_50:
                v39 = "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %u\n";
                goto LABEL_186;
              }
              *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = v122;
            }
            goto LABEL_187;
          case 2:
            v40 = j_sscanf(v15, "%d", &v117);
            v41 = *((float *)entries + 2 * v16 + 6);
            v42 = *((float *)entries + 2 * v16 + 7);
            v43 = v40 != 1;
            v44 = v41 != v42 && (v117 < (int)v41 || v117 > (int)v42);
            if ( v43 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_61;
              v45 = *((_QWORD *)entries + v16 + 1);
              v117 = (int)*((float *)entries + 2 * v16 + 9);
              *(_DWORD *)((char *)structure + v45) = v117;
            }
            else
            {
              if ( v44 )
                goto LABEL_61;
              *(_DWORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = v117;
            }
            goto LABEL_187;
          case 3:
            StringIndex = Snd_GetStringIndex(v15, (const SndCsvParseEntry *)entries + (unsigned int)v118, filename);
            v117 = StringIndex;
            if ( StringIndex >= 0 )
              *(_DWORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = StringIndex;
            goto LABEL_187;
          case 4:
            StringFlags = Snd_GetStringFlags(v15, (const SndCsvParseEntry *)entries + (unsigned int)v118, filename);
            v66 = *((_QWORD *)entries + v16 + 1);
            v117 = StringFlags;
            *(_DWORD *)((char *)structure + v66) = StringFlags;
            goto LABEL_187;
          case 5:
            v76 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v77 = v122;
            v78 = v76 != 1;
            v79 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v78 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_185;
              v77 = *((float *)entries + 2 * v16 + 9);
              v122 = v77;
            }
            else if ( v79 )
            {
              goto LABEL_185;
            }
            v80 = (float)(v77 - 100.0) * 0.050000001;
            _XMM0 = LODWORD(FLOAT_10_0);
            *(float *)&_XMM0 = powf_0(10.0, v80);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm9
              vblendvps xmm0, xmm0, xmm6, xmm1
            }
            *(_WORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = (int)(float)(*(float *)&_XMM0 * 65535.0);
            goto LABEL_187;
          case 6:
            v84 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v85 = v122;
            v86 = v84 != 1;
            v87 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v86 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_185;
              v85 = *((float *)entries + 2 * v16 + 9);
              v122 = v85;
            }
            else if ( v87 )
            {
              goto LABEL_185;
            }
            v88 = (float)(v85 - 100.0) * 0.050000001;
            goto LABEL_142;
          case 7:
            v67 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v68 = v122;
            v69 = v67 != 1;
            v70 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v69 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_185;
              v68 = *((float *)entries + 2 * v16 + 9);
              v122 = v68;
            }
            else if ( v70 )
            {
              goto LABEL_185;
            }
            v71 = exp2f(v68 * 0.00083333335) * 32767.0;
            *(_WORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = (int)v71;
            goto LABEL_187;
          case 8:
            v72 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v73 = v72 != 1;
            v74 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v73 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_185;
              v122 = *((float *)entries + 2 * v16 + 9);
              v75 = exp2f(v122 * 0.083333336);
              *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = v75;
            }
            else
            {
              if ( v74 )
                goto LABEL_185;
              *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = exp2f(v122 * 0.083333336);
            }
            goto LABEL_187;
          case 9:
            v32 = SND_HashName(v15);
            *(_DWORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = v32;
            goto LABEL_187;
          case 0xA:
            v62 = Snd_GetStringIndex(v15, (const SndCsvParseEntry *)entries + (unsigned int)v118, filename);
            goto LABEL_98;
          case 0xB:
            v62 = Snd_GetStringFlags(v15, (const SndCsvParseEntry *)entries + (unsigned int)v118, filename);
LABEL_98:
            v117 = v62;
            if ( v62 >= 0 )
            {
              v63 = (int)*((float *)entries + 2 * v16 + 7);
              v64 = (1 << (int)*((float *)entries + 2 * v16 + 6)) - 1;
              *(_DWORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = ((v62 & v64) << v63) | *(_DWORD *)((_BYTE *)structure + *((_QWORD *)entries + v16 + 1)) & ~(v64 << v63);
            }
            goto LABEL_187;
          case 0xC:
            v50 = j_sscanf(v15, "%d", &v117);
            v41 = *((float *)entries + 2 * v16 + 6);
            v42 = *((float *)entries + 2 * v16 + 7);
            v51 = v50 != 1;
            v52 = v41 != v42 && (v117 < (int)v41 || v117 > (int)v42);
            if ( v51 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_61;
              v53 = *((_QWORD *)entries + v16 + 1);
              v117 = (int)*((float *)entries + 2 * v16 + 9);
              *((_BYTE *)structure + v53) = v117;
            }
            else
            {
              if ( v52 )
                goto LABEL_61;
              *((_BYTE *)structure + *((_QWORD *)entries + v16 + 1)) = v117;
            }
            goto LABEL_187;
          case 0xD:
            v60 = Snd_GetStringIndex(v15, (const SndCsvParseEntry *)entries + (unsigned int)v118, filename);
            v117 = v60;
            if ( v60 >= 0 )
              *((_BYTE *)structure + *((_QWORD *)entries + v16 + 1)) = v60;
            goto LABEL_187;
          case 0xE:
          case 0xF:
            v46 = j_sscanf(v15, "%d", &v117);
            v41 = *((float *)entries + 2 * v16 + 6);
            v42 = *((float *)entries + 2 * v16 + 7);
            v47 = v46 != 1;
            v48 = v41 != v42 && (v117 < (int)v41 || v117 > (int)v42);
            if ( v47 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_61;
              v49 = *((_QWORD *)entries + v16 + 1);
              v117 = (int)*((float *)entries + 2 * v16 + 9);
              *(_WORD *)((char *)structure + v49) = v117;
            }
            else
            {
              if ( v48 )
                goto LABEL_61;
              *(_WORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = v117;
            }
            goto LABEL_187;
          case 0x10:
            v54 = j_sscanf(v15, "%f", &v122);
            v55 = *((float *)entries + 2 * v16 + 6);
            v56 = *((float *)entries + 2 * v16 + 7);
            v57 = v122;
            v58 = v54 != 1;
            v59 = v55 != v56 && (v122 < (float)(int)v55 || v122 > (float)(int)v56);
            if ( v58 )
            {
              if ( !*((_BYTE *)entries + 8 * v16 + 16) )
              {
                v57 = *((float *)entries + 2 * v16 + 9);
                v122 = v57;
LABEL_91:
                *((_BYTE *)structure + *((_QWORD *)entries + v16 + 1)) = (int)(float)(v57 * 255.0);
                goto LABEL_187;
              }
            }
            else if ( !v59 )
            {
              goto LABEL_91;
            }
            LODWORD(v116) = row_number;
            LODWORD(v114) = (int)v56;
            LODWORD(fmt) = (int)v55;
            Com_PrintError(1, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %u\n", filename, v15, fmt, v114, *((_QWORD *)entries + v16), v116);
            goto LABEL_187;
          case 0x11:
            v104 = j_sscanf(v15, "%d", &v117);
            v41 = *((float *)entries + 2 * v16 + 6);
            v42 = *((float *)entries + 2 * v16 + 7);
            v105 = v117;
            v106 = v104 != 1;
            v107 = v41 != v42 && (v117 < (int)v41 || v117 > (int)v42);
            if ( v106 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_61;
              v105 = (int)*((float *)entries + 2 * v16 + 9);
              v117 = v105;
            }
            else if ( v107 )
            {
LABEL_61:
              LODWORD(v116) = row_number;
              LODWORD(v114) = (int)v42;
              LODWORD(fmt) = (int)v41;
              Com_PrintError(1, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %u\n", filename, v15, fmt, v114, *((_QWORD *)entries + v16), v116);
              goto LABEL_187;
            }
            *(_WORD *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = v105 / 2;
            goto LABEL_187;
          case 0x12:
            v92 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v93 = v122;
            v94 = v92 != 1;
            v95 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v94 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_185;
              v93 = *((float *)entries + 2 * v16 + 9);
              v122 = v93;
            }
            else if ( v95 )
            {
              goto LABEL_185;
            }
            v96 = v93 * 0.050000001;
            _XMM0 = LODWORD(FLOAT_10_0);
            *(float *)&_XMM0 = powf_0(10.0, v96);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm9
              vblendvps xmm0, xmm0, xmm6, xmm1
            }
            *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = *(float *)&_XMM0;
            goto LABEL_187;
          case 0x13:
            v100 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v101 = v122;
            v102 = v100 != 1;
            v103 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v102 )
            {
              if ( *((_BYTE *)entries + 8 * v16 + 16) )
                goto LABEL_185;
              v101 = *((float *)entries + 2 * v16 + 9);
              v122 = v101;
            }
            else if ( v103 )
            {
              goto LABEL_185;
            }
            if ( (float)(v101 - 12.0) > -100.0 )
            {
              v88 = (float)(v101 - 12.0) * 0.050000001;
LABEL_142:
              _XMM0 = LODWORD(FLOAT_10_0);
              *(float *)&_XMM0 = powf_0(10.0, v88);
              __asm
              {
                vcmpltss xmm1, xmm0, xmm9
                vblendvps xmm0, xmm0, xmm6, xmm1
              }
              *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = *(float *)&_XMM0;
            }
            else
            {
              *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = 0;
            }
            goto LABEL_187;
          case 0x14:
            v108 = j_sscanf(v15, "%f", &v122);
            v34 = *((float *)entries + 2 * v16 + 6);
            v35 = *((float *)entries + 2 * v16 + 7);
            v109 = v122;
            v110 = v108 != 1;
            v111 = v34 != v35 && (v122 < v34 || v122 > v35);
            if ( v110 )
            {
              if ( !*((_BYTE *)entries + 8 * v16 + 16) )
              {
                v109 = *((float *)entries + 2 * v16 + 9);
                v122 = v109;
LABEL_184:
                *(float *)((char *)structure + *((_QWORD *)entries + v16 + 1)) = powf_0(v109 * 0.000041666666, 0.33333334);
                goto LABEL_187;
              }
            }
            else if ( !v111 )
            {
              goto LABEL_184;
            }
LABEL_185:
            v39 = "ERROR: %s invalid value %s [%f, %f] col '%s' row %u\n";
LABEL_186:
            LODWORD(v116) = row_number;
            Com_PrintError(1, v39, filename, v15, v34, v35, *((_QWORD *)entries + v16), v116);
LABEL_187:
            if ( v28 )
              v28[v29] = 1;
            LODWORD(v8) = v118;
            v14 = v119;
            v12 = v118;
LABEL_190:
            v13 = entry_count;
            v9 = v123;
            break;
          default:
            goto LABEL_187;
        }
      }
      v11 = filename;
      v8 = (unsigned int)(v8 + 1);
      ++v14;
      v118 = v8;
      v119 = v14;
    }
    while ( (unsigned int)v8 < v13 );
  }
  return v12;
}

/*
==============
SND_JsonSetDuck
==============
*/
__int64 SND_JsonSetDuck(const char *filename, unsigned int entry_count, const void *entries, const char *column_name, const char *entry, unsigned int row_number, void *structure, bool *has)
{
  bool *v9; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  bool *v16; 
  unsigned __int64 *i; 
  const char *v18; 
  int v19; 
  bool v22; 
  char v25; 
  int v26; 
  double v27; 
  double v28; 
  bool v29; 
  bool v30; 
  int v34; 
  bool v35; 
  char v38; 
  int v41; 
  unsigned __int64 v42; 
  unsigned int VolModIndexFromName; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  bool v54; 
  bool v55; 
  __int64 v56; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  int v61; 
  int v62; 
  bool v63; 
  bool v64; 
  __int64 v65; 
  __int64 v66; 
  int v67; 
  __int64 v68; 
  int v69; 
  int v70; 
  int v71; 
  bool v72; 
  bool v73; 
  const char *jsonName; 
  __int64 v78; 
  __int64 v79; 
  int v80; 
  __int64 v81; 
  int v82; 
  int v83; 
  int v84; 
  __int64 v85; 
  __int64 v86; 
  int v87; 
  __int64 v88; 
  int v89; 
  int v90; 
  int v91; 
  bool v92; 
  bool v93; 
  int v94; 
  __int64 v95; 
  int v96; 
  int v97; 
  int v98; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  float v104; 
  const char *v105; 
  int v106; 
  unsigned int v107; 
  char *s1; 
  bool *v109; 
  char valuePropName[1024]; 
  char propName[1024]; 
  __int128 v112; 

  v9 = has;
  s1 = (char *)column_name;
  v107 = entry_count;
  v13 = -1;
  v105 = filename;
  v109 = has;
  if ( !structure )
  {
    Com_PrintError(9, "ERROR: %s - missing duck structure: %s col '%s' row %d\n", filename, entry, column_name, row_number);
    return v13;
  }
  v112 = _XMM7;
  SND_DevHostParseDuckColumn(column_name, propName, valuePropName);
  if ( !valuePropName[0] )
  {
    v14 = 0;
    if ( !entry_count )
      return v13;
    v15 = v107;
    v16 = has;
    for ( i = (unsigned __int64 *)((char *)entries + 24); ; i += 9 )
    {
      v18 = (const char *)*(i - 3);
      if ( v18 )
        break;
LABEL_60:
      ++v14;
      ++v16;
      if ( v14 >= v15 )
        return v13;
    }
    if ( I_stricmp(v18, s1) )
    {
LABEL_59:
      v15 = v107;
      goto LABEL_60;
    }
    if ( (!entry || !*entry) && *((_DWORD *)i - 2) != 2 && v9 )
      *v16 = 1;
    switch ( *((_DWORD *)i - 2) )
    {
      case 1:
        v41 = *((_DWORD *)i + 4);
        v42 = -1i64;
        do
          ++v42;
        while ( entry[v42] );
        if ( truncate_cast<int,unsigned __int64>(v42) > v41 - 1 )
        {
          LODWORD(v102) = row_number;
          LODWORD(v100) = v41;
          Com_PrintError(9, "ERROR: %s string too long: %s (max %d) col '%s' row %d\n", v105, entry, v100, (const char *)*(i - 3), v102);
          v41 = *((_DWORD *)i + 4);
        }
        Core_strcpy((char *)structure + *(i - 2), v41, entry);
        v9 = v109;
        goto LABEL_56;
      case 2:
        *(_DWORD *)((char *)structure + *(i - 2)) = SND_HashName(entry);
        goto LABEL_56;
      case 3:
        v34 = j_sscanf(entry, "%d", &v106);
        _XMM0 = *i;
        _XMM1 = i[1];
        v35 = v34 != 1;
        if ( *(double *)&_XMM0 == *(double *)&_XMM1 )
          goto LABEL_45;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v106 < _EAX )
          goto LABEL_44;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v106 <= _EAX )
LABEL_45:
          v38 = 0;
        else
LABEL_44:
          v38 = 1;
        if ( !v35 && !v38 )
        {
          *(_DWORD *)((char *)structure + *(i - 2)) = v106;
          goto LABEL_56;
        }
        break;
      case 4:
        v26 = j_sscanf(entry, "%f", &v104);
        v27 = *(double *)i;
        v28 = *((double *)i + 1);
        v29 = v26 != 1;
        v30 = *(double *)i != v28 && (v104 < v27 || v104 > v28);
        if ( v29 || v30 )
        {
          LODWORD(v103) = row_number;
          Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v105, entry, v27, v28, (const char *)*(i - 3), v103);
        }
        else if ( I_stricmp((const char *)*(i - 3), "DuckAliasHpf") && I_stricmp((const char *)*(i - 3), "DuckAliasLpf") )
        {
          if ( I_stricmp((const char *)*(i - 3), "DuckAliasAttenuation") )
          {
            *(float *)((char *)structure + *(i - 2)) = v104;
          }
          else
          {
            _XMM0 = LODWORD(FLOAT_10_0);
            *(float *)&_XMM0 = powf_0(10.0, 0.050000001 * v104);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm10
              vblendvps xmm0, xmm0, xmm11, xmm1
            }
            *(float *)((char *)structure + *(i - 2)) = *(float *)&_XMM0;
          }
        }
        else
        {
          *(float *)((char *)structure + *(i - 2)) = powf_0(0.000041666666 * v104, 0.33333334);
        }
        goto LABEL_56;
      case 6:
        v19 = j_sscanf(entry, "%d", &v106);
        _XMM0 = *i;
        _XMM1 = i[1];
        v22 = v19 != 1;
        if ( *(double *)&_XMM0 == *(double *)&_XMM1 )
          goto LABEL_23;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v106 < _EAX )
          goto LABEL_22;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v106 <= _EAX )
LABEL_23:
          v25 = 0;
        else
LABEL_22:
          v25 = 1;
        if ( !v22 && !v25 )
        {
          *(_WORD *)((char *)structure + *(i - 2)) = v106;
          goto LABEL_56;
        }
        break;
      default:
        LODWORD(v101) = row_number;
        Com_PrintError(9, "ERROR: %s field not found: Entry %s, name %s, row_number %d\n", v105, entry, (const char *)*(i - 3), v101);
LABEL_56:
        if ( v9 )
          *v16 = 1;
        v13 = v14;
        goto LABEL_59;
    }
    LODWORD(v103) = row_number;
    __asm
    {
      vcvttsd2si ecx, xmm1
      vcvttsd2si edx, xmm0
    }
    LODWORD(v101) = _ECX;
    LODWORD(v100) = _EDX;
    Com_PrintError(9, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %d\n", v105, entry, v100, v101, (const char *)*(i - 3), v103);
    goto LABEL_56;
  }
  VolModIndexFromName = SND_GetVolModIndexFromName(propName);
  v44 = (int)VolModIndexFromName;
  if ( VolModIndexFromName > 0x7F )
  {
    Com_PrintError(9, "ERROR: Invalid duck group name (%s) in %s. Row %s\n", propName, filename, entry);
  }
  else
  {
    v45 = 0x7FFFFFFFi64;
    v46 = 0i64;
    v47 = 0x7FFFFFFFi64;
    v48 = 0i64;
    do
    {
      v49 = (unsigned __int8)valuePropName[v48];
      v50 = v47;
      v51 = (unsigned __int8)aHpf[v48++];
      --v47;
      __asm { vxorpd  xmm7, xmm7, xmm7 }
      if ( !v50 )
        break;
      if ( v49 != v51 )
      {
        v52 = v49 + 32;
        if ( (unsigned int)(v49 - 65) > 0x19 )
          v52 = v49;
        v49 = v52;
        v53 = v51 + 32;
        if ( (unsigned int)(v51 - 65) > 0x19 )
          v53 = v51;
        if ( v49 != v53 )
        {
          v56 = 0x7FFFFFFFi64;
          v57 = 0i64;
          do
          {
            v58 = (unsigned __int8)valuePropName[v57];
            v59 = v56;
            v60 = (unsigned __int8)aLpf_1[v57++];
            --v56;
            if ( !v59 )
              break;
            if ( v58 != v60 )
            {
              v61 = v58 + 32;
              if ( (unsigned int)(v58 - 65) > 0x19 )
                v61 = v58;
              v58 = v61;
              v62 = v60 + 32;
              if ( (unsigned int)(v60 - 65) > 0x19 )
                v62 = v60;
              if ( v58 != v62 )
              {
                v65 = 0x7FFFFFFFi64;
                v66 = 0i64;
                do
                {
                  v67 = (unsigned __int8)valuePropName[v66];
                  v68 = v65;
                  v69 = (unsigned __int8)aAttenuation_0[v66++];
                  --v65;
                  if ( !v68 )
                    break;
                  if ( v67 != v69 )
                  {
                    v70 = v67 + 32;
                    if ( (unsigned int)(v67 - 65) > 0x19 )
                      v70 = v67;
                    v67 = v70;
                    v71 = v69 + 32;
                    if ( (unsigned int)(v69 - 65) > 0x19 )
                      v71 = v69;
                    if ( v67 != v71 )
                      goto LABEL_115;
                  }
                }
                while ( v67 );
                v72 = j_sscanf(entry, "%f", &v104) != 1;
                v73 = v104 < -100.0 || v104 > 120.0;
                if ( v72 || v73 )
                {
                  Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v105, entry, *(double *)&_xmm, *((double *)&_xmm + 1), SND_DUCK_VALUE[7].jsonName, row_number);
                }
                else
                {
                  _XMM0 = LODWORD(FLOAT_10_0);
                  *(float *)&_XMM0 = powf_0(10.0, v104 * 0.050000001);
                  __asm
                  {
                    vcmpltss xmm1, xmm0, cs:__real@37803e84
                    vblendvps xmm0, xmm0, xmm6, xmm1
                  }
                  *(float *)(*((_QWORD *)structure + 13) + 4 * v44) = *(float *)&_XMM0;
                }
                goto LABEL_115;
              }
            }
          }
          while ( v58 );
          v63 = j_sscanf(entry, "%f", &v104) != 1;
          v64 = v104 < 0.0 || v104 > 24000.0;
          if ( !v63 && !v64 )
          {
            *(float *)(*((_QWORD *)structure + 15) + 4 * v44) = powf_0(v104 * 0.000041666666, 0.33333334);
            goto LABEL_115;
          }
          jsonName = SND_DUCK_VALUE[6].jsonName;
          goto LABEL_114;
        }
      }
    }
    while ( v49 );
    v54 = j_sscanf(entry, "%f", &v104) != 1;
    v55 = v104 < 0.0 || v104 > 24000.0;
    if ( !v54 && !v55 )
    {
      *(float *)(*((_QWORD *)structure + 14) + 4 * v44) = powf_0(v104 * 0.000041666666, 0.33333334);
      goto LABEL_115;
    }
    jsonName = SND_DUCK_VALUE[5].jsonName;
LABEL_114:
    Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v105, entry, *(double *)&_XMM7, DOUBLE_24000_0, jsonName, row_number);
LABEL_115:
    v78 = 0x7FFFFFFFi64;
    v79 = 0i64;
    do
    {
      v80 = (unsigned __int8)valuePropName[v79];
      v81 = v78;
      v82 = (unsigned __int8)aFocuscone_1[v79++];
      --v78;
      if ( !v81 )
        break;
      if ( v80 != v82 )
      {
        v83 = v80 + 32;
        if ( (unsigned int)(v80 - 65) > 0x19 )
          v83 = v80;
        v80 = v83;
        v84 = v82 + 32;
        if ( (unsigned int)(v82 - 65) > 0x19 )
          v84 = v82;
        if ( v80 != v84 )
          goto LABEL_125;
      }
    }
    while ( v80 );
    *(_DWORD *)(*((_QWORD *)structure + 17) + 4 * v44) = SND_HashName(entry);
LABEL_125:
    v85 = 0x7FFFFFFFi64;
    v86 = 0i64;
    while ( 1 )
    {
      v87 = (unsigned __int8)valuePropName[v86];
      v88 = v85;
      v89 = (unsigned __int8)aFocusamount[v86++];
      --v85;
      if ( !v88 )
      {
LABEL_134:
        v92 = j_sscanf(entry, "%f", &v104) != 1;
        v93 = v104 < 0.0 || v104 > 1.0;
        if ( v92 || v93 )
        {
          LODWORD(v103) = row_number;
          Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %d\n", v105, entry, *(double *)&_XMM7, DOUBLE_1_0, SND_DUCK_VALUE[10].jsonName, v103);
        }
        else
        {
          *(float *)(*((_QWORD *)structure + 16) + 4 * v44) = v104;
        }
        return v13;
      }
      if ( v87 != v89 )
      {
        v90 = v87 + 32;
        if ( (unsigned int)(v87 - 65) > 0x19 )
          v90 = v87;
        v87 = v90;
        v91 = v89 + 32;
        if ( (unsigned int)(v89 - 65) > 0x19 )
          v91 = v89;
        if ( v87 != v91 )
          break;
      }
      if ( !v87 )
        goto LABEL_134;
    }
    do
    {
      v94 = (unsigned __int8)valuePropName[v46];
      v95 = v45;
      v96 = (unsigned __int8)aUsedefaultvalu_0[v46++];
      --v45;
      if ( !v95 )
        break;
      if ( v94 != v96 )
      {
        v97 = v94 + 32;
        if ( (unsigned int)(v94 - 65) > 0x19 )
          v97 = v94;
        v94 = v97;
        v98 = v96 + 32;
        if ( (unsigned int)(v96 - 65) > 0x19 )
          v98 = v96;
        if ( v94 != v98 )
          break;
      }
    }
    while ( v94 );
  }
  return v13;
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
  unsigned __int64 *v13; 
  bool *v14; 
  bool *i; 
  __int64 v16; 
  __int64 v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  bool v28; 
  char v31; 
  int v32; 
  double v33; 
  double v34; 
  bool v35; 
  bool v36; 
  int v37; 
  bool v38; 
  char v41; 
  int v44; 
  unsigned __int64 v45; 
  char *fmt; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  int v51; 
  float v52; 
  unsigned int v55; 

  v8 = column_name;
  v9 = filename;
  v10 = 0;
  v11 = -1;
  v55 = 0;
  if ( entry_count )
  {
    v12 = entry_count;
    v13 = (unsigned __int64 *)((char *)entries + 24);
    v14 = has;
    for ( i = has; ; ++i )
    {
      v16 = *(v13 - 3);
      if ( v16 )
        break;
LABEL_64:
      v9 = filename;
      ++v10;
      v13 += 9;
      v55 = v10;
      if ( v10 >= v12 )
        return v11;
    }
    v17 = 0x7FFFFFFFi64;
    v18 = v8;
    if ( !v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v14 = has;
      v8 = column_name;
      v9 = filename;
      v10 = v55;
    }
    v19 = v16 - (_QWORD)v8;
    do
    {
      v20 = (unsigned __int8)v18[v19];
      v21 = v17;
      v22 = *(unsigned __int8 *)v18++;
      --v17;
      if ( !v21 )
        break;
      if ( v20 != v22 )
      {
        v23 = v20 + 32;
        if ( (unsigned int)(v20 - 65) > 0x19 )
          v23 = v20;
        v20 = v23;
        v24 = v22 + 32;
        if ( (unsigned int)(v22 - 65) > 0x19 )
          v24 = v22;
        if ( v20 != v24 )
          goto LABEL_63;
      }
    }
    while ( v20 );
    if ( (!entry || !*entry) && *((_DWORD *)v13 - 2) != 2 && v14 )
      *i = 1;
    switch ( *((_DWORD *)v13 - 2) )
    {
      case 1:
        v44 = *((_DWORD *)v13 + 4);
        v45 = -1i64;
        do
          ++v45;
        while ( entry[v45] );
        if ( truncate_cast<int,unsigned __int64>(v45) > v44 - 1 )
        {
          LODWORD(v49) = row_number;
          LODWORD(fmt) = v44;
          Com_PrintError(9, "ERROR: %s string too long: %s (max %d) col '%s' row %u\n", filename, entry, fmt, (const char *)*(v13 - 3), v49);
          v44 = *((_DWORD *)v13 + 4);
        }
        Core_strcpy((char *)structure + *(v13 - 2), v44, entry);
        break;
      case 2:
        *(_DWORD *)((char *)structure + *(v13 - 2)) = SND_HashName(entry);
        break;
      case 3:
        v37 = j_sscanf(entry, "%d", &v51);
        _XMM0 = *v13;
        _XMM1 = v13[1];
        v38 = v37 != 1;
        if ( *(double *)&_XMM0 == *(double *)&_XMM1 )
          goto LABEL_49;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v51 < _EAX )
          goto LABEL_48;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v51 <= _EAX )
LABEL_49:
          v41 = 0;
        else
LABEL_48:
          v41 = 1;
        if ( !v38 && !v41 )
        {
          *(_DWORD *)((char *)structure + *(v13 - 2)) = v51;
          break;
        }
        goto LABEL_53;
      case 4:
        v32 = j_sscanf(entry, "%f", &v52);
        v33 = *(double *)v13;
        v34 = *((double *)v13 + 1);
        v35 = v32 != 1;
        v36 = *(double *)v13 != v34 && (v52 < v33 || v52 > v34);
        if ( v35 || v36 )
        {
          LODWORD(v50) = row_number;
          Com_PrintError(9, "ERROR: %s invalid value '%s' [%f, %f] col '%s' row %u\n", filename, entry, v33, v34, (const char *)*(v13 - 3), v50);
        }
        else
        {
          *(float *)((char *)structure + *(v13 - 2)) = v52;
        }
        break;
      case 6:
        v25 = j_sscanf(entry, "%d", &v51);
        _XMM0 = *v13;
        _XMM1 = v13[1];
        v28 = v25 != 1;
        if ( *(double *)&_XMM0 == *(double *)&_XMM1 )
          goto LABEL_32;
        __asm { vcvttsd2si eax, xmm0 }
        if ( v51 < _EAX )
          goto LABEL_31;
        __asm { vcvttsd2si eax, xmm1 }
        if ( v51 <= _EAX )
LABEL_32:
          v31 = 0;
        else
LABEL_31:
          v31 = 1;
        if ( !v28 && !v31 )
        {
          *(_WORD *)((char *)structure + *(v13 - 2)) = v51;
          break;
        }
LABEL_53:
        LODWORD(v50) = row_number;
        __asm
        {
          vcvttsd2si ecx, xmm1
          vcvttsd2si edx, xmm0
        }
        LODWORD(v48) = _ECX;
        LODWORD(fmt) = _EDX;
        Com_PrintError(9, "ERROR: %s invalid value '%s' [%d, %d] col '%s' row %u\n", filename, entry, fmt, v48, (const char *)*(v13 - 3), v50);
        break;
      default:
        LODWORD(v48) = row_number;
        Com_PrintError(9, "ERROR: %s field not found: Entry %s, name %s, row_number %u\n", v9, entry, (const char *)*(v13 - 3), v48);
        break;
    }
    v14 = has;
    if ( has )
      *i = 1;
    v10 = v55;
    v11 = v55;
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
__int64 Snd_GetStringIndex(const char *value, const SndCsvParseEntry *p_entry, const char *sourceFile)
{
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

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 24, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !p_entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 25, ASSERT_TYPE_ASSERT, "(p_entry)", (const char *)&queryFormat, "p_entry") )
    __debugbreak();
  if ( !p_entry->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 26, ASSERT_TYPE_ASSERT, "(p_entry->name)", (const char *)&queryFormat, "p_entry->name") )
    __debugbreak();
  if ( !p_entry->enum_ids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 27, ASSERT_TYPE_ASSERT, "(p_entry->enum_ids)", (const char *)&queryFormat, "p_entry->enum_ids") )
    __debugbreak();
  if ( !sourceFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_db.cpp", 28, ASSERT_TYPE_ASSERT, "(sourceFile)", (const char *)&queryFormat, "sourceFile") )
    __debugbreak();
  if ( !*value && !p_entry->required )
    return (unsigned int)(int)p_entry->defaultValue;
  enum_ids = p_entry->enum_ids;
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
          return (unsigned int)v9;
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
          return (unsigned int)v9;
      }
      enum_ids = p_entry->enum_ids;
      v9 = (unsigned int)(v9 + 1);
      v10 = v9;
    }
    while ( enum_ids[v9] );
  }
  Com_PrintError(1, "ERROR: Sound alias file %s: Unknown %s '%s'; should be one of ", sourceFile, p_entry->name, value);
  for ( i = *p_entry->enum_ids; i; i = p_entry->enum_ids[v8] )
  {
    v21 = (char *)&queryFormat.fmt + 3;
    if ( (_DWORD)v8 )
      v21 = ",";
    Com_PrintError(1, "%s%s", v21, i);
    v8 = (unsigned int)(v8 + 1);
  }
  Com_PrintError(1, "\n");
  return 0xFFFFFFFFi64;
}

