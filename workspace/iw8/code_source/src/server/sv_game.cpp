/*
==============
SV_Game_DObjSetRotTransIndex
==============
*/

int __fastcall SV_Game_DObjSetRotTransIndex(const gentity_s *ent, DObjPartBits *partBits, int boneIndex)
{
  return ?SV_Game_DObjSetRotTransIndex@@YAHPEBUgentity_s@@PEAUDObjPartBits@@H@Z(ent, partBits, boneIndex);
}

/*
==============
SV_Game_DObjExists
==============
*/

int __fastcall SV_Game_DObjExists(const gentity_s *ent)
{
  return ?SV_Game_DObjExists@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
SV_Game_GetDemo_PlayerSetting
==============
*/

const char *__fastcall SV_Game_GetDemo_PlayerSetting(const char *settingName)
{
  return ?SV_Game_GetDemo_PlayerSetting@@YAPEBDPEBD@Z(settingName);
}

/*
==============
SV_Game_LocateGameData
==============
*/

void __fastcall SV_Game_LocateGameData(gentity_s *gEnts, int numGEntities, playerState_s *clients, int sizeofGameClient)
{
  ?SV_Game_LocateGameData@@YAXPEAUgentity_s@@HPEAUplayerState_s@@H@Z(gEnts, numGEntities, clients, sizeofGameClient);
}

/*
==============
SV_Game_BroadcastServerCommand
==============
*/

void __fastcall SV_Game_BroadcastServerCommand(svscmd_type type, const char *cmd)
{
  ?SV_Game_BroadcastServerCommand@@YAXW4svscmd_type@@PEBD@Z(type, cmd);
}

/*
==============
SV_Game_IsPrivateMatch
==============
*/

bool __fastcall SV_Game_IsPrivateMatch()
{
  return ?SV_Game_IsPrivateMatch@@YA_NXZ();
}

/*
==============
SV_Game_RecordDemo_PlayerSetting
==============
*/

void __fastcall SV_Game_RecordDemo_PlayerSetting(const char *settingName, const char *value)
{
  ?SV_Game_RecordDemo_PlayerSetting@@YAXPEBD0@Z(settingName, value);
}

/*
==============
SV_Game_DObjUpdateServerTime
==============
*/

int __fastcall SV_Game_DObjUpdateServerTime(gentity_s *ent, float dtime, int bNotify)
{
  return ?SV_Game_DObjUpdateServerTime@@YAHPEAUgentity_s@@MH@Z(ent, dtime, bNotify);
}

/*
==============
SV_Game_SetTriggerModel
==============
*/

bool __fastcall SV_Game_SetTriggerModel(gentity_s *ent)
{
  return ?SV_Game_SetTriggerModel@@YA_NPEAUgentity_s@@@Z(ent);
}

/*
==============
SV_Game_DObjDumpInfo
==============
*/

void __fastcall SV_Game_DObjDumpInfo(gentity_s *ent)
{
  ?SV_Game_DObjDumpInfo@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
SV_Game_DObjDisplayAnim
==============
*/

void __fastcall SV_Game_DObjDisplayAnim(gentity_s *ent, const char *header)
{
  ?SV_Game_DObjDisplayAnim@@YAXPEAUgentity_s@@PEBD@Z(ent, header);
}

/*
==============
SV_Game_CheckFontScaleRange
==============
*/

bool __fastcall SV_Game_CheckFontScaleRange(const float fontScale)
{
  return ?SV_Game_CheckFontScaleRange@@YA_NM@Z(fontScale);
}

/*
==============
SV_Game_GetDemo_PlayerProfileData
==============
*/

void __fastcall SV_Game_GetDemo_PlayerProfileData(const char *dataName, GamerProfileData *outProfileData)
{
  ?SV_Game_GetDemo_PlayerProfileData@@YAXPEBDPEAUGamerProfileData@@@Z(dataName, outProfileData);
}

/*
==============
SV_Game_SendServerCommandMsg
==============
*/

void __fastcall SV_Game_SendServerCommandMsg(SvClient *client, svscmd_type type, const msg_t *msg)
{
  ?SV_Game_SendServerCommandMsg@@YAXPEAVSvClient@@W4svscmd_type@@PEBUmsg_t@@@Z(client, type, msg);
}

/*
==============
SV_Game_GetDemo_VariantString
==============
*/

const char *__fastcall SV_Game_GetDemo_VariantString(const char *dvarName, const char *defaultValue)
{
  return ?SV_Game_GetDemo_VariantString@@YAPEBDPEBD0@Z(dvarName, defaultValue);
}

/*
==============
SV_Game_DObjGetBoneIndex
==============
*/

int __fastcall SV_Game_DObjGetBoneIndex(const gentity_s *ent, scr_string_t boneName)
{
  return ?SV_Game_DObjGetBoneIndex@@YAHPEBUgentity_s@@W4scr_string_t@@@Z(ent, boneName);
}

/*
==============
SV_Game_XModelDebugBoxes
==============
*/

void __fastcall SV_Game_XModelDebugBoxes(gentity_s *ent, const vec4_t *color, int duration)
{
  ?SV_Game_XModelDebugBoxes@@YAXPEAUgentity_s@@AEBTvec4_t@@H@Z(ent, color, duration);
}

/*
==============
SV_Game_ResetSkeletonCache
==============
*/

void SV_Game_ResetSkeletonCache(void)
{
  ?SV_Game_ResetSkeletonCache@@YAXXZ();
}

/*
==============
SV_Game_DObjInitServerTime
==============
*/

void __fastcall SV_Game_DObjInitServerTime(gentity_s *ent, float dtime)
{
  ?SV_Game_DObjInitServerTime@@YAXPEAUgentity_s@@M@Z(ent, dtime);
}

/*
==============
SV_Game_DObjCreateSkelForBone
==============
*/

int __fastcall SV_Game_DObjCreateSkelForBone(const DObj *obj, int boneIndex)
{
  return ?SV_Game_DObjCreateSkelForBone@@YAHPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
SV_Game_DObjGetMatrixArray
==============
*/

DObjAnimMat *__fastcall SV_Game_DObjGetMatrixArray(const gentity_s *ent)
{
  return ?SV_Game_DObjGetMatrixArray@@YAPEAUDObjAnimMat@@PEBUgentity_s@@@Z(ent);
}

/*
==============
SV_Game_RecordDemo_GetPlayerProfileData
==============
*/

void __fastcall SV_Game_RecordDemo_GetPlayerProfileData(const char *dataName, const GamerProfileData *data)
{
  ?SV_Game_RecordDemo_GetPlayerProfileData@@YAXPEBDPEBUGamerProfileData@@@Z(dataName, data);
}

/*
==============
SV_Game_GetMapName
==============
*/

const char *__fastcall SV_Game_GetMapName()
{
  return ?SV_Game_GetMapName@@YAPEBDXZ();
}

/*
==============
SV_Game_CheckPointInPlayableBounds
==============
*/

bool __fastcall SV_Game_CheckPointInPlayableBounds(const vec3_t *origin)
{
  return ?SV_Game_CheckPointInPlayableBounds@@YA_NAEBTvec3_t@@@Z(origin);
}

/*
==============
SV_Game_SetBrushModel
==============
*/

bool __fastcall SV_Game_SetBrushModel(gentity_s *ent)
{
  return ?SV_Game_SetBrushModel@@YA_NPEAUgentity_s@@@Z(ent);
}

/*
==============
SV_Game_DObjCreateSkelForBones
==============
*/

int __fastcall SV_Game_DObjCreateSkelForBones(const DObj *obj, DObjPartBits *partBits)
{
  return ?SV_Game_DObjCreateSkelForBones@@YAHPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
SV_Game_GetPlayerstateForClientNum
==============
*/

playerState_s *__fastcall SV_Game_GetPlayerstateForClientNum(int num)
{
  return ?SV_Game_GetPlayerstateForClientNum@@YAPEAUplayerState_s@@H@Z(num);
}

/*
==============
SV_Game_IsOnlineGame
==============
*/

bool __fastcall SV_Game_IsOnlineGame()
{
  return ?SV_Game_IsOnlineGame@@YA_NXZ();
}

/*
==============
SV_Game_KeepPointInPlayableBounds
==============
*/

void __fastcall SV_Game_KeepPointInPlayableBounds(vec3_t *origin)
{
  ?SV_Game_KeepPointInPlayableBounds@@YAXAEATvec3_t@@@Z(origin);
}

/*
==============
SV_Game_GetXCompositeModel
==============
*/

XCompositeModelDef *__fastcall SV_Game_GetXCompositeModel(const char *name)
{
  return ?SV_Game_GetXCompositeModel@@YAPEAUXCompositeModelDef@@PEBD@Z(name);
}

/*
==============
SV_Game_GetDebugClientTaskInfo
==============
*/

void __fastcall SV_Game_GetDebugClientTaskInfo(unsigned int *outBufferWatermarmark)
{
  ?SV_Game_GetDebugClientTaskInfo@@YAXAEAI@Z(outBufferWatermarmark);
}

/*
==============
SV_Game_GetUsercmdServerTime
==============
*/

int __fastcall SV_Game_GetUsercmdServerTime(int clientNum)
{
  return ?SV_Game_GetUsercmdServerTime@@YAHH@Z(clientNum);
}

/*
==============
SV_Game_EntityInSnapshot
==============
*/

int __fastcall SV_Game_EntityInSnapshot(int iEntityNum)
{
  return ?SV_Game_EntityInSnapshot@@YAHH@Z(iEntityNum);
}

/*
==============
SV_Game_GetWeaponMapHighWatermark
==============
*/

unsigned __int16 __fastcall SV_Game_GetWeaponMapHighWatermark()
{
  return ?SV_Game_GetWeaponMapHighWatermark@@YAGXZ();
}

/*
==============
SV_Game_IsSplitscreen
==============
*/

bool __fastcall SV_Game_IsSplitscreen()
{
  return ?SV_Game_IsSplitscreen@@YA_NXZ();
}

/*
==============
SV_Game_GetXModel
==============
*/

XModel *__fastcall SV_Game_GetXModel(const char *name)
{
  return ?SV_Game_GetXModel@@YAPEAUXModel@@PEBD@Z(name);
}

/*
==============
SV_Game_DObjGetBounds
==============
*/

void __fastcall SV_Game_DObjGetBounds(gentity_s *ent, Bounds *bounds)
{
  ?SV_Game_DObjGetBounds@@YAXPEAUgentity_s@@PEAUBounds@@@Z(ent, bounds);
}

/*
==============
SV_Game_GetUsercmd
==============
*/

void __fastcall SV_Game_GetUsercmd(int clientNum, usercmd_s *cmd)
{
  ?SV_Game_GetUsercmd@@YAXHPEAUusercmd_s@@@Z(clientNum, cmd);
}

/*
==============
SV_Game_BroadcastServerCommandMsg
==============
*/

void __fastcall SV_Game_BroadcastServerCommandMsg(svscmd_type type, const msg_t *msg)
{
  ?SV_Game_BroadcastServerCommandMsg@@YAXW4svscmd_type@@PEBUmsg_t@@@Z(type, msg);
}

/*
==============
SV_Game_IsLocalSplitscreenGame
==============
*/

bool __fastcall SV_Game_IsLocalSplitscreenGame()
{
  return ?SV_Game_IsLocalSplitscreenGame@@YA_NXZ();
}

/*
==============
SV_Game_IsSystemLink
==============
*/

bool __fastcall SV_Game_IsSystemLink()
{
  return ?SV_Game_IsSystemLink@@YA_NXZ();
}

/*
==============
SV_Game_GetClientCount
==============
*/

int __fastcall SV_Game_GetClientCount()
{
  return ?SV_Game_GetClientCount@@YAHXZ();
}

/*
==============
SV_Game_DObjGetRotTransArray
==============
*/

DObjAnimMat *__fastcall SV_Game_DObjGetRotTransArray(const gentity_s *ent)
{
  return ?SV_Game_DObjGetRotTransArray@@YAPEAUDObjAnimMat@@PEBUgentity_s@@@Z(ent);
}

/*
==============
SV_AllocSkelMemory
==============
*/
char *SV_AllocSkelMemory(unsigned int size)
{
  SvPersistentGlobals *PersistentGlobalsCommon; 
  SvGameGlobals *SvGameGlobalsCommon; 
  unsigned int v4; 
  __int64 v5; 
  signed __int32 v6; 
  char *v7; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 446, ASSERT_TYPE_ASSERT, "( size )", (const char *)&queryFormat, "size") )
    __debugbreak();
  PersistentGlobalsCommon = SvPersistentGlobals::GetPersistentGlobalsCommon();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  v4 = (size + 15) & 0xFFFFFFF0;
  if ( v4 + 16 > PersistentGlobalsCommon->m_skelMemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 452, ASSERT_TYPE_ASSERT, "( size + 16 <= svPers->m_skelMemSize )", (const char *)&queryFormat, "size + SKEL_MEM_ALIGNMENT <= svPers->m_skelMemSize") )
    __debugbreak();
  if ( !PersistentGlobalsCommon->m_skelMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 453, ASSERT_TYPE_ASSERT, "( svPers->m_skelMemory )", (const char *)&queryFormat, "svPers->m_skelMemory") )
    __debugbreak();
  v5 = ((__int64)PersistentGlobalsCommon->m_skelMemory >> 63) & 0xF;
  if ( (((_BYTE)v5 + (unsigned __int8)PersistentGlobalsCommon->m_skelMemory) & 0xF) != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 454, ASSERT_TYPE_ASSERT, "(reinterpret_cast<intptr_t>( svPers->m_skelMemory ) % 16 == 0)", "%s\n\tSkeleton memory not aligned correctly", "reinterpret_cast<intptr_t>( svPers->m_skelMemory ) % SKEL_MEM_ALIGNMENT == 0") )
    __debugbreak();
  if ( (((_BYTE)SvGameGlobalsCommon + 56) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &SvGameGlobalsCommon->skelMemPos) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(&SvGameGlobalsCommon->skelMemPos, v4);
  if ( v6 + v4 > PersistentGlobalsCommon->m_skelMemSize - 16 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E1638, 5698i64);
    return 0i64;
  }
  else
  {
    v7 = &PersistentGlobalsCommon->m_skelMemory[v6];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 461, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    return v7;
  }
}

/*
==============
SV_AllocXCompositeModelPrecache
==============
*/
void *SV_AllocXCompositeModelPrecache(unsigned __int64 size)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 380, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This function should only be called for FILE_LOAD_OBJ executions") )
    __debugbreak();
  return 0i64;
}

/*
==============
SV_AllocXCompositeModelPrecacheColl
==============
*/
void *SV_AllocXCompositeModelPrecacheColl(unsigned __int64 size)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 392, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This function should only be called for FILE_LOAD_OBJ executions") )
    __debugbreak();
  return 0i64;
}

/*
==============
SV_AllocXModelPrecache
==============
*/
void *SV_AllocXModelPrecache(unsigned __int64 size)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 350, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This function should only be called for FILE_LOAD_OBJ executions") )
    __debugbreak();
  return 0i64;
}

/*
==============
SV_AllocXModelPrecacheColl
==============
*/
void *SV_AllocXModelPrecacheColl(unsigned __int64 size)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 362, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This function should only be called for FILE_LOAD_OBJ executions") )
    __debugbreak();
  return 0i64;
}

/*
==============
SV_Game_BroadcastServerCommand
==============
*/
void SV_Game_BroadcastServerCommand(svscmd_type type, const char *cmd)
{
  __int64 i; 
  __int64 v5; 
  __int64 v6; 

  for ( i = 0i64; (int)i < (int)SvClient::ms_clientCount; i = (unsigned int)(i + 1) )
  {
    if ( SvClient::GetCommonClient(i)->state >= CS_CLIENTLOADING )
    {
      if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 99, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( (unsigned int)i >= SvClient::ms_clientCount )
      {
        LODWORD(v6) = SvClient::ms_clientCount;
        LODWORD(v5) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      SvClient::ms_clients[i]->SendServerCommand(SvClient::ms_clients[i], type, cmd);
    }
  }
}

/*
==============
SV_Game_BroadcastServerCommandMsg
==============
*/
void SV_Game_BroadcastServerCommandMsg(svscmd_type type, const msg_t *msg)
{
  __int64 i; 
  __int64 v4; 
  __int64 v5; 
  msg_t destMessage; 
  unsigned __int8 destBuf[1024]; 

  SV_Game_BuildServerCommandMsg(destBuf, 1024, &destMessage, msg);
  for ( i = 0i64; (int)i < (int)SvClient::ms_clientCount; i = (unsigned int)(i + 1) )
  {
    if ( SvClient::GetCommonClient(i)->state >= CS_CLIENTLOADING )
    {
      if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 99, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( (unsigned int)i >= SvClient::ms_clientCount )
      {
        LODWORD(v5) = SvClient::ms_clientCount;
        LODWORD(v4) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      SvClient::ms_clients[i]->SendServerCommandMsg(SvClient::ms_clients[i], type, &destMessage);
    }
  }
}

/*
==============
SV_Game_BuildServerCommandMsg
==============
*/
void SV_Game_BuildServerCommandMsg(unsigned __int8 *destBuf, int destBufSize, msg_t *destMessage, const msg_t *sourceMessage)
{
  if ( !sourceMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 74, ASSERT_TYPE_ASSERT, "( sourceMessage )", (const char *)&queryFormat, "sourceMessage") )
    __debugbreak();
  if ( sourceMessage->cursize > 0x3FCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 75, ASSERT_TYPE_ASSERT, "( sourceMessage->cursize <= (1024-(2 + sizeof( ushort ))) )", (const char *)&queryFormat, "sourceMessage->cursize <= MAX_BINARY_RELIABLE_COMMAND_LENGTH") )
    __debugbreak();
  if ( !destBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 76, ASSERT_TYPE_ASSERT, "( destBuf )", (const char *)&queryFormat, "destBuf") )
    __debugbreak();
  if ( !destMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 77, ASSERT_TYPE_ASSERT, "( destMessage )", (const char *)&queryFormat, "destMessage") )
    __debugbreak();
  MSG_Init(destMessage, destBuf, destBufSize);
  MSG_WriteByte(destMessage, 89i64);
  MSG_WriteByte(destMessage, 0i64);
  MSG_WriteShort(destMessage, sourceMessage->cursize);
  if ( destMessage->cursize != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 84, ASSERT_TYPE_ASSERT, "(destMessage->cursize == (2 + sizeof( ushort )))", "%s\n\tChange BINARY_RELIABLE_COMMAND_OVERHEAD if this assert hits.", "destMessage->cursize == BINARY_RELIABLE_COMMAND_OVERHEAD") )
    __debugbreak();
  MSG_WriteData(destMessage, sourceMessage->data, sourceMessage->cursize);
  if ( destMessage->overflowed )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 87, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( destMessage ) )", (const char *)&queryFormat, "!MSG_IsOverflowed( destMessage )") )
      __debugbreak();
  }
}

/*
==============
SV_Game_CheckFontScaleRange
==============
*/

__int64 __fastcall SV_Game_CheckFontScaleRange(double fontScale)
{
  SvPersistentGlobals *PersistentGlobalsCommon; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  PersistentGlobalsCommon = SvPersistentGlobals::GetPersistentGlobalsCommon();
  __asm
  {
    vmovaps xmm1, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return ((__int64 (__fastcall *)(SvPersistentGlobals *))PersistentGlobalsCommon->CheckFontScaleRange)(PersistentGlobalsCommon);
}

/*
==============
SV_Game_CheckPointInPlayableBounds
==============
*/
__int64 SV_Game_CheckPointInPlayableBounds(const vec3_t *origin)
{
  SvPersistentGlobals *PersistentGlobalsCommon; 

  PersistentGlobalsCommon = SvPersistentGlobals::GetPersistentGlobalsCommon();
  return ((__int64 (__fastcall *)(SvPersistentGlobals *, const vec3_t *))PersistentGlobalsCommon->CheckOriginIsInPlayableBounds)(PersistentGlobalsCommon, origin);
}

/*
==============
SV_Game_DObjCreateSkelForBone
==============
*/
int SV_Game_DObjCreateSkelForBone(const DObj *obj, int boneIndex)
{
  SvGameGlobals *SvGameGlobalsCommon; 
  unsigned int AllocSkelSize; 
  char *v7; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 476, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjNumBones(obj) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 477, ASSERT_TYPE_ASSERT, "(DObjNumBones( obj ) > 0)", (const char *)&queryFormat, "DObjNumBones( obj ) > 0") )
    __debugbreak();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( DObjSkelExists(obj, SvGameGlobalsCommon->skelTimeStamp) )
    return DObjSkelIsBoneUpToDate(obj, boneIndex);
  AllocSkelSize = DObjGetAllocSkelSize(obj);
  v7 = SV_AllocSkelMemory(AllocSkelSize);
  DObjCreateSkel(obj, v7, SvGameGlobalsCommon->skelTimeStamp);
  return 0;
}

/*
==============
SV_Game_DObjCreateSkelForBones
==============
*/
int SV_Game_DObjCreateSkelForBones(const DObj *obj, DObjPartBits *partBits)
{
  SvGameGlobals *SvGameGlobalsCommon; 
  unsigned int AllocSkelSize; 
  char *v7; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 500, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjNumBones(obj) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 501, ASSERT_TYPE_ASSERT, "(DObjNumBones( obj ) > 0)", (const char *)&queryFormat, "DObjNumBones( obj ) > 0") )
    __debugbreak();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( DObjSkelExists(obj, SvGameGlobalsCommon->skelTimeStamp) )
    return DObjSkelAreBonesUpToDate(obj, partBits);
  AllocSkelSize = DObjGetAllocSkelSize(obj);
  v7 = SV_AllocSkelMemory(AllocSkelSize);
  DObjCreateSkel(obj, v7, SvGameGlobalsCommon->skelTimeStamp);
  return 0;
}

/*
==============
SV_Game_DObjDisplayAnim
==============
*/
void SV_Game_DObjDisplayAnim(gentity_s *ent, const char *header)
{
  const DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
    DObjDisplayAnim(ServerDObjForEnt, header);
}

/*
==============
SV_Game_DObjDumpInfo
==============
*/
void SV_Game_DObjDumpInfo(gentity_s *ent)
{
  const dvar_t *v1; 
  const DObj *ServerDObjForEnt; 

  v1 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    if ( ServerDObjForEnt )
      DObjDumpInfo(ServerDObjForEnt);
    else
      Com_Printf(15, "no model.\n");
  }
}

/*
==============
SV_Game_DObjExists
==============
*/
_BOOL8 SV_Game_DObjExists(const gentity_s *ent)
{
  return Com_GetServerDObjForEnt(ent) != NULL;
}

/*
==============
SV_Game_DObjGetBoneIndex
==============
*/
__int64 SV_Game_DObjGetBoneIndex(const gentity_s *ent, scr_string_t boneName)
{
  const DObj *ServerDObjForEnt; 
  bool v4; 
  __int64 result; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    return 0xFFFFFFFFi64;
  inOutIndex = -2;
  v4 = DObjGetBoneIndexInternal_28(ServerDObjForEnt, boneName, &inOutIndex, &modelIndex) == 0;
  result = inOutIndex;
  if ( v4 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
SV_Game_DObjGetBounds
==============
*/
void SV_Game_DObjGetBounds(gentity_s *ent, Bounds *bounds)
{
  const DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 610, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  DObjGetBounds(ServerDObjForEnt, bounds);
}

/*
==============
SV_Game_DObjGetMatrixArray
==============
*/
DObjAnimMat *SV_Game_DObjGetMatrixArray(const gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 563, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return DObjGetRotTransArray(ServerDObjForEnt);
}

/*
==============
SV_Game_DObjGetRotTransArray
==============
*/
DObjAnimMat *SV_Game_DObjGetRotTransArray(const gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 588, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return DObjGetRotTransArray(ServerDObjForEnt);
}

/*
==============
SV_Game_DObjInitServerTime
==============
*/

void __fastcall SV_Game_DObjInitServerTime(gentity_s *ent, double dtime)
{
  DObj *ServerDObjForEnt; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
  {
    __asm { vmovaps xmm1, xmm6; dtime }
    DObjInitServerTime(ServerDObjForEnt, *(float *)&_XMM1);
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
SV_Game_DObjSetRotTransIndex
==============
*/
int SV_Game_DObjSetRotTransIndex(const gentity_s *ent, DObjPartBits *partBits, int boneIndex)
{
  const DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 599, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return DObjSetRotTransIndex(ServerDObjForEnt, partBits, boneIndex);
}

/*
==============
SV_Game_DObjUpdateServerTime
==============
*/

int __fastcall SV_Game_DObjUpdateServerTime(gentity_s *ent, double dtime, int bNotify)
{
  DObj *ServerDObjForEnt; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
  {
    __asm
    {
      vmovaps xmm1, xmm6; dtime
      vmovaps xmm6, [rsp+38h+var_18]
    }
    LODWORD(ServerDObjForEnt) = DObjUpdateServerInfo(ServerDObjForEnt, *(float *)&_XMM1, bNotify);
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  return (int)ServerDObjForEnt;
}

/*
==============
SV_Game_EntityInSnapshot
==============
*/
_BOOL8 SV_Game_EntityInSnapshot(int iEntityNum)
{
  gentity_s *v1; 

  v1 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[iEntityNum];
  return v1->r.isLinked && (v1->r.svFlags & 1) == 0;
}

/*
==============
SV_Game_GetClientCount
==============
*/
__int64 SV_Game_GetClientCount()
{
  return SvClient::ms_clientCount;
}

/*
==============
SV_Game_GetDebugClientTaskInfo
==============
*/

void __fastcall SV_Game_GetDebugClientTaskInfo(unsigned int *outBufferWatermarmark)
{
  GClientTaskQueue::GetHighWatermark(outBufferWatermarmark);
}

/*
==============
SV_Game_GetDemo_PlayerProfileData
==============
*/
void SV_Game_GetDemo_PlayerProfileData(const char *dataName, GamerProfileData *outProfileData)
{
  const char *String; 
  __int128 v7; 

  _RBX = outProfileData;
  if ( !dataName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 914, ASSERT_TYPE_ASSERT, "( dataName )", (const char *)&queryFormat, "dataName") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 915, ASSERT_TYPE_ASSERT, "( outProfileData )", (const char *)&queryFormat, "outProfileData") )
    __debugbreak();
  String = SV_Demo_GetString();
  if ( I_strcmp(String, dataName) )
    Com_PrintWarning(15, "WARNING: SV_Archived_GetPlayerProfileData() has demo data mismatch when trying to fetch setting '%s' (demo had %s).\n", dataName, String);
  if ( SV_IsDemoPlaying() )
  {
    LODWORD(v7) = SV_Demo_GetInt();
    switch ( (int)v7 )
    {
      case 0:
      case 7:
        break;
      case 1:
        BYTE8(v7) = SV_Demo_GetByte();
        break;
      case 2:
        BYTE8(v7) = SV_Demo_GetByte() != 0;
        break;
      case 3:
        WORD4(v7) = SV_Demo_GetInt();
        break;
      case 4:
      case 8:
        DWORD2(v7) = SV_Demo_GetInt();
        break;
      case 5:
        *(double *)&_XMM0 = SV_Demo_GetFloat();
        __asm { vmovss  dword ptr [rsp+48h+var_18+8], xmm0 }
        break;
      case 6:
        *((_QWORD *)&v7 + 1) = SV_Demo_GetString();
        break;
      default:
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E19F0, 721i64);
        break;
    }
    if ( !SV_IsDemoPlaying() )
      Com_PrintWarning(15, "WARNING: SV_Archived_GetPlayerProfileData() has demo data mismatch when trying to fetch the value of '%s'.\n", dataName);
  }
  else
  {
    LODWORD(v7) = 4;
    DWORD2(v7) = 0;
  }
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr [rbx], xmm0
  }
}

/*
==============
SV_Game_GetDemo_PlayerSetting
==============
*/
const char *SV_Game_GetDemo_PlayerSetting(const char *settingName)
{
  const char *String; 
  const char *v4; 

  String = SV_Demo_GetString();
  if ( I_strcmp(String, settingName) )
    Com_PrintWarning(15, "WARNING: SV_Archived_GetPlayerSetting() has demo data mismatch when trying to fetch setting '%s' (demo had %s).\n", settingName, String);
  if ( !SV_IsDemoPlaying() )
    return (char *)&queryFormat.fmt + 3;
  v4 = SV_Demo_GetString();
  if ( !SV_IsDemoPlaying() )
    Com_PrintWarning(15, "WARNING: SV_Archived_GetPlayerSetting() has demo data mismatch when trying to fetch the value of '%s'.\n", settingName);
  return v4;
}

/*
==============
SV_Game_GetDemo_VariantString
==============
*/
const char *SV_Game_GetDemo_VariantString(const char *dvarName, const char *defaultValue)
{
  const dvar_t *VarByName; 
  const char *VariantStringWithDefault; 
  const char *String; 

  VarByName = Dvar_FindVarByName(dvarName);
  if ( VarByName && SLOBYTE(VarByName->flags) < 0 )
    return Dvar_GetVariantStringWithDefault(dvarName, defaultValue);
  if ( SV_IsDemoPlaying() )
  {
    String = SV_Demo_GetString();
    if ( !SV_IsDemoPlaying() && !SV_Demo_IsRecording() )
      Com_PrintWarning(15, "WARNING: SV_Archived_Dvar_GetVariantString() has demo data mismatch when trying to fetch the value of '%s'.\n", dvarName);
    return String;
  }
  else
  {
    VariantStringWithDefault = Dvar_GetVariantStringWithDefault(dvarName, defaultValue);
    SV_Record_GetString(VariantStringWithDefault);
    return VariantStringWithDefault;
  }
}

/*
==============
SV_Game_GetMapName
==============
*/
char *SV_Game_GetMapName()
{
  char *m_mapname; 

  m_mapname = SvGameGlobals::GetSvGameGlobalsCommon()->m_mapname;
  if ( !*m_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 706, ASSERT_TYPE_ASSERT, "(sv->m_mapname[0])", "%s\n\tFetched the mapname before it was set", "sv->m_mapname[0]") )
    __debugbreak();
  return m_mapname;
}

/*
==============
SV_Game_GetPlayerstateForClientNum
==============
*/
playerState_s *SV_Game_GetPlayerstateForClientNum(int num)
{
  SvGameGlobals *SvGameGlobalsCommon; 

  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  return (playerState_s *)((char *)SvGameGlobalsCommon->gameClients + num * SvGameGlobalsCommon->gameClientSize);
}

/*
==============
SV_Game_GetUsercmd
==============
*/
void SV_Game_GetUsercmd(int clientNum, usercmd_s *cmd)
{
  __int64 v4; 

  _RBX = cmd;
  _RAX = &SvClient::GetCommonClient(clientNum)->lastUsercmd;
  v4 = 2i64;
  do
  {
    _RBX = (usercmd_s *)((char *)_RBX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rbx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rbx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rbx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rbx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rbx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rbx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rbx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rbx-10h], xmm1
    }
    --v4;
  }
  while ( v4 );
  _RBX->buttons = _RAX->buttons;
}

/*
==============
SV_Game_GetUsercmdServerTime
==============
*/
__int64 SV_Game_GetUsercmdServerTime(int clientNum)
{
  return (unsigned int)SvClient::GetCommonClient(clientNum)->lastUsercmd.serverTime;
}

/*
==============
SV_Game_GetWeaponMapHighWatermark
==============
*/
__int64 SV_Game_GetWeaponMapHighWatermark()
{
  GWeaponMap *Instance; 

  Instance = GWeaponMap::GetInstance();
  if ( Instance )
    return Instance->m_activeHighWatermark;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 763, ASSERT_TYPE_ASSERT, "( weapMap )", (const char *)&queryFormat, "weapMap") )
    __debugbreak();
  return MEMORY[0x1810];
}

/*
==============
SV_Game_GetXCompositeModel
==============
*/
XCompositeModelDef *SV_Game_GetXCompositeModel(const char *name)
{
  return XCompositeModelPrecache(name, SV_AllocXCompositeModelPrecache, SV_AllocXCompositeModelPrecacheColl);
}

/*
==============
SV_Game_GetXModel
==============
*/
XModel *SV_Game_GetXModel(const char *name)
{
  return XModelPrecache(name, SV_AllocXModelPrecache, SV_AllocXModelPrecacheColl);
}

/*
==============
SV_Game_IsLocalSplitscreenGame
==============
*/
bool SV_Game_IsLocalSplitscreenGame()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 750, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 714, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 0;
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 721, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v1 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return !v1->current.enabled && CL_GetLocalClientActiveCount() > 1;
}

/*
==============
SV_Game_IsOnlineGame
==============
*/
__int64 SV_Game_IsOnlineGame()
{
  const dvar_t *v0; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 714, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
SV_Game_IsPrivateMatch
==============
*/
__int64 SV_Game_IsPrivateMatch()
{
  const dvar_t *v0; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 739, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
SV_Game_IsSplitscreen
==============
*/
__int64 SV_Game_IsSplitscreen()
{
  const dvar_t *v0; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 728, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v0 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
SV_Game_IsSystemLink
==============
*/
__int64 SV_Game_IsSystemLink()
{
  const dvar_t *v0; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 721, ASSERT_TYPE_ASSERT, "( !Com_FrontEndScene_IsActive() )", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  v0 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
SV_Game_KeepPointInPlayableBounds
==============
*/
void SV_Game_KeepPointInPlayableBounds(vec3_t *origin)
{
  SvPersistentGlobals *PersistentGlobalsCommon; 

  PersistentGlobalsCommon = SvPersistentGlobals::GetPersistentGlobalsCommon();
  PersistentGlobalsCommon->KeepPointInPlayableBounds(PersistentGlobalsCommon, origin);
}

/*
==============
SV_Game_LocateGameData
==============
*/
void SV_Game_LocateGameData(gentity_s *gEnts, int numGEntities, playerState_s *clients, int sizeofGameClient)
{
  SvGameGlobals *SvGameGlobalsCommon; 

  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  SvGameGlobalsCommon->gentities = gEnts;
  SvGameGlobalsCommon->gameClients = clients;
  SvGameGlobalsCommon->gameClientSize = sizeofGameClient;
  SvGameGlobalsCommon->num_entities = numGEntities;
}

/*
==============
SV_Game_RecordDemo_GetPlayerProfileData
==============
*/
void SV_Game_RecordDemo_GetPlayerProfileData(const char *dataName, const GamerProfileData *data)
{
  _RBX = data;
  if ( !dataName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 977, ASSERT_TYPE_ASSERT, "( dataName )", (const char *)&queryFormat, "dataName") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 978, ASSERT_TYPE_ASSERT, "( data )", (const char *)&queryFormat, "data") )
    __debugbreak();
  SV_Record_GetString(dataName);
  SV_Record_GetInt(_RBX->type);
  switch ( _RBX->type )
  {
    case TYPE_INVALID:
    case TYPE_BUFFER:
      return;
    case TYPE_BYTE:
    case TYPE_BOOL:
      SV_Record_GetByte(_RBX->u.byteVal);
      break;
    case TYPE_SHORT:
      SV_Record_GetInt(_RBX->u.shortVal);
      break;
    case TYPE_INT:
    case TYPE_FLAG:
      SV_Record_GetInt(_RBX->u.intVal);
      break;
    case TYPE_FLOAT:
      __asm { vmovss  xmm0, dword ptr [rbx+8]; jumptable 0000000141682B04 case 5 }
      SV_Record_GetFloat(*(float *)&_XMM0);
      break;
    case TYPE_STRING:
      SV_Record_GetString(_RBX->u.stringVal);
      break;
    default:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E19F0, 722i64);
      break;
  }
}

/*
==============
SV_Game_RecordDemo_PlayerSetting
==============
*/
void SV_Game_RecordDemo_PlayerSetting(const char *settingName, const char *value)
{
  SV_Record_GetString(settingName);
  SV_Record_GetString(value);
}

/*
==============
SV_Game_ResetSkeletonCache
==============
*/
void SV_Game_ResetSkeletonCache(void)
{
  SvGameGlobals *SvGameGlobalsCommon; 
  SvPersistentGlobals *PersistentGlobalsCommon; 
  __int64 v3; 

  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( SvGameGlobalsCommon->skelTimeStamp++ == -1 )
    ++SvGameGlobalsCommon->skelTimeStamp;
  SvGameGlobalsCommon->skelMemPos = 0;
  PersistentGlobalsCommon = SvPersistentGlobals::GetPersistentGlobalsCommon();
  if ( !PersistentGlobalsCommon->m_skelMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 435, ASSERT_TYPE_ASSERT, "( svPers->m_skelMemory )", (const char *)&queryFormat, "svPers->m_skelMemory") )
    __debugbreak();
  v3 = ((__int64)PersistentGlobalsCommon->m_skelMemory >> 63) & 0xF;
  if ( (((_BYTE)v3 + (unsigned __int8)PersistentGlobalsCommon->m_skelMemory) & 0xF) != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 436, ASSERT_TYPE_ASSERT, "(reinterpret_cast<intptr_t>( svPers->m_skelMemory ) % 16 == 0)", "%s\n\tSkeleton memory not aligned correctly", "reinterpret_cast<intptr_t>( svPers->m_skelMemory ) % SKEL_MEM_ALIGNMENT == 0") )
    __debugbreak();
}

/*
==============
SV_Game_SendServerCommandMsg
==============
*/
void SV_Game_SendServerCommandMsg(SvClient *client, svscmd_type type, const msg_t *msg)
{
  msg_t destMessage; 
  unsigned __int8 destBuf[1024]; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 96, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  SV_Game_BuildServerCommandMsg(destBuf, 1024, &destMessage, msg);
  client->SendServerCommandMsg(client, type, &destMessage);
}

/*
==============
SV_Game_SetBrushModel
==============
*/
char SV_Game_SetBrushModel(gentity_s *ent)
{
  __int64 v2; 
  unsigned __int8 modelType; 
  char result; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  Bounds bounds; 

  _RBX = ent;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = _RBX - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    v9 = 2048;
    LODWORD(v7) = _RBX - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 199, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  modelType = _RBX->r.modelType;
  if ( modelType != 5 )
  {
    LODWORD(v8) = 5;
    LODWORD(v7) = modelType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 200, ASSERT_TYPE_ASSERT, "( ent->r.modelType ) == ( MODELTYPE_BRUSH )", "ent->r.modelType == MODELTYPE_BRUSH\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( CM_BrushModelIsValid(_RBX->s.index.brushModel) )
  {
    if ( BgDynamicLimits::GetEntityStateIndexBits() < 0x20 )
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
        __debugbreak();
      if ( _RBX->s.index.brushModel >= (unsigned int)(1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits)) )
      {
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
          __debugbreak();
        LODWORD(v8) = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits);
        LODWORD(v7) = _RBX->s.index.brushModel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.index.brushModel ) < (unsigned)( ( 1 << BgDynamicLimits::GetEntityStateIndexBits() ) )", "ent->s.index.brushModel doesn't index ( 1 << BgDynamicLimits::GetEntityStateIndexBits() )\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
    }
    CM_BrushModelBounds(_RBX->s.index.brushModel, &bounds);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+78h+bounds.midPoint]
      vmovsd  xmm1, qword ptr [rsp+78h+bounds.halfSize+4]
      vmovups xmmword ptr [rbx+100h], xmm0
      vmovsd  qword ptr [rbx+110h], xmm1
    }
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, _RBX) )
      G_Utils_CreateEntityPhysics(_RBX);
    SV_LinkEntity(_RBX);
    return 1;
  }
  else
  {
    Com_PrintWarning(131087, "Warning: Invalid brush model assigned to entity [%d]; falling back to capsule collision.\n", (unsigned int)_RBX->s.number);
    SV_UnlinkEntity(_RBX);
    result = 0;
    _RBX->r.modelType = 0;
  }
  return result;
}

/*
==============
SV_Game_SetTriggerModel
==============
*/
char SV_Game_SetTriggerModel(gentity_s *ent)
{
  __int64 v2; 
  unsigned __int8 modelType; 
  char result; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  Bounds bounds; 

  _RBX = ent;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = _RBX - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    v9 = 2048;
    LODWORD(v7) = _RBX - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 245, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  modelType = _RBX->r.modelType;
  if ( modelType != 4 )
  {
    LODWORD(v8) = 4;
    LODWORD(v7) = modelType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 246, ASSERT_TYPE_ASSERT, "( ent->r.modelType ) == ( MODELTYPE_TRIGGER_BRUSH )", "ent->r.modelType == MODELTYPE_TRIGGER_BRUSH\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( CM_TriggerModelIsValid(_RBX->s.index.brushModel) )
  {
    if ( BgDynamicLimits::GetEntityStateIndexBits() < 0x20 )
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
        __debugbreak();
      if ( _RBX->s.index.brushModel >= (unsigned int)(1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits)) )
      {
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
          __debugbreak();
        LODWORD(v8) = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits);
        LODWORD(v7) = _RBX->s.index.brushModel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.index.triggerModel ) < (unsigned)( ( 1 << BgDynamicLimits::GetEntityStateIndexBits() ) )", "ent->s.index.triggerModel doesn't index ( 1 << BgDynamicLimits::GetEntityStateIndexBits() )\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
    }
    CM_TriggerModelBounds(_RBX->s.index.brushModel, &bounds);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+78h+bounds.midPoint]
      vmovsd  xmm1, qword ptr [rsp+78h+bounds.halfSize+4]
      vmovups xmmword ptr [rbx+100h], xmm0
      vmovsd  qword ptr [rbx+110h], xmm1
    }
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, _RBX) )
      G_Utils_CreateEntityPhysics(_RBX);
    SV_LinkEntity(_RBX);
    return 1;
  }
  else
  {
    SV_UnlinkEntity(_RBX);
    result = 0;
    _RBX->r.modelType = 0;
  }
  return result;
}

/*
==============
SV_Game_XModelDebugBoxes
==============
*/
void SV_Game_XModelDebugBoxes(gentity_s *ent, const vec4_t *color, int duration)
{
  const DObj *v13; 
  int v15; 
  int v16; 
  const XModel *Model; 
  __int64 numBones; 
  XBoneInfo **v21; 
  const unsigned int *v24; 
  __int64 v34; 
  unsigned int v63; 
  unsigned int v90; 
  bool v154; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  int v171; 
  int NumModels; 
  DObjAnimMat *RotTransArray; 
  XBoneInfo **v174; 
  __int64 v175; 
  const DObj *ServerDObjForEnt; 
  vec3_t in1; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  vec3_t start; 
  tmat43_t<vec3_t> in2; 
  XBoneInfo *boneInfo[254]; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v13 = ServerDObjForEnt;
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 641, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjNumBones(ServerDObjForEnt) > 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 645, ASSERT_TYPE_ASSERT, "(numBones <= DOBJ_MAX_PARTS)", (const char *)&queryFormat, "numBones <= DOBJ_MAX_PARTS") )
    __debugbreak();
  DObjGetBoneInfo(ServerDObjForEnt, boneInfo);
  RotTransArray = DObjGetRotTransArray(ServerDObjForEnt);
  _RBX = RotTransArray;
  AnglesToAxis(&ent->r.currentAngles, &axis);
  v15 = 0;
  NumModels = DObjGetNumModels(ServerDObjForEnt);
  v16 = 0;
  v169 = 0;
  if ( NumModels > 0 )
  {
    __asm
    {
      vmovaps [rsp+9D0h+var_40], xmm6
      vmovaps [rsp+9D0h+var_50], xmm7
      vmovaps [rsp+9D0h+var_60], xmm8
      vmovaps [rsp+9D0h+var_70], xmm9
      vmovaps [rsp+9D0h+var_80], xmm10
      vmovaps [rsp+9D0h+var_90], xmm11
      vmovaps [rsp+9D0h+var_A0], xmm12
      vmovaps [rsp+9D0h+var_B0], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vmovaps [rsp+9D0h+var_C0], xmm14
      vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
    {
      Model = DObjGetModel(v13, v15);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = Model->numBones;
      if ( DObjIgnoreCollision(v13, v15) )
      {
        v16 += numBones;
        _RBX += (int)numBones;
        RotTransArray = _RBX;
      }
      else if ( (_DWORD)numBones )
      {
        v175 = numBones;
        v171 = numBones + v16;
        v21 = &boneInfo[v16];
        v174 = v21;
        do
        {
          __asm { vmovss  xmm0, dword ptr [rbx] }
          _RSI = *v21;
          v24 = s_boxVerts;
          __asm { vmovss  [rsp+9D0h+var_9A0], xmm0 }
          if ( (v164 & 0x7F800000) == 2139095040 )
            goto LABEL_33;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vmovss  [rsp+9D0h+var_9A0], xmm0
          }
          if ( (v165 & 0x7F800000) == 2139095040 )
            goto LABEL_33;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vmovss  [rsp+9D0h+var_9A0], xmm0
          }
          if ( (v166 & 0x7F800000) == 2139095040 )
            goto LABEL_33;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vmovss  [rsp+9D0h+var_9A0], xmm0
          }
          if ( (v167 & 0x7F800000) == 2139095040 )
          {
LABEL_33:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+1Ch]
            vmovss  [rsp+9D0h+var_9A0], xmm0
          }
          if ( (v168 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+1Ch]
            vmulss  xmm2, xmm0, dword ptr [rbx]
            vmovss  xmm3, dword ptr [rbx+4]
            vmovss  xmm5, dword ptr [rbx+8]
            vmulss  xmm12, xmm2, dword ptr [rbx]
          }
          v34 = 12i64;
          __asm
          {
            vmulss  xmm4, xmm3, xmm0
            vmulss  xmm6, xmm5, xmm0
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vmulss  xmm10, xmm0, xmm2
            vmulss  xmm7, xmm3, xmm2
            vmulss  xmm11, xmm3, xmm4
            vmulss  xmm9, xmm5, xmm2
            vmulss  xmm2, xmm0, xmm6
            vmulss  xmm8, xmm5, xmm4
            vmulss  xmm4, xmm0, xmm4
            vmulss  xmm3, xmm5, xmm6
            vaddss  xmm1, xmm2, xmm7
            vmovss  dword ptr [rbp+8D0h+in2+4], xmm1
            vsubss  xmm1, xmm7, xmm2
            vmovss  dword ptr [rbp+8D0h+in2+0Ch], xmm1
            vaddss  xmm1, xmm8, xmm10
            vmovss  dword ptr [rbp+8D0h+in2+14h], xmm1
            vsubss  xmm1, xmm8, xmm10
            vmovss  dword ptr [rbp+8D0h+in2+1Ch], xmm1
            vaddss  xmm0, xmm3, xmm11
            vsubss  xmm0, xmm13, xmm0
            vmovss  dword ptr [rbp+8D0h+in2], xmm0
            vsubss  xmm0, xmm9, xmm4
            vmovss  dword ptr [rbp+8D0h+in2+8], xmm0
            vaddss  xmm0, xmm3, xmm12
            vsubss  xmm0, xmm13, xmm0
            vmovss  dword ptr [rbp+8D0h+in2+10h], xmm0
            vaddss  xmm0, xmm4, xmm9
            vmovss  dword ptr [rbp+8D0h+in2+18h], xmm0
            vaddss  xmm0, xmm11, xmm12
            vsubss  xmm0, xmm13, xmm0
            vmovss  dword ptr [rbp+8D0h+in2+20h], xmm0
            vmovss  xmm1, dword ptr [rbx+10h]
            vmovss  dword ptr [rbp+8D0h+in2+24h], xmm1
            vmovss  xmm0, dword ptr [rbx+14h]
            vmovss  dword ptr [rbp+8D0h+in2+28h], xmm0
            vmovss  xmm1, dword ptr [rbx+18h]
            vmovss  dword ptr [rbp+8D0h+in2+2Ch], xmm1
          }
          _EBX = 0;
          do
          {
            __asm { vmovss  xmm4, dword ptr [rsi+0Ch] }
            v63 = *v24;
            __asm { vxorps  xmm3, xmm4, xmm14 }
            _EAX = *v24 & 1;
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, ebx
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi]
              vmovss  dword ptr [rsp+9D0h+in1], xmm0
              vmovss  xmm4, dword ptr [rsi+10h]
            }
            LOBYTE(_EAX) = v63;
            _ECX = v63 & 4;
            __asm
            {
              vmovd   xmm1, ebx
              vxorps  xmm3, xmm4, xmm14
            }
            _EAX = _EAX & 2;
            __asm
            {
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+4]
              vmovss  dword ptr [rsp+9D0h+in1+4], xmm0
              vmovss  xmm4, dword ptr [rsi+14h]
              vmovd   xmm0, ecx
              vmovd   xmm1, ebx
              vpcmpeqd xmm2, xmm0, xmm1
              vxorps  xmm3, xmm4, xmm14
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+8]
              vmovss  dword ptr [rsp+9D0h+in1+8], xmm0
            }
            MatrixTransformVector43(&in1, &in2, &out);
            __asm
            {
              vmovss  xmm5, dword ptr [rbp+8D0h+out+4]
              vmovss  xmm7, dword ptr [rbp+8D0h+out]
              vmovss  xmm6, dword ptr [rbp+8D0h+out+8]
            }
            v90 = v24[1];
            __asm
            {
              vmulss  xmm1, xmm5, dword ptr [rbp+8D0h+axis+0Ch]
              vmulss  xmm2, xmm7, dword ptr [rbp+8D0h+axis]
              vmulss  xmm0, xmm6, dword ptr [rbp+8D0h+axis+18h]
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm1, xmm3, xmm0
              vaddss  xmm2, xmm1, dword ptr [r13+130h]
              vmulss  xmm3, xmm7, dword ptr [rbp+8D0h+axis+4]
              vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+1Ch]
              vmovss  dword ptr [rbp+8D0h+start], xmm2
              vmulss  xmm2, xmm5, dword ptr [rbp+8D0h+axis+10h]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vaddss  xmm3, xmm2, dword ptr [r13+134h]
              vmulss  xmm2, xmm5, dword ptr [rbp+8D0h+axis+14h]
              vmulss  xmm4, xmm7, dword ptr [rbp+8D0h+axis+8]
              vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+20h]
              vmovss  dword ptr [rbp+8D0h+start+4], xmm3
              vaddss  xmm3, xmm4, xmm2
              vaddss  xmm2, xmm3, xmm1
              vaddss  xmm3, xmm2, dword ptr [r13+138h]
              vmovss  dword ptr [rbp+8D0h+start+8], xmm3
              vmovss  xmm4, dword ptr [rsi+0Ch]
            }
            _EAX = v90 & 1;
            __asm
            {
              vmovd   xmm0, eax
              vxorps  xmm3, xmm4, xmm14
              vmovd   xmm1, ebx
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi]
              vmovss  dword ptr [rsp+9D0h+in1], xmm0
              vmovss  xmm4, dword ptr [rsi+10h]
            }
            _EAX = v90 & 2;
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, ebx
              vxorps  xmm3, xmm4, xmm14
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+4]
              vmovss  dword ptr [rsp+9D0h+in1+4], xmm0
              vmovss  xmm4, dword ptr [rsi+14h]
            }
            _ECX = v90 & 4;
            __asm
            {
              vmovd   xmm0, ecx
              vmovd   xmm1, ebx
              vpcmpeqd xmm2, xmm0, xmm1
              vxorps  xmm3, xmm4, xmm14
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+8]
              vmovss  dword ptr [rsp+9D0h+in1+8], xmm0
            }
            MatrixTransformVector43(&in1, &in2, &out);
            __asm
            {
              vmovss  xmm5, dword ptr [rbp+8D0h+out+4]
              vmovss  xmm7, dword ptr [rbp+8D0h+out]
              vmovss  xmm6, dword ptr [rbp+8D0h+out+8]
              vmulss  xmm1, xmm5, dword ptr [rbp+8D0h+axis+0Ch]
              vmulss  xmm2, xmm7, dword ptr [rbp+8D0h+axis]
              vmulss  xmm0, xmm6, dword ptr [rbp+8D0h+axis+18h]
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm1, xmm3, xmm0
              vaddss  xmm2, xmm1, dword ptr [r13+130h]
              vmulss  xmm3, xmm7, dword ptr [rbp+8D0h+axis+4]
              vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+1Ch]
              vmovss  dword ptr [rbp+8D0h+end], xmm2
              vmulss  xmm2, xmm5, dword ptr [rbp+8D0h+axis+10h]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vaddss  xmm3, xmm2, dword ptr [r13+134h]
              vmulss  xmm2, xmm5, dword ptr [rbp+8D0h+axis+14h]
              vmulss  xmm4, xmm7, dword ptr [rbp+8D0h+axis+8]
              vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+20h]
              vmovss  dword ptr [rbp+8D0h+end+4], xmm3
              vaddss  xmm3, xmm4, xmm2
              vaddss  xmm2, xmm3, xmm1
              vaddss  xmm3, xmm2, dword ptr [r13+138h]
              vmovss  dword ptr [rbp+8D0h+end+8], xmm3
            }
            v24 += 2;
            CL_AddDebugLine(&start, &end, color, 0, duration, 1);
            --v34;
          }
          while ( v34 );
          _RBX = RotTransArray + 1;
          v21 = v174 + 1;
          ++RotTransArray;
          v154 = v175-- == 1;
          ++v174;
        }
        while ( !v154 );
        v15 = v169;
        v16 = v171;
        v13 = ServerDObjForEnt;
      }
      v169 = ++v15;
    }
    while ( v15 < NumModels );
    __asm
    {
      vmovaps xmm14, [rsp+9D0h+var_C0]
      vmovaps xmm13, [rsp+9D0h+var_B0]
      vmovaps xmm12, [rsp+9D0h+var_A0]
      vmovaps xmm11, [rsp+9D0h+var_90]
      vmovaps xmm10, [rsp+9D0h+var_80]
      vmovaps xmm9, [rsp+9D0h+var_70]
      vmovaps xmm8, [rsp+9D0h+var_60]
      vmovaps xmm7, [rsp+9D0h+var_50]
      vmovaps xmm6, [rsp+9D0h+var_40]
    }
  }
}

