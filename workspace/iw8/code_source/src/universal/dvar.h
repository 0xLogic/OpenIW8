/*
==============
Dvar_GetVec4_Internal_DebugName
==============
*/

void __fastcall Dvar_GetVec4_Internal_DebugName(const dvar_t *dvar, const char *dvarName, vec4_t *result)
{
  ?Dvar_GetVec4_Internal_DebugName@@YAXPEBUdvar_t@@PEBDAEATvec4_t@@@Z(dvar, dvarName, result);
}

/*
==============
Dvar_GetVec3_Internal
==============
*/

void __fastcall Dvar_GetVec3_Internal(const dvar_t *dvar, vec3_t *result)
{
  ?Dvar_GetVec3_Internal@@YAXPEBUdvar_t@@AEATvec3_t@@@Z(dvar, result);
}

/*
==============
Dvar_GetVec3_Internal_DebugName
==============
*/

void __fastcall Dvar_GetVec3_Internal_DebugName(const dvar_t *dvar, const char *dvarName, vec3_t *result)
{
  ?Dvar_GetVec3_Internal_DebugName@@YAXPEBUdvar_t@@PEBDAEATvec3_t@@@Z(dvar, dvarName, result);
}

/*
==============
Dvar_GetInt_Internal_DebugName
==============
*/

int __fastcall Dvar_GetInt_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  return ?Dvar_GetInt_Internal_DebugName@@YAHPEBUdvar_t@@PEBD@Z(dvar, dvarName);
}

/*
==============
Dvar_GetString_Internal_DebugName
==============
*/

const char *__fastcall Dvar_GetString_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  return ?Dvar_GetString_Internal_DebugName@@YAPEBDPEBUdvar_t@@PEBD@Z(dvar, dvarName);
}

/*
==============
Dvar_GetBool_Internal_DebugName
==============
*/

bool __fastcall Dvar_GetBool_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  return ?Dvar_GetBool_Internal_DebugName@@YA_NPEBUdvar_t@@PEBD@Z(dvar, dvarName);
}

/*
==============
Dvar_GetInt_Internal
==============
*/

int __fastcall Dvar_GetInt_Internal(const dvar_t *dvar)
{
  return ?Dvar_GetInt_Internal@@YAHPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_GetFloat_Internal_DebugName
==============
*/

double __fastcall Dvar_GetFloat_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  double result; 

  *(float *)&result = ?Dvar_GetFloat_Internal_DebugName@@YAMPEBUdvar_t@@PEBD@Z(dvar, dvarName);
  return result;
}

/*
==============
Dvar_GetFloat_Internal
==============
*/

double __fastcall Dvar_GetFloat_Internal(const dvar_t *dvar)
{
  double result; 

  *(float *)&result = ?Dvar_GetFloat_Internal@@YAMPEBUdvar_t@@@Z(dvar);
  return result;
}

/*
==============
Dvar_CheckFrontendServerThread
==============
*/

void __fastcall Dvar_CheckFrontendServerThread(const dvar_t *dvar)
{
  ?Dvar_CheckFrontendServerThread@@YAXPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_GetVec4_Internal
==============
*/

void __fastcall Dvar_GetVec4_Internal(const dvar_t *dvar, vec4_t *result)
{
  ?Dvar_GetVec4_Internal@@YAXPEBUdvar_t@@AEATvec4_t@@@Z(dvar, result);
}

/*
==============
Dvar_GetBool_Internal
==============
*/

bool __fastcall Dvar_GetBool_Internal(const dvar_t *dvar)
{
  return ?Dvar_GetBool_Internal@@YA_NPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_CheckFrontendServerThread
==============
*/
void Dvar_CheckFrontendServerThread(const dvar_t *dvar)
{
  unsigned int flags; 

  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = dvar->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", dvar->name) )
      __debugbreak();
  }
}

/*
==============
Dvar_GetFloat_Internal_DebugName
==============
*/
float Dvar_GetFloat_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", dvarName) )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
Dvar_GetInt_Internal_DebugName
==============
*/
__int64 Dvar_GetInt_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  unsigned int flags; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", dvarName) )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = dvar->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", dvar->name) )
      __debugbreak();
  }
  return dvar->current.unsignedInt;
}

/*
==============
Dvar_GetBool_Internal_DebugName
==============
*/
__int64 Dvar_GetBool_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", dvarName) )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  return dvar->current.color[0];
}

/*
==============
Dvar_GetString_Internal_DebugName
==============
*/
const char *Dvar_GetString_Internal_DebugName(const dvar_t *dvar, const char *dvarName)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", dvarName) )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  return dvar->current.string;
}

/*
==============
Dvar_GetFloat_Internal
==============
*/
float Dvar_GetFloat_Internal(const dvar_t *dvar)
{
  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
Dvar_GetInt_Internal
==============
*/
__int64 Dvar_GetInt_Internal(const dvar_t *dvar)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  return dvar->current.unsignedInt;
}

/*
==============
Dvar_GetBool_Internal
==============
*/
__int64 Dvar_GetBool_Internal(const dvar_t *dvar)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  return dvar->current.color[0];
}

/*
==============
Dvar_GetVec3_Internal_DebugName
==============
*/
void Dvar_GetVec3_Internal_DebugName(const dvar_t *dvar, const char *dvarName, vec3_t *result)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", dvarName) )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  LODWORD(result->v[0]) = dvar->current.integer;
  result->v[1] = dvar->current.vector.v[1];
  result->v[2] = dvar->current.vector.v[2];
}

/*
==============
Dvar_GetVec3_Internal
==============
*/
void Dvar_GetVec3_Internal(const dvar_t *dvar, vec3_t *result)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  LODWORD(result->v[0]) = dvar->current.integer;
  result->v[1] = dvar->current.vector.v[1];
  result->v[2] = dvar->current.vector.v[2];
}

/*
==============
Dvar_GetVec4_Internal
==============
*/
void Dvar_GetVec4_Internal(const dvar_t *dvar, vec4_t *result)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  LODWORD(result->v[0]) = dvar->current.integer;
  result->v[1] = dvar->current.vector.v[1];
  result->v[2] = dvar->current.vector.v[2];
  result->v[3] = dvar->current.vector.v[3];
}

/*
==============
Dvar_GetVec4_Internal_DebugName
==============
*/
void Dvar_GetVec4_Internal_DebugName(const dvar_t *dvar, const char *dvarName, vec4_t *result)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", dvarName) )
    __debugbreak();
  Dvar_CheckFrontendServerThread(dvar);
  LODWORD(result->v[0]) = dvar->current.integer;
  result->v[1] = dvar->current.vector.v[1];
  result->v[2] = dvar->current.vector.v[2];
  result->v[3] = dvar->current.vector.v[3];
}

