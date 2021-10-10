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
  __int64 v10; 
  int v11; 

  v5 = from->v[2];
  v6 = from->v[0];
  LOBYTE(v11) = BYTE3(from);
  HIBYTE(v11) = BYTE2(from);
  v7 = from->v[1];
  *(_WORD *)((char *)&v11 + 1) = (_WORD)from;
  v8 = v11;
  v9 = LODWORD(v6) ^ v11 ^ ~yConst;
  LODWORD(to->v[2]) = zConst ^ LODWORD(v5) ^ v11 ^ LODWORD(v7);
  LODWORD(to->v[0]) = xConst ^ LODWORD(v6) ^ LODWORD(v5) ^ v8;
  memset(&v10, 0, sizeof(v10));
  LODWORD(to->v[1]) = v9;
  zConst = LODWORD(to->v[0]);
  if ( (zConst & 0x7F800000) == 2139095040 || (zConst = LODWORD(to->v[1]), (zConst & 0x7F800000) == 2139095040) || (zConst = LODWORD(to->v[2]), (zConst & 0x7F800000) == 2139095040) )
  {
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
  float v9; 
  unsigned int v10; 
  float v11; 
  float v12; 
  int v13; 
  unsigned int v14; 
  vec3_t *v15; 
  float v16; 

  v15 = to;
  v16 = from->v[0];
  if ( (LODWORD(v16) & 0x7F800000) == 2139095040 || (v16 = from->v[1], (LODWORD(v16) & 0x7F800000) == 2139095040) || (v16 = from->v[2], (LODWORD(v16) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 816, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v9 = from->v[0];
  v10 = ~yConst ^ LODWORD(from->v[1]);
  LOBYTE(v16) = BYTE3(to);
  HIBYTE(v16) = BYTE2(v15);
  v11 = from->v[2];
  *(_WORD *)((char *)&v16 + 1) = (_WORD)to;
  v12 = v16;
  v13 = LODWORD(v16) ^ v10;
  LODWORD(to->v[0]) = v13;
  v14 = xConst ^ LODWORD(v12) ^ v13 ^ LODWORD(v9);
  LODWORD(to->v[2]) = v14;
  LODWORD(to->v[1]) = zConst ^ LODWORD(v12) ^ v14 ^ LODWORD(v11);
  memset(&v15, 0, sizeof(v15));
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

