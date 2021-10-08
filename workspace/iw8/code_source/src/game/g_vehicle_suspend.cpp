/*
==============
GVehicleSuspendManager::SetUsableInfo
==============
*/

void __fastcall GVehicleSuspendManager::SetUsableInfo(GVehicleSuspendManager *this, const gentity_s *ent, unsigned __int8 usableScriptablePartCount, const VehicleUsableParts *usableScriptableParts)
{
  ?SetUsableInfo@GVehicleSuspendManager@@QEAAXPEBUgentity_s@@EPEBUVehicleUsableParts@@@Z(this, ent, usableScriptablePartCount, usableScriptableParts);
}

/*
==============
GVehicleSuspendManager::GetSavedInfo
==============
*/

GVehicleSuspendManager::SuspendInfo *__fastcall GVehicleSuspendManager::GetSavedInfo(GVehicleSuspendManager *this, const gentity_s *ent)
{
  return ?GetSavedInfo@GVehicleSuspendManager@@IEAAPEAUSuspendInfo@1@PEBUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::GetUsableInfo
==============
*/

void __fastcall GVehicleSuspendManager::GetUsableInfo(GVehicleSuspendManager *this, const gentity_s *ent, unsigned __int8 *outUsableScriptablePartCount, const VehicleUsableParts **outUsableScriptableParts)
{
  ?GetUsableInfo@GVehicleSuspendManager@@QEBAXPEBUgentity_s@@PEAEPEAPEBUVehicleUsableParts@@@Z(this, ent, outUsableScriptablePartCount, outUsableScriptableParts);
}

/*
==============
GVehicleSuspendManager::IsSuspended
==============
*/

bool __fastcall GVehicleSuspendManager::IsSuspended(GVehicleSuspendManager *this, const gentity_s *ent)
{
  return ?IsSuspended@GVehicleSuspendManager@@QEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::ClearSavedInfo
==============
*/

void __fastcall GVehicleSuspendManager::ClearSavedInfo(GVehicleSuspendManager *this, GVehicleSuspendManager::SuspendInfo *vinfo)
{
  ?ClearSavedInfo@GVehicleSuspendManager@@IEAAXPEAUSuspendInfo@1@@Z(this, vinfo);
}

/*
==============
GVehicleSuspendManager::SaveInfo
==============
*/

void __fastcall GVehicleSuspendManager::SaveInfo(GVehicleSuspendManager *this, const gentity_s *ent)
{
  ?SaveInfo@GVehicleSuspendManager@@IEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::FindAvailable
==============
*/

GVehicleSuspendManager::SuspendInfo *__fastcall GVehicleSuspendManager::FindAvailable(GVehicleSuspendManager *this)
{
  return ?FindAvailable@GVehicleSuspendManager@@IEAAPEAUSuspendInfo@1@XZ(this);
}

/*
==============
GVehicleSuspendManager::WakeUpVehicle
==============
*/

void __fastcall GVehicleSuspendManager::WakeUpVehicle(GVehicleSuspendManager *this, gentity_s *ent)
{
  ?WakeUpVehicle@GVehicleSuspendManager@@QEAAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::Reset
==============
*/

void __fastcall GVehicleSuspendManager::Reset(GVehicleSuspendManager *this)
{
  ?Reset@GVehicleSuspendManager@@QEAAXXZ(this);
}

/*
==============
GVehicleSuspendManager::GVehicleSuspendManager
==============
*/

void __fastcall GVehicleSuspendManager::GVehicleSuspendManager(GVehicleSuspendManager *this)
{
  ??0GVehicleSuspendManager@@QEAA@XZ(this);
}

/*
==============
GVehicleSuspendManager::GetSavedInfoConst
==============
*/

const GVehicleSuspendManager::SuspendInfo *__fastcall GVehicleSuspendManager::GetSavedInfoConst(GVehicleSuspendManager *this, const gentity_s *ent)
{
  return ?GetSavedInfoConst@GVehicleSuspendManager@@QEBAPEBUSuspendInfo@1@PEBUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::ReuseEntity
==============
*/

void __fastcall GVehicleSuspendManager::ReuseEntity(GVehicleSuspendManager *this, gentity_s *ent, const scr_string_t *classname)
{
  ?ReuseEntity@GVehicleSuspendManager@@IEAAXPEAUgentity_s@@AEBW4scr_string_t@@@Z(this, ent, classname);
}

/*
==============
GVehicleSuspendManager::RemoveSavedInfo
==============
*/

void __fastcall GVehicleSuspendManager::RemoveSavedInfo(GVehicleSuspendManager *this, gentity_s *ent)
{
  ?RemoveSavedInfo@GVehicleSuspendManager@@QEAAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::SuspendVehicle
==============
*/

void __fastcall GVehicleSuspendManager::SuspendVehicle(GVehicleSuspendManager *this, gentity_s *ent)
{
  ?SuspendVehicle@GVehicleSuspendManager@@QEAAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicleSuspendManager::GetInfoNumber
==============
*/

__int16 __fastcall GVehicleSuspendManager::GetInfoNumber(GVehicleSuspendManager *this, const GVehicleSuspendManager::SuspendInfo *vinfo)
{
  return ?GetInfoNumber@GVehicleSuspendManager@@IEAAFPEBUSuspendInfo@1@@Z(this, vinfo);
}

/*
==============
GVehicleSuspendManager::GVehicleSuspendManager
==============
*/
void GVehicleSuspendManager::GVehicleSuspendManager(GVehicleSuspendManager *this)
{
  unsigned __int16 *p_entityNumber; 
  __int64 v3; 
  unsigned int v4; 
  __int16 *m_entityNumToInfo; 
  gentity_s *v6; 

  DebugWipe(this, 0x5C00ui64);
  p_entityNumber = &this->m_infos[0].entityNumber;
  v3 = 256i64;
  do
  {
    *p_entityNumber = 2047;
    p_entityNumber += 46;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  m_entityNumToInfo = this->m_entityNumToInfo;
  do
  {
    *m_entityNumToInfo = 256;
    if ( g_entities )
    {
      v6 = &g_entities[v4];
      if ( v6->s.eType == ET_SCRIPTMOVER )
        v6->s.staticState.general.xmodel &= ~0x10u;
    }
    ++v4;
    ++m_entityNumToInfo;
  }
  while ( v4 < 0x800 );
  this->m_nextAvailIndex = 0;
}

/*
==============
GVehicleSuspendManager::ClearSavedInfo
==============
*/
void GVehicleSuspendManager::ClearSavedInfo(GVehicleSuspendManager *this, GVehicleSuspendManager::SuspendInfo *vinfo)
{
  unsigned __int16 entityNumber; 

  if ( !vinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 142, ASSERT_TYPE_ASSERT, "(vinfo)", (const char *)&queryFormat, "vinfo") )
    __debugbreak();
  entityNumber = vinfo->entityNumber;
  if ( entityNumber < 0x800u )
    this->m_entityNumToInfo[entityNumber] = 256;
  DebugWipe(vinfo, 0x5Cui64);
  vinfo->usableScriptablePartCount = 0;
  vinfo->entityNumber = 2047;
  this->m_nextAvailIndex = GVehicleSuspendManager::GetInfoNumber(this, vinfo);
}

/*
==============
GVehicleSuspendManager::FindAvailable
==============
*/
GVehicleSuspendManager::SuspendInfo *GVehicleSuspendManager::FindAvailable(GVehicleSuspendManager *this)
{
  unsigned int m_nextAvailIndex; 
  int v3; 
  __int64 v4; 
  GVehicleSuspendManager::SuspendInfo *result; 

  m_nextAvailIndex = this->m_nextAvailIndex;
  v3 = 0;
  while ( 1 )
  {
    v4 = (unsigned __int8)(m_nextAvailIndex + v3);
    if ( this->m_infos[v4].entityNumber == 2047 )
      break;
    if ( (unsigned int)++v3 >= 0x100 )
      return 0i64;
  }
  result = &this->m_infos[v4];
  this->m_nextAvailIndex = (unsigned __int8)(v4 + 1);
  return result;
}

/*
==============
GVehicleSuspendManager::GetInfoNumber
==============
*/
__int64 GVehicleSuspendManager::GetInfoNumber(GVehicleSuspendManager *this, const GVehicleSuspendManager::SuspendInfo *vinfo)
{
  signed __int64 v4; 
  __int64 v5; 

  if ( !vinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 70, ASSERT_TYPE_ASSERT, "(vinfo)", (const char *)&queryFormat, "vinfo") )
    __debugbreak();
  v4 = (char *)vinfo - (char *)this;
  v5 = v4 / 92;
  if ( (unsigned __int64)(v4 / 92 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,__int64>(__int64)", "signed", (__int16)v5, "signed", v4 / 92) )
    __debugbreak();
  if ( (__int16)v5 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 73, ASSERT_TYPE_ASSERT, "(infoNo < 256)", (const char *)&queryFormat, "infoNo < MAX_SUSPENDED_VEHICLES") )
    __debugbreak();
  return (unsigned __int16)v5;
}

/*
==============
GVehicleSuspendManager::GetSavedInfo
==============
*/

GVehicleSuspendManager::SuspendInfo *__fastcall GVehicleSuspendManager::GetSavedInfo(GVehicleSuspendManager *this, const gentity_s *ent)
{
  return (GVehicleSuspendManager::SuspendInfo *)GVehicleSuspendManager::GetSavedInfoConst(this, ent);
}

/*
==============
GVehicleSuspendManager::GetSavedInfoConst
==============
*/
const GVehicleSuspendManager::SuspendInfo *GVehicleSuspendManager::GetSavedInfoConst(GVehicleSuspendManager *this, const gentity_s *ent)
{
  __int16 v4; 

  if ( (!ent || ent->s.number >= 2048) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 172, ASSERT_TYPE_ASSERT, "(ent && ent->s.number < ( 2048 ))", (const char *)&queryFormat, "ent && ent->s.number < MAX_GENTITIES") )
    __debugbreak();
  if ( !GVehicleSuspendManager::IsSuspended(this, ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 173, ASSERT_TYPE_ASSERT, "(IsSuspended( ent ))", (const char *)&queryFormat, "IsSuspended( ent )") )
    __debugbreak();
  v4 = this->m_entityNumToInfo[ent->s.number];
  if ( (unsigned __int16)v4 > 0xFFu )
    return 0i64;
  else
    return (const GVehicleSuspendManager::SuspendInfo *)((char *)this + 92 * v4);
}

/*
==============
GVehicleSuspendManager::GetUsableInfo
==============
*/
void GVehicleSuspendManager::GetUsableInfo(GVehicleSuspendManager *this, const gentity_s *ent, unsigned __int8 *outUsableScriptablePartCount, const VehicleUsableParts **outUsableScriptableParts)
{
  const GVehicleSuspendManager::SuspendInfo *SavedInfoConst; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 111, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !outUsableScriptablePartCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 112, ASSERT_TYPE_ASSERT, "(outUsableScriptablePartCount)", (const char *)&queryFormat, "outUsableScriptablePartCount") )
    __debugbreak();
  if ( !outUsableScriptableParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 113, ASSERT_TYPE_ASSERT, "(outUsableScriptableParts)", (const char *)&queryFormat, "outUsableScriptableParts") )
    __debugbreak();
  if ( !GVehicleSuspendManager::IsSuspended(this, ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 114, ASSERT_TYPE_ASSERT, "(IsSuspended( ent ))", (const char *)&queryFormat, "IsSuspended( ent )") )
    __debugbreak();
  SavedInfoConst = GVehicleSuspendManager::GetSavedInfoConst(this, ent);
  if ( !SavedInfoConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 118, ASSERT_TYPE_ASSERT, "(vinfo)", (const char *)&queryFormat, "vinfo") )
    __debugbreak();
  *outUsableScriptablePartCount = SavedInfoConst->usableScriptablePartCount;
  *outUsableScriptableParts = (const VehicleUsableParts *)SavedInfoConst;
}

/*
==============
GVehicleSuspendManager::IsSuspended
==============
*/
bool GVehicleSuspendManager::IsSuspended(GVehicleSuspendManager *this, const gentity_s *ent)
{
  return ent->s.eType == ET_SCRIPTMOVER && (ent->s.staticState.vehiclePlayer.playerIndex & 0x10) != 0;
}

/*
==============
GVehicleSuspendManager::RemoveSavedInfo
==============
*/
void GVehicleSuspendManager::RemoveSavedInfo(GVehicleSuspendManager *this, gentity_s *ent)
{
  GVehicleSuspendManager::SuspendInfo *SavedInfoConst; 

  if ( (!ent || !GVehicleSuspendManager::IsSuspended(this, ent)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 191, ASSERT_TYPE_ASSERT, "(ent && IsSuspended( ent ))", (const char *)&queryFormat, "ent && IsSuspended( ent )") )
    __debugbreak();
  SavedInfoConst = (GVehicleSuspendManager::SuspendInfo *)GVehicleSuspendManager::GetSavedInfoConst(this, ent);
  if ( SavedInfoConst )
    GVehicleSuspendManager::ClearSavedInfo(this, SavedInfoConst);
}

/*
==============
GVehicleSuspendManager::Reset
==============
*/
void GVehicleSuspendManager::Reset(GVehicleSuspendManager *this)
{
  unsigned __int16 *p_entityNumber; 
  __int64 v3; 
  unsigned int v4; 
  __int16 *m_entityNumToInfo; 
  gentity_s *v6; 

  DebugWipe(this, 0x5C00ui64);
  p_entityNumber = &this->m_infos[0].entityNumber;
  v3 = 256i64;
  do
  {
    *p_entityNumber = 2047;
    p_entityNumber += 46;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  m_entityNumToInfo = this->m_entityNumToInfo;
  do
  {
    *m_entityNumToInfo = 256;
    if ( g_entities )
    {
      v6 = &g_entities[v4];
      if ( v6->s.eType == ET_SCRIPTMOVER )
        v6->s.staticState.general.xmodel &= ~0x10u;
    }
    ++v4;
    ++m_entityNumToInfo;
  }
  while ( v4 < 0x800 );
  this->m_nextAvailIndex = 0;
}

/*
==============
GVehicleSuspendManager::ReuseEntity
==============
*/
void GVehicleSuspendManager::ReuseEntity(GVehicleSuspendManager *this, gentity_s *ent, const scr_string_t *classname)
{
  float v3; 
  gentity_s *firstFreeEnt; 
  gentity_s *lastFreeEnt; 
  gentity_s *v8; 
  scr_string_t targetname; 
  int eventTime; 
  __int16 number; 
  int maxHealth; 
  int health; 
  int v15; 
  vec3_t angle; 
  vec3_t origin; 

  v3 = ent->r.currentOrigin.v[2];
  __asm { vmovsd  xmm0, qword ptr [rdx+130h] }
  firstFreeEnt = level.firstFreeEnt;
  lastFreeEnt = level.lastFreeEnt;
  v8 = ent;
  ent->r.svFlags |= 0x30u;
  targetname = ent->targetname;
  eventTime = ent->r.eventTime;
  number = ent->s.number;
  origin.v[2] = v3;
  angle.v[2] = ent->r.currentAngles.v[2];
  health = ent->health;
  maxHealth = ent->maxHealth;
  __asm
  {
    vmovsd  qword ptr [rsp+98h+origin], xmm0
    vmovsd  xmm0, qword ptr [rdx+13Ch]
  }
  v15 = maxHealth;
  __asm { vmovsd  qword ptr [rsp+98h+angle], xmm0 }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v8);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v8);
  v8->spawnflags = 0;
  Scr_SetString(&v8->script_classname, *classname);
  G_Spawn_CallForEntity(v8);
  if ( v8->s.number != number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 229, ASSERT_TYPE_ASSERT, "( ent->s.number == prevEntNum )", "We're expecting to reuse the same entity number") )
    __debugbreak();
  level.lastFreeEnt = lastFreeEnt;
  level.firstFreeEnt = firstFreeEnt;
  v8->r.eventTime = eventTime;
  if ( level.lastFreeEnt && level.lastFreeEnt->nextFree == v8 )
    level.lastFreeEnt->nextFree = NULL;
  if ( level.firstFreeEnt && level.firstFreeEnt->nextFree == v8 )
    level.firstFreeEnt->nextFree = NULL;
  Scr_SetString(&v8->classname, *classname);
  Scr_SetString(&v8->targetname, targetname);
  G_SetOriginAndAngle(v8, &origin, &angle, 0, 0);
  v8->health = health;
  v8->maxHealth = v15;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v8->s.lerp.eFlags, ACTIVE, 0x10u);
}

/*
==============
GVehicleSuspendManager::SaveInfo
==============
*/
void GVehicleSuspendManager::SaveInfo(GVehicleSuspendManager *this, const gentity_s *ent)
{
  int v5; 
  __int64 v6; 
  GVehicleSuspendManager::SuspendInfo *v7; 
  __int16 number; 
  __int64 v13; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 82, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 83, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_VEHICLE)", (const char *)&queryFormat, "ent->s.eType == ET_VEHICLE") )
    __debugbreak();
  _RBX = NULL;
  v5 = 0;
  while ( 1 )
  {
    v6 = (unsigned __int8)(this->m_nextAvailIndex + v5);
    v7 = &this->m_infos[v6];
    if ( v7->entityNumber == 2047 )
      break;
    if ( (unsigned int)++v5 >= 0x100 )
      goto LABEL_12;
  }
  _RBX = &this->m_infos[v6];
  this->m_nextAvailIndex = (unsigned __int8)(v6 + 1);
  if ( v7 )
    goto LABEL_14;
LABEL_12:
  LODWORD(v13) = 256;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 86, ASSERT_TYPE_ASSERT, "( vinfo )", "Can't find an available slot, no more room for suspended vehicles: Max %d\n", v13) )
    __debugbreak();
LABEL_14:
  DebugWipe(_RBX, 0x5Cui64);
  _RBX->vehDefIndex = ent->vehicle->defIndex;
  number = ent->s.number;
  if ( ent->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)number, "signed", number) )
    __debugbreak();
  _RBX->entityNumber = number;
  _RBX->entityStateUn.vehicleXModel = ent->s.un.vehicleXModel;
  _RBX->usableScriptablePartCount = ent->vehicle->usableScriptablePartCount;
  _RAX = ent->vehicle;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+74Ch]
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr [rax+76Ch]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups xmm0, xmmword ptr [rax+78Ch]
    vmovups xmmword ptr [rbx+40h], xmm0
  }
  this->m_entityNumToInfo[ent->s.number] = GVehicleSuspendManager::GetInfoNumber(this, _RBX);
}

/*
==============
GVehicleSuspendManager::SetUsableInfo
==============
*/
void GVehicleSuspendManager::SetUsableInfo(GVehicleSuspendManager *this, const gentity_s *ent, unsigned __int8 usableScriptablePartCount, const VehicleUsableParts *usableScriptableParts)
{
  _RDI = usableScriptableParts;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 127, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 128, ASSERT_TYPE_ASSERT, "(usableScriptableParts)", (const char *)&queryFormat, "usableScriptableParts") )
    __debugbreak();
  if ( !GVehicleSuspendManager::IsSuspended(this, ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 129, ASSERT_TYPE_ASSERT, "(IsSuspended( ent ))", (const char *)&queryFormat, "IsSuspended( ent )") )
    __debugbreak();
  _RBX = GVehicleSuspendManager::GetSavedInfoConst(this, ent);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 133, ASSERT_TYPE_ASSERT, "(vinfo)", (const char *)&queryFormat, "vinfo") )
    __debugbreak();
  _RBX->usableScriptablePartCount = usableScriptablePartCount;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rbx+40h], xmm0
  }
}

/*
==============
GVehicleSuspendManager::SuspendVehicle
==============
*/
void GVehicleSuspendManager::SuspendVehicle(GVehicleSuspendManager *this, gentity_s *ent)
{
  entityType_s eType; 
  __int64 v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 255, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 256, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_VEHICLE )", "GVehicleSuspendManager::SuspendVehicle(): A vehicle entity is needed") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 257, ASSERT_TYPE_ASSERT, "( ent->vehicle )", "GVehicleSuspendManager::SuspendVehicle(): It needs to have a valid vehicle") )
    __debugbreak();
  GVehicleSuspendManager::SaveInfo(this, ent);
  GVehicleSuspendManager::ReuseEntity(this, ent, &scr_const.script_model);
  eType = ent->s.eType;
  if ( eType != ET_SCRIPTMOVER )
  {
    LODWORD(v5) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 267, ASSERT_TYPE_ASSERT, "( ent->s.eType ) == ( ET_SCRIPTMOVER )", "ent->s.eType == ET_SCRIPTMOVER\n\t%i, %i", v5, 6) )
      __debugbreak();
  }
  ent->s.staticState.general.xmodel |= 0x10u;
}

/*
==============
GVehicleSuspendManager::WakeUpVehicle
==============
*/
void GVehicleSuspendManager::WakeUpVehicle(GVehicleSuspendManager *this, gentity_s *ent)
{
  int health; 
  Vehicle *vehicle; 
  unsigned __int8 usableScriptablePartCount; 
  __int64 v9; 
  __int64 vehDefIndex; 
  int v11; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 274, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_SCRIPTMOVER && ent->classname == scr_const.script_model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 275, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_SCRIPTMOVER || ent->classname != scr_const.script_model )", "GVehicleSuspendManager::WakeUpVehicle(): A script mover entity is needed") )
    __debugbreak();
  if ( !GVehicleSuspendManager::IsSuspended(this, ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 276, ASSERT_TYPE_ASSERT, "( IsSuspended( ent ) )", "GVehicleSuspendManager::WakeUpVehicle(): There must be a saved vehicle info for this entity") )
    __debugbreak();
  _RDI = (GVehicleSuspendManager::SuspendInfo *)GVehicleSuspendManager::GetSavedInfoConst(this, ent);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 279, ASSERT_TYPE_ASSERT, "(vinfo)", (const char *)&queryFormat, "vinfo") )
    __debugbreak();
  __asm { vmovsd  xmm1, qword ptr [rdi+50h] }
  health = ent->health;
  v11 = *(_DWORD *)&_RDI->entityNumber;
  __asm { vmovsd  qword ptr [rsp+0A8h+vehDefIndex], xmm1 }
  GVehicleSuspendManager::ReuseEntity(this, ent, &scr_const.script_vehicle);
  G_Vehicle_Create(ent, HIDWORD(vehDefIndex), NULL, 0);
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 291, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  ent->s.staticState.general.xmodel &= ~0x10u;
  ent->s.un.vehicleXModel = vehDefIndex;
  vehicle = ent->vehicle;
  ent->health = health;
  usableScriptablePartCount = vehicle->usableScriptablePartCount;
  if ( usableScriptablePartCount != BYTE2(v11) )
  {
    LODWORD(v9) = usableScriptablePartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_suspend.cpp", 302, ASSERT_TYPE_ASSERT, "( ent->vehicle->usableScriptablePartCount ) == ( vInfoCopy.usableScriptablePartCount )", "ent->vehicle->usableScriptablePartCount == vInfoCopy.usableScriptablePartCount\n\t%i, %i", v9, BYTE2(v11)) )
      __debugbreak();
  }
  GVehicleSuspendManager::ClearSavedInfo(this, _RDI);
}

