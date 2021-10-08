/*
==============
BgAntiLag::~BgAntiLag
==============
*/

void __fastcall BgAntiLag::~BgAntiLag(BgAntiLag *this)
{
  ??1BgAntiLag@@UEAA@XZ(this);
}

/*
==============
BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistorySP,BgAntiLagRewindScene>
==============
*/

void __fastcall BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistorySP,BgAntiLagRewindScene>(BgAntiLag *this, CgAntiLagFrameHistorySP *history, unsigned int historyCount, BgAntiLagRewindScene *rewind)
{
  ??$ConnectDataCommon@UCgAntiLagFrameHistorySP@@UBgAntiLagRewindScene@@@BgAntiLag@@IEAAXPEAUCgAntiLagFrameHistorySP@@IPEAUBgAntiLagRewindScene@@@Z(this, history, historyCount, rewind);
}

/*
==============
BgAntiLag::GetSceneAntilagTime
==============
*/

int __fastcall BgAntiLag::GetSceneAntilagTime(BgAntiLag *this)
{
  return ?GetSceneAntilagTime@BgAntiLag@@QEBAHXZ(this);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistoryExtended,200>::push_back
==============
*/

BgAntiLagEntityHistoryExtended *__fastcall AntiLagVector<BgAntiLagEntityHistoryExtended,200>::push_back(AntiLagVector<BgAntiLagEntityHistoryExtended,200> *this)
{
  return ?push_back@?$AntiLagVector@UBgAntiLagEntityHistoryExtended@@$0MI@@@QEAAAEAUBgAntiLagEntityHistoryExtended@@XZ(this);
}

/*
==============
BgAntiLag::GetEntityDataFromIndex
==============
*/

const BgAntiLagEntityHistory *__fastcall BgAntiLag::GetEntityDataFromIndex(BgAntiLag *this, const BgAntiLagFrameHistory *frame, int entIndex)
{
  return ?GetEntityDataFromIndex@BgAntiLag@@IEBAPEBUBgAntiLagEntityHistory@@PEBUBgAntiLagFrameHistory@@H@Z(this, frame, entIndex);
}

/*
==============
BgAntiLag::OnBroadphaseCollection
==============
*/

void __fastcall BgAntiLag::OnBroadphaseCollection(BgAntiLag *this, int entIndex, playerState_s *playerPs)
{
  ?OnBroadphaseCollection@BgAntiLag@@MEAAXHPEAUplayerState_s@@@Z(this, entIndex, playerPs);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[]
==============
*/

BgAntiLagEntityHistoryExtended *__fastcall AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](AntiLagVector<BgAntiLagEntityHistoryExtended,200> *this, int index)
{
  return ??A?$AntiLagVector@UBgAntiLagEntityHistoryExtended@@$0MI@@@QEAAAEAUBgAntiLagEntityHistoryExtended@@H@Z(this, index);
}

/*
==============
BgAntiLag::AntiLagSceneHandlePoseRewind
==============
*/

void __fastcall BgAntiLag::AntiLagSceneHandlePoseRewind(BgAntiLag *this, BgAntiLagFrameHistory *startFrame, BgAntiLagFrameHistory *endFrame, float progress, bool doRewind)
{
  ?AntiLagSceneHandlePoseRewind@BgAntiLag@@MEAAXPEAUBgAntiLagFrameHistory@@0M_N@Z(this, startFrame, endFrame, progress, doRewind);
}

/*
==============
BgAntiLag::ConnectDataCommon<GAntiLagFrameHistorySP,BgAntiLagRewindScene>
==============
*/

void __fastcall BgAntiLag::ConnectDataCommon<GAntiLagFrameHistorySP,BgAntiLagRewindScene>(BgAntiLag *this, GAntiLagFrameHistorySP *history, unsigned int historyCount, BgAntiLagRewindScene *rewind)
{
  ??$ConnectDataCommon@UGAntiLagFrameHistorySP@@UBgAntiLagRewindScene@@@BgAntiLag@@IEAAXPEAUGAntiLagFrameHistorySP@@IPEAUBgAntiLagRewindScene@@@Z(this, history, historyCount, rewind);
}

/*
==============
BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistoryMP,BgAntiLagRewindScene>
==============
*/

void __fastcall BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistoryMP,BgAntiLagRewindScene>(BgAntiLag *this, CgAntiLagFrameHistoryMP *history, unsigned int historyCount, BgAntiLagRewindScene *rewind)
{
  ??$ConnectDataCommon@UCgAntiLagFrameHistoryMP@@UBgAntiLagRewindScene@@@BgAntiLag@@IEAAXPEAUCgAntiLagFrameHistoryMP@@IPEAUBgAntiLagRewindScene@@@Z(this, history, historyCount, rewind);
}

/*
==============
BgAntiLagEntity_GetDoorOwner
==============
*/

bool __fastcall BgAntiLagEntity_GetDoorOwner(const BgAntiLagEntity *antilagEntity, const int stateIndex)
{
  return ?BgAntiLagEntity_GetDoorOwner@@YA_NPEBUBgAntiLagEntity@@H@Z(antilagEntity, stateIndex);
}

/*
==============
AntiLagVector<BgAntiLagBone,3>::operator[]
==============
*/

const BgAntiLagBone *__fastcall AntiLagVector<BgAntiLagBone,3>::operator[](AntiLagVector<BgAntiLagBone,3> *this, int index)
{
  return ??A?$AntiLagVector@UBgAntiLagBone@@$02@@QEBAAEBUBgAntiLagBone@@H@Z(this, index);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistory *,600>::operator[]
==============
*/

BgAntiLagEntityHistory *const *__fastcall AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](AntiLagVector<BgAntiLagEntityHistory *,600> *this, int index)
{
  return ??A?$AntiLagVector@PEAUBgAntiLagEntityHistory@@$0CFI@@@QEBAAEBQEAUBgAntiLagEntityHistory@@H@Z(this, index);
}

/*
==============
BgAntiLagEntity_GetOrigin
==============
*/

void __fastcall BgAntiLagEntity_GetOrigin(const BgAntiLagEntity *antiLagentity, vec3_t *outOrigin)
{
  ?BgAntiLagEntity_GetOrigin@@YAXPEBUBgAntiLagEntity@@AEATvec3_t@@@Z(antiLagentity, outOrigin);
}

/*
==============
BgAntiLag::AntiLagRestoreSceneHandlePoseRewind
==============
*/

void __fastcall BgAntiLag::AntiLagRestoreSceneHandlePoseRewind(BgAntiLag *this)
{
  ?AntiLagRestoreSceneHandlePoseRewind@BgAntiLag@@MEAAXXZ(this);
}

/*
==============
AntiLagVector<BgAntiLagBone,3>::push_back
==============
*/

BgAntiLagBone *__fastcall AntiLagVector<BgAntiLagBone,3>::push_back(AntiLagVector<BgAntiLagBone,3> *this)
{
  return ?push_back@?$AntiLagVector@UBgAntiLagBone@@$02@@QEAAAEAUBgAntiLagBone@@XZ(this);
}

/*
==============
BgAntiLag::ConnectDataCommon<GAntiLagFrameHistoryMP,BgAntiLagRewindSceneMP>
==============
*/

void __fastcall BgAntiLag::ConnectDataCommon<GAntiLagFrameHistoryMP,BgAntiLagRewindSceneMP>(BgAntiLag *this, GAntiLagFrameHistoryMP *history, unsigned int historyCount, BgAntiLagRewindSceneMP *rewind)
{
  ??$ConnectDataCommon@UGAntiLagFrameHistoryMP@@UBgAntiLagRewindSceneMP@@@BgAntiLag@@IEAAXPEAUGAntiLagFrameHistoryMP@@IPEAUBgAntiLagRewindSceneMP@@@Z(this, history, historyCount, rewind);
}

/*
==============
BgAntiLagEntity_SetDoorOwner
==============
*/

void __fastcall BgAntiLagEntity_SetDoorOwner(BgAntiLagEntity *antilagEntity, const int stateIndex)
{
  ?BgAntiLagEntity_SetDoorOwner@@YAXPEAUBgAntiLagEntity@@H@Z(antilagEntity, stateIndex);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistory *,600>::operator[]
==============
*/

BgAntiLagEntityHistory **__fastcall AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](AntiLagVector<BgAntiLagEntityHistory *,600> *this, int index)
{
  return ??A?$AntiLagVector@PEAUBgAntiLagEntityHistory@@$0CFI@@@QEAAAEAPEAUBgAntiLagEntityHistory@@H@Z(this, index);
}

/*
==============
AntiLagVector<BgAntiLagRewindEntity,2048>::push_back
==============
*/

BgAntiLagRewindEntity *__fastcall AntiLagVector<BgAntiLagRewindEntity,2048>::push_back(AntiLagVector<BgAntiLagRewindEntity,2048> *this)
{
  return ?push_back@?$AntiLagVector@UBgAntiLagRewindEntity@@$0IAA@@@QEAAAEAUBgAntiLagRewindEntity@@XZ(this);
}

/*
==============
BgAntiLagEntity_SetOrigin
==============
*/

void __fastcall BgAntiLagEntity_SetOrigin(BgAntiLagEntity *antiLagentity, const vec3_t *origin)
{
  ?BgAntiLagEntity_SetOrigin@@YAXPEAUBgAntiLagEntity@@AEBTvec3_t@@@Z(antiLagentity, origin);
}

/*
==============
AntiLagVector<BgAntiLagBone,3>::push_back
==============
*/

BgAntiLagBone *__fastcall AntiLagVector<BgAntiLagBone,3>::push_back(AntiLagVector<BgAntiLagBone,3> *this, const BgAntiLagBone *item)
{
  return ?push_back@?$AntiLagVector@UBgAntiLagBone@@$02@@QEAAAEAUBgAntiLagBone@@AEBU2@@Z(this, item);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[]
==============
*/

const BgAntiLagEntityHistoryExtended *__fastcall AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](AntiLagVector<BgAntiLagEntityHistoryExtended,200> *this, int index)
{
  return ??A?$AntiLagVector@UBgAntiLagEntityHistoryExtended@@$0MI@@@QEBAAEBUBgAntiLagEntityHistoryExtended@@H@Z(this, index);
}

/*
==============
BgAntiLag::~BgAntiLag
==============
*/
void BgAntiLag::~BgAntiLag(BgAntiLag *this)
{
  this->__vftable = (BgAntiLag_vtbl *)&BgAntiLag::`vftable';
}

/*
==============
AntiLagVector<BgAntiLagEntityHistory *,600>::operator[]
==============
*/
BgAntiLagEntityHistory **AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](AntiLagVector<BgAntiLagEntityHistory *,600> *this, int index)
{
  __int64 v3; 
  volatile int m_usedSize; 

  v3 = index;
  if ( (unsigned int)index >= this->m_usedSize )
  {
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", index, m_usedSize) )
      __debugbreak();
  }
  return (BgAntiLagEntityHistory **)((char *)this + 8 * v3);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistory *,600>::operator[]
==============
*/
BgAntiLagEntityHistory *const *AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](AntiLagVector<BgAntiLagEntityHistory *,600> *this, int index)
{
  __int64 v3; 
  volatile int m_usedSize; 

  v3 = index;
  if ( (unsigned int)index >= this->m_usedSize )
  {
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", index, m_usedSize) )
      __debugbreak();
  }
  return (BgAntiLagEntityHistory *const *)((char *)this + 8 * v3);
}

/*
==============
AntiLagVector<BgAntiLagBone,3>::operator[]
==============
*/
const BgAntiLagBone *AntiLagVector<BgAntiLagBone,3>::operator[](AntiLagVector<BgAntiLagBone,3> *this, int index)
{
  __int64 v3; 
  volatile int m_usedSize; 

  v3 = index;
  if ( (unsigned int)index >= this->m_usedSize )
  {
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", index, m_usedSize) )
      __debugbreak();
  }
  return (const BgAntiLagBone *)((char *)this + 20 * v3);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[]
==============
*/
BgAntiLagEntityHistoryExtended *AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](AntiLagVector<BgAntiLagEntityHistoryExtended,200> *this, int index)
{
  __int64 v3; 
  volatile int m_usedSize; 

  v3 = index;
  if ( (unsigned int)index >= this->m_usedSize )
  {
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", index, m_usedSize) )
      __debugbreak();
  }
  return (BgAntiLagEntityHistoryExtended *)((char *)this + 68 * v3);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[]
==============
*/
const BgAntiLagEntityHistoryExtended *AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](AntiLagVector<BgAntiLagEntityHistoryExtended,200> *this, int index)
{
  __int64 v3; 
  volatile int m_usedSize; 

  v3 = index;
  if ( (unsigned int)index >= this->m_usedSize )
  {
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", index, m_usedSize) )
      __debugbreak();
  }
  return (const BgAntiLagEntityHistoryExtended *)((char *)this + 68 * v3);
}

/*
==============
BgAntiLag::AntiLagRestoreSceneHandlePoseRewind
==============
*/
void BgAntiLag::AntiLagRestoreSceneHandlePoseRewind(BgAntiLag *this)
{
  ;
}

/*
==============
BgAntiLag::AntiLagSceneHandlePoseRewind
==============
*/
void BgAntiLag::AntiLagSceneHandlePoseRewind(BgAntiLag *this, BgAntiLagFrameHistory *startFrame, BgAntiLagFrameHistory *endFrame, float progress)
{
  ;
}

/*
==============
BgAntiLagEntity_GetDoorOwner
==============
*/
bool BgAntiLagEntity_GetDoorOwner(const BgAntiLagEntity *antilagEntity, const int stateIndex)
{
  unsigned __int8 flags; 

  if ( !antilagEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
    __debugbreak();
  if ( stateIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 710, ASSERT_TYPE_ASSERT, "(stateIndex < 2)", (const char *)&queryFormat, "stateIndex < NUM_DOOR_STATES") )
    __debugbreak();
  flags = antilagEntity->flags;
  if ( stateIndex )
    return (flags & 0x40) != 0;
  else
    return (flags & 0x20) != 0;
}

/*
==============
BgAntiLagEntity_GetOrigin
==============
*/
void BgAntiLagEntity_GetOrigin(const BgAntiLagEntity *antiLagentity, vec3_t *outOrigin)
{
  float v4; 
  float v5; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 

  v9 = (int)antiLagentity;
  _RBX = outOrigin;
  if ( !antiLagentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 810, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
    __debugbreak();
  v4 = antiLagentity->origin.origin.v[1];
  v5 = antiLagentity->origin.origin.v[2];
  LOWORD(v13) = *(_WORD *)((char *)&v9 + 1);
  BYTE2(v13) = HIBYTE(v9);
  HIBYTE(v13) = (_BYTE)antiLagentity;
  LODWORD(_RBX->v[1]) = LODWORD(v5) ^ v13 ^ s_antilag_aab_Y ^ LODWORD(antiLagentity->origin.origin.v[0]);
  LODWORD(_RBX->v[2]) = LODWORD(v4) ^ LODWORD(v5) ^ v13 ^ s_antilag_aab_Z;
  LODWORD(_RBX->v[0]) = LODWORD(v4) ^ v13 ^ ~s_antilag_aab_X;
  __asm { vmovss  xmm0, dword ptr [rbx] }
  memset(&v14, 0, sizeof(v14));
  __asm { vmovss  dword ptr [rsp+48h+arg_0], xmm0 }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+48h+arg_0], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+48h+arg_0], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

/*
==============
BgAntiLagEntity_SetDoorOwner
==============
*/
void BgAntiLagEntity_SetDoorOwner(BgAntiLagEntity *antilagEntity, const int stateIndex)
{
  char v4; 

  if ( !antilagEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 723, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
    __debugbreak();
  if ( stateIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 724, ASSERT_TYPE_ASSERT, "(stateIndex < 2)", (const char *)&queryFormat, "stateIndex < NUM_DOOR_STATES") )
    __debugbreak();
  v4 = 32;
  if ( stateIndex )
    v4 = 64;
  antilagEntity->flags |= v4;
}

/*
==============
BgAntiLagEntity_SetOrigin
==============
*/
void BgAntiLagEntity_SetOrigin(BgAntiLagEntity *antiLagentity, const vec3_t *origin)
{
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  int v12; 
  BgAntiLagEntity *v13; 
  int v14; 

  v13 = antiLagentity;
  _RBX = origin;
  if ( !antiLagentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 830, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 753, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v7 = LODWORD(_RBX->v[0]) ^ ~s_antilag_aab_X;
  v8 = s_antilag_aab_Z ^ LODWORD(_RBX->v[2]);
  LOWORD(v14) = *(_WORD *)((char *)&v13 + 1);
  BYTE2(v14) = BYTE3(v13);
  v9 = s_antilag_aab_Y ^ LODWORD(_RBX->v[1]);
  HIBYTE(v14) = (_BYTE)antiLagentity;
  v10 = v14;
  v11 = v14 ^ v7;
  LODWORD(antiLagentity->origin.origin.v[1]) = v11;
  v12 = v10 ^ v11 ^ v8;
  LODWORD(antiLagentity->origin.origin.v[2]) = v12;
  LODWORD(antiLagentity->origin.origin.v[0]) = v10 ^ v12 ^ v9;
  memset(&v13, 0, sizeof(v13));
}

/*
==============
BgAntiLag::GetEntityDataFromIndex
==============
*/
const BgAntiLagEntityHistory *BgAntiLag::GetEntityDataFromIndex(BgAntiLag *this, const BgAntiLagFrameHistory *frame, int entIndex)
{
  __int64 v3; 
  int v5; 
  __int64 v7; 

  v3 = entIndex;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 621, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 622, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  v5 = frame->entityData[v3];
  if ( v5 == -1 || (*AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](&frame->entityDataStandard, v5))->entType == -1 )
    return 0i64;
  else
    return *AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](&frame->entityDataStandard, v5);
}

/*
==============
BgAntiLag::OnBroadphaseCollection
==============
*/
void BgAntiLag::OnBroadphaseCollection(BgAntiLag *this, int entIndex, playerState_s *playerPs)
{
  ;
}

/*
==============
AntiLagVector<BgAntiLagBone,3>::push_back
==============
*/
BgAntiLagBone *AntiLagVector<BgAntiLagBone,3>::push_back(AntiLagVector<BgAntiLagBone,3> *this, const BgAntiLagBone *item)
{
  int v2; 
  unsigned int m_maxSize; 
  int v6; 
  int v7; 
  unsigned int v8; 
  BgAntiLagBone *result; 
  __int64 v11; 
  volatile int m_usedSize; 
  __int64 v13; 
  int v14; 

  v2 = 3;
  m_maxSize = 3;
  _RSI = item;
  if ( this->m_maxSize )
    m_maxSize = this->m_maxSize;
  if ( this->m_usedSize >= m_maxSize )
  {
    v6 = this->m_maxSize;
    v7 = 3;
    if ( v6 )
      v7 = v6;
    v14 = v7;
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 700, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", m_usedSize, v14) )
      __debugbreak();
  }
  v8 = 3;
  if ( this->m_maxSize )
    v8 = this->m_maxSize;
  if ( this->m_usedSize >= v8 )
  {
    if ( this->m_maxSize )
      v2 = this->m_maxSize;
    LODWORD(v13) = v2;
    LODWORD(v11) = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  ++this->m_usedSize;
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  result = &this->m_data[this->m_usedSize - 1];
  __asm { vmovups xmmword ptr [rax], xmm0 }
  *(_DWORD *)&result->dataValid = *(_DWORD *)&_RSI->dataValid;
  return result;
}

/*
==============
AntiLagVector<BgAntiLagBone,3>::push_back
==============
*/
BgAntiLagBone *AntiLagVector<BgAntiLagBone,3>::push_back(AntiLagVector<BgAntiLagBone,3> *this)
{
  int m_maxSize; 
  int v3; 
  volatile unsigned int v4; 
  volatile int m_usedSize; 
  int v7; 

  m_maxSize = this->m_maxSize;
  v3 = 3;
  v4 = 3;
  if ( m_maxSize )
    v4 = m_maxSize;
  if ( this->m_usedSize >= v4 )
  {
    if ( this->m_maxSize )
      v3 = this->m_maxSize;
    v7 = v3;
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", m_usedSize, v7) )
      __debugbreak();
  }
  return (BgAntiLagBone *)((char *)this + 20 * this->m_usedSize++);
}

/*
==============
AntiLagVector<BgAntiLagEntityHistoryExtended,200>::push_back
==============
*/
BgAntiLagEntityHistoryExtended *AntiLagVector<BgAntiLagEntityHistoryExtended,200>::push_back(AntiLagVector<BgAntiLagEntityHistoryExtended,200> *this)
{
  int m_maxSize; 
  int v3; 
  volatile unsigned int v4; 
  volatile int m_usedSize; 
  int v7; 

  m_maxSize = this->m_maxSize;
  v3 = 200;
  v4 = 200;
  if ( m_maxSize )
    v4 = m_maxSize;
  if ( this->m_usedSize >= v4 )
  {
    if ( this->m_maxSize )
      v3 = this->m_maxSize;
    v7 = v3;
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", m_usedSize, v7) )
      __debugbreak();
  }
  return (BgAntiLagEntityHistoryExtended *)((char *)this + 68 * this->m_usedSize++);
}

/*
==============
AntiLagVector<BgAntiLagRewindEntity,2048>::push_back
==============
*/
BgAntiLagRewindEntity *AntiLagVector<BgAntiLagRewindEntity,2048>::push_back(AntiLagVector<BgAntiLagRewindEntity,2048> *this)
{
  int m_maxSize; 
  int v3; 
  volatile unsigned int v4; 
  volatile int m_usedSize; 
  int v7; 

  m_maxSize = this->m_maxSize;
  v3 = 2048;
  v4 = 2048;
  if ( m_maxSize )
    v4 = m_maxSize;
  if ( this->m_usedSize >= v4 )
  {
    if ( this->m_maxSize )
      v3 = this->m_maxSize;
    v7 = v3;
    m_usedSize = this->m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", m_usedSize, v7) )
      __debugbreak();
  }
  return (BgAntiLagRewindEntity *)((char *)this + 52 * this->m_usedSize++);
}

/*
==============
BgAntiLag::ConnectDataCommon<GAntiLagFrameHistoryMP,BgAntiLagRewindSceneMP>
==============
*/
void BgAntiLag::ConnectDataCommon<GAntiLagFrameHistoryMP,BgAntiLagRewindSceneMP>(BgAntiLag *this, GAntiLagFrameHistoryMP *history, unsigned int historyCount, BgAntiLagRewindSceneMP *rewind)
{
  __int64 v8; 
  GAntiLagFrameHistoryMP *v9; 
  unsigned int v10; 
  __int64 v11; 
  BgAntiLagFrameHistory *v12; 

  if ( historyCount > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 574, ASSERT_TYPE_ASSERT, "(historyCount <= 200)", (const char *)&queryFormat, "historyCount <= MAX_TOTAL_ANTILAG_HISTORY_FRAMES") )
    __debugbreak();
  v8 = 0i64;
  this->m_antiLagHistorySize = historyCount;
  *(_QWORD *)&this->m_sceneAntiLagRefCount = 0i64;
  for ( this->m_sceneAntiLagTime = 0; (unsigned int)v8 < this->m_antiLagHistorySize; v12->entityDataStandard.m_maxSize = 100 )
  {
    v9 = &history[(unsigned int)v8];
    memset_0(v9, 0, sizeof(GAntiLagFrameHistoryMP));
    v10 = 2;
    this->m_antiLagHistory[v8] = v9;
    do
    {
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 2] = (BgAntiLagEntityHistory *)&v9->clientDataValid[60 * v10 + 88];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 1] = (BgAntiLagEntityHistory *)&v9->clientDataValid[60 * v10 + 148];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10] = &v9->m_entDataList[v10];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 1] = &v9->m_entDataList[v10 + 1];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 2] = &v9->m_entDataList[v10 + 2];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 3] = &v9->m_entDataList[v10 + 3];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 4] = &v9->m_entDataList[v10 + 4];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 5] = &v9->m_entDataList[v10 + 5];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 6] = &v9->m_entDataList[v10 + 6];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 7] = &v9->m_entDataList[v10 + 7];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 8] = &v9->m_entDataList[v10 + 8];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 9] = &v9->m_entDataList[v10 + 9];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 10] = &v9->m_entDataList[v10 + 10];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 11] = &v9->m_entDataList[v10 + 11];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 12] = &v9->m_entDataList[v10 + 12];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 13] = &v9->m_entDataList[v10 + 13];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 14] = &v9->m_entDataList[v10 + 14];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 15] = &v9->m_entDataList[v10 + 15];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 16] = &v9->m_entDataList[v10 + 16];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 17] = &v9->m_entDataList[v10 + 17];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 18] = &v9->m_entDataList[v10 + 18];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 19] = &v9->m_entDataList[v10 + 19];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 20] = &v9->m_entDataList[v10 + 20];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 21] = &v9->m_entDataList[v10 + 21];
      v11 = v10 + 22;
      v10 += 25;
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v11] = &v9->m_entDataList[v11];
    }
    while ( v10 - 2 < 0x64 );
    v12 = this->m_antiLagHistory[v8];
    v8 = (unsigned int)(v8 + 1);
  }
  this->m_rewindScene = rewind;
}

/*
==============
BgAntiLag::GetSceneAntilagTime
==============
*/
__int64 BgAntiLag::GetSceneAntilagTime(BgAntiLag *this)
{
  if ( this->m_sceneAntiLagRefCount > 0 )
    return (unsigned int)this->m_sceneAntiLagTime;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 657, ASSERT_TYPE_ASSERT, "(IsSceneAntilagged())", "%s\n\tThis function is intended to be used while the scene is antilagged", "IsSceneAntilagged()") )
    __debugbreak();
  return (unsigned int)this->m_sceneAntiLagTime;
}

/*
==============
BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistoryMP,BgAntiLagRewindScene>
==============
*/
void BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistoryMP,BgAntiLagRewindScene>(BgAntiLag *this, CgAntiLagFrameHistoryMP *history, unsigned int historyCount, BgAntiLagRewindScene *rewind)
{
  __int64 v8; 
  CgAntiLagFrameHistoryMP *v9; 
  unsigned int v10; 
  __int64 v11; 
  BgAntiLagFrameHistory *v12; 

  if ( historyCount > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 574, ASSERT_TYPE_ASSERT, "(historyCount <= 200)", (const char *)&queryFormat, "historyCount <= MAX_TOTAL_ANTILAG_HISTORY_FRAMES") )
    __debugbreak();
  v8 = 0i64;
  this->m_antiLagHistorySize = historyCount;
  *(_QWORD *)&this->m_sceneAntiLagRefCount = 0i64;
  for ( this->m_sceneAntiLagTime = 0; (unsigned int)v8 < this->m_antiLagHistorySize; v12->entityDataStandard.m_maxSize = 100 )
  {
    v9 = &history[(unsigned int)v8];
    memset_0(v9, 0, sizeof(CgAntiLagFrameHistoryMP));
    v10 = 2;
    this->m_antiLagHistory[v8] = v9;
    do
    {
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 2] = (BgAntiLagEntityHistory *)&v9->clientDataValid[60 * v10 + 88];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 1] = (BgAntiLagEntityHistory *)&v9->clientDataValid[60 * v10 + 148];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10] = &v9->m_entDataList[v10];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 1] = &v9->m_entDataList[v10 + 1];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 2] = &v9->m_entDataList[v10 + 2];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 3] = &v9->m_entDataList[v10 + 3];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 4] = &v9->m_entDataList[v10 + 4];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 5] = &v9->m_entDataList[v10 + 5];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 6] = &v9->m_entDataList[v10 + 6];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 7] = &v9->m_entDataList[v10 + 7];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 8] = &v9->m_entDataList[v10 + 8];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 9] = &v9->m_entDataList[v10 + 9];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 10] = &v9->m_entDataList[v10 + 10];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 11] = &v9->m_entDataList[v10 + 11];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 12] = &v9->m_entDataList[v10 + 12];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 13] = &v9->m_entDataList[v10 + 13];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 14] = &v9->m_entDataList[v10 + 14];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 15] = &v9->m_entDataList[v10 + 15];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 16] = &v9->m_entDataList[v10 + 16];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 17] = &v9->m_entDataList[v10 + 17];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 18] = &v9->m_entDataList[v10 + 18];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 19] = &v9->m_entDataList[v10 + 19];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 20] = &v9->m_entDataList[v10 + 20];
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 + 21] = &v9->m_entDataList[v10 + 21];
      v11 = v10 + 22;
      v10 += 25;
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v11] = &v9->m_entDataList[v11];
    }
    while ( v10 - 2 < 0x64 );
    v12 = this->m_antiLagHistory[v8];
    v8 = (unsigned int)(v8 + 1);
  }
  this->m_rewindScene = rewind;
}

/*
==============
BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistorySP,BgAntiLagRewindScene>
==============
*/
void BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistorySP,BgAntiLagRewindScene>(BgAntiLag *this, CgAntiLagFrameHistorySP *history, unsigned int historyCount, BgAntiLagRewindScene *rewind)
{
  __int64 v8; 
  CgAntiLagFrameHistorySP *v9; 
  __int64 v10; 
  BgAntiLagEntityHistory *m_entDataList; 
  __int64 v12; 
  BgAntiLagEntityHistory *v13; 
  BgAntiLagFrameHistory *v14; 

  if ( historyCount > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 574, ASSERT_TYPE_ASSERT, "(historyCount <= 200)", (const char *)&queryFormat, "historyCount <= MAX_TOTAL_ANTILAG_HISTORY_FRAMES") )
    __debugbreak();
  v8 = 0i64;
  *(_QWORD *)&this->m_sceneAntiLagRefCount = 0i64;
  this->m_sceneAntiLagTime = 0;
  for ( this->m_antiLagHistorySize = historyCount; (unsigned int)v8 < this->m_antiLagHistorySize; v14->entityDataStandard.m_maxSize = 600 )
  {
    v9 = &history[(unsigned int)v8];
    memset_0(v9, 0, sizeof(CgAntiLagFrameHistorySP));
    v10 = 0i64;
    this->m_antiLagHistory[v8] = v9;
    m_entDataList = v9->m_entDataList;
    v12 = 300i64;
    do
    {
      v13 = m_entDataList + 1;
      v10 += 2i64;
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 2] = m_entDataList;
      m_entDataList += 2;
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 1] = v13;
      --v12;
    }
    while ( v12 );
    v14 = this->m_antiLagHistory[v8];
    v8 = (unsigned int)(v8 + 1);
  }
  this->m_rewindScene = rewind;
}

/*
==============
BgAntiLag::ConnectDataCommon<GAntiLagFrameHistorySP,BgAntiLagRewindScene>
==============
*/
void BgAntiLag::ConnectDataCommon<GAntiLagFrameHistorySP,BgAntiLagRewindScene>(BgAntiLag *this, GAntiLagFrameHistorySP *history, unsigned int historyCount, BgAntiLagRewindScene *rewind)
{
  __int64 v8; 
  GAntiLagFrameHistorySP *v9; 
  __int64 v10; 
  BgAntiLagEntityHistory *m_entDataList; 
  __int64 v12; 
  BgAntiLagEntityHistory *v13; 
  BgAntiLagFrameHistory *v14; 

  if ( historyCount > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 574, ASSERT_TYPE_ASSERT, "(historyCount <= 200)", (const char *)&queryFormat, "historyCount <= MAX_TOTAL_ANTILAG_HISTORY_FRAMES") )
    __debugbreak();
  v8 = 0i64;
  *(_QWORD *)&this->m_sceneAntiLagRefCount = 0i64;
  this->m_sceneAntiLagTime = 0;
  for ( this->m_antiLagHistorySize = historyCount; (unsigned int)v8 < this->m_antiLagHistorySize; v14->entityDataStandard.m_maxSize = 600 )
  {
    v9 = &history[(unsigned int)v8];
    memset_0(v9, 0, sizeof(GAntiLagFrameHistorySP));
    v10 = 0i64;
    this->m_antiLagHistory[v8] = v9;
    m_entDataList = v9->m_entDataList;
    v12 = 300i64;
    do
    {
      v13 = m_entDataList + 1;
      v10 += 2i64;
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 2] = m_entDataList;
      m_entDataList += 2;
      this->m_antiLagHistory[v8]->entityDataStandard.m_data[v10 - 1] = v13;
      --v12;
    }
    while ( v12 );
    v14 = this->m_antiLagHistory[v8];
    v8 = (unsigned int)(v8 + 1);
  }
  this->m_rewindScene = rewind;
}

