/*
==============
RefdefView_GetOrg
==============
*/

void __fastcall RefdefView_GetOrg(const RefdefView *refdefView, vec3_t *outOrg)
{
  ?RefdefView_GetOrg@@YAXPEBURefdefView@@AEATvec3_t@@@Z(refdefView, outOrg);
}

/*
==============
FX_GetMarkContext_ModelIndex
==============
*/

unsigned __int16 __fastcall FX_GetMarkContext_ModelIndex(const GfxMarkContext *context)
{
  return ?FX_GetMarkContext_ModelIndex@@YAGPEBUGfxMarkContext@@@Z(context);
}

/*
==============
FX_GetMarkContext_ModelType
==============
*/

int __fastcall FX_GetMarkContext_ModelType(const GfxMarkContext *context)
{
  return ?FX_GetMarkContext_ModelType@@YAHPEBUGfxMarkContext@@@Z(context);
}

/*
==============
FX_GetMarkContext_DObjModelIndex
==============
*/

int __fastcall FX_GetMarkContext_DObjModelIndex(const GfxMarkContext *context)
{
  return ?FX_GetMarkContext_DObjModelIndex@@YAHPEBUGfxMarkContext@@@Z(context);
}

/*
==============
FX_GetMarkContext_EntNum
==============
*/

unsigned __int16 __fastcall FX_GetMarkContext_EntNum(const GfxMarkContext *context)
{
  return ?FX_GetMarkContext_EntNum@@YAGPEBUGfxMarkContext@@@Z(context);
}

/*
==============
FX_GetMarkContext_DObjIsViewmodel
==============
*/

bool __fastcall FX_GetMarkContext_DObjIsViewmodel(const GfxMarkContext *context)
{
  return ?FX_GetMarkContext_DObjIsViewmodel@@YA_NPEBUGfxMarkContext@@@Z(context);
}

/*
==============
Copy_RefdefView
==============
*/

void __fastcall Copy_RefdefView(RefdefView *out, const RefdefView *in)
{
  ?Copy_RefdefView@@YAXAEAURefdefView@@AEBU1@@Z(out, in);
}

/*
==============
FX_GetMarkContext_DynEntModel
==============
*/

unsigned int __fastcall FX_GetMarkContext_DynEntModel(const GfxMarkContext *context)
{
  return ?FX_GetMarkContext_DynEntModel@@YAIPEBUGfxMarkContext@@@Z(context);
}

/*
==============
RefdefView_SetOrg
==============
*/

void __fastcall RefdefView_SetOrg(RefdefView *refdefView, const vec3_t *inOrg)
{
  ?RefdefView_SetOrg@@YAXPEAURefdefView@@AEBTvec3_t@@@Z(refdefView, inOrg);
}

/*
==============
FX_SetMarkContext_DObjModelIndex
==============
*/

void __fastcall FX_SetMarkContext_DObjModelIndex(GfxMarkContext *context, int dobjModelIndex)
{
  ?FX_SetMarkContext_DObjModelIndex@@YAXPEAUGfxMarkContext@@H@Z(context, dobjModelIndex);
}

/*
==============
RefdefView_GetOrg
==============
*/
void RefdefView_GetOrg(const RefdefView *refdefView, vec3_t *outOrg)
{
  unsigned int refdefViewOrg_aab; 
  RefdefViewOrg *p_org; 

  if ( !refdefView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = refdefView->refdefViewOrg_aab;
  p_org = &refdefView->org;
  if ( !p_org && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(outOrg->v[0]) = LODWORD(p_org->org.v[0]) ^ ((refdefViewOrg_aab ^ (unsigned int)p_org) * ((refdefViewOrg_aab ^ (unsigned int)p_org) + 2));
  LODWORD(outOrg->v[1]) = LODWORD(p_org->org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)p_org + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)p_org + 4)) + 2));
  LODWORD(outOrg->v[2]) = LODWORD(p_org->org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)p_org + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)p_org + 8)) + 2));
}

/*
==============
RefdefView_SetOrg
==============
*/
void RefdefView_SetOrg(RefdefView *refdefView, const vec3_t *inOrg)
{
  unsigned int refdefViewOrg_set_aab; 

  if ( !refdefView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1304, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_set_aab = refdefView->refdefViewOrg_set_aab;
  if ( refdefView == (RefdefView *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1262, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  refdefView->refdefViewOrg_aab += refdefViewOrg_set_aab;
  LODWORD(refdefView->org.org.v[0]) = LODWORD(inOrg->v[0]) ^ ((((_DWORD)refdefView + 8) ^ refdefView->refdefViewOrg_aab) * ((((_DWORD)refdefView + 8) ^ refdefView->refdefViewOrg_aab) + 2));
  LODWORD(refdefView->org.org.v[1]) = LODWORD(inOrg->v[1]) ^ ((((_DWORD)refdefView + 12) ^ refdefView->refdefViewOrg_aab) * ((((_DWORD)refdefView + 12) ^ refdefView->refdefViewOrg_aab) + 2));
  LODWORD(refdefView->org.org.v[2]) = LODWORD(inOrg->v[2]) ^ ((((_DWORD)refdefView + 16) ^ refdefView->refdefViewOrg_aab) * ((((_DWORD)refdefView + 16) ^ refdefView->refdefViewOrg_aab) + 2));
}

/*
==============
Copy_RefdefView
==============
*/
void Copy_RefdefView(RefdefView *out, const RefdefView *in)
{
  unsigned int refdefViewOrg_aab; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int refdefViewOrg_set_aab; 
  unsigned int v13; 

  _RBX = in;
  _RDI = out;
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = _RBX->refdefViewOrg_aab;
  if ( _RBX == (const RefdefView *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbx] }
  v6 = LODWORD(_RBX->org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 8)) + 2));
  v7 = LODWORD(_RBX->org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 12)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 12)) + 2));
  v8 = LODWORD(_RBX->org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 16)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 16)) + 2));
  __asm
  {
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovsd  xmm1, qword ptr [rbx+60h]
    vmovsd  qword ptr [rdi+60h], xmm1
  }
  refdefViewOrg_set_aab = _RBX->refdefViewOrg_set_aab;
  _RDI->refdefViewOrg_set_aab = refdefViewOrg_set_aab;
  v13 = refdefViewOrg_set_aab;
  if ( _RDI == (RefdefView *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1262, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  _RDI->refdefViewOrg_aab += v13;
  LODWORD(_RDI->org.org.v[0]) = v6 ^ ((((_DWORD)_RDI + 8) ^ _RDI->refdefViewOrg_aab) * ((((_DWORD)_RDI + 8) ^ _RDI->refdefViewOrg_aab) + 2));
  LODWORD(_RDI->org.org.v[1]) = v7 ^ ((((_DWORD)_RDI + 12) ^ _RDI->refdefViewOrg_aab) * ((((_DWORD)_RDI + 12) ^ _RDI->refdefViewOrg_aab) + 2));
  LODWORD(_RDI->org.org.v[2]) = v8 ^ ((((_DWORD)_RDI + 16) ^ _RDI->refdefViewOrg_aab) * ((((_DWORD)_RDI + 16) ^ _RDI->refdefViewOrg_aab) + 2));
}

/*
==============
FX_GetMarkContext_DObjIsViewmodel
==============
*/
__int64 FX_GetMarkContext_DObjIsViewmodel(const GfxMarkContext *context)
{
  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2011, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  if ( context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
    __debugbreak();
  return context->surfIndex >> 7;
}

/*
==============
FX_GetMarkContext_DObjModelIndex
==============
*/
__int64 FX_GetMarkContext_DObjModelIndex(const GfxMarkContext *context)
{
  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  if ( context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
    __debugbreak();
  return context->surfIndex & 0x1F;
}

/*
==============
FX_GetMarkContext_DynEntModel
==============
*/
__int64 FX_GetMarkContext_DynEntModel(const GfxMarkContext *context)
{
  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2184, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  if ( context->modelType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2185, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_DYN_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_DYN_ENT_MODEL") )
    __debugbreak();
  return context->typeSpecificIndex.dynEntId;
}

/*
==============
FX_GetMarkContext_EntNum
==============
*/
__int64 FX_GetMarkContext_EntNum(const GfxMarkContext *context)
{
  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2141, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  if ( (unsigned __int8)(context->modelType - 3) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2142, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH") )
    __debugbreak();
  return LOWORD(context->typeSpecificIndex.dynEntId);
}

/*
==============
FX_GetMarkContext_ModelIndex
==============
*/
__int64 FX_GetMarkContext_ModelIndex(const GfxMarkContext *context)
{
  if ( context )
    return LOWORD(context->typeSpecificIndex.dynEntId);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2128, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  return MEMORY[4];
}

/*
==============
FX_GetMarkContext_ModelType
==============
*/
__int64 FX_GetMarkContext_ModelType(const GfxMarkContext *context)
{
  if ( context )
    return context->modelType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
FX_SetMarkContext_DObjModelIndex
==============
*/
void FX_SetMarkContext_DObjModelIndex(GfxMarkContext *context, int dobjModelIndex)
{
  __int64 v4; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2066, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( dobjModelIndex > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2067, ASSERT_TYPE_ASSERT, "(dobjModelIndex <= MARK_ENTMODEL_MASK_DOBJMODELINDEX)", (const char *)&queryFormat, "dobjModelIndex <= MARK_ENTMODEL_MASK_DOBJMODELINDEX") )
    __debugbreak();
  context->surfIndex &= 0xE0u;
  context->surfIndex |= dobjModelIndex;
  if ( context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
    __debugbreak();
  if ( dobjModelIndex != (context->surfIndex & 0x1F) )
  {
    LODWORD(v4) = dobjModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2071, ASSERT_TYPE_ASSERT, "( ( dobjModelIndex == FX_GetMarkContext_DObjModelIndex( context ) ) )", "( dobjModelIndex ) = %i", v4) )
      __debugbreak();
  }
}

