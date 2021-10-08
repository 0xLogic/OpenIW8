/*
==============
GetSecureSndVec3
==============
*/

void __fastcall GetSecureSndVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  ?GetSecureSndVec3@@YAXAEBTvec3_t@@AEAT1@III@Z(from, to, xConst, yConst, zConst);
}

/*
==============
SndVoice::SndVoice
==============
*/

void __fastcall SndVoice::SndVoice(SndVoice *this)
{
  ??0SndVoice@@QEAA@XZ(this);
}

/*
==============
SndVoice_SetOrigin
==============
*/

void __fastcall SndVoice_SetOrigin(SndVoice *sndVoice, const vec3_t *origin)
{
  ?SndVoice_SetOrigin@@YAXPEAUSndVoice@@AEBTvec3_t@@@Z(sndVoice, origin);
}

/*
==============
SND_IsWorldEntity
==============
*/

bool __fastcall SND_IsWorldEntity(unsigned __int64 sndEnt)
{
  return ?SND_IsWorldEntity@@YA_N_K@Z(sndEnt);
}

/*
==============
SndEntState::SndEntState
==============
*/

void __fastcall SndEntState::SndEntState(SndEntState *this)
{
  ??0SndEntState@@QEAA@XZ(this);
}

/*
==============
SndEntState_GetOrigin
==============
*/

void __fastcall SndEntState_GetOrigin(const SndEntState *sndEntState, vec3_t *outOrigin)
{
  ?SndEntState_GetOrigin@@YAXPEBUSndEntState@@AEATvec3_t@@@Z(sndEntState, outOrigin);
}

/*
==============
SndEntState_SetOrigin
==============
*/

void __fastcall SndEntState_SetOrigin(SndEntState *sndEntState, const vec3_t *origin)
{
  ?SndEntState_SetOrigin@@YAXPEAUSndEntState@@AEBTvec3_t@@@Z(sndEntState, origin);
}

/*
==============
SndVoice_GetOrigin
==============
*/

void __fastcall SndVoice_GetOrigin(const SndVoice *sndVoice, vec3_t *outOrigin)
{
  ?SndVoice_GetOrigin@@YAXPEBUSndVoice@@AEATvec3_t@@@Z(sndVoice, outOrigin);
}

/*
==============
SetSecureSndVec3
==============
*/

void __fastcall SetSecureSndVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  ?SetSecureSndVec3@@YAXAEBTvec3_t@@AEAT1@III@Z(from, to, xConst, yConst, zConst);
}

/*
==============
GetSecureSndVec3
==============
*/
void GetSecureSndVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  float v5; 
  float v6; 
  float v7; 
  int v8; 
  unsigned int v9; 
  __int64 v13; 
  int v14; 

  v5 = from->v[2];
  v6 = from->v[0];
  LOBYTE(v14) = BYTE3(from);
  HIBYTE(v14) = BYTE2(from);
  v7 = from->v[1];
  *(_WORD *)((char *)&v14 + 1) = (_WORD)from;
  v8 = v14;
  v9 = LODWORD(v6) ^ v14 ^ ~yConst;
  LODWORD(to->v[2]) = zConst ^ LODWORD(v5) ^ v14 ^ LODWORD(v7);
  LODWORD(to->v[0]) = xConst ^ LODWORD(v6) ^ LODWORD(v5) ^ v8;
  memset(&v13, 0, sizeof(v13));
  LODWORD(to->v[1]) = v9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 868, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

/*
==============
SndEntState::SndEntState
==============
*/
void SndEntState::SndEntState(SndEntState *this)
{
  ;
}

/*
==============
SndVoice::SndVoice
==============
*/
void SndVoice::SndVoice(SndVoice *this)
{
  ;
}

/*
==============
SND_IsWorldEntity
==============
*/
bool SND_IsWorldEntity(unsigned __int64 sndEnt)
{
  unsigned __int64 v1; 

  v1 = sndEnt & 0x1FFFFFFFFi64;
  return v1 - 5411 > 0x1F && v1 - 2049 > 0x8FF && v1 > 0x7FD && v1 - 5571 > 0x7A120;
}

/*
==============
SetSecureSndVec3
==============
*/
void SetSecureSndVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  const vec3_t *v9; 
  float v12; 
  unsigned int v13; 
  float v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  vec3_t *v18; 
  int v19; 

  v18 = to;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  v9 = from;
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 816, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v12 = v9->v[0];
  v13 = ~yConst ^ LODWORD(v9->v[1]);
  LOBYTE(v19) = BYTE3(to);
  HIBYTE(v19) = BYTE2(v18);
  v14 = v9->v[2];
  *(_WORD *)((char *)&v19 + 1) = (_WORD)to;
  v15 = v19;
  v16 = v19 ^ v13;
  LODWORD(to->v[0]) = v16;
  v17 = xConst ^ v15 ^ v16 ^ LODWORD(v12);
  LODWORD(to->v[2]) = v17;
  LODWORD(to->v[1]) = zConst ^ v15 ^ v17 ^ LODWORD(v14);
  memset(&v18, 0, sizeof(v18));
}

/*
==============
SndEntState_GetOrigin
==============
*/
void SndEntState_GetOrigin(const SndEntState *sndEntState, vec3_t *outOrigin)
{
  if ( !sndEntState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 875, ASSERT_TYPE_ASSERT, "(sndEntState)", (const char *)&queryFormat, "sndEntState") )
    __debugbreak();
  GetSecureSndVec3(&sndEntState->origin.origin, outOrigin, s_soundorg_aab_X, s_soundorg_aab_Y, s_soundorg_aab_Z);
}

/*
==============
SndEntState_SetOrigin
==============
*/
void SndEntState_SetOrigin(SndEntState *sndEntState, const vec3_t *origin)
{
  if ( !sndEntState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 895, ASSERT_TYPE_ASSERT, "(sndEntState)", (const char *)&queryFormat, "sndEntState") )
    __debugbreak();
  SetSecureSndVec3(origin, &sndEntState->origin.origin, s_soundorg_aab_X, s_soundorg_aab_Y, s_soundorg_aab_Z);
}

/*
==============
SndVoice_GetOrigin
==============
*/
void SndVoice_GetOrigin(const SndVoice *sndVoice, vec3_t *outOrigin)
{
  if ( !sndVoice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 921, ASSERT_TYPE_ASSERT, "(sndVoice)", (const char *)&queryFormat, "sndVoice") )
    __debugbreak();
  GetSecureSndVec3(&sndVoice->org.origin, outOrigin, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
}

/*
==============
SndVoice_SetOrigin
==============
*/
void SndVoice_SetOrigin(SndVoice *sndVoice, const vec3_t *origin)
{
  if ( !sndVoice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 941, ASSERT_TYPE_ASSERT, "(sndVoice)", (const char *)&queryFormat, "sndVoice") )
    __debugbreak();
  SetSecureSndVec3(origin, &sndVoice->org.origin, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
}

