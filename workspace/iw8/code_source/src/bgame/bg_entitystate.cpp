/*
==============
LerpEntityStateBeamScript::Reset
==============
*/

void __fastcall LerpEntityStateBeamScript::Reset(LerpEntityStateBeamScript *this)
{
  ?Reset@LerpEntityStateBeamScript@@QEAAXXZ(this);
}

/*
==============
LerpEntityStateAgentCorpse::GetImpactVector
==============
*/

void __fastcall LerpEntityStateAgentCorpse::GetImpactVector(LerpEntityStateAgentCorpse *this, vec3_t *impactVector)
{
  ?GetImpactVector@LerpEntityStateAgentCorpse@@QEBAXAEATvec3_t@@@Z(this, impactVector);
}

/*
==============
LerpEntityStateAgentCorpse::GetModelIndex
==============
*/

int __fastcall LerpEntityStateAgentCorpse::GetModelIndex(LerpEntityStateAgentCorpse *this)
{
  return ?GetModelIndex@LerpEntityStateAgentCorpse@@QEBAHXZ(this);
}

/*
==============
LerpEntityStateBeamScript::SetFXId
==============
*/

void __fastcall LerpEntityStateBeamScript::SetFXId(LerpEntityStateBeamScript *this, const int fxId)
{
  ?SetFXId@LerpEntityStateBeamScript@@QEAAXH@Z(this, fxId);
}

/*
==============
BG_EntityState_UnitTests
==============
*/

void BG_EntityState_UnitTests(void)
{
  ?BG_EntityState_UnitTests@@YAXXZ();
}

/*
==============
AgentAttachModelData::SetAttachModel
==============
*/

void __fastcall AgentAttachModelData::SetAttachModel(AgentAttachModelData *this, unsigned int modelIndex)
{
  ?SetAttachModel@AgentAttachModelData@@QEAAXI@Z(this, modelIndex);
}

/*
==============
LerpEntityStateAgentCorpse::SetModelIndex
==============
*/

void __fastcall LerpEntityStateAgentCorpse::SetModelIndex(LerpEntityStateAgentCorpse *this, int modelIndex)
{
  ?SetModelIndex@LerpEntityStateAgentCorpse@@QEAAXH@Z(this, modelIndex);
}

/*
==============
AgentAttachModelData::Clear
==============
*/

void __fastcall AgentAttachModelData::Clear(AgentAttachModelData *this)
{
  ?Clear@AgentAttachModelData@@QEAAXXZ(this);
}

/*
==============
LerpEntityStateAgentCorpse::GetImpactX
==============
*/

double __fastcall LerpEntityStateAgentCorpse::GetImpactX(LerpEntityStateAgentCorpse *this)
{
  double result; 

  *(float *)&result = ?GetImpactX@LerpEntityStateAgentCorpse@@IEBAMXZ(this);
  return result;
}

/*
==============
LerpEntityStateBeamScript::GetFXId
==============
*/

int __fastcall LerpEntityStateBeamScript::GetFXId(LerpEntityStateBeamScript *this)
{
  return ?GetFXId@LerpEntityStateBeamScript@@QEBAHXZ(this);
}

/*
==============
LerpEntityStateAgentCorpse::SetImpactVector
==============
*/

void __fastcall LerpEntityStateAgentCorpse::SetImpactVector(LerpEntityStateAgentCorpse *this, const vec3_t *impactVector)
{
  ?SetImpactVector@LerpEntityStateAgentCorpse@@QEAAXAEBTvec3_t@@@Z(this, impactVector);
}

/*
==============
AgentAttachModelData::GetAttachModel
==============
*/

unsigned int __fastcall AgentAttachModelData::GetAttachModel(AgentAttachModelData *this)
{
  return ?GetAttachModel@AgentAttachModelData@@QEBAIXZ(this);
}

/*
==============
LerpEntityStateAgentCorpse::SetHitLoc
==============
*/

void __fastcall LerpEntityStateAgentCorpse::SetHitLoc(LerpEntityStateAgentCorpse *this, int hitLoc)
{
  ?SetHitLoc@LerpEntityStateAgentCorpse@@QEAAXH@Z(this, hitLoc);
}

/*
==============
LerpEntityStateAgentCorpse::SetImpactX
==============
*/

void __fastcall LerpEntityStateAgentCorpse::SetImpactX(LerpEntityStateAgentCorpse *this, int impactX)
{
  ?SetImpactX@LerpEntityStateAgentCorpse@@IEAAXH@Z(this, impactX);
}

/*
==============
LerpEntityStateAgentCorpse::SetImpactY
==============
*/

void __fastcall LerpEntityStateAgentCorpse::SetImpactY(LerpEntityStateAgentCorpse *this, int impactY)
{
  ?SetImpactY@LerpEntityStateAgentCorpse@@IEAAXH@Z(this, impactY);
}

/*
==============
AgentAttachModelData::GetAttachTag
==============
*/

unsigned int __fastcall AgentAttachModelData::GetAttachTag(AgentAttachModelData *this)
{
  return ?GetAttachTag@AgentAttachModelData@@QEBAIXZ(this);
}

/*
==============
LerpEntityStateBeamScript::SetEntityClientTagIndex
==============
*/

void __fastcall LerpEntityStateBeamScript::SetEntityClientTagIndex(LerpEntityStateBeamScript *this, const unsigned int clientTagIndex)
{
  ?SetEntityClientTagIndex@LerpEntityStateBeamScript@@QEAAXI@Z(this, clientTagIndex);
}

/*
==============
AgentAttachModelData::SetAttachTag
==============
*/

void __fastcall AgentAttachModelData::SetAttachTag(AgentAttachModelData *this, unsigned int tagIndex)
{
  ?SetAttachTag@AgentAttachModelData@@QEAAXI@Z(this, tagIndex);
}

/*
==============
LerpEntityStateAgentCorpse::GetHitLoc
==============
*/

int __fastcall LerpEntityStateAgentCorpse::GetHitLoc(LerpEntityStateAgentCorpse *this)
{
  return ?GetHitLoc@LerpEntityStateAgentCorpse@@QEBAHXZ(this);
}

/*
==============
LerpEntityStateAgentCorpse::GetImpactY
==============
*/

double __fastcall LerpEntityStateAgentCorpse::GetImpactY(LerpEntityStateAgentCorpse *this)
{
  double result; 

  *(float *)&result = ?GetImpactY@LerpEntityStateAgentCorpse@@IEBAMXZ(this);
  return result;
}

/*
==============
LerpEntityStateBeamScript::GetEntityClientTagIndex
==============
*/

unsigned int __fastcall LerpEntityStateBeamScript::GetEntityClientTagIndex(LerpEntityStateBeamScript *this)
{
  return ?GetEntityClientTagIndex@LerpEntityStateBeamScript@@QEBAIXZ(this);
}

/*
==============
BG_EntityState_UnitTests
==============
*/

void BG_EntityState_UnitTests(void)
{
  BG_EntityState_UnitTests_AgentAttachModelData();
}

/*
==============
BG_EntityState_UnitTests_AgentAttachModelData
==============
*/
char BG_EntityState_UnitTests_AgentAttachModelData()
{
  unsigned int ModelBits; 
  unsigned int ClientAttachTagBits; 
  char v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int m_data; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  char v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  char v38; 
  unsigned int v39; 
  int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  unsigned int v48; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  AgentAttachModelData v54; 

  ModelBits = BgDynamicLimits::GetModelBits();
  ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
  v2 = ClientAttachTagBits;
  v3 = ClientAttachTagBits + ModelBits;
  if ( ClientAttachTagBits + ModelBits > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 286, ASSERT_TYPE_ASSERT, "( modelBits + tagBits ) <= ( 32 )", "%s <= %s\n\t%i, %i", "modelBits + tagBits", "32", ClientAttachTagBits + ModelBits, 32) )
    __debugbreak();
  v4 = BgDynamicLimits::GetClientAttachTagBits();
  if ( v3 != BgDynamicLimits::GetModelBits() + v4 )
  {
    v5 = BgDynamicLimits::GetClientAttachTagBits();
    LODWORD(v53) = v5 + BgDynamicLimits::GetModelBits();
    LODWORD(v52) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 287, ASSERT_TYPE_ASSERT, "( modelBits + tagBits ) == ( AgentAttachModelData::GetBitCount() )", "%s == %s\n\t%i, %i", "modelBits + tagBits", "AgentAttachModelData::GetBitCount()", v52, v53) )
      __debugbreak();
  }
  BgDynamicLimits::GetModelBits();
  v6 = BgDynamicLimits::GetModelBits();
  v7 = v6 + BgDynamicLimits::GetClientAttachTagBits();
  if ( v7 > 0x20 )
  {
    LODWORD(v53) = 32;
    LODWORD(v52) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
      __debugbreak();
  }
  v8 = (1 << ModelBits) - 1;
  v9 = 1 << BgDynamicLimits::GetModelBits();
  v10 = v9 - 1;
  if ( v8 >= v9 )
  {
    LODWORD(v51) = v9;
    LODWORD(v50) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v50, v51) )
      __debugbreak();
  }
  v54.m_data = v8 & v10;
  if ( (v8 & v10 & ((1 << BgDynamicLimits::GetModelBits()) - 1)) != v8 )
  {
    LODWORD(v53) = v8;
    LODWORD(v52) = v8 & v10 & ((1 << BgDynamicLimits::GetModelBits()) - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 296, ASSERT_TYPE_ASSERT, "( agentAttachData.GetAttachModel() ) == ( maxModelIndex )", "%s == %s\n\t%i, %i", "agentAttachData.GetAttachModel()", "maxModelIndex", v52, v53) )
      __debugbreak();
  }
  v11 = (1 << v2) - 1;
  AgentAttachModelData::SetAttachTag(&v54, v11);
  v12 = BgDynamicLimits::GetModelBits();
  v13 = BgDynamicLimits::GetClientAttachTagBits();
  v14 = 1 << v13;
  v15 = v12 + v13;
  v16 = v14 - 1;
  if ( v15 > 0x20 )
  {
    LODWORD(v53) = 32;
    LODWORD(v52) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
      __debugbreak();
  }
  m_data = v54.m_data;
  if ( (v54.m_data & (v16 << v12)) >> v12 != v11 )
  {
    v18 = BgDynamicLimits::GetModelBits();
    v19 = BgDynamicLimits::GetClientAttachTagBits();
    v20 = (1 << v19) - 1;
    if ( v19 + v18 > 0x20 )
    {
      LODWORD(v53) = 32;
      LODWORD(v52) = v19 + v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
        __debugbreak();
    }
    LODWORD(v53) = v11;
    LODWORD(v52) = (m_data & (v20 << v18)) >> v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 301, ASSERT_TYPE_ASSERT, "( agentAttachData.GetAttachTag() ) == ( maxAttachTagIndex )", "%s == %s\n\t%i, %i", "agentAttachData.GetAttachTag()", "maxAttachTagIndex", v52, v53) )
      __debugbreak();
  }
  if ( (m_data & ((1 << BgDynamicLimits::GetModelBits()) - 1)) != v8 )
  {
    LODWORD(v53) = v8;
    LODWORD(v52) = m_data & ((1 << BgDynamicLimits::GetModelBits()) - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 304, ASSERT_TYPE_ASSERT, "( agentAttachData.GetAttachModel() ) == ( maxModelIndex )", "%s == %s\n\t%i, %i", "agentAttachData.GetAttachModel()", "maxModelIndex", v52, v53) )
      __debugbreak();
  }
  v21 = I_irand(0, v8);
  v22 = 1 << BgDynamicLimits::GetModelBits();
  v23 = v22 - 1;
  if ( v21 >= v22 )
  {
    LODWORD(v51) = v22;
    LODWORD(v50) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v50, v51) )
      __debugbreak();
  }
  v24 = v21 & v23 | m_data & ~v23;
  v54.m_data = v24;
  if ( (v24 & ((1 << BgDynamicLimits::GetModelBits()) - 1)) != v21 )
  {
    LODWORD(v53) = v21;
    LODWORD(v52) = v24 & ((1 << BgDynamicLimits::GetModelBits()) - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 309, ASSERT_TYPE_ASSERT, "( agentAttachData.GetAttachModel() ) == ( randModelIndex )", "%s == %s\n\t%i, %i", "agentAttachData.GetAttachModel()", "randModelIndex", v52, v53) )
      __debugbreak();
  }
  v25 = BgDynamicLimits::GetModelBits();
  v26 = BgDynamicLimits::GetClientAttachTagBits();
  v27 = v26;
  v28 = v25 + v26;
  v29 = (1 << v27) - 1;
  if ( v28 > 0x20 )
  {
    LODWORD(v53) = 32;
    LODWORD(v52) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
      __debugbreak();
  }
  if ( (v24 & (unsigned int)(v29 << v25)) >> v25 != v11 )
  {
    v30 = BgDynamicLimits::GetModelBits();
    v31 = BgDynamicLimits::GetClientAttachTagBits();
    v32 = 1 << v31;
    v33 = v30 + v31;
    v34 = v32 - 1;
    if ( v33 > 0x20 )
    {
      LODWORD(v53) = 32;
      LODWORD(v52) = v33;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
        __debugbreak();
    }
    LODWORD(v53) = v11;
    LODWORD(v52) = (v24 & (unsigned int)(v34 << v30)) >> v30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 312, ASSERT_TYPE_ASSERT, "( agentAttachData.GetAttachTag() ) == ( maxAttachTagIndex )", "%s == %s\n\t%i, %i", "agentAttachData.GetAttachTag()", "maxAttachTagIndex", v52, v53) )
      __debugbreak();
  }
  v35 = I_irand(0, v11);
  AgentAttachModelData::SetAttachTag(&v54, v35);
  v36 = BgDynamicLimits::GetModelBits();
  v37 = BgDynamicLimits::GetClientAttachTagBits();
  v38 = v37;
  v39 = v36 + v37;
  v40 = (1 << v38) - 1;
  if ( v39 > 0x20 )
  {
    LODWORD(v53) = 32;
    LODWORD(v52) = v39;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
      __debugbreak();
  }
  v41 = v54.m_data;
  if ( (v54.m_data & (v40 << v36)) >> v36 != v35 )
  {
    v42 = BgDynamicLimits::GetModelBits();
    v43 = BgDynamicLimits::GetClientAttachTagBits();
    v44 = 1 << v43;
    v45 = v42 + v43;
    v46 = v44 - 1;
    if ( v45 > 0x20 )
    {
      LODWORD(v53) = 32;
      LODWORD(v52) = v45;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53) )
        __debugbreak();
    }
    LODWORD(v53) = v35;
    LODWORD(v52) = (v41 & (v46 << v42)) >> v42;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 317, ASSERT_TYPE_ASSERT, "( agentAttachData.GetAttachTag() ) == ( randAttachTagIndex )", "%s == %s\n\t%i, %i", "agentAttachData.GetAttachTag()", "randAttachTagIndex", v52, v53) )
      __debugbreak();
  }
  BgDynamicLimits::GetModelBits();
  v47 = BgDynamicLimits::GetModelBits();
  v48 = v47 + BgDynamicLimits::GetClientAttachTagBits();
  if ( v48 > 0x20 )
  {
    LODWORD(v53) = 32;
    LODWORD(v52) = v48;
    LOBYTE(v48) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v52, v53);
    if ( (_BYTE)v48 )
      __debugbreak();
  }
  return v48;
}

/*
==============
AgentAttachModelData::Clear
==============
*/
void AgentAttachModelData::Clear(AgentAttachModelData *this)
{
  this->m_data = 0;
}

/*
==============
AgentAttachModelData::GetAttachModel
==============
*/
__int64 AgentAttachModelData::GetAttachModel(AgentAttachModelData *this)
{
  return this->m_data & ((1 << BgDynamicLimits::GetModelBits()) - 1);
}

/*
==============
AgentAttachModelData::GetAttachTag
==============
*/
__int64 AgentAttachModelData::GetAttachTag(AgentAttachModelData *this)
{
  unsigned int ModelBits; 
  unsigned int ClientAttachTagBits; 
  int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v8; 
  int v9; 

  ModelBits = BgDynamicLimits::GetModelBits();
  ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
  v4 = 1 << ClientAttachTagBits;
  v5 = ModelBits + ClientAttachTagBits;
  v6 = v4 - 1;
  if ( v5 > 0x20 )
  {
    v9 = 32;
    v8 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 121, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v8, v9) )
      __debugbreak();
  }
  return (this->m_data & (v6 << ModelBits)) >> ModelBits;
}

/*
==============
LerpEntityStateBeamScript::GetEntityClientTagIndex
==============
*/
__int64 LerpEntityStateBeamScript::GetEntityClientTagIndex(LerpEntityStateBeamScript *this)
{
  char EffectBits; 

  EffectBits = BgDynamicLimits::GetEffectBits();
  return (this->m_data & (((1 << BgDynamicLimits::GetClientAttachTagBits()) - 1) << EffectBits)) >> EffectBits;
}

/*
==============
LerpEntityStateBeamScript::GetFXId
==============
*/
__int64 LerpEntityStateBeamScript::GetFXId(LerpEntityStateBeamScript *this)
{
  return ((1 << BgDynamicLimits::GetEffectBits()) - 1) & this->m_data;
}

/*
==============
LerpEntityStateAgentCorpse::GetHitLoc
==============
*/
__int64 LerpEntityStateAgentCorpse::GetHitLoc(LerpEntityStateAgentCorpse *this)
{
  return (this->corpseInfo >> 11) & 0x1F;
}

/*
==============
LerpEntityStateAgentCorpse::GetImpactVector
==============
*/
void LerpEntityStateAgentCorpse::GetImpactVector(LerpEntityStateAgentCorpse *this, vec3_t *impactVector)
{
  _RDI = impactVector;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_scrAgent_ragdollMaxImpulse, "scrAgent_ragdollMaxImpulse");
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_scrAgent_ragdollImpulseZ, "scrAgent_ragdollImpulseZ");
  __asm
  {
    vmovaps xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, cs:__real@3c010204
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3c010204
    vmulss  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  dword ptr [rdi+8], xmm3
  }
}

/*
==============
LerpEntityStateAgentCorpse::GetImpactX
==============
*/
float LerpEntityStateAgentCorpse::GetImpactX(LerpEntityStateAgentCorpse *this)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  return *(float *)&_XMM0;
}

/*
==============
LerpEntityStateAgentCorpse::GetImpactY
==============
*/
float LerpEntityStateAgentCorpse::GetImpactY(LerpEntityStateAgentCorpse *this)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  return *(float *)&_XMM0;
}

/*
==============
LerpEntityStateAgentCorpse::GetModelIndex
==============
*/
__int64 LerpEntityStateAgentCorpse::GetModelIndex(LerpEntityStateAgentCorpse *this)
{
  return this->corpseInfo & 0x7FF;
}

/*
==============
LerpEntityStateBeamScript::Reset
==============
*/
void LerpEntityStateBeamScript::Reset(LerpEntityStateBeamScript *this)
{
  unsigned int EffectBits; 
  unsigned int v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 

  EffectBits = BgDynamicLimits::GetEffectBits();
  if ( BgDynamicLimits::GetClientAttachTagBits() + EffectBits > 0x20 )
  {
    v3 = BgDynamicLimits::GetEffectBits();
    v8 = v3 + BgDynamicLimits::GetClientAttachTagBits();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 24, ASSERT_TYPE_ASSERT, "( GetBitCount() ) <= ( 32 )", "%s <= %s\n\t%i, %i", "GetBitCount()", "32", v8, 32) )
      __debugbreak();
  }
  v4 = 1 << BgDynamicLimits::GetEffectBits();
  if ( !v4 )
  {
    LODWORD(v7) = 0;
    LODWORD(v6) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  this->m_data &= -v4;
  v5 = 1 << BgDynamicLimits::GetClientAttachTagBits();
  if ( !v5 )
  {
    LODWORD(v7) = 0;
    LODWORD(v6) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  this->m_data &= ~((v5 - 1) << BgDynamicLimits::GetEffectBits());
}

/*
==============
AgentAttachModelData::SetAttachModel
==============
*/
void AgentAttachModelData::SetAttachModel(AgentAttachModelData *this, unsigned int modelIndex)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v4 = 1 << BgDynamicLimits::GetModelBits();
  v5 = v4 - 1;
  if ( modelIndex >= v4 )
  {
    v7 = v4;
    v6 = modelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  this->m_data = modelIndex & v5 | this->m_data & ~v5;
}

/*
==============
AgentAttachModelData::SetAttachTag
==============
*/
void AgentAttachModelData::SetAttachTag(AgentAttachModelData *this, unsigned int tagIndex)
{
  unsigned int ClientAttachTagBits; 
  unsigned int ModelBits; 
  char v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 

  ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
  ModelBits = BgDynamicLimits::GetModelBits();
  v6 = ModelBits;
  v7 = ClientAttachTagBits + ModelBits;
  if ( v7 > 0x20 )
  {
    v11 = 32;
    v10 = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 106, ASSERT_TYPE_ASSERT, "( tagBits + modelBits ) <= ( 32u )", "%s <= %s\n\t%i, %i", "tagBits + modelBits", "32u", v10, v11) )
      __debugbreak();
  }
  if ( tagIndex >= 1 << ClientAttachTagBits )
  {
    LODWORD(v9) = 1 << ClientAttachTagBits;
    LODWORD(v8) = tagIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  this->m_data = ((tagIndex & ((1 << ClientAttachTagBits) - 1)) << v6) | this->m_data & ~(((1 << ClientAttachTagBits) - 1) << v6);
}

/*
==============
LerpEntityStateBeamScript::SetEntityClientTagIndex
==============
*/
void LerpEntityStateBeamScript::SetEntityClientTagIndex(LerpEntityStateBeamScript *this, const unsigned int clientTagIndex)
{
  char ClientAttachTagBits; 
  int v5; 
  char EffectBits; 
  unsigned int v7; 
  int v8; 

  ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
  v5 = 1 << ClientAttachTagBits;
  if ( clientTagIndex >= 1 << ClientAttachTagBits )
  {
    v8 = 1 << ClientAttachTagBits;
    v7 = clientTagIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  EffectBits = BgDynamicLimits::GetEffectBits();
  this->m_data = ((clientTagIndex & (v5 - 1)) << EffectBits) | this->m_data & ~((v5 - 1) << EffectBits);
}

/*
==============
LerpEntityStateBeamScript::SetFXId
==============
*/
void LerpEntityStateBeamScript::SetFXId(LerpEntityStateBeamScript *this, const int fxId)
{
  char EffectBits; 
  int v5; 
  int v6; 
  int v7; 

  EffectBits = BgDynamicLimits::GetEffectBits();
  v5 = 1 << EffectBits;
  if ( fxId >= (unsigned int)(1 << EffectBits) )
  {
    v7 = 1 << EffectBits;
    v6 = fxId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 1u << bits ) )", "index doesn't index ( 1u << bits )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  this->m_data = fxId & (v5 - 1) | this->m_data & ~(v5 - 1);
}

/*
==============
LerpEntityStateAgentCorpse::SetHitLoc
==============
*/
void LerpEntityStateAgentCorpse::SetHitLoc(LerpEntityStateAgentCorpse *this, int hitLoc)
{
  int v4; 

  if ( (hitLoc & 0x1F) != hitLoc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 170, ASSERT_TYPE_ASSERT, "(( hitLoc & LERP_ENTITY_STATE_AGENT_CORPSE_HITLOC_BITMASK ) == hitLoc)", (const char *)&queryFormat, "( hitLoc & LERP_ENTITY_STATE_AGENT_CORPSE_HITLOC_BITMASK ) == hitLoc") )
    __debugbreak();
  v4 = this->corpseInfo | (hitLoc << 11);
  this->corpseInfo = v4;
  if ( hitLoc != ((v4 >> 11) & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 172, ASSERT_TYPE_ASSERT, "(hitLoc == GetHitLoc())", (const char *)&queryFormat, "hitLoc == GetHitLoc()") )
    __debugbreak();
}

/*
==============
LerpEntityStateAgentCorpse::SetImpactVector
==============
*/
void LerpEntityStateAgentCorpse::SetImpactVector(LerpEntityStateAgentCorpse *this, const vec3_t *impactVector)
{
  char v7; 
  char v8; 
  int v27; 
  int v37; 

  _RBX = impactVector;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_scrAgent_ragdollMaxImpulse, "scrAgent_ragdollMaxImpulse");
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm0, xmm4
    vmovaps xmm2, xmm0
  }
  if ( !v8 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx]
      vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+58h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+4]
      vmovaps [rsp+58h+var_28], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm1, xmm3, xmm7
      vcomiss xmm1, xmm0
    }
    if ( !(v7 | v8) )
    {
      __asm { vcomiss xmm3, xmm4 }
      if ( v7 | v8 )
        __asm { vxorps  xmm3, xmm2, xmm5 }
      else
        __asm { vmovaps xmm3, xmm0 }
    }
    __asm
    {
      vandps  xmm0, xmm6, xmm7
      vcomiss xmm0, xmm2
    }
    if ( !(v7 | v8) )
    {
      __asm { vcomiss xmm6, xmm4 }
      if ( v7 | v8 )
        __asm { vxorps  xmm6, xmm2, xmm5 }
      else
        __asm { vmovaps xmm6, xmm2 }
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm7, xmm0, xmm2
      vmulss  xmm1, xmm7, xmm3
      vmulss  xmm0, xmm1, cs:__real@42fe0000
      vcvttss2si r9d, xmm0
    }
    v27 = this->corpseInfo | (_ER9 >> 15) & 0x800000 | ((abs32(_ER9) & 0x7F) << 16);
    this->corpseInfo = v27;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, r9d
      vucomiss xmm1, xmm0
    }
    if ( (v27 & 0x800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 237, ASSERT_TYPE_ASSERT, "(GetImpactX() == impactX)", (const char *)&queryFormat, "GetImpactX() == impactX") )
      __debugbreak();
    __asm
    {
      vmulss  xmm0, xmm7, xmm6
      vmulss  xmm1, xmm0, cs:__real@42fe0000
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm6, [rsp+58h+var_18]
      vcvttss2si r9d, xmm1
    }
    v37 = this->corpseInfo | (_ER9 >> 7) & 0x80000000 | ((abs32(_ER9) & 0x7F) << 24);
    this->corpseInfo = v37;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, r9d
      vucomiss xmm1, xmm0
    }
    if ( (v37 & 0x80000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 262, ASSERT_TYPE_ASSERT, "(GetImpactY() == impactY)", (const char *)&queryFormat, "GetImpactY() == impactY") )
      __debugbreak();
  }
}

/*
==============
LerpEntityStateAgentCorpse::SetImpactX
==============
*/
void LerpEntityStateAgentCorpse::SetImpactX(LerpEntityStateAgentCorpse *this, int impactX)
{
  int v4; 

  v4 = this->corpseInfo | (impactX >> 15) & 0x800000 | ((abs32(impactX) & 0x7F) << 16);
  this->corpseInfo = v4;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, r10d
    vucomiss xmm1, xmm0
  }
  if ( (v4 & 0x800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 237, ASSERT_TYPE_ASSERT, "(GetImpactX() == impactX)", (const char *)&queryFormat, "GetImpactX() == impactX") )
    __debugbreak();
}

/*
==============
LerpEntityStateAgentCorpse::SetImpactY
==============
*/
void LerpEntityStateAgentCorpse::SetImpactY(LerpEntityStateAgentCorpse *this, int impactY)
{
  int v4; 

  v4 = this->corpseInfo | (impactY >> 7) & 0x80000000 | ((abs32(impactY) & 0x7F) << 24);
  this->corpseInfo = v4;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, r10d
    vucomiss xmm1, xmm0
  }
  if ( (v4 & 0x80000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 262, ASSERT_TYPE_ASSERT, "(GetImpactY() == impactY)", (const char *)&queryFormat, "GetImpactY() == impactY") )
    __debugbreak();
}

/*
==============
LerpEntityStateAgentCorpse::SetModelIndex
==============
*/
void LerpEntityStateAgentCorpse::SetModelIndex(LerpEntityStateAgentCorpse *this, int modelIndex)
{
  this->corpseInfo ^= ((unsigned __int16)modelIndex ^ (unsigned __int16)this->corpseInfo) & 0x7FF;
  if ( (this->corpseInfo & 0x7FF) != modelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.cpp", 163, ASSERT_TYPE_ASSERT, "(GetModelIndex() == modelIndex)", (const char *)&queryFormat, "GetModelIndex() == modelIndex") )
    __debugbreak();
}

