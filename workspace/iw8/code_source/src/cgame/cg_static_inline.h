/*
==============
CgStatic::GetCharacterInfo
==============
*/

const characterInfo_t *__fastcall CgStatic::GetCharacterInfo(CgStatic *this, const int characterIndex)
{
  return ?GetCharacterInfo@CgStatic@@QEBAPEBUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
CgStatic::GetCharacterInfo
==============
*/

characterInfo_t *__fastcall CgStatic::GetCharacterInfo(CgStatic *this, const int characterIndex)
{
  return ?GetCharacterInfo@CgStatic@@QEAAPEAUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
CgStatic::GetOrigin
==============
*/

void __fastcall CgStatic::GetOrigin(CgStatic *this, int entIndex, vec3_t *outOrigin)
{
  ?GetOrigin@CgStatic@@QEBAXHAEATvec3_t@@@Z(this, entIndex, outOrigin);
}

/*
==============
CgStatic::GetCharacterInfo
==============
*/
const characterInfo_t *CgStatic::GetCharacterInfo(CgStatic *this, const int characterIndex)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 

  v2 = characterIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->IsMP(LocalClientGlobals) )
    return CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v2);
  if ( (unsigned int)v2 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v5, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
      __debugbreak();
  }
  return (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v2);
}

/*
==============
CgStatic::GetCharacterInfo
==============
*/
characterInfo_t *CgStatic::GetCharacterInfo(CgStatic *this, const int characterIndex)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return CG_GetCharacterInfo(LocalClientGlobals, characterIndex);
}

/*
==============
CgStatic::GetOrigin
==============
*/
void CgStatic::GetOrigin(CgStatic *this, int entIndex, vec3_t *outOrigin)
{
  __int64 m_localClientNum; 
  __int64 v5; 
  CgEntitySystem *v6; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v22; 
  __int64 v23; 

  _RBP = outOrigin;
  m_localClientNum = this->m_localClientNum;
  v5 = entIndex;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v23) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v22) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
  {
    LODWORD(v23) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v23) )
      __debugbreak();
  }
  v6 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v23) = 2048;
    LODWORD(v22) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  p_pose = &v6->m_entities[v5].pose;
  if ( !p_pose )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 17, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
  }
  if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
  FunctionPointer_origin(&p_pose->origin.origin.origin, _RBP);
  if ( p_pose->isPosePrecise )
  {
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, dword ptr [rbp+0]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovd   xmm0, dword ptr [rbp+4]
      vcvtdq2pd xmm0, xmm0
      vmovss  dword ptr [rbp+0], xmm1
      vmulsd  xmm1, xmm0, xmm3
      vmovd   xmm0, dword ptr [rbp+8]
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+4], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rbp+8], xmm2
    }
  }
}

