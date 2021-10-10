/*
==============
SND_DevhostSendZone
==============
*/

void __fastcall SND_DevhostSendZone(const char *zone, const char *loc)
{
  ?SND_DevhostSendZone@@YAXPEBD0@Z(zone, loc);
}

/*
==============
SND_SetRawAliasField
==============
*/

int __fastcall SND_SetRawAliasField(const char *filename, unsigned int entry_count, const void *entries, const char *property, const char *value, unsigned int row_number, void *structure, bool *has)
{
  return ?SND_SetRawAliasField@@YAHPEBDIPEBX00IPEAXPEA_N@Z(filename, entry_count, entries, property, value, row_number, structure, has);
}

/*
==============
SND_DevhostString
==============
*/

void __fastcall SND_DevhostString(const char *string)
{
  ?SND_DevhostString@@YAXPEBD@Z(string);
}

/*
==============
SND_DevhostSendPlaybacks
==============
*/

void SND_DevhostSendPlaybacks(void)
{
  ?SND_DevhostSendPlaybacks@@YAXXZ();
}

/*
==============
SND_SetAliasField
==============
*/

int __fastcall SND_SetAliasField(const char *filename, unsigned int entry_count, const void *entries, const char *property, const char *value, unsigned int row_number, void *structure, bool *has)
{
  return ?SND_SetAliasField@@YAHPEBDIPEBX00IPEAXPEA_N@Z(filename, entry_count, entries, property, value, row_number, structure, has);
}

/*
==============
SND_DevhostFrameBegin
==============
*/

void __fastcall SND_DevhostFrameBegin(int time, int frame, int paused)
{
  ?SND_DevhostFrameBegin@@YAXHHH@Z(time, frame, paused);
}

/*
==============
SND_DevhostInit
==============
*/

void SND_DevhostInit(void)
{
  ?SND_DevhostInit@@YAXXZ();
}

/*
==============
SND_DevhostFrameEnd
==============
*/

void SND_DevhostFrameEnd(void)
{
  ?SND_DevhostFrameEnd@@YAXXZ();
}

/*
==============
SND_DevhostVoices
==============
*/

void SND_DevhostVoices(void)
{
  ?SND_DevhostVoices@@YAXXZ();
}

/*
==============
SND_DevhostMissingAlias
==============
*/

void __fastcall SND_DevhostMissingAlias(unsigned int hash)
{
  ?SND_DevhostMissingAlias@@YAXI@Z(hash);
}

/*
==============
SND_DevhostCGFrame
==============
*/

void SND_DevhostCGFrame(void)
{
  ?SND_DevhostCGFrame@@YAXXZ();
}

/*
==============
SND_DevhostStatFloat
==============
*/

void __fastcall SND_DevhostStatFloat(const char *name, float value)
{
  ?SND_DevhostStatFloat@@YAXPEBDM@Z(name, value);
}

/*
==============
SND_DevhostStatInt
==============
*/

void __fastcall SND_DevhostStatInt(const char *name, int value)
{
  ?SND_DevhostStatInt@@YAXPEBDH@Z(name, value);
}

/*
==============
SND_DevHostParseDuckColumn
==============
*/

void __fastcall SND_DevHostParseDuckColumn(const char *payload, char *propName, char *valuePropName)
{
  ?SND_DevHostParseDuckColumn@@YAXPEBDPEAD1@Z(payload, propName, valuePropName);
}

/*
==============
SND_FixAliasRowField
==============
*/

const char *__fastcall SND_FixAliasRowField(const char *row)
{
  return ?SND_FixAliasRowField@@YAPEBDPEBD@Z(row);
}

/*
==============
SND_ParseWeaponReflKey
==============
*/

bool __fastcall SND_ParseWeaponReflKey(const char *row, unsigned int *outNameHash, unsigned int *outWeaponClassHash)
{
  return ?SND_ParseWeaponReflKey@@YA_NPEBDPEAI1@Z(row, outNameHash, outWeaponClassHash);
}

/*
==============
SND_SetAliasField
==============
*/
int SND_SetAliasField(const char *filename, unsigned int entry_count, const void *entries, const char *property, const char *value, unsigned int row_number, void *structure, bool *has)
{
  const char *v11; 
  int v12; 
  int result; 

  v11 = filename;
  if ( !structure )
    return -1;
  v12 = 0;
  if ( *((int *)structure + 6) <= 0 )
    return -1;
  do
  {
    result = SND_CsvSetField(v11, entry_count, entries, property, value, row_number, (void *)(*((_QWORD *)structure + 2) + 232i64 * v12), has);
    v11 = filename;
    ++v12;
  }
  while ( v12 < *((_DWORD *)structure + 6) );
  return result;
}

/*
==============
SND_DevHostParseDuckColumn
==============
*/
void SND_DevHostParseDuckColumn(const char *payload, char *propName, char *valuePropName)
{
  const char *Token; 

  Token = Snd_NextToken(payload, propName, 58, 0x400u);
  Snd_NextToken(Token, valuePropName, 58, 0x400u);
}

/*
==============
SND_DevhostCGFrame
==============
*/
void SND_DevhostCGFrame(void)
{
  unsigned int count; 
  ScopedDevHostMessage v1; 
  __int64 v2; 
  __int128 listeners; 
  __int64 v4; 

  v2 = -2i64;
  SND_DevhostEntState();
  count = 0;
  listeners = 0ui64;
  v4 = 0i64;
  SNDL_GetActiveListeners(&count, (vec3_t *)&listeners);
  ScopedDevHostMessage::ScopedDevHostMessage(&v1, 3, 0x18u, 12 * count + 4);
  Com_DevhostSendBody(3, 4u, (const char *)&count);
  if ( count )
    Com_DevhostSendBody(3, 12 * count, (const char *)&listeners);
  ScopedDevHostMessage::~ScopedDevHostMessage(&v1);
  SND_DevhostMultiReverb();
}

/*
==============
SND_DevhostCallback
==============
*/
char SND_DevhostCallback(ComDevhostReadHandle *handle)
{
  __int16 m_command; 
  signed int v2; 
  char desbuf[1024]; 

  m_command = handle->m_command;
  switch ( m_command )
  {
    case 18:
      SND_DevhostUpdateValue(handle);
      break;
    case 28:
      SND_BankDevhost();
      break;
    case 31:
      v2 = ComDevhostReadHandle::Read(handle, (unsigned __int8 *)desbuf, 0x400u);
      if ( (unsigned __int64)v2 >= 0x400 )
      {
        j___report_rangecheckfailure(v2);
        JUMPOUT(0x1427566F7i64);
      }
      desbuf[v2] = 0;
      SND_SetMusicState(desbuf);
      break;
  }
  return 1;
}

/*
==============
SND_DevhostEntState
==============
*/
void SND_DevhostEntState()
{
  int v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int *p_hasPosition; 
  unsigned int v38; 
  unsigned __int64 *p_handle; 
  __int64 v40; 
  __int64 i; 
  unsigned int v42; 
  __int64 v43; 
  const char *stateName; 
  const char *v45; 
  char msg[8]; 
  _DWORD *v47; 
  float outLerp; 
  float v49; 
  ScopedDevHostMessage v50[2]; 
  ZoneDef *outZoneA; 
  ZoneDef *outZoneB; 
  unsigned int outValueB; 
  unsigned int outValueA[3]; 
  __int64 v55; 
  unsigned int contextType[2]; 
  int v57; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  float v62[3]; 
  unsigned __int64 v63; 
  tmat33_t<vec3_t> out; 
  vec3_t point; 
  int v66; 
  float v67; 
  char dest[64]; 
  char v69[64]; 
  char v70[64]; 
  char v71[64]; 

  v55 = -2i64;
  if ( Com_DevhostSystemActive(3) )
  {
    v3 = 0;
    *(_DWORD *)msg = 0;
    v4 = 0;
    v5 = 0i64;
    do
    {
      v6 = v5 << 7;
      if ( g_snd.entState[v5].hasPosition )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[1].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[2].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[3].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[4].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[5].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[6].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[7].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[8].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[9].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[10].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[11].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[12].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[13].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[14].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[15].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[16].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[17].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[18].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[19].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[20].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[21].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[22].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[23].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[24].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[25].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[26].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[27].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[28].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[29].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[30].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[31].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[32].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[33].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[34].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[35].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[36].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[37].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[38].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[39].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[40].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[41].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[42].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[43].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[44].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[45].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[46].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[47].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[48].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[49].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[50].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[51].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[52].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[53].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[54].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[55].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[56].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[57].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[58].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[59].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[60].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[61].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[62].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      if ( *(unsigned int *)((char *)&g_snd.entState[63].hasPosition + v6) )
        *(_DWORD *)msg = ++v3;
      v4 += 64;
      v5 += 64i64;
    }
    while ( v4 < 0x80 );
    v7 = 0;
    __asm
    {
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm4, xmm4, xmm4
      vpxor   xmm5, xmm5, xmm5
    }
    _XMM7 = _xmm;
    p_hasPosition = &g_snd.entState[2].hasPosition;
    do
    {
      _XMM0 = *(p_hasPosition - 64);
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rax-80h], 1
        vpinsrd xmm0, xmm0, dword ptr [rax], 2
        vpinsrd xmm0, xmm0, dword ptr [rax+80h], 3
        vpcmpeqd xmm0, xmm0, xmm6
        vpandn  xmm3, xmm0, xmm8
        vpaddd  xmm1, xmm7, xmm4
        vpand   xmm2, xmm1, xmm3
        vpandn  xmm0, xmm3, xmm4
        vpor    xmm4, xmm2, xmm0
      }
      _XMM0 = p_hasPosition[64];
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rax+180h], 1
        vpinsrd xmm0, xmm0, dword ptr [rax+200h], 2
        vpinsrd xmm0, xmm0, dword ptr [rax+280h], 3
        vpcmpeqd xmm0, xmm0, xmm6
        vpandn  xmm3, xmm0, xmm8
        vpaddd  xmm1, xmm7, xmm5
        vpand   xmm2, xmm1, xmm3
        vpandn  xmm0, xmm3, xmm5
        vpor    xmm5, xmm2, xmm0
      }
      v7 += 8;
      p_hasPosition += 256;
    }
    while ( v7 < 0x80 );
    __asm
    {
      vpaddd  xmm1, xmm4, xmm5
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    ScopedDevHostMessage::ScopedDevHostMessage(v50, 3, 0x13u, _XMM0 + 4);
    Com_DevhostSendBody(3, 4u, msg);
    v38 = 0;
    p_handle = &g_snd.entState[0].handle;
    do
    {
      if ( *((_DWORD *)p_handle + 15) )
      {
        memset_0(&v58, 0, 0x164ui64);
        v40 = (__int64)(int)v38 << 7;
        *(_QWORD *)contextType = *(_QWORD *)((char *)g_snd.entState[0].contextTypes + v40);
        v57 = *(unsigned int *)((char *)&g_snd.entState[0].contextTypes[2] + v40);
        v58 = *(_QWORD *)((char *)g_snd.entState[0].contextValuesFrom + v40);
        v59 = *(unsigned int *)((char *)&g_snd.entState[0].contextValuesFrom[2] + v40);
        v60 = *(_QWORD *)((char *)g_snd.entState[0].contextValuesTo + v40);
        v61 = *(unsigned int *)((char *)&g_snd.entState[0].contextValuesTo[2] + v40);
        for ( i = 0i64; i < 3; ++i )
        {
          v42 = contextType[i];
          if ( v42 )
          {
            SND_EntityFindContextValue((const SndEntState *)((char *)g_snd.entState + v40), v42, outValueA, &outValueB, &outLerp);
            v62[i] = 100.0 * outLerp;
          }
          else
          {
            v62[i] = 0.0;
          }
        }
        v63 = *p_handle;
        v66 = *((_DWORD *)p_handle + 14);
        AxisCopy((const tmat33_t<vec3_t> *)((char *)&g_snd.entState[0].orientation + v40), &out);
        if ( (snd_local_t *)((char *)&g_snd + v40) == (snd_local_t *)-1332360i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 875, ASSERT_TYPE_ASSERT, "(sndEntState)", (const char *)&queryFormat, "sndEntState", *(_QWORD *)msg) )
          __debugbreak();
        v47 = (_DWORD *)((char *)g_snd.entState[0].origin.origin.v + v40);
        msg[4] = ((unsigned int)v40 + (unsigned int)&g_snd + 1332468) >> 24;
        *(_WORD *)&msg[5] = v40 + (unsigned __int16)&g_snd + 21748;
        msg[7] = ((unsigned int)v40 + (unsigned int)&g_snd + 1332468) >> 16;
        LODWORD(point.v[2]) = s_soundorg_aab_Z ^ *(_DWORD *)((char *)&g_snd.entState[0].origin.origin.v[2] + v40) ^ *(_DWORD *)((char *)&g_snd.entState[0].origin.origin.v[1] + v40) ^ *(_DWORD *)&msg[4];
        LODWORD(point.v[0]) = s_soundorg_aab_X ^ *v47 ^ *(_DWORD *)((char *)&g_snd.entState[0].origin.origin.v[2] + v40) ^ *(_DWORD *)&msg[4];
        LODWORD(point.v[1]) = *v47 ^ *(_DWORD *)&msg[4] ^ ~s_soundorg_aab_Y;
        memset(&outValueA[1], 0, 8ui64);
        *(float *)&v47 = point.v[0];
        if ( (LODWORD(point.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v47 = point.v[1], (LODWORD(point.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v47 = point.v[2], (LODWORD(point.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 868, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
        v43 = (*p_handle >> 33) & 3;
        if ( SND_IsListenerActive((const LocalClientNum_t)((*p_handle >> 33) & 3)) && CG_FindAudioZoneAtPoint((LocalClientNum_t)v43, &point, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &v49) )
        {
          if ( outZoneA )
          {
            Core_strcpy(dest, 0x40ui64, outZoneA->zoneName);
            stateName = outZoneA->stateName;
            if ( stateName )
              Core_strcpy(v69, 0x40ui64, stateName);
          }
          if ( outZoneB )
          {
            Core_strcpy(v70, 0x40ui64, outZoneB->zoneName);
            v45 = outZoneB->stateName;
            if ( v45 )
              Core_strcpy(v71, 0x40ui64, v45);
          }
          v67 = v49;
        }
        Com_DevhostSendBody(3, 0x170u, (const char *)contextType);
      }
      ++v38;
      p_handle += 16;
    }
    while ( v38 < 0x80 );
    ScopedDevHostMessage::~ScopedDevHostMessage(v50);
  }
}

/*
==============
SND_DevhostFrameBegin
==============
*/
void SND_DevhostFrameBegin(int time, int frame, int paused)
{
  int v3; 
  int v4; 
  int msg; 
  int v6; 
  ScopedDevHostMessage v7; 

  v6 = paused;
  msg = frame;
  v4 = time;
  v3 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_DevhostFrameBegin");
  ScopedDevHostMessage::ScopedDevHostMessage(&v7, 3, 1u, 0xCu);
  Com_DevhostSendBody(3, 4u, (const char *)&msg);
  Com_DevhostSendBody(3, 4u, (const char *)&v4);
  Com_DevhostSendBody(3, 4u, (const char *)&v6);
  ScopedDevHostMessage::~ScopedDevHostMessage(&v7);
  g_snd.devhostBeginUsec = Sys_Microseconds() - v3;
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_DevhostFrameEnd
==============
*/
void SND_DevhostFrameEnd(void)
{
  int v0; 
  const SndMaster *MasterCurrent; 
  __int64 v2; 
  const SndGlobals *i; 
  int ContextIndex; 
  float current; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int typeId; 
  const SndMusicState *CurrentMusicState; 
  const char *v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  ScopedDevHostMessage v13[2]; 
  __int64 msg; 
  SndDspDynamicsMeter msg_8[3]; 
  SD_DSP::AtmosFrame masterPeak; 
  SD_DSP::AtmosFrame masterVu; 
  SD_DSP::AtmosFrame masterITU; 
  __int128 listeners; 
  __int64 v20; 

  msg = -2i64;
  v0 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_DevhostFrameEnd");
  SND_DevhostVoices();
  if ( Com_DevhostSystemActive(3) )
  {
    msg_8[0] = g_sd.mixMasterState.meters.main;
    msg_8[1] = g_sd.mixMasterState.meters.sfx;
    msg_8[2] = g_sd.mixMasterState.meters.dialogue;
    masterVu = g_sd.mixMasterState.meters.masterVu;
    masterPeak = g_sd.mixMasterState.meters.masterPeak;
    masterITU = g_sd.mixMasterState.meters.masterITU;
    Com_DevhostSendMessage(3, 5u, 0x3C0u, (const char *)msg_8);
  }
  if ( Com_DevhostSystemActive(3) )
  {
    MasterCurrent = SND_GetMasterCurrent();
    Com_DevhostSendMessage(3, 0x10u, 4u, (const char *)&MasterCurrent->id);
  }
  v13[0].m_system = SND_GetCurrentReverb();
  Com_DevhostSendMessage(3, 8u, 4u, (const char *)v13);
  SND_DevhostSubmixes();
  if ( Com_DevhostSystemActive(3) )
  {
    v2 = 0i64;
    for ( i = g_snd.globals; (unsigned int)v2 < g_snd.globals->contextCount; i = g_snd.globals )
    {
      ContextIndex = SND_FindContextIndex(i->contexts[v2].typeId);
      if ( ContextIndex >= 0 )
      {
        current = g_snd.globalContextLerp[v2].current;
        v6 = g_snd.globalContextsTo[ContextIndex];
        v7 = g_snd.globalContextsFrom[ContextIndex];
        typeId = g_snd.globals->contexts[v2].typeId;
        if ( Com_DevhostSystemActive(3) )
        {
          if ( typeId )
          {
            *(_QWORD *)&listeners = __PAIR64__(v7, typeId);
            DWORD2(listeners) = v6;
            *((float *)&listeners + 3) = current;
            Com_DevhostSendMessage(3, 0xFu, 0x10u, (const char *)&listeners);
          }
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
  }
  SND_DevhostStats();
  if ( Com_DevhostSystemActive(3) )
  {
    CurrentMusicState = SND_GetCurrentMusicState();
    v10 = (const char *)CurrentMusicState;
    if ( CurrentMusicState )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( CurrentMusicState->name[v11] );
    }
    else
    {
      v10 = NULL;
      v11 = 0i64;
    }
    v12 = truncate_cast<unsigned int,unsigned __int64>(v11);
    Com_DevhostSendMessage(3, 0x1Fu, v12, v10);
  }
  if ( cg_t::ms_allocatedCount > 0 )
  {
    SND_DevhostEntState();
    v13[0].m_system = 0;
    listeners = 0ui64;
    v20 = 0i64;
    SNDL_GetActiveListeners((unsigned int *)v13, (vec3_t *)&listeners);
    ScopedDevHostMessage::ScopedDevHostMessage(&v13[1], 3, 0x18u, 12 * v13[0].m_system + 4);
    Com_DevhostSendBody(3, 4u, (const char *)v13);
    if ( v13[0].m_system )
      Com_DevhostSendBody(3, 12 * v13[0].m_system, (const char *)&listeners);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v13[1]);
    SND_DevhostMultiReverb();
  }
  Com_DevhostSendMessage(3, 2u, 0, NULL);
  SD_AllocDevhost();
  g_snd.devhostEndUsec = Sys_Microseconds() - v0;
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_DevhostInit
==============
*/
void SND_DevhostInit(void)
{
  Com_DevhostRegisterCallback(3, (bool (__fastcall *)(ComDevhostReadHandle *))SND_DevhostCallback);
}

/*
==============
SND_DevhostMissingAlias
==============
*/
void SND_DevhostMissingAlias(unsigned int hash)
{
  unsigned int msg; 

  msg = hash;
  Com_DevhostSendMessage(3, 7u, 4u, (const char *)&msg);
}

/*
==============
SND_DevhostMultiReverb
==============
*/
void SND_DevhostMultiReverb()
{
  float v0; 
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  unsigned int PlayerAudioTriggerIndex; 
  unsigned int PlayerAudioBlendTriggerIndex; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  _DWORD *v19; 
  int v20; 
  const SndAlias **p_alias; 
  __int64 *v22; 
  int v23; 
  unsigned int v24; 
  unsigned int outTriggerB; 
  unsigned int outTriggerA; 
  unsigned int PlayerAudioPropagationTriggerIndex; 
  char msg[4]; 
  ReverbDescriptor activeMainReverb; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v34[8]; 
  float outMinVolume; 
  float v36; 
  float v37; 
  float v38; 
  float outWallDistance; 
  float v40; 
  float outDistance[8]; 
  __int64 v42[6]; 
  snd_listener outListener; 

  memset_0(v34, 0, 0x80ui64);
  v30 = sdGlob.currentReverbId[0];
  v31 = sdGlob.currentReverbId[1];
  v32 = sdGlob.currentReverbId[2];
  v33 = sdGlob.currentReverbId[3];
  activeMainReverb = g_snd.activeMainReverb;
  *(float *)msg = g_snd.mainReverbLerp.current;
  SND_GetListener(LOCAL_CLIENT_0, &outListener);
  if ( outListener.active )
  {
    v0 = outListener.orient.origin.v[0];
    v1 = outListener.orient.origin.v[1];
    v2 = outListener.orient.origin.v[2];
    v3 = outListener.orient.axis.m[1].v[1];
    v4 = outListener.orient.axis.m[1].v[0];
    v5 = outListener.orient.axis.m[1].v[2];
    v7 = atan2f_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(g_snd.reverbPosition[0].v[1] - outListener.orient.origin.v[1]) * outListener.orient.axis.m[1].v[1]) + (float)((float)(g_snd.reverbPosition[0].v[0] - outListener.orient.origin.v[0]) * outListener.orient.axis.m[1].v[0])) + (float)((float)(g_snd.reverbPosition[0].v[2] - outListener.orient.origin.v[2]) * outListener.orient.axis.m[1].v[2])) ^ _xmm), (float)((float)((float)(g_snd.reverbPosition[0].v[1] - outListener.orient.origin.v[1]) * outListener.orient.axis.m[0].v[1]) + (float)((float)(g_snd.reverbPosition[0].v[0] - outListener.orient.origin.v[0]) * outListener.orient.axis.m[0].v[0])) + (float)((float)(g_snd.reverbPosition[0].v[2] - outListener.orient.origin.v[2]) * outListener.orient.axis.m[0].v[2])) * 57.295776;
    v6 = v7;
    if ( v7 >= -180.0 )
    {
      if ( v7 > 180.0 )
        v6 = v7 + -360.0;
    }
    else
    {
      v6 = v7 + 360.0;
    }
    outDistance[4] = v6;
    v9 = atan2f_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(g_snd.reverbPosition[1].v[1] - v1) * v3) + (float)((float)(g_snd.reverbPosition[1].v[0] - v0) * v4)) + (float)((float)(g_snd.reverbPosition[1].v[2] - v2) * v5)) ^ _xmm), (float)((float)((float)(g_snd.reverbPosition[1].v[1] - v1) * outListener.orient.axis.m[0].v[1]) + (float)((float)(g_snd.reverbPosition[1].v[0] - v0) * outListener.orient.axis.m[0].v[0])) + (float)((float)(g_snd.reverbPosition[1].v[2] - v2) * outListener.orient.axis.m[0].v[2])) * 57.295776;
    v8 = v9;
    if ( v9 >= -180.0 )
    {
      if ( v9 > 180.0 )
        v8 = v9 + -360.0;
    }
    else
    {
      v8 = v9 + 360.0;
    }
    outDistance[5] = v8;
    v11 = atan2f_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(g_snd.reverbPosition[2].v[1] - v1) * v3) + (float)((float)(g_snd.reverbPosition[2].v[0] - v0) * v4)) + (float)((float)(g_snd.reverbPosition[2].v[2] - v2) * v5)) ^ _xmm), (float)((float)((float)(g_snd.reverbPosition[2].v[1] - v1) * outListener.orient.axis.m[0].v[1]) + (float)((float)(g_snd.reverbPosition[2].v[0] - v0) * outListener.orient.axis.m[0].v[0])) + (float)((float)(g_snd.reverbPosition[2].v[2] - v2) * outListener.orient.axis.m[0].v[2])) * 57.295776;
    v10 = v11;
    if ( v11 >= -180.0 )
    {
      if ( v11 > 180.0 )
        v10 = v11 + -360.0;
    }
    else
    {
      v10 = v11 + 360.0;
    }
    outDistance[6] = v10;
    v13 = atan2f_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(g_snd.reverbPosition[3].v[1] - v1) * v3) + (float)((float)(g_snd.reverbPosition[3].v[0] - v0) * v4)) + (float)((float)(g_snd.reverbPosition[3].v[2] - v2) * v5)) ^ _xmm), (float)((float)((float)(g_snd.reverbPosition[3].v[1] - v1) * outListener.orient.axis.m[0].v[1]) + (float)((float)(g_snd.reverbPosition[3].v[0] - v0) * outListener.orient.axis.m[0].v[0])) + (float)((float)(g_snd.reverbPosition[3].v[2] - v2) * outListener.orient.axis.m[0].v[2])) * 57.295776;
    v12 = v13;
    if ( v13 >= -180.0 )
    {
      if ( v13 > 180.0 )
        v12 = v13 + -360.0;
    }
    else
    {
      v12 = v13 + 360.0;
    }
    outDistance[7] = v12;
    PlayerAudioTriggerIndex = CG_GetPlayerAudioTriggerIndex((const LocalClientNum_t)outListener.localClientNum);
    PlayerAudioBlendTriggerIndex = CG_GetPlayerAudioBlendTriggerIndex((const LocalClientNum_t)outListener.localClientNum);
    if ( CG_GetBlendedAudioTriggers(PlayerAudioBlendTriggerIndex, &outTriggerA, &outTriggerB) )
    {
      v16 = outTriggerB;
      PlayerAudioTriggerIndex = outTriggerA;
    }
    else
    {
      outTriggerA = PlayerAudioTriggerIndex;
      v16 = PlayerAudioTriggerIndex;
      outTriggerB = PlayerAudioTriggerIndex;
    }
    LODWORD(outDistance[2]) = PlayerAudioTriggerIndex;
    LODWORD(outDistance[3]) = v16;
    CG_GetTriggerMinReverbVolumeAndMaxWallDistance(g_snd.reverbTrigger[0], &outMinVolume, &outWallDistance);
    CG_GetDistanceFromTriggerWall(outListener.localClientNum, g_snd.reverbTrigger[0], &outListener.orient.origin, outDistance);
    CG_GetWallProximityVolume(outListener.localClientNum, g_snd.reverbTrigger[0], &outListener.orient.origin, &v37);
    if ( outTriggerA != outTriggerB )
    {
      CG_GetTriggerMinReverbVolumeAndMaxWallDistance(g_snd.reverbTrigger[1], &v36, &v40);
      CG_GetDistanceFromTriggerWall(outListener.localClientNum, g_snd.reverbTrigger[1], &outListener.orient.origin, outDistance);
      CG_GetWallProximityVolume(outListener.localClientNum, g_snd.reverbTrigger[1], &outListener.orient.origin, &v38);
    }
    memset(v42, 0, 40);
    v17 = 0;
    PlayerAudioPropagationTriggerIndex = CG_GetPlayerAudioPropagationTriggerIndex((const LocalClientNum_t)outListener.localClientNum);
    v18 = 0;
    v19 = (_DWORD *)&v42[2] + 1;
    v20 = 0;
    p_alias = &g_snd.voices[0].alias;
    v22 = v42;
    do
    {
      if ( !SND_IsVoiceFree(v20) )
      {
        v23 = *((_DWORD *)p_alias + 26);
        if ( v23 != 1024 )
        {
          v24 = PlayerAudioPropagationTriggerIndex;
          if ( v23 != PlayerAudioPropagationTriggerIndex )
          {
            if ( v23 == g_snd.reverbTrigger[2] && v17 < 5 )
            {
              *(_DWORD *)v22 = SND_HashName((*p_alias)->aliasName);
              ++v17;
              v24 = PlayerAudioPropagationTriggerIndex;
              v22 = (__int64 *)((char *)v22 + 4);
            }
            if ( v23 != v24 && v23 == g_snd.reverbTrigger[3] && v18 < 5 )
            {
              ++v18;
              *v19++ = SND_HashName((*p_alias)->aliasName);
            }
          }
        }
      }
      ++v20;
      p_alias += 246;
    }
    while ( v20 < 99 );
  }
  v34[0] = SLODWORD(sdGlob.reverbPan[0][0]);
  v34[1] = SLODWORD(sdGlob.reverbPan[0][17]);
  v34[2] = SLODWORD(sdGlob.reverbPan[0][36]);
  v34[3] = SLODWORD(sdGlob.reverbPan[0][53]);
  v34[4] = SLODWORD(sdGlob.reverbPan[1][0]);
  v34[5] = SLODWORD(sdGlob.reverbPan[1][17]);
  v34[6] = SLODWORD(sdGlob.reverbPan[1][36]);
  v34[7] = SLODWORD(sdGlob.reverbPan[1][53]);
  Com_DevhostSendMessage(3, 9u, 0x98u, msg);
}

/*
==============
SND_DevhostSendPlaybacks
==============
*/
void SND_DevhostSendPlaybacks(void)
{
  ;
}

/*
==============
SND_DevhostSendZone
==============
*/
void SND_DevhostSendZone(const char *zone, const char *loc)
{
  unsigned __int64 v2; 
  unsigned int v3; 
  char dest[1024]; 

  Com_sprintf(dest, 0x400ui64, "%s,%s", zone, loc);
  v2 = -1i64;
  do
    ++v2;
  while ( dest[v2] );
  v3 = truncate_cast<unsigned int,unsigned __int64>(v2);
  Com_DevhostSendMessage(3, 0x1Au, v3, dest);
}

/*
==============
SND_DevhostSetValue
==============
*/
void SND_DevhostSetValue(const char *type, const char *row, const char *property, const char *value)
{
  unsigned int v4; 
  SndTableUpdate *v5; 
  const char *typeName; 
  __int64 v11; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  __int64 v19; 
  const char *v20; 
  const dvar_t *VarByName; 
  void *(__fastcall *findObject)(unsigned int); 
  const char *v23; 
  char v24; 
  unsigned int v25; 
  char v26; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  const char *v28; 
  char v29; 
  char v30; 
  const char *v31; 
  char v32; 
  char v33; 
  int v34; 
  unsigned int outWeaponClassHash; 
  unsigned int outNameHash[259]; 

  v4 = 0;
  v5 = g_sndUpdateTable;
  while ( 2 )
  {
    typeName = v5->typeName;
    v11 = 0x7FFFFFFFi64;
    if ( !type && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !typeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v12 = (const char *)(type - typeName);
    while ( 1 )
    {
      v13 = (unsigned __int8)typeName[(_QWORD)v12];
      v14 = v11;
      v15 = *(unsigned __int8 *)typeName++;
      --v11;
      if ( !v14 )
      {
LABEL_17:
        v18 = 5381;
        if ( I_stricmp("snd_tools.RowAlias", v5->typeName) )
        {
          if ( !I_stricmp("snd_tools.RowWeapReflectionDef", v5->typeName) )
          {
            if ( !SND_ParseWeaponReflKey(row, outNameHash, &outWeaponClassHash) )
              goto LABEL_58;
            WeapReflDefWithClass = SND_FindWeapReflDefWithClass(outNameHash[0], outWeaponClassHash);
LABEL_57:
            if ( WeapReflDefWithClass )
            {
              v5->setValue("devhost", v5->fieldCount, v5->fields, property, value, 0, (void *)WeapReflDefWithClass, NULL);
              if ( !I_stricmp(type, "snd_tools.RowRadverb") )
              {
                v31 = row;
                if ( row && (v32 = *row) != 0 )
                {
                  do
                  {
                    ++v31;
                    v33 = v32 | 0x20;
                    if ( (unsigned int)(v32 - 65) >= 0x1A )
                      v33 = v32;
                    v18 = 65599 * v18 + v33;
                    v32 = *v31;
                  }
                  while ( *v31 );
                  if ( !v18 )
                    v18 = 1;
                }
                else
                {
                  v18 = 0;
                }
                SND_DevUpdateReverbParams(v18);
              }
              if ( !I_stricmp(type, "snd_tools.RowFutz") )
              {
                v34 = Dvar_EnumStringToIndex(DVARINT_snd_voicefutz, row);
                if ( v34 >= 0 )
                  Dvar_SetInt_Internal(DVARINT_snd_voicefutz, v34);
              }
              return;
            }
LABEL_58:
            Com_PrintError(9, "SOUND: Object %s:%s isn't loaded and can't be updated\n", type, row);
            return;
          }
          findObject = v5->findObject;
          v28 = row;
          if ( row )
          {
            v29 = *row;
            if ( *row )
            {
              v25 = 5381;
              do
              {
                ++v28;
                v30 = v29 | 0x20;
                if ( (unsigned int)(v29 - 65) >= 0x1A )
                  v30 = v29;
                v25 = 65599 * v25 + v30;
                v29 = *v28;
              }
              while ( *v28 );
              if ( !v25 )
                v25 = 1;
              goto LABEL_56;
            }
          }
        }
        else
        {
          if ( row && *row )
          {
            v19 = 0i64;
            v20 = row;
            while ( *v20 != 46 && *v20 )
            {
              v19 = (unsigned int)(v19 + 1);
              ++v20;
              if ( (unsigned int)v19 >= 0x400 )
                goto LABEL_31;
            }
            *((_BYTE *)&outNameHash[3] + v19) = 0;
LABEL_31:
            if ( row[v19] && &row[v19] != (const char *)-1i64 )
              row[v19] = 0;
          }
          findObject = v5->findObject;
          v23 = row;
          if ( row )
          {
            v24 = *row;
            if ( *row )
            {
              v25 = 5381;
              do
              {
                ++v23;
                v26 = v24 | 0x20;
                if ( (unsigned int)(v24 - 65) >= 0x1A )
                  v26 = v24;
                v25 = 65599 * v25 + v26;
                v24 = *v23;
              }
              while ( *v23 );
              if ( !v25 )
                v25 = 1;
              goto LABEL_56;
            }
          }
        }
        v25 = 0;
LABEL_56:
        WeapReflDefWithClass = (const WeaponReflectionDef *)findObject(v25);
        goto LABEL_57;
      }
      if ( v13 != v15 )
      {
        v16 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v16 = v13;
        v13 = v16;
        v17 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v17 = v15;
        if ( v13 != v17 )
          break;
      }
      if ( !v13 )
        goto LABEL_17;
    }
    ++v4;
    ++v5;
    if ( v4 < 0x1C )
      continue;
    break;
  }
  if ( I_stricmp(type, "snd_tools.RowDvar") )
  {
    Com_PrintError(9, "SOUND: no such type in %s: %s\n", "SND_DevhostSetValue", type);
  }
  else
  {
    VarByName = Dvar_FindVarByName(row);
    if ( VarByName )
      Dvar_SetFromString(VarByName, value);
  }
}

/*
==============
SND_DevhostStatFloat
==============
*/
void SND_DevhostStatFloat(const char *name, float value)
{
  unsigned __int64 v3; 
  unsigned int v4; 
  char v5; 
  int v6; 
  char v7; 
  int msg; 
  float v9; 

  v3 = -1i64;
  do
    ++v3;
  while ( name[v3] );
  v4 = truncate_cast<unsigned int,unsigned __int64>(v3);
  Com_DevhostSendMessage(3, 6u, v4, name);
  if ( name && (v5 = *name) != 0 )
  {
    v6 = 5381;
    do
    {
      ++name;
      v7 = v5 | 0x20;
      if ( (unsigned int)(v5 - 65) >= 0x1A )
        v7 = v5;
      v6 = 65599 * v6 + v7;
      v5 = *name;
    }
    while ( *name );
    if ( !v6 )
      v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  msg = v6;
  v9 = value;
  Com_DevhostSendMessage(3, 0xDu, 8u, (const char *)&msg);
}

/*
==============
SND_DevhostStatInt
==============
*/
void SND_DevhostStatInt(const char *name, int value)
{
  unsigned __int64 v4; 
  unsigned int v5; 
  char v6; 
  int v7; 
  char v8; 
  int msg; 
  int v10; 

  v4 = -1i64;
  do
    ++v4;
  while ( name[v4] );
  v5 = truncate_cast<unsigned int,unsigned __int64>(v4);
  Com_DevhostSendMessage(3, 6u, v5, name);
  if ( name && (v6 = *name) != 0 )
  {
    v7 = 5381;
    do
    {
      ++name;
      v8 = v6 | 0x20;
      if ( (unsigned int)(v6 - 65) >= 0x1A )
        v8 = v6;
      v7 = 65599 * v7 + v8;
      v6 = *name;
    }
    while ( *name );
    if ( !v7 )
      v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  msg = v7;
  v10 = value;
  Com_DevhostSendMessage(3, 0xEu, 8u, (const char *)&msg);
}

/*
==============
SND_DevhostStats
==============
*/
void SND_DevhostStats()
{
  int v0; 
  unsigned int i; 
  char v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  _DWORD *v5; 
  char v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  _DWORD *v9; 
  char v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  _DWORD *v13; 
  char v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  _DWORD *v17; 
  char v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  _DWORD *v21; 
  char v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  _DWORD *v25; 
  char v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  _DWORD *v29; 
  char v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  _DWORD *v33; 
  char v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  _DWORD *v37; 
  char v38; 
  __int64 v39; 
  unsigned __int64 v40; 
  _DWORD *v41; 
  char v42; 
  __int64 v43; 
  unsigned __int64 v44; 
  _DWORD *v45; 
  char v46; 
  __int64 v47; 
  unsigned __int64 v48; 
  _DWORD *v49; 
  char v50; 
  __int64 v51; 
  unsigned __int64 v52; 
  _DWORD *v53; 
  char v54; 
  __int64 v55; 
  unsigned __int64 v56; 
  _DWORD *v57; 
  char v58; 
  __int64 v59; 
  unsigned __int64 v60; 
  _DWORD *v61; 
  char v62; 
  __int64 v63; 
  unsigned __int64 v64; 
  _DWORD *v65; 
  unsigned int v66; 
  const char *v67; 
  int v68; 
  char v69; 
  int v70; 
  char v71; 
  unsigned int v72; 
  const char *v73; 
  int v74; 
  char v75; 
  char v76; 
  int frameUsec; 
  unsigned int v78; 
  const char *v79; 
  int v80; 
  char v81; 
  char v82; 
  int clientFrameUsec; 
  unsigned int v84; 
  const char *v85; 
  int v86; 
  char v87; 
  char v88; 
  unsigned int updateFarReverbsUsec; 
  unsigned int v90; 
  const char *v91; 
  int v92; 
  char v93; 
  char v94; 
  unsigned int updatePlayerReverbUsec; 
  unsigned int v96; 
  const char *v97; 
  int v98; 
  char v99; 
  char v100; 
  unsigned int propagationKdTreeUsec; 
  unsigned int v102; 
  const char *v103; 
  int v104; 
  char v105; 
  char v106; 
  unsigned int propagationPathUsec; 
  unsigned int v108; 
  const char *v109; 
  int v110; 
  char v111; 
  char v112; 
  unsigned int propagationCount; 
  unsigned int v114; 
  const char *v115; 
  int v116; 
  char v117; 
  char v118; 
  unsigned int occlusionRaycastUsec; 
  unsigned int v120; 
  const char *v121; 
  int v122; 
  char v123; 
  char v124; 
  unsigned int entStateUsec; 
  unsigned int v126; 
  const char *v127; 
  int v128; 
  char v129; 
  char v130; 
  volatile int banksLoading; 
  unsigned int v132; 
  const char *v133; 
  int v134; 
  char v135; 
  char v136; 
  unsigned int updateDuckUsec; 
  unsigned int v138; 
  const char *v139; 
  int v140; 
  char v141; 
  char v142; 
  int mixMasterMeterUsec; 
  unsigned int v144; 
  const char *v145; 
  char v146; 
  char v147; 
  char v148[4]; 
  unsigned int v149; 
  char v150[4]; 
  unsigned int v151; 
  char v152[4]; 
  unsigned int v153; 
  char v154[4]; 
  unsigned int v155; 
  char v156[4]; 
  unsigned int v157; 
  char v158[4]; 
  unsigned int v159; 
  char v160[4]; 
  unsigned int v161; 
  char v162[4]; 
  volatile int v163; 
  char v164[4]; 
  unsigned int v165; 
  char v166[4]; 
  int v167; 
  int msg; 
  int v169; 
  int v170; 
  unsigned int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 

  v0 = 0;
  for ( i = 0; i < 0x80; i += 16 )
  {
    v2 = 0;
    v3 = 0i64;
    v4 = (unsigned __int64)i << 7;
    v5 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v4);
    while ( !*v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= 3 )
        goto LABEL_7;
    }
    v2 = 1;
LABEL_7:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v4) || v2 )
      ++v0;
    v6 = 0;
    v7 = 0i64;
    v8 = (unsigned __int64)(i + 1) << 7;
    v9 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v8);
    while ( !*v9 )
    {
      ++v7;
      ++v9;
      if ( v7 >= 3 )
        goto LABEL_15;
    }
    v6 = 1;
LABEL_15:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v8) || v6 )
      ++v0;
    v10 = 0;
    v11 = 0i64;
    v12 = (unsigned __int64)(i + 2) << 7;
    v13 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v12);
    while ( !*v13 )
    {
      ++v11;
      ++v13;
      if ( v11 >= 3 )
        goto LABEL_23;
    }
    v10 = 1;
LABEL_23:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v12) || v10 )
      ++v0;
    v14 = 0;
    v15 = 0i64;
    v16 = (unsigned __int64)(i + 3) << 7;
    v17 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v16);
    while ( !*v17 )
    {
      ++v15;
      ++v17;
      if ( v15 >= 3 )
        goto LABEL_31;
    }
    v14 = 1;
LABEL_31:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v16) || v14 )
      ++v0;
    v18 = 0;
    v19 = 0i64;
    v20 = (unsigned __int64)(i + 4) << 7;
    v21 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v20);
    while ( !*v21 )
    {
      ++v19;
      ++v21;
      if ( v19 >= 3 )
        goto LABEL_39;
    }
    v18 = 1;
LABEL_39:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v20) || v18 )
      ++v0;
    v22 = 0;
    v23 = 0i64;
    v24 = (unsigned __int64)(i + 5) << 7;
    v25 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v24);
    while ( !*v25 )
    {
      ++v23;
      ++v25;
      if ( v23 >= 3 )
        goto LABEL_47;
    }
    v22 = 1;
LABEL_47:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v24) || v22 )
      ++v0;
    v26 = 0;
    v27 = 0i64;
    v28 = (unsigned __int64)(i + 6) << 7;
    v29 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v28);
    while ( !*v29 )
    {
      ++v27;
      ++v29;
      if ( v27 >= 3 )
        goto LABEL_55;
    }
    v26 = 1;
LABEL_55:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v28) || v26 )
      ++v0;
    v30 = 0;
    v31 = 0i64;
    v32 = (unsigned __int64)(i + 7) << 7;
    v33 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v32);
    while ( !*v33 )
    {
      ++v31;
      ++v33;
      if ( v31 >= 3 )
        goto LABEL_63;
    }
    v30 = 1;
LABEL_63:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v32) || v30 )
      ++v0;
    v34 = 0;
    v35 = 0i64;
    v36 = (unsigned __int64)(i + 8) << 7;
    v37 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v36);
    while ( !*v37 )
    {
      ++v35;
      ++v37;
      if ( v35 >= 3 )
        goto LABEL_71;
    }
    v34 = 1;
LABEL_71:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v36) || v34 )
      ++v0;
    v38 = 0;
    v39 = 0i64;
    v40 = (unsigned __int64)(i + 9) << 7;
    v41 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v40);
    while ( !*v41 )
    {
      ++v39;
      ++v41;
      if ( v39 >= 3 )
        goto LABEL_79;
    }
    v38 = 1;
LABEL_79:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v40) || v38 )
      ++v0;
    v42 = 0;
    v43 = 0i64;
    v44 = (unsigned __int64)(i + 10) << 7;
    v45 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v44);
    while ( !*v45 )
    {
      ++v43;
      ++v45;
      if ( v43 >= 3 )
        goto LABEL_87;
    }
    v42 = 1;
LABEL_87:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v44) || v42 )
      ++v0;
    v46 = 0;
    v47 = 0i64;
    v48 = (unsigned __int64)(i + 11) << 7;
    v49 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v48);
    while ( !*v49 )
    {
      ++v47;
      ++v49;
      if ( v47 >= 3 )
        goto LABEL_95;
    }
    v46 = 1;
LABEL_95:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v48) || v46 )
      ++v0;
    v50 = 0;
    v51 = 0i64;
    v52 = (unsigned __int64)(i + 12) << 7;
    v53 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v52);
    while ( !*v53 )
    {
      ++v51;
      ++v53;
      if ( v51 >= 3 )
        goto LABEL_103;
    }
    v50 = 1;
LABEL_103:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v52) || v50 )
      ++v0;
    v54 = 0;
    v55 = 0i64;
    v56 = (unsigned __int64)(i + 13) << 7;
    v57 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v56);
    while ( !*v57 )
    {
      ++v55;
      ++v57;
      if ( v55 >= 3 )
        goto LABEL_111;
    }
    v54 = 1;
LABEL_111:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v56) || v54 )
      ++v0;
    v58 = 0;
    v59 = 0i64;
    v60 = (unsigned __int64)(i + 14) << 7;
    v61 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v60);
    while ( !*v61 )
    {
      ++v59;
      ++v61;
      if ( v59 >= 3 )
        goto LABEL_119;
    }
    v58 = 1;
LABEL_119:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v60) || v58 )
      ++v0;
    v62 = 0;
    v63 = 0i64;
    v64 = (unsigned __int64)(i + 15) << 7;
    v65 = (unsigned int *)((char *)g_snd.entState[0].contextTypes + v64);
    while ( !*v65 )
    {
      ++v63;
      ++v65;
      if ( v63 >= 3 )
        goto LABEL_127;
    }
    v62 = 1;
LABEL_127:
    if ( *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v64) || v62 )
      ++v0;
  }
  v66 = truncate_cast<unsigned int,unsigned __int64>(0x18ui64);
  v67 = "SND Ent States Allocated";
  Com_DevhostSendMessage(3, 6u, v66, "SND Ent States Allocated");
  v68 = 5381;
  v69 = 83;
  v70 = 5381;
  do
  {
    ++v67;
    v71 = v69 | 0x20;
    if ( (unsigned int)(v69 - 65) >= 0x1A )
      v71 = v69;
    v70 = 65599 * v70 + v71;
    v69 = *v67;
  }
  while ( *v67 );
  v169 = v0;
  if ( !v70 )
    v70 = 1;
  msg = v70;
  Com_DevhostSendMessage(3, 0xEu, 8u, (const char *)&msg);
  v72 = truncate_cast<unsigned int,unsigned __int64>(0x1Aui64);
  v73 = "SND Ent States Allocated %";
  Com_DevhostSendMessage(3, 6u, v72, "SND Ent States Allocated %");
  v74 = 5381;
  v75 = 83;
  do
  {
    ++v73;
    v76 = v75 | 0x20;
    if ( (unsigned int)(v75 - 65) >= 0x1A )
      v76 = v75;
    v74 = 65599 * v74 + v76;
    v75 = *v73;
  }
  while ( *v73 );
  if ( !v74 )
    v74 = 1;
  v170 = v74;
  v171 = (unsigned int)(100 * v0) >> 7;
  Com_DevhostSendMessage(3, 0xEu, 8u, (const char *)&v170);
  frameUsec = g_snd.frameUsec;
  v78 = truncate_cast<unsigned int,unsigned __int64>(0xEui64);
  v79 = "SND Frame usec";
  Com_DevhostSendMessage(3, 6u, v78, "SND Frame usec");
  v80 = 5381;
  v81 = 83;
  do
  {
    ++v79;
    v82 = v81 | 0x20;
    if ( (unsigned int)(v81 - 65) >= 0x1A )
      v82 = v81;
    v80 = 65599 * v80 + v82;
    v81 = *v79;
  }
  while ( *v79 );
  v173 = frameUsec;
  if ( !v80 )
    v80 = 1;
  v172 = v80;
  Com_DevhostSendMessage(3, 0xEu, 8u, (const char *)&v172);
  clientFrameUsec = g_snd.clientFrameUsec;
  v84 = truncate_cast<unsigned int,unsigned __int64>(0x11ui64);
  v85 = "SND CG Frame usec";
  Com_DevhostSendMessage(3, 6u, v84, "SND CG Frame usec");
  v86 = 5381;
  v87 = 83;
  do
  {
    ++v85;
    v88 = v87 | 0x20;
    if ( (unsigned int)(v87 - 65) >= 0x1A )
      v88 = v87;
    v86 = 65599 * v86 + v88;
    v87 = *v85;
  }
  while ( *v85 );
  v175 = clientFrameUsec;
  if ( !v86 )
    v86 = 1;
  v174 = v86;
  Com_DevhostSendMessage(3, 0xEu, 8u, (const char *)&v174);
  updateFarReverbsUsec = g_snd.updateFarReverbsUsec;
  v90 = truncate_cast<unsigned int,unsigned __int64>(0x16ui64);
  v91 = "SND update far reverbs";
  Com_DevhostSendMessage(3, 6u, v90, "SND update far reverbs");
  v92 = 5381;
  v93 = 83;
  do
  {
    ++v91;
    v94 = v93 | 0x20;
    if ( (unsigned int)(v93 - 65) >= 0x1A )
      v94 = v93;
    v92 = 65599 * v92 + v94;
    v93 = *v91;
  }
  while ( *v91 );
  v149 = updateFarReverbsUsec;
  if ( !v92 )
    v92 = 1;
  *(_DWORD *)v148 = v92;
  Com_DevhostSendMessage(3, 0xEu, 8u, v148);
  updatePlayerReverbUsec = g_snd.updatePlayerReverbUsec;
  v96 = truncate_cast<unsigned int,unsigned __int64>(0x19ui64);
  v97 = "SND update player reverbs";
  Com_DevhostSendMessage(3, 6u, v96, "SND update player reverbs");
  v98 = 5381;
  v99 = 83;
  do
  {
    ++v97;
    v100 = v99 | 0x20;
    if ( (unsigned int)(v99 - 65) >= 0x1A )
      v100 = v99;
    v98 = 65599 * v98 + v100;
    v99 = *v97;
  }
  while ( *v97 );
  v151 = updatePlayerReverbUsec;
  if ( !v98 )
    v98 = 1;
  *(_DWORD *)v150 = v98;
  Com_DevhostSendMessage(3, 0xEu, 8u, v150);
  propagationKdTreeUsec = g_snd.propagationKdTreeUsec;
  v102 = truncate_cast<unsigned int,unsigned __int64>(0x17ui64);
  v103 = "SND propagation kd tree";
  Com_DevhostSendMessage(3, 6u, v102, "SND propagation kd tree");
  v104 = 5381;
  v105 = 83;
  do
  {
    ++v103;
    v106 = v105 | 0x20;
    if ( (unsigned int)(v105 - 65) >= 0x1A )
      v106 = v105;
    v104 = 65599 * v104 + v106;
    v105 = *v103;
  }
  while ( *v103 );
  v153 = propagationKdTreeUsec;
  if ( !v104 )
    v104 = 1;
  *(_DWORD *)v152 = v104;
  Com_DevhostSendMessage(3, 0xEu, 8u, v152);
  propagationPathUsec = g_snd.propagationPathUsec;
  v108 = truncate_cast<unsigned int,unsigned __int64>(0x19ui64);
  v109 = "SND propagation path time";
  Com_DevhostSendMessage(3, 6u, v108, "SND propagation path time");
  v110 = 5381;
  v111 = 83;
  do
  {
    ++v109;
    v112 = v111 | 0x20;
    if ( (unsigned int)(v111 - 65) >= 0x1A )
      v112 = v111;
    v110 = 65599 * v110 + v112;
    v111 = *v109;
  }
  while ( *v109 );
  v155 = propagationPathUsec;
  if ( !v110 )
    v110 = 1;
  *(_DWORD *)v154 = v110;
  Com_DevhostSendMessage(3, 0xEu, 8u, v154);
  propagationCount = g_snd.propagationCount;
  v114 = truncate_cast<unsigned int,unsigned __int64>(0x15ui64);
  v115 = "SND propagation count";
  Com_DevhostSendMessage(3, 6u, v114, "SND propagation count");
  v116 = 5381;
  v117 = 83;
  do
  {
    ++v115;
    v118 = v117 | 0x20;
    if ( (unsigned int)(v117 - 65) >= 0x1A )
      v118 = v117;
    v116 = 65599 * v116 + v118;
    v117 = *v115;
  }
  while ( *v115 );
  v157 = propagationCount;
  if ( !v116 )
    v116 = 1;
  *(_DWORD *)v156 = v116;
  Com_DevhostSendMessage(3, 0xEu, 8u, v156);
  occlusionRaycastUsec = g_snd.occlusionRaycastUsec;
  g_snd.propagationCount = 0;
  v120 = truncate_cast<unsigned int,unsigned __int64>(0x15ui64);
  v121 = "SND occlusion raycast";
  Com_DevhostSendMessage(3, 6u, v120, "SND occlusion raycast");
  v122 = 5381;
  v123 = 83;
  do
  {
    ++v121;
    v124 = v123 | 0x20;
    if ( (unsigned int)(v123 - 65) >= 0x1A )
      v124 = v123;
    v122 = 65599 * v122 + v124;
    v123 = *v121;
  }
  while ( *v121 );
  v159 = occlusionRaycastUsec;
  if ( !v122 )
    v122 = 1;
  *(_DWORD *)v158 = v122;
  Com_DevhostSendMessage(3, 0xEu, 8u, v158);
  entStateUsec = g_snd.entStateUsec;
  v126 = truncate_cast<unsigned int,unsigned __int64>(0x12ui64);
  v127 = "SND Ent State usec";
  Com_DevhostSendMessage(3, 6u, v126, "SND Ent State usec");
  v128 = 5381;
  v129 = 83;
  do
  {
    ++v127;
    v130 = v129 | 0x20;
    if ( (unsigned int)(v129 - 65) >= 0x1A )
      v130 = v129;
    v128 = 65599 * v128 + v130;
    v129 = *v127;
  }
  while ( *v127 );
  v161 = entStateUsec;
  if ( !v128 )
    v128 = 1;
  *(_DWORD *)v160 = v128;
  Com_DevhostSendMessage(3, 0xEu, 8u, v160);
  banksLoading = g_snd.banksLoading;
  v132 = truncate_cast<unsigned int,unsigned __int64>(0x11ui64);
  v133 = "SND banks loading";
  Com_DevhostSendMessage(3, 6u, v132, "SND banks loading");
  v134 = 5381;
  v135 = 83;
  do
  {
    ++v133;
    v136 = v135 | 0x20;
    if ( (unsigned int)(v135 - 65) >= 0x1A )
      v136 = v135;
    v134 = 65599 * v134 + v136;
    v135 = *v133;
  }
  while ( *v133 );
  v163 = banksLoading;
  if ( !v134 )
    v134 = 1;
  *(_DWORD *)v162 = v134;
  Com_DevhostSendMessage(3, 0xEu, 8u, v162);
  updateDuckUsec = g_snd.updateDuckUsec;
  v138 = truncate_cast<unsigned int,unsigned __int64>(0x12ui64);
  v139 = "SND update duck us";
  Com_DevhostSendMessage(3, 6u, v138, "SND update duck us");
  v140 = 5381;
  v141 = 83;
  do
  {
    ++v139;
    v142 = v141 | 0x20;
    if ( (unsigned int)(v141 - 65) >= 0x1A )
      v142 = v141;
    v140 = 65599 * v140 + v142;
    v141 = *v139;
  }
  while ( *v139 );
  v165 = updateDuckUsec;
  if ( !v140 )
    v140 = 1;
  *(_DWORD *)v164 = v140;
  Com_DevhostSendMessage(3, 0xEu, 8u, v164);
  mixMasterMeterUsec = g_sd.mixMasterMeterUsec;
  v144 = truncate_cast<unsigned int,unsigned __int64>(0xCui64);
  v145 = "SD meters us";
  Com_DevhostSendMessage(3, 6u, v144, "SD meters us");
  v146 = 83;
  do
  {
    ++v145;
    v147 = v146 | 0x20;
    if ( (unsigned int)(v146 - 65) >= 0x1A )
      v147 = v146;
    v68 = 65599 * v68 + v147;
    v146 = *v145;
  }
  while ( *v145 );
  v167 = mixMasterMeterUsec;
  if ( !v68 )
    v68 = 1;
  *(_DWORD *)v166 = v68;
  Com_DevhostSendMessage(3, 0xEu, 8u, v166);
}

/*
==============
SND_DevhostString
==============
*/
void SND_DevhostString(const char *string)
{
  unsigned __int64 v2; 
  unsigned int v3; 

  v2 = -1i64;
  do
    ++v2;
  while ( string[v2] );
  v3 = truncate_cast<unsigned int,unsigned __int64>(v2);
  Com_DevhostSendMessage(3, 6u, v3, string);
}

/*
==============
SND_DevhostSubmixes
==============
*/

void __fastcall SND_DevhostSubmixes(double HpFilterValue)
{
  const dvar_t *v1; 
  const dvar_t *v2; 
  int Units; 
  char *v4; 
  unsigned int v5; 
  const snd_volmod_info_t *VolModByIndex; 
  float v7; 
  __int128 v8; 
  double VolmodFocusAmount; 
  float v11; 
  double CutoffAsHz; 
  int i; 
  int type; 
  unsigned int id; 
  float effect; 
  char msg[512]; 
  char v19; 

  if ( Com_DevhostSystemActive(3) )
  {
    v1 = DCONST_DVARBOOL_snd_submix_dev_cutout;
    if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( !v1->current.enabled )
    {
      v2 = DCONST_DVARBOOL_snd_submix_disable;
      if ( !DCONST_DVARBOOL_snd_submix_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( !v2->current.enabled )
      {
        Units = SND_SubmixDebugGetUnits();
        if ( Units != 3 )
        {
          memset_0(msg, 0, 0xC00ui64);
          v4 = &v19;
          v5 = 0;
          while ( 1 )
          {
            VolModByIndex = SND_GetVolModByIndex(v5);
            if ( VolModByIndex )
            {
              *((_DWORD *)v4 - 128) = VolModByIndex->id;
              HpFilterValue = SND_SubmixGetHpFilterValue(v5);
              v7 = *(float *)&HpFilterValue;
              HpFilterValue = SND_SubmixGetLpFilterValue(v5);
              v8 = *(_OWORD *)&HpFilterValue;
              HpFilterValue = SND_SubmixGetVolmodAttenuation(v5);
              _XMM8 = *(_OWORD *)&HpFilterValue;
              VolmodFocusAmount = SND_SubmixGetVolmodFocusAmount(v5);
              v11 = *(float *)&VolmodFocusAmount;
              *((_DWORD *)v4 + 512) = SND_SubmixGetVolmodFocusConeId(v5);
              if ( Units == 1 )
              {
                *(float *)v4 = *(float *)&_XMM8;
                *((float *)v4 + 128) = v7;
                *((float *)v4 + 256) = *(float *)&v8;
LABEL_21:
                *((float *)v4 + 384) = v11;
                goto LABEL_22;
              }
              if ( Units == 2 )
              {
                __asm { vmaxss  xmm0, xmm8, xmm13; X }
                *(float *)v4 = log10f_0(*(float *)&_XMM0) * 20.0;
                CutoffAsHz = SND_SubmixDebugGetCutoffAsHz(v7);
                *((float *)v4 + 128) = *(float *)&CutoffAsHz;
                if ( *(float *)&CutoffAsHz > 1000.0 )
                  *((float *)v4 + 128) = *(float *)&CutoffAsHz * 0.001;
                *(&HpFilterValue + 1) = *((double *)&v8 + 1);
                HpFilterValue = SND_SubmixDebugGetCutoffAsHzFaded(*(float *)&v8);
                *((float *)v4 + 256) = *(float *)&HpFilterValue * 0.001;
                if ( (float)(*(float *)&HpFilterValue * 0.001) > 1000.0 )
                {
                  *(&HpFilterValue + 1) = *((double *)&v8 + 1);
                  *((float *)v4 + 256) = (float)(*(float *)&HpFilterValue * 0.001) * 0.001;
                }
                goto LABEL_21;
              }
              *(float *)v4 = *(float *)&_XMM8 * 100.0;
              *((float *)v4 + 128) = v7 * 100.0;
              *((float *)v4 + 256) = *(float *)&v8 * 100.0;
              *((float *)v4 + 384) = *(float *)&VolmodFocusAmount * 100.0;
            }
LABEL_22:
            ++v5;
            v4 += 4;
            if ( v5 >= 0x80 )
            {
              Com_DevhostSendMessage(3, 0xBu, 0xC00u, msg);
              for ( i = 0; i < 141; ++i )
              {
                if ( SND_SubmixDebugGetData(i, &type, &id, &effect, NULL, NULL, NULL) )
                  Com_DevhostSendMessage(3, 0xAu, 0xCu, (const char *)&type);
              }
              return;
            }
          }
        }
      }
    }
  }
}

/*
==============
SND_DevhostUpdateValue
==============
*/
void SND_DevhostUpdateValue(ComDevhostReadHandle *handle)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned __int8 *v5; 
  char v6; 
  __int64 v7; 
  unsigned __int8 *v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  unsigned __int8 *v18; 
  char v19; 
  __int64 v20; 
  unsigned __int8 *v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  unsigned __int8 *v31; 
  char v32; 
  __int64 v33; 
  unsigned __int8 *v34; 
  int v35; 
  unsigned int v36; 
  unsigned __int8 *v37; 
  char v38; 
  unsigned __int8 *v39; 
  unsigned __int8 desbuf[1024]; 
  char v42; 
  char value[1024]; 
  char property[1024]; 
  char row[1024]; 
  char type[1024]; 

  v2 = (int)ComDevhostReadHandle::Read(handle, desbuf, 0x3FFu);
  v3 = 0i64;
  type[0] = 0;
  desbuf[v2] = 0;
  if ( !desbuf[0] )
    goto LABEL_14;
  v4 = 0;
  v5 = desbuf;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == 58 || !v6 )
      break;
    v7 = v4;
    ++v5;
    ++v4;
    type[v7] = v6;
    if ( v4 >= 0x400 )
      goto LABEL_8;
  }
  type[v4] = 0;
LABEL_8:
  if ( desbuf[v4] && (v8 = &desbuf[v4 + 1]) != NULL )
  {
    if ( v8 < desbuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 110, ASSERT_TYPE_ASSERT, "(token >= payloadBuffer)", (const char *)&queryFormat, "token >= payloadBuffer") )
      __debugbreak();
    memmove_0(desbuf, v8, 1024 - (v8 - desbuf));
    v9 = v2 - (v8 - desbuf);
  }
  else
  {
LABEL_14:
    v9 = 0;
  }
  v10 = v9 + ComDevhostReadHandle::Read(handle, &desbuf[v9], 1023 - v9);
  desbuf[v10] = 0;
  if ( !desbuf[0] )
    goto LABEL_26;
  v11 = 0;
  v12 = desbuf;
  do
  {
    if ( *v12 == 58 )
      break;
    if ( !*v12 )
      break;
    ++v11;
    ++v12;
  }
  while ( v11 < 0x400 );
  if ( desbuf[v11] && (v13 = &desbuf[v11 + 1]) != NULL )
  {
    if ( v13 < desbuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 110, ASSERT_TYPE_ASSERT, "(token >= payloadBuffer)", (const char *)&queryFormat, "token >= payloadBuffer") )
      __debugbreak();
    memmove_0(desbuf, v13, 1024 - (v13 - desbuf));
    v14 = v10 - (v13 - desbuf);
  }
  else
  {
LABEL_26:
    v14 = 0;
  }
  v15 = ComDevhostReadHandle::Read(handle, &desbuf[v14], 1023 - v14);
  row[0] = 0;
  v16 = v14 + v15;
  desbuf[v14 + v15] = 0;
  if ( !desbuf[0] )
    goto LABEL_40;
  v17 = 0;
  v18 = desbuf;
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 == 58 || !v19 )
      break;
    v20 = v17;
    ++v18;
    ++v17;
    row[v20] = v19;
    if ( v17 >= 0x400 )
      goto LABEL_34;
  }
  row[v17] = 0;
LABEL_34:
  if ( desbuf[v17] && (v21 = &desbuf[v17 + 1]) != NULL )
  {
    if ( v21 < desbuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 110, ASSERT_TYPE_ASSERT, "(token >= payloadBuffer)", (const char *)&queryFormat, "token >= payloadBuffer") )
      __debugbreak();
    memmove_0(desbuf, v21, 1024 - (v21 - desbuf));
    v22 = v16 - (v21 - desbuf);
  }
  else
  {
LABEL_40:
    v22 = 0;
  }
  v23 = v22 + ComDevhostReadHandle::Read(handle, &desbuf[v22], 1023 - v22);
  desbuf[v23] = 0;
  if ( !desbuf[0] )
    goto LABEL_52;
  v24 = 0;
  v25 = desbuf;
  do
  {
    if ( *v25 == 58 )
      break;
    if ( !*v25 )
      break;
    ++v24;
    ++v25;
  }
  while ( v24 < 0x400 );
  if ( desbuf[v24] && (v26 = &desbuf[v24 + 1]) != NULL )
  {
    if ( v26 < desbuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 110, ASSERT_TYPE_ASSERT, "(token >= payloadBuffer)", (const char *)&queryFormat, "token >= payloadBuffer") )
      __debugbreak();
    memmove_0(desbuf, v26, 1024 - (v26 - desbuf));
    v27 = v23 - (v26 - desbuf);
  }
  else
  {
LABEL_52:
    v27 = 0;
  }
  v28 = ComDevhostReadHandle::Read(handle, &desbuf[v27], 1023 - v27);
  property[0] = 0;
  v29 = v27 + v28;
  desbuf[v27 + v28] = 0;
  if ( !desbuf[0] )
    goto LABEL_66;
  v30 = 0;
  v31 = desbuf;
  while ( 1 )
  {
    v32 = *v31;
    if ( *v31 == 61 || !v32 )
      break;
    v33 = v30;
    ++v31;
    ++v30;
    property[v33] = v32;
    if ( v30 >= 0x400 )
      goto LABEL_60;
  }
  property[v30] = 0;
LABEL_60:
  if ( desbuf[v30] && (v34 = &desbuf[v30 + 1]) != NULL )
  {
    if ( v34 < desbuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 110, ASSERT_TYPE_ASSERT, "(token >= payloadBuffer)", (const char *)&queryFormat, "token >= payloadBuffer") )
      __debugbreak();
    memmove_0(desbuf, v34, 1024 - (v34 - desbuf));
    v35 = v29 - (v34 - desbuf);
  }
  else
  {
LABEL_66:
    v35 = 0;
  }
  v36 = ComDevhostReadHandle::Read(handle, &desbuf[v35], 1023 - v35);
  value[0] = 0;
  desbuf[v35 + v36] = 0;
  if ( desbuf[0] )
  {
    v37 = desbuf;
    while ( 1 )
    {
      v38 = *v37;
      if ( *v37 == 61 || !v38 )
        break;
      value[v3] = v38;
      ++v37;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 0x400 )
        goto LABEL_74;
    }
    value[v3] = 0;
LABEL_74:
    if ( desbuf[v3] )
    {
      v39 = &desbuf[v3 + 1];
      if ( &desbuf[v3 + 1] )
      {
        if ( v39 < desbuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 110, ASSERT_TYPE_ASSERT, "(token >= payloadBuffer)", (const char *)&queryFormat, "token >= payloadBuffer") )
          __debugbreak();
        memmove_0(desbuf, &desbuf[v3 + 1], &v42 - (char *)v39);
      }
    }
  }
  SND_DevhostSetValue(type, row, property, value);
}

/*
==============
SND_DevhostVoices
==============
*/
void SND_DevhostVoices(void)
{
  __int64 i; 
  __int64 v1; 
  snd_overlay_info_t *v2; 
  snd_overlay_info_t *v3; 
  char v4; 
  int v5; 
  char v6; 
  char *aliasName; 
  char v8; 
  int v9; 
  char v10; 
  char *entchannel; 
  char v12; 
  int v13; 
  char v14; 
  char *hpfCurve; 
  char v16; 
  int v17; 
  char v18; 
  int isFiltered; 
  char *lpfCurve; 
  char v21; 
  int v22; 
  char v23; 
  char *rvbCurve; 
  char v25; 
  int v26; 
  char v27; 
  char *speakerMap; 
  char v29; 
  int v30; 
  char v31; 
  char *vfCurve; 
  char v33; 
  int v34; 
  char v35; 
  int voiceFlags; 
  char *volMod; 
  char v38; 
  int v39; 
  char v40; 
  int volModValue_low; 
  char *dopplerPreset; 
  char v43; 
  int v44; 
  char v45; 
  int cpu[4]; 
  char msg[4]; 
  int v48[2971]; 
  snd_overlay_info_t info[99]; 

  memset_0(info, 0, sizeof(info));
  memset_0(msg, 0, 0x2E68ui64);
  SND_GetSoundOverlay(info, 99, cpu);
  for ( i = 0i64; i < 99; ++i )
  {
    v1 = 30 * i;
    v2 = &info[i];
    v3 = v2;
    if ( v2 && (v4 = v2->pszSampleName[0]) != 0 )
    {
      v5 = 5381;
      do
      {
        v3 = (snd_overlay_info_t *)((char *)v3 + 1);
        v6 = v4 | 0x20;
        if ( (unsigned int)(v4 - 65) >= 0x1A )
          v6 = v4;
        v5 = 65599 * v5 + v6;
        v4 = v3->pszSampleName[0];
      }
      while ( v3->pszSampleName[0] );
      if ( !v5 )
        v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    aliasName = v2->aliasName;
    *(_DWORD *)&msg[120 * i] = v5;
    if ( v2 == (snd_overlay_info_t *)-128i64 || (v8 = *aliasName) == 0 )
    {
      v9 = 0;
    }
    else
    {
      v9 = 5381;
      do
      {
        ++aliasName;
        v10 = v8 | 0x20;
        if ( (unsigned int)(v8 - 65) >= 0x1A )
          v10 = v8;
        v9 = 65599 * v9 + v10;
        v8 = *aliasName;
      }
      while ( *aliasName );
      if ( !v9 )
        v9 = 1;
    }
    entchannel = v2->entchannel;
    v48[30 * i + 22] = v2->bus;
    v48[30 * i + 18] = v2->contextType;
    v48[30 * i + 19] = v2->contextValue;
    v48[30 * i + 20] = v2->context2Type;
    v48[30 * i + 21] = v2->context2Value;
    *(_QWORD *)&v48[30 * i + 25] = v2->surfaceFlags;
    v48[30 * i + 11] = v2->dist;
    v48[30 * i] = v9;
    if ( v2 == (snd_overlay_info_t *)-256i64 || (v12 = *entchannel) == 0 )
    {
      v13 = 0;
    }
    else
    {
      v13 = 5381;
      do
      {
        ++entchannel;
        v14 = v12 | 0x20;
        if ( (unsigned int)(v12 - 65) >= 0x1A )
          v14 = v12;
        v13 = 65599 * v13 + v14;
        v12 = *entchannel;
      }
      while ( *entchannel );
      if ( !v13 )
        v13 = 1;
    }
    hpfCurve = v2->hpfCurve;
    v48[30 * i + 9] = LODWORD(v2->fBaseVolume);
    v48[30 * i + 10] = LODWORD(v2->fCurVolume);
    v48[30 * i + 12] = LODWORD(v2->fPitch);
    v48[30 * i + 1] = v13;
    if ( v2 == (snd_overlay_info_t *)-448i64 || (v16 = *hpfCurve) == 0 )
    {
      v17 = 0;
    }
    else
    {
      v17 = 5381;
      do
      {
        ++hpfCurve;
        v18 = v16 | 0x20;
        if ( (unsigned int)(v16 - 65) >= 0x1A )
          v18 = v16;
        v17 = 65599 * v17 + v18;
        v16 = *hpfCurve;
      }
      while ( *hpfCurve );
      if ( !v17 )
        v17 = 1;
    }
    isFiltered = v2->isFiltered;
    lpfCurve = v2->lpfCurve;
    v48[30 * i + 4] = v17;
    v48[30 * i + 13] = isFiltered;
    if ( v2 == (snd_overlay_info_t *)-384i64 || (v21 = *lpfCurve) == 0 )
    {
      v22 = 0;
    }
    else
    {
      v22 = 5381;
      do
      {
        ++lpfCurve;
        v23 = v21 | 0x20;
        if ( (unsigned int)(v21 - 65) >= 0x1A )
          v23 = v21;
        v22 = 65599 * v22 + v23;
        v21 = *lpfCurve;
      }
      while ( *lpfCurve );
      if ( !v22 )
        v22 = 1;
    }
    rvbCurve = v2->rvbCurve;
    v48[30 * i + 14] = LODWORD(v2->occlusionAmount);
    v48[30 * i + 15] = LODWORD(v2->hpfLevel);
    v48[30 * i + 3] = v22;
    if ( v2 == (snd_overlay_info_t *)-512i64 || (v25 = *rvbCurve) == 0 )
    {
      v26 = 0;
    }
    else
    {
      v26 = 5381;
      do
      {
        ++rvbCurve;
        v27 = v25 | 0x20;
        if ( (unsigned int)(v25 - 65) >= 0x1A )
          v27 = v25;
        v26 = 65599 * v26 + v27;
        v25 = *rvbCurve;
      }
      while ( *rvbCurve );
      if ( !v26 )
        v26 = 1;
    }
    speakerMap = v2->speakerMap;
    v48[30 * i + 5] = v26;
    if ( v2 == (snd_overlay_info_t *)-576i64 || (v29 = *speakerMap) == 0 )
    {
      v30 = 0;
    }
    else
    {
      v30 = 5381;
      do
      {
        ++speakerMap;
        v31 = v29 | 0x20;
        if ( (unsigned int)(v29 - 65) >= 0x1A )
          v31 = v29;
        v30 = 65599 * v30 + v31;
        v29 = *speakerMap;
      }
      while ( *speakerMap );
      if ( !v30 )
        v30 = 1;
    }
    vfCurve = v2->vfCurve;
    v48[30 * i + 6] = v30;
    if ( v2 == (snd_overlay_info_t *)-320i64 || (v33 = *vfCurve) == 0 )
    {
      v34 = 0;
    }
    else
    {
      v34 = 5381;
      do
      {
        ++vfCurve;
        v35 = v33 | 0x20;
        if ( (unsigned int)(v33 - 65) >= 0x1A )
          v35 = v33;
        v34 = 65599 * v34 + v35;
        v33 = *vfCurve;
      }
      while ( *vfCurve );
      if ( !v34 )
        v34 = 1;
    }
    voiceFlags = v2->voiceFlags;
    volMod = v2->volMod;
    v48[30 * i + 2] = v34;
    v48[30 * i + 16] = voiceFlags;
    if ( v2 == (snd_overlay_info_t *)-640i64 || (v38 = *volMod) == 0 )
    {
      v39 = 0;
    }
    else
    {
      v39 = 5381;
      do
      {
        ++volMod;
        v40 = v38 | 0x20;
        if ( (unsigned int)(v38 - 65) >= 0x1A )
          v40 = v38;
        v39 = 65599 * v39 + v40;
        v38 = *volMod;
      }
      while ( *volMod );
      if ( !v39 )
        v39 = 1;
    }
    volModValue_low = LODWORD(v2->volModValue);
    v48[30 * i + 7] = v39;
    dopplerPreset = v2->dopplerPreset;
    v48[30 * i + 17] = volModValue_low;
    if ( v2 == (snd_overlay_info_t *)-704i64 || (v43 = *dopplerPreset) == 0 )
    {
      v44 = 0;
    }
    else
    {
      v44 = 5381;
      do
      {
        ++dopplerPreset;
        v45 = v43 | 0x20;
        if ( (unsigned int)(v43 - 65) >= 0x1A )
          v45 = v43;
        v44 = 65599 * v44 + v45;
        v43 = *dopplerPreset;
      }
      while ( *dopplerPreset );
      if ( !v44 )
        v44 = 1;
    }
    v48[v1 + 8] = v44;
  }
  Com_DevhostSendMessage(3, 4u, 0x2E68u, msg);
}

/*
==============
SND_FixAliasRowField
==============
*/
const char *SND_FixAliasRowField(const char *row)
{
  __int64 v1; 
  const char *v2; 
  char v4[1024]; 

  if ( row && *row )
  {
    v1 = 0i64;
    v2 = row;
    while ( *v2 != 46 && *v2 )
    {
      v1 = (unsigned int)(v1 + 1);
      ++v2;
      if ( (unsigned int)v1 >= 0x400 )
        goto LABEL_9;
    }
    v4[v1] = 0;
LABEL_9:
    if ( row[v1] && &row[v1] != (const char *)-1i64 )
      row[v1] = 0;
  }
  return row;
}

/*
==============
SND_ParseWeaponReflKey
==============
*/
bool SND_ParseWeaponReflKey(const char *row, unsigned int *outNameHash, unsigned int *outWeaponClassHash)
{
  __int64 v6; 
  const char *v7; 
  char v8; 
  const char *v9; 
  char v10; 
  char *v11; 
  unsigned int v12; 
  unsigned int v13; 
  char v14; 
  char v15; 
  __int64 v16; 
  char *v17; 
  char v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  bool result; 
  char *v27; 
  int v28; 
  char v29; 
  char v30; 
  char v31[1024]; 

  v31[0] = 0;
  if ( !row || !*row )
    return 0;
  v6 = 0i64;
  v7 = row;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == 46 || !v8 )
      break;
    v31[v6] = v8;
    ++v7;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x400 )
      goto LABEL_9;
  }
  v31[v6] = 0;
LABEL_9:
  if ( !row[v6] )
    return 0;
  v9 = &row[v6 + 1];
  if ( &row[v6] == (const char *)-1i64 )
    return 0;
  v10 = v31[0];
  v11 = v31;
  v12 = 5381;
  if ( v31[0] )
  {
    v13 = 5381;
    do
    {
      ++v11;
      v14 = v10 | 0x20;
      if ( (unsigned int)(v10 - 65) >= 0x1A )
        v14 = v10;
      v13 = 65599 * v13 + v14;
      v10 = *v11;
    }
    while ( *v11 );
    if ( !v13 )
      v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  v15 = 0;
  *outNameHash = v13;
  v31[0] = 0;
  if ( *v9 )
  {
    v16 = 0i64;
    v17 = (char *)v9;
    while ( 1 )
    {
      v18 = *v17;
      if ( *v17 == 46 || !v18 )
        break;
      v31[v16] = v18;
      ++v17;
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= 0x400 )
        goto LABEL_27;
    }
    v31[v16] = 0;
LABEL_27:
    if ( !v9[v16] || &v9[v16] == (const char *)-1i64 )
    {
      v15 = v31[0];
      goto LABEL_30;
    }
    return 0;
  }
LABEL_30:
  v19 = 0x7FFFFFFFi64;
  v20 = 0i64;
  while ( 1 )
  {
    v21 = (unsigned __int8)v31[v20];
    v22 = v19;
    v23 = (unsigned __int8)aNull_10[v20++];
    --v19;
    if ( !v22 )
      goto LABEL_39;
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
        break;
    }
    if ( !v21 )
      goto LABEL_39;
  }
  v27 = v31;
  if ( !v15 )
  {
LABEL_39:
    result = 1;
    *outWeaponClassHash = 0;
    return result;
  }
  do
  {
    v28 = v15;
    ++v27;
    v29 = v15 | 0x20;
    v30 = v15;
    v15 = *v27;
    if ( (unsigned int)(v28 - 65) >= 0x1A )
      v29 = v30;
    v12 = 65599 * v12 + v29;
  }
  while ( v15 );
  result = 1;
  if ( !v12 )
    v12 = 1;
  *outWeaponClassHash = v12;
  return result;
}

/*
==============
SND_SetRawAliasField
==============
*/
__int64 SND_SetRawAliasField(const char *filename, unsigned int entry_count, const void *entries, const char *property)
{
  return 0i64;
}

/*
==============
Snd_NextToken
==============
*/
const char *Snd_NextToken(const char *src, char *dst, int sep, unsigned int len)
{
  __int64 v8; 
  const char *v9; 
  int v10; 

  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_devhost.cpp", 63, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  *dst = 0;
  if ( !src || !*src )
    return 0i64;
  v8 = 0i64;
  if ( len )
  {
    v9 = src;
    while ( 1 )
    {
      v10 = *v9;
      if ( v10 == sep || !(_BYTE)v10 )
        break;
      dst[v8] = v10;
      ++v9;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= len )
        goto LABEL_13;
    }
    dst[v8] = 0;
  }
LABEL_13:
  if ( src[v8] )
    return &src[v8 + 1];
  else
    return 0i64;
}

