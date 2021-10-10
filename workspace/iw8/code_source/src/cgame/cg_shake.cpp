/*
==============
Shake::Save
==============
*/

void __fastcall Shake::Save(Shake *this, MemoryFile *memFile)
{
  ?Save@Shake@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
Shake::Reset
==============
*/

void __fastcall Shake::Reset(Shake *this)
{
  ?Reset@Shake@@QEAAXXZ(this);
}

/*
==============
ShakeStateInternal::Reset
==============
*/

void __fastcall ShakeStateInternal::Reset(ShakeStateInternal *this)
{
  ?Reset@ShakeStateInternal@@QEAAXXZ(this);
}

/*
==============
ShakeImpulseManager::CalcImpulseScaleValues
==============
*/

void __fastcall ShakeImpulseManager::CalcImpulseScaleValues(ShakeImpulseManager *this, const int timeMs, const ShakeImpulse *impulse, float *outRotAmplitude, float *outRotPersistence, float *outTransAmplitude, float *outTransPersistence)
{
  ?CalcImpulseScaleValues@ShakeImpulseManager@@IEBAXHAEBUShakeImpulse@@PEAM111@Z(this, timeMs, impulse, outRotAmplitude, outRotPersistence, outTransAmplitude, outTransPersistence);
}

/*
==============
ShakeImpulseManager::CalcImpulseScaleValues
==============
*/

void __fastcall ShakeImpulseManager::CalcImpulseScaleValues(ShakeImpulseManager *this, const int timeMs, float *outRotAmplitude, float *outRotPersistence, float *outTransAmplitude, float *outTransPersistence)
{
  ?CalcImpulseScaleValues@ShakeImpulseManager@@QEBAXHPEAM000@Z(this, timeMs, outRotAmplitude, outRotPersistence, outTransAmplitude, outTransPersistence);
}

/*
==============
ShakeState::Reset
==============
*/

void __fastcall ShakeState::Reset(ShakeState *this)
{
  ?Reset@ShakeState@@QEAAXXZ(this);
}

/*
==============
CG_Shake_Save
==============
*/

void __fastcall CG_Shake_Save(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_Shake_Save@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
ShakeImpulseManager::DebugDraw
==============
*/

void __fastcall ShakeImpulseManager::DebugDraw(ShakeImpulseManager *this, const int timeMs, const unsigned int motionIndex, const bool isBlending, const ShakeFinal *shakeFinal, ShakeStateDebugDraw *debugDraw)
{
  ?DebugDraw@ShakeImpulseManager@@QEBAXHI_NAEBUShakeFinal@@PEAUShakeStateDebugDraw@@@Z(this, timeMs, motionIndex, isBlending, shakeFinal, debugDraw);
}

/*
==============
ShakeStateInternal::DebugDraw
==============
*/

void __fastcall ShakeStateInternal::DebugDraw(ShakeStateInternal *this, const char *const assetName, const CinematicShakeDef *const shakeDef, const bool isBlending, ShakeStateDebugDraw *debugDraw)
{
  ?DebugDraw@ShakeStateInternal@@QEBAXQEBDQEBUCinematicShakeDef@@_NPEAUShakeStateDebugDraw@@@Z(this, assetName, shakeDef, isBlending, debugDraw);
}

/*
==============
ShakeStateInternal::Load
==============
*/

void __fastcall ShakeStateInternal::Load(ShakeStateInternal *this, MemoryFile *memFile)
{
  ?Load@ShakeStateInternal@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakePerlinScale::Load
==============
*/

void __fastcall ShakePerlinScale::Load(ShakePerlinScale *this, MemoryFile *memFile)
{
  ?Load@ShakePerlinScale@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakeStateInternal::Save
==============
*/

void __fastcall ShakeStateInternal::Save(ShakeStateInternal *this, MemoryFile *memFile)
{
  ?Save@ShakeStateInternal@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakeStateInternal::ShakeStateInternal
==============
*/

void __fastcall ShakeStateInternal::ShakeStateInternal(ShakeStateInternal *this)
{
  ??0ShakeStateInternal@@QEAA@XZ(this);
}

/*
==============
CG_Shake_ApplyHandheldCamera
==============
*/

void __fastcall CG_Shake_ApplyHandheldCamera(const LocalClientNum_t localClientNum, const vec3_t *inHandheldTranslation, const vec3_t *inImpulseTranslation, const vec3_t *inHandheldAngles, const vec3_t *inImpulseAngles, vec3_t *inOutOrigin, vec3_t *inOutAngles)
{
  ?CG_Shake_ApplyHandheldCamera@@YAXW4LocalClientNum_t@@AEBTvec3_t@@111AEAT2@2@Z(localClientNum, inHandheldTranslation, inImpulseTranslation, inHandheldAngles, inImpulseAngles, inOutOrigin, inOutAngles);
}

/*
==============
ShakeImpulseManager::Update
==============
*/

void __fastcall ShakeImpulseManager::Update(ShakeImpulseManager *this, const LocalClientNum_t localClientNum, const int timeMs)
{
  ?Update@ShakeImpulseManager@@QEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, timeMs);
}

/*
==============
ShakeImpulseManager::AddImpulse
==============
*/

void __fastcall ShakeImpulseManager::AddImpulse(ShakeImpulseManager *this, const ShakeImpulse *impulse)
{
  ?AddImpulse@ShakeImpulseManager@@QEAAXAEBUShakeImpulse@@@Z(this, impulse);
}

/*
==============
ShakeState::Save
==============
*/

void __fastcall ShakeState::Save(ShakeState *this, MemoryFile *memFile)
{
  ?Save@ShakeState@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakePerlinScale::Update
==============
*/

void __fastcall ShakePerlinScale::Update(ShakePerlinScale *this, const float frametime, float value, const CinematicShakeModifierDef *const modifierDef)
{
  ?Update@ShakePerlinScale@@QEAAXMMQEBUCinematicShakeModifierDef@@@Z(this, frametime, value, modifierDef);
}

/*
==============
CG_Shake_Load
==============
*/

void __fastcall CG_Shake_Load(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_Shake_Load@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
Shake::AddImpulse
==============
*/

void __fastcall Shake::AddImpulse(Shake *this, const ShakeImpulse *impulse)
{
  ?AddImpulse@Shake@@QEAAXAEBUShakeImpulse@@@Z(this, impulse);
}

/*
==============
Shake::Update
==============
*/

void __fastcall Shake::Update(Shake *this, const LocalClientNum_t localClientNum, ShakeFinal *outRotation, ShakeFinal *outTranslation, ShakeFinal *outImpulseRotation, ShakeFinal *outImpulseTranslation)
{
  ?Update@Shake@@QEAAXW4LocalClientNum_t@@PEAUShakeFinal@@111@Z(this, localClientNum, outRotation, outTranslation, outImpulseRotation, outImpulseTranslation);
}

/*
==============
ShakePerlinScale::DebugDraw
==============
*/

void __fastcall ShakePerlinScale::DebugDraw(ShakePerlinScale *this, const CinematicShakeModifierDef *const modifierDef, ShakeStateDebugDraw *debugDraw, const char *name)
{
  ?DebugDraw@ShakePerlinScale@@QEBAXQEBUCinematicShakeModifierDef@@PEAUShakeStateDebugDraw@@PEBD@Z(this, modifierDef, debugDraw, name);
}

/*
==============
ShakeState::Load
==============
*/

void __fastcall ShakeState::Load(ShakeState *this, MemoryFile *memFile)
{
  ?Load@ShakeState@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakeFinal::ShakeFinal
==============
*/

void __fastcall ShakeFinal::ShakeFinal(ShakeFinal *this)
{
  ??0ShakeFinal@@QEAA@XZ(this);
}

/*
==============
ShakeState::Update
==============
*/

void __fastcall ShakeState::Update(ShakeState *this, const LocalClientNum_t localClientNum, const float frametime, const unsigned int motionIndex)
{
  ?Update@ShakeState@@QEAAXW4LocalClientNum_t@@MI@Z(this, localClientNum, frametime, motionIndex);
}

/*
==============
ShakePerlinScale::Reset
==============
*/

void __fastcall ShakePerlinScale::Reset(ShakePerlinScale *this)
{
  ?Reset@ShakePerlinScale@@QEAAXXZ(this);
}

/*
==============
ShakeImpulseManager::ShakeImpulseManager
==============
*/

void __fastcall ShakeImpulseManager::ShakeImpulseManager(ShakeImpulseManager *this)
{
  ??0ShakeImpulseManager@@QEAA@XZ(this);
}

/*
==============
ShakeStateInternal::Update
==============
*/

void __fastcall ShakeStateInternal::Update(ShakeStateInternal *this, const float frametime, const float moveValue, const float viewValue, const CinematicShakeDef *const shakeDef)
{
  ?Update@ShakeStateInternal@@QEAAXMMMQEBUCinematicShakeDef@@@Z(this, frametime, moveValue, viewValue, shakeDef);
}

/*
==============
Shake::DebugDraw
==============
*/

void __fastcall Shake::DebugDraw(Shake *this, const LocalClientNum_t localClientNum)
{
  ?DebugDraw@Shake@@QEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ShakeState::DebugDraw
==============
*/

void __fastcall ShakeState::DebugDraw(ShakeState *this, const unsigned int motionIndex, const bool isBlending, ShakeStateDebugDraw *debugDraw)
{
  ?DebugDraw@ShakeState@@QEBAXI_NPEAUShakeStateDebugDraw@@@Z(this, motionIndex, isBlending, debugDraw);
}

/*
==============
CG_Shake_Reset
==============
*/

void __fastcall CG_Shake_Reset(const LocalClientNum_t localClientNum)
{
  ?CG_Shake_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Shake_Init
==============
*/

void CG_Shake_Init(void)
{
  ?CG_Shake_Init@@YAXXZ();
}

/*
==============
Shake::Load
==============
*/

void __fastcall Shake::Load(Shake *this, MemoryFile *memFile)
{
  ?Load@Shake@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakeState::ShakeState
==============
*/

void __fastcall ShakeState::ShakeState(ShakeState *this)
{
  ??0ShakeState@@QEAA@XZ(this);
}

/*
==============
CG_Shake_CalcHandheldCamera
==============
*/

void __fastcall CG_Shake_CalcHandheldCamera(const LocalClientNum_t localClientNum, vec3_t *outHandheldTranslation, vec3_t *outImpulseTranslation, vec3_t *outHandheldAngles, vec3_t *outImpulseAngles)
{
  ?CG_Shake_CalcHandheldCamera@@YAXW4LocalClientNum_t@@AEATvec3_t@@111@Z(localClientNum, outHandheldTranslation, outImpulseTranslation, outHandheldAngles, outImpulseAngles);
}

/*
==============
CG_Shake_CalcHandheldCameraCmd
==============
*/

void __fastcall CG_Shake_CalcHandheldCameraCmd(const void *const data)
{
  ?CG_Shake_CalcHandheldCameraCmd@@YAXQEBX@Z(data);
}

/*
==============
ShakePerlinScale::Save
==============
*/

void __fastcall ShakePerlinScale::Save(ShakePerlinScale *this, MemoryFile *memFile)
{
  ?Save@ShakePerlinScale@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
ShakeImpulseManager::DebugDrawImpulse
==============
*/

void __fastcall ShakeImpulseManager::DebugDrawImpulse(ShakeImpulseManager *this, const int timeMs, const int startTimeMs, const int attackMs, const int decayMs, const ShakeImpulseDecayType decayType, const ShakeImpulseSourceType sourceType, const float amplitudeScale, const float persistenceScale, const float scale, ShakeStateDebugDraw *debugDraw)
{
  ?DebugDrawImpulse@ShakeImpulseManager@@IEBAXHHHHW4ShakeImpulseDecayType@@W4ShakeImpulseSourceType@@MMMPEAUShakeStateDebugDraw@@@Z(this, timeMs, startTimeMs, attackMs, decayMs, decayType, sourceType, amplitudeScale, persistenceScale, scale, debugDraw);
}

/*
==============
Shake::Shake
==============
*/

void __fastcall Shake::Shake(Shake *this)
{
  ??0Shake@@QEAA@XZ(this);
}

/*
==============
CG_Shake_MovingAverage
==============
*/

double __fastcall CG_Shake_MovingAverage(float previous, float goal, int blendInTimeMs, int blendOutTimeMs, float frametimeMs)
{
  double result; 

  *(float *)&result = ?CG_Shake_MovingAverage@@YAMMMHHM@Z(previous, goal, blendInTimeMs, blendOutTimeMs, frametimeMs);
  return result;
}

/*
==============
Shake::CalcConstantShakeFinalParams
==============
*/

void __fastcall Shake::CalcConstantShakeFinalParams(Shake *this, const int time, ShakeFinal *outRotation, ShakeFinal *outTranslation, ShakeFinal *outImpulseRotation, ShakeFinal *outImpulseTranslation)
{
  ?CalcConstantShakeFinalParams@Shake@@IEBAXHPEAUShakeFinal@@000@Z(this, time, outRotation, outTranslation, outImpulseRotation, outImpulseTranslation);
}

/*
==============
ShakeImpulseManager::Reset
==============
*/

void __fastcall ShakeImpulseManager::Reset(ShakeImpulseManager *this)
{
  ?Reset@ShakeImpulseManager@@QEAAXXZ(this);
}

/*
==============
CG_Shake_Impulse
==============
*/

void __fastcall CG_Shake_Impulse(const LocalClientNum_t localClientNum, ShakeImpulseSourceType impulseType, float scale)
{
  ?CG_Shake_Impulse@@YAXW4LocalClientNum_t@@W4ShakeImpulseSourceType@@M@Z(localClientNum, impulseType, scale);
}

/*
==============
ShakePerlinScale::ShakePerlinScale
==============
*/

void __fastcall ShakePerlinScale::ShakePerlinScale(ShakePerlinScale *this)
{
  ??0ShakePerlinScale@@QEAA@XZ(this);
}

/*
==============
Shake::Shake
==============
*/
void Shake::Shake(Shake *this)
{
  ShakeState *m_shakeState; 
  __int64 v3; 
  ntl::internal::pool_allocator_freelist<56> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<56> *v5; 

  m_shakeState = this->m_shakeState;
  v3 = 2i64;
  do
  {
    ShakeState::ShakeState(m_shakeState++);
    --v3;
  }
  while ( v3 );
  this->m_impulseManager.m_initialized = 0;
  p_m_freelist = &this->m_impulseManager.m_impulseList.m_freelist;
  v5 = &this->m_impulseManager.m_impulseList.m_freelist;
  do
  {
    v5 -= 7;
    v5->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v5;
  }
  while ( v5 > (ntl::internal::pool_allocator_freelist<56> *)&this->m_impulseManager.m_impulseList );
  this->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = &v5->m_head;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_prev = &this->m_impulseManager.m_impulseList.m_listHead.m_sentinel;
  this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next = &this->m_impulseManager.m_impulseList.m_listHead.m_sentinel;
  this->m_initialized = 0;
  Shake::Reset(this);
}

/*
==============
ShakeFinal::ShakeFinal
==============
*/
void ShakeFinal::ShakeFinal(ShakeFinal *this)
{
  *(_OWORD *)this->m_frequencyBase.v = 0ui64;
  *(_QWORD *)&this->m_amplitudeBase.y = 0i64;
  *(_QWORD *)this->m_persistenceBase.v = 0i64;
  this->m_persistenceBase.v[2] = 0.0;
  this->m_speedScale = 1.0;
  this->m_amplitudeScale = 1.0;
  *(_OWORD *)&this->m_persistenceScale = 0x3F800000ui64;
}

/*
==============
ShakeImpulseManager::ShakeImpulseManager
==============
*/
void ShakeImpulseManager::ShakeImpulseManager(ShakeImpulseManager *this)
{
  ntl::fixed_list<ShakeImpulse,8,0> *p_m_impulseList; 
  ntl::internal::pool_allocator_freelist<56> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<56> *v3; 

  p_m_impulseList = &this->m_impulseList;
  this->m_initialized = 0;
  p_m_freelist = &this->m_impulseList.m_freelist;
  v3 = &this->m_impulseList.m_freelist;
  do
  {
    v3 -= 7;
    v3->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v3;
  }
  while ( v3 > (ntl::internal::pool_allocator_freelist<56> *)p_m_impulseList );
  this->m_impulseList.m_freelist.m_head.mp_next = &v3->m_head;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  p_m_impulseList->m_listHead.m_sentinel.mp_prev = &p_m_impulseList->m_listHead.m_sentinel;
  p_m_impulseList->m_listHead.m_sentinel.mp_next = &p_m_impulseList->m_listHead.m_sentinel;
}

/*
==============
ShakePerlinScale::ShakePerlinScale
==============
*/
void ShakePerlinScale::ShakePerlinScale(ShakePerlinScale *this)
{
  this->m_initialized = 0;
  this->m_speedScale = 1.0;
  this->m_speedScaleInstant = 1.0;
  this->m_amplitudeScale = 1.0;
  this->m_amplitudeScaleInstant = 1.0;
  this->m_persistenceScale = 1.0;
  this->m_persistenceScaleInstant = 1.0;
  this->m_value = 0.0;
}

/*
==============
ShakeState::ShakeState
==============
*/
void ShakeState::ShakeState(ShakeState *this)
{
  this->m_rotation.m_combined.m_initialized = 0;
  this->m_rotation.m_combined.m_value = 0.0;
  this->m_rotation.m_combined.m_speedScale = 1.0;
  this->m_rotation.m_combined.m_speedScaleInstant = 1.0;
  this->m_rotation.m_combined.m_amplitudeScale = 1.0;
  this->m_rotation.m_combined.m_amplitudeScaleInstant = 1.0;
  this->m_rotation.m_combined.m_persistenceScale = 1.0;
  this->m_rotation.m_combined.m_persistenceScaleInstant = 1.0;
  this->m_rotation.m_movement.m_initialized = 0;
  this->m_rotation.m_movement.m_value = 0.0;
  this->m_rotation.m_movement.m_speedScale = 1.0;
  this->m_rotation.m_movement.m_speedScaleInstant = 1.0;
  this->m_rotation.m_movement.m_amplitudeScale = 1.0;
  this->m_rotation.m_movement.m_amplitudeScaleInstant = 1.0;
  this->m_rotation.m_movement.m_persistenceScale = 1.0;
  this->m_rotation.m_movement.m_persistenceScaleInstant = 1.0;
  this->m_rotation.m_view.m_initialized = 0;
  this->m_rotation.m_view.m_value = 0.0;
  this->m_rotation.m_view.m_speedScale = 1.0;
  this->m_rotation.m_view.m_speedScaleInstant = 1.0;
  this->m_rotation.m_view.m_amplitudeScale = 1.0;
  this->m_rotation.m_view.m_amplitudeScaleInstant = 1.0;
  this->m_rotation.m_view.m_persistenceScale = 1.0;
  this->m_rotation.m_view.m_persistenceScaleInstant = 1.0;
  this->m_translation.m_combined.m_initialized = 0;
  this->m_translation.m_combined.m_value = 0.0;
  this->m_translation.m_combined.m_speedScale = 1.0;
  this->m_translation.m_combined.m_speedScaleInstant = 1.0;
  this->m_translation.m_combined.m_amplitudeScale = 1.0;
  this->m_translation.m_combined.m_amplitudeScaleInstant = 1.0;
  this->m_translation.m_combined.m_persistenceScale = 1.0;
  this->m_translation.m_combined.m_persistenceScaleInstant = 1.0;
  this->m_translation.m_movement.m_initialized = 0;
  this->m_translation.m_movement.m_value = 0.0;
  this->m_translation.m_movement.m_speedScale = 1.0;
  this->m_translation.m_movement.m_speedScaleInstant = 1.0;
  this->m_translation.m_movement.m_amplitudeScale = 1.0;
  this->m_translation.m_movement.m_amplitudeScaleInstant = 1.0;
  this->m_translation.m_movement.m_persistenceScale = 1.0;
  this->m_translation.m_movement.m_persistenceScaleInstant = 1.0;
  this->m_translation.m_view.m_initialized = 0;
  this->m_translation.m_view.m_value = 0.0;
  this->m_translation.m_view.m_speedScale = 1.0;
  this->m_translation.m_view.m_speedScaleInstant = 1.0;
  this->m_translation.m_view.m_amplitudeScale = 1.0;
  this->m_translation.m_view.m_amplitudeScaleInstant = 1.0;
  this->m_translation.m_view.m_persistenceScale = 1.0;
  this->m_translation.m_view.m_persistenceScaleInstant = 1.0;
  this->m_rotation.m_initialized = 0;
  this->m_translation.m_initialized = 0;
  this->m_initialized = 0;
}

/*
==============
ShakeStateInternal::ShakeStateInternal
==============
*/
void ShakeStateInternal::ShakeStateInternal(ShakeStateInternal *this)
{
  this->m_combined.m_initialized = 0;
  this->m_combined.m_value = 0.0;
  this->m_combined.m_speedScale = 1.0;
  this->m_combined.m_speedScaleInstant = 1.0;
  this->m_combined.m_amplitudeScale = 1.0;
  this->m_combined.m_amplitudeScaleInstant = 1.0;
  this->m_combined.m_persistenceScale = 1.0;
  this->m_combined.m_persistenceScaleInstant = 1.0;
  this->m_movement.m_initialized = 0;
  this->m_movement.m_value = 0.0;
  this->m_movement.m_speedScale = 1.0;
  this->m_movement.m_speedScaleInstant = 1.0;
  this->m_movement.m_amplitudeScale = 1.0;
  this->m_movement.m_amplitudeScaleInstant = 1.0;
  this->m_movement.m_persistenceScale = 1.0;
  this->m_movement.m_persistenceScaleInstant = 1.0;
  this->m_view.m_initialized = 0;
  this->m_view.m_value = 0.0;
  this->m_view.m_speedScale = 1.0;
  this->m_view.m_speedScaleInstant = 1.0;
  this->m_view.m_amplitudeScale = 1.0;
  this->m_view.m_amplitudeScaleInstant = 1.0;
  this->m_view.m_persistenceScale = 1.0;
  this->m_view.m_persistenceScaleInstant = 1.0;
  this->m_initialized = 0;
}

/*
==============
Shake::AddImpulse
==============
*/
void Shake::AddImpulse(Shake *this, const ShakeImpulse *impulse)
{
  ShakeImpulseManager::AddImpulse(&this->m_impulseManager, impulse);
}

/*
==============
ShakeImpulseManager::AddImpulse
==============
*/
void ShakeImpulseManager::AddImpulse(ShakeImpulseManager *this, const ShakeImpulse *impulse)
{
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  __int64 v4; 
  ntl::internal::list_node_base *v7; 
  ntl::internal::list_node<ShakeImpulse> *v8; 
  ntl::internal::pool_allocator_freelist<56> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v10; 

  p_m_listHead = &this->m_impulseList.m_listHead;
  mp_next = this->m_impulseList.m_listHead.m_sentinel.mp_next;
  v4 = 0i64;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_impulseList.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v4;
    }
    while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
    if ( v4 == 8 )
    {
      v7 = this->m_impulseList.m_listHead.m_sentinel.mp_next;
      if ( v7 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v7 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v8 = (ntl::internal::list_node<ShakeImpulse> *)p_m_listHead->m_sentinel.mp_next;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse>>::remove(p_m_listHead, v8);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      v8->mp_prev = (ntl::internal::list_node_base *)this->m_impulseList.m_freelist.m_head.mp_next;
      this->m_impulseList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8;
    }
  }
  p_m_freelist = &this->m_impulseList.m_freelist;
  if ( !this->m_impulseList.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<56> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x38ui64, 8ui64) )
    __debugbreak();
  v10 = p_m_freelist->m_head.mp_next;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  v10->mp_next = NULL;
  v10[1].mp_next = NULL;
  *(__m256i *)&v10[2].mp_next = *(__m256i *)&impulse->m_startTimeMs;
  v10[6].mp_next = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)impulse->m_sourceType;
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse>>::insert_before(p_m_listHead, (ntl::internal::list_node<ShakeImpulse> *)p_m_listHead, (ntl::internal::list_node<ShakeImpulse> *)v10);
}

/*
==============
CG_ShakeImpulse_CalcFraction
==============
*/
float CG_ShakeImpulse_CalcFraction(const int timeMs, const int startTimeMs, const int attackMs, const int decayMs, const ShakeImpulseDecayType decayType)
{
  int v6; 
  int v9; 
  double v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int64 v18; 

  v6 = timeMs - startTimeMs;
  if ( timeMs - startTimeMs > 0 )
  {
    if ( attackMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1658, ASSERT_TYPE_ASSERT, "( 0 ) < ( attackMs )", "%s < %s\n\t%i, %i", "0", "attackMs", 0i64, attackMs) )
      __debugbreak();
    v9 = v6 - attackMs;
    if ( decayMs <= 0 )
    {
      LODWORD(v18) = decayMs;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1662, ASSERT_TYPE_ASSERT, "( 0 ) < ( decayMs )", "%s < %s\n\t%i, %i", "0", "decayMs", 0i64, v18) )
        __debugbreak();
    }
    _XMM6 = LODWORD(FLOAT_1_0);
    if ( v9 > 0 )
    {
      v12 = I_fclamp((float)v9 / (float)decayMs, 0.0, 1.0);
      v13 = LODWORD(FLOAT_1_0);
      *(float *)&v13 = 1.0 - *(float *)&v12;
      _XMM1 = v13;
    }
    else
    {
      _XMM1 = LODWORD(FLOAT_1_0);
    }
    if ( (_BYTE)decayType )
    {
      if ( (char)decayType == HALF_HALF )
      {
        v15 = _XMM1;
        *(float *)&v15 = *(float *)&_XMM1 * (float)(*(float *)&_XMM1 * *(float *)&_XMM1);
        _XMM1 = v15;
      }
      else if ( (char)decayType == LONG )
      {
        v14 = LODWORD(FLOAT_1_0);
        *(float *)&v14 = 1.0 - (float)((float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1));
        _XMM1 = v14;
      }
    }
    else
    {
      __asm
      {
        vcmpless xmm0, xmm1, xmm7
        vblendvps xmm1, xmm6, xmm7, xmm0
      }
    }
    __asm { vminss  xmm0, xmm1, xmm8 }
  }
  else
  {
    LODWORD(_XMM0) = 0;
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Shake_ApplyHandheldCamera
==============
*/
void CG_Shake_ApplyHandheldCamera(const LocalClientNum_t localClientNum, const vec3_t *inHandheldTranslation, const vec3_t *inImpulseTranslation, const vec3_t *inHandheldAngles, const vec3_t *inImpulseAngles, vec3_t *inOutOrigin, vec3_t *inOutAngles)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  float v25; 
  char v26[16]; 
  tmat33_t<vec3_t> axis; 

  if ( ((LODWORD(inOutOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(inOutOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(inOutOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 416, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] )") )
    __debugbreak();
  if ( ((LODWORD(inOutAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(inOutAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(inOutAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 417, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] )") )
    __debugbreak();
  AnglesToAxis(inOutAngles, &axis);
  if ( inHandheldTranslation == (const vec3_t *)v26 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v10 = inHandheldTranslation->v[1];
  v11 = inHandheldTranslation->v[2];
  v12 = (float)((float)(inHandheldTranslation->v[0] * axis.m[0].v[2]) + (float)(v10 * axis.m[1].v[2])) + (float)(v11 * axis.m[2].v[2]);
  v13 = (float)((float)((float)(inHandheldTranslation->v[0] * axis.m[0].v[1]) + (float)(v10 * axis.m[1].v[1])) + (float)(v11 * axis.m[2].v[1])) + inOutOrigin->v[1];
  inOutOrigin->v[0] = (float)((float)((float)(inHandheldTranslation->v[0] * axis.m[0].v[0]) + (float)(v10 * axis.m[1].v[0])) + (float)(v11 * axis.m[2].v[0])) + inOutOrigin->v[0];
  inOutOrigin->v[2] = v12 + inOutOrigin->v[2];
  inOutOrigin->v[1] = v13;
  if ( inImpulseTranslation == (const vec3_t *)v26 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v14 = inImpulseTranslation->v[1];
  v15 = inImpulseTranslation->v[2];
  v16 = (float)((float)((float)(inImpulseTranslation->v[0] * axis.m[0].v[1]) + (float)(v14 * axis.m[1].v[1])) + (float)(v15 * axis.m[2].v[1])) + inOutOrigin->v[1];
  v17 = (float)((float)((float)(inImpulseTranslation->v[0] * axis.m[0].v[2]) + (float)(v14 * axis.m[1].v[2])) + (float)(v15 * axis.m[2].v[2])) + inOutOrigin->v[2];
  v25 = (float)((float)((float)(inImpulseTranslation->v[0] * axis.m[0].v[0]) + (float)(v14 * axis.m[1].v[0])) + (float)(v15 * axis.m[2].v[0])) + inOutOrigin->v[0];
  inOutOrigin->v[0] = v25;
  inOutOrigin->v[1] = v16;
  inOutOrigin->v[2] = v17;
  if ( (LODWORD(v25) & 0x7F800000) == 2139095040 || (v25 = v16, (LODWORD(v16) & 0x7F800000) == 2139095040) || (v25 = v17, (LODWORD(v17) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 427, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] )", v25) )
      __debugbreak();
  }
  v18 = inHandheldAngles->v[0] + inOutAngles->v[0];
  inOutAngles->v[0] = v18;
  v19 = inHandheldAngles->v[1] + inOutAngles->v[1];
  inOutAngles->v[1] = v19;
  v20 = inHandheldAngles->v[2] + inOutAngles->v[2];
  inOutAngles->v[2] = v20;
  v21 = v18 + inImpulseAngles->v[0];
  inOutAngles->v[0] = v21;
  v22 = v19 + inImpulseAngles->v[1];
  inOutAngles->v[1] = v22;
  v23 = v20 + inImpulseAngles->v[2];
  *(float *)&v24 = v21;
  inOutAngles->v[2] = v23;
  if ( (LODWORD(v21) & 0x7F800000) == 2139095040 || (*(float *)&v24 = v22, (LODWORD(v22) & 0x7F800000) == 2139095040) || (*(float *)&v24 = v23, (LODWORD(v23) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 432, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] )", v24) )
      __debugbreak();
  }
}

/*
==============
CG_Shake_BlendValues
==============
*/

float __fastcall CG_Shake_BlendValues(double a, const float b, const CinematicShakeModifierCombineType type)
{
  __int32 v5; 

  _XMM7 = *(_OWORD *)&a;
  if ( (unsigned int)type >= (COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1009, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( type ) ) < (unsigned)( static_cast<int>( CinematicShakeModifierCombineType::COUNT ) )", "static_cast<int>( type ) doesn't index static_cast<int>( CinematicShakeModifierCombineType::COUNT )\n\t%i not in [0, %i)", type, 3) )
    __debugbreak();
  v5 = type - 1;
  if ( !v5 )
    return (float)(*(float *)&a + b) * 0.5;
  if ( v5 == 1 )
    return *(float *)&a * b;
  __asm { vmaxss  xmm0, xmm7, xmm6 }
  return *(float *)&a;
}

/*
==============
CG_Shake_CalcHandheldCamera
==============
*/
void CG_Shake_CalcHandheldCamera(const LocalClientNum_t localClientNum, vec3_t *outHandheldTranslation, vec3_t *outImpulseTranslation, vec3_t *outHandheldAngles, vec3_t *outImpulseAngles)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  const dvar_t *v8; 
  CgWeaponMap *Instance; 
  Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  __int128 correctedWeaponPosFrac_low; 
  int v15; 
  int v16; 
  vec3_t *v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  int v22; 
  __int64 v23; 
  float v24; 
  __int128 v25; 
  const dvar_t *v26; 
  char enabled; 
  float *v28; 
  char *v29; 
  __int128 v30; 
  __int128 v31; 
  int v32; 
  __int128 v33; 
  float v34; 
  float v35; 
  const dvar_t *v36; 
  float value; 
  float v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  float v42; 
  float v43; 
  const CameraDef *Def; 
  float handheldCameraTransScale; 
  float handheldCameraRotScale; 
  float handheldCameraImpulseTransScale; 
  float handheldCameraImpulseRotScale; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  cg_t *LocalClientGlobals; 
  bool outIsAlternate; 
  char v55; 
  LocalClientNum_t localClientNuma; 
  float outAdsRotationScale; 
  float outAdsTranslationScale; 
  Weapon *weapon; 
  vec3_t *v60; 
  ShakeFinal outRotation; 
  ShakeFinal outTranslation; 
  ShakeFinal outImpulseRotation; 
  ShakeFinal shakeFinal; 
  __int128 v65; 
  __int128 v66; 

  v8 = DCONST_DVARBOOL_handheldCameraEnabled;
  localClientNuma = localClientNum;
  v60 = outImpulseTranslation;
  if ( !DCONST_DVARBOOL_handheldCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 287, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x1Fu) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x20u) )
    {
      v66 = v6;
      v65 = v7;
      Instance = CgWeaponMap::GetInstance(localClientNuma);
      ViewmodelOrOffhandADSSupportWeapon = (Weapon *)BG_GetViewmodelOrOffhandADSSupportWeapon(Instance, &LocalClientGlobals->predictedPlayerState, &outIsAlternate);
      correctedWeaponPosFrac_low = LODWORD(LocalClientGlobals->weaponPosFracAnimData.correctedWeaponPosFrac);
      weapon = ViewmodelOrOffhandADSSupportWeapon;
      if ( BG_IsUsingOffhandGestureWeaponADSSupport(Instance, &LocalClientGlobals->predictedPlayerState) )
      {
        *(double *)&v5 = BG_GetOffhandAdsFrac(&LocalClientGlobals->predictedPlayerState);
        correctedWeaponPosFrac_low = v5;
      }
      v15 = 0;
      *(__m256i *)outRotation.m_frequencyBase.v = (__m256i)0i64;
      *(__m256i *)outTranslation.m_frequencyBase.v = (__m256i)0i64;
      *(_QWORD *)&outRotation.m_xCoord.xy.y = 0i64;
      outRotation.m_xCoord.v[0] = 0;
      *(_QWORD *)&outTranslation.m_xCoord.xy.y = 0i64;
      *(_OWORD *)&outRotation.m_persistenceBase.z = _xmm;
      *(_OWORD *)&outTranslation.m_persistenceBase.z = _xmm;
      outTranslation.m_xCoord.v[0] = 0;
      *(__m256i *)outImpulseRotation.m_frequencyBase.v = (__m256i)0i64;
      *(_OWORD *)&outImpulseRotation.m_persistenceBase.z = _xmm;
      *(_QWORD *)&outImpulseRotation.m_xCoord.xy.y = 0i64;
      outImpulseRotation.m_xCoord.v[0] = 0;
      *(__m256i *)shakeFinal.m_frequencyBase.v = (__m256i)0i64;
      *(_OWORD *)&shakeFinal.m_persistenceBase.z = _xmm;
      *(_QWORD *)&shakeFinal.m_xCoord.xy.y = 0i64;
      shakeFinal.m_xCoord.v[0] = 0;
      Shake::Update(&LocalClientGlobals->viewShake, localClientNuma, &outRotation, &outTranslation, &outImpulseRotation, &shakeFinal);
      BG_GetADSHandheldCamScale(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->scopeToggleInfo.fractionInfo, weapon, outIsAlternate, &outAdsRotationScale, &outAdsTranslationScale);
      v20 = correctedWeaponPosFrac_low;
      v16 = 0;
      v17 = outHandheldTranslation;
      v18 = (float)(*(float *)&correctedWeaponPosFrac_low * outAdsRotationScale) + (float)(1.0 - *(float *)&correctedWeaponPosFrac_low);
      *(float *)&v20 = (float)(*(float *)&correctedWeaponPosFrac_low * outAdsTranslationScale) + (float)(1.0 - *(float *)&correctedWeaponPosFrac_low);
      v19 = *(float *)&v20;
      do
      {
        v21 = CG_Shake_CalcPerlinNoise(SHAKE_ROTATION_SEED, v16, &outRotation);
        v22 = SHAKE_TRANSLATION_SEED;
        *(float *)((char *)v17->v + (char *)outHandheldAngles - (char *)outHandheldTranslation) = v21;
        v17->v[0] = CG_Shake_CalcPerlinNoise(v22, v16, &outTranslation);
        v17 = (vec3_t *)((char *)v17 + 4);
        ++v16;
      }
      while ( v16 < 3 );
      v23 = (__int64)v60;
      if ( ((LODWORD(outHandheldAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outHandheldAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outHandheldAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 332, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outHandheldAngles )[0] ) && !IS_NAN( ( outHandheldAngles )[1] ) && !IS_NAN( ( outHandheldAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outHandheldAngles )[0] ) && !IS_NAN( ( outHandheldAngles )[1] ) && !IS_NAN( ( outHandheldAngles )[2] )") )
        __debugbreak();
      if ( ((LODWORD(outHandheldTranslation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outHandheldTranslation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outHandheldTranslation->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outHandheldTranslation )[0] ) && !IS_NAN( ( outHandheldTranslation )[1] ) && !IS_NAN( ( outHandheldTranslation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outHandheldTranslation )[0] ) && !IS_NAN( ( outHandheldTranslation )[1] ) && !IS_NAN( ( outHandheldTranslation )[2] )") )
        __debugbreak();
      outHandheldAngles->v[0] = v18 * outHandheldAngles->v[0];
      outHandheldAngles->v[1] = v18 * outHandheldAngles->v[1];
      outHandheldAngles->v[2] = v18 * outHandheldAngles->v[2];
      v24 = *(float *)&v20 * outHandheldTranslation->v[0];
      outHandheldTranslation->v[1] = *(float *)&v20 * outHandheldTranslation->v[1];
      *(float *)&v20 = *(float *)&v20 * outHandheldTranslation->v[2];
      v25 = v20;
      outHandheldTranslation->v[2] = *(float *)&v20;
      outHandheldTranslation->v[0] = v24;
      *(_QWORD *)outImpulseAngles->v = 0i64;
      outImpulseAngles->v[2] = 0.0;
      *(_QWORD *)v23 = 0i64;
      *(_DWORD *)(v23 + 8) = 0;
      v26 = DCONST_DVARBOOL_handheldCameraImpulsesEnabled;
      if ( !DCONST_DVARBOOL_handheldCameraImpulsesEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulsesEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      enabled = v26->current.enabled;
      v55 = enabled;
      if ( enabled )
      {
        v28 = (float *)v23;
        v29 = (char *)outImpulseAngles - v23;
        do
        {
          *(float *)&v25 = CG_Shake_CalcPerlinNoise(SHAKE_ROTATION_IMPULSE_SEED, v15, &outImpulseRotation);
          v31 = v25;
          *(float *)&v31 = *(float *)&v25 + *(float *)((char *)v28 + (_QWORD)v29);
          v30 = v31;
          v32 = SHAKE_TRANSLATION_IMPULSE_SEED;
          *(float *)((char *)v28 + (_QWORD)v29) = *(float *)&v31;
          *(float *)&v30 = CG_Shake_CalcPerlinNoise(v32, v15, &shakeFinal);
          v33 = v30;
          *(float *)&v33 = *(float *)&v30 + *v28;
          v25 = v33;
          ++v15;
          *v28++ = *(float *)&v33;
        }
        while ( v15 < 3 );
        if ( ((LODWORD(outImpulseAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outImpulseAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outImpulseAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 351, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outImpulseAngles )[0] ) && !IS_NAN( ( outImpulseAngles )[1] ) && !IS_NAN( ( outImpulseAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outImpulseAngles )[0] ) && !IS_NAN( ( outImpulseAngles )[1] ) && !IS_NAN( ( outImpulseAngles )[2] )") )
          __debugbreak();
        if ( ((*(_DWORD *)v23 & 0x7F800000) == 2139095040 || (*(_DWORD *)(v23 + 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v23 + 8) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 352, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outImpulseTranslation )[0] ) && !IS_NAN( ( outImpulseTranslation )[1] ) && !IS_NAN( ( outImpulseTranslation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outImpulseTranslation )[0] ) && !IS_NAN( ( outImpulseTranslation )[1] ) && !IS_NAN( ( outImpulseTranslation )[2] )") )
          __debugbreak();
        v34 = v18 * outImpulseAngles->v[1];
        enabled = v55;
        outImpulseAngles->v[0] = v18 * outImpulseAngles->v[0];
        outImpulseAngles->v[2] = v18 * outImpulseAngles->v[2];
        outImpulseAngles->v[1] = v34;
        v35 = v19 * *(float *)(v23 + 4);
        *(float *)v23 = v19 * *(float *)v23;
        *(float *)(v23 + 8) = v19 * *(float *)(v23 + 8);
        *(float *)(v23 + 4) = v35;
      }
      v36 = DVARFLT_handheldCameraRotationScale;
      if ( !DVARFLT_handheldCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRotationScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      value = v36->current.value;
      if ( value != 1.0 )
      {
        v38 = value * outHandheldAngles->v[1];
        outHandheldAngles->v[0] = value * outHandheldAngles->v[0];
        outHandheldAngles->v[2] = value * outHandheldAngles->v[2];
        outHandheldAngles->v[1] = v38;
        if ( enabled )
        {
          v39 = value * outImpulseAngles->v[1];
          outImpulseAngles->v[0] = value * outImpulseAngles->v[0];
          outImpulseAngles->v[2] = value * outImpulseAngles->v[2];
          outImpulseAngles->v[1] = v39;
        }
      }
      v40 = DVARFLT_handheldCameraTranslationScale;
      if ( !DVARFLT_handheldCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraTranslationScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      v41 = v40->current.value;
      if ( v41 != 1.0 )
      {
        v42 = v41 * outHandheldTranslation->v[1];
        outHandheldTranslation->v[0] = v41 * outHandheldTranslation->v[0];
        outHandheldTranslation->v[2] = v41 * outHandheldTranslation->v[2];
        outHandheldTranslation->v[1] = v42;
        if ( enabled )
        {
          v43 = v41 * *(float *)(v23 + 4);
          *(float *)v23 = v41 * *(float *)v23;
          *(float *)(v23 + 8) = v41 * *(float *)(v23 + 8);
          *(float *)(v23 + 4) = v43;
        }
      }
      Def = CG_Camera_Active_TryGetDef(localClientNuma);
      if ( Def )
      {
        if ( Def->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
        {
          handheldCameraTransScale = Def->firstPerson.handheldCameraTransScale;
          handheldCameraRotScale = Def->firstPerson.handheldCameraRotScale;
          handheldCameraImpulseTransScale = Def->firstPerson.handheldCameraImpulseTransScale;
          handheldCameraImpulseRotScale = Def->firstPerson.handheldCameraImpulseRotScale;
          if ( handheldCameraTransScale != 1.0 || handheldCameraRotScale != 1.0 || handheldCameraImpulseTransScale != 1.0 || handheldCameraImpulseRotScale != 1.0 )
          {
            v49 = handheldCameraRotScale * outHandheldAngles->v[1];
            outHandheldAngles->v[0] = handheldCameraRotScale * outHandheldAngles->v[0];
            outHandheldAngles->v[2] = handheldCameraRotScale * outHandheldAngles->v[2];
            outHandheldAngles->v[1] = v49;
            v50 = handheldCameraTransScale * outHandheldTranslation->v[1];
            outHandheldTranslation->v[0] = handheldCameraTransScale * outHandheldTranslation->v[0];
            outHandheldTranslation->v[2] = handheldCameraTransScale * outHandheldTranslation->v[2];
            outHandheldTranslation->v[1] = v50;
            if ( enabled )
            {
              v51 = handheldCameraImpulseRotScale * outImpulseAngles->v[1];
              outImpulseAngles->v[0] = handheldCameraImpulseRotScale * outImpulseAngles->v[0];
              outImpulseAngles->v[2] = handheldCameraImpulseRotScale * outImpulseAngles->v[2];
              outImpulseAngles->v[1] = v51;
              v52 = handheldCameraImpulseTransScale * *(float *)(v23 + 4);
              *(float *)v23 = handheldCameraImpulseTransScale * *(float *)v23;
              *(float *)(v23 + 8) = handheldCameraImpulseTransScale * *(float *)(v23 + 8);
              *(float *)(v23 + 4) = v52;
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_Shake_CalcHandheldCameraCmd
==============
*/
void CG_Shake_CalcHandheldCameraCmd(const void *const data)
{
  CG_Shake_CalcHandheldCamera(*(const LocalClientNum_t *)data, *((vec3_t **)data + 1), (vec3_t *)(*((_QWORD *)data + 1) + 12i64), (vec3_t *)(*((_QWORD *)data + 1) + 24i64), (vec3_t *)(*((_QWORD *)data + 1) + 36i64));
}

/*
==============
CG_Shake_CalcPerlinNoise
==============
*/
float CG_Shake_CalcPerlinNoise(const int seed, const int axis, const ShakeFinal *shakeFinal)
{
  __int64 v3; 
  float v6; 
  double PerlinNoise2dValue; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int v10; 
  __int128 v11; 
  int v13; 
  int integer; 
  float v15; 
  float v16; 
  int v17; 
  __int64 gridSize; 
  __int64 x; 
  __int64 y; 

  v3 = axis;
  if ( (unsigned int)axis >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
    __debugbreak();
  v6 = shakeFinal->m_amplitudeBase.v[v3] * shakeFinal->m_amplitudeScale;
  if ( v6 > 0.0 )
  {
    v8 = DCONST_DVARINT_handheldCameraRepeatPeriodMs;
    if ( !DCONST_DVARINT_handheldCameraRepeatPeriodMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRepeatPeriodMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = DCONST_DVARINT_handheldCameraOctaves;
    v10 = v3 + seed;
    v11 = 0i64;
    *(float *)&v11 = (float)v8->current.integer * SHAKE_COMPENSATION_FACTOR;
    _XMM1 = v11;
    v13 = (int)*(float *)&v11;
    if ( !DCONST_DVARINT_handheldCameraOctaves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraOctaves") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    v15 = 0.001 / SHAKE_COMPENSATION_FACTOR;
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(x) = 3;
      LODWORD(gridSize) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", gridSize, x) )
        __debugbreak();
    }
    v16 = shakeFinal->m_persistenceBase.v[v3] * shakeFinal->m_persistenceScale;
    v17 = base_vec3_t<int>::operator[](&shakeFinal->m_xCoord, v3);
    if ( v15 <= 0.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 664, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frequency )", "%s < %s\n\t%g, %g", "0.0f", "frequency", *(double *)&_XMM1, v15) )
        __debugbreak();
    }
    if ( (unsigned int)(integer - 1) > 7 )
    {
      LODWORD(y) = 8;
      LODWORD(x) = 1;
      LODWORD(gridSize) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 665, ASSERT_TYPE_ASSERT, "( 1 ) <= ( octaves ) && ( octaves ) <= ( (8) )", "octaves not in [1, MAX_PERLIN_NOISE_OCTAVES]\n\t%i not in [%i, %i]", gridSize, x, y) )
        __debugbreak();
    }
    if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 666, ASSERT_TYPE_ASSERT, "(gridSize > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSize > 0") )
      __debugbreak();
    if ( (v17 < 0 || v17 >= v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 667, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSize") )
      __debugbreak();
    if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 668, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSize") )
      __debugbreak();
    PerlinNoise2dValue = HavokPhysics_GetPerlinNoise2dValue(v10, v15, v6, integer, v16, v13, v17, 0);
  }
  else
  {
    LODWORD(PerlinNoise2dValue) = 0;
  }
  return *(float *)&PerlinNoise2dValue;
}

/*
==============
CG_Shake_CalcXCoord
==============
*/
__int64 CG_Shake_CalcXCoord(const int prevXCoord, const float frametimeMs, const int axis, ShakeFinal *shakeFinal)
{
  __int64 v4; 
  float v7; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  __int64 v12; 
  __int64 v14; 
  int v15; 

  v4 = axis;
  if ( (unsigned int)axis >= 3 )
  {
    v15 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( axis ) < (unsigned)( 3 )", "axis doesn't index 3\n\t%i not in [0, %i)", axis, v15) )
      __debugbreak();
  }
  if ( frametimeMs <= 0.0 )
    return (unsigned int)prevXCoord;
  if ( (unsigned int)v4 >= 3 )
  {
    LODWORD(v14) = 3;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  v7 = (float)((float)(shakeFinal->m_frequencyBase.v[v4] * shakeFinal->m_speedScale) * SHAKE_COMPENSATION_FACTOR) * frametimeMs;
  if ( (int)v7 <= 0 )
    return (unsigned int)prevXCoord;
  v8 = I_clamp((int)v7 + prevXCoord, 0, 0x7FFFFFFF);
  v9 = DCONST_DVARINT_handheldCameraRepeatPeriodMs;
  v10 = v8;
  if ( !DCONST_DVARINT_handheldCameraRepeatPeriodMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRepeatPeriodMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  return (unsigned int)(v10 % (int)(float)((float)v9->current.integer * SHAKE_COMPENSATION_FACTOR));
}

/*
==============
CG_Shake_GetScriptOverride
==============
*/
float CG_Shake_GetScriptOverride(const LocalClientNum_t localClientNum, const float value, const CinematicShakeOmnvarType omnvarType, const CinematicShakeModifierDef *modifierDef)
{
  __int64 v4; 
  unsigned int v7; 
  OmnvarData *Data; 

  v4 = omnvarType;
  if ( (unsigned int)omnvarType >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 836, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(omnvarType) ) < (unsigned)( ( sizeof( *array_counter( s_omnvarIndices ) ) + 0 ) )", "static_cast<int>(omnvarType) doesn't index ARRAY_COUNT( s_omnvarIndices )\n\t%i not in [0, %i)", omnvarType, 4) )
    __debugbreak();
  if ( !modifierDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 837, ASSERT_TYPE_ASSERT, "( modifierDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "modifierDef", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( modifierDef->type != COUNT )
    return value;
  v7 = s_omnvarIndices_0[v4];
  if ( v7 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 847, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Shake_GetScriptOverride(): 'Script Control' handheld camera settings require omnvar '%s' to be defined.", cg_shakeOmnvarNames[v4]) )
      __debugbreak();
    return value;
  }
  Data = CG_Omnvar_GetData(localClientNum, v7);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 852, ASSERT_TYPE_ASSERT, "( omnvarData ) != ( nullptr )", "%s != %s\n\t%p, %p", "omnvarData", "nullptr", NULL, NULL) )
    __debugbreak();
  return Data->current.value;
}

/*
==============
CG_Shake_Impulse
==============
*/
void CG_Shake_Impulse(const LocalClientNum_t localClientNum, ShakeImpulseSourceType impulseType, float scale)
{
  char v3; 
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  bool enabled; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  const dvar_t *v23; 
  char v24; 
  const dvar_t *v25; 
  float v26; 
  const dvar_t *v27; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  const dvar_t *v31; 
  float v32; 
  const dvar_t *v33; 
  int v34; 
  const dvar_t *v35; 
  int v36; 
  const dvar_t *v37; 
  char v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  const dvar_t *v43; 
  float v44; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  int v48; 
  const dvar_t *v49; 
  int v50; 
  const dvar_t *v51; 
  char v52; 
  const dvar_t *v53; 
  float v54; 
  const dvar_t *v55; 
  float v56; 
  const dvar_t *v57; 
  float v58; 
  const dvar_t *v59; 
  float v60; 
  const dvar_t *v61; 
  int v62; 
  const dvar_t *v63; 
  int v64; 
  const dvar_t *v65; 
  char v66; 
  const dvar_t *v67; 
  float v68; 
  const dvar_t *v69; 
  float v70; 
  const dvar_t *v71; 
  float v72; 
  const dvar_t *v73; 
  float v74; 
  cg_t *LocalClientGlobals; 
  int time; 
  double v77; 
  ShakeImpulse impulse; 
  _DWORD v79[3]; 
  bool v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  _BYTE v85[4]; 
  float v86; 
  int v87; 
  int v88; 
  int v89; 
  char v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  char v95; 
  float v96; 
  int v97; 
  int v98; 
  int v99; 
  char v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  char v105; 
  float v106; 
  int v107; 
  int v108; 
  int v109; 
  char v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  char v115; 
  float v116; 
  int v117; 
  int v118; 
  int v119; 
  char v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  char v125; 
  float v126; 

  v3 = impulseType;
  if ( scale > 0.0 )
  {
    v5 = DCONST_DVARINT_handheldCameraImpulseLandingAttackMs;
    v79[0] = 0;
    if ( !DCONST_DVARINT_handheldCameraImpulseLandingAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    integer = v5->current.integer;
    v7 = DCONST_DVARINT_handheldCameraImpulseLandingDecayMs;
    v79[1] = integer;
    if ( !DCONST_DVARINT_handheldCameraImpulseLandingDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.integer;
    v9 = DCONST_DVARINT_handheldCameraImpulseLandingDecayType;
    v79[2] = v8;
    if ( !DCONST_DVARINT_handheldCameraImpulseLandingDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    enabled = v9->current.enabled;
    v11 = DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale;
    v80 = enabled;
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
    v13 = DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale;
    v81 = value;
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = v13->current.value;
    v15 = DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale;
    v82 = v14;
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.value;
    v17 = DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale;
    v83 = v16;
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.value;
    v19 = DCONST_DVARINT_handheldCameraImpulseSlideAttackMs;
    v85[0] = v3;
    v87 = 0;
    v84 = v18;
    v86 = FLOAT_1_0;
    if ( !DCONST_DVARINT_handheldCameraImpulseSlideAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.integer;
    v21 = DCONST_DVARINT_handheldCameraImpulseSlideDecayMs;
    v88 = v20;
    if ( !DCONST_DVARINT_handheldCameraImpulseSlideDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = v21->current.integer;
    v23 = DCONST_DVARINT_handheldCameraImpulseSlideDecayType;
    v89 = v22;
    if ( !DCONST_DVARINT_handheldCameraImpulseSlideDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v24 = v23->current.enabled;
    v25 = DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale;
    v90 = v24;
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = v25->current.value;
    v27 = DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale;
    v91 = v26;
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = v27->current.value;
    v29 = DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale;
    v92 = v28;
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = v29->current.value;
    v31 = DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale;
    v93 = v30;
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v32 = v31->current.value;
    v33 = DCONST_DVARINT_handheldCameraImpulseDamageAttackMs;
    v95 = v3;
    v97 = 0;
    v94 = v32;
    v96 = FLOAT_1_0;
    if ( !DCONST_DVARINT_handheldCameraImpulseDamageAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v34 = v33->current.integer;
    v35 = DCONST_DVARINT_handheldCameraImpulseDamageDecayMs;
    v98 = v34;
    if ( !DCONST_DVARINT_handheldCameraImpulseDamageDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = v35->current.integer;
    v37 = DCONST_DVARINT_handheldCameraImpulseDamageDecayType;
    v99 = v36;
    if ( !DCONST_DVARINT_handheldCameraImpulseDamageDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = v37->current.enabled;
    v39 = DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale;
    v100 = v38;
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v39->current.value;
    v41 = DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale;
    v101 = v40;
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = v41->current.value;
    v43 = DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale;
    v102 = v42;
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v44 = v43->current.value;
    v45 = DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale;
    v103 = v44;
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    v46 = v45->current.value;
    v47 = DCONST_DVARINT_handheldCameraImpulseImpactAttackMs;
    v105 = v3;
    v107 = 0;
    v104 = v46;
    v106 = FLOAT_1_0;
    if ( !DCONST_DVARINT_handheldCameraImpulseImpactAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    v48 = v47->current.integer;
    v49 = DCONST_DVARINT_handheldCameraImpulseImpactDecayMs;
    v108 = v48;
    if ( !DCONST_DVARINT_handheldCameraImpulseImpactDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    v50 = v49->current.integer;
    v51 = DCONST_DVARINT_handheldCameraImpulseImpactDecayType;
    v109 = v50;
    if ( !DCONST_DVARINT_handheldCameraImpulseImpactDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    v52 = v51->current.enabled;
    v53 = DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale;
    v110 = v52;
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v54 = v53->current.value;
    v55 = DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale;
    v111 = v54;
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v56 = v55->current.value;
    v57 = DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale;
    v112 = v56;
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    v58 = v57->current.value;
    v59 = DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale;
    v113 = v58;
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    v60 = v59->current.value;
    v61 = DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs;
    v117 = 0;
    v115 = v3;
    v114 = v60;
    v116 = FLOAT_1_0;
    if ( !DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    v62 = v61->current.integer;
    v63 = DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs;
    v118 = v62;
    if ( !DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    v64 = v63->current.integer;
    v65 = DCONST_DVARINT_handheldCameraImpulseFootstepDecayType;
    v119 = v64;
    if ( !DCONST_DVARINT_handheldCameraImpulseFootstepDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v65);
    v66 = v65->current.enabled;
    v67 = DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale;
    v120 = v66;
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v67);
    v68 = v67->current.value;
    v69 = DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale;
    v121 = v68;
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    v70 = v69->current.value;
    v71 = DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale;
    v122 = v70;
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v71);
    v72 = v71->current.value;
    v73 = DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale;
    v123 = v72;
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    v74 = v73->current.value;
    v125 = v3;
    v124 = v74;
    v126 = FLOAT_1_0;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    time = LocalClientGlobals->time;
    v77 = *(double *)&v85[40 * v3];
    *(__m256i *)&impulse.m_startTimeMs = *(__m256i *)&v79[10 * v3];
    *(double *)impulse.m_sourceType = v77;
    impulse.m_rotAmplitudeScale = scale * impulse.m_rotAmplitudeScale;
    impulse.m_transAmplitudeScale = scale * impulse.m_transAmplitudeScale;
    impulse.m_rotPersistenceScale = (float)((float)(impulse.m_rotPersistenceScale - 1.0) * scale) + 1.0;
    impulse.m_startTimeMs = time;
    impulse.m_sourceType[0] = v3;
    impulse.m_transPersistenceScale = (float)((float)(impulse.m_transPersistenceScale - 1.0) * scale) + 1.0;
    impulse.m_scale = scale;
    ShakeImpulseManager::AddImpulse(&LocalClientGlobals->viewShake.m_impulseManager, &impulse);
  }
}

/*
==============
CG_Shake_Init
==============
*/
void CG_Shake_Init(void)
{
  unsigned int *v0; 
  const char **v1; 
  unsigned int IndexByName; 

  v0 = s_omnvarIndices_0;
  v1 = cg_shakeOmnvarNames;
  do
  {
    IndexByName = BG_Omnvar_GetIndexByName(*v1++);
    *v0++ = IndexByName;
  }
  while ( (__int64)v1 < (__int64)&cg_shakeOmnvarNames[4] );
}

/*
==============
CG_Shake_Load
==============
*/
void CG_Shake_Load(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Shake::Load(&LocalClientGlobals->viewShake, memFile);
}

/*
==============
CG_Shake_MovingAverage
==============
*/
float CG_Shake_MovingAverage(float previous, float goal, int blendInTimeMs, int blendOutTimeMs, float frametimeMs)
{
  float v9; 

  if ( goal > previous )
    blendOutTimeMs = blendInTimeMs;
  if ( frametimeMs <= 0.0 )
  {
    __asm { vxorpd  xmm2, xmm2, xmm2 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1207, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frametimeMs )", "%s < %s\n\t%g, %g", "0.0f", "frametimeMs", *(double *)&_XMM2, frametimeMs) )
      __debugbreak();
  }
  v9 = (float)blendOutTimeMs / frametimeMs;
  if ( v9 > 1.0 )
    return (float)(previous - (float)((float)(1.0 / v9) * previous)) + (float)((float)(1.0 / v9) * goal);
  else
    return goal;
}

/*
==============
CG_Shake_Reset
==============
*/
void CG_Shake_Reset(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Shake::Reset(&LocalClientGlobals->viewShake);
}

/*
==============
CG_Shake_Save
==============
*/
void CG_Shake_Save(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Shake::Save(&LocalClientGlobals->viewShake, memFile);
}

/*
==============
Shake::CalcConstantShakeFinalParams
==============
*/
void Shake::CalcConstantShakeFinalParams(Shake *this, const int time, ShakeFinal *outRotation, ShakeFinal *outTranslation, ShakeFinal *outImpulseRotation, ShakeFinal *outImpulseTranslation)
{
  int v8; 
  const CinematicMotionDef *CinematicMotionDef; 
  float *v11; 
  int v12; 
  __int128 v13; 
  double v14; 
  const CinematicMotionDef *v15; 
  ShakeFinal *v16; 
  ShakeFinal *v17; 
  float v18; 
  __int64 v19; 
  float v20; 
  __int64 v21; 
  __int128 v23; 
  float m_persistenceScale; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *i; 
  int mp_prev; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  ShakeImpulseDecayType fmt; 
  int m_curStateIndex; 

  v8 = time;
  CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(this->m_curMotionIndex);
  v11 = (float *)CinematicMotionDef;
  if ( this->m_curMotionIndex == this->m_goalMotionIndex )
  {
    v13 = 0i64;
    if ( CinematicMotionDef )
    {
      outRotation->m_frequencyBase.v[0] = CinematicMotionDef->camera_shake_rotation.frequency.v[0];
      outRotation->m_frequencyBase.v[1] = CinematicMotionDef->camera_shake_rotation.frequency.v[1];
      outRotation->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_rotation.frequency.v[2];
      outRotation->m_amplitudeBase.v[0] = CinematicMotionDef->camera_shake_rotation.amplitude.v[0];
      outRotation->m_amplitudeBase.v[1] = CinematicMotionDef->camera_shake_rotation.amplitude.v[1];
      outRotation->m_amplitudeBase.v[2] = CinematicMotionDef->camera_shake_rotation.amplitude.v[2];
      outRotation->m_persistenceBase.v[0] = CinematicMotionDef->camera_shake_rotation.persistence.v[0];
      outRotation->m_persistenceBase.v[1] = CinematicMotionDef->camera_shake_rotation.persistence.v[1];
      outRotation->m_persistenceBase.v[2] = CinematicMotionDef->camera_shake_rotation.persistence.v[2];
      outTranslation->m_frequencyBase.v[0] = CinematicMotionDef->camera_shake_translation.frequency.v[0];
      outTranslation->m_frequencyBase.v[1] = CinematicMotionDef->camera_shake_translation.frequency.v[1];
      outTranslation->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_translation.frequency.v[2];
      outTranslation->m_amplitudeBase.v[0] = CinematicMotionDef->camera_shake_translation.amplitude.v[0];
      outTranslation->m_amplitudeBase.v[1] = CinematicMotionDef->camera_shake_translation.amplitude.v[1];
      outTranslation->m_amplitudeBase.v[2] = CinematicMotionDef->camera_shake_translation.amplitude.v[2];
      v16 = outImpulseRotation;
      v17 = outImpulseTranslation;
      outTranslation->m_persistenceBase.v[0] = CinematicMotionDef->camera_shake_translation.persistence.v[0];
      outTranslation->m_persistenceBase.v[1] = CinematicMotionDef->camera_shake_translation.persistence.v[1];
      outTranslation->m_persistenceBase.v[2] = CinematicMotionDef->camera_shake_translation.persistence.v[2];
      *(_QWORD *)outImpulseRotation->m_frequencyBase.v = *(_QWORD *)CinematicMotionDef->camera_shake_impact_rotation.frequency.v;
      outImpulseRotation->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_impact_rotation.frequency.v[2];
      outImpulseRotation->m_amplitudeBase = CinematicMotionDef->camera_shake_impact_rotation.amplitude;
      outImpulseRotation->m_persistenceBase = CinematicMotionDef->camera_shake_impact_rotation.persistence;
      *(_QWORD *)outImpulseTranslation->m_frequencyBase.v = *(_QWORD *)CinematicMotionDef->camera_shake_impact_translation.frequency.v;
      outImpulseTranslation->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_impact_translation.frequency.v[2];
      outImpulseTranslation->m_amplitudeBase = CinematicMotionDef->camera_shake_impact_translation.amplitude;
      *(_QWORD *)outImpulseTranslation->m_persistenceBase.v = *(_QWORD *)CinematicMotionDef->camera_shake_impact_translation.persistence.v;
      _XMM0 = LODWORD(CinematicMotionDef->camera_shake_impact_translation.persistence.v[2]);
    }
    else
    {
      v16 = outImpulseRotation;
      v17 = outImpulseTranslation;
      *(_QWORD *)outRotation->m_frequencyBase.v = 0i64;
      *(_QWORD *)&outRotation->m_frequencyBase.z = 0i64;
      *(_QWORD *)&outRotation->m_amplitudeBase.y = 0i64;
      *(_QWORD *)outRotation->m_persistenceBase.v = 0i64;
      outRotation->m_persistenceBase.v[2] = 0.0;
      *(_QWORD *)outTranslation->m_frequencyBase.v = 0i64;
      *(_QWORD *)&outTranslation->m_frequencyBase.z = 0i64;
      *(_QWORD *)&outTranslation->m_amplitudeBase.y = 0i64;
      *(_QWORD *)outTranslation->m_persistenceBase.v = 0i64;
      outTranslation->m_persistenceBase.v[2] = 0.0;
      *(_OWORD *)outImpulseRotation->m_frequencyBase.v = 0ui64;
      *(_QWORD *)&outImpulseRotation->m_amplitudeBase.y = 0i64;
      *(_QWORD *)outImpulseRotation->m_persistenceBase.v = 0i64;
      outImpulseRotation->m_persistenceBase.v[2] = 0.0;
      *(_OWORD *)outImpulseTranslation->m_frequencyBase.v = 0ui64;
      *(_QWORD *)&outImpulseTranslation->m_amplitudeBase.y = 0i64;
      *(_QWORD *)outImpulseTranslation->m_persistenceBase.v = 0i64;
      _XMM0 = 0i64;
    }
    v17->m_persistenceBase.v[2] = *(float *)&_XMM0;
    outRotation->m_speedScale = this->m_shakeState[this->m_curStateIndex].m_rotation.m_combined.m_speedScale;
    outRotation->m_amplitudeScale = this->m_shakeState[this->m_curStateIndex].m_rotation.m_combined.m_amplitudeScale;
    outRotation->m_persistenceScale = this->m_shakeState[this->m_curStateIndex].m_rotation.m_combined.m_persistenceScale;
    outTranslation->m_speedScale = this->m_shakeState[this->m_curStateIndex].m_translation.m_combined.m_speedScale;
    outTranslation->m_amplitudeScale = this->m_shakeState[this->m_curStateIndex].m_translation.m_combined.m_amplitudeScale;
    m_persistenceScale = this->m_shakeState[this->m_curStateIndex].m_translation.m_combined.m_persistenceScale;
  }
  else
  {
    v12 = v8 - this->m_blendStart;
    m_curStateIndex = this->m_curStateIndex;
    if ( this->m_blendDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 601, ASSERT_TYPE_ASSERT, "( m_blendDuration ) > ( 0 )", "%s > %s\n\t%i, %i", "m_blendDuration", "0", this->m_blendDuration, 0i64) )
      __debugbreak();
    v13 = 0i64;
    v14 = I_fclamp((float)v12 / (float)this->m_blendDuration, 0.0, 1.0);
    v15 = CG_ViewMotion_GetCinematicMotionDef(this->m_goalMotionIndex);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 605, ASSERT_TYPE_ASSERT, "( goalDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "goalDef", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( v11 )
    {
      outRotation->m_frequencyBase.v[0] = (float)((float)(v15->camera_shake_rotation.frequency.v[0] - v11[43]) * *(float *)&v14) + v11[43];
      outRotation->m_frequencyBase.v[1] = (float)((float)(v15->camera_shake_rotation.frequency.v[1] - v11[44]) * *(float *)&v14) + v11[44];
      outRotation->m_frequencyBase.v[2] = (float)((float)(v15->camera_shake_rotation.frequency.v[2] - v11[45]) * *(float *)&v14) + v11[45];
      outRotation->m_amplitudeBase.v[0] = (float)((float)(v15->camera_shake_rotation.amplitude.v[0] - v11[46]) * *(float *)&v14) + v11[46];
      outRotation->m_amplitudeBase.v[1] = (float)((float)(v15->camera_shake_rotation.amplitude.v[1] - v11[47]) * *(float *)&v14) + v11[47];
      outRotation->m_amplitudeBase.v[2] = (float)((float)(v15->camera_shake_rotation.amplitude.v[2] - v11[48]) * *(float *)&v14) + v11[48];
      outRotation->m_persistenceBase.v[0] = (float)((float)(v15->camera_shake_rotation.persistence.v[0] - v11[49]) * *(float *)&v14) + v11[49];
      outRotation->m_persistenceBase.v[1] = (float)((float)(v15->camera_shake_rotation.persistence.v[1] - v11[50]) * *(float *)&v14) + v11[50];
      outRotation->m_persistenceBase.v[2] = (float)((float)(v15->camera_shake_rotation.persistence.v[2] - v11[51]) * *(float *)&v14) + v11[51];
      outTranslation->m_frequencyBase.v[0] = (float)((float)(v15->camera_shake_translation.frequency.v[0] - v11[87]) * *(float *)&v14) + v11[87];
      outTranslation->m_frequencyBase.v[1] = (float)((float)(v15->camera_shake_translation.frequency.v[1] - v11[88]) * *(float *)&v14) + v11[88];
      outTranslation->m_frequencyBase.v[2] = (float)((float)(v15->camera_shake_translation.frequency.v[2] - v11[89]) * *(float *)&v14) + v11[89];
      outTranslation->m_amplitudeBase.v[0] = (float)((float)(v15->camera_shake_translation.amplitude.v[0] - v11[90]) * *(float *)&v14) + v11[90];
      v16 = outImpulseRotation;
      outTranslation->m_amplitudeBase.v[1] = (float)((float)(v15->camera_shake_translation.amplitude.v[1] - v11[91]) * *(float *)&v14) + v11[91];
      outTranslation->m_amplitudeBase.v[2] = (float)((float)(v15->camera_shake_translation.amplitude.v[2] - v11[92]) * *(float *)&v14) + v11[92];
      outTranslation->m_persistenceBase.v[0] = (float)((float)(v15->camera_shake_translation.persistence.v[0] - v11[93]) * *(float *)&v14) + v11[93];
      outTranslation->m_persistenceBase.v[1] = (float)((float)(v15->camera_shake_translation.persistence.v[1] - v11[94]) * *(float *)&v14) + v11[94];
      outTranslation->m_persistenceBase.v[2] = (float)((float)(v15->camera_shake_translation.persistence.v[2] - v11[95]) * *(float *)&v14) + v11[95];
      outImpulseRotation->m_frequencyBase.v[0] = (float)((float)(v15->camera_shake_impact_rotation.frequency.v[0] - v11[130]) * *(float *)&v14) + v11[130];
      outImpulseRotation->m_frequencyBase.v[1] = (float)((float)(v15->camera_shake_impact_rotation.frequency.v[1] - v11[131]) * *(float *)&v14) + v11[131];
      outImpulseRotation->m_frequencyBase.v[2] = (float)((float)(v15->camera_shake_impact_rotation.frequency.v[2] - v11[132]) * *(float *)&v14) + v11[132];
      outImpulseRotation->m_amplitudeBase.v[0] = (float)((float)(v15->camera_shake_impact_rotation.amplitude.v[0] - v11[133]) * *(float *)&v14) + v11[133];
      outImpulseRotation->m_amplitudeBase.v[1] = (float)((float)(v15->camera_shake_impact_rotation.amplitude.v[1] - v11[134]) * *(float *)&v14) + v11[134];
      outImpulseRotation->m_amplitudeBase.v[2] = (float)((float)(v15->camera_shake_impact_rotation.amplitude.v[2] - v11[135]) * *(float *)&v14) + v11[135];
      outImpulseRotation->m_persistenceBase.v[0] = (float)((float)(v15->camera_shake_impact_rotation.persistence.v[0] - v11[136]) * *(float *)&v14) + v11[136];
      outImpulseRotation->m_persistenceBase.v[1] = (float)((float)(v15->camera_shake_impact_rotation.persistence.v[1] - v11[137]) * *(float *)&v14) + v11[137];
      v17 = outImpulseTranslation;
      outImpulseRotation->m_persistenceBase.v[2] = (float)((float)(v15->camera_shake_impact_rotation.persistence.v[2] - v11[138]) * *(float *)&v14) + v11[138];
      outImpulseTranslation->m_frequencyBase.v[0] = (float)((float)(v15->camera_shake_impact_translation.frequency.v[0] - v11[139]) * *(float *)&v14) + v11[139];
      outImpulseTranslation->m_frequencyBase.v[1] = (float)((float)(v15->camera_shake_impact_translation.frequency.v[1] - v11[140]) * *(float *)&v14) + v11[140];
      outImpulseTranslation->m_frequencyBase.v[2] = (float)((float)(v15->camera_shake_impact_translation.frequency.v[2] - v11[141]) * *(float *)&v14) + v11[141];
      outImpulseTranslation->m_amplitudeBase.v[0] = (float)((float)(v15->camera_shake_impact_translation.amplitude.v[0] - v11[142]) * *(float *)&v14) + v11[142];
      outImpulseTranslation->m_amplitudeBase.v[1] = (float)((float)(v15->camera_shake_impact_translation.amplitude.v[1] - v11[143]) * *(float *)&v14) + v11[143];
      outImpulseTranslation->m_amplitudeBase.v[2] = (float)((float)(v15->camera_shake_impact_translation.amplitude.v[2] - v11[144]) * *(float *)&v14) + v11[144];
      outImpulseTranslation->m_persistenceBase.v[0] = (float)((float)(v15->camera_shake_impact_translation.persistence.v[0] - v11[145]) * *(float *)&v14) + v11[145];
      outImpulseTranslation->m_persistenceBase.v[1] = (float)((float)(v15->camera_shake_impact_translation.persistence.v[1] - v11[146]) * *(float *)&v14) + v11[146];
      v18 = (float)((float)(v15->camera_shake_impact_translation.persistence.v[2] - v11[147]) * *(float *)&v14) + v11[147];
    }
    else
    {
      outRotation->m_frequencyBase.v[0] = *(float *)&v14 * v15->camera_shake_rotation.frequency.v[0];
      outRotation->m_frequencyBase.v[1] = *(float *)&v14 * v15->camera_shake_rotation.frequency.v[1];
      outRotation->m_frequencyBase.v[2] = *(float *)&v14 * v15->camera_shake_rotation.frequency.v[2];
      outRotation->m_amplitudeBase.v[0] = *(float *)&v14 * v15->camera_shake_rotation.amplitude.v[0];
      outRotation->m_amplitudeBase.v[1] = *(float *)&v14 * v15->camera_shake_rotation.amplitude.v[1];
      outRotation->m_amplitudeBase.v[2] = *(float *)&v14 * v15->camera_shake_rotation.amplitude.v[2];
      outRotation->m_persistenceBase.v[0] = *(float *)&v14 * v15->camera_shake_rotation.persistence.v[0];
      outRotation->m_persistenceBase.v[1] = *(float *)&v14 * v15->camera_shake_rotation.persistence.v[1];
      outRotation->m_persistenceBase.v[2] = *(float *)&v14 * v15->camera_shake_rotation.persistence.v[2];
      outTranslation->m_frequencyBase.v[0] = *(float *)&v14 * v15->camera_shake_translation.frequency.v[0];
      outTranslation->m_frequencyBase.v[1] = *(float *)&v14 * v15->camera_shake_translation.frequency.v[1];
      outTranslation->m_frequencyBase.v[2] = *(float *)&v14 * v15->camera_shake_translation.frequency.v[2];
      outTranslation->m_amplitudeBase.v[0] = *(float *)&v14 * v15->camera_shake_translation.amplitude.v[0];
      outTranslation->m_amplitudeBase.v[1] = *(float *)&v14 * v15->camera_shake_translation.amplitude.v[1];
      outTranslation->m_amplitudeBase.v[2] = *(float *)&v14 * v15->camera_shake_translation.amplitude.v[2];
      v16 = outImpulseRotation;
      v17 = outImpulseTranslation;
      outTranslation->m_persistenceBase.v[0] = *(float *)&v14 * v15->camera_shake_translation.persistence.v[0];
      outTranslation->m_persistenceBase.v[1] = *(float *)&v14 * v15->camera_shake_translation.persistence.v[1];
      outTranslation->m_persistenceBase.v[2] = *(float *)&v14 * v15->camera_shake_translation.persistence.v[2];
      outImpulseRotation->m_frequencyBase.v[0] = *(float *)&v14 * v15->camera_shake_impact_rotation.frequency.v[0];
      outImpulseRotation->m_frequencyBase.v[1] = *(float *)&v14 * v15->camera_shake_impact_rotation.frequency.v[1];
      outImpulseRotation->m_frequencyBase.v[2] = *(float *)&v14 * v15->camera_shake_impact_rotation.frequency.v[2];
      outImpulseRotation->m_amplitudeBase.v[0] = *(float *)&v14 * v15->camera_shake_impact_rotation.amplitude.v[0];
      outImpulseRotation->m_amplitudeBase.v[1] = *(float *)&v14 * v15->camera_shake_impact_rotation.amplitude.v[1];
      outImpulseRotation->m_amplitudeBase.v[2] = *(float *)&v14 * v15->camera_shake_impact_rotation.amplitude.v[2];
      outImpulseRotation->m_persistenceBase.v[0] = *(float *)&v14 * v15->camera_shake_impact_rotation.persistence.v[0];
      outImpulseRotation->m_persistenceBase.v[1] = *(float *)&v14 * v15->camera_shake_impact_rotation.persistence.v[1];
      outImpulseRotation->m_persistenceBase.v[2] = *(float *)&v14 * v15->camera_shake_impact_rotation.persistence.v[2];
      outImpulseTranslation->m_frequencyBase.v[0] = *(float *)&v14 * v15->camera_shake_impact_translation.frequency.v[0];
      outImpulseTranslation->m_frequencyBase.v[1] = *(float *)&v14 * v15->camera_shake_impact_translation.frequency.v[1];
      outImpulseTranslation->m_frequencyBase.v[2] = *(float *)&v14 * v15->camera_shake_impact_translation.frequency.v[2];
      outImpulseTranslation->m_amplitudeBase.v[0] = *(float *)&v14 * v15->camera_shake_impact_translation.amplitude.v[0];
      outImpulseTranslation->m_amplitudeBase.v[1] = *(float *)&v14 * v15->camera_shake_impact_translation.amplitude.v[1];
      outImpulseTranslation->m_amplitudeBase.v[2] = *(float *)&v14 * v15->camera_shake_impact_translation.amplitude.v[2];
      outImpulseTranslation->m_persistenceBase.v[0] = *(float *)&v14 * v15->camera_shake_impact_translation.persistence.v[0];
      outImpulseTranslation->m_persistenceBase.v[1] = *(float *)&v14 * v15->camera_shake_impact_translation.persistence.v[1];
      v18 = *(float *)&v14 * v15->camera_shake_impact_translation.persistence.v[2];
    }
    v17->m_persistenceBase.v[2] = v18;
    v8 = time;
    v19 = m_curStateIndex;
    v20 = 1.0 - *(float *)&v14;
    v21 = ((_BYTE)m_curStateIndex - 1) & 1;
    outRotation->m_speedScale = (float)((float)(1.0 - *(float *)&v14) * this->m_shakeState[v19].m_rotation.m_combined.m_speedScale) + (float)(*(float *)&v14 * this->m_shakeState[v21].m_rotation.m_combined.m_speedScale);
    outRotation->m_amplitudeScale = (float)((float)(1.0 - *(float *)&v14) * this->m_shakeState[v19].m_rotation.m_combined.m_amplitudeScale) + (float)(*(float *)&v14 * this->m_shakeState[v21].m_rotation.m_combined.m_amplitudeScale);
    outRotation->m_persistenceScale = (float)((float)(1.0 - *(float *)&v14) * this->m_shakeState[v19].m_rotation.m_combined.m_persistenceScale) + (float)(*(float *)&v14 * this->m_shakeState[v21].m_rotation.m_combined.m_persistenceScale);
    outTranslation->m_speedScale = (float)((float)(1.0 - *(float *)&v14) * this->m_shakeState[v19].m_rotation.m_combined.m_speedScale) + (float)(*(float *)&v14 * this->m_shakeState[v21].m_rotation.m_combined.m_speedScale);
    outTranslation->m_amplitudeScale = (float)((float)(1.0 - *(float *)&v14) * this->m_shakeState[v19].m_rotation.m_combined.m_amplitudeScale) + (float)(*(float *)&v14 * this->m_shakeState[v21].m_rotation.m_combined.m_amplitudeScale);
    v23 = *(unsigned __int64 *)&v14;
    *(float *)&v23 = *(float *)&v14 * this->m_shakeState[v21].m_rotation.m_combined.m_persistenceScale;
    _XMM0 = v23;
    m_persistenceScale = (float)(v20 * this->m_shakeState[v19].m_rotation.m_combined.m_persistenceScale) + *(float *)&v23;
  }
  outTranslation->m_persistenceScale = m_persistenceScale;
  v16->m_amplitudeScale = 0.0;
  v16->m_persistenceScale = 1.0;
  v17->m_amplitudeScale = 0.0;
  v17->m_persistenceScale = 1.0;
  mp_next = this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
  for ( i = &this->m_impulseManager.m_impulseList.m_listHead; mp_next != (ntl::internal::list_node_base *)i; mp_next = mp_next->mp_next )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = (int)mp_next[1].mp_prev;
    if ( v8 - mp_prev >= 0 )
    {
      LOBYTE(fmt) = BYTE4(mp_next[1].mp_next);
      *(float *)&_XMM0 = CG_ShakeImpulse_CalcFraction(v8, mp_prev, HIDWORD(mp_next[1].mp_prev), (const int)mp_next[1].mp_next, fmt);
      v32 = _XMM0;
      *(float *)&v32 = *(float *)&_XMM0 * *((float *)&mp_next[2].mp_prev + 1);
      v31 = v32;
      v33 = _XMM0;
      *(float *)&v33 = *(float *)&_XMM0 * *(float *)&mp_next[2].mp_prev;
      _XMM3 = v33;
      v34 = _XMM0;
      *(float *)&v34 = *(float *)&_XMM0 * *(float *)&mp_next[2].mp_next;
      _XMM4 = v34;
      v35 = v31;
      *(float *)&v35 = *(float *)&v31 + (float)(1.0 - *(float *)&_XMM0);
      _XMM1 = v35;
    }
    else
    {
      _XMM3 = v13;
      _XMM1 = LODWORD(FLOAT_1_0);
      _XMM4 = v13;
    }
    __asm { vmaxss  xmm0, xmm3, dword ptr [rdi+28h] }
    v16->m_amplitudeScale = *(float *)&_XMM0;
    __asm { vmaxss  xmm1, xmm1, dword ptr [rdi+2Ch] }
    v16->m_persistenceScale = *(float *)&_XMM1;
    __asm { vmaxss  xmm0, xmm4, dword ptr [rsi+28h] }
    v17->m_amplitudeScale = *(float *)&_XMM0;
    _XMM1 = LODWORD(v17->m_persistenceScale);
    __asm { vmaxss  xmm2, xmm1, xmm2 }
    v17->m_persistenceScale = *(float *)&_XMM2;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
  }
  v16->m_speedScale = 1.0;
  v17->m_speedScale = 1.0;
}

/*
==============
ShakeImpulseManager::CalcImpulseScaleValues
==============
*/
void ShakeImpulseManager::CalcImpulseScaleValues(ShakeImpulseManager *this, const int timeMs, const ShakeImpulse *impulse, float *outRotAmplitude, float *outRotPersistence, float *outTransAmplitude, float *outTransPersistence)
{
  float v9; 
  ShakeImpulseDecayType decayType; 

  if ( timeMs - impulse->m_startTimeMs >= 0 )
  {
    LOBYTE(decayType) = impulse->m_decayType[0];
    v9 = CG_ShakeImpulse_CalcFraction(timeMs, impulse->m_startTimeMs, impulse->m_attackMs, impulse->m_decayMs, decayType);
    *outRotAmplitude = v9 * impulse->m_rotAmplitudeScale;
    *outRotPersistence = (float)(v9 * impulse->m_rotPersistenceScale) + (float)(1.0 - v9);
    *outTransAmplitude = v9 * impulse->m_transAmplitudeScale;
    *outTransPersistence = (float)(v9 * impulse->m_transPersistenceScale) + (float)(1.0 - v9);
  }
  else
  {
    *outRotAmplitude = 0.0;
    *outRotPersistence = 1.0;
    *outTransAmplitude = 0.0;
    *outTransPersistence = FLOAT_1_0;
  }
}

/*
==============
ShakeImpulseManager::CalcImpulseScaleValues
==============
*/
void ShakeImpulseManager::CalcImpulseScaleValues(ShakeImpulseManager *this, const int timeMs, float *outRotAmplitude, float *outRotPersistence, float *outTransAmplitude, float *outTransPersistence)
{
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  int mp_prev; 
  ShakeImpulseDecayType fmt; 

  p_m_listHead = &this->m_impulseList.m_listHead;
  *outRotAmplitude = 0.0;
  *outRotPersistence = 1.0;
  *outTransAmplitude = 0.0;
  *outTransPersistence = 1.0;
  mp_next = this->m_impulseList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_impulseList.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = (int)mp_next[1].mp_prev;
      if ( timeMs - mp_prev >= 0 )
      {
        LOBYTE(fmt) = BYTE4(mp_next[1].mp_next);
        CG_ShakeImpulse_CalcFraction(timeMs, mp_prev, HIDWORD(mp_next[1].mp_prev), (const int)mp_next[1].mp_next, fmt);
      }
      _XMM0 = *(unsigned int *)outRotAmplitude;
      __asm { vmaxss  xmm1, xmm0, xmm3 }
      *outRotAmplitude = *(float *)&_XMM1;
      _XMM2 = *(unsigned int *)outRotPersistence;
      __asm { vmaxss  xmm0, xmm2, xmm4 }
      *outRotPersistence = *(float *)&_XMM0;
      _XMM1 = *(unsigned int *)outTransAmplitude;
      __asm { vmaxss  xmm2, xmm1, xmm5 }
      *outTransAmplitude = *(float *)&_XMM2;
      _XMM0 = *(unsigned int *)outTransPersistence;
      __asm { vmaxss  xmm1, xmm0, xmm6 }
      *outTransPersistence = *(float *)&_XMM1;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
  }
}

/*
==============
Shake::DebugDraw
==============
*/
void Shake::DebugDraw(Shake *this, const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  int integer; 
  cg_t *LocalClientGlobals; 
  int v7; 
  cg_t *v8; 
  int time; 
  bool v10; 
  ShakeFinal *outImpulseTranslation; 
  ShakeStateDebugDraw debugDraw; 
  ShakeFinal outImpulseRotation; 
  ShakeFinal v14; 
  ShakeFinal outTranslation; 
  ShakeFinal outRotation; 

  v2 = DCONST_DVARINT_handheldCameraDebug;
  if ( !DCONST_DVARINT_handheldCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( integer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v7 = this->m_blendStart + this->m_blendDuration;
    v8 = LocalClientGlobals;
    time = LocalClientGlobals->time;
    v10 = time < v7;
    debugDraw.m_localClientNum = localClientNum;
    debugDraw.m_drawX = initialDrawX;
    debugDraw.m_drawY = initialDrawY;
    if ( integer == 1 || integer == 2 )
    {
      ShakeState::DebugDraw(&this->m_shakeState[this->m_curStateIndex], this->m_curMotionIndex, v10, &debugDraw);
      if ( time < v7 )
        ShakeState::DebugDraw(&this->m_shakeState[((unsigned __int8)this->m_curStateIndex - 1) & 1], this->m_goalMotionIndex, v10, &debugDraw);
    }
    else if ( integer == 3 || integer == 4 )
    {
      *(_QWORD *)&outRotation.m_xCoord.xy.y = 0i64;
      outRotation.m_xCoord.v[0] = 0;
      *(_QWORD *)&outTranslation.m_xCoord.xy.y = 0i64;
      outTranslation.m_xCoord.v[0] = 0;
      *(_QWORD *)&outImpulseRotation.m_xCoord.xy.y = 0i64;
      outImpulseRotation.m_xCoord.v[0] = 0;
      *(_QWORD *)&v14.m_xCoord.xy.y = 0i64;
      v14.m_xCoord.v[0] = 0;
      *(__m256i *)outRotation.m_frequencyBase.v = (__m256i)0i64;
      *(_OWORD *)&outRotation.m_persistenceBase.z = _xmm;
      *(__m256i *)outTranslation.m_frequencyBase.v = (__m256i)0i64;
      *(_OWORD *)&outTranslation.m_persistenceBase.z = _xmm;
      *(__m256i *)outImpulseRotation.m_frequencyBase.v = (__m256i)0i64;
      *(_OWORD *)&outImpulseRotation.m_persistenceBase.z = _xmm;
      *(__m256i *)v14.m_frequencyBase.v = (__m256i)0i64;
      *(_OWORD *)&v14.m_persistenceBase.z = _xmm;
      Shake::CalcConstantShakeFinalParams(this, time, &outRotation, &outTranslation, &outImpulseRotation, &v14);
      if ( integer == 3 )
        ShakeImpulseManager::DebugDraw(&this->m_impulseManager, v8->time, this->m_curMotionIndex, v10, &outImpulseRotation, &debugDraw);
      else
        ShakeImpulseManager::DebugDraw(&this->m_impulseManager, v8->time, this->m_curMotionIndex, v10, &v14, &debugDraw);
    }
    else
    {
      LODWORD(outImpulseTranslation) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 762, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ShakeMetadata::DebugDraw(): Unexpected debugType %i", outImpulseTranslation) )
        __debugbreak();
    }
  }
}

/*
==============
ShakeImpulseManager::DebugDraw
==============
*/
void ShakeImpulseManager::DebugDraw(ShakeImpulseManager *this, const int timeMs, const unsigned int motionIndex, const bool isBlending, const ShakeFinal *shakeFinal, ShakeStateDebugDraw *debugDraw)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  const dvar_t *v12; 
  const ShakeFinal *v14; 
  int integer; 
  const CinematicMotionDef *CinematicMotionDef; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  const char *name; 
  const ScreenPlacement *v31; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  int m_debugXAxisScale; 
  float m_drawX; 
  float m_drawY; 
  ntl::internal::list_node_base *v45; 
  float v46; 
  float v47; 
  float v48; 
  float m_amplitudeScale; 
  float m_speedScale; 
  const dvar_t *v51; 
  float value; 
  const dvar_t *v53; 
  float v54; 
  const CameraDef *Def; 
  float handheldCameraImpulseTransScale; 
  float handheldCameraImpulseRotScale; 
  const CameraDef *v58; 
  char *fmt; 
  ShakeImpulseDecayType y; 
  int horzAlign; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  char dest[6144]; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 

  v12 = DCONST_DVARINT_handheldCameraDebug;
  v14 = shakeFinal;
  if ( !DCONST_DVARINT_handheldCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  memset_0(dest, 0, sizeof(dest));
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  font = UI_GetFontHandle(scrPlace, SHAKE_DEBUG_FONT_TYPE, SHAKE_DEBUG_FONT_SCALE);
  CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(motionIndex);
  if ( !CinematicMotionDef )
    goto LABEL_59;
  v19 = DCONST_DVARBOOL_handheldCameraImpulsesEnabled;
  if ( !DCONST_DVARBOOL_handheldCameraImpulsesEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulsesEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
  {
    v20 = DCONST_DVARINT_handheldCameraOctaves;
    v71 = v6;
    v70 = v7;
    v69 = v8;
    v68 = v9;
    v67 = v10;
    v66 = v11;
    v21 = shakeFinal->m_frequencyBase.v[0];
    v22 = shakeFinal->m_persistenceBase.v[2];
    v23 = shakeFinal->m_persistenceBase.v[1];
    v24 = shakeFinal->m_persistenceBase.v[0];
    v25 = shakeFinal->m_amplitudeBase.v[2];
    v26 = shakeFinal->m_amplitudeBase.v[1];
    v27 = shakeFinal->m_amplitudeBase.v[0];
    v28 = shakeFinal->m_frequencyBase.v[2];
    v29 = shakeFinal->m_frequencyBase.v[1];
    if ( !DCONST_DVARINT_handheldCameraOctaves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraOctaves") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    name = "BLENDING ";
    if ( !isBlending )
      name = CinematicMotionDef->name;
    LODWORD(fmt) = v20->current.integer;
    Com_sprintf(dest, 0x1800ui64, "^7=== IMPULSE BASE ===\n^7Name: ^5%s\n^7Octaves: ^5%i\n^7Frequency: ^5(%.2f, %.2f, %.2f)\n^7Amplitude: ^5(%.2f, %.2f, %.2f)\n^7Persistence: ^5(%.2f, %.2f, %.2f)\n", name, fmt, v21, v29, v28, v27, v26, v25, v24, v23, v22);
    v31 = scrPlace;
    UI_DrawText(scrPlace, dest, 6144, font, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    debugDraw->m_drawY = offsetY_0 + debugDraw->m_drawY;
    mp_next = this->m_impulseList.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &this->m_impulseList.m_listHead;
    if ( mp_next == (ntl::internal::list_node_base *)&this->m_impulseList.m_listHead )
    {
      *(float *)&_XMM0 = this->m_debugYAxisScale;
    }
    else
    {
      do
      {
        if ( !mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        m_debugXAxisScale = LODWORD(mp_next[1].mp_next) + HIDWORD(mp_next[1].mp_prev);
        if ( this->m_debugXAxisScale > m_debugXAxisScale )
          m_debugXAxisScale = this->m_debugXAxisScale;
        this->m_debugXAxisScale = m_debugXAxisScale;
        _XMM0 = LODWORD(mp_next[2].mp_prev);
        __asm { vmaxss  xmm2, xmm0, dword ptr [rsi+1E4h] }
        this->m_debugYAxisScale = *(float *)&_XMM2;
        _XMM1 = HIDWORD(mp_next[2].mp_prev);
        __asm { vmaxss  xmm3, xmm1, xmm2 }
        this->m_debugYAxisScale = *(float *)&_XMM3;
        _XMM0 = LODWORD(mp_next[2].mp_next);
        __asm { vmaxss  xmm2, xmm0, xmm3 }
        this->m_debugYAxisScale = *(float *)&_XMM2;
        _XMM1 = HIDWORD(mp_next[2].mp_next);
        __asm { vmaxss  xmm0, xmm1, xmm2 }
        this->m_debugYAxisScale = *(float *)&_XMM0;
        mp_next = mp_next->mp_next;
      }
      while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
      v14 = shakeFinal;
      v31 = scrPlace;
    }
    Com_sprintf(dest, 0x1800ui64, "^7X Axis Scale: %ims\n^7Y Axis Scale: %.2f\n", (unsigned int)this->m_debugXAxisScale, *(float *)&_XMM0);
    UI_DrawText(v31, dest, 6144, font, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    m_drawX = debugDraw->m_drawX;
    m_drawY = (float)axisTextYOffset + debugDraw->m_drawY;
    debugDraw->m_drawY = m_drawY;
    v45 = this->m_impulseList.m_listHead.m_sentinel.mp_next;
    if ( v45 != (ntl::internal::list_node_base *)p_m_listHead )
    {
      while ( 1 )
      {
        if ( integer == 3 )
        {
          if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v46 = *((float *)&v45[2].mp_prev + 1);
          v47 = *(float *)&v45[2].mp_prev;
        }
        else
        {
          if ( integer != 4 )
            goto LABEL_37;
          if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v46 = *((float *)&v45[2].mp_next + 1);
          v47 = *(float *)&v45[2].mp_next;
        }
        LOBYTE(horzAlign) = v45[3].mp_prev;
        LOBYTE(y) = BYTE4(v45[1].mp_next);
        ShakeImpulseManager::DebugDrawImpulse(this, timeMs, (const int)v45[1].mp_prev, HIDWORD(v45[1].mp_prev), (const int)v45[1].mp_next, y, (const ShakeImpulseSourceType)horzAlign, v47, v46, *((const float *)&v45[3].mp_prev + 1), debugDraw);
LABEL_37:
        debugDraw->m_drawX = (float)offsetX_0 + debugDraw->m_drawX;
        debugDraw->m_drawY = m_drawY;
        if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v45 = v45->mp_next;
        if ( v45 == (ntl::internal::list_node_base *)p_m_listHead )
        {
          m_drawY = debugDraw->m_drawY;
          v14 = shakeFinal;
          v31 = scrPlace;
          break;
        }
      }
    }
    v48 = m_drawY + offsetY_0;
    debugDraw->m_drawX = m_drawX;
    debugDraw->m_drawY = v48;
    m_amplitudeScale = v14->m_amplitudeScale;
    m_speedScale = v14->m_speedScale;
    Com_sprintf(dest, 0x1800ui64, "^7=== IMPULSE FINAL ===\n^7Frequency: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Amplitude: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Persistence: ^5(%.2f, %.2f, %.2f)  %.2fx\n", (float)(m_speedScale * v14->m_frequencyBase.v[0]), (float)(m_speedScale * v14->m_frequencyBase.v[1]), (float)(m_speedScale * v14->m_frequencyBase.v[2]), m_speedScale, (float)(m_amplitudeScale * v14->m_amplitudeBase.v[0]), (float)(m_amplitudeScale * v14->m_amplitudeBase.v[1]), (float)(m_amplitudeScale * v14->m_amplitudeBase.v[2]), m_amplitudeScale, (float)(v14->m_persistenceScale * v14->m_persistenceBase.v[0]), (float)(v14->m_persistenceScale * v14->m_persistenceBase.v[1]), (float)(v14->m_persistenceScale * v14->m_persistenceBase.v[2]), v14->m_persistenceScale);
    UI_DrawText(v31, dest, 6144, font, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    debugDraw->m_drawY = offsetY_0 + debugDraw->m_drawY;
    v51 = DVARFLT_handheldCameraRotationScale;
    if ( !DVARFLT_handheldCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRotationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    value = v51->current.value;
    v53 = DVARFLT_handheldCameraTranslationScale;
    if ( !DVARFLT_handheldCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraTranslationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v54 = v53->current.value;
    if ( value != 1.0 || v54 != 1.0 )
    {
      Com_sprintf(dest, 0x1800ui64, "^7=== DESIGN SCALAR MODIFIERS ===\n^7handheldCameraRotationScale: ^1%.2fx\n^7handheldCameraTranslationScale: ^1%.2fx\n", value, v54);
      UI_DrawText(v31, dest, 6144, font, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
      debugDraw->m_drawY = offsetY_0 + debugDraw->m_drawY;
    }
    Def = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
    if ( Def )
    {
      if ( Def->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
      {
        handheldCameraImpulseTransScale = Def->firstPerson.handheldCameraImpulseTransScale;
        handheldCameraImpulseRotScale = Def->firstPerson.handheldCameraImpulseRotScale;
        if ( 1.0 != Def->firstPerson.handheldCameraTransScale || 1.0 != Def->firstPerson.handheldCameraRotScale || handheldCameraImpulseTransScale != 1.0 || handheldCameraImpulseRotScale != 1.0 )
        {
          v58 = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
          Com_sprintf(dest, 0x1800ui64, "^7=== CAMERA ASSET MODIFIERS (%s) ===\n^7handheldCameraImpulseRotScale: ^1%.2fx\n^7handheldCameraImpulseTransScale: ^1%.2fx\n", v58->name, handheldCameraImpulseRotScale, handheldCameraImpulseTransScale);
          UI_DrawText(v31, dest, 6144, font, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
          debugDraw->m_drawY = offsetY_0 + debugDraw->m_drawY;
        }
      }
    }
  }
  else
  {
LABEL_59:
    Com_sprintf(dest, 0x1800ui64, "^7=== IMPULSE BASE ===\n^7Name: ^5%s\n^7DISABLED\n", CinematicMotionDef->name);
    UI_DrawText(scrPlace, dest, 6144, font, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    debugDraw->m_drawY = offsetY_0 + debugDraw->m_drawY;
    this->m_debugXAxisScale = 1;
    this->m_debugYAxisScale = 1.0;
  }
}

/*
==============
ShakePerlinScale::DebugDraw
==============
*/
void ShakePerlinScale::DebugDraw(ShakePerlinScale *this, const CinematicShakeModifierDef *const modifierDef, ShakeStateDebugDraw *debugDraw, const char *name)
{
  signed __int64 v4; 
  void *v5; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  __int128 m_drawY_low; 
  __int128 v14; 
  RumbleGraph *nonLinearMap; 
  __int64 v16; 
  float v17; 
  double ValueFromFraction; 
  float v19; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  double v25; 
  float m_outValueSmoothed; 
  __int64 numDataEntries; 
  float data[32]; 
  char dest[6144]; 

  v5 = alloca(v4);
  memset_0(dest, 0, sizeof(dest));
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, SHAKE_DEBUG_FONT_TYPE, SHAKE_DEBUG_FONT_SCALE);
  Com_sprintf(dest, 0x1800ui64, "^7=== %s MODIFIERS ===\n", name);
  UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
  m_drawY_low = LODWORD(debugDraw->m_drawY);
  v14 = m_drawY_low;
  *(float *)&v14 = *(float *)&m_drawY_low + 12.0;
  _XMM1 = v14;
  debugDraw->m_drawY = *(float *)&m_drawY_low + 12.0;
  nonLinearMap = modifierDef->nonLinearMap;
  v16 = 0i64;
  if ( !nonLinearMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1286, ASSERT_TYPE_ASSERT, "( nonLinearGraph ) != ( nullptr )", "%s != %s\n\t%p, %p", "nonLinearGraph", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !nonLinearMap->knotCount )
  {
    LODWORD(numDataEntries) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1287, ASSERT_TYPE_ASSERT, "( 0 ) < ( nonLinearGraph->knotCount )", "%s < %s\n\t%i, %i", "0", "nonLinearGraph->knotCount", 0i64, numDataEntries) )
      __debugbreak();
  }
  do
  {
    v17 = (float)v16;
    ValueFromFraction = GraphGetValueFromFraction(nonLinearMap->knotCount, nonLinearMap->knots, v17 * 0.032258064);
    data[v16++] = *(float *)&ValueFromFraction;
  }
  while ( (unsigned __int64)v16 < 0x20 );
  v19 = modifierDef->inSpeedRange.v[1] - modifierDef->inSpeedRange.v[0];
  if ( v19 <= 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1299, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( speedRange )", "%s < %s\n\t%g, %g", "0.0f", "speedRange", *(double *)&_XMM1, v19) )
      __debugbreak();
  }
  v21 = 1.0 / v19;
  v22 = I_fclamp((float)(this->m_valueInstant - modifierDef->inSpeedRange.v[0]) * v21, 0.0, 1.0);
  v23 = *(float *)&v22;
  v24 = (float)(this->m_value - modifierDef->inSpeedRange.v[0]) * v21;
  I_fclamp(v24, 0.0, 1.0);
  v25 = GraphGetValueFromFraction(nonLinearMap->knotCount, nonLinearMap->knots, v24);
  m_outValueSmoothed = this->m_outValueSmoothed;
  CG_DebugGraphs_DrawAxes(ActivePlacement, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, &colorWhite);
  CG_DebugGraphs_DrawGraphData(ActivePlacement, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, 0.0, 1.0, data, 0x20u, 0, &colorGreen);
  CG_DebugGraphs_DrawGraphDatapoint(ActivePlacement, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, v24, *(float *)&v25, &colorYellow);
  CG_DebugGraphs_DrawGraphXAxisDatapoint(ActivePlacement, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, v23, 4.0, 4.0, &colorPurple);
  CG_DebugGraphs_DrawGraphYAxisDatapoint(ActivePlacement, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, m_outValueSmoothed, 4.0, 4.0, &colorCyan);
  debugDraw->m_drawX = textOffsetX + debugDraw->m_drawX;
  Com_sprintf(dest, 0x1800ui64, "^7IN Value: ^6%.2f ^3{%.2f}\n^7OUT Frequency Scale: ^3%.2f^5 ^5{%.2f}\n^7OUT Amplitude Scale: ^3%.2f^5 ^5{%.2f}\n^7OUT Persistence Scale: ^3%.2f^5 ^5{%.2f}\n", this->m_valueInstant, this->m_value, this->m_speedScaleInstant, this->m_speedScale, this->m_amplitudeScaleInstant, this->m_amplitudeScale, this->m_persistenceScaleInstant, this->m_persistenceScale);
  UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
}

/*
==============
ShakeState::DebugDraw
==============
*/
void ShakeState::DebugDraw(ShakeState *this, const unsigned int motionIndex, const bool isBlending, ShakeStateDebugDraw *debugDraw)
{
  const dvar_t *v4; 
  int integer; 
  const CinematicMotionDef *CinematicMotionDef; 
  const CinematicShakeDef *p_camera_shake_rotation; 
  ShakeState *p_m_translation; 
  __int64 v13; 

  v4 = DCONST_DVARINT_handheldCameraDebug;
  if ( !DCONST_DVARINT_handheldCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(motionIndex);
    if ( integer == 1 )
    {
      p_camera_shake_rotation = &CinematicMotionDef->camera_shake_rotation;
      p_m_translation = this;
    }
    else
    {
      if ( integer != 2 )
      {
        LODWORD(v13) = integer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 968, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected CinematicShakeDebugType %i.", v13) )
          __debugbreak();
        return;
      }
      p_camera_shake_rotation = &CinematicMotionDef->camera_shake_translation;
      p_m_translation = (ShakeState *)&this->m_translation;
    }
    ShakeStateInternal::DebugDraw(&p_m_translation->m_rotation, CinematicMotionDef->name, p_camera_shake_rotation, isBlending, debugDraw);
  }
}

/*
==============
ShakeStateInternal::DebugDraw
==============
*/
void ShakeStateInternal::DebugDraw(ShakeStateInternal *this, const char *const assetName, const CinematicShakeDef *const shakeDef, const bool isBlending, ShakeStateDebugDraw *debugDraw)
{
  signed __int64 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  void *v12; 
  float m_drawX; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  const dvar_t *v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  const char *v30; 
  float v31; 
  CinematicShakeModifierType type; 
  float v33; 
  const char *v34; 
  CinematicShakeModifierType v35; 
  const char *v36; 
  float m_amplitudeScale; 
  const dvar_t *v38; 
  float value; 
  const dvar_t *v40; 
  float v41; 
  const CameraDef *Def; 
  float handheldCameraTransScale; 
  float handheldCameraRotScale; 
  const CameraDef *v45; 
  const char *v46; 
  __int64 y; 
  char dest[6144]; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 

  v12 = alloca(v5);
  memset_0(dest, 0, sizeof(dest));
  m_drawX = debugDraw->m_drawX;
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, SHAKE_DEBUG_FONT_TYPE, SHAKE_DEBUG_FONT_SCALE);
  if ( shakeDef && shakeDef->enabled )
  {
    v20 = DCONST_DVARINT_handheldCameraOctaves;
    v55 = v6;
    v54 = v7;
    v53 = v8;
    v52 = v9;
    v51 = v10;
    v50 = v11;
    v21 = shakeDef->frequency.v[0];
    v22 = shakeDef->persistence.v[2];
    v23 = shakeDef->persistence.v[1];
    v24 = shakeDef->persistence.v[0];
    v25 = shakeDef->amplitude.v[2];
    v26 = shakeDef->amplitude.v[1];
    v27 = shakeDef->amplitude.v[0];
    v28 = shakeDef->frequency.v[2];
    v29 = shakeDef->frequency.v[1];
    if ( !DCONST_DVARINT_handheldCameraOctaves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraOctaves") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v30 = (char *)&queryFormat.fmt + 3;
    if ( isBlending )
      v30 = "BLENDING ";
    LODWORD(y) = v20->current.integer;
    Com_sprintf(dest, 0x1800ui64, "^7=== BASE ===\n^7Name: ^5%s%s\n^7Octaves: ^5%i\n^7Frequency: ^5(%.2f, %.2f, %.2f)\n^7Amplitude: ^5(%.2f, %.2f, %.2f)\n^7Persistence: ^5(%.2f, %.2f, %.2f)\n", v30, assetName, y, v21, v29, v28, v27, v26, v25, v24, v23, v22);
    UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    v31 = offsetY + debugDraw->m_drawY;
    debugDraw->m_drawY = v31;
    type = shakeDef->moveSpeedModifiers.type;
    if ( type )
    {
      v33 = debugDraw->m_drawX;
      v34 = "MOVEMENT SPEED";
      if ( type == COUNT )
        v34 = "SCRIPT";
      ShakePerlinScale::DebugDraw(&this->m_movement, &shakeDef->moveSpeedModifiers, debugDraw, v34);
      debugDraw->m_drawX = v33 + offsetX;
      debugDraw->m_drawY = v31;
    }
    v35 = shakeDef->viewSpeedModifiers.type;
    if ( v35 )
    {
      v36 = "VIEW SPEED";
      if ( v35 == COUNT )
        v36 = "SCRIPT";
      ShakePerlinScale::DebugDraw(&this->m_view, &shakeDef->viewSpeedModifiers, debugDraw, v36);
    }
    debugDraw->m_drawY = v31 + offsetY;
    debugDraw->m_drawX = m_drawX;
    m_amplitudeScale = this->m_combined.m_amplitudeScale;
    Com_sprintf(dest, 0x1800ui64, "^7=== %sFINAL ===\n^7Combine Type: ^5%s\n^7Frequency: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Amplitude: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Persistence: ^5(%.2f, %.2f, %.2f)  %.2fx\n", v30, cg_shakeCombineType[shakeDef->modifierCombineType], (float)(this->m_combined.m_speedScale * shakeDef->frequency.v[0]), (float)(this->m_combined.m_speedScale * shakeDef->frequency.v[1]), (float)(this->m_combined.m_speedScale * shakeDef->frequency.v[2]), this->m_combined.m_speedScale, (float)(m_amplitudeScale * shakeDef->amplitude.v[0]), (float)(m_amplitudeScale * shakeDef->amplitude.v[1]), (float)(m_amplitudeScale * shakeDef->amplitude.v[2]), m_amplitudeScale, (float)(this->m_combined.m_persistenceScale * shakeDef->persistence.v[0]), (float)(this->m_combined.m_persistenceScale * shakeDef->persistence.v[1]), (float)(this->m_combined.m_persistenceScale * shakeDef->persistence.v[2]), this->m_combined.m_persistenceScale);
    UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    debugDraw->m_drawY = offsetY + debugDraw->m_drawY;
    v38 = DVARFLT_handheldCameraRotationScale;
    if ( !DVARFLT_handheldCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRotationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    value = v38->current.value;
    v40 = DVARFLT_handheldCameraTranslationScale;
    if ( !DVARFLT_handheldCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraTranslationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = v40->current.value;
    if ( value != 1.0 || v41 != 1.0 )
    {
      Com_sprintf(dest, 0x1800ui64, "^7=== DESIGN SCALAR MODIFIERS ===\n^7handheldCameraRotationScale: ^1%.2fx\n^7handheldCameraTranslationScale: ^1%.2fx\n", value, v41);
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
      debugDraw->m_drawY = offsetY + debugDraw->m_drawY;
    }
    Def = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
    if ( Def )
    {
      if ( Def->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
      {
        handheldCameraTransScale = Def->firstPerson.handheldCameraTransScale;
        handheldCameraRotScale = Def->firstPerson.handheldCameraRotScale;
        if ( handheldCameraTransScale != 1.0 || handheldCameraRotScale != 1.0 || 1.0 != Def->firstPerson.handheldCameraImpulseTransScale || 1.0 != Def->firstPerson.handheldCameraImpulseRotScale )
        {
          v45 = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
          Com_sprintf(dest, 0x1800ui64, "^7=== CAMERA ASSET MODIFIERS (%s) ===\n^7handheldCameraRotScale: ^1%.2fx\n^7handheldCameraTransScale: ^1%.2fx\n", v45->name, handheldCameraRotScale, handheldCameraTransScale);
          UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
          debugDraw->m_drawY = offsetY + debugDraw->m_drawY;
        }
      }
    }
  }
  else
  {
    v46 = (char *)&queryFormat.fmt + 3;
    if ( isBlending )
      v46 = "BLENDING ";
    Com_sprintf(dest, 0x1800ui64, "^7=== BASE ===\n^7Name: ^5%s%s\n^7DISABLED\n", v46, assetName);
    UI_DrawText(ActivePlacement, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
    debugDraw->m_drawY = offsetY + debugDraw->m_drawY;
  }
}

/*
==============
ShakeImpulseManager::DebugDrawImpulse
==============
*/
void ShakeImpulseManager::DebugDrawImpulse(ShakeImpulseManager *this, const int timeMs, const int startTimeMs, const int attackMs, const int decayMs, const ShakeImpulseDecayType decayType, const ShakeImpulseSourceType sourceType, const float amplitudeScale, const float persistenceScale, const float scale, ShakeStateDebugDraw *debugDraw)
{
  signed __int64 v11; 
  void *v13; 
  GfxFont *FontHandle; 
  __int64 v18; 
  float v20; 
  float v21; 
  float m_debugYAxisScale; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  ShakeImpulseDecayType decayTypea; 
  __int64 numDataEntries; 
  ScreenPlacement *scrPlace; 
  float data[32]; 
  float v33[32]; 
  char dest[6144]; 
  __int128 v35; 

  v13 = alloca(v11);
  v35 = _XMM8;
  memset_0(dest, 0, sizeof(dest));
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  FontHandle = UI_GetFontHandle(scrPlace, SHAKE_DEBUG_FONT_TYPE, SHAKE_DEBUG_FONT_SCALE);
  Com_sprintf(dest, 0x1800ui64, "^7= %s (%.2f) =\n", cg_shakeImpulseSourceTypes[(char)sourceType], scale);
  UI_DrawText(scrPlace, dest, 6144, FontHandle, debugDraw->m_drawX, debugDraw->m_drawY, 2, 2, SHAKE_DEBUG_FONT_SCALE, &colorWhite, 3);
  v18 = 0i64;
  debugDraw->m_drawY = debugDraw->m_drawY + 12.0;
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  do
  {
    v20 = (float)v18;
    LOBYTE(decayTypea) = decayType;
    v21 = CG_ShakeImpulse_CalcFraction((int)(float)((float)((float)(v20 * 0.032258064) * (float)this->m_debugXAxisScale) + (float)startTimeMs), startTimeMs, attackMs, decayMs, decayTypea);
    m_debugYAxisScale = this->m_debugYAxisScale;
    if ( m_debugYAxisScale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1737, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( m_debugYAxisScale )", "%s < %s\n\t%g, %g", "0.0f", "m_debugYAxisScale", *(double *)&_XMM8, m_debugYAxisScale) )
      __debugbreak();
    v23 = 1.0 / this->m_debugYAxisScale;
    data[v18] = (float)(v21 * amplitudeScale) * v23;
    v33[v18++] = (float)((float)(v21 * persistenceScale) + (float)(1.0 - v21)) * v23;
  }
  while ( (unsigned __int64)v18 < 0x20 );
  if ( this->m_debugXAxisScale <= 0 )
  {
    LODWORD(numDataEntries) = this->m_debugXAxisScale;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1742, ASSERT_TYPE_ASSERT, "( 0 ) < ( m_debugXAxisScale )", "%s < %s\n\t%i, %i", "0", "m_debugXAxisScale", 0i64, numDataEntries) )
      __debugbreak();
  }
  LOBYTE(decayTypea) = decayType;
  v24 = (float)(timeMs - startTimeMs) / (float)this->m_debugXAxisScale;
  v25 = CG_ShakeImpulse_CalcFraction(timeMs, startTimeMs, attackMs, decayMs, decayTypea);
  CG_DebugGraphs_DrawAxes(scrPlace, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX_0, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY_0, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, &colorWhite);
  v26 = (float)(v25 * amplitudeScale) / this->m_debugYAxisScale;
  CG_DebugGraphs_DrawGraphData(scrPlace, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX_0, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY_0, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, 0.0, 1.0, data, 0x20u, 0, &colorCyan);
  CG_DebugGraphs_DrawGraphDatapoint(scrPlace, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX_0, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY_0, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, v24, v26, &colorCyan);
  v27 = (float)((float)(v25 * persistenceScale) + (float)(1.0 - v25)) / this->m_debugYAxisScale;
  CG_DebugGraphs_DrawGraphData(scrPlace, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX_0, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY_0, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, 0.0, 1.0, v33, 0x20u, 0, &colorGreen);
  CG_DebugGraphs_DrawGraphDatapoint(scrPlace, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX_0, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY_0, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, v24, v27, &colorGreen);
  CG_DebugGraphs_DrawGraphXAxisDatapoint(scrPlace, (float)(debugDraw->m_drawX + 320.0) + graphAdjustX_0, (float)(debugDraw->m_drawY + 240.0) + graphAdjustY_0, SHAKE_DEBUG_GRAPH_WIDTH, SHAKE_DEBUG_GRAPH_HEIGHT, v24, 4.0, 4.0, &colorYellow);
}

/*
==============
Shake::Load
==============
*/
void Shake::Load(Shake *this, MemoryFile *memFile)
{
  base_vec3_t<int> *p_m_xCoordTrans; 
  unsigned int i; 
  unsigned int v6; 
  int v7; 
  int v8; 
  int v9; 
  float *p_m_persistenceScale; 
  unsigned int v11; 
  double Float; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v62; 
  __int64 v63; 
  __int64 v64; 
  char v65; 
  char v66; 
  char v67; 
  char v68; 
  char v69; 
  char v70[3]; 
  int v71; 
  unsigned int v72; 
  unsigned int p; 
  int v74; 
  int v75; 

  MemFile_ReadData(memFile, 1ui64, &p);
  p_m_xCoordTrans = &this->m_xCoordTrans;
  this->m_initialized = p;
  v72 = 0;
  for ( i = 0; (int)i < 3; ++i )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v6 = p;
    if ( i >= 3 )
    {
      LODWORD(v64) = 3;
      LODWORD(v63) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    p_m_xCoordTrans[-1].v[0] = v6;
    MemFile_ReadData(memFile, 4ui64, &v74);
    v7 = v74;
    if ( i >= 3 )
    {
      LODWORD(v64) = 3;
      LODWORD(v63) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    p_m_xCoordTrans->v[0] = v7;
    MemFile_ReadData(memFile, 4ui64, &v75);
    v8 = v75;
    if ( i >= 3 )
    {
      LODWORD(v64) = 3;
      LODWORD(v63) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    p_m_xCoordTrans[1].v[0] = v8;
    MemFile_ReadData(memFile, 4ui64, &v71);
    v9 = v71;
    if ( i >= 3 )
    {
      LODWORD(v64) = 3;
      LODWORD(v63) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    p_m_xCoordTrans[2].v[0] = v9;
    p_m_xCoordTrans = (base_vec3_t<int> *)((char *)p_m_xCoordTrans + 4);
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_curStateIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_curMotionIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_goalMotionIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_blendStart = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  p_m_persistenceScale = &this->m_shakeState[0].m_translation.m_movement.m_persistenceScale;
  v11 = v72;
  this->m_blendDuration = p;
  do
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    *((_BYTE *)p_m_persistenceScale + 76) = p;
    Float = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[20] = *(float *)&Float;
    v13 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[21] = *(float *)&v13;
    v14 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[22] = *(float *)&v14;
    v15 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[23] = *(float *)&v15;
    v16 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[24] = *(float *)&v16;
    v17 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[25] = *(float *)&v17;
    MemFile_ReadData(memFile, 1ui64, &v74);
    *((_BYTE *)p_m_persistenceScale - 132) = v74;
    MemFile_ReadData(memFile, 1ui64, &v75);
    *((_BYTE *)p_m_persistenceScale - 160) = v75;
    v18 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 43) = *(float *)&v18;
    v19 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 42) = *(float *)&v19;
    v20 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 41) = *(float *)&v20;
    v21 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 39) = *(float *)&v21;
    v22 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 38) = *(float *)&v22;
    v23 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 37) = *(float *)&v23;
    v24 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 36) = *(float *)&v24;
    MemFile_ReadData(memFile, 1ui64, &v65);
    *((_BYTE *)p_m_persistenceScale - 116) = v65;
    v25 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 32) = *(float *)&v25;
    v26 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 31) = *(float *)&v26;
    v27 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 30) = *(float *)&v27;
    v28 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 28) = *(float *)&v28;
    v29 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 27) = *(float *)&v29;
    v30 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 26) = *(float *)&v30;
    v31 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 25) = *(float *)&v31;
    MemFile_ReadData(memFile, 1ui64, &v66);
    *((_BYTE *)p_m_persistenceScale - 76) = v66;
    v32 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 22) = *(float *)&v32;
    v33 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 21) = *(float *)&v33;
    v34 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 20) = *(float *)&v34;
    v35 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 18) = *(float *)&v35;
    v36 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 17) = *(float *)&v36;
    v37 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 16) = *(float *)&v37;
    v38 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 15) = *(float *)&v38;
    MemFile_ReadData(memFile, 1ui64, &v67);
    *((_BYTE *)p_m_persistenceScale - 8) = v67;
    MemFile_ReadData(memFile, 1ui64, &v68);
    *((_BYTE *)p_m_persistenceScale - 36) = v68;
    v39 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 12) = *(float *)&v39;
    v40 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 11) = *(float *)&v40;
    v41 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 10) = *(float *)&v41;
    v42 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 8) = *(float *)&v42;
    v43 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 7) = *(float *)&v43;
    v44 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 6) = *(float *)&v44;
    v45 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 5) = *(float *)&v45;
    MemFile_ReadData(memFile, 1ui64, &v69);
    *((_BYTE *)p_m_persistenceScale + 8) = v69;
    v46 = MemFile_ReadFloat(memFile);
    *(p_m_persistenceScale - 1) = *(float *)&v46;
    v47 = MemFile_ReadFloat(memFile);
    *p_m_persistenceScale = *(float *)&v47;
    v48 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[1] = *(float *)&v48;
    v49 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[3] = *(float *)&v49;
    v50 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[4] = *(float *)&v50;
    v51 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[5] = *(float *)&v51;
    v52 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[6] = *(float *)&v52;
    MemFile_ReadData(memFile, 1ui64, v70);
    *((_BYTE *)p_m_persistenceScale + 48) = v70[0];
    v53 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[9] = *(float *)&v53;
    v54 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[10] = *(float *)&v54;
    v55 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[11] = *(float *)&v55;
    v56 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[13] = *(float *)&v56;
    v57 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[14] = *(float *)&v57;
    v58 = MemFile_ReadFloat(memFile);
    p_m_persistenceScale[15] = *(float *)&v58;
    v59 = MemFile_ReadFloat(memFile);
    ++v11;
    p_m_persistenceScale[16] = *(float *)&v59;
    p_m_persistenceScale += 69;
  }
  while ( v11 < 2 );
  this->m_impulseManager.m_initialized = 0;
  p_m_listHead = &this->m_impulseManager.m_impulseList.m_listHead;
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_impulseManager.m_impulseList.m_listHead )
  {
    do
    {
      v62 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseManager.m_impulseList.m_freelist.m_head;
      this->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = mp_next;
      mp_next = v62;
    }
    while ( v62 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next = &this->m_impulseManager.m_impulseList.m_listHead.m_sentinel;
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
}

/*
==============
ShakePerlinScale::Load
==============
*/
void ShakePerlinScale::Load(ShakePerlinScale *this, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  bool p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  this->m_initialized = p;
  Float = MemFile_ReadFloat(memFile);
  this->m_speedScale = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  this->m_persistenceScale = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  this->m_amplitudeScale = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  this->m_speedScaleInstant = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  this->m_persistenceScaleInstant = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  this->m_amplitudeScaleInstant = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  this->m_value = *(float *)&v10;
}

/*
==============
ShakeState::Load
==============
*/
void ShakeState::Load(ShakeState *this, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  bool p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  this->m_initialized = p;
  Float = MemFile_ReadFloat(memFile);
  this->m_prevViewAngles.v[0] = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  this->m_prevViewAngles.v[1] = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  this->m_prevViewAngles.v[2] = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  this->m_prevOrigin.v[0] = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  this->m_prevOrigin.v[1] = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  this->m_prevOrigin.v[2] = *(float *)&v9;
  MemFile_ReadData(memFile, 1ui64, &p);
  this->m_rotation.m_initialized = p;
  ShakePerlinScale::Load(&this->m_rotation.m_combined, memFile);
  ShakePerlinScale::Load(&this->m_rotation.m_movement, memFile);
  ShakePerlinScale::Load(&this->m_rotation.m_view, memFile);
  MemFile_ReadData(memFile, 1ui64, &p);
  this->m_translation.m_initialized = p;
  ShakePerlinScale::Load(&this->m_translation.m_combined, memFile);
  ShakePerlinScale::Load(&this->m_translation.m_movement, memFile);
  ShakePerlinScale::Load(&this->m_translation.m_view, memFile);
}

/*
==============
ShakeStateInternal::Load
==============
*/
void ShakeStateInternal::Load(ShakeStateInternal *this, MemoryFile *memFile)
{
  bool p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  this->m_initialized = p;
  ShakePerlinScale::Load(&this->m_combined, memFile);
  ShakePerlinScale::Load(&this->m_movement, memFile);
  ShakePerlinScale::Load(&this->m_view, memFile);
}

/*
==============
Shake::Reset
==============
*/
void Shake::Reset(Shake *this)
{
  bool *p_m_initialized; 
  unsigned int v2; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v5; 

  p_m_initialized = &this->m_shakeState[0].m_translation.m_initialized;
  v2 = 0;
  do
  {
    *(p_m_initialized - 124) = 0;
    v2 += 2;
    *p_m_initialized = 0;
    p_m_initialized[84] = 0;
    p_m_initialized[152] = 0;
    p_m_initialized[276] = 0;
    p_m_initialized[360] = 0;
    p_m_initialized += 552;
  }
  while ( v2 < 2 );
  this->m_impulseManager.m_initialized = 0;
  p_m_listHead = &this->m_impulseManager.m_impulseList.m_listHead;
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_impulseManager.m_impulseList.m_listHead )
  {
    do
    {
      v5 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseManager.m_impulseList.m_freelist.m_head;
      this->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = mp_next;
      mp_next = v5;
    }
    while ( v5 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next = &this->m_impulseManager.m_impulseList.m_listHead.m_sentinel;
  *(_QWORD *)&this->m_xCoordRot.xy.y = 0i64;
  this->m_xCoordRot.v[0] = 0;
  *(_QWORD *)&this->m_xCoordTrans.xy.y = 0i64;
  this->m_xCoordTrans.v[0] = 0;
  *(_QWORD *)&this->m_xCoordImpulseRot.xy.y = 0i64;
  this->m_xCoordImpulseRot.v[0] = 0;
  *(_QWORD *)&this->m_xCoordImpulseTrans.xy.y = 0i64;
  this->m_xCoordImpulseTrans.v[0] = 0;
  this->m_curStateIndex = 0;
  this->m_curMotionIndex = 31;
  *(_QWORD *)&this->m_goalMotionIndex = 31i64;
  this->m_blendDuration = 0;
  this->m_initialized = 1;
}

/*
==============
ShakeImpulseManager::Reset
==============
*/
void ShakeImpulseManager::Reset(ShakeImpulseManager *this)
{
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v3; 

  this->m_initialized = 0;
  p_m_listHead = &this->m_impulseList.m_listHead;
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_impulseList.m_listHead )
  {
    do
    {
      v3 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseList.m_freelist.m_head;
      this->m_impulseList.m_freelist.m_head.mp_next = mp_next;
      mp_next = v3;
    }
    while ( v3 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  this->m_impulseList.m_listHead.m_sentinel.mp_next = &this->m_impulseList.m_listHead.m_sentinel;
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
}

/*
==============
ShakePerlinScale::Reset
==============
*/
void ShakePerlinScale::Reset(ShakePerlinScale *this)
{
  this->m_initialized = 0;
  this->m_speedScale = 1.0;
  this->m_speedScaleInstant = 1.0;
  this->m_amplitudeScale = 1.0;
  this->m_amplitudeScaleInstant = 1.0;
  this->m_persistenceScale = 1.0;
  this->m_persistenceScaleInstant = 1.0;
  this->m_value = 0.0;
}

/*
==============
ShakeState::Reset
==============
*/
void ShakeState::Reset(ShakeState *this)
{
  this->m_rotation.m_initialized = 0;
  this->m_translation.m_initialized = 0;
  this->m_initialized = 0;
}

/*
==============
ShakeStateInternal::Reset
==============
*/
void ShakeStateInternal::Reset(ShakeStateInternal *this)
{
  this->m_initialized = 0;
}

/*
==============
Shake::Save
==============
*/
void Shake::Save(Shake *this, MemoryFile *memFile)
{
  unsigned int v4; 
  base_vec3_t<int> *p_m_xCoordTrans; 
  unsigned int v6; 
  bool v7; 
  float *p_m_persistenceScale; 
  __int64 v9; 
  __int64 v10; 
  unsigned int p; 

  LOBYTE(p) = this->m_initialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  v4 = 0;
  p_m_xCoordTrans = &this->m_xCoordTrans;
  v6 = 0;
  v7 = 1;
  do
  {
    if ( !v7 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    p = p_m_xCoordTrans[-1].v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v6 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    p = p_m_xCoordTrans->v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v6 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    p = p_m_xCoordTrans[1].v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v6 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    p = p_m_xCoordTrans[2].v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    ++v6;
    p_m_xCoordTrans = (base_vec3_t<int> *)((char *)p_m_xCoordTrans + 4);
    v7 = v6 < 3;
  }
  while ( (int)v6 < 3 );
  p = this->m_curStateIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_curMotionIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_goalMotionIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_blendStart;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_blendDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p_m_persistenceScale = &this->m_shakeState[0].m_translation.m_movement.m_persistenceScale;
  do
  {
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale + 76);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteData(memFile, 0xCui64, p_m_persistenceScale + 20);
    MemFile_WriteData(memFile, 0xCui64, p_m_persistenceScale + 23);
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale - 132);
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale - 160);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 43));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 42));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 41));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 39));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 38));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 37));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 36));
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale - 116);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 32));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 31));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 30));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 28));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 27));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 26));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 25));
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale - 76);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 22));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 21));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 20));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 18));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 17));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 16));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 15));
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale - 8);
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale - 36);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 12));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 11));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 10));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 8));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 7));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 6));
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 5));
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale + 8);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, *(p_m_persistenceScale - 1));
    MemFile_WriteFloat(memFile, *p_m_persistenceScale);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[1]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[3]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[4]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[5]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[6]);
    LOBYTE(p) = *((_BYTE *)p_m_persistenceScale + 48);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[9]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[10]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[11]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[13]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[14]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[15]);
    MemFile_WriteFloat(memFile, p_m_persistenceScale[16]);
    ++v4;
    p_m_persistenceScale += 69;
  }
  while ( v4 < 2 );
}

/*
==============
ShakePerlinScale::Save
==============
*/
void ShakePerlinScale::Save(ShakePerlinScale *this, MemoryFile *memFile)
{
  bool p; 

  p = this->m_initialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteFloat(memFile, this->m_speedScale);
  MemFile_WriteFloat(memFile, this->m_persistenceScale);
  MemFile_WriteFloat(memFile, this->m_amplitudeScale);
  MemFile_WriteFloat(memFile, this->m_speedScaleInstant);
  MemFile_WriteFloat(memFile, this->m_persistenceScaleInstant);
  MemFile_WriteFloat(memFile, this->m_amplitudeScaleInstant);
  MemFile_WriteFloat(memFile, this->m_value);
}

/*
==============
ShakeState::Save
==============
*/
void ShakeState::Save(ShakeState *this, MemoryFile *memFile)
{
  bool p; 

  p = this->m_initialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &this->m_prevViewAngles);
  MemFile_WriteData(memFile, 0xCui64, &this->m_prevOrigin);
  p = this->m_rotation.m_initialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  ShakePerlinScale::Save(&this->m_rotation.m_combined, memFile);
  ShakePerlinScale::Save(&this->m_rotation.m_movement, memFile);
  ShakePerlinScale::Save(&this->m_rotation.m_view, memFile);
  p = this->m_translation.m_initialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  ShakePerlinScale::Save(&this->m_translation.m_combined, memFile);
  ShakePerlinScale::Save(&this->m_translation.m_movement, memFile);
  ShakePerlinScale::Save(&this->m_translation.m_view, memFile);
}

/*
==============
ShakeStateInternal::Save
==============
*/
void ShakeStateInternal::Save(ShakeStateInternal *this, MemoryFile *memFile)
{
  bool p; 

  p = this->m_initialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  ShakePerlinScale::Save(&this->m_combined, memFile);
  ShakePerlinScale::Save(&this->m_movement, memFile);
  ShakePerlinScale::Save(&this->m_view, memFile);
}

/*
==============
Shake::Update
==============
*/
void Shake::Update(Shake *this, const LocalClientNum_t localClientNum, ShakeFinal *outRotation, ShakeFinal *outTranslation, ShakeFinal *outImpulseRotation, ShakeFinal *outImpulseTranslation)
{
  unsigned int v6; 
  LocalClientNum_t v8; 
  Shake *v9; 
  cg_t *v10; 
  const CinematicMotionDef *CinematicMotionDef; 
  unsigned int CinematicMotionIndexForPtr; 
  CgWeaponMap *Instance; 
  const CinematicMotionDef *v14; 
  double TimescaleForSv; 
  float v16; 
  float v17; 
  int time; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v21; 
  ntl::internal::list_node<ShakeImpulse> *v22; 
  ntl::internal::list_node<ShakeImpulse> *v23; 
  int m_blendStart; 
  bool v25; 
  const dvar_t *v26; 
  __int64 v27; 
  int *v; 
  bool v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  ShakeFinal *v34; 
  __int64 v35; 
  int v36; 
  cg_t *LocalClientGlobals; 

  v6 = 0;
  v8 = localClientNum;
  v9 = this;
  if ( !outRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 493, ASSERT_TYPE_ASSERT, "( outRotation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outRotation", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 494, ASSERT_TYPE_ASSERT, "( outTranslation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outTranslation", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outImpulseRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 495, ASSERT_TYPE_ASSERT, "( outImpulseRotation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outImpulseRotation", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outImpulseTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 496, ASSERT_TYPE_ASSERT, "( outImpulseTranslation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outImpulseTranslation", "nullptr", NULL, NULL) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(v8);
  v10 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 499, ASSERT_TYPE_ASSERT, "( cgameGlob ) != ( nullptr )", "%s != %s\n\t%p, %p", "cgameGlob", "nullptr", NULL, NULL) )
    __debugbreak();
  CinematicMotionDef = CG_Skydive_GetCinematicMotionDef(v8, &LocalClientGlobals->predictedPlayerState);
  if ( CinematicMotionDef )
  {
    CinematicMotionIndexForPtr = CG_ViewMotion_GetCinematicMotionIndexForPtr(CinematicMotionDef);
  }
  else
  {
    Instance = CgWeaponMap::GetInstance(v8);
    v14 = BG_Suit_GetCinematicMotionDef(&LocalClientGlobals->predictedPlayerState, Instance);
    CinematicMotionIndexForPtr = CG_ViewMotion_GetCinematicMotionIndexForPtr(v14);
    if ( LocalClientGlobals->predictedPlayerState.cinematicMotionOverride != 31 )
      CinematicMotionIndexForPtr = LocalClientGlobals->predictedPlayerState.cinematicMotionOverride;
  }
  if ( CG_ViewMotion_GetCinematicMotionDef(CinematicMotionIndexForPtr) )
  {
    if ( !v9->m_initialized )
      Shake::Reset(v9);
    if ( v9->m_curMotionIndex == 31 )
    {
      v9->m_curMotionIndex = CinematicMotionIndexForPtr;
      v9->m_goalMotionIndex = CinematicMotionIndexForPtr;
    }
    TimescaleForSv = Com_GetTimescaleForSv();
    v16 = *(float *)&TimescaleForSv * cls.frametime_base;
    v17 = (float)(*(float *)&TimescaleForSv * cls.frametime_base) * 1000.0;
    ShakeState::Update(&v9->m_shakeState[v9->m_curStateIndex], v8, *(float *)&TimescaleForSv * cls.frametime_base, v9->m_curMotionIndex);
    time = LocalClientGlobals->time;
    v36 = time;
    if ( !v9->m_impulseManager.m_initialized )
    {
      mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
      p_m_listHead = &v9->m_impulseManager.m_impulseList.m_listHead;
      if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v9->m_impulseManager.m_impulseList.m_listHead )
      {
        do
        {
          v21 = mp_next[1].mp_next;
          mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9->m_impulseManager.m_impulseList.m_freelist.m_head;
          v9->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = mp_next;
          mp_next = v21;
        }
        while ( v21 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
      }
      p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
      v9->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next = &v9->m_impulseManager.m_impulseList.m_listHead.m_sentinel;
      v9->m_impulseManager.m_initialized = 1;
      v9->m_impulseManager.m_debugXAxisScale = 1;
      v9->m_impulseManager.m_debugYAxisScale = 1.0;
    }
    v22 = (ntl::internal::list_node<ShakeImpulse> *)v9->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
    if ( v22 != (ntl::internal::list_node<ShakeImpulse> *)&v9->m_impulseManager.m_impulseList.m_listHead )
    {
      do
      {
        if ( !v22 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        if ( v22->m_data.m_startTimeMs + v22->m_data.m_decayMs + v22->m_data.m_attackMs > time )
        {
          v22 = (ntl::internal::list_node<ShakeImpulse> *)v22->mp_next;
        }
        else
        {
          v23 = v22;
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
            __debugbreak();
          v22 = (ntl::internal::list_node<ShakeImpulse> *)v22->mp_next;
          ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse>>::remove(&v9->m_impulseManager.m_impulseList.m_listHead, v23);
          v23->mp_prev = (ntl::internal::list_node_base *)v9->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next;
          v9->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v23;
          time = v36;
        }
      }
      while ( v22 != (ntl::internal::list_node<ShakeImpulse> *)&v9->m_impulseManager.m_impulseList.m_listHead );
      v10 = LocalClientGlobals;
      v6 = 0;
      v8 = localClientNum;
    }
    m_blendStart = v9->m_blendStart;
    v25 = m_blendStart > 0;
    if ( CinematicMotionIndexForPtr != v9->m_goalMotionIndex || m_blendStart <= 0 && CinematicMotionIndexForPtr != v9->m_curMotionIndex )
    {
      v9->m_goalMotionIndex = CinematicMotionIndexForPtr;
      v9->m_blendStart = v10->time;
      v26 = DCONST_DVARINT_handheldCameraBlendDurationMs;
      if ( !DCONST_DVARINT_handheldCameraBlendDurationMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraBlendDurationMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      v25 = 1;
      v9->m_blendDuration = v26->current.integer;
    }
    LODWORD(v27) = v9->m_curStateIndex;
    if ( v25 )
    {
      v27 = ((_BYTE)v27 - 1) & 1;
      ShakeState::Update(&v9->m_shakeState[v27], v8, v16, v9->m_goalMotionIndex);
    }
    Shake::CalcConstantShakeFinalParams(v9, v10->time, outRotation, outTranslation, outImpulseRotation, outImpulseTranslation);
    if ( v25 && v9->m_blendStart + v9->m_blendDuration <= v10->time )
    {
      v9->m_curStateIndex = v27;
      v9->m_curMotionIndex = CinematicMotionIndexForPtr;
      v9->m_goalMotionIndex = CinematicMotionIndexForPtr;
      *(_QWORD *)&v9->m_blendStart = 0i64;
    }
    if ( !CL_Pause_IsGamePaused() )
    {
      v = v9->m_xCoordTrans.v;
      v29 = 1;
      do
      {
        if ( !v29 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v30 = CG_Shake_CalcXCoord(*(v - 3), v17, v6, outRotation);
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        *(v - 3) = v30;
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v31 = CG_Shake_CalcXCoord(*v, v17, v6, outTranslation);
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        *v = v31;
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v32 = CG_Shake_CalcXCoord(v[3], v17, v6, outImpulseRotation);
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v[3] = v32;
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v33 = CG_Shake_CalcXCoord(v[6], v17, v6, outImpulseTranslation);
        if ( v6 >= 3 )
        {
          LODWORD(v35) = 3;
          LODWORD(v34) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v[6] = v33;
        ++v6;
        ++v;
        v29 = v6 < 3;
      }
      while ( (int)v6 < 3 );
      v9 = this;
    }
    *(double *)outRotation->m_xCoord.v = *(double *)v9->m_xCoordRot.v;
    outRotation->m_xCoord.v[2] = v9->m_xCoordRot.v[2];
    *(double *)outTranslation->m_xCoord.v = *(double *)v9->m_xCoordTrans.v;
    outTranslation->m_xCoord.v[2] = v9->m_xCoordTrans.v[2];
    outImpulseRotation->m_xCoord = v9->m_xCoordImpulseRot;
    outImpulseTranslation->m_xCoord = v9->m_xCoordImpulseTrans;
  }
  else
  {
    v9->m_initialized = 0;
  }
}

/*
==============
ShakeImpulseManager::Update
==============
*/
void ShakeImpulseManager::Update(ShakeImpulseManager *this, const LocalClientNum_t localClientNum, const int timeMs)
{
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v7; 
  ntl::internal::list_node_base *v8; 
  ntl::internal::list_node<ShakeImpulse> *v9; 

  if ( !this->m_initialized )
  {
    mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseList.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &this->m_impulseList.m_listHead;
    if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead )
    {
      do
      {
        v7 = mp_next[1].mp_next;
        mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseList.m_freelist.m_head;
        this->m_impulseList.m_freelist.m_head.mp_next = mp_next;
        mp_next = v7;
      }
      while ( v7 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
    }
    p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
    p_m_listHead->m_sentinel.mp_next = &p_m_listHead->m_sentinel;
    this->m_initialized = 1;
    this->m_debugXAxisScale = 1;
    this->m_debugYAxisScale = 1.0;
  }
  v8 = this->m_impulseList.m_listHead.m_sentinel.mp_next;
  while ( v8 != (ntl::internal::list_node_base *)&this->m_impulseList.m_listHead )
  {
    if ( !v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
    }
    if ( LODWORD(v8[1].mp_prev) + LODWORD(v8[1].mp_next) + HIDWORD(v8[1].mp_prev) > timeMs )
    {
      v8 = v8->mp_next;
    }
    else
    {
      v9 = (ntl::internal::list_node<ShakeImpulse> *)v8;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
        __debugbreak();
      v8 = v8->mp_next;
      ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse>>::remove(&this->m_impulseList.m_listHead, v9);
      v9->mp_prev = (ntl::internal::list_node_base *)this->m_impulseList.m_freelist.m_head.mp_next;
      this->m_impulseList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9;
    }
  }
}

/*
==============
ShakePerlinScale::Update
==============
*/
void ShakePerlinScale::Update(ShakePerlinScale *this, const float frametime, float value, const CinematicShakeModifierDef *const modifierDef)
{
  double v6; 
  float v7; 
  double v8; 
  float v10; 
  float v12; 
  RumbleGraph *nonLinearMap; 
  double ValueFromFraction; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float m_amplitudeScaleInstant; 
  double v20; 
  float m_persistenceScaleInstant; 
  double v22; 
  double v23; 
  __int64 v24; 

  if ( modifierDef->type )
  {
    if ( !this->m_initialized )
    {
      this->m_speedScale = 1.0;
      this->m_speedScaleInstant = 1.0;
      this->m_amplitudeScale = 1.0;
      this->m_amplitudeScaleInstant = 1.0;
      this->m_persistenceScale = 1.0;
      this->m_persistenceScaleInstant = 1.0;
      *(_QWORD *)&this->m_value = 0i64;
      this->m_initialized = 1;
      this->m_outValueSmoothed = 0.0;
    }
    v6 = I_fclamp(value, modifierDef->inSpeedRange.v[0], modifierDef->inSpeedRange.v[1]);
    v7 = frametime * 1000.0;
    this->m_valueInstant = *(float *)&v6;
    v8 = CG_Shake_MovingAverage(this->m_value, *(float *)&v6, modifierDef->inBlendInTimeMs, modifierDef->inBlendOutTimeMs, frametime * 1000.0);
    this->m_value = *(float *)&v8;
    _XMM1 = LODWORD(modifierDef->inSpeedRange.v[1]);
    v10 = *(float *)&_XMM1 - modifierDef->inSpeedRange.v[0];
    if ( v10 <= 0.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1251, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( speedRange )", "%s < %s\n\t%g, %g", "0.0f", "speedRange", *(double *)&_XMM1, v10) )
        __debugbreak();
    }
    v12 = (float)(this->m_value - modifierDef->inSpeedRange.v[0]) / v10;
    I_fclamp(v12, 0.0, 1.0);
    nonLinearMap = modifierDef->nonLinearMap;
    if ( !nonLinearMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1255, ASSERT_TYPE_ASSERT, "( nonLinearGraph ) != ( nullptr )", "%s != %s\n\t%p, %p", "nonLinearGraph", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( !nonLinearMap->knotCount )
    {
      LODWORD(v24) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1256, ASSERT_TYPE_ASSERT, "( 0 ) < ( nonLinearGraph->knotCount )", "%s < %s\n\t%i, %i", "0", "nonLinearGraph->knotCount", 0i64, v24) )
        __debugbreak();
    }
    ValueFromFraction = GraphGetValueFromFraction(nonLinearMap->knotCount, nonLinearMap->knots, v12);
    v15 = (float)((float)(1.0 - *(float *)&ValueFromFraction) * modifierDef->outSpeedScale.v[0]) + (float)(*(float *)&ValueFromFraction * modifierDef->outSpeedScale.v[1]);
    this->m_speedScaleInstant = v15;
    this->m_amplitudeScaleInstant = (float)((float)(1.0 - *(float *)&ValueFromFraction) * modifierDef->outAmplitudeScale.v[0]) + (float)(*(float *)&ValueFromFraction * modifierDef->outAmplitudeScale.v[1]);
    v16 = *(float *)&ValueFromFraction;
    v17 = (float)((float)(1.0 - *(float *)&ValueFromFraction) * modifierDef->outPersistenceScale.v[0]) + (float)(*(float *)&ValueFromFraction * modifierDef->outPersistenceScale.v[1]);
    *(float *)&ValueFromFraction = this->m_speedScale;
    this->m_persistenceScaleInstant = v17;
    v18 = CG_Shake_MovingAverage(*(float *)&ValueFromFraction, v15, modifierDef->outBlendInTimeMs, modifierDef->outBlendOutTimeMs, v7);
    m_amplitudeScaleInstant = this->m_amplitudeScaleInstant;
    this->m_speedScale = *(float *)&v18;
    v20 = CG_Shake_MovingAverage(this->m_amplitudeScale, m_amplitudeScaleInstant, modifierDef->outBlendInTimeMs, modifierDef->outBlendOutTimeMs, v7);
    m_persistenceScaleInstant = this->m_persistenceScaleInstant;
    this->m_amplitudeScale = *(float *)&v20;
    v22 = CG_Shake_MovingAverage(this->m_persistenceScale, m_persistenceScaleInstant, modifierDef->outBlendInTimeMs, modifierDef->outBlendOutTimeMs, v7);
    this->m_persistenceScale = *(float *)&v22;
    v23 = CG_Shake_MovingAverage(this->m_outValueSmoothed, v16, modifierDef->outBlendInTimeMs, modifierDef->outBlendOutTimeMs, v7);
    this->m_outValueSmoothed = *(float *)&v23;
  }
  else
  {
    this->m_speedScale = 1.0;
    this->m_amplitudeScale = 1.0;
    this->m_persistenceScale = 1.0;
    this->m_initialized = 0;
  }
}

/*
==============
ShakeState::Update
==============
*/
void ShakeState::Update(ShakeState *this, const LocalClientNum_t localClientNum, const float frametime, const unsigned int motionIndex)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  bool v11; 
  int pm_type; 
  double CameraShakeVelocity; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const CinematicMotionDef *CinematicMotionDef; 
  const CinematicMotionDef *v21; 
  const CinematicShakeDef *p_camera_shake_rotation; 
  float ScriptOverride; 
  float v24; 
  float v25; 
  float v26; 
  vec3_t v3; 
  __int128 v28; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( frametime > 0.0 )
  {
    v11 = !this->m_initialized;
    v28 = _XMM9;
    if ( v11 )
    {
      *(double *)this->m_prevViewAngles.v = *(double *)LocalClientGlobals->predictedPlayerState.viewangles.v;
      this->m_prevViewAngles.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
      *(double *)this->m_prevOrigin.v = *(double *)LocalClientGlobals->predictedPlayerState.origin.v;
      this->m_prevOrigin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2];
      this->m_rotation.m_initialized = 0;
      this->m_translation.m_initialized = 0;
      this->m_initialized = 1;
    }
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    pm_type = p_predictedPlayerState->pm_type;
    __asm { vxorpd  xmm9, xmm9, xmm9 }
    if ( pm_type == 1 || pm_type == 8 )
    {
      if ( frametime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 885, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frametime )", "%s < %s\n\t%g, %g", "0.0f", "frametime", *(double *)&_XMM9, frametime) )
        __debugbreak();
      v16 = this->m_prevOrigin.v[0] - p_predictedPlayerState->origin.v[0];
      v17 = this->m_prevOrigin.v[1] - p_predictedPlayerState->origin.v[1];
      v18 = this->m_prevOrigin.v[2] - p_predictedPlayerState->origin.v[2];
      v15 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18)) * (float)(1.0 / frametime);
    }
    else if ( CG_Skydive_IsActiveForShake(localClientNum, p_predictedPlayerState) )
    {
      CameraShakeVelocity = CG_Skydive_GetCameraShakeVelocity(localClientNum, p_predictedPlayerState);
      v15 = *(float *)&CameraShakeVelocity;
    }
    else if ( p_predictedPlayerState->groundEntityNum == 2047 )
    {
      v15 = 0.0;
    }
    else
    {
      v15 = fsqrt((float)((float)(p_predictedPlayerState->velocity.v[0] * p_predictedPlayerState->velocity.v[0]) + (float)(p_predictedPlayerState->velocity.v[1] * p_predictedPlayerState->velocity.v[1])) + (float)(p_predictedPlayerState->velocity.v[2] * p_predictedPlayerState->velocity.v[2]));
    }
    AnglesSubtract(&p_predictedPlayerState->viewangles, &this->m_prevViewAngles, &v3);
    if ( frametime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 910, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frametime )", "%s < %s\n\t%g, %g", "0.0f", "frametime", *(double *)&_XMM9, frametime) )
      __debugbreak();
    v19 = fsqrt((float)((float)(v3.v[0] * v3.v[0]) + (float)(v3.v[1] * v3.v[1])) + (float)(v3.v[2] * v3.v[2])) * (float)(1.0 / frametime);
    *(double *)this->m_prevViewAngles.v = *(double *)p_predictedPlayerState->viewangles.v;
    this->m_prevViewAngles.v[2] = p_predictedPlayerState->viewangles.v[2];
    *(double *)this->m_prevOrigin.v = *(double *)p_predictedPlayerState->origin.v;
    this->m_prevOrigin.v[2] = p_predictedPlayerState->origin.v[2];
    CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(motionIndex);
    v21 = CinematicMotionDef;
    if ( CinematicMotionDef && (p_camera_shake_rotation = &CinematicMotionDef->camera_shake_rotation, CinematicMotionDef->camera_shake_rotation.enabled) )
    {
      ScriptOverride = CG_Shake_GetScriptOverride(localClientNum, v15, MOVEMENT, &CinematicMotionDef->camera_shake_rotation.moveSpeedModifiers);
      v24 = CG_Shake_GetScriptOverride(localClientNum, v19, DODGE, &v21->camera_shake_rotation.viewSpeedModifiers);
      ShakeStateInternal::Update(&this->m_rotation, frametime, ScriptOverride, v24, p_camera_shake_rotation);
    }
    else
    {
      this->m_rotation.m_initialized = 0;
    }
    if ( v21 && v21->camera_shake_translation.enabled )
    {
      v25 = CG_Shake_GetScriptOverride(localClientNum, v15, COUNT, &v21->camera_shake_translation.moveSpeedModifiers);
      v26 = CG_Shake_GetScriptOverride(localClientNum, v19, COUNT|DODGE, &v21->camera_shake_translation.viewSpeedModifiers);
      ShakeStateInternal::Update(&this->m_translation, frametime, v25, v26, &v21->camera_shake_translation);
    }
    else
    {
      this->m_translation.m_initialized = 0;
    }
  }
}

/*
==============
ShakeStateInternal::Update
==============
*/
void ShakeStateInternal::Update(ShakeStateInternal *this, const float frametime, const float moveValue, const float viewValue, const CinematicShakeDef *const shakeDef)
{
  float v6; 
  float m_amplitudeScale; 
  float v8; 
  float m_persistenceScale; 

  if ( !this->m_initialized )
  {
    this->m_movement.m_initialized = 0;
    this->m_movement.m_value = 0.0;
    this->m_movement.m_speedScale = 1.0;
    this->m_movement.m_speedScaleInstant = 1.0;
    this->m_movement.m_amplitudeScale = 1.0;
    this->m_movement.m_amplitudeScaleInstant = 1.0;
    this->m_movement.m_persistenceScale = 1.0;
    this->m_movement.m_persistenceScaleInstant = 1.0;
    this->m_view.m_initialized = 0;
    this->m_view.m_speedScale = 1.0;
    this->m_view.m_speedScaleInstant = 1.0;
    this->m_view.m_amplitudeScale = 1.0;
    this->m_view.m_amplitudeScaleInstant = 1.0;
    this->m_view.m_persistenceScale = 1.0;
    this->m_view.m_persistenceScaleInstant = 1.0;
    this->m_view.m_value = 0.0;
    this->m_combined.m_initialized = 0;
    this->m_combined.m_speedScale = 1.0;
    this->m_combined.m_speedScaleInstant = 1.0;
    this->m_combined.m_amplitudeScale = 1.0;
    this->m_combined.m_amplitudeScaleInstant = 1.0;
    this->m_combined.m_persistenceScale = 1.0;
    this->m_combined.m_persistenceScaleInstant = 1.0;
    this->m_combined.m_value = 0.0;
    this->m_initialized = 1;
  }
  ShakePerlinScale::Update(&this->m_movement, frametime, moveValue, &shakeDef->moveSpeedModifiers);
  ShakePerlinScale::Update(&this->m_view, frametime, viewValue, &shakeDef->viewSpeedModifiers);
  v6 = CG_Shake_BlendValues(COERCE_DOUBLE((unsigned __int64)LODWORD(this->m_movement.m_speedScale)), this->m_view.m_speedScale, (const CinematicShakeModifierCombineType)shakeDef->modifierCombineType);
  m_amplitudeScale = this->m_view.m_amplitudeScale;
  this->m_combined.m_speedScale = v6;
  v8 = CG_Shake_BlendValues(COERCE_DOUBLE((unsigned __int64)LODWORD(this->m_movement.m_amplitudeScale)), m_amplitudeScale, (const CinematicShakeModifierCombineType)shakeDef->modifierCombineType);
  m_persistenceScale = this->m_view.m_persistenceScale;
  this->m_combined.m_amplitudeScale = v8;
  this->m_combined.m_persistenceScale = CG_Shake_BlendValues(COERCE_DOUBLE((unsigned __int64)LODWORD(this->m_movement.m_persistenceScale)), m_persistenceScale, (const CinematicShakeModifierCombineType)shakeDef->modifierCombineType);
}

