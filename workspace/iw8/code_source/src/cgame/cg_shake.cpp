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

  p_m_listHead = &this->m_impulseList.m_listHead;
  mp_next = this->m_impulseList.m_listHead.m_sentinel.mp_next;
  v4 = 0i64;
  _RBP = impulse;
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
  _R8 = (ntl::internal::list_node<ShakeImpulse> *)p_m_freelist->m_head.mp_next;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  _R8->mp_prev = NULL;
  _R8->mp_next = NULL;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [r8+10h], ymm0
    vmovsd  xmm1, qword ptr [rbp+20h]
    vmovsd  qword ptr [r8+30h], xmm1
  }
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse>>::insert_before(p_m_listHead, (ntl::internal::list_node<ShakeImpulse> *)p_m_listHead, _R8);
}

/*
==============
CG_ShakeImpulse_CalcFraction
==============
*/
float CG_ShakeImpulse_CalcFraction(const int timeMs, const int startTimeMs, const int attackMs, const int decayMs, const ShakeImpulseDecayType decayType)
{
  int v11; 
  int v17; 
  __int64 v39; 

  v11 = timeMs - startTimeMs;
  if ( timeMs - startTimeMs > 0 )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm8
    }
    if ( attackMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1658, ASSERT_TYPE_ASSERT, "( 0 ) < ( attackMs )", "%s < %s\n\t%i, %i", "0", "attackMs", 0i64, attackMs) )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vxorps  xmm0, xmm0, xmm0
    }
    v17 = v11 - attackMs;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, edi
      vdivss  xmm8, xmm1, xmm0
    }
    if ( decayMs <= 0 )
    {
      LODWORD(v39) = decayMs;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1662, ASSERT_TYPE_ASSERT, "( 0 ) < ( decayMs )", "%s < %s\n\t%i, %i", "0", "decayMs", 0i64, v39) )
        __debugbreak();
    }
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    if ( v17 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, ebx
        vcvtsi2ss xmm0, xmm0, esi
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vsubss  xmm1, xmm6, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm1, xmm6 }
    }
    if ( (_BYTE)decayType )
    {
      if ( (char)decayType == HALF_HALF )
      {
        __asm
        {
          vmulss  xmm0, xmm1, xmm1
          vmulss  xmm1, xmm1, xmm0
        }
      }
      else if ( (char)decayType == LONG )
      {
        __asm
        {
          vsubss  xmm1, xmm6, xmm1
          vmulss  xmm0, xmm1, xmm1
          vmulss  xmm1, xmm0, xmm1
          vsubss  xmm1, xmm6, xmm1
        }
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
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_38]
      vmovaps xmm6, [rsp+98h+var_28]
      vminss  xmm0, xmm1, xmm8
      vmovaps xmm8, [rsp+98h+var_48]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
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
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  char v91[16]; 
  tmat33_t<vec3_t> axis; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RDI = inOutOrigin;
  _RBX = inOutAngles;
  _RSI = inHandheldAngles;
  _R15 = (char *)inImpulseTranslation;
  _R14 = (char *)inHandheldTranslation;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rbp+3Fh+var_B0], xmm0
  }
  if ( (v79 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rbp+3Fh+var_B0], xmm0
  }
  if ( (v80 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rbp+3Fh+var_B0], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 416, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rbp+3Fh+var_B0], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rbp+3Fh+var_B0], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+3Fh+var_B0], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 417, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] )") )
      __debugbreak();
  }
  AnglesToAxis(inOutAngles, &axis);
  if ( _R14 == v91 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [r14+4]
    vmovss  xmm6, dword ptr [r14]
    vmovss  xmm9, dword ptr [r14+8]
    vmulss  xmm3, xmm6, dword ptr [rbp+3Fh+axis]
    vmulss  xmm2, xmm8, dword ptr [rbp+3Fh+axis+0Ch]
    vmulss  xmm1, xmm9, dword ptr [rbp+3Fh+axis+18h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm6, dword ptr [rbp+3Fh+axis+4]
    vmulss  xmm2, xmm8, dword ptr [rbp+3Fh+axis+10h]
    vaddss  xmm7, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbp+3Fh+axis+1Ch]
    vaddss  xmm0, xmm7, dword ptr [rdi]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm8, dword ptr [rbp+3Fh+axis+14h]
    vmulss  xmm3, xmm6, dword ptr [rbp+3Fh+axis+8]
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbp+3Fh+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm1, xmm5, dword ptr [rdi+4]
    vmovss  dword ptr [rdi], xmm0
    vaddss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
  if ( _R15 == v91 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [r15+4]
    vmovss  xmm6, dword ptr [r15]
    vmovss  xmm9, dword ptr [r15+8]
    vmulss  xmm3, xmm6, dword ptr [rbp+3Fh+axis]
    vmulss  xmm2, xmm8, dword ptr [rbp+3Fh+axis+0Ch]
    vmulss  xmm1, xmm9, dword ptr [rbp+3Fh+axis+18h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm6, dword ptr [rbp+3Fh+axis+4]
    vmulss  xmm2, xmm8, dword ptr [rbp+3Fh+axis+10h]
    vaddss  xmm7, xmm4, xmm1
    vaddss  xmm0, xmm7, dword ptr [rdi]
    vmulss  xmm1, xmm9, dword ptr [rbp+3Fh+axis+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm6, dword ptr [rbp+3Fh+axis+8]
    vmulss  xmm2, xmm8, dword ptr [rbp+3Fh+axis+14h]
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbp+3Fh+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm1, xmm5, dword ptr [rdi+4]
    vaddss  xmm3, xmm2, dword ptr [rdi+8]
    vmovss  [rbp+3Fh+var_B0], xmm0
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+8], xmm3
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm { vmovss  [rbp+3Fh+var_B0], xmm1 }
  if ( (v86 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm { vmovss  [rbp+3Fh+var_B0], xmm3 }
  if ( (v87 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 427, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutOrigin )[0] ) && !IS_NAN( ( inOutOrigin )[1] ) && !IS_NAN( ( inOutOrigin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm3, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm3
    vmovss  xmm0, dword ptr [rsi+4]
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vaddss  xmm2, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm2
    vaddss  xmm0, xmm3, dword ptr [rax]
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm3, xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rbx+4], xmm3
    vaddss  xmm1, xmm2, dword ptr [rax+8]
    vmovss  [rbp+3Fh+var_B0], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v88 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm { vmovss  [rbp+3Fh+var_B0], xmm3 }
  if ( (v89 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm { vmovss  [rbp+3Fh+var_B0], xmm1 }
  if ( (v90 & 0x7F800000) == 2139095040 )
  {
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 432, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOutAngles )[0] ) && !IS_NAN( ( inOutAngles )[1] ) && !IS_NAN( ( inOutAngles )[2] )") )
      __debugbreak();
  }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_Shake_BlendValues
==============
*/

float __fastcall CG_Shake_BlendValues(double a, double b, const CinematicShakeModifierCombineType type)
{
  __int32 v8; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmovaps xmm6, xmm1
  }
  if ( (unsigned int)type >= (COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1009, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( type ) ) < (unsigned)( static_cast<int>( CinematicShakeModifierCombineType::COUNT ) )", "static_cast<int>( type ) doesn't index static_cast<int>( CinematicShakeModifierCombineType::COUNT )\n\t%i not in [0, %i)", type, 3) )
    __debugbreak();
  v8 = type - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, xmm6
        vmovaps xmm6, [rsp+68h+var_18]
        vmovaps xmm7, [rsp+68h+var_28]
      }
    }
    else
    {
      __asm
      {
        vmaxss  xmm0, xmm7, xmm6
        vmovaps xmm6, [rsp+68h+var_18]
        vmovaps xmm7, [rsp+68h+var_28]
      }
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm7, xmm6
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Shake_CalcHandheldCamera
==============
*/
void CG_Shake_CalcHandheldCamera(const LocalClientNum_t localClientNum, vec3_t *outHandheldTranslation, vec3_t *outImpulseTranslation, vec3_t *outHandheldAngles, vec3_t *outImpulseAngles)
{
  const dvar_t *v12; 
  CgWeaponMap *Instance; 
  Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  int v22; 
  int v30; 
  int v35; 
  const dvar_t *v49; 
  char enabled; 
  int v54; 
  char v71; 
  cg_t *LocalClientGlobals; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  bool outIsAlternate; 
  char v118; 
  LocalClientNum_t localClientNuma; 
  float outAdsRotationScale; 
  float outAdsTranslationScale; 
  Weapon *weapon; 
  vec3_t *v123; 
  ShakeFinal outRotation; 
  ShakeFinal outTranslation; 
  ShakeFinal outImpulseRotation; 
  ShakeFinal shakeFinal; 

  v12 = DCONST_DVARBOOL_handheldCameraEnabled;
  _R14 = outHandheldTranslation;
  _RSI = outImpulseAngles;
  localClientNuma = localClientNum;
  _R12 = outHandheldAngles;
  v123 = outImpulseTranslation;
  if ( !DCONST_DVARBOOL_handheldCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    _R13 = LocalClientGlobals;
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 287, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x1Fu) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x20u) )
    {
      __asm
      {
        vmovaps [rsp+1E0h+var_50], xmm6
        vmovaps [rsp+1E0h+var_60], xmm7
        vmovaps [rsp+1E0h+var_70], xmm8
      }
      Instance = CgWeaponMap::GetInstance(localClientNuma);
      ViewmodelOrOffhandADSSupportWeapon = (Weapon *)BG_GetViewmodelOrOffhandADSSupportWeapon(Instance, &LocalClientGlobals->predictedPlayerState, &outIsAlternate);
      __asm { vmovss  xmm6, dword ptr [r13+7C64Ch] }
      weapon = ViewmodelOrOffhandADSSupportWeapon;
      if ( BG_IsUsingOffhandGestureWeaponADSSupport(Instance, &LocalClientGlobals->predictedPlayerState) )
      {
        *(double *)&_XMM0 = BG_GetOffhandAdsFrac(&LocalClientGlobals->predictedPlayerState);
        __asm { vmovaps xmm6, xmm0 }
      }
      __asm { vmovups xmm2, cs:__xmm@3f8000003f8000003f80000000000000 }
      v22 = 0;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vmovups ymmword ptr [rsp+1E0h+outRotation.m_frequencyBase], ymm1
        vmovups ymmword ptr [rbp+0E0h+outTranslation.m_frequencyBase], ymm1
      }
      *(_QWORD *)&outRotation.m_xCoord.xy.y = 0i64;
      outRotation.m_xCoord.v[0] = 0;
      __asm { vmovups xmm1, xmm2 }
      *(_QWORD *)&outTranslation.m_xCoord.xy.y = 0i64;
      __asm
      {
        vmovups xmmword ptr [rbp+0E0h+outRotation.m_persistenceBase+8], xmm2
        vmovups xmmword ptr [rbp+0E0h+outTranslation.m_persistenceBase+8], xmm2
      }
      outTranslation.m_xCoord.v[0] = 0;
      __asm
      {
        vmovups ymmword ptr [rbp+0E0h+outImpulseRotation.m_frequencyBase], ymm0
        vmovups xmmword ptr [rbp+0E0h+outImpulseRotation.m_persistenceBase+8], xmm2
      }
      *(_QWORD *)&outImpulseRotation.m_xCoord.xy.y = 0i64;
      outImpulseRotation.m_xCoord.v[0] = 0;
      __asm
      {
        vmovups ymmword ptr [rbp+0E0h+shakeFinal.m_frequencyBase], ymm0
        vmovups xmmword ptr [rbp+0E0h+shakeFinal.m_persistenceBase+8], xmm2
      }
      *(_QWORD *)&shakeFinal.m_xCoord.xy.y = 0i64;
      shakeFinal.m_xCoord.v[0] = 0;
      Shake::Update(&LocalClientGlobals->viewShake, localClientNuma, &outRotation, &outTranslation, &outImpulseRotation, &shakeFinal);
      BG_GetADSHandheldCamScale(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->scopeToggleInfo.fractionInfo, weapon, outIsAlternate, &outAdsRotationScale, &outAdsTranslationScale);
      __asm
      {
        vmulss  xmm1, xmm6, [rsp+1E0h+outAdsRotationScale]
        vmovss  xmm7, cs:__real@3f800000
        vmulss  xmm0, xmm6, [rsp+1E0h+outAdsTranslationScale]
        vsubss  xmm3, xmm7, xmm6
      }
      v30 = 0;
      _R15 = _R14;
      _RDI = (char *)_R12 - (char *)_R14;
      __asm
      {
        vaddss  xmm8, xmm1, xmm3
        vaddss  xmm6, xmm0, xmm3
      }
      do
      {
        *(float *)&_XMM0 = CG_Shake_CalcPerlinNoise(SHAKE_ROTATION_SEED, v30, &outRotation);
        v35 = SHAKE_TRANSLATION_SEED;
        __asm { vmovss  dword ptr [rdi+r15], xmm0 }
        *(float *)&_XMM0 = CG_Shake_CalcPerlinNoise(v35, v30, &outTranslation);
        __asm { vmovss  dword ptr [r15], xmm0 }
        _R15 = (vec3_t *)((char *)_R15 + 4);
        ++v30;
      }
      while ( v30 < 3 );
      __asm { vmovss  xmm0, dword ptr [r12] }
      _RDI = (__int64)v123;
      __asm { vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0 }
      if ( (v105 & 0x7F800000) == 2139095040 )
        goto LABEL_64;
      __asm
      {
        vmovss  xmm0, dword ptr [r12+4]
        vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
      }
      if ( (v106 & 0x7F800000) == 2139095040 )
        goto LABEL_64;
      __asm
      {
        vmovss  xmm0, dword ptr [r12+8]
        vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
      }
      if ( (v107 & 0x7F800000) == 2139095040 )
      {
LABEL_64:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 332, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outHandheldAngles )[0] ) && !IS_NAN( ( outHandheldAngles )[1] ) && !IS_NAN( ( outHandheldAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outHandheldAngles )[0] ) && !IS_NAN( ( outHandheldAngles )[1] ) && !IS_NAN( ( outHandheldAngles )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
      }
      if ( (v108 & 0x7F800000) == 2139095040 )
        goto LABEL_65;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+4]
        vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
      }
      if ( (v109 & 0x7F800000) == 2139095040 )
        goto LABEL_65;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+8]
        vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
      }
      if ( (v110 & 0x7F800000) == 2139095040 )
      {
LABEL_65:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outHandheldTranslation )[0] ) && !IS_NAN( ( outHandheldTranslation )[1] ) && !IS_NAN( ( outHandheldTranslation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outHandheldTranslation )[0] ) && !IS_NAN( ( outHandheldTranslation )[1] ) && !IS_NAN( ( outHandheldTranslation )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm8, dword ptr [r12]
        vmovss  dword ptr [r12], xmm0
        vmulss  xmm0, xmm8, dword ptr [r12+4]
        vmovss  dword ptr [r12+4], xmm0
        vmulss  xmm0, xmm8, dword ptr [r12+8]
        vmovss  dword ptr [r12+8], xmm0
        vmulss  xmm0, xmm6, dword ptr [r14+4]
        vmulss  xmm1, xmm6, dword ptr [r14]
        vmovss  dword ptr [r14+4], xmm0
        vmulss  xmm0, xmm6, dword ptr [r14+8]
        vmovss  dword ptr [r14+8], xmm0
        vmovss  dword ptr [r14], xmm1
      }
      *(_QWORD *)outImpulseAngles->v = 0i64;
      outImpulseAngles->v[2] = 0.0;
      *(_QWORD *)_RDI = 0i64;
      *(_DWORD *)(_RDI + 8) = 0;
      v49 = DCONST_DVARBOOL_handheldCameraImpulsesEnabled;
      if ( !DCONST_DVARBOOL_handheldCameraImpulsesEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulsesEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      enabled = v49->current.enabled;
      v118 = enabled;
      if ( enabled )
      {
        _RBX = _RDI;
        _R15 = (char *)outImpulseAngles - _RDI;
        do
        {
          *(float *)&_XMM0 = CG_Shake_CalcPerlinNoise(SHAKE_ROTATION_IMPULSE_SEED, v22, &outImpulseRotation);
          __asm { vaddss  xmm0, xmm0, dword ptr [r15+rbx] }
          v54 = SHAKE_TRANSLATION_IMPULSE_SEED;
          __asm { vmovss  dword ptr [r15+rbx], xmm0 }
          *(float *)&_XMM0 = CG_Shake_CalcPerlinNoise(v54, v22, &shakeFinal);
          __asm { vaddss  xmm0, xmm0, dword ptr [rbx] }
          ++v22;
          __asm { vmovss  dword ptr [rbx], xmm0 }
          _RBX += 4i64;
        }
        while ( v22 < 3 );
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v111 & 0x7F800000) == 2139095040 )
          goto LABEL_66;
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+4]
          vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v112 & 0x7F800000) == 2139095040 )
          goto LABEL_66;
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+8]
          vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v113 & 0x7F800000) == 2139095040 )
        {
LABEL_66:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 351, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outImpulseAngles )[0] ) && !IS_NAN( ( outImpulseAngles )[1] ) && !IS_NAN( ( outImpulseAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outImpulseAngles )[0] ) && !IS_NAN( ( outImpulseAngles )[1] ) && !IS_NAN( ( outImpulseAngles )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v114 & 0x7F800000) == 2139095040 )
          goto LABEL_67;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v115 & 0x7F800000) == 2139095040 )
          goto LABEL_67;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v116 & 0x7F800000) == 2139095040 )
        {
LABEL_67:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 352, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outImpulseTranslation )[0] ) && !IS_NAN( ( outImpulseTranslation )[1] ) && !IS_NAN( ( outImpulseTranslation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outImpulseTranslation )[0] ) && !IS_NAN( ( outImpulseTranslation )[1] ) && !IS_NAN( ( outImpulseTranslation )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm8, dword ptr [rsi]
          vmulss  xmm1, xmm8, dword ptr [rsi+4]
        }
        enabled = v118;
        __asm
        {
          vmovss  dword ptr [rsi], xmm0
          vmulss  xmm0, xmm8, dword ptr [rsi+8]
          vmovss  dword ptr [rsi+8], xmm0
          vmovss  dword ptr [rsi+4], xmm1
          vmulss  xmm1, xmm6, dword ptr [rdi]
          vmulss  xmm0, xmm6, dword ptr [rdi+4]
          vmovss  dword ptr [rdi], xmm1
          vmulss  xmm1, xmm6, dword ptr [rdi+8]
          vmovss  dword ptr [rdi+8], xmm1
          vmovss  dword ptr [rdi+4], xmm0
        }
      }
      _RBX = DVARFLT_handheldCameraRotationScale;
      __asm
      {
        vmovaps xmm8, [rsp+1E0h+var_70]
        vmovaps xmm6, [rsp+1E0h+var_50]
      }
      if ( !DVARFLT_handheldCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRotationScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+28h]
        vucomiss xmm2, xmm7
      }
      if ( !v71 )
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [r12]
          vmulss  xmm1, xmm2, dword ptr [r12+4]
          vmovss  dword ptr [r12], xmm0
          vmulss  xmm0, xmm2, dword ptr [r12+8]
          vmovss  dword ptr [r12+8], xmm0
          vmovss  dword ptr [r12+4], xmm1
        }
        if ( enabled )
        {
          __asm
          {
            vmulss  xmm0, xmm2, dword ptr [rsi]
            vmulss  xmm1, xmm2, dword ptr [rsi+4]
            vmovss  dword ptr [rsi], xmm0
            vmulss  xmm0, xmm2, dword ptr [rsi+8]
            vmovss  dword ptr [rsi+8], xmm0
            vmovss  dword ptr [rsi+4], xmm1
          }
        }
      }
      _RBX = DVARFLT_handheldCameraTranslationScale;
      if ( !DVARFLT_handheldCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraTranslationScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+28h]
        vucomiss xmm2, xmm7
      }
      if ( !v71 )
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [r14]
          vmulss  xmm1, xmm2, dword ptr [r14+4]
          vmovss  dword ptr [r14], xmm0
          vmulss  xmm0, xmm2, dword ptr [r14+8]
          vmovss  dword ptr [r14+8], xmm0
          vmovss  dword ptr [r14+4], xmm1
        }
        if ( enabled )
        {
          __asm
          {
            vmulss  xmm0, xmm2, dword ptr [rdi]
            vmulss  xmm1, xmm2, dword ptr [rdi+4]
            vmovss  dword ptr [rdi], xmm0
            vmulss  xmm0, xmm2, dword ptr [rdi+8]
            vmovss  dword ptr [rdi+8], xmm0
            vmovss  dword ptr [rdi+4], xmm1
          }
        }
      }
      _RAX = CG_Camera_Active_TryGetDef(localClientNuma);
      if ( _RAX )
      {
        if ( _RAX->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
        {
          __asm
          {
            vmovss  xmm5, dword ptr [rax+60h]
            vucomiss xmm5, xmm7
            vmovss  xmm4, dword ptr [rax+64h]
            vmovss  xmm2, dword ptr [rax+68h]
            vmovss  xmm3, dword ptr [rax+6Ch]
          }
          if ( _RAX->profile )
            goto LABEL_59;
          __asm { vucomiss xmm4, xmm7 }
          if ( _RAX->profile )
            goto LABEL_59;
          __asm { vucomiss xmm2, xmm7 }
          if ( _RAX->profile )
            goto LABEL_59;
          __asm { vucomiss xmm3, xmm7 }
          if ( _RAX->profile )
          {
LABEL_59:
            __asm
            {
              vmulss  xmm0, xmm4, dword ptr [r12]
              vmulss  xmm1, xmm4, dword ptr [r12+4]
              vmovss  dword ptr [r12], xmm0
              vmulss  xmm0, xmm4, dword ptr [r12+8]
              vmovss  dword ptr [r12+8], xmm0
              vmovss  dword ptr [r12+4], xmm1
              vmulss  xmm1, xmm5, dword ptr [r14]
              vmulss  xmm0, xmm5, dword ptr [r14+4]
              vmovss  dword ptr [r14], xmm1
              vmulss  xmm1, xmm5, dword ptr [r14+8]
              vmovss  dword ptr [r14+8], xmm1
              vmovss  dword ptr [r14+4], xmm0
            }
            if ( enabled )
            {
              __asm
              {
                vmulss  xmm0, xmm3, dword ptr [rsi]
                vmulss  xmm1, xmm3, dword ptr [rsi+4]
                vmovss  dword ptr [rsi], xmm0
                vmulss  xmm0, xmm3, dword ptr [rsi+8]
                vmovss  dword ptr [rsi+8], xmm0
                vmovss  dword ptr [rsi+4], xmm1
                vmulss  xmm1, xmm2, dword ptr [rdi]
                vmulss  xmm0, xmm2, dword ptr [rdi+4]
                vmovss  dword ptr [rdi], xmm1
                vmulss  xmm1, xmm2, dword ptr [rdi+8]
                vmovss  dword ptr [rdi+8], xmm1
                vmovss  dword ptr [rdi+4], xmm0
              }
            }
          }
        }
      }
      __asm { vmovaps xmm7, [rsp+1E0h+var_60] }
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
  bool v10; 
  bool v11; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  int v18; 
  int integer; 
  int v28; 
  char v29; 
  char v30; 
  float fmt; 
  __int64 gridSize; 
  __int64 x; 
  __int64 y; 
  double ya; 
  double v45; 

  _RBX = axis;
  __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
  _RDI = shakeFinal;
  __asm { vmovaps [rsp+0B8h+var_68], xmm9 }
  v10 = (unsigned int)axis <= 3;
  if ( (unsigned int)axis >= 3 )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3);
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+rbx*4+0Ch]
    vmulss  xmm9, xmm0, dword ptr [rdi+28h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm9, xmm6
  }
  if ( v10 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    v16 = DCONST_DVARINT_handheldCameraRepeatPeriodMs;
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
    }
    if ( !DCONST_DVARINT_handheldCameraRepeatPeriodMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRepeatPeriodMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = DCONST_DVARINT_handheldCameraOctaves;
    v18 = _RBX + seed;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+28h]
      vmulss  xmm1, xmm0, cs:SHAKE_COMPENSATION_FACTOR
      vcvttss2si esi, xmm1
    }
    if ( !DCONST_DVARINT_handheldCameraOctaves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraOctaves") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    integer = v17->current.integer;
    __asm
    {
      vmovss  xmm0, cs:__real@3a83126f
      vdivss  xmm7, xmm0, cs:SHAKE_COMPENSATION_FACTOR
    }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(x) = 3;
      LODWORD(gridSize) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", gridSize, x) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rbx*4+18h]
      vmulss  xmm8, xmm0, dword ptr [rdi+2Ch]
      vcomiss xmm7, xmm6
    }
    v28 = base_vec3_t<int>::operator[](&_RDI->m_xCoord, _RBX);
    if ( v29 | v30 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0B8h+var_78], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+0B8h+y], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 664, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frequency )", "%s < %s\n\t%g, %g", "0.0f", "frequency", ya, v45) )
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
    if ( _ESI <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 666, ASSERT_TYPE_ASSERT, "(gridSize > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSize > 0") )
      __debugbreak();
    if ( (v28 < 0 || v28 >= _ESI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 667, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSize") )
      __debugbreak();
    if ( _ESI <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 668, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSize") )
      __debugbreak();
    __asm
    {
      vmovaps xmm2, xmm9; amplitude
      vmovaps xmm1, xmm7; frequency
      vmovss  dword ptr [rsp+0B8h+fmt], xmm8
    }
    *(double *)&_XMM0 = HavokPhysics_GetPerlinNoise2dValue(v18, *(float *)&_XMM1, *(float *)&_XMM2, integer, fmt, _ESI, v28, 0);
    __asm
    {
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm7, [rsp+0B8h+var_48]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm9, [rsp+0B8h+var_68]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Shake_CalcXCoord
==============
*/

__int64 __fastcall CG_Shake_CalcXCoord(const int prevXCoord, double frametimeMs, const int axis, ShakeFinal *shakeFinal)
{
  bool v10; 
  bool v11; 
  int v18; 
  const dvar_t *v19; 
  int v20; 
  __int64 result; 
  __int64 v27; 
  __int64 v29; 
  int v30; 

  _RBX = axis;
  _RSI = shakeFinal;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v10 = (unsigned int)axis <= 3;
  if ( (unsigned int)axis >= 3 )
  {
    v30 = 3;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( axis ) < (unsigned)( 3 )", "axis doesn't index 3\n\t%i not in [0, %i)", axis, v30);
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
    goto LABEL_13;
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v29) = 3;
    LODWORD(v27) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v29) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+rbx*4]
    vmulss  xmm1, xmm0, dword ptr [rsi+24h]
    vmulss  xmm2, xmm1, cs:SHAKE_COMPENSATION_FACTOR
    vmulss  xmm3, xmm2, xmm6
    vcvttss2si eax, xmm3
  }
  if ( _EAX <= 0 )
  {
LABEL_13:
    result = (unsigned int)prevXCoord;
  }
  else
  {
    v18 = I_clamp(_EAX + prevXCoord, 0, 0x7FFFFFFF);
    v19 = DCONST_DVARINT_handheldCameraRepeatPeriodMs;
    v20 = v18;
    if ( !DCONST_DVARINT_handheldCameraRepeatPeriodMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRepeatPeriodMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:SHAKE_COMPENSATION_FACTOR
      vcvttss2si ecx, xmm1
    }
    result = (unsigned int)(v20 % _ECX);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
CG_Shake_GetScriptOverride
==============
*/

float __fastcall CG_Shake_GetScriptOverride(const LocalClientNum_t localClientNum, double value, const CinematicShakeOmnvarType omnvarType, const CinematicShakeModifierDef *modifierDef)
{
  __int64 v5; 
  unsigned int v9; 

  v5 = omnvarType;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  if ( (unsigned int)omnvarType >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 836, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(omnvarType) ) < (unsigned)( ( sizeof( *array_counter( s_omnvarIndices ) ) + 0 ) )", "static_cast<int>(omnvarType) doesn't index ARRAY_COUNT( s_omnvarIndices )\n\t%i not in [0, %i)", omnvarType, 4) )
    __debugbreak();
  if ( !modifierDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 837, ASSERT_TYPE_ASSERT, "( modifierDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "modifierDef", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( modifierDef->type != COUNT )
    goto LABEL_11;
  v9 = s_omnvarIndices_0[v5];
  if ( v9 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 847, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Shake_GetScriptOverride(): 'Script Control' handheld camera settings require omnvar '%s' to be defined.", cg_shakeOmnvarNames[v5]) )
      __debugbreak();
LABEL_11:
    __asm { vmovaps xmm0, xmm6 }
    goto LABEL_12;
  }
  _RBX = CG_Omnvar_GetData(localClientNum, v9);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 852, ASSERT_TYPE_ASSERT, "( omnvarData ) != ( nullptr )", "%s != %s\n\t%p, %p", "omnvarData", "nullptr", NULL, NULL) )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+4] }
LABEL_12:
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CG_Shake_Impulse
==============
*/

void __fastcall CG_Shake_Impulse(const LocalClientNum_t localClientNum, ShakeImpulseSourceType impulseType, double scale)
{
  char v9; 
  const dvar_t *v11; 
  int integer; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  bool enabled; 
  const dvar_t *v25; 
  int v27; 
  const dvar_t *v28; 
  int v29; 
  const dvar_t *v30; 
  char v31; 
  const dvar_t *v40; 
  int v41; 
  const dvar_t *v42; 
  int v43; 
  const dvar_t *v44; 
  char v45; 
  const dvar_t *v54; 
  int v55; 
  const dvar_t *v56; 
  int v57; 
  const dvar_t *v58; 
  char v59; 
  const dvar_t *v68; 
  int v69; 
  const dvar_t *v70; 
  int v71; 
  const dvar_t *v72; 
  char v73; 
  cg_t *LocalClientGlobals; 
  int time; 
  __int64 v100; 
  ShakeImpulse impulse; 
  _DWORD v102[3]; 
  bool v103; 
  _BYTE v108[4]; 
  int v110; 
  int v111; 
  int v112; 
  char v113; 
  char v118; 
  int v120; 
  int v121; 
  int v122; 
  char v123; 
  char v128; 
  int v130; 
  int v131; 
  int v132; 
  char v133; 
  char v138; 
  int v140; 
  int v141; 
  int v142; 
  char v143; 
  char v148; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmm7, xmm2
  }
  v9 = impulseType;
  if ( (unsigned __int64)&v100 != _security_cookie )
  {
    v11 = DCONST_DVARINT_handheldCameraImpulseLandingAttackMs;
    __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
    v102[0] = 0;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    v13 = DCONST_DVARINT_handheldCameraImpulseLandingDecayMs;
    v102[1] = integer;
    if ( !DCONST_DVARINT_handheldCameraImpulseLandingDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = v13->current.integer;
    v15 = DCONST_DVARINT_handheldCameraImpulseLandingDecayType;
    v102[2] = v14;
    if ( !DCONST_DVARINT_handheldCameraImpulseLandingDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    enabled = v15->current.enabled;
    _RBX = DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale;
    v103 = enabled;
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale;
    __asm { vmovss  dword ptr [rbp+90h+var_120+10h], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale;
    __asm { vmovss  dword ptr [rbp+90h+var_120+14h], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale;
    __asm { vmovss  dword ptr [rbp+90h+var_120+18h], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v25 = DCONST_DVARINT_handheldCameraImpulseSlideAttackMs;
    v108[0] = v9;
    v110 = 0;
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  dword ptr [rbp+90h+var_120+1Ch], xmm0
      vmovss  dword ptr [rbp+90h+var_100+4], xmm6
    }
    if ( !DCONST_DVARINT_handheldCameraImpulseSlideAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v27 = v25->current.integer;
    v28 = DCONST_DVARINT_handheldCameraImpulseSlideDecayMs;
    v111 = v27;
    if ( !DCONST_DVARINT_handheldCameraImpulseSlideDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = v28->current.integer;
    v30 = DCONST_DVARINT_handheldCameraImpulseSlideDecayType;
    v112 = v29;
    if ( !DCONST_DVARINT_handheldCameraImpulseSlideDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = v30->current.enabled;
    _RBX = DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale;
    v113 = v31;
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale;
    __asm { vmovss  [rbp+90h+var_E8], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale;
    __asm { vmovss  [rbp+90h+var_E4], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale;
    __asm { vmovss  [rbp+90h+var_E0], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseSlideTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v40 = DCONST_DVARINT_handheldCameraImpulseDamageAttackMs;
    v118 = v9;
    v120 = 0;
    __asm
    {
      vmovss  [rbp+90h+var_DC], xmm0
      vmovss  [rbp+90h+var_D4], xmm6
    }
    if ( !DCONST_DVARINT_handheldCameraImpulseDamageAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = v40->current.integer;
    v42 = DCONST_DVARINT_handheldCameraImpulseDamageDecayMs;
    v121 = v41;
    if ( !DCONST_DVARINT_handheldCameraImpulseDamageDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v43 = v42->current.integer;
    v44 = DCONST_DVARINT_handheldCameraImpulseDamageDecayType;
    v122 = v43;
    if ( !DCONST_DVARINT_handheldCameraImpulseDamageDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v45 = v44->current.enabled;
    _RBX = DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale;
    v123 = v45;
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale;
    __asm { vmovss  [rbp+90h+var_C0], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale;
    __asm { vmovss  [rbp+90h+var_BC], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale;
    __asm { vmovss  [rbp+90h+var_B8], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v54 = DCONST_DVARINT_handheldCameraImpulseImpactAttackMs;
    v128 = v9;
    v130 = 0;
    __asm
    {
      vmovss  [rbp+90h+var_B4], xmm0
      vmovss  [rbp+90h+var_AC], xmm6
    }
    if ( !DCONST_DVARINT_handheldCameraImpulseImpactAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    v55 = v54->current.integer;
    v56 = DCONST_DVARINT_handheldCameraImpulseImpactDecayMs;
    v131 = v55;
    if ( !DCONST_DVARINT_handheldCameraImpulseImpactDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    v57 = v56->current.integer;
    v58 = DCONST_DVARINT_handheldCameraImpulseImpactDecayType;
    v132 = v57;
    if ( !DCONST_DVARINT_handheldCameraImpulseImpactDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    v59 = v58->current.enabled;
    _RBX = DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale;
    v133 = v59;
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale;
    __asm { vmovss  [rbp+90h+var_98], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale;
    __asm { vmovss  [rbp+90h+var_94], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale;
    __asm { vmovss  [rbp+90h+var_90], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseImpactTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v68 = DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs;
    v140 = 0;
    v138 = v9;
    __asm
    {
      vmovss  [rbp+90h+var_8C], xmm0
      vmovss  [rbp+90h+var_84], xmm6
    }
    if ( !DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepAttackMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v68);
    v69 = v68->current.integer;
    v70 = DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs;
    v141 = v69;
    if ( !DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepDecayMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    v71 = v70->current.integer;
    v72 = DCONST_DVARINT_handheldCameraImpulseFootstepDecayType;
    v142 = v71;
    if ( !DCONST_DVARINT_handheldCameraImpulseFootstepDecayType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepDecayType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v72);
    v73 = v72->current.enabled;
    _RBX = DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale;
    v143 = v73;
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepRotAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale;
    __asm { vmovss  [rbp+90h+var_70], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepRotPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale;
    __asm { vmovss  [rbp+90h+var_6C], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepTransAmplitudeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale;
    __asm { vmovss  [rbp+90h+var_68], xmm0 }
    if ( !DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseFootstepTransPersistenceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v148 = v9;
    __asm
    {
      vmovss  [rbp+90h+var_64], xmm0
      vmovss  [rbp+90h+var_5C], xmm6
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    _RDX = 5i64 * v9;
    time = LocalClientGlobals->time;
    __asm
    {
      vmovups ymm0, [rsp+rdx*8+190h+var_120]
      vmovsd  xmm1, [rbp+rdx*8+90h+var_100]
      vmovups ymmword ptr [rsp+190h+impulse.m_startTimeMs], ymm0
      vmulss  xmm0, xmm7, [rsp+190h+impulse.m_transAmplitudeScale]
      vmovsd  qword ptr [rsp+190h+impulse.m_sourceType], xmm1
    }
    *(_DWORD *)impulse.m_sourceType = _RT0;
    __asm
    {
      vmulss  xmm1, xmm7, [rsp+190h+impulse.m_rotAmplitudeScale]
      vmovss  [rsp+190h+impulse.m_rotAmplitudeScale], xmm1
      vmovss  xmm1, [rsp+190h+impulse.m_rotPersistenceScale]
      vsubss  xmm2, xmm1, xmm6
      vmovss  xmm1, [rsp+190h+impulse.m_transPersistenceScale]
      vmovss  [rsp+190h+impulse.m_transAmplitudeScale], xmm0
      vmulss  xmm0, xmm2, xmm7
      vaddss  xmm3, xmm0, xmm6
      vsubss  xmm0, xmm1, xmm6
      vmulss  xmm2, xmm0, xmm7
      vmovss  [rsp+190h+impulse.m_rotPersistenceScale], xmm3
      vaddss  xmm3, xmm2, xmm6
    }
    impulse.m_startTimeMs = time;
    impulse.m_sourceType[0] = v9;
    __asm
    {
      vmovss  [rsp+190h+impulse.m_transPersistenceScale], xmm3
      vmovss  [rsp+190h+impulse.m_scale], xmm7
    }
    ShakeImpulseManager::AddImpulse(&LocalClientGlobals->viewShake.m_impulseManager, &impulse);
    __asm { vmovaps xmm6, [rsp+190h+var_30] }
  }
  __asm { vmovaps xmm7, [rsp+190h+var_40] }
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

float __fastcall CG_Shake_MovingAverage(double previous, double goal, int blendInTimeMs, int blendOutTimeMs, float frametimeMs)
{
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vcomiss xmm1, xmm0
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm7, [rsp+88h+frametimeMs]
    vmovaps xmm6, xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovaps [rsp+88h+var_38], xmm8
    vcomiss xmm7, xmm1
    vmovaps xmm8, xmm0
    vmovss  xmm2, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vdivss  xmm0, xmm1, xmm7
    vcomiss xmm0, xmm2
    vdivss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm1, xmm8
    vsubss  xmm2, xmm8, xmm0
    vmulss  xmm1, xmm1, xmm6
    vaddss  xmm0, xmm2, xmm1
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
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
  unsigned int m_curMotionIndex; 
  int v15; 
  const CinematicMotionDef *CinematicMotionDef; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *i; 
  int mp_prev; 
  ShakeImpulseDecayType fmt; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  _RBP = this;
  m_curMotionIndex = this->m_curMotionIndex;
  _R15 = outRotation;
  __asm { vmovaps xmmword ptr [rax-68h], xmm8 }
  v15 = time;
  _R12 = outTranslation;
  CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(m_curMotionIndex);
  _R14 = CinematicMotionDef;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( _RBP->m_curMotionIndex == _RBP->m_goalMotionIndex )
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
    if ( CinematicMotionDef )
    {
      _R15->m_frequencyBase.v[0] = CinematicMotionDef->camera_shake_rotation.frequency.v[0];
      _R15->m_frequencyBase.v[1] = CinematicMotionDef->camera_shake_rotation.frequency.v[1];
      _R15->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_rotation.frequency.v[2];
      _R15->m_amplitudeBase.v[0] = CinematicMotionDef->camera_shake_rotation.amplitude.v[0];
      _R15->m_amplitudeBase.v[1] = CinematicMotionDef->camera_shake_rotation.amplitude.v[1];
      _R15->m_amplitudeBase.v[2] = CinematicMotionDef->camera_shake_rotation.amplitude.v[2];
      _R15->m_persistenceBase.v[0] = CinematicMotionDef->camera_shake_rotation.persistence.v[0];
      _R15->m_persistenceBase.v[1] = CinematicMotionDef->camera_shake_rotation.persistence.v[1];
      _R15->m_persistenceBase.v[2] = CinematicMotionDef->camera_shake_rotation.persistence.v[2];
      _R12->m_frequencyBase.v[0] = CinematicMotionDef->camera_shake_translation.frequency.v[0];
      _R12->m_frequencyBase.v[1] = CinematicMotionDef->camera_shake_translation.frequency.v[1];
      _R12->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_translation.frequency.v[2];
      _R12->m_amplitudeBase.v[0] = CinematicMotionDef->camera_shake_translation.amplitude.v[0];
      _R12->m_amplitudeBase.v[1] = CinematicMotionDef->camera_shake_translation.amplitude.v[1];
      _R12->m_amplitudeBase.v[2] = CinematicMotionDef->camera_shake_translation.amplitude.v[2];
      _RDI = outImpulseRotation;
      _RSI = outImpulseTranslation;
      _R12->m_persistenceBase.v[0] = CinematicMotionDef->camera_shake_translation.persistence.v[0];
      _R12->m_persistenceBase.v[1] = CinematicMotionDef->camera_shake_translation.persistence.v[1];
      _R12->m_persistenceBase.v[2] = CinematicMotionDef->camera_shake_translation.persistence.v[2];
      *(_QWORD *)outImpulseRotation->m_frequencyBase.v = *(_QWORD *)CinematicMotionDef->camera_shake_impact_rotation.frequency.v;
      outImpulseRotation->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_impact_rotation.frequency.v[2];
      outImpulseRotation->m_amplitudeBase = CinematicMotionDef->camera_shake_impact_rotation.amplitude;
      outImpulseRotation->m_persistenceBase = CinematicMotionDef->camera_shake_impact_rotation.persistence;
      *(_QWORD *)outImpulseTranslation->m_frequencyBase.v = *(_QWORD *)CinematicMotionDef->camera_shake_impact_translation.frequency.v;
      outImpulseTranslation->m_frequencyBase.v[2] = CinematicMotionDef->camera_shake_impact_translation.frequency.v[2];
      outImpulseTranslation->m_amplitudeBase = CinematicMotionDef->camera_shake_impact_translation.amplitude;
      *(_QWORD *)outImpulseTranslation->m_persistenceBase.v = *(_QWORD *)CinematicMotionDef->camera_shake_impact_translation.persistence.v;
      __asm { vmovss  xmm0, dword ptr [r14+24Ch] }
    }
    else
    {
      _RDI = outImpulseRotation;
      _RSI = outImpulseTranslation;
      *(_QWORD *)_R15->m_frequencyBase.v = 0i64;
      *(_QWORD *)&_R15->m_frequencyBase.z = 0i64;
      *(_QWORD *)&_R15->m_amplitudeBase.y = 0i64;
      *(_QWORD *)_R15->m_persistenceBase.v = 0i64;
      _R15->m_persistenceBase.v[2] = 0.0;
      *(_QWORD *)_R12->m_frequencyBase.v = 0i64;
      *(_QWORD *)&_R12->m_frequencyBase.z = 0i64;
      *(_QWORD *)&_R12->m_amplitudeBase.y = 0i64;
      *(_QWORD *)_R12->m_persistenceBase.v = 0i64;
      _R12->m_persistenceBase.v[2] = 0.0;
      *(_OWORD *)outImpulseRotation->m_frequencyBase.v = 0ui64;
      *(_QWORD *)&outImpulseRotation->m_amplitudeBase.y = 0i64;
      *(_QWORD *)outImpulseRotation->m_persistenceBase.v = 0i64;
      outImpulseRotation->m_persistenceBase.v[2] = 0.0;
      *(_OWORD *)outImpulseTranslation->m_frequencyBase.v = 0ui64;
      *(_QWORD *)&outImpulseTranslation->m_amplitudeBase.y = 0i64;
      *(_QWORD *)outImpulseTranslation->m_persistenceBase.v = 0i64;
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    __asm { vmovss  dword ptr [rsi+20h], xmm0 }
    _R15->m_speedScale = _RBP->m_shakeState[_RBP->m_curStateIndex].m_rotation.m_combined.m_speedScale;
    _R15->m_amplitudeScale = _RBP->m_shakeState[_RBP->m_curStateIndex].m_rotation.m_combined.m_amplitudeScale;
    _R15->m_persistenceScale = _RBP->m_shakeState[_RBP->m_curStateIndex].m_rotation.m_combined.m_persistenceScale;
    _R12->m_speedScale = _RBP->m_shakeState[_RBP->m_curStateIndex].m_translation.m_combined.m_speedScale;
    _R12->m_amplitudeScale = _RBP->m_shakeState[_RBP->m_curStateIndex].m_translation.m_combined.m_amplitudeScale;
    _RCX = 276i64 * _RBP->m_curStateIndex;
    __asm { vmovss  xmm1, dword ptr [rcx+rbp+0B0h] }
  }
  else
  {
    __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
    if ( _RBP->m_blendDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 601, ASSERT_TYPE_ASSERT, "( m_blendDuration ) > ( 0 )", "%s > %s\n\t%i, %i", "m_blendDuration", "0", _RBP->m_blendDuration, 0i64) )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+450h]
      vcvtsi2ss xmm1, xmm1, r13d
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm7; max
      vxorps  xmm8, xmm8, xmm8
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    _R13 = CG_ViewMotion_GetCinematicMotionDef(_RBP->m_goalMotionIndex);
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 605, ASSERT_TYPE_ASSERT, "( goalDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "goalDef", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( _R14 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r14+0ACh]
        vmovss  xmm0, dword ptr [r13+0ACh]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [r15], xmm3
        vmovss  xmm4, dword ptr [r14+0B0h]
        vmovss  xmm0, dword ptr [r13+0B0h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [r15+4], xmm3
        vmovss  xmm5, dword ptr [r14+0B4h]
        vmovss  xmm0, dword ptr [r13+0B4h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [r15+8], xmm3
        vmovss  xmm3, dword ptr [r14+0B8h]
        vmovss  xmm0, dword ptr [r13+0B8h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [r15+0Ch], xmm3
        vmovss  xmm4, dword ptr [r14+0BCh]
        vmovss  xmm0, dword ptr [r13+0BCh]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [r15+10h], xmm3
        vmovss  xmm5, dword ptr [r14+0C0h]
        vmovss  xmm0, dword ptr [r13+0C0h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [r15+14h], xmm3
        vmovss  xmm3, dword ptr [r14+0C4h]
        vmovss  xmm0, dword ptr [r13+0C4h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [r15+18h], xmm3
        vmovss  xmm4, dword ptr [r14+0C8h]
        vmovss  xmm0, dword ptr [r13+0C8h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [r15+1Ch], xmm3
        vmovss  xmm5, dword ptr [r14+0CCh]
        vmovss  xmm0, dword ptr [r13+0CCh]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [r15+20h], xmm3
        vmovss  xmm3, dword ptr [r14+15Ch]
        vmovss  xmm0, dword ptr [r13+15Ch]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [r12], xmm3
        vmovss  xmm4, dword ptr [r14+160h]
        vmovss  xmm0, dword ptr [r13+160h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [r12+4], xmm3
        vmovss  xmm5, dword ptr [r14+164h]
        vmovss  xmm0, dword ptr [r13+164h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [r12+8], xmm3
        vmovss  xmm3, dword ptr [r14+168h]
        vmovss  xmm0, dword ptr [r13+168h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [r12+0Ch], xmm3
        vmovss  xmm4, dword ptr [r14+16Ch]
        vmovss  xmm0, dword ptr [r13+16Ch]
        vsubss  xmm1, xmm0, xmm4
      }
      _RDI = outImpulseRotation;
      __asm
      {
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [r12+10h], xmm3
        vmovss  xmm5, dword ptr [r14+170h]
        vmovss  xmm0, dword ptr [r13+170h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [r12+14h], xmm3
        vmovss  xmm3, dword ptr [r14+174h]
        vmovss  xmm0, dword ptr [r13+174h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [r12+18h], xmm3
        vmovss  xmm4, dword ptr [r14+178h]
        vmovss  xmm0, dword ptr [r13+178h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [r12+1Ch], xmm3
        vmovss  xmm5, dword ptr [r14+17Ch]
        vmovss  xmm0, dword ptr [r13+17Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [r12+20h], xmm3
        vmovss  xmm3, dword ptr [r14+208h]
        vmovss  xmm0, dword ptr [r13+208h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi], xmm3
        vmovss  xmm4, dword ptr [r14+20Ch]
        vmovss  xmm0, dword ptr [r13+20Ch]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+4], xmm3
        vmovss  xmm5, dword ptr [r14+210h]
        vmovss  xmm0, dword ptr [r13+210h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rdi+8], xmm3
        vmovss  xmm3, dword ptr [r14+214h]
        vmovss  xmm0, dword ptr [r13+214h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+0Ch], xmm3
        vmovss  xmm4, dword ptr [r14+218h]
        vmovss  xmm0, dword ptr [r13+218h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+10h], xmm3
        vmovss  xmm5, dword ptr [r14+21Ch]
        vmovss  xmm0, dword ptr [r13+21Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rdi+14h], xmm3
        vmovss  xmm3, dword ptr [r14+220h]
        vmovss  xmm0, dword ptr [r13+220h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+18h], xmm3
        vmovss  xmm4, dword ptr [r14+224h]
        vmovss  xmm0, dword ptr [r13+224h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+1Ch], xmm3
        vmovss  xmm5, dword ptr [r14+228h]
        vmovss  xmm0, dword ptr [r13+228h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
      }
      _RSI = outImpulseTranslation;
      __asm
      {
        vmovss  dword ptr [rdi+20h], xmm3
        vmovss  xmm3, dword ptr [r14+22Ch]
        vmovss  xmm0, dword ptr [r13+22Ch]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rsi], xmm3
        vmovss  xmm4, dword ptr [r14+230h]
        vmovss  xmm0, dword ptr [r13+230h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rsi+4], xmm3
        vmovss  xmm5, dword ptr [r14+234h]
        vmovss  xmm0, dword ptr [r13+234h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rsi+8], xmm3
        vmovss  xmm3, dword ptr [r14+238h]
        vmovss  xmm0, dword ptr [r13+238h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rsi+0Ch], xmm3
        vmovss  xmm4, dword ptr [r14+23Ch]
        vmovss  xmm0, dword ptr [r13+23Ch]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rsi+10h], xmm3
        vmovss  xmm5, dword ptr [r14+240h]
        vmovss  xmm0, dword ptr [r13+240h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rsi+14h], xmm3
        vmovss  xmm3, dword ptr [r14+244h]
        vmovss  xmm0, dword ptr [r13+244h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rsi+18h], xmm3
        vmovss  xmm4, dword ptr [r14+248h]
        vmovss  xmm0, dword ptr [r13+248h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rsi+1Ch], xmm3
        vmovss  xmm5, dword ptr [r14+24Ch]
        vmovss  xmm0, dword ptr [r13+24Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [r13+0ACh]
        vmovss  dword ptr [r15], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+0B0h]
        vmovss  dword ptr [r15+4], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+0B4h]
        vmovss  dword ptr [r15+8], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+0B8h]
        vmovss  dword ptr [r15+0Ch], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+0BCh]
        vmovss  dword ptr [r15+10h], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+0C0h]
        vmovss  dword ptr [r15+14h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+0C4h]
        vmovss  dword ptr [r15+18h], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+0C8h]
        vmovss  dword ptr [r15+1Ch], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+0CCh]
        vmovss  dword ptr [r15+20h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+15Ch]
        vmovss  dword ptr [r12], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+160h]
        vmovss  dword ptr [r12+4], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+164h]
        vmovss  dword ptr [r12+8], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+168h]
        vmovss  dword ptr [r12+0Ch], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+16Ch]
        vmovss  dword ptr [r12+10h], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+170h]
        vmovss  dword ptr [r12+14h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+174h]
      }
      _RDI = outImpulseRotation;
      _RSI = outImpulseTranslation;
      __asm
      {
        vmovss  dword ptr [r12+18h], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+178h]
        vmovss  dword ptr [r12+1Ch], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+17Ch]
        vmovss  dword ptr [r12+20h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+208h]
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+20Ch]
        vmovss  dword ptr [rdi+4], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+210h]
        vmovss  dword ptr [rdi+8], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+214h]
        vmovss  dword ptr [rdi+0Ch], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+218h]
        vmovss  dword ptr [rdi+10h], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+21Ch]
        vmovss  dword ptr [rdi+14h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+220h]
        vmovss  dword ptr [rdi+18h], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+224h]
        vmovss  dword ptr [rdi+1Ch], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+228h]
        vmovss  dword ptr [rdi+20h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+22Ch]
        vmovss  dword ptr [rsi], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+230h]
        vmovss  dword ptr [rsi+4], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+234h]
        vmovss  dword ptr [rsi+8], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+238h]
        vmovss  dword ptr [rsi+0Ch], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+23Ch]
        vmovss  dword ptr [rsi+10h], xmm1
        vmulss  xmm0, xmm6, dword ptr [r13+240h]
        vmovss  dword ptr [rsi+14h], xmm0
        vmulss  xmm0, xmm6, dword ptr [r13+244h]
        vmovss  dword ptr [rsi+18h], xmm0
        vmulss  xmm1, xmm6, dword ptr [r13+248h]
        vmovss  dword ptr [rsi+1Ch], xmm1
        vmulss  xmm3, xmm6, dword ptr [r13+24Ch]
      }
    }
    __asm { vmovss  dword ptr [rsi+20h], xmm3 }
    v15 = time;
    __asm
    {
      vsubss  xmm3, xmm7, xmm6
      vmulss  xmm1, xmm3, dword ptr [rdx+rbp+30h]
      vmulss  xmm0, xmm6, dword ptr [rcx+rbp+30h]
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [r15+24h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbp+38h]
      vmulss  xmm1, xmm3, dword ptr [rdx+rbp+38h]
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [r15+28h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbp+34h]
      vmulss  xmm1, xmm3, dword ptr [rdx+rbp+34h]
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [r15+2Ch], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbp+30h]
      vmulss  xmm2, xmm3, dword ptr [rdx+rbp+30h]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [r12+24h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbp+38h]
      vmulss  xmm2, xmm3, dword ptr [rdx+rbp+38h]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [r12+28h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbp+34h]
      vmulss  xmm2, xmm3, dword ptr [rdx+rbp+34h]
      vmovaps xmm6, [rsp+0C8h+var_48]
      vaddss  xmm1, xmm2, xmm0
    }
  }
  __asm { vmovss  dword ptr [r12+2Ch], xmm1 }
  _RDI->m_amplitudeScale = 0.0;
  _RDI->m_persistenceScale = 1.0;
  _RSI->m_amplitudeScale = 0.0;
  _RSI->m_persistenceScale = 1.0;
  mp_next = _RBP->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
  for ( i = &_RBP->m_impulseManager.m_impulseList.m_listHead; mp_next != (ntl::internal::list_node_base *)i; mp_next = mp_next->mp_next )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = (int)mp_next[1].mp_prev;
    if ( v15 - mp_prev >= 0 )
    {
      LOBYTE(fmt) = BYTE4(mp_next[1].mp_next);
      *(float *)&_XMM0 = CG_ShakeImpulse_CalcFraction(v15, mp_prev, HIDWORD(mp_next[1].mp_prev), (const int)mp_next[1].mp_next, fmt);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rbx+24h]
        vmulss  xmm3, xmm0, dword ptr [rbx+20h]
        vmulss  xmm4, xmm0, dword ptr [rbx+28h]
        vsubss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm0, dword ptr [rbx+2Ch]
        vaddss  xmm1, xmm1, xmm2
        vaddss  xmm2, xmm0, xmm2
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm3, xmm8
        vmovaps xmm1, xmm7
        vmovaps xmm4, xmm8
        vmovaps xmm2, xmm7
      }
    }
    __asm
    {
      vmaxss  xmm0, xmm3, dword ptr [rdi+28h]
      vmovss  dword ptr [rdi+28h], xmm0
      vmaxss  xmm1, xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rdi+2Ch], xmm1
      vmaxss  xmm0, xmm4, dword ptr [rsi+28h]
      vmovss  dword ptr [rsi+28h], xmm0
      vmovss  xmm1, dword ptr [rsi+2Ch]
      vmaxss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rsi+2Ch], xmm2
    }
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, [rsp+0C8h+var_68]
  }
  _RDI->m_speedScale = 1.0;
  _RSI->m_speedScale = 1.0;
}

/*
==============
ShakeImpulseManager::CalcImpulseScaleValues
==============
*/
void ShakeImpulseManager::CalcImpulseScaleValues(ShakeImpulseManager *this, const int timeMs, const ShakeImpulse *impulse, float *outRotAmplitude, float *outRotPersistence, float *outTransAmplitude, float *outTransPersistence)
{
  ShakeImpulseDecayType decayType; 

  _RDI = outRotAmplitude;
  if ( timeMs - impulse->m_startTimeMs >= 0 )
  {
    LOBYTE(decayType) = impulse->m_decayType[0];
    *(float *)&_XMM0 = CG_ShakeImpulse_CalcFraction(timeMs, impulse->m_startTimeMs, impulse->m_attackMs, impulse->m_decayMs, decayType);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+10h]
      vmovss  xmm2, cs:__real@3f800000
    }
    _RAX = outRotPersistence;
    __asm
    {
      vmovss  dword ptr [rdi], xmm1
      vmulss  xmm1, xmm0, dword ptr [rbx+14h]
      vsubss  xmm3, xmm2, xmm0
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm1, xmm0, dword ptr [rbx+18h]
    }
    _RAX = outTransAmplitude;
    __asm
    {
      vmovss  dword ptr [rax], xmm1
      vmulss  xmm0, xmm0, dword ptr [rbx+1Ch]
    }
    _RAX = outTransPersistence;
    __asm
    {
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rax], xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    *outRotAmplitude = 0.0;
    *outRotPersistence = 1.0;
    *outTransAmplitude = 0.0;
    _RAX = outTransPersistence;
    __asm { vmovss  dword ptr [rax], xmm0 }
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

  _R14 = outTransAmplitude;
  p_m_listHead = &this->m_impulseList.m_listHead;
  _R15 = outTransPersistence;
  *outRotAmplitude = 0.0;
  _RDI = outRotPersistence;
  *outRotPersistence = 1.0;
  _RSI = outRotAmplitude;
  *outTransAmplitude = 0.0;
  *outTransPersistence = 1.0;
  mp_next = this->m_impulseList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_impulseList.m_listHead )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovaps [rsp+78h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = (int)mp_next[1].mp_prev;
      if ( timeMs - mp_prev >= 0 )
      {
        LOBYTE(fmt) = BYTE4(mp_next[1].mp_next);
        *(float *)&_XMM0 = CG_ShakeImpulse_CalcFraction(timeMs, mp_prev, HIDWORD(mp_next[1].mp_prev), (const int)mp_next[1].mp_next, fmt);
        __asm
        {
          vmulss  xmm1, xmm0, dword ptr [rbx+24h]
          vmulss  xmm3, xmm0, dword ptr [rbx+20h]
          vmulss  xmm5, xmm0, dword ptr [rbx+28h]
          vsubss  xmm2, xmm7, xmm0
          vmulss  xmm0, xmm0, dword ptr [rbx+2Ch]
          vaddss  xmm6, xmm0, xmm2
          vaddss  xmm4, xmm1, xmm2
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm3, xmm3, xmm3
          vmovaps xmm4, xmm7
          vxorps  xmm5, xmm5, xmm5
          vmovaps xmm6, xmm7
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmaxss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm2, dword ptr [rdi]
        vmaxss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14]
        vmaxss  xmm2, xmm1, xmm5
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm0, dword ptr [r15]
        vmaxss  xmm1, xmm0, xmm6
        vmovss  dword ptr [r15], xmm1
      }
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_48]
      vmovaps xmm6, [rsp+78h+var_38]
    }
  }
}

/*
==============
Shake::DebugDraw
==============
*/
void Shake::DebugDraw(Shake *this, const LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  int integer; 
  cg_t *LocalClientGlobals; 
  int v8; 
  cg_t *v9; 
  int time; 
  bool v13; 
  ShakeFinal *outImpulseTranslation; 
  ShakeStateDebugDraw debugDraw; 
  ShakeFinal outImpulseRotation; 
  ShakeFinal v19; 
  ShakeFinal outTranslation; 
  ShakeFinal outRotation; 

  v3 = DCONST_DVARINT_handheldCameraDebug;
  if ( !DCONST_DVARINT_handheldCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( integer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v8 = this->m_blendStart + this->m_blendDuration;
    v9 = LocalClientGlobals;
    __asm { vmovss  xmm0, cs:initialDrawX }
    time = LocalClientGlobals->time;
    __asm { vmovss  xmm1, cs:initialDrawY }
    v13 = time < v8;
    debugDraw.m_localClientNum = localClientNum;
    __asm
    {
      vmovss  [rsp+190h+debugDraw.m_drawX], xmm0
      vmovss  [rsp+190h+debugDraw.m_drawY], xmm1
    }
    if ( integer == 1 || integer == 2 )
    {
      ShakeState::DebugDraw(&this->m_shakeState[this->m_curStateIndex], this->m_curMotionIndex, v13, &debugDraw);
      if ( time < v8 )
        ShakeState::DebugDraw(&this->m_shakeState[((unsigned __int8)this->m_curStateIndex - 1) & 1], this->m_goalMotionIndex, v13, &debugDraw);
    }
    else if ( integer == 3 || integer == 4 )
    {
      __asm
      {
        vmovups xmm1, cs:__xmm@3f8000003f8000003f80000000000000
        vxorps  xmm0, xmm0, xmm0
      }
      *(_QWORD *)&outRotation.m_xCoord.xy.y = 0i64;
      outRotation.m_xCoord.v[0] = 0;
      *(_QWORD *)&outTranslation.m_xCoord.xy.y = 0i64;
      outTranslation.m_xCoord.v[0] = 0;
      *(_QWORD *)&outImpulseRotation.m_xCoord.xy.y = 0i64;
      outImpulseRotation.m_xCoord.v[0] = 0;
      *(_QWORD *)&v19.m_xCoord.xy.y = 0i64;
      v19.m_xCoord.v[0] = 0;
      __asm
      {
        vmovups ymmword ptr [rbp+90h+outRotation.m_frequencyBase], ymm0
        vmovups xmmword ptr [rbp+90h+outRotation.m_persistenceBase+8], xmm1
        vmovups ymmword ptr [rbp+90h+outTranslation.m_frequencyBase], ymm0
        vmovups xmmword ptr [rbp+90h+outTranslation.m_persistenceBase+8], xmm1
        vmovups ymmword ptr [rsp+190h+outImpulseRotation.m_frequencyBase], ymm0
        vmovups xmmword ptr [rsp+190h+outImpulseRotation.m_persistenceBase+8], xmm1
        vmovups ymmword ptr [rbp+90h+var_100.m_frequencyBase], ymm0
        vmovups xmmword ptr [rbp+90h+var_100.m_persistenceBase+8], xmm1
      }
      Shake::CalcConstantShakeFinalParams(this, time, &outRotation, &outTranslation, &outImpulseRotation, &v19);
      if ( integer == 3 )
        ShakeImpulseManager::DebugDraw(&this->m_impulseManager, v9->time, this->m_curMotionIndex, v13, &outImpulseRotation, &debugDraw);
      else
        ShakeImpulseManager::DebugDraw(&this->m_impulseManager, v9->time, this->m_curMotionIndex, v13, &v19, &debugDraw);
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
  const dvar_t *v15; 
  int integer; 
  const ScreenPlacement *ActivePlacement; 
  const CinematicMotionDef *CinematicMotionDef; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const char *name; 
  const ScreenPlacement *v48; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  int m_debugXAxisScale; 
  char v116; 
  const CameraDef *Def; 
  char *fmt; 
  float fmta; 
  char *fmtb; 
  float fmtc; 
  char *fmtd; 
  float fmte; 
  char *fmtf; 
  float fmtg; 
  char *fmth; 
  float fmti; 
  float fmtj; 
  double ya; 
  float yb; 
  float yc; 
  ShakeImpulseDecayType y; 
  double yd; 
  float ye; 
  float yf; 
  double yg; 
  float yh; 
  float yi; 
  double horzAligna; 
  int horzAlign; 
  double horzAlignb; 
  double vertAlign; 
  int vertAligna; 
  double vertAlignb; 
  double v173; 
  float v174; 
  float v175; 
  float v176; 
  double v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  vec4_t *color; 
  float colora; 
  vec4_t *colorb; 
  double style; 
  double stylea; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  double v193; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  char dest[6144]; 

  v15 = DCONST_DVARINT_handheldCameraDebug;
  _RSI = this;
  _R12 = shakeFinal;
  _RDI = debugDraw;
  if ( !DCONST_DVARINT_handheldCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  integer = v15->current.integer;
  memset_0(dest, 0, sizeof(dest));
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  __asm { vmovss  xmm2, cs:SHAKE_DEBUG_FONT_SCALE; scale }
  scrPlace = (ScreenPlacement *)ActivePlacement;
  font = UI_GetFontHandle(ActivePlacement, SHAKE_DEBUG_FONT_TYPE, *(float *)&_XMM2);
  CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(motionIndex);
  if ( !CinematicMotionDef )
    goto LABEL_59;
  v25 = DCONST_DVARBOOL_handheldCameraImpulsesEnabled;
  if ( !DCONST_DVARBOOL_handheldCameraImpulsesEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulsesEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.enabled )
  {
    v26 = DCONST_DVARINT_handheldCameraOctaves;
    __asm
    {
      vmovaps [rsp+1978h+var_48], xmm6
      vmovaps [rsp+1978h+var_58], xmm7
      vmovaps [rsp+1978h+var_68], xmm8
      vmovaps [rsp+1978h+var_78], xmm9
      vmovaps [rsp+1978h+var_88], xmm10
      vmovaps [rsp+1978h+var_98], xmm11
      vmovaps [rsp+1978h+var_A8], xmm12
      vmovaps [rsp+1978h+var_B8], xmm13
      vmovaps [rsp+1978h+var_C8], xmm14
      vmovss  xmm14, dword ptr [r12]
      vmovss  xmm6, dword ptr [r12+20h]
      vmovss  xmm7, dword ptr [r12+1Ch]
      vmovss  xmm8, dword ptr [r12+18h]
      vmovss  xmm9, dword ptr [r12+14h]
      vmovss  xmm10, dword ptr [r12+10h]
      vmovss  xmm11, dword ptr [r12+0Ch]
      vmovss  xmm12, dword ptr [r12+8]
      vmovss  xmm13, dword ptr [r12+4]
      vcvtss2sd xmm14, xmm14, xmm14
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vcvtss2sd xmm9, xmm9, xmm9
      vcvtss2sd xmm10, xmm10, xmm10
      vcvtss2sd xmm11, xmm11, xmm11
      vcvtss2sd xmm12, xmm12, xmm12
      vcvtss2sd xmm13, xmm13, xmm13
    }
    if ( !DCONST_DVARINT_handheldCameraOctaves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraOctaves") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    name = "BLENDING ";
    if ( !isBlending )
      name = CinematicMotionDef->name;
    __asm
    {
      vmovsd  [rsp+1978h+var_1910], xmm6
      vmovsd  [rsp+1978h+var_1918], xmm7
      vmovsd  [rsp+1978h+var_1920], xmm8
      vmovsd  qword ptr [rsp+1978h+style], xmm9
      vmovsd  [rsp+1978h+color], xmm10
      vmovsd  [rsp+1978h+var_1938], xmm11
      vmovsd  qword ptr [rsp+1978h+vertAlign], xmm12
      vmovsd  qword ptr [rsp+1978h+horzAlign], xmm13
      vmovsd  qword ptr [rsp+1978h+y], xmm14
    }
    LODWORD(fmt) = v26->current.integer;
    Com_sprintf(dest, 0x1800ui64, "^7=== IMPULSE BASE ===\n^7Name: ^5%s\n^7Octaves: ^5%i\n^7Frequency: ^5(%.2f, %.2f, %.2f)\n^7Amplitude: ^5(%.2f, %.2f, %.2f)\n^7Persistence: ^5(%.2f, %.2f, %.2f)\n", name, fmt, ya, horzAligna, vertAlign, v173, *(double *)&color, style, v187, v189, v191);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rdi+4]
    }
    v48 = scrPlace;
    __asm
    {
      vmovss  dword ptr [rsp+1978h+var_1938], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+1978h+y], xmm0
      vmovss  dword ptr [rsp+1978h+fmt], xmm1
    }
    UI_DrawText(scrPlace, dest, 6144, font, fmta, yb, 2, 2, v174, &colorWhite, 3);
    __asm
    {
      vmovss  xmm0, cs:offsetY_0
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm1
    }
    _RBX = _RSI->m_impulseList.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &_RSI->m_impulseList.m_listHead;
    if ( _RBX == (ntl::internal::list_node_base *)&_RSI->m_impulseList.m_listHead )
    {
      __asm { vmovss  xmm0, dword ptr [rsi+1E4h] }
    }
    else
    {
      do
      {
        if ( !_RBX )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        m_debugXAxisScale = LODWORD(_RBX[1].mp_next) + HIDWORD(_RBX[1].mp_prev);
        if ( _RSI->m_debugXAxisScale > m_debugXAxisScale )
          m_debugXAxisScale = _RSI->m_debugXAxisScale;
        _RSI->m_debugXAxisScale = m_debugXAxisScale;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+20h]
          vmaxss  xmm2, xmm0, dword ptr [rsi+1E4h]
          vmovss  dword ptr [rsi+1E4h], xmm2
          vmovss  xmm1, dword ptr [rbx+24h]
          vmaxss  xmm3, xmm1, xmm2
          vmovss  dword ptr [rsi+1E4h], xmm3
          vmovss  xmm0, dword ptr [rbx+28h]
          vmaxss  xmm2, xmm0, xmm3
          vmovss  dword ptr [rsi+1E4h], xmm2
          vmovss  xmm1, dword ptr [rbx+2Ch]
          vmaxss  xmm0, xmm1, xmm2
          vmovss  dword ptr [rsi+1E4h], xmm0
        }
        _RBX = _RBX->mp_next;
      }
      while ( _RBX != (ntl::internal::list_node_base *)p_m_listHead );
      _R12 = shakeFinal;
      v48 = scrPlace;
    }
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+1978h+fmt], xmm0
    }
    Com_sprintf(dest, 0x1800ui64, "^7X Axis Scale: %ims\n^7Y Axis Scale: %.2f\n", (unsigned int)_RSI->m_debugXAxisScale, *(double *)&fmtb);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+1978h+var_1938], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+1978h+y], xmm0
      vmovss  dword ptr [rsp+1978h+fmt], xmm1
    }
    UI_DrawText(v48, dest, 6144, font, fmtc, yc, 2, 2, v175, &colorWhite, 3);
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+4]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:axisTextYOffset
      vaddss  xmm6, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm6
    }
    _RBX = _RSI->m_impulseList.m_listHead.m_sentinel.mp_next;
    if ( _RBX != (ntl::internal::list_node_base *)p_m_listHead )
    {
      while ( 1 )
      {
        if ( integer == 3 )
        {
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+24h]
            vmovss  xmm2, dword ptr [rbx+20h]
          }
        }
        else
        {
          if ( integer != 4 )
            goto LABEL_37;
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+2Ch]
            vmovss  xmm2, dword ptr [rbx+28h]
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  dword ptr [rsp+1978h+color], xmm0
          vmovss  dword ptr [rsp+1978h+var_1938], xmm1
          vmovss  [rsp+1978h+vertAlign], xmm2
        }
        LOBYTE(horzAlign) = _RBX[3].mp_prev;
        LOBYTE(y) = BYTE4(_RBX[1].mp_next);
        ShakeImpulseManager::DebugDrawImpulse(_RSI, timeMs, (const int)_RBX[1].mp_prev, HIDWORD(_RBX[1].mp_prev), (const int)_RBX[1].mp_next, y, (const ShakeImpulseSourceType)horzAlign, *(const float *)&vertAligna, v176, colora, debugDraw);
LABEL_37:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, cs:offsetX_0
          vaddss  xmm1, xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  dword ptr [rdi+8], xmm6
        }
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        _RBX = _RBX->mp_next;
        if ( _RBX == (ntl::internal::list_node_base *)p_m_listHead )
        {
          __asm { vmovss  xmm6, dword ptr [rdi+8] }
          _R12 = shakeFinal;
          v48 = scrPlace;
          break;
        }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm6, cs:offsetY_0
      vmovss  dword ptr [rdi+4], xmm7
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm2, dword ptr [r12+2Ch]
      vmovss  xmm3, dword ptr [r12+28h]
      vmovss  xmm12, dword ptr [r12+24h]
      vmulss  xmm0, xmm2, dword ptr [r12+20h]
      vmulss  xmm1, xmm2, dword ptr [r12+1Ch]
      vcvtss2sd xmm13, xmm0, xmm0
      vmulss  xmm0, xmm2, dword ptr [r12+18h]
      vcvtss2sd xmm9, xmm0, xmm0
      vmulss  xmm0, xmm3, dword ptr [r12+10h]
      vcvtss2sd xmm11, xmm1, xmm1
      vmulss  xmm1, xmm3, dword ptr [r12+14h]
      vcvtss2sd xmm7, xmm0, xmm0
      vmulss  xmm0, xmm12, dword ptr [r12+8]
      vcvtss2sd xmm8, xmm1, xmm1
      vmulss  xmm1, xmm3, dword ptr [r12+0Ch]
      vcvtss2sd xmm14, xmm2, xmm2
      vmovsd  [rsp+1978h+var_1908], xmm14
      vmovsd  [rsp+1978h+var_1910], xmm13
      vmovsd  [rsp+1978h+var_1918], xmm11
      vmovsd  [rsp+1978h+var_1920], xmm9
      vcvtss2sd xmm10, xmm3, xmm3
      vmovsd  qword ptr [rsp+1978h+style], xmm10
      vmovsd  [rsp+1978h+color], xmm8
      vmovsd  [rsp+1978h+var_1938], xmm7
      vcvtss2sd xmm4, xmm0, xmm0
      vmulss  xmm0, xmm12, dword ptr [r12]
      vcvtss2sd xmm5, xmm1, xmm1
      vmulss  xmm1, xmm12, dword ptr [r12+4]
      vmovsd  qword ptr [rsp+1978h+vertAlign], xmm5
      vcvtss2sd xmm3, xmm0, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
      vcvtss2sd xmm6, xmm12, xmm12
      vmovsd  qword ptr [rsp+1978h+horzAlign], xmm6
      vmovsd  qword ptr [rsp+1978h+y], xmm4
      vmovq   r9, xmm3
      vmovsd  [rsp+1978h+fmt], xmm2
    }
    Com_sprintf(dest, 0x1800ui64, "^7=== IMPULSE FINAL ===\n^7Frequency: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Amplitude: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Persistence: ^5(%.2f, %.2f, %.2f)  %.2fx\n", *(double *)&_XMM3, *(double *)&fmtd, yd, horzAlignb, vertAlignb, v177, *(double *)&colorb, stylea, v188, v190, v192, v193);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+1978h+var_1938], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+1978h+y], xmm0
      vmovss  dword ptr [rsp+1978h+fmt], xmm1
    }
    UI_DrawText(v48, dest, 6144, font, fmte, ye, 2, 2, v178, &colorWhite, 3);
    __asm
    {
      vmovss  xmm0, cs:offsetY_0
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovaps xmm14, [rsp+1978h+var_C8]
      vmovaps xmm13, [rsp+1978h+var_B8]
      vmovaps xmm12, [rsp+1978h+var_A8]
      vmovaps xmm11, [rsp+1978h+var_98]
      vmovaps xmm10, [rsp+1978h+var_88]
      vmovaps xmm9, [rsp+1978h+var_78]
      vmovss  dword ptr [rdi+8], xmm1
    }
    _RBX = DVARFLT_handheldCameraRotationScale;
    if ( !DVARFLT_handheldCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRotationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_handheldCameraTranslationScale;
    if ( !DVARFLT_handheldCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraTranslationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vucomiss xmm7, xmm6
      vmovss  xmm0, dword ptr [rbx+28h]
    }
    if ( !v116 )
      goto LABEL_50;
    __asm { vucomiss xmm0, xmm6 }
    if ( !v116 )
    {
LABEL_50:
      __asm
      {
        vcvtss2sd xmm3, xmm7, xmm7
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+1978h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "^7=== DESIGN SCALAR MODIFIERS ===\n^7handheldCameraRotationScale: ^1%.2fx\n^7handheldCameraTranslationScale: ^1%.2fx\n", *(double *)&_XMM3, *(double *)&fmtf);
      __asm
      {
        vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+1978h+var_1938], xmm0
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  [rsp+1978h+y], xmm0
        vmovss  dword ptr [rsp+1978h+fmt], xmm1
      }
      UI_DrawText(v48, dest, 6144, font, fmtg, yf, 2, 2, v179, &colorWhite, 3);
      __asm
      {
        vmovss  xmm0, cs:offsetY_0
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm1
      }
    }
    _RAX = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
    if ( _RAX )
    {
      if ( _RAX->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
      {
        __asm
        {
          vucomiss xmm6, dword ptr [rax+60h]
          vmovss  xmm7, dword ptr [rax+68h]
          vmovss  xmm8, dword ptr [rax+6Ch]
        }
        if ( _RAX->profile )
          goto LABEL_57;
        __asm { vucomiss xmm6, dword ptr [rax+64h] }
        if ( _RAX->profile )
          goto LABEL_57;
        __asm { vucomiss xmm7, xmm6 }
        if ( _RAX->profile )
          goto LABEL_57;
        __asm { vucomiss xmm8, xmm6 }
        if ( _RAX->profile )
        {
LABEL_57:
          Def = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
          __asm
          {
            vcvtss2sd xmm0, xmm7, xmm7
            vcvtss2sd xmm1, xmm8, xmm8
            vmovsd  qword ptr [rsp+1978h+y], xmm0
            vmovsd  [rsp+1978h+fmt], xmm1
          }
          Com_sprintf(dest, 0x1800ui64, "^7=== CAMERA ASSET MODIFIERS (%s) ===\n^7handheldCameraImpulseRotScale: ^1%.2fx\n^7handheldCameraImpulseTransScale: ^1%.2fx\n", Def->name, *(double *)&fmth, yg);
          __asm
          {
            vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
            vmovss  xmm1, dword ptr [rdi+4]
            vmovss  dword ptr [rsp+1978h+var_1938], xmm0
            vmovss  xmm0, dword ptr [rdi+8]
            vmovss  [rsp+1978h+y], xmm0
            vmovss  dword ptr [rsp+1978h+fmt], xmm1
          }
          UI_DrawText(v48, dest, 6144, font, fmti, yh, 2, 2, v180, &colorWhite, 3);
          __asm
          {
            vmovss  xmm0, cs:offsetY_0
            vaddss  xmm1, xmm0, dword ptr [rdi+8]
            vmovss  dword ptr [rdi+8], xmm1
          }
        }
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+1978h+var_58]
      vmovaps xmm6, [rsp+1978h+var_48]
      vmovaps xmm8, [rsp+1978h+var_68]
    }
  }
  else
  {
LABEL_59:
    Com_sprintf(dest, 0x1800ui64, "^7=== IMPULSE BASE ===\n^7Name: ^5%s\n^7DISABLED\n", CinematicMotionDef->name);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+1978h+var_1938], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+1978h+y], xmm0
      vmovss  dword ptr [rsp+1978h+fmt], xmm1
    }
    UI_DrawText(scrPlace, dest, 6144, font, fmtj, yi, 2, 2, v181, &colorWhite, 3);
    __asm
    {
      vmovss  xmm0, cs:offsetY_0
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm1
    }
    _RSI->m_debugXAxisScale = 1;
    _RSI->m_debugYAxisScale = 1.0;
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
  void *v13; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v20; 
  GfxFont *FontHandle; 
  RumbleGraph *nonLinearMap; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  char *fmtf; 
  float fmtg; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  vec4_t *v132; 
  float v133; 
  int horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  double horzAlignd; 
  double vertAlign; 
  int vertAligna; 
  int vertAlignb; 
  double vertAlignc; 
  float numDataEntriesa; 
  __int64 numDataEntries; 
  double numDataEntriesb; 
  double numDataEntriesc; 
  float numDataEntriesd; 
  vec4_t *color; 
  double style; 
  float data[32]; 
  char dest[6144]; 
  char v160; 

  v13 = alloca(v4);
  __asm
  {
    vmovaps [rsp+19B8h+var_58], xmm6
    vmovaps [rsp+19B8h+var_68], xmm7
    vmovaps [rsp+19B8h+var_78], xmm8
    vmovaps [rsp+19B8h+var_88], xmm9
    vmovaps [rsp+19B8h+var_98], xmm10
    vmovaps [rsp+19B8h+var_A8], xmm11
    vmovaps [rsp+19B8h+var_B8], xmm12
    vmovaps [rsp+19B8h+var_C8], xmm13
  }
  _R14 = debugDraw;
  _RBP = modifierDef;
  _R13 = this;
  memset_0(dest, 0, sizeof(dest));
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)_R14->m_localClientNum);
  __asm { vmovss  xmm2, cs:SHAKE_DEBUG_FONT_SCALE; scale }
  v20 = ActivePlacement;
  FontHandle = UI_GetFontHandle(ActivePlacement, SHAKE_DEBUG_FONT_TYPE, *(float *)&_XMM2);
  Com_sprintf(dest, 0x1800ui64, "^7=== %s MODIFIERS ===\n", name);
  __asm
  {
    vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  [rsp+19B8h+numDataEntries], xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rsp+19B8h+var_1990], xmm0
    vmovss  dword ptr [rsp+19B8h+fmt], xmm1
  }
  UI_DrawText(v20, dest, 6144, FontHandle, fmt, v127, 2, 2, numDataEntriesa, &colorWhite, 3);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vaddss  xmm1, xmm0, cs:__real@41400000
    vmovss  dword ptr [r14+8], xmm1
  }
  nonLinearMap = _RBP->nonLinearMap;
  _RBX = 0i64;
  if ( !nonLinearMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1286, ASSERT_TYPE_ASSERT, "( nonLinearGraph ) != ( nullptr )", "%s != %s\n\t%p, %p", "nonLinearGraph", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !nonLinearMap->knotCount )
  {
    LODWORD(numDataEntries) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1287, ASSERT_TYPE_ASSERT, "( 0 ) < ( nonLinearGraph->knotCount )", "%s < %s\n\t%i, %i", "0", "nonLinearGraph->knotCount", 0i64, numDataEntries) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@5f800000
    vmovss  xmm7, cs:__real@3d042108
  }
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
      vmulss  xmm2, xmm0, xmm7; fraction
    }
    *(double *)&_XMM0 = GraphGetValueFromFraction(nonLinearMap->knotCount, nonLinearMap->knots, *(const float *)&_XMM2);
    __asm { vmovss  [rsp+rbx*4+19B8h+data], xmm0 }
    ++_RBX;
  }
  while ( _RBX < 0x20 );
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vsubss  xmm6, xmm0, dword ptr [rbp+0Ch]
    vxorps  xmm13, xmm13, xmm13
    vcomiss xmm6, xmm13
  }
  if ( _RBX <= 0x20 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  qword ptr [rsp+19B8h+numDataEntries], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  qword ptr [rsp+19B8h+vertAlign], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1299, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( speedRange )", "%s < %s\n\t%g, %g", "0.0f", "speedRange", vertAlign, numDataEntriesb) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+20h]
    vsubss  xmm1, xmm0, dword ptr [rbp+0Ch]
    vmovss  xmm8, cs:__real@3f800000
    vdivss  xmm6, xmm8, xmm6
    vmulss  xmm0, xmm1, xmm6; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [r13+1Ch]
    vsubss  xmm2, xmm1, dword ptr [rbp+0Ch]
    vmovaps xmm11, xmm0
    vmulss  xmm0, xmm2, xmm6; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm2, xmm0; fraction
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = GraphGetValueFromFraction(nonLinearMap->knotCount, nonLinearMap->knots, *(const float *)&_XMM2);
  __asm
  {
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm10, cs:__real@43700000
    vaddss  xmm1, xmm10, dword ptr [r14+8]
    vaddss  xmm2, xmm1, cs:graphAdjustY; y
    vmovss  xmm9, cs:__real@43a00000
    vaddss  xmm1, xmm9, dword ptr [r14+4]
    vaddss  xmm1, xmm1, cs:graphAdjustX; x
    vmovss  xmm12, dword ptr [r13+24h]
    vmovss  dword ptr [rsp+19B8h+fmt], xmm3
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovaps xmm6, xmm0
  }
  CG_DebugGraphs_DrawAxes(v20, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, &colorWhite);
  __asm
  {
    vaddss  xmm1, xmm10, dword ptr [r14+8]
    vaddss  xmm0, xmm9, dword ptr [r14+4]
    vaddss  xmm2, xmm1, cs:graphAdjustY; y
    vaddss  xmm1, xmm0, cs:graphAdjustX; x
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+19B8h+horzAlign], xmm8
    vmovss  dword ptr [rsp+19B8h+var_1990], xmm13
    vmovss  dword ptr [rsp+19B8h+fmt], xmm0
  }
  CG_DebugGraphs_DrawGraphData(v20, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v128, *(float *)&horzAlign, data, 0x20u, 0, &colorGreen);
  __asm
  {
    vaddss  xmm1, xmm10, dword ptr [r14+8]
    vaddss  xmm0, xmm9, dword ptr [r14+4]
    vaddss  xmm2, xmm1, cs:graphAdjustY; y
    vaddss  xmm1, xmm0, cs:graphAdjustX; x
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+19B8h+horzAlign], xmm6
    vmovss  dword ptr [rsp+19B8h+var_1990], xmm7
    vmovss  dword ptr [rsp+19B8h+fmt], xmm0
  }
  CG_DebugGraphs_DrawGraphDatapoint(v20, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v129, *(float *)&horzAligna, &colorYellow);
  __asm
  {
    vaddss  xmm1, xmm10, dword ptr [r14+8]
    vaddss  xmm0, xmm9, dword ptr [r14+4]
    vmovss  xmm6, cs:__real@40800000
    vaddss  xmm2, xmm1, cs:graphAdjustY; y
    vaddss  xmm1, xmm0, cs:graphAdjustX; x
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+19B8h+vertAlign], xmm6
    vmovss  [rsp+19B8h+horzAlign], xmm6
    vmovss  dword ptr [rsp+19B8h+var_1990], xmm11
    vmovss  dword ptr [rsp+19B8h+fmt], xmm0
  }
  CG_DebugGraphs_DrawGraphXAxisDatapoint(v20, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v130, *(float *)&horzAlignb, *(float *)&vertAligna, &colorPurple);
  __asm
  {
    vaddss  xmm1, xmm10, dword ptr [r14+8]
    vaddss  xmm0, xmm9, dword ptr [r14+4]
    vaddss  xmm2, xmm1, cs:graphAdjustY; y
    vaddss  xmm1, xmm0, cs:graphAdjustX; x
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+19B8h+vertAlign], xmm6
    vmovss  [rsp+19B8h+horzAlign], xmm6
    vmovss  dword ptr [rsp+19B8h+var_1990], xmm12
    vmovss  dword ptr [rsp+19B8h+fmt], xmm0
  }
  CG_DebugGraphs_DrawGraphYAxisDatapoint(v20, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v131, *(float *)&horzAlignc, *(float *)&vertAlignb, &colorCyan);
  __asm
  {
    vmovss  xmm0, cs:textOffsetX
    vaddss  xmm1, xmm0, dword ptr [r14+4]
    vmovss  dword ptr [r14+4], xmm1
    vmovss  xmm2, dword ptr [r13+4]
    vmovss  xmm0, dword ptr [r13+14h]
    vmovss  xmm1, dword ptr [r13+8]
    vmovss  xmm4, dword ptr [r13+18h]
    vmovss  xmm5, dword ptr [r13+0]
    vmovss  xmm6, dword ptr [r13+10h]
    vmovss  xmm3, dword ptr [r13+20h]
    vmovss  xmm7, dword ptr [r13+1Ch]
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+19B8h+style], xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+19B8h+color], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  qword ptr [rsp+19B8h+numDataEntries], xmm1
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  qword ptr [rsp+19B8h+vertAlign], xmm4
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  qword ptr [rsp+19B8h+horzAlign], xmm5
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm6, xmm6, xmm6
    vcvtss2sd xmm7, xmm7, xmm7
    vmovsd  [rsp+19B8h+var_1990], xmm6
    vmovq   r9, xmm3
    vmovsd  [rsp+19B8h+fmt], xmm7
  }
  Com_sprintf(dest, 0x1800ui64, "^7IN Value: ^6%.2f ^3{%.2f}\n^7OUT Frequency Scale: ^3%.2f^5 ^5{%.2f}\n^7OUT Amplitude Scale: ^3%.2f^5 ^5{%.2f}\n^7OUT Persistence Scale: ^3%.2f^5 ^5{%.2f}\n", *(double *)&_XMM3, *(double *)&fmtf, *(double *)&v132, horzAlignd, vertAlignc, numDataEntriesc, *(double *)&color, style);
  __asm
  {
    vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  [rsp+19B8h+numDataEntries], xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rsp+19B8h+var_1990], xmm0
    vmovss  dword ptr [rsp+19B8h+fmt], xmm1
  }
  UI_DrawText(v20, dest, 6144, FontHandle, fmtg, v133, 2, 2, numDataEntriesd, &colorWhite, 3);
  _R11 = &v160;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
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
  void *v16; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v25; 
  GfxFont *FontHandle; 
  const dvar_t *v27; 
  const char *v46; 
  CinematicShakeModifierType type; 
  const char *v54; 
  CinematicShakeModifierType v56; 
  const char *v57; 
  char v97; 
  const CameraDef *Def; 
  const char *v123; 
  float fmt; 
  float fmta; 
  char *fmtb; 
  float fmtc; 
  char *fmtd; 
  float fmte; 
  float fmtf; 
  __int64 y; 
  float ya; 
  double yb; 
  float yc; 
  float yd; 
  double ye; 
  float yf; 
  float yg; 
  double horzAlign; 
  double horzAligna; 
  double vertAlign; 
  double vertAligna; 
  double v148; 
  float v149; 
  double v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  vec4_t *color; 
  vec4_t *colora; 
  double style; 
  double stylea; 
  double v159; 
  double v160; 
  double v161; 
  double v162; 
  double v163; 
  double v164; 
  double v165; 
  double v166; 
  double v167; 
  double v168; 
  char dest[6144]; 

  v16 = alloca(v5);
  __asm { vmovaps [rsp+1998h+var_E8], xmm15 }
  _RBX = debugDraw;
  _RDI = shakeDef;
  _R13 = this;
  memset_0(dest, 0, sizeof(dest));
  __asm { vmovss  xmm15, dword ptr [rbx+4] }
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  __asm { vmovss  xmm2, cs:SHAKE_DEBUG_FONT_SCALE; scale }
  v25 = ActivePlacement;
  FontHandle = UI_GetFontHandle(ActivePlacement, SHAKE_DEBUG_FONT_TYPE, *(float *)&_XMM2);
  if ( _RDI && _RDI->enabled )
  {
    v27 = DCONST_DVARINT_handheldCameraOctaves;
    __asm
    {
      vmovaps [rsp+1998h+var_58], xmm6
      vmovaps [rsp+1998h+var_68], xmm7
      vmovaps [rsp+1998h+var_78], xmm8
      vmovaps [rsp+1998h+var_88], xmm9
      vmovaps [rsp+1998h+var_98], xmm10
      vmovaps [rsp+1998h+var_A8], xmm11
      vmovaps [rsp+1998h+var_B8], xmm12
      vmovaps [rsp+1998h+var_C8], xmm13
      vmovaps [rsp+1998h+var_D8], xmm14
      vmovss  xmm14, dword ptr [rdi+4]
      vmovss  xmm6, dword ptr [rdi+24h]
      vmovss  xmm7, dword ptr [rdi+20h]
      vmovss  xmm8, dword ptr [rdi+1Ch]
      vmovss  xmm9, dword ptr [rdi+18h]
      vmovss  xmm10, dword ptr [rdi+14h]
      vmovss  xmm11, dword ptr [rdi+10h]
      vmovss  xmm12, dword ptr [rdi+0Ch]
      vmovss  xmm13, dword ptr [rdi+8]
      vcvtss2sd xmm14, xmm14, xmm14
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vcvtss2sd xmm9, xmm9, xmm9
      vcvtss2sd xmm10, xmm10, xmm10
      vcvtss2sd xmm11, xmm11, xmm11
      vcvtss2sd xmm12, xmm12, xmm12
      vcvtss2sd xmm13, xmm13, xmm13
    }
    if ( !DCONST_DVARINT_handheldCameraOctaves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraOctaves") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    __asm
    {
      vmovsd  [rsp+1998h+var_1928], xmm6
      vmovsd  [rsp+1998h+var_1930], xmm7
      vmovsd  [rsp+1998h+var_1938], xmm8
      vmovsd  [rsp+1998h+var_1940], xmm9
      vmovsd  qword ptr [rsp+1998h+style], xmm10
      vmovsd  [rsp+1998h+color], xmm11
      vmovsd  [rsp+1998h+var_1958], xmm12
      vmovsd  qword ptr [rsp+1998h+vertAlign], xmm13
      vmovsd  qword ptr [rsp+1998h+horzAlign], xmm14
    }
    v46 = (char *)&queryFormat.fmt + 3;
    if ( isBlending )
      v46 = "BLENDING ";
    LODWORD(y) = v27->current.integer;
    Com_sprintf(dest, 0x1800ui64, "^7=== BASE ===\n^7Name: ^5%s%s\n^7Octaves: ^5%i\n^7Frequency: ^5(%.2f, %.2f, %.2f)\n^7Amplitude: ^5(%.2f, %.2f, %.2f)\n^7Persistence: ^5(%.2f, %.2f, %.2f)\n", v46, assetName, y, horzAlign, vertAlign, v148, *(double *)&color, style, v159, v161, v163, v165);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+1998h+var_1958], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rsp+1998h+y], xmm0
      vmovss  dword ptr [rsp+1998h+fmt], xmm1
    }
    UI_DrawText(v25, dest, 6144, FontHandle, fmt, ya, 2, 2, v149, &colorWhite, 3);
    __asm
    {
      vmovss  xmm0, cs:offsetY
      vaddss  xmm7, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm7
    }
    type = _RDI->moveSpeedModifiers.type;
    if ( type )
    {
      __asm { vmovss  xmm6, dword ptr [rbx+4] }
      v54 = "MOVEMENT SPEED";
      if ( type == COUNT )
        v54 = "SCRIPT";
      ShakePerlinScale::DebugDraw(&_R13->m_movement, &_RDI->moveSpeedModifiers, debugDraw, v54);
      __asm
      {
        vaddss  xmm1, xmm6, cs:offsetX
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  dword ptr [rbx+8], xmm7
      }
    }
    v56 = _RDI->viewSpeedModifiers.type;
    if ( v56 )
    {
      v57 = "VIEW SPEED";
      if ( v56 == COUNT )
        v57 = "SCRIPT";
      ShakePerlinScale::DebugDraw(&_R13->m_view, &_RDI->viewSpeedModifiers, debugDraw, v57);
    }
    __asm
    {
      vaddss  xmm1, xmm7, cs:offsetY
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  dword ptr [rbx+4], xmm15
      vmovss  xmm2, dword ptr [r13+4]
      vmovss  xmm3, dword ptr [r13+8]
      vmovss  xmm9, dword ptr [r13+0]
      vmulss  xmm0, xmm2, dword ptr [rdi+24h]
      vmulss  xmm1, xmm2, dword ptr [rdi+20h]
      vcvtss2sd xmm13, xmm0, xmm0
      vmulss  xmm0, xmm2, dword ptr [rdi+1Ch]
      vcvtss2sd xmm12, xmm1, xmm1
      vmulss  xmm1, xmm3, dword ptr [rdi+18h]
      vcvtss2sd xmm10, xmm0, xmm0
      vmulss  xmm0, xmm3, dword ptr [rdi+14h]
      vcvtss2sd xmm8, xmm1, xmm1
      vmulss  xmm1, xmm3, dword ptr [rdi+10h]
      vcvtss2sd xmm7, xmm0, xmm0
      vmulss  xmm0, xmm9, dword ptr [rdi+0Ch]
      vcvtss2sd xmm14, xmm2, xmm2
      vmovsd  [rsp+1998h+var_1918], xmm14
      vmovsd  [rsp+1998h+var_1920], xmm13
      vmovsd  [rsp+1998h+var_1928], xmm12
      vmovsd  [rsp+1998h+var_1930], xmm10
      vcvtss2sd xmm11, xmm3, xmm3
      vmovsd  [rsp+1998h+var_1938], xmm11
      vmovsd  [rsp+1998h+var_1940], xmm8
      vmovsd  qword ptr [rsp+1998h+style], xmm7
      vcvtss2sd xmm5, xmm1, xmm1
      vmulss  xmm1, xmm9, dword ptr [rdi+8]
      vmovsd  [rsp+1998h+color], xmm5
      vcvtss2sd xmm4, xmm0, xmm0
      vmulss  xmm0, xmm9, dword ptr [rdi+4]
      vcvtss2sd xmm3, xmm1, xmm1
      vcvtss2sd xmm2, xmm0, xmm0
      vcvtss2sd xmm6, xmm9, xmm9
      vmovsd  [rsp+1998h+var_1958], xmm6
      vmovsd  qword ptr [rsp+1998h+vertAlign], xmm4
      vmovsd  qword ptr [rsp+1998h+horzAlign], xmm3
      vmovsd  qword ptr [rsp+1998h+y], xmm2
    }
    Com_sprintf(dest, 0x1800ui64, "^7=== %sFINAL ===\n^7Combine Type: ^5%s\n^7Frequency: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Amplitude: ^5(%.2f, %.2f, %.2f)  %.2fx\n^7Persistence: ^5(%.2f, %.2f, %.2f)  %.2fx\n", v46, cg_shakeCombineType[_RDI->modifierCombineType], yb, horzAligna, vertAligna, v150, *(double *)&colora, stylea, v160, v162, v164, v166, v167, v168);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+1998h+var_1958], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rsp+1998h+y], xmm0
      vmovss  dword ptr [rsp+1998h+fmt], xmm1
    }
    UI_DrawText(v25, dest, 6144, FontHandle, fmta, yc, 2, 2, v151, &colorWhite, 3);
    __asm
    {
      vmovss  xmm0, cs:offsetY
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovaps xmm14, [rsp+1998h+var_D8]
      vmovaps xmm13, [rsp+1998h+var_C8]
      vmovaps xmm12, [rsp+1998h+var_B8]
      vmovaps xmm11, [rsp+1998h+var_A8]
      vmovaps xmm10, [rsp+1998h+var_98]
      vmovaps xmm9, [rsp+1998h+var_88]
      vmovss  dword ptr [rbx+8], xmm1
    }
    _RDI = DVARFLT_handheldCameraRotationScale;
    if ( !DVARFLT_handheldCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraRotationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
    _RDI = DVARFLT_handheldCameraTranslationScale;
    if ( !DVARFLT_handheldCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraTranslationScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vucomiss xmm7, xmm6
      vmovss  xmm0, dword ptr [rdi+28h]
    }
    if ( !v97 )
      goto LABEL_24;
    __asm { vucomiss xmm0, xmm6 }
    if ( !v97 )
    {
LABEL_24:
      __asm
      {
        vcvtss2sd xmm3, xmm7, xmm7
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+1998h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "^7=== DESIGN SCALAR MODIFIERS ===\n^7handheldCameraRotationScale: ^1%.2fx\n^7handheldCameraTranslationScale: ^1%.2fx\n", *(double *)&_XMM3, *(double *)&fmtb);
      __asm
      {
        vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+1998h+var_1958], xmm0
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  [rsp+1998h+y], xmm0
        vmovss  dword ptr [rsp+1998h+fmt], xmm1
      }
      UI_DrawText(v25, dest, 6144, FontHandle, fmtc, yd, 2, 2, v152, &colorWhite, 3);
      __asm
      {
        vmovss  xmm0, cs:offsetY
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
    }
    _RAX = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
    if ( _RAX )
    {
      if ( _RAX->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
      {
        __asm
        {
          vmovss  xmm8, dword ptr [rax+60h]
          vucomiss xmm8, xmm6
          vmovss  xmm7, dword ptr [rax+64h]
        }
        if ( _RAX->profile )
          goto LABEL_31;
        __asm { vucomiss xmm7, xmm6 }
        if ( _RAX->profile )
          goto LABEL_31;
        __asm { vucomiss xmm6, dword ptr [rax+68h] }
        if ( _RAX->profile )
          goto LABEL_31;
        __asm { vucomiss xmm6, dword ptr [rax+6Ch] }
        if ( _RAX->profile )
        {
LABEL_31:
          Def = CG_Camera_Active_TryGetDef(debugDraw->m_localClientNum);
          __asm
          {
            vcvtss2sd xmm0, xmm8, xmm8
            vcvtss2sd xmm1, xmm7, xmm7
            vmovsd  qword ptr [rsp+1998h+y], xmm0
            vmovsd  [rsp+1998h+fmt], xmm1
          }
          Com_sprintf(dest, 0x1800ui64, "^7=== CAMERA ASSET MODIFIERS (%s) ===\n^7handheldCameraRotScale: ^1%.2fx\n^7handheldCameraTransScale: ^1%.2fx\n", Def->name, *(double *)&fmtd, ye);
          __asm
          {
            vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
            vmovss  xmm1, dword ptr [rbx+4]
            vmovss  dword ptr [rsp+1998h+var_1958], xmm0
            vmovss  xmm0, dword ptr [rbx+8]
            vmovss  [rsp+1998h+y], xmm0
            vmovss  dword ptr [rsp+1998h+fmt], xmm1
          }
          UI_DrawText(v25, dest, 6144, FontHandle, fmte, yf, 2, 2, v153, &colorWhite, 3);
          __asm
          {
            vmovss  xmm0, cs:offsetY
            vaddss  xmm1, xmm0, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm1
          }
        }
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+1998h+var_68]
      vmovaps xmm6, [rsp+1998h+var_58]
      vmovaps xmm8, [rsp+1998h+var_78]
    }
  }
  else
  {
    v123 = (char *)&queryFormat.fmt + 3;
    if ( isBlending )
      v123 = "BLENDING ";
    Com_sprintf(dest, 0x1800ui64, "^7=== BASE ===\n^7Name: ^5%s%s\n^7DISABLED\n", v123, assetName);
    __asm
    {
      vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+1998h+var_1958], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rsp+1998h+y], xmm0
      vmovss  dword ptr [rsp+1998h+fmt], xmm1
    }
    UI_DrawText(v25, dest, 6144, FontHandle, fmtf, yg, 2, 2, v154, &colorWhite, 3);
    __asm
    {
      vmovss  xmm0, cs:offsetY
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  __asm { vmovaps xmm15, [rsp+1998h+var_E8] }
}

/*
==============
ShakeImpulseManager::DebugDrawImpulse
==============
*/
void ShakeImpulseManager::DebugDrawImpulse(ShakeImpulseManager *this, const int timeMs, const int startTimeMs, const int attackMs, const int decayMs, const ShakeImpulseDecayType decayType, const ShakeImpulseSourceType sourceType, const float amplitudeScale, const float persistenceScale, const float scale, ShakeStateDebugDraw *debugDraw)
{
  signed __int64 v11; 
  void *v21; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v28; 
  GfxFont *FontHandle; 
  char v57; 
  char v58; 
  double decayTypeb; 
  float decayTypec; 
  ShakeImpulseDecayType decayTypea; 
  float decayTyped; 
  float decayTypee; 
  float decayTypef; 
  float decayTypeg; 
  float decayTypeh; 
  float decayTypei; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  int horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  int horzAlignd; 
  double vertAlign; 
  int vertAligna; 
  float numDataEntriesa; 
  __int64 numDataEntries; 
  double numDataEntriesb; 
  ScreenPlacement *scrPlace; 
  float data[32]; 
  float v155[32]; 
  char dest[6144]; 
  char v166; 

  v21 = alloca(v11);
  __asm
  {
    vmovaps [rsp+1A68h+var_58], xmm6
    vmovaps [rsp+1A68h+var_68], xmm7
    vmovaps [rsp+1A68h+var_78], xmm8
    vmovaps [rsp+1A68h+var_88], xmm9
    vmovaps [rsp+1A68h+var_98], xmm10
    vmovaps [rsp+1A68h+var_A8], xmm11
    vmovaps [rsp+1A68h+var_B8], xmm12
    vmovaps [rsp+1A68h+var_C8], xmm13
    vmovaps [rsp+1A68h+var_D8], xmm14
  }
  _R12 = debugDraw;
  _RSI = this;
  memset_0(dest, 0, sizeof(dest));
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)debugDraw->m_localClientNum);
  __asm { vmovss  xmm2, cs:SHAKE_DEBUG_FONT_SCALE; scale }
  v28 = ActivePlacement;
  scrPlace = (ScreenPlacement *)ActivePlacement;
  __asm { vmovss  xmm0, [rsp+1A68h+arg_48] }
  FontHandle = UI_GetFontHandle(ActivePlacement, SHAKE_DEBUG_FONT_TYPE, *(float *)&_XMM2);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rsp+1A68h+decayType], xmm0
  }
  Com_sprintf(dest, 0x1800ui64, "^7= %s (%.2f) =\n", cg_shakeImpulseSourceTypes[(char)sourceType], decayTypeb);
  __asm
  {
    vmovss  xmm0, cs:SHAKE_DEBUG_FONT_SCALE
    vmovss  xmm1, dword ptr [r12+4]
    vmovss  [rsp+1A68h+numDataEntries], xmm0
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  dword ptr [rsp+1A68h+var_1A40], xmm0
    vmovss  [rsp+1A68h+decayType], xmm1
  }
  UI_DrawText(v28, dest, 6144, FontHandle, decayTypec, v136, 2, 2, numDataEntriesa, &colorWhite, 3);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vaddss  xmm1, xmm0, cs:__real@41400000
    vmovss  xmm12, [rsp+1A68h+arg_40]
    vmovss  xmm13, [rsp+1A68h+arg_38]
  }
  _RBX = 0i64;
  __asm
  {
    vmovss  xmm7, cs:__real@5f800000
    vmovss  xmm10, cs:__real@3d042108
    vmovss  xmm11, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
    vmovss  dword ptr [r12+8], xmm1
    vcvtsi2ss xmm9, xmm9, ebp
    vxorps  xmm14, xmm14, xmm14
    vxorpd  xmm8, xmm8, xmm8
  }
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
      vmulss  xmm1, xmm0, xmm10
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+1E0h]
      vmulss  xmm1, xmm1, xmm0
      vaddss  xmm2, xmm1, xmm9
      vcvttss2si ecx, xmm2; timeMs
    }
    LOBYTE(decayTypea) = decayType;
    *(float *)&_XMM0 = CG_ShakeImpulse_CalcFraction(_ECX, startTimeMs, attackMs, decayMs, decayTypea);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  xmm0, dword ptr [rsi+1E4h]
      vcomiss xmm0, xmm14
    }
    if ( v57 | v58 )
    {
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  qword ptr [rsp+1A68h+numDataEntries], xmm1
        vmovsd  qword ptr [rsp+1A68h+vertAlign], xmm8
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1737, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( m_debugYAxisScale )", "%s < %s\n\t%g, %g", "0.0f", "m_debugYAxisScale", vertAlign, numDataEntriesb) )
        __debugbreak();
    }
    __asm
    {
      vdivss  xmm3, xmm11, dword ptr [rsi+1E4h]
      vmulss  xmm0, xmm6, xmm13
      vmulss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm6, xmm12
      vmovss  [rsp+rbx*4+1A68h+data], xmm1
      vsubss  xmm0, xmm11, xmm6
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm1, xmm3
      vmovss  [rsp+rbx*4+1A68h+var_1968], xmm2
    }
    ++_RBX;
  }
  while ( _RBX < 0x20 );
  if ( _RSI->m_debugXAxisScale <= 0 )
  {
    LODWORD(numDataEntries) = _RSI->m_debugXAxisScale;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1742, ASSERT_TYPE_ASSERT, "( 0 ) < ( m_debugXAxisScale )", "%s < %s\n\t%i, %i", "0", "m_debugXAxisScale", 0i64, numDataEntries) )
      __debugbreak();
  }
  LOBYTE(decayTypea) = decayType;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+1E0h]
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm10, xmm1, xmm0
  }
  *(float *)&_XMM0 = CG_ShakeImpulse_CalcFraction(timeMs, startTimeMs, attackMs, decayMs, decayTypea);
  __asm
  {
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm9, cs:__real@43700000
    vaddss  xmm1, xmm9, dword ptr [r12+8]
    vaddss  xmm2, xmm1, cs:graphAdjustY_0; y
    vmovss  xmm8, cs:__real@43a00000
    vaddss  xmm1, xmm8, dword ptr [r12+4]
    vaddss  xmm1, xmm1, cs:graphAdjustX_0; x
    vmovss  [rsp+1A68h+decayType], xmm3
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovaps xmm7, xmm0
  }
  CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, decayTyped, &colorWhite);
  __asm
  {
    vaddss  xmm2, xmm9, dword ptr [r12+8]
    vaddss  xmm1, xmm8, dword ptr [r12+4]
    vaddss  xmm2, xmm2, cs:graphAdjustY_0; y
    vaddss  xmm1, xmm1, cs:graphAdjustX_0; x
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmulss  xmm0, xmm7, xmm13
    vdivss  xmm6, xmm0, dword ptr [rsi+1E4h]
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  [rsp+1A68h+horzAlign], xmm11
    vmovss  dword ptr [rsp+1A68h+var_1A40], xmm14
    vmovss  [rsp+1A68h+decayType], xmm0
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, decayTypee, v137, *(float *)&horzAlign, data, 0x20u, 0, &colorCyan);
  __asm
  {
    vaddss  xmm1, xmm9, dword ptr [r12+8]
    vaddss  xmm0, xmm8, dword ptr [r12+4]
    vaddss  xmm2, xmm1, cs:graphAdjustY_0; y
    vaddss  xmm1, xmm0, cs:graphAdjustX_0; x
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+1A68h+horzAlign], xmm6
    vmovss  dword ptr [rsp+1A68h+var_1A40], xmm10
    vmovss  [rsp+1A68h+decayType], xmm0
  }
  CG_DebugGraphs_DrawGraphDatapoint(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, decayTypef, v138, *(float *)&horzAligna, &colorCyan);
  __asm
  {
    vaddss  xmm3, xmm8, dword ptr [r12+4]
    vmulss  xmm1, xmm7, xmm12
    vsubss  xmm0, xmm11, xmm7
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm0, xmm9, dword ptr [r12+8]
    vaddss  xmm2, xmm0, cs:graphAdjustY_0; y
    vdivss  xmm6, xmm1, dword ptr [rsi+1E4h]
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vaddss  xmm1, xmm3, cs:graphAdjustX_0; x
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+1A68h+horzAlign], xmm11
    vmovss  dword ptr [rsp+1A68h+var_1A40], xmm14
    vmovss  [rsp+1A68h+decayType], xmm0
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, decayTypeg, v139, *(float *)&horzAlignb, v155, 0x20u, 0, &colorGreen);
  __asm
  {
    vaddss  xmm1, xmm9, dword ptr [r12+8]
    vaddss  xmm0, xmm8, dword ptr [r12+4]
    vaddss  xmm2, xmm1, cs:graphAdjustY_0; y
    vaddss  xmm1, xmm0, cs:graphAdjustX_0; x
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+1A68h+horzAlign], xmm6
    vmovss  dword ptr [rsp+1A68h+var_1A40], xmm10
    vmovss  [rsp+1A68h+decayType], xmm0
  }
  CG_DebugGraphs_DrawGraphDatapoint(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, decayTypeh, v140, *(float *)&horzAlignc, &colorGreen);
  __asm
  {
    vaddss  xmm1, xmm9, dword ptr [r12+8]
    vaddss  xmm0, xmm8, dword ptr [r12+4]
    vaddss  xmm2, xmm1, cs:graphAdjustY_0; y
    vaddss  xmm1, xmm0, cs:graphAdjustX_0; x
    vmovss  xmm0, cs:__real@40800000
    vmovss  xmm3, cs:SHAKE_DEBUG_GRAPH_WIDTH; width
    vmovss  [rsp+1A68h+vertAlign], xmm0
    vmovss  [rsp+1A68h+horzAlign], xmm0
    vmovss  xmm0, cs:SHAKE_DEBUG_GRAPH_HEIGHT
    vmovss  dword ptr [rsp+1A68h+var_1A40], xmm10
    vmovss  [rsp+1A68h+decayType], xmm0
  }
  CG_DebugGraphs_DrawGraphXAxisDatapoint(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, decayTypei, v141, *(float *)&horzAlignd, *(float *)&vertAligna, &colorYellow);
  _R11 = &v166;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
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
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v12; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v15; 
  __int64 v16; 
  __int64 v17; 
  char v18; 
  char v19; 
  char v20; 
  char v21; 
  char v22; 
  char v23[3]; 
  int v24; 
  unsigned int v25; 
  unsigned int p; 
  int v27; 
  int v28; 

  MemFile_ReadData(memFile, 1ui64, &p);
  p_m_xCoordTrans = &this->m_xCoordTrans;
  this->m_initialized = p;
  v25 = 0;
  for ( i = 0; (int)i < 3; ++i )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v7 = p;
    if ( i >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    p_m_xCoordTrans[-1].v[0] = v7;
    MemFile_ReadData(memFile, 4ui64, &v27);
    v8 = v27;
    if ( i >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    p_m_xCoordTrans->v[0] = v8;
    MemFile_ReadData(memFile, 4ui64, &v28);
    v9 = v28;
    if ( i >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    p_m_xCoordTrans[1].v[0] = v9;
    MemFile_ReadData(memFile, 4ui64, &v24);
    v10 = v24;
    if ( i >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    p_m_xCoordTrans[2].v[0] = v10;
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
  _RBX = &this->m_shakeState[0].m_translation.m_movement.m_persistenceScale;
  v12 = v25;
  this->m_blendDuration = p;
  do
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    *((_BYTE *)_RBX + 76) = p;
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+50h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+54h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+58h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+5Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+60h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+64h], xmm0 }
    MemFile_ReadData(memFile, 1ui64, &v27);
    *((_BYTE *)_RBX - 132) = v27;
    MemFile_ReadData(memFile, 1ui64, &v28);
    *((_BYTE *)_RBX - 160) = v28;
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-0ACh], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-0A8h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-0A4h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-9Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-98h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-94h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-90h], xmm0 }
    MemFile_ReadData(memFile, 1ui64, &v18);
    *((_BYTE *)_RBX - 116) = v18;
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-80h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-7Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-78h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-70h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-6Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-68h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-64h], xmm0 }
    MemFile_ReadData(memFile, 1ui64, &v19);
    *((_BYTE *)_RBX - 76) = v19;
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-58h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-54h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-50h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-48h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-44h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-40h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-3Ch], xmm0 }
    MemFile_ReadData(memFile, 1ui64, &v20);
    *((_BYTE *)_RBX - 8) = v20;
    MemFile_ReadData(memFile, 1ui64, &v21);
    *((_BYTE *)_RBX - 36) = v21;
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-30h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-2Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-28h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-20h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-1Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-18h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-14h], xmm0 }
    MemFile_ReadData(memFile, 1ui64, &v22);
    *((_BYTE *)_RBX + 8) = v22;
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-4], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+10h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+14h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+18h], xmm0 }
    MemFile_ReadData(memFile, 1ui64, v23);
    *((_BYTE *)_RBX + 48) = v23[0];
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+24h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+28h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+2Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+34h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+38h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+3Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    ++v12;
    __asm { vmovss  dword ptr [rbx+40h], xmm0 }
    _RBX += 69;
  }
  while ( v12 < 2 );
  this->m_impulseManager.m_initialized = 0;
  p_m_listHead = &this->m_impulseManager.m_impulseList.m_listHead;
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_impulseManager.m_impulseList.m_listHead )
  {
    do
    {
      v15 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_impulseManager.m_impulseList.m_freelist.m_head;
      this->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = mp_next;
      mp_next = v15;
    }
    while ( v15 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
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
  bool p; 

  _RDI = this;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RDI->m_initialized = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+14h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+18h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+1Ch], xmm0 }
}

/*
==============
ShakeState::Load
==============
*/
void ShakeState::Load(ShakeState *this, MemoryFile *memFile)
{
  bool p; 

  _RBX = this;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->m_initialized = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0FCh], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+100h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+104h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+108h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+10Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+110h], xmm0 }
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->m_rotation.m_initialized = p;
  ShakePerlinScale::Load(&_RBX->m_rotation.m_combined, memFile);
  ShakePerlinScale::Load(&_RBX->m_rotation.m_movement, memFile);
  ShakePerlinScale::Load(&_RBX->m_rotation.m_view, memFile);
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->m_translation.m_initialized = p;
  ShakePerlinScale::Load(&_RBX->m_translation.m_combined, memFile);
  ShakePerlinScale::Load(&_RBX->m_translation.m_movement, memFile);
  ShakePerlinScale::Load(&_RBX->m_translation.m_view, memFile);
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
  __int64 v51; 
  __int64 v52; 
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
      LODWORD(v52) = 3;
      LODWORD(v51) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    p = p_m_xCoordTrans[-1].v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v6 >= 3 )
    {
      LODWORD(v52) = 3;
      LODWORD(v51) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    p = p_m_xCoordTrans->v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v6 >= 3 )
    {
      LODWORD(v52) = 3;
      LODWORD(v51) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    p = p_m_xCoordTrans[1].v[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v6 >= 3 )
    {
      LODWORD(v52) = 3;
      LODWORD(v51) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v52) )
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
  _R14 = &this->m_shakeState[0].m_translation.m_movement.m_persistenceScale;
  do
  {
    LOBYTE(p) = *((_BYTE *)_R14 + 76);
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteData(memFile, 0xCui64, _R14 + 20);
    MemFile_WriteData(memFile, 0xCui64, _R14 + 23);
    LOBYTE(p) = *((_BYTE *)_R14 - 132);
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = *((_BYTE *)_R14 - 160);
    MemFile_WriteData(memFile, 1ui64, &p);
    __asm { vmovss  xmm1, dword ptr [r14-0ACh]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-0A8h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-0A4h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-9Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-98h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-94h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-90h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    LOBYTE(p) = *((_BYTE *)_R14 - 116);
    MemFile_WriteData(memFile, 1ui64, &p);
    __asm { vmovss  xmm1, dword ptr [r14-80h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-7Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-78h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-70h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-6Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-68h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-64h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    LOBYTE(p) = *((_BYTE *)_R14 - 76);
    MemFile_WriteData(memFile, 1ui64, &p);
    __asm { vmovss  xmm1, dword ptr [r14-58h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-54h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-50h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-48h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-44h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-40h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-3Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    LOBYTE(p) = *((_BYTE *)_R14 - 8);
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = *((_BYTE *)_R14 - 36);
    MemFile_WriteData(memFile, 1ui64, &p);
    __asm { vmovss  xmm1, dword ptr [r14-30h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-2Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-28h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-20h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-1Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-18h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14-14h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    LOBYTE(p) = *((_BYTE *)_R14 + 8);
    MemFile_WriteData(memFile, 1ui64, &p);
    __asm { vmovss  xmm1, dword ptr [r14-4]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+4]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+0Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+10h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+14h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+18h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    LOBYTE(p) = *((_BYTE *)_R14 + 48);
    MemFile_WriteData(memFile, 1ui64, &p);
    __asm { vmovss  xmm1, dword ptr [r14+24h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+28h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+2Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+34h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+38h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+3Ch]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [r14+40h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    ++v4;
    _R14 += 69;
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
  _RBX = this;
  MemFile_WriteData(memFile, 1ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+4]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+8]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+10h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+14h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+18h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+1Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
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
  unsigned int v9; 
  LocalClientNum_t v11; 
  cg_t *v13; 
  const CinematicMotionDef *CinematicMotionDef; 
  unsigned int CinematicMotionIndexForPtr; 
  CgWeaponMap *Instance; 
  const CinematicMotionDef *v17; 
  int time; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v24; 
  ntl::internal::list_node<ShakeImpulse> *v25; 
  ntl::internal::list_node<ShakeImpulse> *v26; 
  int m_blendStart; 
  bool v28; 
  const dvar_t *v29; 
  __int64 v30; 
  int *v; 
  bool v36; 
  int v38; 
  int v40; 
  int v42; 
  int v44; 
  ShakeFinal *v52; 
  __int64 v53; 
  int v54; 
  cg_t *LocalClientGlobals; 

  v9 = 0;
  v11 = localClientNum;
  _RBP = this;
  if ( !outRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 493, ASSERT_TYPE_ASSERT, "( outRotation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outRotation", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 494, ASSERT_TYPE_ASSERT, "( outTranslation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outTranslation", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outImpulseRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 495, ASSERT_TYPE_ASSERT, "( outImpulseRotation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outImpulseRotation", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outImpulseTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 496, ASSERT_TYPE_ASSERT, "( outImpulseTranslation ) != ( nullptr )", "%s != %s\n\t%p, %p", "outImpulseTranslation", "nullptr", NULL, NULL) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(v11);
  v13 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 499, ASSERT_TYPE_ASSERT, "( cgameGlob ) != ( nullptr )", "%s != %s\n\t%p, %p", "cgameGlob", "nullptr", NULL, NULL) )
    __debugbreak();
  CinematicMotionDef = CG_Skydive_GetCinematicMotionDef(v11, &LocalClientGlobals->predictedPlayerState);
  if ( CinematicMotionDef )
  {
    CinematicMotionIndexForPtr = CG_ViewMotion_GetCinematicMotionIndexForPtr(CinematicMotionDef);
  }
  else
  {
    Instance = CgWeaponMap::GetInstance(v11);
    v17 = BG_Suit_GetCinematicMotionDef(&LocalClientGlobals->predictedPlayerState, Instance);
    CinematicMotionIndexForPtr = CG_ViewMotion_GetCinematicMotionIndexForPtr(v17);
    if ( LocalClientGlobals->predictedPlayerState.cinematicMotionOverride != 31 )
      CinematicMotionIndexForPtr = LocalClientGlobals->predictedPlayerState.cinematicMotionOverride;
  }
  if ( CG_ViewMotion_GetCinematicMotionDef(CinematicMotionIndexForPtr) )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_58], xmm6
      vmovaps [rsp+0C8h+var_68], xmm7
    }
    if ( !_RBP->m_initialized )
      Shake::Reset(_RBP);
    if ( _RBP->m_curMotionIndex == 31 )
    {
      _RBP->m_curMotionIndex = CinematicMotionIndexForPtr;
      _RBP->m_goalMotionIndex = CinematicMotionIndexForPtr;
    }
    *(double *)&_XMM0 = Com_GetTimescaleForSv();
    __asm
    {
      vmulss  xmm7, xmm0, cs:?cls@@3UClStatic@@A.frametime_base; ClStatic cls
      vmulss  xmm6, xmm7, cs:__real@447a0000
      vmovaps xmm2, xmm7; frametime
    }
    ShakeState::Update(&_RBP->m_shakeState[_RBP->m_curStateIndex], v11, *(const float *)&_XMM2, _RBP->m_curMotionIndex);
    time = LocalClientGlobals->time;
    v54 = time;
    if ( !_RBP->m_impulseManager.m_initialized )
    {
      mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBP->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
      p_m_listHead = &_RBP->m_impulseManager.m_impulseList.m_listHead;
      if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&_RBP->m_impulseManager.m_impulseList.m_listHead )
      {
        do
        {
          v24 = mp_next[1].mp_next;
          mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBP->m_impulseManager.m_impulseList.m_freelist.m_head;
          _RBP->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = mp_next;
          mp_next = v24;
        }
        while ( v24 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
      }
      p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
      _RBP->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next = &_RBP->m_impulseManager.m_impulseList.m_listHead.m_sentinel;
      _RBP->m_impulseManager.m_initialized = 1;
      _RBP->m_impulseManager.m_debugXAxisScale = 1;
      _RBP->m_impulseManager.m_debugYAxisScale = 1.0;
    }
    v25 = (ntl::internal::list_node<ShakeImpulse> *)_RBP->m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
    if ( v25 != (ntl::internal::list_node<ShakeImpulse> *)&_RBP->m_impulseManager.m_impulseList.m_listHead )
    {
      do
      {
        if ( !v25 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        if ( v25->m_data.m_startTimeMs + v25->m_data.m_decayMs + v25->m_data.m_attackMs > time )
        {
          v25 = (ntl::internal::list_node<ShakeImpulse> *)v25->mp_next;
        }
        else
        {
          v26 = v25;
          if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
            __debugbreak();
          v25 = (ntl::internal::list_node<ShakeImpulse> *)v25->mp_next;
          ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse>>::remove(&_RBP->m_impulseManager.m_impulseList.m_listHead, v26);
          v26->mp_prev = (ntl::internal::list_node_base *)_RBP->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next;
          _RBP->m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v26;
          time = v54;
        }
      }
      while ( v25 != (ntl::internal::list_node<ShakeImpulse> *)&_RBP->m_impulseManager.m_impulseList.m_listHead );
      v13 = LocalClientGlobals;
      v9 = 0;
      v11 = localClientNum;
    }
    m_blendStart = _RBP->m_blendStart;
    v28 = m_blendStart > 0;
    if ( CinematicMotionIndexForPtr != _RBP->m_goalMotionIndex || m_blendStart <= 0 && CinematicMotionIndexForPtr != _RBP->m_curMotionIndex )
    {
      _RBP->m_goalMotionIndex = CinematicMotionIndexForPtr;
      _RBP->m_blendStart = v13->time;
      v29 = DCONST_DVARINT_handheldCameraBlendDurationMs;
      if ( !DCONST_DVARINT_handheldCameraBlendDurationMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraBlendDurationMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      v28 = 1;
      _RBP->m_blendDuration = v29->current.integer;
    }
    LODWORD(v30) = _RBP->m_curStateIndex;
    if ( v28 )
    {
      v30 = ((_BYTE)v30 - 1) & 1;
      __asm { vmovaps xmm2, xmm7; frametime }
      ShakeState::Update(&_RBP->m_shakeState[v30], v11, *(const float *)&_XMM2, _RBP->m_goalMotionIndex);
    }
    _R15 = outImpulseTranslation;
    _R12 = outImpulseRotation;
    Shake::CalcConstantShakeFinalParams(_RBP, v13->time, outRotation, outTranslation, outImpulseRotation, outImpulseTranslation);
    __asm { vmovaps xmm7, [rsp+0C8h+var_68] }
    if ( v28 && _RBP->m_blendStart + _RBP->m_blendDuration <= v13->time )
    {
      _RBP->m_curStateIndex = v30;
      _RBP->m_curMotionIndex = CinematicMotionIndexForPtr;
      _RBP->m_goalMotionIndex = CinematicMotionIndexForPtr;
      *(_QWORD *)&_RBP->m_blendStart = 0i64;
    }
    if ( !CL_Pause_IsGamePaused() )
    {
      v = _RBP->m_xCoordTrans.v;
      v36 = 1;
      do
      {
        if ( !v36 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        __asm { vmovaps xmm1, xmm6; frametimeMs }
        v38 = CG_Shake_CalcXCoord(*(v - 3), *(double *)&_XMM1, v9, outRotation);
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        *(v - 3) = v38;
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        __asm { vmovaps xmm1, xmm6; frametimeMs }
        v40 = CG_Shake_CalcXCoord(*v, *(double *)&_XMM1, v9, outTranslation);
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        *v = v40;
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        __asm { vmovaps xmm1, xmm6; frametimeMs }
        v42 = CG_Shake_CalcXCoord(v[3], *(double *)&_XMM1, v9, outImpulseRotation);
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        v[3] = v42;
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        __asm { vmovaps xmm1, xmm6; frametimeMs }
        v44 = CG_Shake_CalcXCoord(v[6], *(double *)&_XMM1, v9, outImpulseTranslation);
        if ( v9 >= 3 )
        {
          LODWORD(v53) = 3;
          LODWORD(v52) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        v[6] = v44;
        ++v9;
        ++v;
        v36 = v9 < 3;
      }
      while ( (int)v9 < 3 );
      _RBP = this;
    }
    __asm { vmovsd  xmm0, qword ptr [rbp+0] }
    _RCX = outRotation;
    __asm
    {
      vmovaps xmm6, [rsp+0C8h+var_58]
      vmovsd  qword ptr [rcx+30h], xmm0
    }
    outRotation->m_xCoord.v[2] = _RBP->m_xCoordRot.v[2];
    __asm { vmovsd  xmm0, qword ptr [rbp+0Ch] }
    _RCX = outTranslation;
    __asm { vmovsd  qword ptr [rcx+30h], xmm0 }
    outTranslation->m_xCoord.v[2] = _RBP->m_xCoordTrans.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+18h]
      vmovsd  qword ptr [r12+30h], xmm0
    }
    outImpulseRotation->m_xCoord.v[2] = _RBP->m_xCoordImpulseRot.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+24h]
      vmovsd  qword ptr [r15+30h], xmm0
    }
    outImpulseTranslation->m_xCoord.v[2] = _RBP->m_xCoordImpulseTrans.v[2];
  }
  else
  {
    _RBP->m_initialized = 0;
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

void __fastcall ShakePerlinScale::Update(ShakePerlinScale *this, double frametime, double value, const CinematicShakeModifierDef *const modifierDef)
{
  char v20; 
  char v21; 
  RumbleGraph *nonLinearMap; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  double v59; 
  __int64 v60; 
  double v61; 

  _RDI = modifierDef;
  __asm { vmovaps [rsp+98h+var_18], xmm6 }
  _RBX = this;
  __asm
  {
    vmovaps xmm6, xmm1
    vmovaps xmm0, xmm2; val
  }
  if ( modifierDef->type )
  {
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps [rsp+98h+var_38], xmm8
      vmovaps [rsp+98h+var_48], xmm9
    }
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
    __asm
    {
      vmovss  xmm2, dword ptr [r9+10h]; max
      vmovss  xmm1, dword ptr [r9+0Ch]; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm9, xmm6, cs:__real@447a0000
      vmovss  dword ptr [rbx+20h], xmm0
      vmovaps xmm1, xmm0; goal
      vmovss  xmm0, dword ptr [rbx+1Ch]; previous
      vmovss  dword ptr [rsp+98h+fmt], xmm9
    }
    *(double *)&_XMM0 = CG_Shake_MovingAverage(*(float *)&_XMM0, *(float *)&_XMM1, _RDI->inBlendInTimeMs, _RDI->inBlendOutTimeMs, fmt);
    __asm
    {
      vmovss  dword ptr [rbx+1Ch], xmm0
      vmovss  xmm1, dword ptr [rdi+10h]
      vsubss  xmm6, xmm1, dword ptr [rdi+0Ch]
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm6, xmm7
    }
    if ( v20 | v21 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+98h+var_58], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+98h+var_60], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1251, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( speedRange )", "%s < %s\n\t%g, %g", "0.0f", "speedRange", v59, v61) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vsubss  xmm2, xmm0, dword ptr [rdi+0Ch]
      vmovss  xmm8, cs:__real@3f800000
      vdivss  xmm0, xmm2, xmm6; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    nonLinearMap = _RDI->nonLinearMap;
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_28]
      vmovaps xmm6, xmm0
    }
    if ( !nonLinearMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1255, ASSERT_TYPE_ASSERT, "( nonLinearGraph ) != ( nullptr )", "%s != %s\n\t%p, %p", "nonLinearGraph", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( !nonLinearMap->knotCount )
    {
      LODWORD(v60) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 1256, ASSERT_TYPE_ASSERT, "( 0 ) < ( nonLinearGraph->knotCount )", "%s < %s\n\t%i, %i", "0", "nonLinearGraph->knotCount", 0i64, v60) )
        __debugbreak();
    }
    __asm { vmovaps xmm2, xmm6; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFraction(nonLinearMap->knotCount, nonLinearMap->knots, *(const float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rdi+28h]
      vsubss  xmm4, xmm8, xmm0
      vmulss  xmm2, xmm4, dword ptr [rdi+24h]
      vaddss  xmm1, xmm2, xmm1; goal
      vmovss  dword ptr [rbx+10h], xmm1
      vmulss  xmm2, xmm0, dword ptr [rdi+18h]
      vmulss  xmm3, xmm4, dword ptr [rdi+14h]
      vaddss  xmm3, xmm3, xmm2
      vmovss  dword ptr [rbx+18h], xmm3
      vmulss  xmm2, xmm4, dword ptr [rdi+1Ch]
      vmovaps xmm6, xmm0
      vmulss  xmm0, xmm0, dword ptr [rdi+20h]
      vaddss  xmm2, xmm2, xmm0
      vmovss  xmm0, dword ptr [rbx]; previous
      vmovss  dword ptr [rbx+14h], xmm2
      vmovss  dword ptr [rsp+98h+fmt], xmm9
    }
    *(double *)&_XMM0 = CG_Shake_MovingAverage(*(float *)&_XMM0, *(float *)&_XMM1, _RDI->outBlendInTimeMs, _RDI->outBlendOutTimeMs, fmta);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+18h]; goal
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rbx+8]; previous
      vmovss  dword ptr [rsp+98h+fmt], xmm9
    }
    *(double *)&_XMM0 = CG_Shake_MovingAverage(*(float *)&_XMM0, *(float *)&_XMM1, _RDI->outBlendInTimeMs, _RDI->outBlendOutTimeMs, fmtb);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+14h]; goal
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm0, dword ptr [rbx+4]; previous
      vmovss  dword ptr [rsp+98h+fmt], xmm9
    }
    *(double *)&_XMM0 = CG_Shake_MovingAverage(*(float *)&_XMM0, *(float *)&_XMM1, _RDI->outBlendInTimeMs, _RDI->outBlendOutTimeMs, fmtc);
    __asm
    {
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm0, dword ptr [rbx+24h]; previous
      vmovaps xmm1, xmm6; goal
      vmovss  dword ptr [rsp+98h+fmt], xmm9
    }
    *(double *)&_XMM0 = CG_Shake_MovingAverage(*(float *)&_XMM0, *(float *)&_XMM1, _RDI->outBlendInTimeMs, _RDI->outBlendOutTimeMs, fmtd);
    __asm
    {
      vmovaps xmm9, [rsp+98h+var_48]
      vmovaps xmm8, [rsp+98h+var_38]
      vmovss  dword ptr [rbx+24h], xmm0
    }
  }
  else
  {
    this->m_speedScale = 1.0;
    this->m_amplitudeScale = 1.0;
    this->m_persistenceScale = 1.0;
    this->m_initialized = 0;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_18] }
}

/*
==============
ShakeState::Update
==============
*/

void __fastcall ShakeState::Update(ShakeState *this, const LocalClientNum_t localClientNum, double frametime, const unsigned int motionIndex)
{
  cg_t *LocalClientGlobals; 
  char v18; 
  bool v19; 
  unsigned int pm_type; 
  bool v24; 
  const CinematicMotionDef *CinematicMotionDef; 
  const CinematicMotionDef *v64; 
  const CinematicShakeDef *p_camera_shake_rotation; 
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  vec3_t v3; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RDI = this;
  __asm { vmovaps xmm7, xmm2 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  _RBX = &LocalClientGlobals->predictedPlayerState;
  if ( !(v18 | v19) )
  {
    v19 = !_RDI->m_initialized;
    __asm
    {
      vmovaps [rsp+108h+var_88], xmm9
      vmovaps [rsp+108h+var_98], xmm10
    }
    if ( v19 )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx+1D8h]
        vmovsd  qword ptr [rdi+0FCh], xmm0
      }
      _RDI->m_prevViewAngles.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rdi+108h], xmm0
      }
      _RDI->m_prevOrigin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2];
      _RDI->m_rotation.m_initialized = 0;
      _RDI->m_translation.m_initialized = 0;
      _RDI->m_initialized = 1;
    }
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    pm_type = _RBX->pm_type;
    __asm
    {
      vmovaps [rsp+108h+var_78], xmm8
      vmovss  xmm10, cs:__real@3f800000
      vxorpd  xmm9, xmm9, xmm9
    }
    v24 = pm_type <= 1;
    if ( pm_type == 1 || (v24 = pm_type <= 8, pm_type == 8) )
    {
      __asm { vcomiss xmm7, xmm6 }
      if ( v24 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+108h+var_C8], xmm0
          vmovsd  [rsp+108h+var_D0], xmm9
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 885, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frametime )", "%s < %s\n\t%g, %g", "0.0f", "frametime", v82, v84) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+108h]
        vsubss  xmm3, xmm0, dword ptr [rbx+30h]
        vmovss  xmm1, dword ptr [rdi+10Ch]
        vsubss  xmm2, xmm1, dword ptr [rbx+34h]
        vmovss  xmm0, dword ptr [rdi+110h]
        vsubss  xmm4, xmm0, dword ptr [rbx+38h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vdivss  xmm0, xmm10, xmm7
        vmulss  xmm8, xmm1, xmm0
      }
    }
    else if ( CG_Skydive_IsActiveForShake(localClientNum, _RBX) )
    {
      *(double *)&_XMM0 = CG_Skydive_GetCameraShakeVelocity(localClientNum, _RBX);
      __asm { vmovaps xmm8, xmm0 }
    }
    else if ( _RBX->groundEntityNum == 2047 )
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3Ch]
        vmovss  xmm2, dword ptr [rbx+40h]
        vmovss  xmm3, dword ptr [rbx+44h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm8, xmm2, xmm2
      }
    }
    AnglesSubtract(&_RBX->viewangles, &_RDI->m_prevViewAngles, &v3);
    __asm { vcomiss xmm7, xmm6 }
    if ( v18 | v19 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+108h+var_C8], xmm0
        vmovsd  [rsp+108h+var_D0], xmm9
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shake.cpp", 910, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frametime )", "%s < %s\n\t%g, %g", "0.0f", "frametime", v83, v85) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+108h+v3]
      vmovss  xmm1, dword ptr [rsp+108h+v3+4]
      vmulss  xmm3, xmm0, xmm0
      vmovss  xmm0, dword ptr [rsp+108h+v3+8]
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm1, xmm0, xmm0
      vaddss  xmm4, xmm3, xmm2
      vdivss  xmm0, xmm10, xmm7
      vaddss  xmm2, xmm4, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vmulss  xmm9, xmm3, xmm0
      vmovsd  xmm0, qword ptr [rbx+1D8h]
      vmovsd  qword ptr [rdi+0FCh], xmm0
    }
    _RDI->m_prevViewAngles.v[2] = _RBX->viewangles.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+30h]
      vmovsd  qword ptr [rdi+108h], xmm0
    }
    _RDI->m_prevOrigin.v[2] = _RBX->origin.v[2];
    CinematicMotionDef = CG_ViewMotion_GetCinematicMotionDef(motionIndex);
    __asm { vmovaps xmm10, [rsp+108h+var_98] }
    v64 = CinematicMotionDef;
    if ( CinematicMotionDef && (p_camera_shake_rotation = &CinematicMotionDef->camera_shake_rotation, CinematicMotionDef->camera_shake_rotation.enabled) )
    {
      __asm { vmovaps xmm1, xmm8; value }
      *(float *)&_XMM0 = CG_Shake_GetScriptOverride(localClientNum, *(double *)&_XMM1, MOVEMENT, &CinematicMotionDef->camera_shake_rotation.moveSpeedModifiers);
      __asm
      {
        vmovaps xmm1, xmm9; value
        vmovaps xmm6, xmm0
      }
      *(float *)&_XMM0 = CG_Shake_GetScriptOverride(localClientNum, *(double *)&_XMM1, DODGE, &v64->camera_shake_rotation.viewSpeedModifiers);
      __asm
      {
        vmovaps xmm3, xmm0; viewValue
        vmovaps xmm2, xmm6; moveValue
        vmovaps xmm1, xmm7; frametime
      }
      ShakeStateInternal::Update(&_RDI->m_rotation, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, p_camera_shake_rotation);
    }
    else
    {
      _RDI->m_rotation.m_initialized = 0;
    }
    if ( v64 && v64->camera_shake_translation.enabled )
    {
      __asm { vmovaps xmm1, xmm8; value }
      *(float *)&_XMM0 = CG_Shake_GetScriptOverride(localClientNum, *(double *)&_XMM1, COUNT, &v64->camera_shake_translation.moveSpeedModifiers);
      __asm
      {
        vmovaps xmm1, xmm9; value
        vmovaps xmm6, xmm0
      }
      *(float *)&_XMM0 = CG_Shake_GetScriptOverride(localClientNum, *(double *)&_XMM1, COUNT|DODGE, &v64->camera_shake_translation.viewSpeedModifiers);
      __asm
      {
        vmovaps xmm3, xmm0; viewValue
        vmovaps xmm2, xmm6; moveValue
        vmovaps xmm1, xmm7; frametime
      }
      ShakeStateInternal::Update(&_RDI->m_translation, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, &v64->camera_shake_translation);
    }
    else
    {
      _RDI->m_translation.m_initialized = 0;
    }
    __asm
    {
      vmovaps xmm8, [rsp+108h+var_78]
      vmovaps xmm9, [rsp+108h+var_88]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_68]
  }
}

/*
==============
ShakeStateInternal::Update
==============
*/

void __fastcall ShakeStateInternal::Update(ShakeStateInternal *this, double frametime, const float moveValue, double viewValue, const CinematicShakeDef *const shakeDef)
{
  _RDI = this;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm1
  }
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
  ShakePerlinScale::Update(&this->m_movement, *(const float *)&frametime, moveValue, &shakeDef->moveSpeedModifiers);
  __asm
  {
    vmovaps xmm2, xmm7; value
    vmovaps xmm1, xmm6; frametime
  }
  ShakePerlinScale::Update(&_RDI->m_view, *(const float *)&_XMM1, *(float *)&_XMM2, &shakeDef->viewSpeedModifiers);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+54h]; b
    vmovss  xmm0, dword ptr [rdi+2Ch]; a
  }
  *(float *)&_XMM0 = CG_Shake_BlendValues(*(double *)&_XMM0, *(double *)&_XMM1, (const CinematicShakeModifierCombineType)shakeDef->modifierCombineType);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+5Ch]; b
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rdi+34h]; a
  }
  *(float *)&_XMM0 = CG_Shake_BlendValues(*(double *)&_XMM0, *(double *)&_XMM1, (const CinematicShakeModifierCombineType)shakeDef->modifierCombineType);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+58h]; b
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  xmm0, dword ptr [rdi+30h]; a
  }
  *(float *)&_XMM0 = CG_Shake_BlendValues(*(double *)&_XMM0, *(double *)&_XMM1, (const CinematicShakeModifierCombineType)shakeDef->modifierCombineType);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rdi+4], xmm0
  }
}

