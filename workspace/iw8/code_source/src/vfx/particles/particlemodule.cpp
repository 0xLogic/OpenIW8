/*
==============
ParticleModule::FindModuleDef
==============
*/

const ParticleModuleDef *__fastcall ParticleModule::FindModuleDef(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ?FindModuleDef@ParticleModule@@SAPEBUParticleModuleDef@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::GetUpdateData
==============
*/

const ParticleModuleUpdateData *__fastcall ParticleModule::GetUpdateData()
{
  return ?GetUpdateData@ParticleModule@@SAPEBUParticleModuleUpdateData@@XZ();
}

/*
==============
ParticleModule::FindModule<ParticleModuleSizeLerp>
==============
*/

const ParticleModuleSizeLerp *__fastcall ParticleModule::FindModule<ParticleModuleSizeLerp>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleSizeLerp@@@ParticleModule@@SAPEBUParticleModuleSizeLerp@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleInitSpawn>
==============
*/

const ParticleModuleInitSpawn *__fastcall ParticleModule::FindModule<ParticleModuleInitSpawn>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleInitSpawn@@@ParticleModule@@SAPEBUParticleModuleInitSpawn@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleShaderGraph>
==============
*/

const ParticleModuleShaderGraph *__fastcall ParticleModule::FindModule<ParticleModuleShaderGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleShaderGraph@@@ParticleModule@@SAPEBUParticleModuleShaderGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleEmissionGraph>
==============
*/

const ParticleModuleEmissionGraph *__fastcall ParticleModule::FindModule<ParticleModuleEmissionGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleEmissionGraph@@@ParticleModule@@SAPEBUParticleModuleEmissionGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::ParseToModuleDef
==============
*/

void __fastcall ParticleModule::ParseToModuleDef(ParticleSystemDef *pParticleSystemDef, ParticleEmitterDef *pParticleEmitterDef, ParticleStateDef *pParticleStateDef, ParticleModuleDef *pModuleDef, const char *pData)
{
  ?ParseToModuleDef@ParticleModule@@SAXPEAUParticleSystemDef@@PEAUParticleEmitterDef@@PEAUParticleStateDef@@PEAUParticleModuleDef@@PEBD@Z(pParticleSystemDef, pParticleEmitterDef, pParticleStateDef, pModuleDef, pData);
}

/*
==============
ParticleModule::GetBeginIndex
==============
*/

ParticleModuleType __fastcall ParticleModule::GetBeginIndex(ParticleModule::ParticleModuleGroup group)
{
  return ?GetBeginIndex@ParticleModule@@SA?AW4ParticleModuleType@@W4ParticleModuleGroup@1@@Z(group);
}

/*
==============
ParticleModule::GetGroupData
==============
*/

const ParticleModuleGroupData *__fastcall ParticleModule::GetGroupData()
{
  return ?GetGroupData@ParticleModule@@SAPEBUParticleModuleGroupData@@XZ();
}

/*
==============
ParticleModule::FindModule<ParticleModuleForce>
==============
*/

const ParticleModuleForce *__fastcall ParticleModule::FindModule<ParticleModuleForce>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleForce@@@ParticleModule@@SAPEBUParticleModuleForce@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleSizeGraph>
==============
*/

const ParticleModuleSizeGraph *__fastcall ParticleModule::FindModule<ParticleModuleSizeGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleSizeGraph@@@ParticleModule@@SAPEBUParticleModuleSizeGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleColorGraph>
==============
*/

const ParticleModuleColorGraph *__fastcall ParticleModule::FindModule<ParticleModuleColorGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleColorGraph@@@ParticleModule@@SAPEBUParticleModuleColorGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleIntensityGraph>
==============
*/

const ParticleModuleIntensityGraph *__fastcall ParticleModule::FindModule<ParticleModuleIntensityGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleIntensityGraph@@@ParticleModule@@SAPEBUParticleModuleIntensityGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModulePositionGraph>
==============
*/

const ParticleModulePositionGraph *__fastcall ParticleModule::FindModule<ParticleModulePositionGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModulePositionGraph@@@ParticleModule@@SAPEBUParticleModulePositionGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleVectorFieldGraph>
==============
*/

const ParticleModuleVectorFieldGraph *__fastcall ParticleModule::FindModule<ParticleModuleVectorFieldGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleVectorFieldGraph@@@ParticleModule@@SAPEBUParticleModuleVectorFieldGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::ConvertFromModuleDef
==============
*/

const ParticleModule *__fastcall ParticleModule::ConvertFromModuleDef(const ParticleModuleDef *pModuleDef)
{
  return ?ConvertFromModuleDef@ParticleModule@@SAPEBU1@PEBUParticleModuleDef@@@Z(pModuleDef);
}

/*
==============
ParticleModule::FindModule<ParticleModuleVelocityGraph>
==============
*/

const ParticleModuleVelocityGraph *__fastcall ParticleModule::FindModule<ParticleModuleVelocityGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleVelocityGraph@@@ParticleModule@@SAPEBUParticleModuleVelocityGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::GlobalModuleDebugDraw
==============
*/

bool __fastcall ParticleModule::GlobalModuleDebugDraw(ParticleModule *this)
{
  return ?GlobalModuleDebugDraw@ParticleModule@@QEBA_NXZ(this);
}

/*
==============
ParticleModule::GetEndIndex
==============
*/

ParticleModuleType __fastcall ParticleModule::GetEndIndex(ParticleModule::ParticleModuleGroup group)
{
  return ?GetEndIndex@ParticleModule@@SA?AW4ParticleModuleType@@W4ParticleModuleGroup@1@@Z(group);
}

/*
==============
ParticleModule::FindModule<ParticleModuleTemperatureGraph>
==============
*/

const ParticleModuleTemperatureGraph *__fastcall ParticleModule::FindModule<ParticleModuleTemperatureGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleTemperatureGraph@@@ParticleModule@@SAPEBUParticleModuleTemperatureGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::GetModuleCurveList
==============
*/

const ParticleCurveDef *__fastcall ParticleModule::GetModuleCurveList(ParticleModule *this)
{
  return ?GetModuleCurveList@ParticleModule@@QEBAPEBUParticleCurveDef@@XZ(this);
}

/*
==============
ParticleModule::FindModule<ParticleModuleColorLerp>
==============
*/

const ParticleModuleColorLerp *__fastcall ParticleModule::FindModule<ParticleModuleColorLerp>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleColorLerp@@@ParticleModule@@SAPEBUParticleModuleColorLerp@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::GetDataFlags
==============
*/

ParticleDataFlags __fastcall ParticleModule::GetDataFlags(const unsigned int moduleType)
{
  return ?GetDataFlags@ParticleModule@@SA?AW4ParticleDataFlags@@I@Z(moduleType);
}

/*
==============
ParticleModule::GetModuleTypeFlags
==============
*/

unsigned int __fastcall ParticleModule::GetModuleTypeFlags(const unsigned int moduleType)
{
  return ?GetModuleTypeFlags@ParticleModule@@SAII@Z(moduleType);
}

/*
==============
ParticleModule::FindModule<ParticleModuleEmissiveGraph>
==============
*/

const ParticleModuleEmissiveGraph *__fastcall ParticleModule::FindModule<ParticleModuleEmissiveGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  return ??$FindModule@UParticleModuleEmissiveGraph@@@ParticleModule@@SAPEBUParticleModuleEmissiveGraph@@PEBUParticleModuleGroupDef@@W4ParticleModuleType@@I@Z(moduleGroupDefs, moduleType, moduleHasFlags);
}

/*
==============
ParticleModule::FindModule<ParticleModuleColorGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleColorGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleColorLerp>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleColorLerp>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleEmissionGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleEmissionGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleEmissiveGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleEmissiveGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleForce>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleForce>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleInitSpawn>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleInitSpawn>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleIntensityGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleIntensityGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModulePositionGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModulePositionGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleShaderGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleShaderGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleSizeGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleSizeGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleSizeLerp>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleSizeLerp>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleTemperatureGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleTemperatureGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleVectorFieldGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleVectorFieldGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::FindModule<ParticleModuleVelocityGraph>
==============
*/
const ParticleModuleDef *ParticleModule::FindModule<ParticleModuleVelocityGraph>(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleDef *result; 

  result = ParticleModule::FindModuleDef(moduleGroupDefs, moduleType, moduleHasFlags);
  if ( result )
    return (const ParticleModuleDef *)((char *)result + 16);
  return result;
}

/*
==============
ParticleModule::ConvertFromModuleDef
==============
*/
ParticleModuleTypeDef *ParticleModule::ConvertFromModuleDef(const ParticleModuleDef *pModuleDef)
{
  if ( !pModuleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 568, ASSERT_TYPE_ASSERT, "(pModuleDef)", (const char *)&queryFormat, "pModuleDef") )
    __debugbreak();
  if ( (unsigned int)pModuleDef->moduleType <= PARTICLE_MODULE_TEST_TIME_IN_STATE )
    return &pModuleDef->moduleData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 645, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ParticleModule: Invalid particle module type") )
    __debugbreak();
  return 0i64;
}

/*
==============
ParticleModule::FindModuleDef
==============
*/
ParticleModuleDef *ParticleModule::FindModuleDef(const ParticleModuleGroupDef *moduleGroupDefs, ParticleModuleType moduleType, unsigned int moduleHasFlags)
{
  const ParticleModuleGroupDef *v5; 
  unsigned int numModules; 
  unsigned int v7; 
  ParticleModuleDef *result; 
  unsigned int m_flags; 

  v5 = moduleGroupDefs;
  if ( !moduleGroupDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 370, ASSERT_TYPE_ASSERT, "(moduleGroupDefs)", (const char *)&queryFormat, "moduleGroupDefs") )
    __debugbreak();
  if ( moduleType < PARTICLE_MODULE_TEST_BEGIN )
  {
    if ( moduleType >= PARTICLE_MODULE_UPDATE_BEGIN )
      ++v5;
  }
  else
  {
    v5 += 2;
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 381, ASSERT_TYPE_ASSERT, "(moduleGroupDef)", (const char *)&queryFormat, "moduleGroupDef") )
    __debugbreak();
  numModules = v5->numModules;
  v7 = 0;
  result = v5->moduleDefs;
  if ( !numModules )
    return 0i64;
  while ( 1 )
  {
    m_flags = result->moduleData.moduleBase.m_flags;
    if ( (m_flags & 1) == 0 && (moduleHasFlags == -1 || (m_flags & moduleHasFlags) != 0) && result->moduleType == moduleType )
      break;
    ++v7;
    ++result;
    if ( v7 >= numModules )
      return 0i64;
  }
  return result;
}

/*
==============
ParticleModule::GetBeginIndex
==============
*/
__int64 ParticleModule::GetBeginIndex(ParticleModule::ParticleModuleGroup group)
{
  __int32 v1; 

  if ( group == PARTICLE_MODULE_GROUP_INIT )
    return 0i64;
  v1 = group - 1;
  if ( !v1 )
    return 33i64;
  if ( v1 == 1 )
    return 55i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 331, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid particle module group") )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

/*
==============
ParticleModule::GetDataFlags
==============
*/
__int64 ParticleModule::GetDataFlags(const unsigned int moduleType)
{
  return (unsigned int)s_particleModuleDataFlags[moduleType];
}

/*
==============
ParticleModule::GetEndIndex
==============
*/
__int64 ParticleModule::GetEndIndex(ParticleModule::ParticleModuleGroup group)
{
  __int32 v1; 

  if ( group == PARTICLE_MODULE_GROUP_INIT )
    return 32i64;
  v1 = group - 1;
  if ( !v1 )
    return 54i64;
  if ( v1 == 1 )
    return 61i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 351, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid particle module group") )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

/*
==============
ParticleModule::GetGroupData
==============
*/
const ParticleModuleGroupData *ParticleModule::GetGroupData()
{
  return s_particleModuleGroupData;
}

/*
==============
ParticleModule::GetModuleCurveList
==============
*/
ParticleModule *ParticleModule::GetModuleCurveList(ParticleModule *this)
{
  ParticleModule *result; 

  if ( (s_particleModuleTypeFlagsData[this->m_type] & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 412, ASSERT_TYPE_ASSERT, "(HasModuleTypeFlag( PARTICLE_MODULE_FLAG_HAS_CURVES ))", (const char *)&queryFormat, "HasModuleTypeFlag( PARTICLE_MODULE_FLAG_HAS_CURVES )") )
    __debugbreak();
  switch ( this->m_type )
  {
    case PARTICLE_MODULE_INIT_BEGIN:
      result = this + 4;
      break;
    case PARTICLE_MODULE_INIT_FLARE:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_CYLINDER:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_ELLIPSOID:
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_MESH:
      result = this + 10;
      break;
    case PARTICLE_MODULE_INIT_SPAWN:
    case PARTICLE_MODULE_COLOR_GRAPH:
    case PARTICLE_MODULE_EMISSION_GRAPH:
    case PARTICLE_MODULE_EMISSIVE_GRAPH:
    case PARTICLE_MODULE_SHADER_GRAPH:
    case PARTICLE_MODULE_FORCE_DRAG_GRAPH:
    case PARTICLE_MODULE_INTENSITY_GRAPH:
    case PARTICLE_MODULE_TEMPERATURE_GRAPH:
    case PARTICLE_MODULE_PARENT_VELOCITY_GRAPH:
    case PARTICLE_MODULE_POSITION_GRAPH:
    case PARTICLE_MODULE_ROTATION_GRAPH:
    case PARTICLE_MODULE_ROTATION_GRAPH_3D:
    case PARTICLE_MODULE_SCALE_BY_DISTANCE:
    case PARTICLE_MODULE_SIZE_GRAPH:
    case PARTICLE_MODULE_VELOCITY_GRAPH:
    case PARTICLE_MODULE_VECTOR_FIELD_GRAPH:
      result = this + 2;
      break;
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_FIRST:
      result = this + 12;
      break;
    case PARTICLE_MODULE_INIT_SPAWN_SHAPE_SPHERE:
      result = this + 8;
      break;
    default:
      result = NULL;
      break;
  }
  return result;
}

/*
==============
ParticleModule::GetModuleTypeFlags
==============
*/
__int64 ParticleModule::GetModuleTypeFlags(const unsigned int moduleType)
{
  return s_particleModuleTypeFlagsData[moduleType];
}

/*
==============
ParticleModule::GetUpdateData
==============
*/
const ParticleModuleUpdateData *ParticleModule::GetUpdateData()
{
  return s_particleModuleUpdateData;
}

/*
==============
ParticleModule::GlobalModuleDebugDraw
==============
*/
bool ParticleModule::GlobalModuleDebugDraw(ParticleModule *this)
{
  return particle_debug_draw->current.enabled || particle_debug_draw_modules->current.enabled;
}

/*
==============
ParticleModule::ParseToModuleDef
==============
*/
void ParticleModule::ParseToModuleDef(ParticleSystemDef *pParticleSystemDef, ParticleEmitterDef *pParticleEmitterDef, ParticleStateDef *pParticleStateDef, ParticleModuleDef *pModuleDef, const char *pData)
{
  if ( !pParticleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 656, ASSERT_TYPE_ASSERT, "(pParticleSystemDef)", (const char *)&queryFormat, "pParticleSystemDef") )
    __debugbreak();
  if ( !pParticleEmitterDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 657, ASSERT_TYPE_ASSERT, "(pParticleEmitterDef)", (const char *)&queryFormat, "pParticleEmitterDef") )
    __debugbreak();
  if ( !pParticleStateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 658, ASSERT_TYPE_ASSERT, "(pParticleStateDef)", (const char *)&queryFormat, "pParticleStateDef") )
    __debugbreak();
  if ( !pModuleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 659, ASSERT_TYPE_ASSERT, "(pModuleDef)", (const char *)&queryFormat, "pModuleDef") )
    __debugbreak();
  if ( !pData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemodule.cpp", 660, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  s_particleModuleUpdateData[(__int64)pModuleDef->moduleType].parseFunc(pParticleSystemDef, pParticleEmitterDef, pParticleStateDef, pData, NULL, (ParticleModule *)&pModuleDef->moduleData, 0);
}

