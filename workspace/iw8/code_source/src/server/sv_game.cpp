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
__int64 SV_Game_CheckFontScaleRange(const float fontScale)
{
  SvPersistentGlobals *PersistentGlobalsCommon; 

  PersistentGlobalsCommon = SvPersistentGlobals::GetPersistentGlobalsCommon();
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
void SV_Game_DObjInitServerTime(gentity_s *ent, float dtime)
{
  DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
    DObjInitServerTime(ServerDObjForEnt, dtime);
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
int SV_Game_DObjUpdateServerTime(gentity_s *ent, float dtime, int bNotify)
{
  DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
    LODWORD(ServerDObjForEnt) = DObjUpdateServerInfo(ServerDObjForEnt, dtime, bNotify);
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
  double Float; 
  GamerProfileData v6; 

  if ( !dataName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 914, ASSERT_TYPE_ASSERT, "( dataName )", (const char *)&queryFormat, "dataName") )
    __debugbreak();
  if ( !outProfileData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 915, ASSERT_TYPE_ASSERT, "( outProfileData )", (const char *)&queryFormat, "outProfileData") )
    __debugbreak();
  String = SV_Demo_GetString();
  if ( I_strcmp(String, dataName) )
    Com_PrintWarning(15, "WARNING: SV_Archived_GetPlayerProfileData() has demo data mismatch when trying to fetch setting '%s' (demo had %s).\n", dataName, String);
  if ( SV_IsDemoPlaying() )
  {
    v6.type = SV_Demo_GetInt();
    switch ( v6.type )
    {
      case TYPE_INVALID:
      case TYPE_BUFFER:
        break;
      case TYPE_BYTE:
        v6.u.byteVal = SV_Demo_GetByte();
        break;
      case TYPE_BOOL:
        v6.u.byteVal = SV_Demo_GetByte() != 0;
        break;
      case TYPE_SHORT:
        v6.u.shortVal = SV_Demo_GetInt();
        break;
      case TYPE_INT:
      case TYPE_FLAG:
        v6.u.intVal = SV_Demo_GetInt();
        break;
      case TYPE_FLOAT:
        Float = SV_Demo_GetFloat();
        v6.u.floatVal = *(float *)&Float;
        break;
      case TYPE_STRING:
        v6.u.stringVal = SV_Demo_GetString();
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
    v6.type = TYPE_INT;
    v6.u.intVal = 0;
  }
  *outProfileData = v6;
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
  usercmd_s *p_lastUsercmd; 
  __int64 v4; 
  __int128 v5; 

  p_lastUsercmd = &SvClient::GetCommonClient(clientNum)->lastUsercmd;
  v4 = 2i64;
  do
  {
    cmd = (usercmd_s *)((char *)cmd + 128);
    v5 = *(_OWORD *)&p_lastUsercmd->buttons;
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    *(_OWORD *)&cmd[-1].offHand.attachmentVariationIndices[13] = v5;
    *(_OWORD *)&cmd[-1].offHand.weaponCamo = *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo;
    *(_OWORD *)cmd[-1].remoteControlMove = *(_OWORD *)p_lastUsercmd[-1].remoteControlMove;
    *(_OWORD *)cmd[-1].vehAngles = *(_OWORD *)p_lastUsercmd[-1].vehAngles;
    *(_OWORD *)&cmd[-1].vehOrgZ = *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ;
    *(_OWORD *)&cmd[-1].gunYOfs = *(_OWORD *)&p_lastUsercmd[-1].gunYOfs;
    *(_OWORD *)cmd[-1].sightedClientsMask.data = *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data;
    *(_OWORD *)&cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4];
    --v4;
  }
  while ( v4 );
  cmd->buttons = p_lastUsercmd->buttons;
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
  if ( !dataName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 977, ASSERT_TYPE_ASSERT, "( dataName )", (const char *)&queryFormat, "dataName") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 978, ASSERT_TYPE_ASSERT, "( data )", (const char *)&queryFormat, "data") )
    __debugbreak();
  SV_Record_GetString(dataName);
  SV_Record_GetInt(data->type);
  switch ( data->type )
  {
    case TYPE_INVALID:
    case TYPE_BUFFER:
      return;
    case TYPE_BYTE:
    case TYPE_BOOL:
      SV_Record_GetByte(data->u.byteVal);
      break;
    case TYPE_SHORT:
      SV_Record_GetInt(data->u.shortVal);
      break;
    case TYPE_INT:
    case TYPE_FLAG:
      SV_Record_GetInt(data->u.intVal);
      break;
    case TYPE_FLOAT:
      SV_Record_GetFloat(data->u.floatVal);
      break;
    case TYPE_STRING:
      SV_Record_GetString(data->u.stringVal);
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
  signed __int64 v2; 
  unsigned __int8 modelType; 
  char result; 
  double v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  Bounds bounds; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    v8 = 2048;
    LODWORD(v6) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 199, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  modelType = ent->r.modelType;
  if ( modelType != 5 )
  {
    LODWORD(v7) = 5;
    LODWORD(v6) = modelType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 200, ASSERT_TYPE_ASSERT, "( ent->r.modelType ) == ( MODELTYPE_BRUSH )", "ent->r.modelType == MODELTYPE_BRUSH\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( CM_BrushModelIsValid(ent->s.index.brushModel) )
  {
    if ( BgDynamicLimits::GetEntityStateIndexBits() < 0x20 )
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
        __debugbreak();
      if ( ent->s.index.brushModel >= (unsigned int)(1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits)) )
      {
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
          __debugbreak();
        LODWORD(v7) = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits);
        LODWORD(v6) = ent->s.index.brushModel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.index.brushModel ) < (unsigned)( ( 1 << BgDynamicLimits::GetEntityStateIndexBits() ) )", "ent->s.index.brushModel doesn't index ( 1 << BgDynamicLimits::GetEntityStateIndexBits() )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
    }
    CM_BrushModelBounds(ent->s.index.brushModel, &bounds);
    v5 = *(double *)&bounds.halfSize.y;
    *(_OWORD *)ent->r.box.midPoint.v = *(_OWORD *)bounds.midPoint.v;
    *(double *)&ent->r.box.halfSize.y = v5;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, ent) )
      G_Utils_CreateEntityPhysics(ent);
    SV_LinkEntity(ent);
    return 1;
  }
  else
  {
    Com_PrintWarning(131087, "Warning: Invalid brush model assigned to entity [%d]; falling back to capsule collision.\n", (unsigned int)ent->s.number);
    SV_UnlinkEntity(ent);
    result = 0;
    ent->r.modelType = 0;
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
  signed __int64 v2; 
  unsigned __int8 modelType; 
  char result; 
  double v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  Bounds bounds; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    v8 = 2048;
    LODWORD(v6) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 245, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  modelType = ent->r.modelType;
  if ( modelType != 4 )
  {
    LODWORD(v7) = 4;
    LODWORD(v6) = modelType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 246, ASSERT_TYPE_ASSERT, "( ent->r.modelType ) == ( MODELTYPE_TRIGGER_BRUSH )", "ent->r.modelType == MODELTYPE_TRIGGER_BRUSH\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( CM_TriggerModelIsValid(ent->s.index.brushModel) )
  {
    if ( BgDynamicLimits::GetEntityStateIndexBits() < 0x20 )
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
        __debugbreak();
      if ( ent->s.index.brushModel >= (unsigned int)(1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits)) )
      {
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
          __debugbreak();
        LODWORD(v7) = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_esIndexBits);
        LODWORD(v6) = ent->s.index.brushModel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.index.triggerModel ) < (unsigned)( ( 1 << BgDynamicLimits::GetEntityStateIndexBits() ) )", "ent->s.index.triggerModel doesn't index ( 1 << BgDynamicLimits::GetEntityStateIndexBits() )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
    }
    CM_TriggerModelBounds(ent->s.index.brushModel, &bounds);
    v5 = *(double *)&bounds.halfSize.y;
    *(_OWORD *)ent->r.box.midPoint.v = *(_OWORD *)bounds.midPoint.v;
    *(double *)&ent->r.box.halfSize.y = v5;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, ent) )
      G_Utils_CreateEntityPhysics(ent);
    SV_LinkEntity(ent);
    return 1;
  }
  else
  {
    SV_UnlinkEntity(ent);
    result = 0;
    ent->r.modelType = 0;
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
  const DObj *v4; 
  DObjAnimMat *v5; 
  int v6; 
  int v7; 
  const XModel *Model; 
  __int64 numBones; 
  XBoneInfo **v10; 
  XBoneInfo *v11; 
  const unsigned int *v12; 
  float transWeight; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int v26; 
  unsigned int v38; 
  bool v51; 
  __int64 v52; 
  int v54; 
  int NumModels; 
  DObjAnimMat *RotTransArray; 
  XBoneInfo **v57; 
  __int64 v58; 
  const DObj *ServerDObjForEnt; 
  vec3_t in1; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  vec3_t start; 
  tmat43_t<vec3_t> in2; 
  XBoneInfo *boneInfo[254]; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v4 = ServerDObjForEnt;
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 641, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjNumBones(ServerDObjForEnt) > 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game.cpp", 645, ASSERT_TYPE_ASSERT, "(numBones <= DOBJ_MAX_PARTS)", (const char *)&queryFormat, "numBones <= DOBJ_MAX_PARTS") )
    __debugbreak();
  DObjGetBoneInfo(ServerDObjForEnt, boneInfo);
  RotTransArray = DObjGetRotTransArray(ServerDObjForEnt);
  v5 = RotTransArray;
  AnglesToAxis(&ent->r.currentAngles, &axis);
  v6 = 0;
  NumModels = DObjGetNumModels(ServerDObjForEnt);
  v7 = 0;
  HIDWORD(v52) = 0;
  if ( NumModels > 0 )
  {
    do
    {
      Model = DObjGetModel(v4, v6);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = Model->numBones;
      if ( DObjIgnoreCollision(v4, v6) )
      {
        v7 += numBones;
        v5 += (int)numBones;
        RotTransArray = v5;
      }
      else if ( (_DWORD)numBones )
      {
        v58 = numBones;
        v54 = numBones + v7;
        v10 = &boneInfo[v7];
        v57 = v10;
        do
        {
          v11 = *v10;
          v12 = s_boxVerts;
          *(float *)&v52 = v5->quat.v[0];
          if ( (LODWORD(v5->quat.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v52 = v5->quat.v[1], (v52 & 0x7F800000) == 2139095040) || (*(float *)&v52 = v5->quat.v[2], (v52 & 0x7F800000) == 2139095040) || (*(float *)&v52 = v5->quat.v[3], (v52 & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v52) )
              __debugbreak();
          }
          if ( (LODWORD(v5->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
            __debugbreak();
          transWeight = v5->transWeight;
          v14 = transWeight * v5->quat.v[0];
          v15 = v5->quat.v[1];
          v16 = v5->quat.v[2];
          v17 = v14 * v5->quat.v[0];
          v18 = 12i64;
          v19 = v15 * transWeight;
          v20 = v16 * transWeight;
          v21 = v5->quat.v[3];
          v22 = v15 * v19;
          v23 = v16 * v19;
          v24 = v21 * v19;
          in2.m[0].v[1] = (float)(v21 * v20) + (float)(v15 * v14);
          in2.m[1].v[0] = (float)(v15 * v14) - (float)(v21 * v20);
          in2.m[1].v[2] = v23 + (float)(v21 * v14);
          in2.m[2].v[1] = v23 - (float)(v21 * v14);
          in2.m[0].v[0] = 1.0 - (float)((float)(v16 * v20) + v22);
          in2.m[0].v[2] = (float)(v16 * v14) - v24;
          in2.m[1].v[1] = 1.0 - (float)((float)(v16 * v20) + v17);
          in2.m[2].v[0] = v24 + (float)(v16 * v14);
          in2.m[2].v[2] = 1.0 - (float)(v22 + v17);
          in2.m[3] = v5->trans;
          do
          {
            _XMM4 = LODWORD(v11->bounds.halfSize.v[0]);
            v26 = *v12;
            _XMM0 = *v12 & 1;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in1.v[0] = *(float *)&_XMM1 + v11->bounds.midPoint.v[0];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[1]);
            _XMM0 = v26 & 2;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in1.v[1] = *(float *)&_XMM1 + v11->bounds.midPoint.v[1];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[2]);
            _XMM0 = v26 & 4;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in1.v[2] = *(float *)&_XMM1 + v11->bounds.midPoint.v[2];
            MatrixTransformVector43(&in1, &in2, &out);
            v38 = v12[1];
            start.v[0] = (float)((float)((float)(out.v[0] * axis.m[0].v[0]) + (float)(out.v[1] * axis.m[1].v[0])) + (float)(out.v[2] * axis.m[2].v[0])) + ent->r.currentOrigin.v[0];
            start.v[1] = (float)((float)((float)(out.v[0] * axis.m[0].v[1]) + (float)(out.v[1] * axis.m[1].v[1])) + (float)(out.v[2] * axis.m[2].v[1])) + ent->r.currentOrigin.v[1];
            start.v[2] = (float)((float)((float)(out.v[0] * axis.m[0].v[2]) + (float)(out.v[1] * axis.m[1].v[2])) + (float)(out.v[2] * axis.m[2].v[2])) + ent->r.currentOrigin.v[2];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[0]);
            _XMM0 = v38 & 1;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in1.v[0] = *(float *)&_XMM1 + v11->bounds.midPoint.v[0];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[1]);
            _XMM0 = v38 & 2;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in1.v[1] = *(float *)&_XMM1 + v11->bounds.midPoint.v[1];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[2]);
            _XMM0 = v38 & 4;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in1.v[2] = *(float *)&_XMM1 + v11->bounds.midPoint.v[2];
            MatrixTransformVector43(&in1, &in2, &out);
            end.v[0] = (float)((float)((float)(out.v[0] * axis.m[0].v[0]) + (float)(out.v[1] * axis.m[1].v[0])) + (float)(out.v[2] * axis.m[2].v[0])) + ent->r.currentOrigin.v[0];
            end.v[1] = (float)((float)((float)(out.v[0] * axis.m[0].v[1]) + (float)(out.v[1] * axis.m[1].v[1])) + (float)(out.v[2] * axis.m[2].v[1])) + ent->r.currentOrigin.v[1];
            end.v[2] = (float)((float)((float)(out.v[0] * axis.m[0].v[2]) + (float)(out.v[1] * axis.m[1].v[2])) + (float)(out.v[2] * axis.m[2].v[2])) + ent->r.currentOrigin.v[2];
            v12 += 2;
            CL_AddDebugLine(&start, &end, color, 0, duration, 1);
            --v18;
          }
          while ( v18 );
          v5 = RotTransArray + 1;
          v10 = v57 + 1;
          ++RotTransArray;
          v51 = v58-- == 1;
          ++v57;
        }
        while ( !v51 );
        v6 = HIDWORD(v52);
        v7 = v54;
        v4 = ServerDObjForEnt;
      }
      HIDWORD(v52) = ++v6;
    }
    while ( v6 < NumModels );
  }
}

