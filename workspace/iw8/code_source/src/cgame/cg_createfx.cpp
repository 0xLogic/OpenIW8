/*
==============
CreateFxAssetPalette::add
==============
*/

bool __fastcall CreateFxAssetPalette::add(CreateFxAssetPalette *this, const char *const asset, const char *alias)
{
  return ?add@CreateFxAssetPalette@@QEAA_NQEBDPEBD@Z(this, asset, alias);
}

/*
==============
CG_CreateFx_OnMapRestart
==============
*/

void CG_CreateFx_OnMapRestart(void)
{
  ?CG_CreateFx_OnMapRestart@@YAXXZ();
}

/*
==============
CreateFxDropToGroundCommand::Undo
==============
*/

void __fastcall CreateFxDropToGroundCommand::Undo(CreateFxDropToGroundCommand *this)
{
  ?Undo@CreateFxDropToGroundCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_MenuMoveBack
==============
*/

void CG_CreateFx_MenuMoveBack(void)
{
  ?CG_CreateFx_MenuMoveBack@@YAXXZ();
}

/*
==============
CG_CreateFx_OnEditEnd
==============
*/

void CG_CreateFx_OnEditEnd(void)
{
  ?CG_CreateFx_OnEditEnd@@YAXXZ();
}

/*
==============
GetDotProductFromView
==============
*/

double __fastcall GetDotProductFromView(const vec3_t *targetOrigin, const vec3_t *viewOrigin, const vec3_t *viewForward)
{
  double result; 

  *(float *)&result = ?GetDotProductFromView@@YAMAEBTvec3_t@@00@Z(targetOrigin, viewOrigin, viewForward);
  return result;
}

/*
==============
CG_CreateFx_GotoMenu
==============
*/

void __fastcall CG_CreateFx_GotoMenu(CreateFxMenuNames menuIndex)
{
  ?CG_CreateFx_GotoMenu@@YAXW4CreateFxMenuNames@@@Z(menuIndex);
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxInsertNewEffectCommand>
==============
*/

CreateFxInsertNewEffectCommand *__fastcall CG_CreateFx_AllocateCommand<CreateFxInsertNewEffectCommand>()
{
  return ??$CG_CreateFx_AllocateCommand@VCreateFxInsertNewEffectCommand@@@@YAPEAVCreateFxInsertNewEffectCommand@@XZ();
}

/*
==============
CreateFxInsertNewEffectCommand::Do
==============
*/

void __fastcall CreateFxInsertNewEffectCommand::Do(CreateFxInsertNewEffectCommand *this)
{
  ?Do@CreateFxInsertNewEffectCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_OnEditBegin
==============
*/

void CG_CreateFx_OnEditBegin(void)
{
  ?CG_CreateFx_OnEditBegin@@YAXXZ();
}

/*
==============
CreateFxEditCommand::Do
==============
*/

void __fastcall CreateFxEditCommand::Do(CreateFxEditCommand *this)
{
  ?Do@CreateFxEditCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_RegisterCommonDvars
==============
*/

void CG_CreateFx_RegisterCommonDvars(void)
{
  ?CG_CreateFx_RegisterCommonDvars@@YAXXZ();
}

/*
==============
CreateFxAssetPalette::getAssetForFiltered
==============
*/

const char *__fastcall CreateFxAssetPalette::getAssetForFiltered(CreateFxAssetPalette *this, const unsigned __int16 filteredIndex)
{
  return ?getAssetForFiltered@CreateFxAssetPalette@@QEAAPEBDG@Z(this, filteredIndex);
}

/*
==============
CG_CreateFx_Draw3DEmitter
==============
*/

void __fastcall CG_CreateFx_Draw3DEmitter(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *origin, const vec3_t *viewPos, float maxDistance, const char *text, CreateFxEffectType type, bool isSpatiallyActive, const int rootIndex)
{
  ?CG_CreateFx_Draw3DEmitter@@YAXW4LocalClientNum_t@@QEBUScreenPlacement@@AEBTvec3_t@@2MPEBDW4CreateFxEffectType@@_NH@Z(localClientNum, scrPlace, origin, viewPos, maxDistance, text, type, isSpatiallyActive, rootIndex);
}

/*
==============
CreateFxAssetPalette::filter
==============
*/

void __fastcall CreateFxAssetPalette::filter(CreateFxAssetPalette *this, const char *const str, const unsigned int len)
{
  ?filter@CreateFxAssetPalette@@QEAAXQEBDI@Z(this, str, len);
}

/*
==============
CG_CreateFx_ActivateIndividualExploder
==============
*/

void __fastcall CG_CreateFx_ActivateIndividualExploder(const int effectIndex, const int startTimeMsec)
{
  ?CG_CreateFx_ActivateIndividualExploder@@YAXHH@Z(effectIndex, startTimeMsec);
}

/*
==============
CG_CreateFx_EffectsAreEqual
==============
*/

bool __fastcall CG_CreateFx_EffectsAreEqual(const CreateFxDataState *leftState, const CreateFXDataUnion *leftData, const CreateFxDataState *rightState, const CreateFXDataUnion *rightData)
{
  return ?CG_CreateFx_EffectsAreEqual@@YA_NAEBUCreateFxDataState@@AEBTCreateFXDataUnion@@01@Z(leftState, leftData, rightState, rightData);
}

/*
==============
CG_CreateFx_IsEditKeyDown
==============
*/

bool __fastcall CG_CreateFx_IsEditKeyDown()
{
  return ?CG_CreateFx_IsEditKeyDown@@YA_NXZ();
}

/*
==============
CG_CreateFx_HandleMouseEvents
==============
*/

void __fastcall CG_CreateFx_HandleMouseEvents(LocalClientNum_t localClientNum, int dx, int dy)
{
  ?CG_CreateFx_HandleMouseEvents@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, dx, dy);
}

/*
==============
CG_CreateFx_GetCurrentMenu
==============
*/

CreateFxMenuPage *__fastcall CG_CreateFx_GetCurrentMenu()
{
  return ?CG_CreateFx_GetCurrentMenu@@YAPEAUCreateFxMenuPage@@XZ();
}

/*
==============
CG_CreateFx_GetNameForPath
==============
*/

const char *__fastcall CG_CreateFx_GetNameForPath(const char *path)
{
  return ?CG_CreateFx_GetNameForPath@@YAPEBDPEBD@Z(path);
}

/*
==============
CG_CreateFx_HandleGamepadEvents
==============
*/

void __fastcall CG_CreateFx_HandleGamepadEvents(LocalClientNum_t localClientNum, float forward, float side, float pitch, float yaw)
{
  ?CG_CreateFx_HandleGamepadEvents@@YAXW4LocalClientNum_t@@MMMM@Z(localClientNum, forward, side, pitch, yaw);
}

/*
==============
CG_CreateFx_OnEditAbandon
==============
*/

void CG_CreateFx_OnEditAbandon(void)
{
  ?CG_CreateFx_OnEditAbandon@@YAXXZ();
}

/*
==============
CG_CreateFx_HasBeenEnabled
==============
*/

bool __fastcall CG_CreateFx_HasBeenEnabled()
{
  return ?CG_CreateFx_HasBeenEnabled@@YA_NXZ();
}

/*
==============
CG_CreateFx_ActivateExploder
==============
*/

void __fastcall CG_CreateFx_ActivateExploder(const scr_string_t exploderName, int time)
{
  ?CG_CreateFx_ActivateExploder@@YAXW4scr_string_t@@H@Z(exploderName, time);
}

/*
==============
CG_CreateFx_DrawInfo
==============
*/

void __fastcall CG_CreateFx_DrawInfo(LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace)
{
  ?CG_CreateFx_DrawInfo@@YAXW4LocalClientNum_t@@QEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CreateFxInsertEffectCopyCommand::Undo
==============
*/

void __fastcall CreateFxInsertEffectCopyCommand::Undo(CreateFxInsertEffectCopyCommand *this)
{
  ?Undo@CreateFxInsertEffectCopyCommand@@UEAAXXZ(this);
}

/*
==============
CreateFxInsertNewEffectCommand::Undo
==============
*/

void __fastcall CreateFxInsertNewEffectCommand::Undo(CreateFxInsertNewEffectCommand *this)
{
  ?Undo@CreateFxInsertNewEffectCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_FilterSettings_ConfirmSelection
==============
*/

void __fastcall CG_CreateFx_FilterSettings_ConfirmSelection(CreateFxMenuPage *const page)
{
  ?CG_CreateFx_FilterSettings_ConfirmSelection@@YAXQEAUCreateFxMenuPage@@@Z(page);
}

/*
==============
CG_CreateFx_CreateDevGui
==============
*/

void __fastcall CG_CreateFx_CreateDevGui(LocalClientNum_t localClientNum)
{
  ?CG_CreateFx_CreateDevGui@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CreateFx_AddPendingExploder
==============
*/

void __fastcall CG_CreateFx_AddPendingExploder(const int storageIndex, const int startTimeMsec)
{
  ?CG_CreateFx_AddPendingExploder@@YAXHH@Z(storageIndex, startTimeMsec);
}

/*
==============
CG_CreateFx_GetEffectColor
==============
*/

void __fastcall CG_CreateFx_GetEffectColor(CreateFxEffectType effectType, bool isSelected, bool isHighlighted, bool isInOtherLayer, bool isInvalid, bool isOccluded, const vec4_t *errorColor, vec4_t *outColor)
{
  ?CG_CreateFx_GetEffectColor@@YAXW4CreateFxEffectType@@_N1111AEBTvec4_t@@AEAT2@@Z(effectType, isSelected, isHighlighted, isInOtherLayer, isInvalid, isOccluded, errorColor, outColor);
}

/*
==============
CG_CreateFx_LoadLoose
==============
*/

void CG_CreateFx_LoadLoose(void)
{
  ?CG_CreateFx_LoadLoose@@YAXXZ();
}

/*
==============
CG_CreateFx_MainMenu_ConfirmSelection
==============
*/

void __fastcall CG_CreateFx_MainMenu_ConfirmSelection(CreateFxMenuPage *const page)
{
  ?CG_CreateFx_MainMenu_ConfirmSelection@@YAXQEAUCreateFxMenuPage@@@Z(page);
}

/*
==============
CG_CreateFx_IsEditPending
==============
*/

bool __fastcall CG_CreateFx_IsEditPending()
{
  return ?CG_CreateFx_IsEditPending@@YA_NXZ();
}

/*
==============
CG_CreateFx_GetEffectBytes
==============
*/

unsigned __int8 *__fastcall CG_CreateFx_GetEffectBytes(CreateFXDataUnion *effectData, const CreateFxEffectType effectType)
{
  return ?CG_CreateFx_GetEffectBytes@@YAPEAEAEATCreateFXDataUnion@@W4CreateFxEffectType@@@Z(effectData, effectType);
}

/*
==============
CG_CreateFx_GetCurrentRootName
==============
*/

const char *__fastcall CG_CreateFx_GetCurrentRootName()
{
  return ?CG_CreateFx_GetCurrentRootName@@YAPEBDXZ();
}

/*
==============
CreateFxAssetPalette::containsAsset
==============
*/

bool __fastcall CreateFxAssetPalette::containsAsset(CreateFxAssetPalette *this, const char *const asset)
{
  return ?containsAsset@CreateFxAssetPalette@@QEAA_NQEBD@Z(this, asset);
}

/*
==============
CreateFxEditCommand::Undo
==============
*/

void __fastcall CreateFxEditCommand::Undo(CreateFxEditCommand *this)
{
  ?Undo@CreateFxEditCommand@@UEAAXXZ(this);
}

/*
==============
CreateFxAssetPalette::getAliasForIndex
==============
*/

const char *__fastcall CreateFxAssetPalette::getAliasForIndex(CreateFxAssetPalette *this, const unsigned __int16 index)
{
  return ?getAliasForIndex@CreateFxAssetPalette@@QEAAPEBDG@Z(this, index);
}

/*
==============
CG_CreateFx_IsEditKey
==============
*/

bool __fastcall CG_CreateFx_IsEditKey(const int key)
{
  return ?CG_CreateFx_IsEditKey@@YA_NH@Z(key);
}

/*
==============
CG_CreateFx_HandleKeyEvents
==============
*/

bool __fastcall CG_CreateFx_HandleKeyEvents(LocalClientNum_t localClientNum, int key, int down, int repeats, unsigned int time)
{
  return ?CG_CreateFx_HandleKeyEvents@@YA_NW4LocalClientNum_t@@HHHI@Z(localClientNum, key, down, repeats, time);
}

/*
==============
CG_CreateFx_FinishActiveEdits
==============
*/

void CG_CreateFx_FinishActiveEdits(void)
{
  ?CG_CreateFx_FinishActiveEdits@@YAXXZ();
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxDropToGroundCommand>
==============
*/

CreateFxDropToGroundCommand *__fastcall CG_CreateFx_AllocateCommand<CreateFxDropToGroundCommand>()
{
  return ??$CG_CreateFx_AllocateCommand@VCreateFxDropToGroundCommand@@@@YAPEAVCreateFxDropToGroundCommand@@XZ();
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxEditCommand>
==============
*/

CreateFxEditCommand *__fastcall CG_CreateFx_AllocateCommand<CreateFxEditCommand>()
{
  return ??$CG_CreateFx_AllocateCommand@VCreateFxEditCommand@@@@YAPEAVCreateFxEditCommand@@XZ();
}

/*
==============
CreateFxEditBuffer::modifyNumber
==============
*/

void __fastcall CreateFxEditBuffer::modifyNumber(CreateFxEditBuffer *this, const float delta)
{
  ?modifyNumber@CreateFxEditBuffer@@QEAAXM@Z(this, delta);
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxInsertEffectCopyCommand>
==============
*/

CreateFxInsertEffectCopyCommand *__fastcall CG_CreateFx_AllocateCommand<CreateFxInsertEffectCopyCommand>()
{
  return ??$CG_CreateFx_AllocateCommand@VCreateFxInsertEffectCopyCommand@@@@YAPEAVCreateFxInsertEffectCopyCommand@@XZ();
}

/*
==============
CreateFxDropToGroundCommand::Do
==============
*/

void __fastcall CreateFxDropToGroundCommand::Do(CreateFxDropToGroundCommand *this)
{
  ?Do@CreateFxDropToGroundCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxDeleteCommand>
==============
*/

CreateFxDeleteCommand *__fastcall CG_CreateFx_AllocateCommand<CreateFxDeleteCommand>()
{
  return ??$CG_CreateFx_AllocateCommand@VCreateFxDeleteCommand@@@@YAPEAVCreateFxDeleteCommand@@XZ();
}

/*
==============
CreateFxDeleteCommand::Undo
==============
*/

void __fastcall CreateFxDeleteCommand::Undo(CreateFxDeleteCommand *this)
{
  ?Undo@CreateFxDeleteCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_DeactivateExploder
==============
*/

void __fastcall CG_CreateFx_DeactivateExploder(const scr_string_t exploderName, const bool kill)
{
  ?CG_CreateFx_DeactivateExploder@@YAXW4scr_string_t@@_N@Z(exploderName, kill);
}

/*
==============
CG_CreateFx_SetupColors
==============
*/

void CG_CreateFx_SetupColors(void)
{
  ?CG_CreateFx_SetupColors@@YAXXZ();
}

/*
==============
CG_CreateFx_GetRootName
==============
*/

const char *__fastcall CG_CreateFx_GetRootName(const ClientRootDef *const root)
{
  return ?CG_CreateFx_GetRootName@@YAPEBDQEBUClientRootDef@@@Z(root);
}

/*
==============
CreateFxEditBuffer::remove
==============
*/

bool __fastcall CreateFxEditBuffer::remove(CreateFxEditBuffer *this, keyNum_t key)
{
  return ?remove@CreateFxEditBuffer@@QEAA_NW4keyNum_t@@@Z(this, key);
}

/*
==============
CG_CreateFx_PlayReactiveSounds
==============
*/

void __fastcall CG_CreateFx_PlayReactiveSounds(const vec3_t *eventOrigin, const float eventRadius, const float timeDelay)
{
  ?CG_CreateFx_PlayReactiveSounds@@YAXAEBTvec3_t@@MM@Z(eventOrigin, eventRadius, timeDelay);
}

/*
==============
CG_CreateFx_DestroyDevGui
==============
*/

void CG_CreateFx_DestroyDevGui(void)
{
  ?CG_CreateFx_DestroyDevGui@@YAXXZ();
}

/*
==============
CG_CreateFx_Frame
==============
*/

void __fastcall CG_CreateFx_Frame(const cg_t *const cgameGlob)
{
  ?CG_CreateFx_Frame@@YAXQEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_CreateFx_ResolveCommand
==============
*/

bool __fastcall CG_CreateFx_ResolveCommand(const LocalClientNum_t localClientNum, const int key, const int down, const int repeats, const bool ctrlDown, const bool shiftDown, const bool leftShoulderDown)
{
  return ?CG_CreateFx_ResolveCommand@@YA_NW4LocalClientNum_t@@HHH_N11@Z(localClientNum, key, down, repeats, ctrlDown, shiftDown, leftShoulderDown);
}

/*
==============
CreateFxAssetPalette::getAliasForAsset
==============
*/

const char *__fastcall CreateFxAssetPalette::getAliasForAsset(CreateFxAssetPalette *this, const char *asset)
{
  return ?getAliasForAsset@CreateFxAssetPalette@@QEAAPEBDPEBD@Z(this, asset);
}

/*
==============
CG_CreateFx_UpdateCursor
==============
*/

void __fastcall CG_CreateFx_UpdateCursor(LocalClientNum_t localClientNum)
{
  ?CG_CreateFx_UpdateCursor@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClassNameValueToCreateFxEffectType
==============
*/

CreateFxEffectType __fastcall ClassNameValueToCreateFxEffectType(const char *value)
{
  return ?ClassNameValueToCreateFxEffectType@@YA?AW4CreateFxEffectType@@PEBD@Z(value);
}

/*
==============
CG_CreateFx_CopySoundEntityOrientation
==============
*/

void __fastcall CG_CreateFx_CopySoundEntityOrientation(const int clientSoundEntIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  ?CG_CreateFx_CopySoundEntityOrientation@@YAXHAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(clientSoundEntIndex, origin_out, axis_out);
}

/*
==============
CreateFxDeleteCommand::Do
==============
*/

void __fastcall CreateFxDeleteCommand::Do(CreateFxDeleteCommand *this)
{
  ?Do@CreateFxDeleteCommand@@UEAAXXZ(this);
}

/*
==============
CreateFxInsertEffectCopyCommand::Do
==============
*/

void __fastcall CreateFxInsertEffectCopyCommand::Do(CreateFxInsertEffectCopyCommand *this)
{
  ?Do@CreateFxInsertEffectCopyCommand@@UEAAXXZ(this);
}

/*
==============
CG_CreateFx_GetExploderDef
==============
*/

ClientExploderDef *__fastcall CG_CreateFx_GetExploderDef(const unsigned int exploderIndex)
{
  return ?CG_CreateFx_GetExploderDef@@YAPEAUClientExploderDef@@I@Z(exploderIndex);
}

/*
==============
CreateFxAssetPalette::init
==============
*/

void __fastcall CreateFxAssetPalette::init(CreateFxAssetPalette *this, const char *name)
{
  ?init@CreateFxAssetPalette@@QEAAXPEBD@Z(this, name);
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxDeleteCommand>
==============
*/
CreateFxDeleteCommand *CG_CreateFx_AllocateCommand<CreateFxDeleteCommand>()
{
  CreateFxDeleteCommand *v0; 
  CreateFxDeleteCommand *result; 

  CG_CreateFx_ClearRedoStack();
  while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x80 )
    CG_CreateFx_DiscardUndoSequence();
  v0 = (CreateFxDeleteCommand *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x80ui64, 4ui64, 1);
  if ( !v0 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
  v0->m_effectIndex = -1;
  v0->__vftable = (CreateFxDeleteCommand_vtbl *)&CreateFxDeleteCommand::`vftable';
  result = v0;
  v0->m_effectType = None;
  return result;
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxDropToGroundCommand>
==============
*/
CreateFxDropToGroundCommand *CG_CreateFx_AllocateCommand<CreateFxDropToGroundCommand>()
{
  _DWORD *v0; 

  CG_CreateFx_ClearRedoStack();
  while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x28 )
    CG_CreateFx_DiscardUndoSequence();
  v0 = ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x28ui64, 4ui64, 1);
  if ( !v0 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
  v0[2] = -1;
  *(_QWORD *)v0 = &CreateFxDropToGroundCommand::`vftable';
  return (CreateFxDropToGroundCommand *)v0;
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxEditCommand>
==============
*/
CreateFxEditCommand *CG_CreateFx_AllocateCommand<CreateFxEditCommand>()
{
  _DWORD *v0; 

  CG_CreateFx_ClearRedoStack();
  while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0xF8 )
    CG_CreateFx_DiscardUndoSequence();
  v0 = ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0xF8ui64, 4ui64, 1);
  if ( !v0 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
  v0[2] = -1;
  *(_QWORD *)v0 = &CreateFxEditCommand::`vftable';
  v0[3] = 0;
  v0[32] = 0;
  return (CreateFxEditCommand *)v0;
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxInsertEffectCopyCommand>
==============
*/
CreateFxInsertEffectCopyCommand *CG_CreateFx_AllocateCommand<CreateFxInsertEffectCopyCommand>()
{
  _DWORD *v0; 

  CG_CreateFx_ClearRedoStack();
  while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x80 )
    CG_CreateFx_DiscardUndoSequence();
  v0 = ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x80ui64, 4ui64, 1);
  if ( !v0 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
  v0[2] = -1;
  *(_QWORD *)v0 = &CreateFxInsertEffectCopyCommand::`vftable';
  return (CreateFxInsertEffectCopyCommand *)v0;
}

/*
==============
CG_CreateFx_AllocateCommand<CreateFxInsertNewEffectCommand>
==============
*/
CreateFxInsertNewEffectCommand *CG_CreateFx_AllocateCommand<CreateFxInsertNewEffectCommand>()
{
  _DWORD *v0; 

  CG_CreateFx_ClearRedoStack();
  while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x28 )
    CG_CreateFx_DiscardUndoSequence();
  v0 = ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x28ui64, 4ui64, 1);
  if ( !v0 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
  v0[2] = -1;
  *(_QWORD *)v0 = &CreateFxInsertNewEffectCommand::`vftable';
  *((_QWORD *)v0 + 2) = 0i64;
  v0[6] = 0;
  return (CreateFxInsertNewEffectCommand *)v0;
}

/*
==============
CG_CreateFX_PlayFXFromDef
==============
*/
ParticleSystemHandle CG_CreateFX_PlayFXFromDef(const FxCombinedDef *fxDef, const vec3_t *origin, const vec3_t *angles, const int startMsec)
{
  const ParticleSystemDef *particleSystemDef; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  particleSystemDef = fxDef->particleSystemDef;
  if ( fxDef->particleSystemDef )
  {
    def.m_particleSystemDef = fxDef->particleSystemDef;
    AnglesToAxis(angles, &axis);
    LODWORD(particleSystemDef) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, startMsec, origin, &axis);
  }
  return (int)particleSystemDef;
}

/*
==============
CG_CreateFX_RegisterPalettes
==============
*/
CreateFxTool *CG_CreateFX_RegisterPalettes()
{
  MapEnts *mapEnts; 
  __int64 v1; 
  int v2; 
  __int64 v3; 
  CreateFxPaletteDef *fxPalette; 
  const char *v5; 
  const char *v6; 
  char v7; 
  char *v8; 
  unsigned __int64 v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *mp_next; 
  int i; 
  const char *v13; 
  CreateFxTool *result; 
  __int64 j; 
  __int64 v16; 
  __int64 v17; 
  bool *v18; 
  unsigned int v19; 
  __int64 v20; 
  const char *v21; 
  bool *v22; 
  const char *const *v23; 
  const char *v24; 
  __int64 v25; 
  int v26; 
  const char *v27; 
  const char *v28; 
  const char *const *v29; 
  const char *v30; 
  __int64 v31; 
  int v32; 
  const char *v33; 
  const char *v34; 
  scr_string_t v35; 
  const char *v36; 
  scr_string_t v37; 
  const char *v38; 
  scr_string_t v39; 
  const char *v40; 
  const char *v41; 
  CreateFxAssetPalette *v42; 
  const char *const *v43; 
  const char *v44; 
  __int64 v45; 
  int v46; 
  const char *v47; 
  __int64 v48; 
  __int64 v49; 
  int v50; 

  Com_Printf_NoFilter("[CreateFx] RegisterPalettes\n");
  CreateFxAssetPalette::init(&s_createFX_paletteLayers, "layers");
  CreateFxAssetPalette::init(&s_createFX_paletteFX, "fx");
  CreateFxAssetPalette::init(&s_createFX_paletteSounds, "sounds");
  CreateFxAssetPalette::init(&s_createFX_paletteExploderGroups, "exploders");
  CreateFxAssetPalette::init(&s_createFX_paletteEarthquakeGroups, "earthquakes");
  CreateFxAssetPalette::init(&s_createFX_paletteRumbleGroups, "rumbles");
  mapEnts = cm.mapEnts;
  v1 = 0i64;
  v50 = 0;
  v2 = 0;
  if ( cm.mapEnts->createFxAssetData.fxPaletteCount )
  {
    v3 = 0i64;
    do
    {
      fxPalette = mapEnts->createFxAssetData.fxPalette;
      v5 = SL_ConvertToString(fxPalette[v3].effectPath);
      v6 = SL_ConvertToString(fxPalette[v3].aliasName);
      if ( v5 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = (char *)v5;
          do
          {
            ++v8;
            LODWORD(v1) = v7 + 31 * v1;
            v7 = *v8;
          }
          while ( *v8 );
        }
      }
      v9 = (unsigned int)v1 % 0x407ui64;
      if ( v9 >= 0x407 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v10 = &s_createFX_paletteFX.m_assetToIndexMap.m_buckets.m_data[v9];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v10->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v10->m_listHead.m_sentinel.mp_next == v10 )
      {
LABEL_16:
        CreateFxAssetPalette::add(&s_createFX_paletteFX, v5, v6);
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v1 )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v10 )
            goto LABEL_16;
        }
      }
      ++v2;
      ++v3;
      v1 = 0i64;
    }
    while ( v2 < mapEnts->createFxAssetData.fxPaletteCount );
  }
  for ( i = 0; i < s_createFxTool->layerListTotal; v1 += 304i64 )
  {
    if ( !s_createFxTool->layerList[0].filterString[v1 + 260] )
    {
      v13 = *(const char **)((char *)&s_createFxTool->layerList[0].pathString + v1);
      if ( v13 )
      {
        if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteLayers, *(const char *const *)((char *)&s_createFxTool->layerList[0].pathString + v1)) )
          CreateFxAssetPalette::add(&s_createFX_paletteLayers, v13, NULL);
      }
    }
    ++i;
  }
  result = s_createFxTool;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    for ( j = 7078100i64; ; j += 4i64 )
    {
      v16 = *(int *)(&s_createFxTool->inited + j);
      if ( (unsigned int)v16 >= 0x4000 )
      {
        LODWORD(v49) = 0x4000;
        LODWORD(v48) = *(_DWORD *)(&s_createFxTool->inited + j);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2296, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchDataState ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchDataState )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v17 = v16;
      v18 = &s_createFxTool->inited + 40 * v16;
      v19 = *((_DWORD *)v18 + 1605686);
      if ( (unsigned int)v16 >= 0x4000 )
      {
        LODWORD(v49) = 0x4000;
        LODWORD(v48) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2300, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchData ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchData )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v20 = *((_QWORD *)v18 + 802845);
      v21 = *(const char **)(v20 + 8);
      v22 = &s_createFxTool->inited + 104 * v17;
      if ( v21 && !CreateFxAssetPalette::containsAsset(&s_createFX_paletteLayers, *(const char *const *)(v20 + 8)) )
        CreateFxAssetPalette::add(&s_createFX_paletteLayers, v21, NULL);
      switch ( v19 )
      {
        case 1u:
          v43 = (const char *const *)*((_QWORD *)v22 + 589854);
          if ( v43 )
          {
            v44 = *v43;
            if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteFX, *v43) )
            {
              v45 = -1i64;
              do
                ++v45;
              while ( v44[v45] );
              v46 = v45 - 1;
              if ( v46 )
              {
                v47 = &v44[v46];
                while ( *v47 != 47 )
                {
                  --v47;
                  if ( !--v46 )
                    goto LABEL_96;
                }
                ++v46;
              }
LABEL_96:
              CreateFxAssetPalette::add(&s_createFX_paletteFX, v44, &v44[v46]);
            }
          }
          v28 = (const char *)*((_QWORD *)v22 + 589855);
          goto LABEL_98;
        case 2u:
          goto LABEL_53;
        case 3u:
          v29 = (const char *const *)*((_QWORD *)v22 + 589854);
          if ( v29 )
          {
            v30 = *v29;
            if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteFX, *v29) )
            {
              v31 = -1i64;
              do
                ++v31;
              while ( v30[v31] );
              v32 = v31 - 1;
              if ( v32 )
              {
                v33 = &v30[v32];
                while ( *v33 != 47 )
                {
                  --v33;
                  if ( !--v32 )
                    goto LABEL_64;
                }
                ++v32;
              }
LABEL_64:
              CreateFxAssetPalette::add(&s_createFX_paletteFX, v30, &v30[v32]);
            }
          }
          v34 = (const char *)*((_QWORD *)v22 + 589855);
          if ( v34 && !CreateFxAssetPalette::containsAsset(&s_createFX_paletteSounds, *((const char *const *)v22 + 589855)) )
            CreateFxAssetPalette::add(&s_createFX_paletteSounds, v34, NULL);
          v35 = *((_DWORD *)v22 + 1179714);
          if ( v35 )
          {
            v36 = SL_ConvertToString(v35);
            if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2231, ASSERT_TYPE_ASSERT, "(assetString)", (const char *)&queryFormat, "assetString") )
              __debugbreak();
            if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteExploderGroups, v36) )
            {
              SL_AddRefToString(v35);
              CreateFxAssetPalette::add(&s_createFX_paletteExploderGroups, v36, NULL);
            }
          }
          v37 = *((_DWORD *)v22 + 1179723);
          if ( v37 )
          {
            v38 = SL_ConvertToString(v37);
            if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2231, ASSERT_TYPE_ASSERT, "(assetString)", (const char *)&queryFormat, "assetString") )
              __debugbreak();
            if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteEarthquakeGroups, v38) )
            {
              SL_AddRefToString(v37);
              CreateFxAssetPalette::add(&s_createFX_paletteEarthquakeGroups, v38, NULL);
            }
          }
          v39 = *((_DWORD *)v22 + 1179724);
          if ( !v39 )
            goto LABEL_102;
          v40 = SL_ConvertToString(v39);
          if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2231, ASSERT_TYPE_ASSERT, "(assetString)", (const char *)&queryFormat, "assetString") )
            __debugbreak();
          if ( CreateFxAssetPalette::containsAsset(&s_createFX_paletteRumbleGroups, v40) )
            goto LABEL_102;
          SL_AddRefToString(v39);
          v41 = v40;
          v42 = &s_createFX_paletteRumbleGroups;
LABEL_101:
          CreateFxAssetPalette::add(v42, v41, NULL);
          goto LABEL_102;
      }
      if ( v19 == 4 )
        break;
      if ( v19 == 5 )
      {
        v23 = (const char *const *)*((_QWORD *)v22 + 589853);
        if ( v23 )
        {
          v24 = *v23;
          if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteFX, *v23) )
          {
            v25 = -1i64;
            do
              ++v25;
            while ( v24[v25] );
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = &v24[v26];
              while ( *v27 != 47 )
              {
                --v27;
                if ( !--v26 )
                  goto LABEL_51;
              }
              ++v26;
            }
LABEL_51:
            CreateFxAssetPalette::add(&s_createFX_paletteFX, v24, &v24[v26]);
          }
        }
        v28 = (const char *)*((_QWORD *)v22 + 589854);
        goto LABEL_98;
      }
      Com_PrintWarning(0, "WARNING: unsupported effect type '%d'\n", v19);
LABEL_102:
      result = s_createFxTool;
      if ( ++v50 >= s_createFxTool->usedEffectTotal )
        return result;
    }
LABEL_53:
    v28 = (const char *)*((_QWORD *)v22 + 589853);
LABEL_98:
    if ( !v28 || CreateFxAssetPalette::containsAsset(&s_createFX_paletteSounds, v28) )
      goto LABEL_102;
    v42 = &s_createFX_paletteSounds;
    v41 = v28;
    goto LABEL_101;
  }
  return result;
}

/*
==============
CG_CreateFX_SearchSoundAlias
==============
*/
void CG_CreateFX_SearchSoundAlias(SndAliasList *const aliasList)
{
  const char *aliasName; 
  __int64 v3; 

  if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9814, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  if ( s_createFX_paletteSounds.m_count < 0x400u )
  {
    aliasName = aliasList->aliasName;
    if ( aliasName )
    {
      v3 = -1i64;
      do
        ++v3;
      while ( aliasName[v3] );
      if ( (int)v3 >= 4 )
      {
        if ( s_createFxTool->m_assetFilter.m_bufferCount < 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9835, ASSERT_TYPE_ASSERT, "(s_createFxTool->m_assetFilter.m_bufferCount >= 5)", (const char *)&queryFormat, "s_createFxTool->m_assetFilter.m_bufferCount >= 5") )
          __debugbreak();
        if ( I_strstr(aliasName, &s_createFxTool->m_assetFilter.m_buffer[1]) )
        {
          if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteSounds, aliasName) )
            CreateFxAssetPalette::add(&s_createFX_paletteSounds, aliasName, NULL);
        }
      }
    }
  }
}

/*
==============
CG_CreateFX_StopFX
==============
*/
void CG_CreateFX_StopFX(const int storageIndex, bool kill)
{
  ParticleSystemHandle *p_effectHandle; 
  ParticleSystemHandle v4; 
  __int64 v5; 
  ParticleSystem *v6; 
  ParticleSystem *v7; 

  p_effectHandle = &s_createFxTool->scratchDataState[storageIndex].effectHandle;
  v4 = *p_effectHandle;
  if ( *p_effectHandle )
  {
    v5 = 0i64;
    if ( g_particleSystemsGeneration[v4 & 0xFFF].__all32 == v4 )
      v5 = v4 & 0xFFF;
    v6 = NULL;
    v7 = g_particleSystems[0][v5];
    if ( (unsigned __int64)v7 >= 0x1000 )
      v6 = v7;
    if ( v6 )
    {
      if ( kill )
      {
        ParticleManager::KillSystem(g_particleManager, v6);
        *p_effectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
        return;
      }
      ParticleManager::StopSystem(g_particleManager, v6);
    }
  }
  *p_effectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
}

/*
==============
CG_CreateFx_ActivateExploder
==============
*/
void CG_CreateFx_ActivateExploder(const scr_string_t exploderName, int time)
{
  CreateFxTool *v2; 
  int v3; 
  __int64 i; 
  __int64 v7; 
  int delayMsec; 
  unsigned __int16 pendingExploderCount; 
  PendingClientExploder *v10; 

  v2 = s_createFxTool;
  v3 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    for ( i = 7078100i64; ; i += 4i64 )
    {
      v7 = *(int *)(&v2->inited + i);
      if ( v2->scratchDataState[v7].effectType != 3 || v2->scratchData[v7].explodersDef.client.name != exploderName )
        goto LABEL_11;
      delayMsec = v2->scratchData[v7].explodersDef.client.delayMsec;
      if ( delayMsec <= 0 )
        break;
      pendingExploderCount = v2->pendingExploderCount;
      if ( pendingExploderCount >= 0x200u )
      {
        Com_PrintWarning(0, "WARNING: too many pending exploders!\n");
LABEL_10:
        v2 = s_createFxTool;
        goto LABEL_11;
      }
      v10 = &v2->pendingExploders[pendingExploderCount];
      v10->exploderIndex = v7;
      v10->startTime = delayMsec + time;
      ++v2->pendingExploderCount;
LABEL_11:
      if ( ++v3 >= v2->usedEffectTotal )
        return;
    }
    CG_CreateFx_ActivateIndividualExploderImmediately(v7, time);
    goto LABEL_10;
  }
}

/*
==============
CG_CreateFx_ActivateIndividualExploder
==============
*/
void CG_CreateFx_ActivateIndividualExploder(const int effectIndex, const int startTimeMsec)
{
  CreateFxTool *v2; 
  __int64 v5; 
  int delayMsec; 
  unsigned __int16 pendingExploderCount; 
  PendingClientExploder *v8; 

  v2 = s_createFxTool;
  v5 = effectIndex;
  if ( s_createFxTool->scratchDataState[effectIndex].effectType != 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2930, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[effectIndex].effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[effectIndex].effectType == CreateFxEffectType::Exploder") )
      __debugbreak();
    v2 = s_createFxTool;
  }
  delayMsec = v2->scratchData[v5].explodersDef.client.delayMsec;
  if ( delayMsec <= 0 )
  {
    CG_CreateFx_ActivateIndividualExploderImmediately(effectIndex, startTimeMsec);
  }
  else
  {
    pendingExploderCount = v2->pendingExploderCount;
    if ( pendingExploderCount >= 0x200u )
    {
      Com_PrintWarning(0, "WARNING: too many pending exploders!\n");
    }
    else
    {
      v8 = &v2->pendingExploders[pendingExploderCount];
      v8->exploderIndex = effectIndex;
      v8->startTime = delayMsec + startTimeMsec;
      ++v2->pendingExploderCount;
    }
  }
}

/*
==============
CG_CreateFx_ActivateIndividualExploderImmediately
==============
*/
void CG_CreateFx_ActivateIndividualExploderImmediately(const int effectIndex, const int startTimeMsec)
{
  CreateFxTool *v4; 
  SndAliasList *aliasList; 
  bool v9; 
  CgSoundSystem *SoundSystem; 
  CreateFxTool *v11; 
  unsigned __int16 activeExploderCount; 
  const char *v32; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 

  v4 = s_createFxTool;
  _RSI = effectIndex;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBP = &s_createFxTool->scratchData[_RSI];
  v4->scratchDataState[effectIndex].effectHandle = CG_CreateFX_PlayFXFromDef(&s_createFxTool->scratchData[_RSI].oneShotFxDef.effect, &_RBP->oneShotFxDef.origin, &s_createFxTool->scratchData[_RSI].oneShotFxDef.angles, startTimeMsec);
  aliasList = _RBP->oneShotFxDef.aliasList;
  if ( aliasList || (aliasList = SND_TryFindAlias(_RBP->oneShotFxDef.effectSound.name), v9 = aliasList == NULL, aliasList) )
  {
    v9 = aliasList->head == NULL;
    if ( aliasList->head )
    {
      if ( Com_IsSoundAliasLooping(aliasList) )
      {
        v11 = s_createFxTool;
        activeExploderCount = s_createFxTool->activeExploderCount;
        if ( activeExploderCount >= 0x400u )
        {
          Com_PrintWarning(0, "WARNING: too many active exploders!\n");
        }
        else
        {
          s_createFxTool->activeExploderIndices[activeExploderCount] = effectIndex;
          v9 = v11->activeExploderCount++ == 0xFFFF;
        }
      }
      else
      {
        SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
        CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, &_RBP->oneShotFxDef.origin, aliasList);
      }
    }
  }
  _R9 = s_createFxTool;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm6, dword ptr [rsi+r9+480120h]
    vucomiss xmm6, xmm0
  }
  if ( !v9 )
  {
    __asm { vucomiss xmm0, dword ptr [rsi+r9+480124h] }
    if ( !v9 )
      goto LABEL_13;
  }
  if ( s_createFxTool->scratchData[_RSI].explodersDef.server.earthquakeName || s_createFxTool->scratchData[_RSI].explodersDef.server.rumbleName )
  {
LABEL_13:
    __asm
    {
      vmovss  xmm5, dword ptr [rsi+r9+480124h]
      vmovss  xmm3, dword ptr [rbp+8]
      vmovss  xmm2, dword ptr [rbp+4]
      vmovss  xmm1, dword ptr [rbp+0]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+18h]
      vmulss  xmm4, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+78h+var_48], xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm1, xmm1, xmm1
      vcvtss2sd xmm0, xmm6, xmm6
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+78h+var_50], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
      vmovsd  [rsp+78h+var_58], xmm4
    }
    v32 = j_va("cfx_exploder %g %g %g %f %f %f %d %d %u %u", _RDX, _R8, _R9, v34, v35, v36, s_createFxTool->scratchData[_RSI].explodersDef.server.damageDoOcclusionTraces, s_createFxTool->scratchData[_RSI].explodersDef.server.damageEnvironmentOnly, s_createFxTool->scratchData[_RSI].explodersDef.server.earthquakeName, s_createFxTool->scratchData[_RSI].explodersDef.server.rumbleName);
    Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v32);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
CG_CreateFx_AddLayer
==============
*/
CreateFxMapLayerDef *CG_CreateFx_AddLayer(const char *const layerPath, const char *const layerFilter, const vec3_t *layerOrigin, const vec3_t *layerAngles)
{
  scr_string_t String; 
  __int64 layerListTotal; 
  __int64 v10; 
  CreateFxMapLayerDef *result; 
  const char *v15; 
  __int64 v16; 

  _RBP = layerAngles;
  _R14 = layerOrigin;
  if ( s_createFxTool->layerListTotal >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8767, ASSERT_TYPE_ASSERT, "(s_createFxTool->layerListTotal < ( sizeof( *array_counter( s_createFxTool->layerList ) ) + 0 ))", (const char *)&queryFormat, "s_createFxTool->layerListTotal < ARRAY_COUNT( s_createFxTool->layerList )") )
    __debugbreak();
  String = SL_GetString(layerPath, 0);
  layerListTotal = s_createFxTool->layerListTotal;
  if ( layerListTotal <= 0 )
  {
LABEL_8:
    _RDI = &s_createFxTool->layerList[layerListTotal];
    _RDI->path = String;
    _RDI->pathString = SL_ConvertToString(String);
    __asm
    {
      vmovsd  xmm0, qword ptr [r14]
      vmovsd  qword ptr [rdi+118h], xmm0
    }
    _RDI->origin.v[2] = _R14->v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+0]
      vmovsd  qword ptr [rdi+124h], xmm0
    }
    _RDI->angles.v[2] = _RBP->v[2];
    _RDI->filtered = 0;
    _RDI->filterString[0] = 0;
    if ( layerFilter )
    {
      if ( *layerFilter )
      {
        Core_strcpy(_RDI->filterString, 0x104ui64, layerFilter);
        if ( createfx_mapnamefilter )
        {
          v15 = createfx_mapnamefilter->current.string;
          if ( v15 )
          {
            if ( *v15 )
            {
              v16 = -1i64;
              do
                ++v16;
              while ( layerFilter[v16] );
              _RDI->filtered = I_strncmp(_RDI->filterString, v15, (unsigned int)v16) != 0;
            }
          }
        }
      }
    }
    Com_Printf_NoFilter("[CreateFx] AddLayer %s (%d total)\n", layerPath, (unsigned int)(s_createFxTool->layerListTotal + 1));
    if ( _RDI->filtered )
      Com_Printf_NoFilter("[CreateFx] AddLayer %s [filtered because layer specifies %s and dvar specifies %s]\n", layerPath, layerFilter, createfx_mapnamefilter->current.string);
    result = _RDI;
    ++s_createFxTool->layerListTotal;
  }
  else
  {
    v10 = 0i64;
    result = s_createFxTool->layerList;
    while ( result->path != String )
    {
      ++v10;
      ++result;
      if ( v10 >= layerListTotal )
        goto LABEL_8;
    }
  }
  return result;
}

/*
==============
CG_CreateFx_AddPendingExploder
==============
*/
void CG_CreateFx_AddPendingExploder(const int storageIndex, const int startTimeMsec)
{
  CreateFxTool *v2; 
  unsigned __int16 pendingExploderCount; 

  v2 = s_createFxTool;
  pendingExploderCount = s_createFxTool->pendingExploderCount;
  if ( pendingExploderCount >= 0x200u )
  {
    Com_PrintWarning(0, "WARNING: too many pending exploders!\n");
  }
  else
  {
    s_createFxTool->pendingExploders[pendingExploderCount].exploderIndex = storageIndex;
    v2->pendingExploders[pendingExploderCount].startTime = startTimeMsec;
    ++v2->pendingExploderCount;
  }
}

/*
==============
CG_CreateFx_AddSounds
==============
*/

void __fastcall CG_CreateFx_AddSounds(double _XMM0_8)
{
  unsigned int time; 
  CreateFxTool *v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  bool *v9; 
  const ClientIntervalSoundDef *v10; 
  const SndAliasList *v11; 
  SndAliasList *v12; 
  unsigned int v13; 
  char v17; 
  char v18; 
  CgSoundSystem *SoundSystem; 
  const vec3_t *p_origin; 
  const SndAliasList *aliasList; 
  const char *name; 
  SndAliasList *Alias; 
  __int64 v25; 
  __int64 v26; 
  const vec3_t *v27; 
  SndAliasList *v28; 
  SndAlias *head; 
  unsigned int pHoldrand; 

  time = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
  pHoldrand = Sys_Milliseconds();
  BG_srand(&pHoldrand);
  v3 = s_createFxTool;
  v4 = 0;
  v5 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v6 = 7078100i64;
    __asm { vmovaps [rsp+68h+var_38], xmm6 }
    while ( 1 )
    {
      v7 = *(int *)(&v3->inited + v6);
      v8 = v3->soundIndexUsage.effectToSoundIndexMap[v7];
      v9 = &v3->inited + 40 * v7;
      if ( *((_DWORD *)v9 + 1605686) == 1 )
        break;
      if ( *((_DWORD *)v9 + 1605686) == 2 )
      {
        p_origin = &v3->scratchData[v7].oneShotFxDef.origin;
        aliasList = v3->scratchData[v7].intervalSoundsDef.aliasList;
        if ( !aliasList )
        {
          name = v3->scratchData[v7].intervalSoundsDef.effectSound.name;
LABEL_18:
          Alias = SND_TryFindAlias(name);
          v3 = s_createFxTool;
          aliasList = Alias;
          if ( !Alias )
            goto LABEL_23;
        }
        goto LABEL_19;
      }
      if ( *((_DWORD *)v9 + 1605686) != 4 )
        goto LABEL_23;
      v10 = (const ClientIntervalSoundDef *)&v3->scratchData[v7];
      v11 = v3->scratchData[v7].intervalSoundsDef.aliasList;
      if ( !v11 )
      {
        v12 = SND_TryFindAlias(v3->scratchData[v7].intervalSoundsDef.effectSound.name);
        v3 = s_createFxTool;
        v11 = v12;
        if ( !v12 )
          goto LABEL_23;
      }
      if ( !v11->head )
        goto LABEL_23;
      v13 = *((_DWORD *)v9 + 1605693);
      if ( !v13 )
      {
        *((_DWORD *)v9 + 1605693) = CG_SetIntervalSoundTimer(v10, time, &pHoldrand);
LABEL_22:
        v3 = s_createFxTool;
        goto LABEL_23;
      }
      if ( time >= v13 )
      {
        *((_DWORD *)v9 + 1605693) = CG_SetIntervalSoundTimer(v10, time, &pHoldrand);
        _RAX = v11->head;
        __asm { vmovss  xmm6, dword ptr [rax+68h] }
        _XMM0_8 = SND_DistSqToNearestListener(&v10->origin);
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vcomiss xmm0, xmm1
        }
        if ( v17 | v18 )
        {
          SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
          CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, &v10->origin, v11);
        }
        goto LABEL_22;
      }
LABEL_23:
      ++v5;
      v6 += 4i64;
      if ( v5 >= v3->usedEffectTotal )
      {
        __asm { vmovaps xmm6, [rsp+68h+var_38] }
        goto LABEL_25;
      }
    }
    p_origin = &v3->scratchData[v7].oneShotFxDef.origin;
    aliasList = v3->scratchData[v7].oneShotFxDef.aliasList;
    if ( !aliasList )
    {
      name = v3->scratchData[v7].oneShotFxDef.effectSound.name;
      goto LABEL_18;
    }
LABEL_19:
    if ( aliasList->head )
    {
      if ( Com_IsSoundAliasLooping(aliasList) )
        CG_CreateFx_UpdateLoopSound(v8, aliasList, p_origin);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
LABEL_25:
  if ( v3->activeExploderCount )
  {
    v25 = 8475176i64;
    do
    {
      v26 = *(unsigned int *)(&v3->inited + v25);
      if ( v3->scratchDataState[v26].effectType != 3 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2801, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[exploderIndex].effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[exploderIndex].effectType == CreateFxEffectType::Exploder") )
          __debugbreak();
        v3 = s_createFxTool;
      }
      v27 = &v3->scratchData[v26].oneShotFxDef.origin;
      v28 = v3->scratchData[v26].oneShotFxDef.aliasList;
      if ( v28 || (v28 = SND_TryFindAlias(v3->scratchData[v26].oneShotFxDef.effectSound.name), v3 = s_createFxTool, v28) )
      {
        head = v28->head;
        if ( head )
        {
          if ( (head->flags & 1) != 0 )
          {
            CG_CreateFx_UpdateLoopSound(v3->soundIndexUsage.effectToSoundIndexMap[v26], v28, v27);
            v3 = s_createFxTool;
          }
        }
      }
      ++v4;
      v25 += 4i64;
    }
    while ( v4 < v3->activeExploderCount );
  }
}

/*
==============
CG_CreateFx_AllocSoundIndex
==============
*/
void CG_CreateFx_AllocSoundIndex(const int storageIndex)
{
  CreateFxTool *v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned __int16 v4; 
  __int64 v5; 
  CreateFxEffectType effectType; 
  SndAliasList *aliasList; 
  const char *name; 
  CreateFxTool *v9; 
  unsigned __int16 i; 
  __int64 v11; 
  __int64 v12; 
  bool outIsAlwaysLoaded; 
  SndAliasList *outAlias; 

  v1 = s_createFxTool;
  v2 = storageIndex;
  v3 = storageIndex;
  if ( s_createFxTool->soundIndexUsage.effectToSoundIndexMap[storageIndex] != 0xFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3719, ASSERT_TYPE_ASSERT, "( s_createFxTool->soundIndexUsage.effectToSoundIndexMap[storageIndex] == CREATEFX_UNASSIGNED_SOUND_INDEX )", "Effect %d already has a sound index allocated", storageIndex) )
      __debugbreak();
    v1 = s_createFxTool;
  }
  v4 = -1;
  if ( (unsigned int)v2 >= 0x4000 )
  {
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3723, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchDataState ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchDataState )\n\t%i not in [0, %i)", v11, 0x4000) )
      __debugbreak();
    v1 = s_createFxTool;
  }
  v5 = v2;
  effectType = v1->scratchDataState[v2].effectType;
  if ( effectType == None )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3753, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_AllocSoundIndex should never be called on an effect with type 'None'") )
      __debugbreak();
    return;
  }
  if ( (unsigned int)(effectType - 1) > 2 )
    return;
  if ( (unsigned int)v2 >= 0x4000 )
  {
    LODWORD(v12) = 0x4000;
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3666, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchDataState ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchDataState )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
    v1 = s_createFxTool;
  }
  if ( v1->scratchDataState[v5].effectType != 1 )
  {
    if ( v1->scratchDataState[v5].effectType == 2 )
    {
      aliasList = v1->scratchData[v3].intervalSoundsDef.aliasList;
      outAlias = aliasList;
      name = v1->scratchData[v3].intervalSoundsDef.effectSound.name;
      goto LABEL_19;
    }
    if ( v1->scratchDataState[v5].effectType != 3 )
      return;
  }
  aliasList = v1->scratchData[v3].oneShotFxDef.aliasList;
  outAlias = aliasList;
  name = v1->scratchData[v3].oneShotFxDef.effectSound.name;
LABEL_19:
  if ( !aliasList && name )
  {
    SND_TryFindAliasForCaching(name, &outAlias, &outIsAlwaysLoaded);
    aliasList = outAlias;
  }
  if ( aliasList && aliasList->head && Com_IsSoundAliasLooping(aliasList) )
  {
    v9 = s_createFxTool;
    for ( i = 0; i < 0x400u; ++i )
    {
      if ( !s_createFxTool->soundIndexUsage.loopingSoundIndexInUse[i] )
      {
        v4 = i;
        goto LABEL_34;
      }
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3746, ASSERT_TYPE_ASSERT, "( newSoundIndex != CREATEFX_UNASSIGNED_SOUND_INDEX )", "Too many looping sounds!") )
      __debugbreak();
    v9 = s_createFxTool;
LABEL_34:
    v9->soundIndexUsage.loopingSoundIndexInUse[v4] = 1;
    if ( v4 != 0xFFFF )
    {
      v9->soundIndexUsage.effectToSoundIndexMap[v2] = v4;
      v9->soundIndexUsage.soundIndexToEffectMap[v4] = v2;
    }
  }
}

/*
==============
CG_CreateFx_AllocateCommandHeap
==============
*/

void __fastcall CG_CreateFx_AllocateCommandHeap(double _XMM0_8)
{
  void *v1; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 

  if ( s_createFxCommandHeapMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8682, ASSERT_TYPE_ASSERT, "(s_createFxCommandHeapMem == nullptr)", (const char *)&queryFormat, "s_createFxCommandHeapMem == nullptr") )
    __debugbreak();
  s_createFxCommandHeapMem = Mem_Virtual_Alloc(0xA00000ui64, "CreateFxCommandHeap", TRACK_DEBUG);
  v1 = s_createFxCommandHeapMem;
  if ( !s_createFxCommandHeapMem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8685, ASSERT_TYPE_ASSERT, "(s_createFxCommandHeapMem)", (const char *)&queryFormat, "s_createFxCommandHeapMem") )
      __debugbreak();
    v1 = s_createFxCommandHeapMem;
  }
  memset_0(v1, 0, 0xA00000ui64);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+48h+var_18], xmm0
  }
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v5) )
    __debugbreak();
  *(_QWORD *)&v6 = v1;
  *((_QWORD *)&v6 + 1) = 10485760i64;
  ntl::nxheap::shutdown(&s_createFxCommandHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_createFxCommandHeap.m_region);
  if ( s_createFxCommandHeap.m_data.m_buffer )
  {
    if ( s_createFxCommandHeap.m_data.m_buffer != s_createFxCommandHeap.m_allocator.m_data.m_buffer && s_createFxCommandHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_createFxCommandHeap.m_data.m_buffer = NULL;
    s_createFxCommandHeap.m_data.m_size = 0i64;
  }
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_createFxCommandHeap.m_allocator.m_data.m_buffer, xmm0
  }
  ntl::nxheap::shutdown(&s_createFxCommandHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_createFxCommandHeap.m_region);
  if ( s_createFxCommandHeap.m_data.m_buffer )
  {
    if ( s_createFxCommandHeap.m_data.m_buffer != s_createFxCommandHeap.m_allocator.m_data.m_buffer && s_createFxCommandHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_createFxCommandHeap.m_data.m_buffer = NULL;
    s_createFxCommandHeap.m_data.m_size = 0i64;
  }
  if ( s_createFxCommandHeap.m_allocator.m_data.m_size < 0xA00000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  *(_QWORD *)&v7 = s_createFxCommandHeap.m_allocator.m_data.m_buffer;
  *((_QWORD *)&v7 + 1) = 10485760i64;
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_createFxCommandHeap.baseclass_0.m_data.m_buffer, xmm0
  }
  if ( s_createFxCommandHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
    __debugbreak();
  ntl::nxheap_region::init(&s_createFxCommandHeap.m_region, s_createFxCommandHeap.m_data.m_buffer, s_createFxCommandHeap.m_data.m_size);
  if ( s_createFxCommandHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init(&s_createFxCommandHeap.m_heap, &s_createFxCommandHeap.m_region, DIR_BOTTOM_UP);
}

/*
==============
CG_CreateFx_AllocateEffectIndex
==============
*/
__int64 CG_CreateFx_AllocateEffectIndex()
{
  CreateFxTool *v0; 
  __int64 v1; 
  unsigned int v2; 
  __int64 result; 
  __int64 v4; 
  int freeEffectListIndex; 
  __int64 v6; 
  int v7; 

  v0 = s_createFxTool;
  if ( s_createFxTool->freeEffectListIndex >= 0x4000u )
  {
    v7 = 0x4000;
    freeEffectListIndex = s_createFxTool->freeEffectListIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1619, ASSERT_TYPE_ASSERT, "(unsigned)( s_createFxTool->freeEffectListIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->freeEffectList ) ) + 0 ) )", "s_createFxTool->freeEffectListIndex doesn't index ARRAY_COUNT( s_createFxTool->freeEffectList )\n\t%i not in [0, %i)", freeEffectListIndex, v7) )
      __debugbreak();
    v0 = s_createFxTool;
  }
  v1 = v0->freeEffectListIndex;
  v2 = v0->freeEffectList[v1];
  v0->freeEffectListIndex = v1 + 1;
  if ( v0->usedEffectTotal >= 0x4000u )
  {
    LODWORD(v6) = 0x4000;
    LODWORD(v4) = v0->usedEffectTotal;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1623, ASSERT_TYPE_ASSERT, "(unsigned)( s_createFxTool->usedEffectTotal ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->usedEffectList ) ) + 0 ) )", "s_createFxTool->usedEffectTotal doesn't index ARRAY_COUNT( s_createFxTool->usedEffectList )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
    v0 = s_createFxTool;
  }
  result = v2;
  v0->usedEffectList[v0->usedEffectTotal++] = v2;
  return result;
}

/*
==============
CG_CreateFx_BufferInput
==============
*/
bool CG_CreateFx_BufferInput(CreateFxEditBuffer *buffer, LocalClientNum_t localClientNum, int key, int down, unsigned int time, bool allowNumbers, bool allowLetters, bool allowPathSep)
{
  bool result; 
  int m_cursor; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int m_bufferCount; 
  bool v17; 
  int v18; 
  int v19; 
  char v20; 
  char v21; 
  bool v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  char *v27; 
  __int64 v28; 

  switch ( key )
  {
    case 117:
      if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
        goto LABEL_30;
      memset_0(buffer, 0, 0x400ui64);
      result = 1;
      *(_QWORD *)&buffer->m_bufferCount = 0i64;
      return result;
    case 127:
      return CreateFxEditBuffer::remove(buffer, K_BACKSPACE);
    case 134:
      m_cursor = buffer->m_cursor;
      if ( (m_cursor < 0 || m_cursor > buffer->m_bufferCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 797, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
        __debugbreak();
      v12 = buffer->m_cursor;
      if ( v12 <= 0 )
        return 0;
      v13 = v12 - 1;
      buffer->m_cursor = v13;
      if ( (v13 < 0 || v13 > buffer->m_bufferCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 801, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
        __debugbreak();
      return 1;
    case 135:
      v14 = buffer->m_cursor;
      if ( (v14 < 0 || v14 > buffer->m_bufferCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 784, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
        __debugbreak();
      v15 = buffer->m_cursor;
      m_bufferCount = buffer->m_bufferCount;
      if ( v15 >= m_bufferCount )
        return 0;
      v17 = v15 + 1 < 0;
      v18 = v15 + 1;
      buffer->m_cursor = v18;
      if ( !v17 && v18 <= m_bufferCount || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 788, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
        return 1;
      __debugbreak();
      return 1;
    case 149:
      return CreateFxEditBuffer::remove(buffer, K_DEL);
    case 152:
    case 169:
      if ( !buffer->m_cursor )
        return 0;
      result = 1;
      buffer->m_cursor = 0;
      return result;
    case 153:
    case 175:
      v19 = buffer->m_bufferCount;
      if ( buffer->m_cursor == v19 )
        return 0;
      buffer->m_cursor = v19;
      return 1;
    default:
LABEL_30:
      v20 = key;
      if ( (allowLetters || !allowNumbers) && ((_BYTE)key == 32 || (_BYTE)key == 45) )
      {
        v20 = 95;
      }
      else if ( (unsigned __int8)(key - 97) > 0x19u && (_BYTE)key != 95 )
      {
        v21 = 0;
        goto LABEL_39;
      }
      v21 = 1;
LABEL_39:
      v22 = (unsigned int)(key - 48) <= 9 || (unsigned __int8)(v20 - 45) <= 1u;
      if ( (!allowNumbers || !v22) && (!allowLetters || !v21) && (!allowPathSep || key != 47) )
        return 0;
      v23 = buffer->m_cursor;
      if ( (v23 < 0 || v23 > buffer->m_bufferCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 695, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
        __debugbreak();
      if ( buffer->m_bufferCount > 0x3FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 696, ASSERT_TYPE_ASSERT, "(m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM)", (const char *)&queryFormat, "m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM") )
        __debugbreak();
      v24 = buffer->m_bufferCount;
      if ( v24 >= 1023 )
        return 0;
      v25 = buffer->m_cursor;
      v26 = v24 - 1;
      if ( v24 > v25 )
      {
        v27 = &buffer->m_buffer[v26 + 1];
        do
        {
          --v26;
          *v27 = *(v27 - 1);
          --v27;
          v25 = buffer->m_cursor;
        }
        while ( v26 >= v25 );
      }
      buffer->m_buffer[v25] = v20;
      v28 = buffer->m_bufferCount;
      buffer->m_bufferCount = v28 + 1;
      buffer->m_buffer[v28 + 1] = 0;
      v17 = ++buffer->m_cursor < 0;
      if ( (v17 || buffer->m_cursor > buffer->m_bufferCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 711, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
        __debugbreak();
      return 1;
  }
}

/*
==============
CG_CreateFx_BuildDrawList
==============
*/
void CG_CreateFx_BuildDrawList(const vec3_t *drawOrigin, const vec3_t *drawForward)
{
  CreateFxTool *v14; 
  int v15; 
  int v19; 
  __int64 v20; 
  __int64 v27; 
  __int64 v28; 
  const CreateFxMapLayerDef *activeLayer; 
  __int64 v59; 
  cg_t *LocalClientGlobals; 
  char v83; 
  char v84; 
  __int64 v85; 
  __int64 skipEntity; 
  int v97; 
  vec3_t end; 
  trace_t results; 

  __asm
  {
    vmovaps [rsp+1B8h+var_A8], xmm13
    vmovaps [rsp+1B8h+var_B8], xmm14
  }
  _RBX = createfx_drawdist;
  _RSI = drawOrigin;
  v97 = (int)drawForward;
  if ( !createfx_drawdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  v14 = s_createFxTool;
  v15 = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm13, cs:__real@3f7851ec
    vmulss  xmm14, xmm0, xmm0
  }
  v19 = -1;
  s_createFxDrawCount = 0;
  if ( s_createFxTool->usedEffectTotal <= 0 )
    goto LABEL_41;
  v20 = 7078100i64;
  __asm
  {
    vmovaps [rsp+1B8h+var_58], xmm8
    vmovss  xmm8, dword ptr [rsp+1B8h+var_158]
    vmovaps [rsp+1B8h+var_68], xmm9
    vmovss  xmm9, dword ptr [rsp+1B8h+var_158]
    vmovaps [rsp+1B8h+var_78], xmm10
    vmovss  xmm10, dword ptr [rsp+1B8h+var_158]
    vmovaps [rsp+1B8h+var_88], xmm11
    vmovaps [rsp+1B8h+var_98], xmm12
    vmovss  xmm12, cs:__real@3f800000
    vmovaps [rsp+1B8h+var_C8], xmm15
    vmovss  xmm15, cs:__real@80000000
    vmovaps [rsp+1B8h+var_38], xmm6
    vmovaps [rsp+1B8h+var_48], xmm7
    vxorps  xmm11, xmm11, xmm11
  }
  do
  {
    v27 = *(int *)(&v14->inited + v20);
    v28 = (__int64)&v14->scratchDataState[v27];
    if ( *(_BYTE *)v28 || s_createFxFilter[v14->scratchDataState[v27].effectType] )
    {
      _R8 = (__int64)&v14->scratchData[v27];
      if ( v14->scratchDataState[v27].effectType == 1 || v14->scratchDataState[v27].effectType == 2 || v14->scratchDataState[v27].effectType == 3 || v14->scratchDataState[v27].effectType == Menu || v14->scratchDataState[v27].effectType == 5 )
      {
        if ( (CreateFxTool *)((char *)v14 + 104 * v27) != (CreateFxTool *)-4718800i64 )
        {
          __asm
          {
            vmovss  xmm10, dword ptr [r8]
            vmovss  xmm9, dword ptr [r8+4]
            vmovss  xmm8, dword ptr [r8+8]
          }
        }
      }
      else
      {
        LODWORD(skipEntity) = v14->scratchDataState[v27].effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", skipEntity) )
          __debugbreak();
        v14 = s_createFxTool;
      }
      if ( *(_BYTE *)v28 )
        goto LABEL_20;
      __asm
      {
        vsubss  xmm0, xmm9, dword ptr [rsi+4]
        vsubss  xmm2, xmm10, dword ptr [rsi]
        vsubss  xmm3, xmm8, dword ptr [rsi+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm14
      }
      if ( !*(_BYTE *)v28 )
      {
LABEL_20:
        __asm
        {
          vsubss  xmm7, xmm10, dword ptr [rsi]
          vucomiss xmm7, xmm11
          vsubss  xmm4, xmm9, dword ptr [rsi+4]
          vsubss  xmm6, xmm8, dword ptr [rsi+8]
        }
        if ( *(_BYTE *)v28 )
          goto LABEL_24;
        __asm { vucomiss xmm4, xmm11 }
        if ( *(_BYTE *)v28 )
          goto LABEL_24;
        __asm { vucomiss xmm6, xmm11 }
        if ( *(_BYTE *)v28 )
        {
LABEL_24:
          __asm
          {
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm7, xmm7
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm15
            vblendvps xmm0, xmm3, xmm12, xmm0
            vdivss  xmm5, xmm12, xmm0
            vmulss  xmm0, xmm4, xmm5
            vmulss  xmm3, xmm0, dword ptr [rax+4]
            vmulss  xmm1, xmm7, xmm5
            vmulss  xmm2, xmm1, dword ptr [rax]
            vmulss  xmm0, xmm6, xmm5
            vmulss  xmm1, xmm0, dword ptr [rax+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm6, xmm4, xmm1
          }
        }
        else
        {
          __asm { vmovaps xmm6, xmm12 }
        }
        if ( v14->scratchDataState[v27].effectType == None )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5758, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None") )
            __debugbreak();
          v14 = s_createFxTool;
        }
        activeLayer = v14->activeLayer;
        v59 = 5 * v27 + 802845;
        if ( *((const CreateFxMapLayerDef **)&v14->inited + v59) == activeLayer )
        {
          __asm { vcomiss xmm6, xmm13 }
          if ( *((_QWORD *)&v14->inited + v59) > (unsigned __int64)activeLayer )
          {
            __asm { vmovaps xmm13, xmm6 }
            v19 = v27;
          }
        }
        *(_DWORD *)(v28 + 4) = *(_BYTE *)v28 != 0;
        LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rsi+4]
          vsubss  xmm5, xmm0, xmm10
          vmovss  xmm0, dword ptr [rsi+8]
          vsubss  xmm6, xmm1, xmm9
          vsubss  xmm4, xmm0, xmm8
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm15
          vblendvps xmm0, xmm1, xmm12, xmm0
          vdivss  xmm2, xmm12, xmm0
          vmulss  xmm0, xmm5, xmm2
          vaddss  xmm1, xmm0, xmm10
          vmulss  xmm3, xmm4, xmm2
          vmovss  dword ptr [rsp+1B8h+end], xmm1
          vmulss  xmm2, xmm6, xmm2
          vaddss  xmm1, xmm8, xmm3
          vaddss  xmm0, xmm2, xmm9
          vmovss  dword ptr [rsp+1B8h+end+8], xmm1
          vmovss  dword ptr [rsp+1B8h+end+4], xmm0
        }
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_CLIENT_FIRST, &results, _RSI, &end, &bounds_origin, LocalClientGlobals->predictedPlayerState.clientNum, 0, 41969969, 0, NULL, All);
        __asm
        {
          vmovss  xmm0, [rsp+1B8h+results.fraction]
          vucomiss xmm0, xmm12
        }
        if ( v83 )
          v84 = 0;
        else
          v84 = 1;
        v85 = s_createFxDrawCount;
        *(_BYTE *)(v28 + 1) = v84;
        s_createFxDrawList[v85] = v27;
        v14 = s_createFxTool;
        s_createFxDrawCount = v85 + 1;
      }
    }
    ++v15;
    v20 += 4i64;
  }
  while ( v15 < v14->usedEffectTotal );
  __asm
  {
    vmovaps xmm15, [rsp+1B8h+var_C8]
    vmovaps xmm12, [rsp+1B8h+var_98]
    vmovaps xmm11, [rsp+1B8h+var_88]
    vmovaps xmm10, [rsp+1B8h+var_78]
    vmovaps xmm9, [rsp+1B8h+var_68]
    vmovaps xmm8, [rsp+1B8h+var_58]
    vmovaps xmm7, [rsp+1B8h+var_48]
    vmovaps xmm6, [rsp+1B8h+var_38]
  }
  if ( v19 <= -1 )
  {
LABEL_41:
    v14->highlightedEffectIndex = -1;
  }
  else
  {
    if ( !*(_DWORD *)v14->scratchDataState[v19].visualState )
      *(_DWORD *)v14->scratchDataState[v19].visualState = 2;
    v14->highlightedEffectIndex = v19;
  }
  __asm
  {
    vmovaps xmm13, [rsp+1B8h+var_A8]
    vmovaps xmm14, [rsp+1B8h+var_B8]
  }
}

/*
==============
CG_CreateFx_CalculateClipboardEntityOrigin
==============
*/
void CG_CreateFx_CalculateClipboardEntityOrigin(const vec3_t *originalOrigin, vec3_t *outOrigin)
{
  vec3_t point; 
  vec3_t dst; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  _RBX = outOrigin;
  _RDX = s_createFxTool;
  if ( s_createFxTool->clipboard.effectTotal <= 1 )
  {
    __asm { vmovss  dword ptr [rbx], xmm0 }
    _RBX->v[1] = originalOrigin->v[1];
    __asm { vmovss  xmm0, dword ptr [rcx+8] }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr [rdx+240070h]
      vmovss  xmm1, dword ptr [rcx+4]
      vsubss  xmm2, xmm1, dword ptr [rdx+240074h]
      vmovss  dword ptr [rsp+58h+point], xmm0
      vmovss  xmm0, dword ptr [rcx+8]
      vsubss  xmm1, xmm0, dword ptr [rdx+240078h]
      vmovss  dword ptr [rsp+58h+point+8], xmm1
      vmovss  dword ptr [rsp+58h+point+4], xmm2
      vmovss  xmm3, dword ptr [rdx+240094h]; degrees
    }
    RotatePointAroundVector(&dst, &VEC3_UP, &point, *(float *)&_XMM3);
    _RDX = s_createFxTool;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+dst]
      vmovss  xmm2, dword ptr [rsp+58h+dst+8]
      vaddss  xmm1, xmm0, dword ptr [rdx+240070h]
      vmovss  xmm0, dword ptr [rsp+58h+dst+4]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdx+240074h]
      vmovss  dword ptr [rbx+4], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdx+240078h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm1, xmm0, dword ptr [rdx+240088h]
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm2, dword ptr [rdx+24008Ch]
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm1, dword ptr [rdx+240090h]
    vaddss  xmm0, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
CG_CreateFx_CalculateSelectionCenter
==============
*/

void __fastcall CG_CreateFx_CalculateSelectionCenter(vec3_t *outCenter, double _XMM1_8)
{
  CreateFxTool *v5; 
  int v7; 
  __int64 v11; 
  vec3_t outOrigin; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  v5 = s_createFxTool;
  _RSI = outCenter;
  if ( s_createFxTool->selectedEffectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1681, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectedEffectTotal > 0)", (const char *)&queryFormat, "s_createFxTool->selectedEffectTotal > 0") )
      __debugbreak();
    v5 = s_createFxTool;
  }
  v7 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  if ( v5->selectedEffectTotal > 0 )
  {
    v11 = 7209180i64;
    do
    {
      CG_CreateFx_GetScratchEffectOrigin(*(_DWORD *)(&v5->inited + v11), &outOrigin);
      v5 = s_createFxTool;
      v11 += 4i64;
      __asm
      {
        vaddss  xmm6, xmm6, dword ptr [rsp+88h+outOrigin]
        vaddss  xmm7, xmm7, dword ptr [rsp+88h+outOrigin+4]
        vaddss  xmm8, xmm8, dword ptr [rsp+88h+outOrigin+8]
      }
      ++v7;
    }
    while ( v7 < s_createFxTool->selectedEffectTotal );
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rax+6E00D8h]
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsi], xmm1
    vmulss  xmm1, xmm8, xmm2
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rsi+8], xmm1
    vmovss  dword ptr [rsi+4], xmm0
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
CG_CreateFx_ClearActiveExploderIndex
==============
*/
void CG_CreateFx_ClearActiveExploderIndex(const int storageIndex)
{
  CreateFxTool *v1; 
  __int16 v3; 
  int v4; 
  int *activeExploderIndices; 
  int *v6; 
  int activeExploderCount; 

  v1 = s_createFxTool;
  if ( s_createFxTool->activeExploderCount )
  {
    v3 = 0;
    v4 = 0;
    activeExploderIndices = s_createFxTool->activeExploderIndices;
    v6 = s_createFxTool->activeExploderIndices;
    do
    {
      if ( *v6 == storageIndex )
        ++v3;
      else
        *activeExploderIndices++ = *v6;
      activeExploderCount = v1->activeExploderCount;
      ++v4;
      ++v6;
    }
    while ( v4 < activeExploderCount );
    v1->activeExploderCount = activeExploderCount - v3;
  }
}

/*
==============
CG_CreateFx_ClearEffectsData
==============
*/
__int64 CG_CreateFx_ClearEffectsData()
{
  CreateFxTool *v0; 

  Com_Printf_NoFilter("[CreateFx] ClearData\n");
  while ( s_createFxTool->undoCount.m_count )
    CG_CreateFx_DiscardUndoSequence();
  CG_CreateFx_ClearRedoStack();
  v0 = s_createFxTool;
  memset_0(&s_createFxTool->clipboard, 0, 0x480090ui64);
  memset_0(v0->scratchData, 0, sizeof(v0->scratchData));
  memset_0(v0->scratchDataState, 0, sizeof(v0->scratchDataState));
  v0->layerParseCount = 0;
  v0->layerListTotal = 0;
  memset_0(v0->layerList, 0, sizeof(v0->layerList));
  memset_0(v0->missingSoundBuffer, 0, sizeof(v0->missingSoundBuffer));
  memset_0(v0->missingSoundNames, 0, sizeof(v0->missingSoundNames));
  v0->missingSoundNext = 0i64;
  v0->missingSoundCount = 0;
  *(_DWORD *)&v0->needToExport = 0;
  v0->lastExportInProgress = 0;
  *(_QWORD *)&v0->lastExportTime = 0i64;
  v0->nextProbeTime = 0;
  v0->exportLayerStackCount = 0;
  return CG_CreateFx_ResetEffectsLists();
}

/*
==============
CG_CreateFx_ClearRedoStack
==============
*/
CreateFxTool *CG_CreateFx_ClearRedoStack()
{
  CreateFxTool *result; 
  CreateFxTool *v1; 
  unsigned int v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  CreateFxTool *v5; 
  CreateFxCommand *v6; 

  for ( result = s_createFxTool; s_createFxTool->redoCount.m_count; result = s_createFxTool )
  {
    v1 = s_createFxTool;
    if ( !s_createFxTool->redoCount.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
      __debugbreak();
    v2 = --v1->redoCount.m_top;
    --v1->redoCount.m_count;
    v3 = v1->redoCount.pool[v2 & 0x3FFF];
    if ( v3 )
    {
      v4 = v3;
      do
      {
        v5 = s_createFxTool;
        if ( !s_createFxTool->redoBuffer.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        --v5->redoBuffer.m_top;
        --v5->redoBuffer.m_count;
        v6 = v5->redoBuffer.pool[LOWORD(v5->redoBuffer.m_top)];
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5451, ASSERT_TYPE_ASSERT, "(redoCommand)", (const char *)&queryFormat, "redoCommand") )
          __debugbreak();
        ntl::nxheap::free(&s_createFxCommandHeap.m_heap, v6);
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}

/*
==============
CG_CreateFx_ClearSelection
==============
*/
CreateFxTool *CG_CreateFx_ClearSelection()
{
  CreateFxTool *result; 
  const ObfuscateErrorText *selectedEffectList; 
  __int64 v2; 
  __int64 selectedEffectTotal; 
  int v4; 
  __int64 v5; 
  CreateFxMenuPage *v6; 
  __int64 v7; 
  __int64 v8; 

  result = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    result = s_createFxTool;
  }
  if ( result->selectedEffectTotal > 0 )
  {
    selectedEffectList = &queryFormat;
    do
    {
      v2 = result->selectedEffectList[0];
      if ( (unsigned int)v2 >= 0x4000 )
      {
        LODWORD(v8) = 0x4000;
        LODWORD(v7) = result->selectedEffectList[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2621, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
        result = s_createFxTool;
        selectedEffectList = &queryFormat;
      }
      if ( result->selectedEffectTotal >= 0x4000u )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2622, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectedEffectTotal < ( sizeof( *array_counter( s_createFxTool->selectedEffectList ) ) + 0 ))", (const char *)&queryFormat, "s_createFxTool->selectedEffectTotal < ARRAY_COUNT( s_createFxTool->selectedEffectList )") )
          __debugbreak();
        result = s_createFxTool;
      }
      if ( result->editBuffer.effectTotal > 0 )
      {
        s_interruptCommandActive = 1;
        CG_CreateFx_OnEditEnd();
        result = s_createFxTool;
      }
      selectedEffectTotal = (unsigned int)result->selectedEffectTotal;
      v4 = 0;
      v5 = 0i64;
      if ( (int)selectedEffectTotal > 0 )
      {
        selectedEffectList = (const ObfuscateErrorText *)result->selectedEffectList;
        while ( LODWORD(selectedEffectList->fmt) != (_DWORD)v2 )
        {
          ++v4;
          ++v5;
          selectedEffectList = (const ObfuscateErrorText *)((char *)selectedEffectList + 4);
          if ( v4 >= (int)selectedEffectTotal )
            goto LABEL_21;
        }
        result->scratchDataState[v2].selected = 0;
        result->selectedEffectList[v5] = result->freeEffectList[result->selectedEffectTotal + 0x4000];
        selectedEffectList = (const ObfuscateErrorText *)result->selectedEffectTotal;
        result->freeEffectList[(_QWORD)selectedEffectList + 0x4000] = -1;
        selectedEffectTotal = (unsigned int)--result->selectedEffectTotal;
      }
LABEL_21:
      v6 = s_menuPath[s_menuPathCount];
      if ( (_DWORD)selectedEffectTotal )
      {
        if ( (int)selectedEffectTotal > 0 )
        {
          CG_CreateFx_EvaluateSelectionHomogeneity(selectedEffectList, s_menuPathCount, selectedEffectTotal, v5);
          if ( v6->menuName != HUD_OBJECT_PROPERTIES )
          {
            if ( s_menuPathCount + 1 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1989, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount + 1 < CREATEFX_MAX_MENU_DEPTH ) )", "ERROR: Create FX menu history is to long") )
              __debugbreak();
            s_menuPath[++s_menuPathCount] = &s_menuPages[1];
          }
          result = s_createFxTool;
        }
      }
      else if ( v6->menuName == HUD_OBJECT_PROPERTIES )
      {
        s_menuFocus = WORLD;
        if ( s_menuPathCount <= 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
            __debugbreak();
          result = s_createFxTool;
        }
        --s_menuPathCount;
      }
      selectedEffectList = &queryFormat;
    }
    while ( result->selectedEffectTotal > 0 );
  }
  return result;
}

/*
==============
CG_CreateFx_CopySoundEntityOrientation
==============
*/
void CG_CreateFx_CopySoundEntityOrientation(const int clientSoundEntIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  __int64 v3; 
  CreateFxTool *v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = clientSoundEntIndex;
  v5 = s_createFxTool;
  v7 = s_createFxTool->soundIndexUsage.soundIndexToEffectMap[v3];
  if ( (_DWORD)v7 == -1 || (v8 = v7, v9 = s_createFxTool->soundIndexUsage.soundIndexToEffectMap[v3], s_createFxTool->scratchDataState[v7].effectType == None) )
  {
    *(_QWORD *)origin_out->v = 0i64;
    origin_out->v[2] = 0.0;
    AxisClear(axis_out);
  }
  else
  {
    if ( (unsigned int)v7 >= 0x4000 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2826, ASSERT_TYPE_ASSERT, "(unsigned)( effectIndex ) < (unsigned)( CREATEFX_MAX_FX )", "effectIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", s_createFxTool->soundIndexUsage.soundIndexToEffectMap[v3], 0x4000) )
        __debugbreak();
      v5 = s_createFxTool;
    }
    v10 = v9;
    switch ( v5->scratchDataState[v8].effectType )
    {
      case 1:
      case 2:
      case 3:
        origin_out->v[0] = v5->scratchData[v10].oneShotFxDef.origin.v[0];
        origin_out->v[1] = v5->scratchData[v10].oneShotFxDef.origin.v[1];
        origin_out->v[2] = v5->scratchData[v10].oneShotFxDef.origin.v[2];
        AnglesToAxis(&v5->scratchData[v10].oneShotFxDef.angles, axis_out);
        break;
      case 4:
        Com_PrintWarning(0, "WARNING: CopySoundEntityOrientation request for IntervalSound\n", v10 * 104);
        break;
      case 5:
        Com_PrintWarning(0, "WARNING: CopySoundEntityOrientation request for ReactiveEnt\n", v10 * 104);
        break;
    }
  }
}

/*
==============
CG_CreateFx_CopyToClipboard
==============
*/

void __fastcall CG_CreateFx_CopyToClipboard(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  int v10; 
  __int64 v14; 
  cg_t *LocalClientGlobals; 
  __int64 v37; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = s_createFxTool;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  CG_CreateFx_SaveSelectionToBuffer(&_RBX->clipboard);
  if ( _RBX->clipboard.effectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5572, ASSERT_TYPE_ASSERT, "(s_createFxTool->clipboard.effectTotal > 0)", (const char *)&queryFormat, "s_createFxTool->clipboard.effectTotal > 0") )
      __debugbreak();
    _RBX = s_createFxTool;
  }
  v10 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  if ( _RBX->clipboard.effectTotal > 0 )
  {
    v14 = 1703960i64;
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm9
      vmovss  xmm9, [rsp+98h+arg_8]
      vmovaps [rsp+98h+var_58], xmm10
      vmovss  xmm10, [rsp+98h+arg_8]
      vmovaps [rsp+98h+var_68], xmm11
      vmovss  xmm11, [rsp+98h+arg_8]
    }
    do
    {
      _RDX = (__int64)&_RBX->clipboard + 104 * v10;
      if ( *(_DWORD *)(&_RBX->inited + v14) == 1 || *(_DWORD *)(&_RBX->inited + v14) == 2 || *(_DWORD *)(&_RBX->inited + v14) == 3 || *(_DWORD *)(&_RBX->inited + v14) == 4 || *(_DWORD *)(&_RBX->inited + v14) == 5 )
      {
        if ( (CreateFxTool *)((char *)_RBX + 104 * v10) != (CreateFxTool *)-16i64 )
        {
          __asm
          {
            vmovss  xmm11, dword ptr [rdx]
            vmovss  xmm9, dword ptr [rdx+4]
            vmovss  xmm10, dword ptr [rdx+8]
          }
        }
      }
      else
      {
        LODWORD(v37) = *(_DWORD *)(&_RBX->inited + v14);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v37) )
          __debugbreak();
        _RBX = s_createFxTool;
      }
      ++v10;
      v14 += 40i64;
      __asm
      {
        vaddss  xmm6, xmm6, xmm11
        vaddss  xmm7, xmm7, xmm9
        vaddss  xmm8, xmm8, xmm10
      }
    }
    while ( v10 < _RBX->clipboard.effectTotal );
    __asm
    {
      vmovaps xmm11, [rsp+98h+var_68]
      vmovaps xmm10, [rsp+98h+var_58]
      vmovaps xmm9, [rsp+98h+var_48]
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+240010h]
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbx+240070h], xmm1
    vmulss  xmm1, xmm8, xmm2
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rbx+240078h], xmm1
    vmovss  dword ptr [rbx+240074h], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  s_createFxTool->clipboard.vPlayerAngles = LocalClientGlobals->predictedPlayerState.viewangles;
}

/*
==============
CG_CreateFx_CreateDevGui
==============
*/
void CG_CreateFx_CreateDevGui(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 
  int cmdsize; 
  int v5; 
  __int64 i; 

  v1 = localClientNum;
  if ( !s_createFxDevGuiCreated )
  {
    Cmd_AddCommandInternal("cfxToolEnter", CG_CreateFx_Enter_f, &stru_150F37100);
    Cmd_AddCommandInternal("cfxToolExit", CG_CreateFx_Exit_f, &stru_150F37130);
    Cmd_AddCommandInternal("cfxToolReimport", CG_CreateFx_Reimport_f, &stru_150F37160);
    Cmd_AddCommandInternal("cfxToolExport", CG_CreateFx_Export_f, &stru_150F37190);
    Cmd_AddCommandInternal("cfxToolExportAll", CG_CreateFx_ExportAll_f, &stru_150F371C0);
    Cmd_AddCommandInternal("cfxToolRootNew", CG_CreateFx_RootNew_f, &stru_150F371F0);
    Cmd_AddCommandInternal("cfxToolRootLoad", CG_CreateFx_RootLoad_f, &stru_150F37220);
    v2 = v1;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v3 = truncate_cast<int,unsigned __int64>(0x15ui64);
    cmdsize = s_cmd_superUser_textArray[v2].cmdsize;
    v5 = v3 + 1;
    if ( cmdsize + v3 + 1 <= s_cmd_superUser_textArray[v2].maxsize )
    {
      for ( i = cmdsize - 1; i >= 0; --i )
        s_cmd_superUser_textArray[v2].data[v5 + i] = s_cmd_superUser_textArray[v2].data[i];
      memcpy_0(s_cmd_superUser_textArray[v2].data, "exec devgui_createfx\n", v5 - 1);
      s_cmd_superUser_textArray[v2].data[v5 - 1] = 10;
      s_cmd_superUser_textArray[v2].cmdsize += v5;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    s_createFxDevGuiCreated = 1;
  }
}

/*
==============
CG_CreateFx_DeactivateExploder
==============
*/
void CG_CreateFx_DeactivateExploder(const scr_string_t exploderName, const bool kill)
{
  CreateFxTool *v2; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int16 v8; 
  int v9; 
  int *activeExploderIndices; 
  int *v11; 
  int activeExploderCount; 

  v2 = s_createFxTool;
  v5 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v6 = 7078100i64;
    do
    {
      v7 = *(int *)(&v2->inited + v6);
      if ( v2->scratchDataState[v7].effectType == 3 && v2->scratchData[v7].explodersDef.client.name == exploderName )
      {
        CG_CreateFX_StopFX(v7, kill);
        v2 = s_createFxTool;
        if ( s_createFxTool->activeExploderCount )
        {
          v8 = 0;
          v9 = 0;
          activeExploderIndices = s_createFxTool->activeExploderIndices;
          v11 = s_createFxTool->activeExploderIndices;
          do
          {
            if ( *v11 == (_DWORD)v7 )
              ++v8;
            else
              *activeExploderIndices++ = *v11;
            activeExploderCount = v2->activeExploderCount;
            ++v9;
            ++v11;
          }
          while ( v9 < activeExploderCount );
          v2->activeExploderCount = activeExploderCount - v8;
        }
      }
      ++v5;
      v6 += 4i64;
    }
    while ( v5 < v2->usedEffectTotal );
  }
}

/*
==============
CG_CreateFx_DeleteEffect
==============
*/
void CG_CreateFx_DeleteEffect(const int storageIndex)
{
  unsigned __int64 v1; 
  CreateFxEffectType effectType; 
  unsigned __int64 v3; 
  bool *v4; 
  scr_string_t v5; 
  scr_string_t v6; 
  scr_string_t v7; 
  CreateFxTool *v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int *usedEffectList; 
  __int64 usedEffectTotal; 
  __int64 freeEffectListIndex; 

  v1 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1751, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
  }
  CG_CreateFx_StopEffect(v1);
  CG_CreateFx_DeselectFx(v1);
  effectType = s_createFxTool->scratchDataState[v1].effectType;
  v3 = v1;
  v4 = &s_createFxTool->inited + 104 * v1;
  if ( effectType == 3 )
    CG_CreateFx_ClearActiveExploderIndex(v1);
  CG_CreateFx_FreeSoundIndex(v1);
  if ( effectType == 3 )
  {
    v5 = *((_DWORD *)v4 + 1179714);
    if ( v5 )
      SL_RemoveRefToString(v5);
    v6 = *((_DWORD *)v4 + 1179723);
    if ( v6 )
      SL_RemoveRefToString(v6);
    v7 = *((_DWORD *)v4 + 1179724);
    if ( v7 )
      SL_RemoveRefToString(v7);
  }
  v8 = s_createFxTool;
  *(_QWORD *)&s_createFxTool->scratchDataState[v3].selected = 0i64;
  *(_QWORD *)&v8->scratchDataState[v3].effectType = 0i64;
  v8->scratchDataState[v3].aliasString = NULL;
  v8->scratchDataState[v3].layer = NULL;
  *(_QWORD *)&v8->scratchDataState[v3].effectHandle = 0i64;
  memset_0(&v8->scratchData[v1], 0, sizeof(v8->scratchData[v1]));
  v9 = 0;
  v10 = v8->usedEffectTotal - 1i64;
  if ( v10 > 0 )
  {
    v11 = 0i64;
    usedEffectList = v8->usedEffectList;
    while ( *usedEffectList != (_DWORD)v1 )
    {
      ++v9;
      ++v11;
      ++usedEffectList;
      if ( v11 >= v10 )
        goto LABEL_21;
    }
    v8->usedEffectList[v9] = v8->usedEffectList[v10];
  }
LABEL_21:
  usedEffectTotal = v8->usedEffectTotal;
  v8->usedEffectTotal = usedEffectTotal - 1;
  *((_DWORD *)&v8->scratchDataState[0x4000].selected + usedEffectTotal) = -1;
  freeEffectListIndex = v8->freeEffectListIndex;
  v8->freeEffectListIndex = freeEffectListIndex - 1;
  v8->usedEffectList[freeEffectListIndex + 0x4000] = v1;
}

/*
==============
CG_CreateFx_DeleteSelection
==============
*/
void CG_CreateFx_DeleteSelection()
{
  CreateFxTool *v0; 
  unsigned __int16 selectedEffectTotal; 
  __int64 v2; 
  CreateFxTool *v4; 
  bool *v5; 

  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v0 = s_createFxTool;
  }
  selectedEffectTotal = v0->selectedEffectTotal;
  if ( v0->selectedEffectTotal > 0 )
  {
    do
    {
      v2 = v0->selectedEffectList[0];
      CG_CreateFx_ClearRedoStack();
      while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x80 )
        CG_CreateFx_DiscardUndoSequence();
      _RBX = (CreateFxCommand *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x80ui64, 4ui64, 1);
      if ( !_RBX )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
      v4 = s_createFxTool;
      _RBX->__vftable = (CreateFxCommand_vtbl *)&CreateFxDeleteCommand::`vftable';
      HIDWORD(_RBX[1].__vftable) = 0;
      LODWORD(_RBX[1].__vftable) = v2;
      v5 = &v4->inited + 40 * v2;
      if ( !*((_DWORD *)v5 + 1605686) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1335, ASSERT_TYPE_ASSERT, "(effectStateData.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectStateData.effectType != CreateFxEffectType::None") )
        __debugbreak();
      HIDWORD(_RBX[1].__vftable) = *((_DWORD *)v5 + 1605686);
      _RBX[15].__vftable = *(CreateFxCommand_vtbl **)(v5 + 6422760);
      _RAX = s_createFxTool;
      _RCX = 104 * v2;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+rax+4800D0h]
        vmovups ymmword ptr [rbx+10h], ymm0
        vmovups ymm1, ymmword ptr [rcx+rax+4800F0h]
        vmovups ymmword ptr [rbx+30h], ymm1
        vmovups ymm0, ymmword ptr [rcx+rax+480110h]
        vmovups ymmword ptr [rbx+50h], ymm0
        vmovsd  xmm1, qword ptr [rcx+rax+480130h]
        vmovsd  qword ptr [rbx+70h], xmm1
      }
      _RBX->Do(_RBX);
      CG_CreateFx_PushUndoCommand(_RBX);
      v0 = s_createFxTool;
    }
    while ( s_createFxTool->selectedEffectTotal > 0 );
  }
  CG_CreateFx_PushUndoSequence(selectedEffectTotal);
}

/*
==============
CG_CreateFx_DeselectFx
==============
*/
void CG_CreateFx_DeselectFx(const int storageIndex, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; 
  CreateFxTool *v5; 
  __int64 selectedEffectTotal; 
  __int64 v7; 
  int *selectedEffectList; 
  int v9; 
  CreateFxMenuPage *v10; 

  v4 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2621, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  v5 = s_createFxTool;
  if ( s_createFxTool->selectedEffectTotal >= 0x4000u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2622, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectedEffectTotal < ( sizeof( *array_counter( s_createFxTool->selectedEffectList ) ) + 0 ))", (const char *)&queryFormat, "s_createFxTool->selectedEffectTotal < ARRAY_COUNT( s_createFxTool->selectedEffectList )") )
      __debugbreak();
    v5 = s_createFxTool;
  }
  if ( v5->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v5 = s_createFxTool;
  }
  selectedEffectTotal = (unsigned int)v5->selectedEffectTotal;
  v7 = 0i64;
  if ( (int)selectedEffectTotal > 0 )
  {
    selectedEffectList = v5->selectedEffectList;
    while ( *selectedEffectList != (_DWORD)v4 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++selectedEffectList;
      if ( (int)v7 >= (int)selectedEffectTotal )
        goto LABEL_16;
    }
    v5->scratchDataState[v4].selected = 0;
    v5->selectedEffectList[(int)v7] = v5->freeEffectList[v5->selectedEffectTotal + 0x4000];
    v5->freeEffectList[v5->selectedEffectTotal-- + 0x4000] = -1;
    selectedEffectTotal = (unsigned int)v5->selectedEffectTotal;
  }
LABEL_16:
  v9 = s_menuPathCount;
  v10 = s_menuPath[s_menuPathCount];
  if ( (_DWORD)selectedEffectTotal )
  {
    if ( (int)selectedEffectTotal > 0 )
    {
      CG_CreateFx_EvaluateSelectionHomogeneity(selectedEffectTotal, s_menuPathCount, v7, a4);
      if ( v10->menuName != HUD_OBJECT_PROPERTIES )
        CG_CreateFx_GotoMenu(HUD_OBJECT_PROPERTIES);
    }
  }
  else if ( v10->menuName == HUD_OBJECT_PROPERTIES )
  {
    s_menuFocus = WORLD;
    if ( s_menuPathCount <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
        __debugbreak();
      v9 = s_menuPathCount;
    }
    s_menuPathCount = v9 - 1;
  }
}

/*
==============
CG_CreateFx_DestroyDevGui
==============
*/
void CG_CreateFx_DestroyDevGui(void)
{
  CreateFxTool *v0; 
  bool v1; 

  Cmd_RemoveCommand("cfxToolEnter");
  Cmd_RemoveCommand("cfxToolExit");
  Cmd_RemoveCommand("cfxToolExport");
  Cmd_RemoveCommand("cfxToolExportAll");
  Cmd_RemoveCommand("cfxToolRootNew");
  Cmd_RemoveCommand("cfxToolRootLoad");
  if ( s_createFxTool && s_createFxTool->inited )
  {
    Com_Printf_NoFilter("[CreateFx] Shutdown\n");
    v0 = s_createFxTool;
    v1 = s_createFxTool && s_createFxTool->hasBeenEnabled;
    s_resumeCreateFxAfterRestart = v1;
    *(_WORD *)&s_createFxTool->inited = 0;
    v0->hasBeenEnabled = 0;
    CG_CreateFx_FreeStrings();
    if ( s_createFxCommandHeapMem )
    {
      Mem_Virtual_Free(s_createFxCommandHeapMem);
      s_createFxCommandHeapMem = NULL;
    }
    if ( s_createFxTool )
    {
      Mem_Virtual_Free(s_createFxTool);
      s_createFxTool = NULL;
    }
  }
  s_createFxDevGuiCreated = 0;
}

/*
==============
CG_CreateFx_DiscardUndoSequence
==============
*/
void CG_CreateFx_DiscardUndoSequence()
{
  CreateFxTool *v0; 
  unsigned int m_bottom; 
  unsigned __int16 i; 
  CreateFxTool *v3; 
  unsigned int v4; 
  CreateFxCommand *v5; 

  if ( !s_createFxTool->undoCount.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5504, ASSERT_TYPE_ASSERT, "(!s_createFxTool->undoCount.empty())", (const char *)&queryFormat, "!s_createFxTool->undoCount.empty()") )
    __debugbreak();
  v0 = s_createFxTool;
  if ( !s_createFxTool->undoCount.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 493, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  m_bottom = v0->undoCount.m_bottom;
  --v0->undoCount.m_count;
  v0->undoCount.m_bottom = m_bottom + 1;
  for ( i = v0->undoCount.pool[m_bottom & 0x3FFF]; i; --i )
  {
    v3 = s_createFxTool;
    if ( !s_createFxTool->undoBuffer.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 493, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
      __debugbreak();
    v4 = v3->undoBuffer.m_bottom;
    --v3->undoBuffer.m_count;
    v3->undoBuffer.m_bottom = v4 + 1;
    v5 = v3->undoBuffer.pool[(unsigned __int16)v4];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5510, ASSERT_TYPE_ASSERT, "(oldestCommand)", (const char *)&queryFormat, "oldestCommand") )
      __debugbreak();
    ntl::nxheap::free(&s_createFxCommandHeap.m_heap, v5);
  }
}

/*
==============
CG_CreateFx_Draw3DEmitter
==============
*/
void CG_CreateFx_Draw3DEmitter(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *origin, const vec3_t *viewPos, float maxDistance, const char *text, CreateFxEffectType type, bool isSpatiallyActive, const int rootIndex)
{
  bool v26; 
  bool v27; 
  bool v28; 
  char v29; 
  char v30; 
  ClientRootDef *v43; 
  const char *v45; 
  _BYTE v48[24]; 
  int v49; 
  vec4_t color; 
  vec3_t end; 

  __asm
  {
    vmovaps [rsp+0B0h+var_48+8], xmm6
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm3, xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm2, xmm1, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm4, xmm0, dword ptr [r8+8]
  }
  _RBX = origin;
  __asm
  {
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
    vcomiss xmm6, [rbp+2Fh+maxDistance]
  }
  v49 = rootIndex;
  if ( (unsigned __int64)v48 == _security_cookie )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( (unsigned __int64)v48 != _security_cookie )
    {
      v26 = !text || !*text;
      v27 = s_createFxTool && s_createFxTool->enabled;
      v28 = isSpatiallyActive && !v27;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(createfx_drawdist);
      __asm { vcomiss xmm0, xmm6 }
      if ( v27 )
      {
        __asm { vmovups xmm0, cs:__xmm@3f0000003f0000003f0000003f000000 }
      }
      else if ( v26 )
      {
        __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
      }
      else
      {
        _RCX = 6i64 * (int)type;
        _RAX = s_effectTypeColors;
        if ( v28 )
          __asm { vmovups xmm0, xmmword ptr [rax+rcx*8+10h] }
        else
          __asm { vmovups xmm0, xmmword ptr [rax+rcx*8+20h] }
      }
      __asm { vmovups xmmword ptr [rbp+2Fh+color], xmm0 }
      if ( v29 | v30 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  xmm1, dword ptr [rbx+4]
          vmovss  dword ptr [rbp+2Fh+end], xmm0
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rbp+2Fh+end+8], xmm0
          vmovss  dword ptr [rbp+2Fh+end+4], xmm1
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal(createfx_worldIconSize);
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [rbp+2Fh+end+8]
          vmovss  dword ptr [rbp+2Fh+end+8], xmm0
        }
        CG_DebugLine(_RBX, &end, &color, 0, 0);
      }
      else
      {
        __asm { vmovaps xmm3, xmm6; worldDistance }
        CG_CreateFx_Draw3DIcon(localClientNum, scrPlace, _RBX, *(float *)&_XMM3, &color, type);
        if ( !v26 )
        {
          __asm { vmovaps xmm3, xmm6; worldDistance }
          CG_CreateFx_Draw3DText(localClientNum, scrPlace, _RBX, *(float *)&_XMM3, &color, 0, text);
        }
        if ( v49 != -1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [rbx+4]
            vmovss  dword ptr [rbp+2Fh+end], xmm0
            vmovss  xmm0, dword ptr [rbx+8]
          }
          v43 = &cm.mapEnts->clientSideEffects.roots[v49];
          __asm
          {
            vsubss  xmm2, xmm0, cs:__real@41200000
            vmovss  dword ptr [rbp+2Fh+end+4], xmm1
            vmovss  dword ptr [rbp+2Fh+end+8], xmm2
          }
          v45 = SL_ConvertToStringSafe(v43->path);
          __asm { vmovaps xmm3, xmm6; worldDistance }
          CG_CreateFx_Draw3DText(localClientNum, scrPlace, &end, *(float *)&_XMM3, &color, 0, v45);
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0B0h+var_48+8] }
}

/*
==============
CG_CreateFx_Draw3DIcon
==============
*/

void __fastcall CG_CreateFx_Draw3DIcon(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *origin, double worldDistance, const vec4_t *color, CreateFxEffectType type)
{
  float fmt; 
  __int64 t1; 
  float t1a; 
  int s2; 
  float s2a; 
  float v31; 
  vec2_t outScreenPos; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _RBX = createfx_worldIconSize;
  __asm { vmovaps xmm6, xmm3 }
  if ( !createfx_worldIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@44898000
    vdivss  xmm6, xmm1, xmm6
  }
  CG_WorldPosToScreenPosReal(localClientNum, scrPlace, origin, &outScreenPos);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+98h+outScreenPos+4]
    vmulss  xmm1, xmm6, cs:__real@bf000000
    vaddss  xmm1, xmm1, dword ptr [rsp+98h+outScreenPos]
    vsubss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+98h+outScreenPos], xmm1
    vmovss  dword ptr [rsp+98h+outScreenPos+4], xmm0
  }
  if ( (unsigned int)type >= 7 )
  {
    s2 = 7;
    LODWORD(t1) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3864, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( s_effectTypeMaterials ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( s_effectTypeMaterials )\n\t%i not in [0, %i)", t1, s2) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  [rsp+98h+s2], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+outScreenPos]; x
    vmovss  [rsp+98h+t1], xmm1
    vmovss  dword ptr [rsp+98h+fmt], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+outScreenPos+4]; y
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm6; w
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t1a, s2a, v31, color, s_effectTypeMaterials[type]);
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

/*
==============
CG_CreateFx_Draw3DRepresentation
==============
*/
void CG_CreateFx_Draw3DRepresentation(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *fxOrigin, const vec3_t *fxAngles, const vec4_t *color, const CreateFxDataState *fxState, const CreateFXDataUnion *data, const char *const text, const bool isGhost)
{
  const char *v21; 
  cg_t *LocalClientGlobals; 
  char v45; 
  __int64 effectType; 
  FXRegisteredDef *p_anglesModelHandle; 
  int v50; 
  bool v51; 
  bool v53; 
  bool v54; 
  const char *v89; 
  const char *v103; 
  const char *v107; 
  const char *v108; 
  __int64 fromServer; 
  char *v119; 
  vec3_t outOrg; 
  vec3_t *angles; 
  const CreateFXDataUnion *v122; 
  __int64 v123; 
  vec3_t xyz; 
  tmat33_t<vec3_t> axis; 
  char v126; 
  void *retaddr; 

  _RAX = &retaddr;
  v123 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  angles = (vec3_t *)fxAngles;
  _RDI = fxOrigin;
  v122 = data;
  v21 = text;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3946, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3947, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RSI = createfx_worldIconSize;
  if ( !createfx_worldIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm12, dword ptr [rsi+28h]
    vmulss  xmm10, xmm12, cs:__real@3d0f5c29
  }
  R_TextHeight(cls.bigDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm10
    vmulss  xmm13, xmm1, cs:__real@3f19999a
  }
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rsp+168h+outOrg]
    vsubss  xmm4, xmm0, xmm8
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm9, dword ptr [rsp+168h+outOrg+4]
    vsubss  xmm2, xmm1, xmm9
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm3, xmm0, dword ptr [rsp+168h+outOrg+8]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( !(v45 | v53) )
  {
    effectType = fxState->effectType;
    if ( isGhost || !fxState->selected )
    {
      if ( s_createFxTool->menuDrawMode != COUNT )
      {
        __asm { vmovaps xmm3, xmm6; worldDistance }
        CG_CreateFx_Draw3DIcon(localClientNum, scrPlace, _RDI, *(double *)&_XMM3, color, fxState->effectType);
      }
    }
    else
    {
      p_anglesModelHandle = &s_createFxTool->anglesModelHandle;
      if ( s_createFxTool->editRotation == isGhost )
        p_anglesModelHandle = &s_createFxTool->axisModelHandle;
      AnglesToAxis(angles, &axis);
      __asm { vcomiss xmm6, cs:__real@43800000 }
      if ( !(v45 | v53) || fxState->occluded )
      {
        __asm { vmulss  xmm3, xmm6, cs:__real@3b656042; size }
        CL_AddOrientedDebugStar(_RDI, &axis, color, *(float *)&_XMM3, 0, 0);
        v21 = text;
      }
      else
      {
        FX_PlayOrientedEffect(LOCAL_CLIENT_0, p_anglesModelHandle, 0, _RDI, &axis);
        v21 = text;
      }
    }
    if ( (s_createFxTool->menuDrawMode & 0xFFFFFFFD) == 0 || *(_DWORD *)fxState->visualState )
    {
      v50 = *(_DWORD *)fxState->visualState;
      v51 = v50 == 1 || !s_createFxTool->selectedEffectTotal && v50 == 2;
      __asm { vmovaps xmm3, xmm6; worldDistance }
      CG_CreateFx_Draw3DText(localClientNum, scrPlace, _RDI, *(float *)&_XMM3, color, v51, v21);
      if ( *(_DWORD *)fxState->visualState )
      {
        if ( !isGhost )
        {
          v53 = (_DWORD)effectType == 7;
          if ( (unsigned int)effectType >= 7 )
          {
            LODWORD(v119) = 7;
            LODWORD(fromServer) = effectType;
            v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3997, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( createFxEffectTypeStrings ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( createFxEffectTypeStrings )\n\t%i not in [0, %i)", fromServer, v119);
            v53 = !v54;
            if ( v54 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm6, dword ptr [rdi]
            vsubss  xmm5, xmm6, xmm8
            vmovss  xmm8, dword ptr [rdi+4]
            vsubss  xmm4, xmm8, xmm9
            vmovss  xmm9, dword ptr [rdi+8]
            vsubss  xmm0, xmm9, dword ptr [rsp+168h+outOrg+8]
            vucomiss xmm5, xmm7
          }
          if ( !v53 )
            goto LABEL_36;
          __asm { vucomiss xmm4, xmm7 }
          if ( !v53 )
            goto LABEL_36;
          __asm { vucomiss xmm0, xmm7 }
          if ( !v53 )
          {
LABEL_36:
            __asm
            {
              vmulss  xmm1, xmm4, xmm4
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vcmpless xmm0, xmm2, cs:__real@80000000
              vmovss  xmm3, cs:__real@3f800000
              vblendvps xmm1, xmm2, xmm3, xmm0
              vdivss  xmm3, xmm3, xmm1
              vmulss  xmm0, xmm4, xmm3
              vmulss  xmm1, xmm0, xmm12
              vaddss  xmm2, xmm1, xmm6
              vmovss  dword ptr [rsp+168h+xyz], xmm2
              vmulss  xmm0, xmm5, xmm3
              vmulss  xmm1, xmm0, xmm12
              vsubss  xmm2, xmm8, xmm1
              vmovss  dword ptr [rsp+168h+xyz+4], xmm2
              vmulss  xmm0, xmm13, cs:__real@40400000
              vaddss  xmm1, xmm0, xmm9
              vmovss  dword ptr [rsp+168h+xyz+8], xmm1
              vmovaps xmm2, xmm10; scale
            }
            CL_AddDebugString(&xyz, color, *(float *)&_XMM2, createFxEffectTypeStrings[effectType], 0, 0);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+168h+xyz+8]
              vsubss  xmm1, xmm0, xmm13
              vmovss  dword ptr [rsp+168h+xyz+8], xmm1
              vmovss  xmm3, dword ptr [rdi+8]
              vcvtss2sd xmm3, xmm3, xmm3
              vmovss  xmm2, dword ptr [rdi+4]
              vcvtss2sd xmm2, xmm2, xmm2
              vmovss  xmm1, dword ptr [rdi]
              vcvtss2sd xmm1, xmm1, xmm1
              vmovq   r9, xmm3
              vmovq   r8, xmm2
              vmovq   rdx, xmm1
            }
            v89 = j_va("Origin: (%.1f, %.1f, %.1f)", _RDX, _R8, _R9);
            __asm { vmovaps xmm2, xmm10; scale }
            CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v89, 0, 0);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+168h+xyz+8]
              vsubss  xmm1, xmm0, xmm13
              vmovss  dword ptr [rsp+168h+xyz+8], xmm1
            }
            _RAX = angles;
            __asm
            {
              vmovss  xmm3, dword ptr [rax+8]
              vcvtss2sd xmm3, xmm3, xmm3
              vmovss  xmm2, dword ptr [rax+4]
              vcvtss2sd xmm2, xmm2, xmm2
              vmovss  xmm1, dword ptr [rax]
              vcvtss2sd xmm1, xmm1, xmm1
              vmovq   r9, xmm3
              vmovq   r8, xmm2
              vmovq   rdx, xmm1
            }
            v103 = j_va("Angles: (%.1f, %.1f, %.1f)", _RDX, _R8, _R9);
            __asm { vmovaps xmm2, xmm10; scale }
            CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v103, 0, 0);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+168h+xyz+8]
              vsubss  xmm1, xmm0, xmm13
              vmovss  dword ptr [rsp+168h+xyz+8], xmm1
            }
            if ( fxState->effectType == 3 )
            {
              v107 = SL_ConvertToString(v122->explodersDef.client.name);
              v108 = j_va("Group: %s", v107);
              __asm { vmovaps xmm2, xmm10; scale }
              CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v108, 0, 0);
            }
          }
        }
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v126;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-68h]
    vmovaps xmm13, xmmword ptr [r11-78h]
  }
}

/*
==============
CG_CreateFx_Draw3DText
==============
*/
void CG_CreateFx_Draw3DText(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *origin, float worldDistance, const vec4_t *color, bool isSelected, const char *text)
{
  __int64 v18; 
  int v19; 
  const char *v20; 
  vec3_t xyz; 

  _RDI = origin;
  if ( text && *text )
  {
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(createfx_worldIconSize);
    __asm { vmulss  xmm6, xmm0, cs:__real@3d0f5c29 }
    R_TextHeight(cls.bigDevFont);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm6
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+68h+xyz], xmm1
      vmovss  xmm1, dword ptr [rdi+8]
      vsubss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rsp+68h+xyz+8], xmm2
      vmovss  dword ptr [rsp+68h+xyz+4], xmm0
    }
    v18 = -1i64;
    do
      ++v18;
    while ( text[v18] );
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = &text[v19];
      while ( *v20 != 47 )
      {
        --v20;
        if ( !--v19 )
          goto LABEL_11;
      }
      ++v19;
    }
LABEL_11:
    __asm { vmovaps xmm2, xmm6; scale }
    CL_AddDebugStringCentered(&xyz, color, *(float *)&_XMM2, &text[v19], 0, 0);
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
  }
}

/*
==============
CG_CreateFx_DrawInfo
==============
*/
void CG_CreateFx_DrawInfo(LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace)
{
  LocalClientNum_t v11; 
  bool v21; 
  __int64 v24; 
  unsigned __int64 v25; 
  __int64 v28; 
  const CreateFxDataState *v29; 
  const CreateFxMapLayerDef *activeLayer; 
  const CreateFxMapLayerDef *layer; 
  bool v32; 
  int v33; 
  char occluded; 
  const char *aliasString; 
  __int64 v49; 
  const CreateFXDataUnion *v50; 
  const char *EffectSoundAliasName; 
  SndAlias *head; 
  const OcclusionShape *OcclusionShapeById; 
  SndAliasList *aliasList; 
  SndAliasList *Alias; 
  bool v86; 
  scr_string_t name; 
  int v91; 
  __int64 v92; 
  __int64 v93; 
  int v98; 
  __int64 v99; 
  CreateFxDataState *v101; 
  __int64 v103; 
  CreateFxMenuPage *v104; 
  void (__fastcall *menuDrawFunction)(CreateFxMenuPage *const, const ScreenPlacement *const); 
  Material *v106; 
  const vec4_t *v107; 
  const char *v124; 
  const char *v132; 
  __int64 v134; 
  bool v136; 
  int v139; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v148; 
  int v149; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  CreateFxDataState *fxState; 
  float fxStatea; 
  float fxStateb; 
  float fxStatec; 
  float data; 
  float dataa; 
  float datab; 
  char *text; 
  float texta; 
  float textb; 
  float textc; 
  float textd; 
  float isGhost; 
  float isGhosta; 
  float isGhostb; 
  float isGhostc; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  __int64 v189; 
  const CreateFxMapLayerDef *v190; 
  const char *v191; 
  bool outIsAlwaysLoaded; 
  int v193; 
  LocalClientNum_t localClientNuma; 
  int v195; 
  SndAliasList *outAlias; 
  vec3_t center; 
  vec4_t color; 
  vec4_t v199; 
  vec3_t outOrigin; 
  vec3_t scrPlacea; 
  vec3_t outAngles; 
  vec3_t effectData; 
  vec3_t direction; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t fxAngles; 
  vec3_t forward; 
  void *retaddr; 

  _R11 = &retaddr;
  _R15 = scrPlace;
  *(_QWORD *)scrPlacea.v = scrPlace;
  v11 = localClientNum;
  localClientNuma = localClientNum;
  if ( s_createFxTool && s_createFxTool->enabled )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
    }
    if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5255, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
      __debugbreak();
    __asm
    {
      vmovss  xmm10, cs:__real@3f800000
      vxorps  xmm9, xmm9, xmm9
      vmovss  dword ptr [rbp+100h+var_140], xmm10
      vmovss  dword ptr [rbp+100h+var_140+4], xmm9
      vmovss  dword ptr [rbp+100h+var_140+8], xmm9
    }
    CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+65ECh]
      vmulss  xmm0, xmm0, cs:__real@3bcde32e; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3e800000
      vaddss  xmm0, xmm1, cs:__real@3f400000; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm10; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v21 = s_createFxDrawCount == 0;
    __asm
    {
      vmovss  xmm11, cs:__real@3f000000
      vmovss  dword ptr [rbp+100h+var_140+0Ch], xmm0
    }
    v193 = 0;
    if ( s_createFxDrawCount > 0 )
    {
      __asm
      {
        vmovups xmm6, xmmword ptr [rbp+100h+var_140]
        vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      }
      v24 = 0i64;
      v189 = 0i64;
      while ( 1 )
      {
        v25 = s_createFxDrawList[v24];
        _RBX = s_createFxTool;
        _RDI = v25;
        v25 *= 5i64;
        v28 = *(int *)&s_createFxTool->scratchDataState[0].visualState[8 * v25 + 4];
        v29 = (CreateFxDataState *)((char *)s_createFxTool->scratchDataState + 8 * v25);
        v86 = *(_DWORD *)&s_createFxTool->scratchDataState[0].visualState[8 * v25] == 0;
        activeLayer = s_createFxTool->activeLayer;
        layer = v29->layer;
        *(_QWORD *)effectData.v = &s_createFxTool->scratchData[_RDI];
        v195 = v28;
        v190 = activeLayer;
        v32 = v86 && !CG_CreateFx_IsEffectDefValid(&s_createFxTool->scratchData[_RDI], (const CreateFxEffectType)v28);
        v33 = *(_DWORD *)v29->visualState;
        if ( (_DWORD)v28 == 1 || (_DWORD)v28 == 2 || (_DWORD)v28 == 3 || (_DWORD)v28 == 4 || (_DWORD)v28 == 5 )
        {
          _RAX = *(_QWORD *)effectData.v;
          if ( *(_QWORD *)effectData.v )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmovss  dword ptr [rbp+100h+center], xmm0
              vmovss  xmm1, dword ptr [rdi+rbx+4800D4h]
              vmovss  dword ptr [rbp+100h+center+4], xmm1
              vmovss  xmm0, dword ptr [rdi+rbx+4800D8h]
              vmovss  dword ptr [rbp+100h+center+8], xmm0
            }
          }
        }
        else
        {
          LODWORD(fxState) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", fxState) )
            __debugbreak();
        }
        if ( (_DWORD)v28 == 1 || (_DWORD)v28 == 2 || (_DWORD)v28 == 3 || (_DWORD)v28 == 4 || (_DWORD)v28 == 5 )
        {
          _RAX = (__int64)&_RBX->scratchData[_RDI].reactiveEntDef.angles;
          if ( (CreateFxTool *)((char *)_RBX + _RDI * 104) != (CreateFxTool *)-4718812i64 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmovss  dword ptr [rbp+100h+fxAngles], xmm0
              vmovss  xmm1, dword ptr [rax+4]
              vmovss  dword ptr [rbp+100h+fxAngles+4], xmm1
              vmovss  xmm0, dword ptr [rax+8]
              vmovss  dword ptr [rbp+100h+fxAngles+8], xmm0
            }
          }
        }
        else
        {
          LODWORD(fxState) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3223, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectAngles: unhandled effect type '%d'", fxState) )
            __debugbreak();
        }
        occluded = v29->occluded;
        if ( layer == v190 )
        {
          if ( v32 )
          {
            __asm { vmovdqa xmmword ptr [rbp+100h+color], xmm6 }
          }
          else
          {
            _RCX = 6 * v28;
            _RAX = 0x140000000ui64;
            if ( v33 == 1 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr rva s_effectTypeColors.selectedColor[rax+rcx*8]
                vmovss  xmm1, dword ptr (rva s_effectTypeColors.selectedColor+4)[rax+rcx*8]
                vmovss  dword ptr [rbp+100h+color], xmm0
                vmovss  xmm0, dword ptr (rva s_effectTypeColors.selectedColor+8)[rax+rcx*8]
                vmovss  dword ptr [rbp+100h+color+4], xmm1
                vmovss  xmm1, dword ptr (rva s_effectTypeColors.selectedColor+0Ch)[rax+rcx*8]
              }
            }
            else if ( v33 == 2 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr rva s_effectTypeColors.highlightedColor[rax+rcx*8]
                vmovss  xmm1, dword ptr (rva s_effectTypeColors.highlightedColor+4)[rax+rcx*8]
                vmovss  dword ptr [rbp+100h+color], xmm0
                vmovss  xmm0, dword ptr (rva s_effectTypeColors.highlightedColor+8)[rax+rcx*8]
                vmovss  dword ptr [rbp+100h+color+4], xmm1
                vmovss  xmm1, dword ptr (rva s_effectTypeColors.highlightedColor+0Ch)[rax+rcx*8]
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr rva s_effectTypeColors.defaultColor[rax+rcx*8]
                vmovss  xmm1, dword ptr (rva s_effectTypeColors.defaultColor+4)[rax+rcx*8]
                vmovss  dword ptr [rbp+100h+color], xmm0
                vmovss  xmm0, dword ptr (rva s_effectTypeColors.defaultColor+8)[rax+rcx*8]
                vmovss  dword ptr [rbp+100h+color+4], xmm1
                vmovss  xmm1, dword ptr (rva s_effectTypeColors.defaultColor+0Ch)[rax+rcx*8]
              }
            }
            __asm
            {
              vmovss  dword ptr [rbp+100h+color+8], xmm0
              vmovss  dword ptr [rbp+100h+color+0Ch], xmm1
            }
            if ( occluded )
            {
              __asm
              {
                vmulss  xmm0, xmm1, xmm11
                vmovss  dword ptr [rbp+100h+color+0Ch], xmm0
              }
            }
          }
        }
        else
        {
          __asm
          {
            vmovups xmm0, cs:__xmm@3f0000003f0000003f0000003f000000
            vmovups xmmword ptr [rbp+100h+color], xmm0
          }
        }
        if ( !v29->aliasString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3335, ASSERT_TYPE_ASSERT, "(effectState.aliasString)", (const char *)&queryFormat, "effectState.aliasString") )
          __debugbreak();
        aliasString = v29->aliasString;
        v191 = aliasString;
        if ( v29->selected )
          break;
        v49 = v189;
LABEL_52:
        if ( s_createFxTool->menuDrawMode == (COUNT|DODGE) && !*(_DWORD *)v29->visualState )
        {
          _R15 = *(const ScreenPlacement **)scrPlacea.v;
        }
        else
        {
          v50 = *(const CreateFXDataUnion **)effectData.v;
          _R15 = *(const ScreenPlacement **)scrPlacea.v;
          CG_CreateFx_Draw3DRepresentation(localClientNuma, *(const ScreenPlacement *const *)scrPlacea.v, &center, &fxAngles, &color, v29, *(const CreateFXDataUnion **)effectData.v, aliasString, 0);
          if ( *(_DWORD *)v29->visualState == 1 )
          {
            EffectSoundAliasName = CG_CreateFx_GetEffectSoundAliasName(v50, (const CreateFxEffectType)v28);
            if ( EffectSoundAliasName )
            {
              if ( SND_TryFindAliasForCaching(EffectSoundAliasName, &outAlias, &outIsAlwaysLoaded) )
              {
                if ( outAlias )
                {
                  if ( outAlias->count )
                  {
                    head = outAlias->head;
                    if ( head )
                    {
                      OcclusionShapeById = SND_GetOcclusionShapeById(head->occlusionShape);
                      _RBX = OcclusionShapeById;
                      if ( OcclusionShapeById )
                      {
                        if ( OcclusionShapeById->id != g_snd.defaultHash )
                        {
                          CG_CreateFx_GetEffectAngles(v50, (const CreateFxEffectType)v28, &outAngles);
                          __asm
                          {
                            vmovss  xmm0, dword ptr [rbp+100h+outAngles]
                            vaddss  xmm1, xmm0, dword ptr [rbx+60h]
                            vmovss  xmm2, dword ptr [rbp+100h+outAngles+4]
                            vmovss  dword ptr [rbp+100h+outAngles], xmm1
                            vaddss  xmm0, xmm2, dword ptr [rbx+5Ch]
                            vmovss  dword ptr [rbp+100h+outAngles+4], xmm0
                          }
                          AngleVectors(&outAngles, &forward, NULL, NULL);
                          CG_CreateFx_GetEffectOrigin(v50, (const CreateFxEffectType)v28, &outOrigin);
                          __asm
                          {
                            vmovss  xmm3, dword ptr [rbp+100h+forward+8]
                            vmovss  xmm5, dword ptr [rbp+100h+forward]
                            vmovss  xmm4, dword ptr [rbp+100h+forward+4]
                          }
                          _RAX = outAlias->head;
                          __asm
                          {
                            vmovss  xmm2, dword ptr [rax+68h]
                            vmulss  xmm0, xmm2, xmm5
                            vaddss  xmm1, xmm0, dword ptr [rbp+100h+outOrigin]
                            vmovss  dword ptr [rbp+100h+origin], xmm1
                            vmulss  xmm0, xmm2, xmm4
                            vaddss  xmm1, xmm0, dword ptr [rbp+100h+outOrigin+4]
                            vmulss  xmm0, xmm2, xmm3
                            vmovss  dword ptr [rbp+100h+origin+4], xmm1
                            vaddss  xmm1, xmm0, dword ptr [rbp+100h+outOrigin+8]
                            vmovss  dword ptr [rbp+100h+origin+8], xmm1
                            vxorps  xmm0, xmm4, xmm7
                            vmovss  dword ptr [rbp+100h+direction+4], xmm0
                            vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta
                            vmovups xmmword ptr [rbp+100h+var_140], xmm0
                            vxorps  xmm2, xmm5, xmm7
                            vmovss  dword ptr [rbp+100h+direction], xmm2
                            vxorps  xmm1, xmm3, xmm7
                            vmovss  dword ptr [rbp+100h+direction+8], xmm1
                          }
                          _RAX = outAlias->head;
                          __asm
                          {
                            vmovss  xmm2, dword ptr [rbx+48h]; radius
                            vmovss  xmm3, dword ptr [rax+68h]; length
                          }
                          CG_DebugCone(&origin, &direction, *(float *)&_XMM2, *(float *)&_XMM3, &v199, 0, 0);
                          __asm
                          {
                            vmulss  xmm2, xmm11, dword ptr [rbp+100h+var_140+8]
                            vmulss  xmm1, xmm11, dword ptr [rbp+100h+var_140]
                            vmulss  xmm0, xmm11, dword ptr [rbp+100h+var_140+4]
                            vmovss  dword ptr [rbp+100h+var_140], xmm1
                            vmovss  dword ptr [rbp+100h+var_140+4], xmm0
                            vmovss  dword ptr [rbp+100h+var_140+8], xmm2
                          }
                          _RCX = outAlias->head;
                          __asm
                          {
                            vmovss  xmm2, dword ptr [rbx+44h]; radius
                            vmovss  xmm3, dword ptr [rcx+68h]; length
                          }
                          CG_DebugCone(&origin, &direction, *(float *)&_XMM2, *(float *)&_XMM3, &v199, 0, 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v24 = v49 + 1;
        v189 = v24;
        v21 = ++v193 <= (unsigned int)s_createFxDrawCount;
        if ( v193 >= s_createFxDrawCount )
        {
          v11 = localClientNuma;
          goto LABEL_90;
        }
      }
      switch ( v29->effectType )
      {
        case 2:
          aliasList = _RBX->scratchData[_RDI].intervalSoundsDef.aliasList;
          if ( !aliasList )
          {
            aliasList = SND_TryFindAlias(_RBX->scratchData[_RDI].intervalSoundsDef.effectSound.name);
            if ( !aliasList )
              goto LABEL_50;
          }
          _RAX = aliasList->head;
          if ( !_RAX )
            goto LABEL_50;
          break;
        case 3:
          Alias = _RBX->scratchData[_RDI].oneShotFxDef.aliasList;
          if ( Alias || (Alias = SND_TryFindAlias(_RBX->scratchData[_RDI].oneShotFxDef.effectSound.name), v86 = Alias == NULL, Alias) )
          {
            _RAX = Alias->head;
            v86 = _RAX == NULL;
            if ( _RAX )
            {
              __asm { vmovss  xmm1, dword ptr [rax+64h]; radius }
              CG_DebugSphere(&center, *(float *)&_XMM1, &colorRed, 1, 0);
              _RAX = Alias->head;
              __asm { vmovss  xmm1, dword ptr [rax+68h]; radius }
              CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 1, 0);
            }
          }
          __asm { vucomiss xmm9, dword ptr [rdi+rbx+480120h] }
          if ( !v86 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+rbx+480124h]; radius
              vucomiss xmm1, xmm9
            }
            CG_DebugSphere(&center, *(float *)&_XMM1, &colorOrange, 1, 0);
          }
          v49 = v189;
          if ( s_createFxTool->drawExploderLines )
          {
            name = _RBX->scratchData[_RDI].explodersDef.client.name;
            v91 = 0;
            v92 = 0i64;
            if ( s_createFxDrawCount > 0 )
            {
              do
              {
                if ( v92 != v189 )
                {
                  v93 = s_createFxDrawList[v92];
                  _RBX = s_createFxTool;
                  _RCX = v93;
                  if ( s_createFxTool->scratchDataState[v93].effectType == 3 && s_createFxTool->scratchData[_RCX].explodersDef.client.name == name )
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rcx+rbx+4800D0h]
                      vmovss  dword ptr [rbp+100h+end], xmm0
                      vmovss  xmm1, dword ptr [rcx+rbx+4800D4h]
                      vmovss  dword ptr [rbp+100h+end+4], xmm1
                      vmovss  xmm0, dword ptr [rcx+rbx+4800D8h]
                      vmovss  dword ptr [rbp+100h+end+8], xmm0
                    }
                    CL_AddDebugLine(&center, &end, &color, 0, 0, 0);
                  }
                }
                ++v91;
                ++v92;
              }
              while ( v91 < s_createFxDrawCount );
              LODWORD(v28) = v195;
            }
          }
          goto LABEL_51;
        case 4:
          aliasList = _RBX->scratchData[_RDI].intervalSoundsDef.aliasList;
          if ( !aliasList )
          {
            aliasList = SND_TryFindAlias(_RBX->scratchData[_RDI].intervalSoundsDef.effectSound.name);
            if ( !aliasList )
              goto LABEL_49;
          }
          _RAX = aliasList->head;
          if ( !_RAX )
            goto LABEL_49;
          break;
        case 5:
LABEL_49:
          _RAX = s_createFxTool;
          __asm { vmovss  xmm1, dword ptr [rdi+rax+480100h]; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 1, 0);
          goto LABEL_50;
        default:
LABEL_50:
          v49 = v189;
LABEL_51:
          aliasString = v191;
          goto LABEL_52;
      }
      __asm { vmovss  xmm1, dword ptr [rax+64h]; radius }
      CG_DebugSphere(&center, *(float *)&_XMM1, &colorRed, 1, 0);
      _RAX = aliasList->head;
      __asm { vmovss  xmm1, dword ptr [rax+68h] }
      CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 1, 0);
      goto LABEL_50;
    }
LABEL_90:
    _RBX = s_createFxTool;
    __asm { vcomiss xmm10, dword ptr [rbx+240018h] }
    if ( !v21 && s_createFxTool->clipboard.effectTotal > 0 )
    {
      v98 = 0;
      v99 = 0i64;
      do
      {
        _RDI = &s_createFxTool->clipboard.effectData[v98];
        v101 = &s_createFxTool->clipboard.effectDataState[v99];
        if ( s_createFxTool->clipboard.effectDataState[v99].effectType == 1 || s_createFxTool->clipboard.effectDataState[v99].effectType == 2 || s_createFxTool->clipboard.effectDataState[v99].effectType == 3 || s_createFxTool->clipboard.effectDataState[v99].effectType == Menu || s_createFxTool->clipboard.effectDataState[v99].effectType == 5 )
        {
          if ( (CreateFxTool *)((char *)s_createFxTool + 104 * v98) != (CreateFxTool *)-16i64 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vmovss  xmm1, dword ptr [rdi+4]
              vmovss  dword ptr [rbp+100h+outOrigin], xmm0
              vmovss  xmm0, dword ptr [rdi+8]
              vmovss  dword ptr [rbp+100h+outOrigin+8], xmm0
              vmovss  dword ptr [rbp+100h+outOrigin+4], xmm1
            }
          }
        }
        else
        {
          LODWORD(fxState) = s_createFxTool->clipboard.effectDataState[v99].effectType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", fxState) )
            __debugbreak();
        }
        CG_CreateFx_CalculateClipboardEntityOrigin(&outOrigin, &effectData);
        if ( !v101->aliasString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3335, ASSERT_TYPE_ASSERT, "(effectState.aliasString)", (const char *)&queryFormat, "effectState.aliasString") )
          __debugbreak();
        text = (char *)v101->aliasString;
        __asm
        {
          vmovss  dword ptr [rbp+100h+scrPlace], xmm9
          vmovss  dword ptr [rbp+100h+scrPlace+4], xmm9
          vmovss  [rbp+100h+var_118], xmm9
        }
        CG_CreateFx_Draw3DRepresentation(v11, _R15, &effectData, &scrPlacea, &colorRedFaded, v101, _RDI, text, 1);
        ++v98;
        ++v99;
      }
      while ( v98 < s_createFxTool->clipboard.effectTotal );
    }
    v103 = -1i64;
    if ( !CL_Keys_IsCatcherActive(v11, -1) )
    {
      __asm { vmovaps [rsp+200h+var_68+8], xmm8 }
      v104 = s_menuPath[s_menuPathCount];
      menuDrawFunction = v104->menuDrawFunction;
      if ( menuDrawFunction )
        menuDrawFunction(v104, _R15);
      v106 = s_effectTypeMaterials[0];
      v107 = &colorWhiteFaded;
      __asm
      {
        vmovss  xmm8, cs:__real@c1000000
        vmovss  xmm3, cs:__real@40400000; w
      }
      if ( s_createFxTool->highlightedEffectIndex != -1 )
        v107 = &colorYellow;
      __asm
      {
        vmovss  dword ptr [rsp+200h+var_1B0], xmm10
        vmovss  [rsp+200h+var_1B8], xmm10
        vmovss  dword ptr [rsp+200h+isGhost], xmm9
        vmovss  dword ptr [rsp+200h+text], xmm9
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+200h+fmt], xmm10
      }
      CL_DrawStretchPic(_R15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 2, 2, texta, isGhost, v181, v185, v107, s_effectTypeMaterials[0]);
      __asm
      {
        vmovss  xmm6, cs:__real@41800000
        vmovss  dword ptr [rsp+200h+var_1B0], xmm10
        vmovss  [rsp+200h+var_1B8], xmm10
        vmovss  dword ptr [rsp+200h+isGhost], xmm9
        vmovss  dword ptr [rsp+200h+text], xmm9
        vmovaps xmm3, xmm10; w
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+200h+fmt], xmm6
      }
      CL_DrawStretchPic(_R15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 2, 2, textb, isGhosta, v182, v186, v107, v106);
      __asm
      {
        vmovss  xmm3, cs:__real@40400000; w
        vmovss  xmm1, cs:__real@40c00000; x
        vmovss  dword ptr [rsp+200h+var_1B0], xmm10
        vmovss  [rsp+200h+var_1B8], xmm10
        vmovss  dword ptr [rsp+200h+isGhost], xmm9
        vmovss  dword ptr [rsp+200h+text], xmm9
        vmovaps xmm2, xmm8; y
        vmovss  dword ptr [rsp+200h+fmt], xmm10
      }
      CL_DrawStretchPic(_R15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 2, 2, textc, isGhostb, v183, v187, v107, v106);
      __asm
      {
        vmovss  xmm1, cs:__real@41100000; x
        vmovss  dword ptr [rsp+200h+var_1B0], xmm10
        vmovss  [rsp+200h+var_1B8], xmm10
        vmovss  dword ptr [rsp+200h+isGhost], xmm9
        vmovss  dword ptr [rsp+200h+text], xmm9
        vmovaps xmm3, xmm10; w
        vmovaps xmm2, xmm8; y
        vmovss  dword ptr [rsp+200h+fmt], xmm6
      }
      CL_DrawStretchPic(_R15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 2, 2, textd, isGhostc, v184, v188, v107, v106);
      __asm { vmovaps xmm8, [rsp+200h+var_68+8] }
    }
    R_TextHeight(cls.consoleFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    v124 = "OFF";
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vsubss  xmm7, xmm0, xmm6
    }
    if ( s_createFxTool->snapToNormal )
      v124 = "ON";
    _RDX = 0x140000000ui64;
    _RAX = s_createFxEditRateIndex;
    __asm
    {
      vmovss  xmm2, rva s_createFxEditRates[rdx+rax*4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    v132 = j_va("Version %s Rate:%g Snap2Angle:%d Snap2Normal:%s", "2.8", _R8, CREATEFX_ANGLE_SNAPS[s_createFxTool->snapToAngleIndex], v124);
    __asm { vmovaps xmm9, [rsp+200h+var_78+8] }
    v134 = -1i64;
    do
      ++v134;
    while ( v132[v134] );
    __asm
    {
      vmovss  dword ptr [rsp+200h+data], xmm10
      vmovss  dword ptr [rsp+200h+fxState], xmm10
      vmovaps xmm3, xmm6; x
      vmovss  dword ptr [rsp+200h+fmt], xmm7
    }
    CL_DrawTextPhysical(v132, v134, cls.consoleFont, *(float *)&_XMM3, fmtd, fxStatea, data, &colorWhite, 0);
    v136 = NET_RemoteDbgHostConsoleConnected();
    __asm
    {
      vmovaps xmm7, [rsp+200h+var_58+8]
      vmovss  xmm6, cs:__real@42480000
    }
    if ( !v136 || s_createFxTool->lastProbeSuccess < CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time - 15000 )
    {
      v139 = R_TextHeight(cls.bigDevFont);
      R_TextWidth("NX Launcher Missing", 0x7FFFFFFF, cls.bigDevFont, 2 * v139);
      __asm
      {
        vmovss  xmm1, dword ptr [r15+20h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vaddss  xmm4, xmm0, xmm6
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
        vsubss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rsp+200h+data], xmm10
        vmovss  dword ptr [rsp+200h+fxState], xmm10
        vmulss  xmm3, xmm0, xmm11; x
        vmovss  dword ptr [rsp+200h+fmt], xmm4
      }
      CL_DrawTextPhysical("NX Launcher Missing", 19, cls.bigDevFont, *(float *)&_XMM3, fmte, fxStateb, dataa, &colorRed, 0);
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v148 = s_createFxTool;
    if ( LocalClientGlobals->time < s_createFxTool->statusMessageTimeout && s_createFxTool->statusMessageBuffer[0] )
    {
      v149 = R_TextHeight(cls.bigDevFont);
      R_TextWidth(v148->statusMessageBuffer, 0x7FFFFFFF, cls.bigDevFont, v149);
      __asm
      {
        vmovss  xmm0, dword ptr [r15+20h]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm1, xmm0, xmm1
        vmulss  xmm3, xmm1, xmm11; x
      }
      do
        ++v103;
      while ( v148->statusMessageBuffer[v103] );
      __asm
      {
        vmovss  dword ptr [rsp+200h+data], xmm10
        vmovss  dword ptr [rsp+200h+fxState], xmm10
        vmovss  dword ptr [rsp+200h+fmt], xmm6
      }
      CL_DrawTextPhysical(v148->statusMessageBuffer, v103, cls.bigDevFont, *(float *)&_XMM3, fmtf, fxStatec, datab, &s_createFxTool->statusMessageColor, 0);
    }
    __asm
    {
      vmovaps xmm10, [rsp+200h+var_88+8]
      vmovaps xmm6, [rsp+200h+var_48+8]
      vmovaps xmm11, [rsp+200h+var_98+8]
    }
  }
}

/*
==============
CG_CreateFx_DropSelectionToGround
==============
*/
void CG_CreateFx_DropSelectionToGround()
{
  CreateFxTool *v2; 
  unsigned __int16 selectedEffectTotal; 
  int v4; 
  __int64 v5; 
  int v8; 
  cg_t *LocalClientGlobals; 
  char v17; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  v2 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v2 = s_createFxTool;
  }
  selectedEffectTotal = v2->selectedEffectTotal;
  v4 = 0;
  if ( v2->selectedEffectTotal > 0 )
  {
    v5 = 7209180i64;
    __asm
    {
      vmovaps [rsp+148h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps [rsp+148h+var_48], xmm7
      vmovss  xmm7, cs:__real@46800000
    }
    do
    {
      v8 = *(_DWORD *)(&v2->inited + v5);
      CG_CreateFx_ClearRedoStack();
      while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x28 )
        CG_CreateFx_DiscardUndoSequence();
      _RBX = ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x28ui64, 4ui64, 1);
      if ( !_RBX )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
      *(_QWORD *)_RBX = &CreateFxDropToGroundCommand::`vftable';
      *((_DWORD *)_RBX + 2) = v8;
      CG_CreateFx_GetScratchEffectOrigin(v8, (vec3_t *)_RBX + 1);
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+14h]
        vmovss  xmm3, dword ptr [rbx+0Ch]
        vmovss  xmm2, dword ptr [rbx+10h]
        vaddss  xmm0, xmm6, xmm1
        vmovss  dword ptr [rsp+148h+start+8], xmm0
        vsubss  xmm0, xmm1, xmm7
        vmovss  dword ptr [rsp+148h+end+8], xmm0
        vmovss  dword ptr [rsp+148h+start], xmm3
        vmovss  dword ptr [rsp+148h+start+4], xmm2
        vmovss  dword ptr [rsp+148h+end], xmm3
        vmovss  dword ptr [rsp+148h+end+4], xmm2
      }
      PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_CLIENT_FIRST, &results, &start, &end, &bounds_origin, LocalClientGlobals->predictedPlayerState.clientNum, 0, 41969969, 0, NULL, All);
      __asm
      {
        vmovss  xmm0, [rsp+148h+results.fraction]
        vcomiss xmm0, xmm6
      }
      if ( v17 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+148h+results.position]
          vmovss  xmm1, dword ptr [rsp+148h+results.position+4]
          vmovss  dword ptr [rbx+18h], xmm0
          vmovss  xmm0, dword ptr [rsp+148h+results.position+8]
          vmovss  dword ptr [rbx+20h], xmm0
          vmovss  dword ptr [rbx+1Ch], xmm1
        }
      }
      else
      {
        *((_DWORD *)_RBX + 6) = *((_DWORD *)_RBX + 3);
        *((_DWORD *)_RBX + 7) = *((_DWORD *)_RBX + 4);
        *((_DWORD *)_RBX + 8) = *((_DWORD *)_RBX + 5);
      }
      (**(void (__fastcall ***)(void *))_RBX)(_RBX);
      CG_CreateFx_PushUndoCommand((CreateFxCommand *const)_RBX);
      v2 = s_createFxTool;
      ++v4;
      v5 += 4i64;
    }
    while ( v4 < s_createFxTool->selectedEffectTotal );
    __asm
    {
      vmovaps xmm7, [rsp+148h+var_48]
      vmovaps xmm6, [rsp+148h+var_38]
    }
  }
  CG_CreateFx_PushUndoSequence(selectedEffectTotal);
}

/*
==============
CG_CreateFx_EditVec3Update
==============
*/
void CG_CreateFx_EditVec3Update(const LocalClientNum_t localClientNum, const bool cameraRelativeEditing, vec3_t *outValue)
{
  bool v12; 

  _RAX = s_createFxEditRateIndex;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RCX = s_createFxEditRates;
  _RDI = outValue;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm7
    vmovss  xmm6, dword ptr [rcx+rax*4]
    vmovaps [rsp+68h+var_48], xmm8
  }
  v12 = CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) != 0;
  if ( !cameraRelativeEditing )
  {
    if ( CL_Keys_IsKeyDown(localClientNum, 20) || !v12 && CL_Keys_IsKeyDown(localClientNum, 132) )
    {
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
    }
    else if ( CL_Keys_IsKeyDown(localClientNum, 21) || !v12 && CL_Keys_IsKeyDown(localClientNum, 133) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm1
      }
    }
    if ( !CL_Keys_IsKeyDown(localClientNum, 22) && !CL_Keys_IsKeyDown(localClientNum, 134) )
    {
      if ( CL_Keys_IsKeyDown(localClientNum, 23) || CL_Keys_IsKeyDown(localClientNum, 135) )
      {
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm0
        }
      }
      goto LABEL_32;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, xmm6
    }
    goto LABEL_31;
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm7, dword ptr [rax+6944h]
    vmovss  xmm8, dword ptr [rax+6948h]
  }
  if ( CL_Keys_IsKeyDown(localClientNum, 20) || !v12 && CL_Keys_IsKeyDown(localClientNum, 132) )
  {
    __asm
    {
      vmulss  xmm0, xmm7, xmm6
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm8, xmm6
      vmovss  dword ptr [rdi], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
    }
    goto LABEL_10;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, 21) || !v12 && CL_Keys_IsKeyDown(localClientNum, 133) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmulss  xmm1, xmm7, xmm6
      vsubss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm0, dword ptr [rdi+4]
      vmulss  xmm2, xmm8, xmm6
      vsubss  xmm1, xmm0, xmm2
    }
LABEL_10:
    __asm { vmovss  dword ptr [rdi+4], xmm1 }
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+6950h]
    vmovss  xmm8, dword ptr [rbx+6954h]
  }
  if ( CL_Keys_IsKeyDown(localClientNum, 22) || CL_Keys_IsKeyDown(localClientNum, 134) )
  {
    __asm
    {
      vmulss  xmm0, xmm7, xmm6
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm8, xmm6
      vmovss  dword ptr [rdi], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
    }
  }
  else
  {
    if ( !CL_Keys_IsKeyDown(localClientNum, 23) && !CL_Keys_IsKeyDown(localClientNum, 135) )
      goto LABEL_32;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmulss  xmm1, xmm7, xmm6
      vsubss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm0, dword ptr [rdi+4]
      vmulss  xmm2, xmm8, xmm6
      vsubss  xmm1, xmm0, xmm2
    }
  }
LABEL_31:
  __asm { vmovss  dword ptr [rdi+4], xmm1 }
LABEL_32:
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_48]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  if ( !s_createFxTool->keyNeedsRelease[2] && CL_Keys_IsKeyDown(localClientNum, 2) )
    goto LABEL_40;
  if ( CL_Keys_IsKeyDown(localClientNum, 4) || CL_Keys_IsKeyDown(localClientNum, 132) && v12 )
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovaps xmm6, [rsp+68h+var_28]
    }
    return;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, 133) && v12 )
  {
LABEL_40:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
CG_CreateFx_EffectField_AddNewScriptStringToPalette
==============
*/
const char *CG_CreateFx_EffectField_AddNewScriptStringToPalette(CreateFxAssetPalette *palette, const char *const asset)
{
  scr_string_t String; 
  const char *v5; 
  bool v6; 
  __int64 v7; 

  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7914, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !s_createFxTool->imported && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7915, ASSERT_TYPE_ASSERT, "(s_createFxTool->imported)", (const char *)&queryFormat, "s_createFxTool->imported") )
    __debugbreak();
  String = SL_GetString(asset, 0);
  v5 = SL_ConvertToString(String);
  v6 = CreateFxAssetPalette::add(palette, v5, NULL);
  v7 = 0i64;
  if ( v6 )
    return v5;
  return (const char *)v7;
}

/*
==============
CG_CreateFx_EffectField_BeginEdit
==============
*/
void CG_CreateFx_EffectField_BeginEdit(int type)
{
  __int64 skipFirst; 

  if ( !s_createFxTool->imported && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7849, ASSERT_TYPE_ASSERT, "(s_createFxTool->imported)", (const char *)&queryFormat, "s_createFxTool->imported") )
    __debugbreak();
  if ( type == 9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7850, ASSERT_TYPE_ASSERT, "(type != CreateFxEffectFieldType::BOOL)", (const char *)&queryFormat, "type != CreateFxEffectFieldType::BOOL") )
      __debugbreak();
LABEL_7:
    LODWORD(skipFirst) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7906, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_BeginEdit: unhandled field type '%d'", skipFirst) )
      __debugbreak();
  }
  else
  {
    switch ( type )
    {
      case 0:
        CG_CreateFx_OpenAssetListWithEnum("PROPERTIES: Type", CG_CreateFx_OnPaletteSelected_EffectType, OMITTED, createFxEffectTypeStrings, 7, 1, s_createFxTool->editEffectType);
        break;
      case 1:
        CG_CreateFx_OpenAssetListWithPalette("PROPERTIES: Layer", CG_CreateFx_OnPaletteSelected_Layer, BOOL, &s_createFX_paletteLayers);
        break;
      case 2:
      case 3:
        s_menuFocus = EDIT;
        break;
      case 4:
        CG_CreateFx_OpenAssetListWithPalette("PROPERTIES: FX", CG_CreateFx_OnPaletteSelected_Field, VEC3, &s_createFX_paletteFX);
        break;
      case 5:
        CG_CreateFx_OpenAssetListWithPalette("PROPERTIES: SOUND", CG_CreateFx_OnPaletteSelected_Field, INT, &s_createFX_paletteSounds);
        break;
      case 6:
        CG_CreateFx_OpenAssetListWithPalette("PROPERTIES: EXPLODER", CG_CreateFx_OnPaletteSelected_Field, VEC3|BYTE, &s_createFX_paletteExploderGroups);
        break;
      case 7:
        CG_CreateFx_OpenAssetListWithPalette("PROPERTIES: EARTHQUAKE", CG_CreateFx_OnPaletteSelected_Field, INT|BYTE, &s_createFX_paletteEarthquakeGroups);
        break;
      case 8:
        CG_CreateFx_OpenAssetListWithPalette("PROPERTIES: RUMBLE", CG_CreateFx_OnPaletteSelected_Field, (const CreateFxEffectFieldType)8, &s_createFX_paletteRumbleGroups);
        break;
      default:
        goto LABEL_7;
    }
  }
}

/*
==============
CG_CreateFx_EffectField_Get
==============
*/
const char *CG_CreateFx_EffectField_Get(const int storageIndex, const CreateFxEffectFieldInfo *fieldInfo)
{
  __int64 v3; 
  CreateFxEffectType effectType; 
  __int64 v6; 
  const char *result; 
  const char *v16; 
  const char ***v17; 
  char *v18; 
  scr_string_t *v19; 
  __int64 v20; 

  v3 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7705, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  if ( *(int *)fieldInfo->type < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7706, ASSERT_TYPE_ASSERT, "(fieldInfo.type >= CreateFxEffectFieldType::VARIABLE_BEGIN)", (const char *)&queryFormat, "fieldInfo.type >= CreateFxEffectFieldType::VARIABLE_BEGIN") )
    __debugbreak();
  effectType = s_createFxTool->scratchDataState[v3].effectType;
  v6 = v3;
  _RBX = NULL;
  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
  {
    _RBX = &s_createFxTool->scratchData[v6];
  }
  else
  {
    LODWORD(v20) = effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3325, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectBytes: unhandled effect type '%d'", v20) )
      __debugbreak();
  }
  switch ( *(_DWORD *)fieldInfo->type )
  {
    case 2:
      _RAX = fieldInfo->ofs;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+rax]
        vcvtss2sd xmm1, xmm1, xmm1
      }
      goto LABEL_17;
    case 3:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+rbx]
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vcvtss2sd xmm1, xmm1, xmm1
      }
LABEL_17:
      __asm { vmovq   rdx, xmm1 }
      return j_va("%g", *(double *)&_XMM1);
    case 4:
      v17 = (const char ***)((char *)_RBX + fieldInfo->ofs);
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7736, ASSERT_TYPE_ASSERT, "(fxDef)", (const char *)&queryFormat, "fxDef") )
        __debugbreak();
      if ( !*v17 )
        goto LABEL_37;
      result = CreateFxAssetPalette::getAliasForAsset(&s_createFX_paletteFX, **v17);
      break;
    case 5:
      v18 = (char *)_RBX + fieldInfo->ofs;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7748, ASSERT_TYPE_ASSERT, "(lookup)", (const char *)&queryFormat, "lookup") )
        __debugbreak();
      return *(const char **)v18;
    case 6:
    case 7:
    case 8:
      v19 = (scr_string_t *)((char *)_RBX + fieldInfo->ofs);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7759, ASSERT_TYPE_ASSERT, "(stringValue)", (const char *)&queryFormat, "stringValue") )
        __debugbreak();
      return SL_ConvertToString(*v19);
    case 9:
      v16 = "false";
      if ( *((_BYTE *)_RBX->oneShotFxDef.origin.v + fieldInfo->ofs) )
        return "true";
      return v16;
    default:
      LODWORD(v20) = *(_DWORD *)fieldInfo->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7764, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_Get: unhandled field type '%d'", v20) )
        __debugbreak();
LABEL_37:
      result = "(null)";
      break;
  }
  return result;
}

/*
==============
CG_CreateFx_EffectField_Set
==============
*/
void CG_CreateFx_EffectField_Set(const int storageIndex, const CreateFxEffectFieldInfo *fieldInfo, const char *asset)
{
  __int64 v4; 
  scr_string_t v13; 
  __int64 v14; 

  v4 = storageIndex;
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7774, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !s_createFxTool->imported && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7775, ASSERT_TYPE_ASSERT, "(s_createFxTool->imported)", (const char *)&queryFormat, "s_createFxTool->imported") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x4000 )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7776, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v14, 0x4000) )
      __debugbreak();
  }
  _RBX = NULL;
  if ( s_createFxTool->scratchDataState[v4].effectType == 1 || s_createFxTool->scratchDataState[v4].effectType == 2 || s_createFxTool->scratchDataState[v4].effectType == 3 || s_createFxTool->scratchDataState[v4].effectType == Menu || s_createFxTool->scratchDataState[v4].effectType == 5 )
  {
    _RBX = &s_createFxTool->scratchData[v4];
  }
  else
  {
    LODWORD(v14) = s_createFxTool->scratchDataState[v4].effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3325, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectBytes: unhandled effect type '%d'", v14) )
      __debugbreak();
  }
  switch ( *(_DWORD *)fieldInfo->type )
  {
    case 2:
      *(double *)&_XMM0 = atof(asset);
      _RAX = fieldInfo->ofs;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rbx+rax], xmm1
      }
      break;
    case 3:
      *(double *)&_XMM0 = atof(asset);
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmulss  xmm2, xmm1, cs:__real@447a0000
        vcvttss2si ecx, xmm2
      }
      *(_DWORD *)((char *)_RBX->oneShotFxDef.origin.v + fieldInfo->ofs) = _ECX;
      break;
    case 4:
      CG_CreateFx_SetEffectFx(v4, asset);
      break;
    case 5:
      CG_CreateFx_SetEffectSoundalias(v4, asset);
      break;
    case 6:
    case 7:
    case 8:
      v13 = *(_DWORD *)((char *)_RBX->oneShotFxDef.origin.v + fieldInfo->ofs);
      if ( v13 )
        SL_RemoveRefToString(v13);
      *(_DWORD *)((char *)_RBX->oneShotFxDef.origin.v + fieldInfo->ofs) = SL_GetString(asset, 0);
      break;
    case 9:
      *((_BYTE *)_RBX->oneShotFxDef.origin.v + fieldInfo->ofs) = *asset == 49 || *asset == 116;
      break;
    default:
      LODWORD(v14) = *(_DWORD *)fieldInfo->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7841, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_Set: unhandled field type '%d'", v14) )
        __debugbreak();
      break;
  }
}

/*
==============
CG_CreateFx_EffectField_SetForSelected
==============
*/
char CG_CreateFx_EffectField_SetForSelected(const CreateFxEffectType effectType, const int fieldIndex, const char *asset, bool isNewAssetName)
{
  __int64 v4; 
  __int64 v6; 
  bool v8; 
  CreateFxAssetPalette *v14; 
  CreateFxTool *v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  char result; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  SndAliasList *outAlias; 
  CreateFxEffectFieldInfo fieldInfo; 
  bool outIsAlwaysLoaded; 

  v4 = fieldIndex;
  v6 = effectType;
  if ( effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7990, ASSERT_TYPE_ASSERT, "(effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectType != CreateFxEffectType::None") )
    __debugbreak();
  if ( (int)v4 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7991, ASSERT_TYPE_ASSERT, "(fieldIndex >= 0)", (const char *)&queryFormat, "fieldIndex >= 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6585, ASSERT_TYPE_ASSERT, "(fieldIndex >= 0)", (const char *)&queryFormat, "fieldIndex >= 0") )
      __debugbreak();
  }
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)v6 < 6 )
      goto LABEL_17;
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6590, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFields ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFields )\n\t%i not in [0, %i)", v20, 6) )
      __debugbreak();
    LODWORD(v23) = 6;
    LODWORD(v21) = v6;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6591, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFieldCount ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFieldCount )\n\t%i not in [0, %i)", v21, v23);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6586, ASSERT_TYPE_ASSERT, "(effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectType != CreateFxEffectType::None");
  }
  if ( v8 )
    __debugbreak();
LABEL_17:
  _RSI = s_createFxEffectFields[v6];
  if ( (unsigned int)v4 >= s_createFxEffectFieldCount[v6] )
  {
    LODWORD(v22) = s_createFxEffectFieldCount[v6];
    LODWORD(v20) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6596, ASSERT_TYPE_ASSERT, "(unsigned)( fieldIndex ) < (unsigned)( fieldCount )", "fieldIndex doesn't index fieldCount\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  _RCX = 3 * v4;
  __asm
  {
    vmovups xmm1, xmmword ptr [rsi+rcx*8]
    vmovsd  xmm0, qword ptr [rsi+rcx*8+10h]
    vmovd   ebx, xmm1
    vmovups xmmword ptr [rsp+88h+fieldInfo.type], xmm1
    vmovsd  [rsp+88h+fieldInfo.description], xmm0
  }
  if ( !_EBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7995, ASSERT_TYPE_ASSERT, "(fieldInfo.type != CreateFxEffectFieldType::FXTYPE)", (const char *)&queryFormat, "fieldInfo.type != CreateFxEffectFieldType::FXTYPE") )
    __debugbreak();
  if ( isNewAssetName )
  {
    if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7931, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    if ( !s_createFxTool->imported && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7932, ASSERT_TYPE_ASSERT, "(s_createFxTool->imported)", (const char *)&queryFormat, "s_createFxTool->imported") )
      __debugbreak();
    if ( ((unsigned int)(_EBX - 2) <= 1 || _EBX == 9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7933, ASSERT_TYPE_ASSERT, "(type != CreateFxEffectFieldType::FLOAT && type != CreateFxEffectFieldType::DELAY && type != CreateFxEffectFieldType::BOOL)", (const char *)&queryFormat, "type != CreateFxEffectFieldType::FLOAT && type != CreateFxEffectFieldType::DELAY && type != CreateFxEffectFieldType::BOOL") )
      __debugbreak();
    switch ( _EBX )
    {
      case 0:
      case 4:
        goto $LN92_4;
      case 5:
        if ( !SND_TryFindAliasForCaching(asset, &outAlias, &outIsAlwaysLoaded) || !CreateFxAssetPalette::add(&s_createFX_paletteSounds, outAlias->aliasName, NULL) )
          goto $LN92_4;
        asset = outAlias->aliasName;
        goto LABEL_42;
      case 6:
        v14 = &s_createFX_paletteExploderGroups;
        goto LABEL_41;
      case 7:
        v14 = &s_createFX_paletteEarthquakeGroups;
        goto LABEL_41;
      case 8:
        v14 = &s_createFX_paletteRumbleGroups;
LABEL_41:
        asset = CG_CreateFx_EffectField_AddNewScriptStringToPalette(v14, asset);
LABEL_42:
        if ( asset )
          goto LABEL_43;
        goto $LN92_4;
      default:
        LODWORD(v20) = _EBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7980, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_AttemptToAddNewAssetToPalette: unhandled field type '%d'", v20) )
          __debugbreak();
$LN92_4:
        result = 0;
        break;
    }
  }
  else
  {
LABEL_43:
    v15 = s_createFxTool;
    v16 = 0;
    if ( s_createFxTool->selectedEffectTotal > 0 )
    {
      v17 = 7209180i64;
      do
      {
        v18 = *(int *)(&v15->inited + v17);
        if ( v15->scratchDataState[v18].effectType != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8009, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType == effectType)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType == effectType") )
          __debugbreak();
        CG_CreateFx_StopEffect(v18);
        CG_CreateFx_EffectField_Set(v18, &fieldInfo, asset);
        CG_CreateFx_StartEffect(v18);
        v15 = s_createFxTool;
        ++v16;
        v17 += 4i64;
      }
      while ( v16 < s_createFxTool->selectedEffectTotal );
    }
    return 1;
  }
  return result;
}

/*
==============
CG_CreateFx_EffectsAreEqual
==============
*/
bool CG_CreateFx_EffectsAreEqual(const CreateFxDataState *leftState, const CreateFXDataUnion *leftData, const CreateFxDataState *rightState, const CreateFXDataUnion *rightData)
{
  CreateFxEffectType effectType; 
  CreateFxEffectType v5; 
  size_t v19; 
  __int64 v20; 
  _BYTE Buf2[96]; 
  _BYTE Buf1[96]; 

  effectType = leftState->effectType;
  v5 = rightState->effectType;
  _R15 = rightData;
  _R14 = leftData;
  if ( effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2025, ASSERT_TYPE_ASSERT, "(leftType != CreateFxEffectType::None)", (const char *)&queryFormat, "leftType != CreateFxEffectType::None") )
    __debugbreak();
  if ( v5 == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2026, ASSERT_TYPE_ASSERT, "(rightType != CreateFxEffectType::None)", (const char *)&queryFormat, "rightType != CreateFxEffectType::None") )
    __debugbreak();
  if ( effectType != v5 )
    return 0;
  if ( !leftState->layer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2032, ASSERT_TYPE_ASSERT, "(leftState.layer)", (const char *)&queryFormat, "leftState.layer") )
    __debugbreak();
  if ( !rightState->layer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2033, ASSERT_TYPE_ASSERT, "(rightState.layer)", (const char *)&queryFormat, "rightState.layer") )
    __debugbreak();
  if ( leftState->layer != rightState->layer )
    return 0;
  __asm
  {
    vmovups ymm1, ymmword ptr [r14+20h]
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rsp+158h+Buf1], ymm0
    vmovups ymm0, ymmword ptr [r14+40h]
    vmovups [rsp+158h+var_98], ymm1
    vmovsd  xmm1, qword ptr [r14+60h]
    vmovups [rsp+158h+var_78], ymm0
    vmovups ymm0, ymmword ptr [r15]
    vmovsd  [rsp+158h+var_58], xmm1
    vmovups ymm1, ymmword ptr [r15+20h]
    vmovups [rsp+158h+Buf2], ymm0
    vmovups ymm0, ymmword ptr [r15+40h]
    vmovups [rsp+158h+var_108], ymm1
    vmovsd  xmm1, qword ptr [r15+60h]
    vmovups [rsp+158h+var_E8], ymm0
    vmovsd  [rsp+158h+var_C8], xmm1
  }
  switch ( effectType )
  {
    case 1:
      goto LABEL_26;
    case 2:
      v19 = 40i64;
      break;
    case 3:
      v19 = 104i64;
      break;
    case 4:
      v19 = 48i64;
      break;
    case 5:
LABEL_26:
      v19 = 56i64;
      return memcmp_0(Buf1, Buf2, v19) == 0;
    default:
      LODWORD(v20) = effectType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2083, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectsAreEqual: unhandled effect type '%d'", v20) )
        __debugbreak();
      return 0;
  }
  return memcmp_0(Buf1, Buf2, v19) == 0;
}

/*
==============
CG_CreateFx_EnterRoot
==============
*/
void CG_CreateFx_EnterRoot(const char *rootName, const vec3_t *rootOrigin, const vec3_t *rootAngles)
{
  int v6; 
  __int64 i; 
  __int64 v8; 
  unsigned __int8 v9; 
  CreateFxTool *v10; 

  if ( I_strempty(rootName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1848, ASSERT_TYPE_ASSERT, "(!I_strempty( rootName ))", (const char *)&queryFormat, "!I_strempty( rootName )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1849, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS )") )
    __debugbreak();
  if ( CG_CreateFx_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1850, ASSERT_TYPE_ASSERT, "(!CG_CreateFx_IsEnabled())", (const char *)&queryFormat, "!CG_CreateFx_IsEnabled()") )
    __debugbreak();
  Com_Printf_NoFilter("[CreateFx] EnterRoot %s\n", rootName);
  if ( !s_doingTemporaryCreateFxActivation )
  {
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v6 = truncate_cast<int,unsigned __int64>(0x15ui64) + 1;
    if ( s_cmd_superUser_textArray[0].cmdsize + v6 <= s_cmd_superUser_textArray[0].maxsize )
    {
      for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v8] = v9 )
      {
        v8 = v6 + i;
        v9 = s_cmd_superUser_textArray[0].data[i--];
      }
      memcpy_0(s_cmd_superUser_textArray[0].data, "exec createfx2_enter\n", v6 - 1);
      s_cmd_superUser_textArray[0].data[v6 - 1] = 10;
      s_cmd_superUser_textArray[0].cmdsize += v6;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  CG_CreateFx_InitializeIfNeeded();
  if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
  {
    Com_Printf_NoFilter("[CreateFx] Import SKIPPED because loading the same map we had previously loaded\n");
  }
  else
  {
    s_createFxTool->imported = 0;
    if ( !CG_CreateFx_Import(rootName, rootOrigin, rootAngles) )
    {
      Com_Printf_NoFilter("[CreateFx] Import FAILED\n");
      return;
    }
  }
  s_createFxTool->autosaveDisabledDvar = Dvar_RegisterBool("LSKQLLQTQK", 0, 0, "When true, prevents CreateFx tool from autosaving");
  s_createFxTool->autosaveIntervalDvar = Dvar_RegisterInt("LLSKKNPTRM", 300, 1, 0x7FFFFFFF, 0, "Interval (in seconds) of how often CreateFx should autosave");
  Dvar_SetBool_Internal(DVARBOOL_createfx_enabled, 1);
  v10 = s_createFxTool;
  s_createFxTool->nextAutosaveTime = 0;
  *(_QWORD *)&v10->exportLayerStackCount = 0i64;
  *(_WORD *)&v10->loadedManually = 256;
  v10->enabled = 1;
  Com_Printf_NoFilter("[CreateFx] Ready\n");
}

/*
==============
CG_CreateFx_Enter_f
==============
*/

void __fastcall CG_CreateFx_Enter_f(double _XMM0_8)
{
  const dvar_t *v1; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  int RootLookAt; 
  ClientRootDef *v4; 
  const char *v5; 
  vec3_t *p_angles; 
  vec3_t *p_origin; 
  char *v9; 
  const char *v10; 
  __int64 v11; 
  char *v12; 
  vec3_t rootAngles; 
  vec3_t rootOrigin; 
  char dest[64]; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && (!s_createFxTool || !s_createFxTool->enabled) )
  {
    v1 = DCONST_DVARBOOL_cg_cfx_debug_effects;
    if ( !DCONST_DVARBOOL_cg_cfx_debug_effects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_effects") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled && CG_HaveMapEntsEffectsMultipleRoots() )
    {
      ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
      RootLookAt = CgClientSideEffectsSystem::GetRootLookAt(ClientSideEffectsSystem);
      if ( RootLookAt != -1 )
      {
        v4 = &cm.mapEnts->clientSideEffects.roots[RootLookAt];
        v5 = SL_ConvertToStringSafe(v4->path);
        if ( I_strstr(v5, "prefabs/") == v5 )
        {
          v10 = v5 + 8;
          v11 = -1i64;
          do
            ++v11;
          while ( v10[v11] );
          Core_strncpy(rootName, 0x40ui64, v10, (unsigned int)v11);
          v12 = strstr_0(rootName, ".map");
          if ( v12 )
          {
            *v12 = 0;
            if ( rootName[0] )
            {
              p_angles = &v4->angles;
              p_origin = &v4->origin;
              v9 = rootName;
LABEL_17:
              CG_CreateFx_EnterRoot(v9, p_origin, p_angles);
              return;
            }
          }
          else
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280C10, 335i64, v5, ".map");
          }
        }
        else
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280BB0, 334i64, v5, "client_createfx_root", "prefabs/");
        }
      }
      Com_Printf_NoFilter("[CreateFx] No root look at, reverting to base map\n");
    }
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    Com_sprintf<64>((char (*)[64])dest, "%s%s_cfx", "createfx/", cls.m_activeGameMapName);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0B8h+rootAngles], xmm0
      vmovss  dword ptr [rsp+0B8h+rootAngles+4], xmm0
      vmovss  dword ptr [rsp+0B8h+rootAngles+8], xmm0
      vmovss  dword ptr [rsp+0B8h+rootOrigin], xmm0
      vmovss  dword ptr [rsp+0B8h+rootOrigin+4], xmm0
      vmovss  dword ptr [rsp+0B8h+rootOrigin+8], xmm0
    }
    p_angles = &rootAngles;
    p_origin = &rootOrigin;
    v9 = dest;
    goto LABEL_17;
  }
}

/*
==============
CG_CreateFx_EvaluateSelectionHomogeneity
==============
*/
__int64 CG_CreateFx_EvaluateSelectionHomogeneity()
{
  CreateFxTool *v0; 
  int v1; 
  int selectedEffectTotal; 
  char v3; 
  CreateFxEffectType effectType; 
  int *v5; 
  __int64 result; 

  v0 = s_createFxTool;
  if ( s_createFxTool->selectedEffectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2574, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectedEffectTotal > 0)", (const char *)&queryFormat, "s_createFxTool->selectedEffectTotal > 0") )
      __debugbreak();
    v0 = s_createFxTool;
  }
  v1 = 1;
  selectedEffectTotal = v0->selectedEffectTotal;
  v3 = 1;
  effectType = v0->scratchDataState[v0->selectedEffectList[0]].effectType;
  if ( selectedEffectTotal > 1 )
  {
    v5 = &v0->selectedEffectList[1];
    while ( v0->scratchDataState[*v5].effectType == effectType )
    {
      ++v1;
      ++v5;
      if ( v1 >= selectedEffectTotal )
        goto LABEL_11;
    }
    v3 = 0;
  }
LABEL_11:
  result = 0i64;
  v0->selectionHomogeneous = v3;
  if ( v3 )
    result = (unsigned int)effectType;
  v0->editEffectType = result;
  return result;
}

/*
==============
CG_CreateFx_ExitAllMenus
==============
*/
__int64 CG_CreateFx_ExitAllMenus()
{
  __int64 result; 

  result = (unsigned int)s_menuPathCount;
  if ( s_menuPathCount > 0 )
  {
    do
    {
      result = (unsigned int)(result - 1);
      s_menuPathCount = result;
    }
    while ( (int)result > 0 );
  }
  s_menuFocus = WORLD;
  return result;
}

/*
==============
CG_CreateFx_Exit_f
==============
*/
void CG_CreateFx_Exit_f()
{
  CreateFxTool *v0; 
  const dvar_t *v1; 
  CreateFxTool *v2; 
  int v3; 
  __int64 i; 
  __int64 v5; 
  unsigned __int8 v6; 
  bool v7; 
  int j; 
  CreateFxTool *v9; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 

  Com_Printf_NoFilter("[CreateFx] Exit\n");
  v0 = s_createFxTool;
  if ( s_createFxTool && s_createFxTool->enabled )
  {
    if ( s_createFxTool->needToExport && s_createFxTool->hasBeenEnabled )
    {
      if ( s_createFxTool->lastExportInProgress )
        Com_PrintWarning(0, "[CreateFx] Cannot export because an export is already in progress\n");
      else
        CG_CreateFx_Export(0);
      v0 = s_createFxTool;
    }
    v1 = Dvar_Deregister(v0->autosaveDisabledDvar);
    v2 = s_createFxTool;
    s_createFxTool->autosaveDisabledDvar = v1;
    s_createFxTool->autosaveIntervalDvar = Dvar_Deregister(v2->autosaveIntervalDvar);
    Dvar_SetBool_Internal(DVARBOOL_createfx_enabled, 0);
    if ( !s_doingTemporaryCreateFxActivation )
    {
      Sys_EnterCriticalSection(CRITSECT_CBUF);
      v3 = truncate_cast<int,unsigned __int64>(0x14ui64) + 1;
      if ( s_cmd_superUser_textArray[0].cmdsize + v3 <= s_cmd_superUser_textArray[0].maxsize )
      {
        for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v5] = v6 )
        {
          v5 = v3 + i;
          v6 = s_cmd_superUser_textArray[0].data[i--];
        }
        memcpy_0(s_cmd_superUser_textArray[0].data, "exec createfx2_exit\n", v3 - 1);
        s_cmd_superUser_textArray[0].data[v3 - 1] = 10;
        s_cmd_superUser_textArray[0].cmdsize += v3;
      }
      else
      {
        Com_PrintError(1, "Cbuf_InsertText overflowed\n");
      }
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
    }
    s_doingTemporaryCreateFxActivation = 0;
    v7 = !s_createFxTool->loadedManually;
    s_createFxTool->enabled = 0;
    if ( !v7 || CG_HaveMapEntsEffectsMultipleRoots() )
    {
      Com_Printf_NoFilter("[CreateFx] Disable (either multi-root or loadedManually)\n");
      CG_CreateFx_FreeStrings();
      CG_CreateFx_StopAllEffects();
      CG_CreateFx_ClearEffectsData();
      for ( j = s_menuPathCount; j > 0; s_menuPathCount = j )
        --j;
      v9 = s_createFxTool;
      s_menuFocus = WORLD;
      s_createFxTool->imported = 0;
      v9->hasBeenEnabled = 0;
      Com_Printf_NoFilter("[CreateFx] Restarting compiled client-side effects\n");
      ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
      CgClientSideEffectsSystem::Restart(ClientSideEffectsSystem);
    }
    Com_Printf_NoFilter("[CreateFx] Exit COMPLETE\n");
  }
}

/*
==============
CG_CreateFx_Export
==============
*/
void CG_CreateFx_Export(const bool isAutosave)
{
  CreateFxMapLayerDef *layerList; 
  const CreateFxMapLayerDef *ActiveLayer; 
  CreateFxTool *v4; 
  int v5; 
  const CreateFxMapLayerDef *v6; 

  if ( s_createFxTool->lastExportInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8423, ASSERT_TYPE_ASSERT, "(!s_createFxTool->lastExportInProgress)", (const char *)&queryFormat, "!s_createFxTool->lastExportInProgress") )
    __debugbreak();
  layerList = s_createFxTool->layerList;
  ActiveLayer = CG_CreateFx_GetActiveLayer();
  if ( !ActiveLayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8427, ASSERT_TYPE_ASSERT, "(activeLayer)", (const char *)&queryFormat, "activeLayer") )
    __debugbreak();
  if ( ActiveLayer->filtered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8428, ASSERT_TYPE_ASSERT, "(!activeLayer->filtered)", (const char *)&queryFormat, "!activeLayer->filtered") )
    __debugbreak();
  v4 = s_createFxTool;
  if ( s_createFxTool->needToExportAllLayers )
  {
    v5 = s_createFxTool->layerListTotal - 1;
    s_createFxTool->exportLayerStackCount = 0;
    if ( v5 >= 0 )
    {
      v6 = &v4->layerList[v5];
      do
      {
        v4->exportLayerStack[v4->exportLayerStackCount++] = v6--;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
  else if ( !s_createFxTool->needToExportRootLayer || layerList == ActiveLayer )
  {
    CG_CreateFx_ExportLayer(ActiveLayer, isAutosave);
    v4 = s_createFxTool;
  }
  else
  {
    s_createFxTool->exportLayerStack[0] = ActiveLayer;
    v4->exportLayerStack[1] = layerList;
    v4->exportLayerStackCount = 2;
  }
  if ( !isAutosave )
  {
    *(_WORD *)&v4->needToExport = 0;
    v4->needToExportAllLayers = 0;
  }
}

/*
==============
CG_CreateFx_ExportAll_f
==============
*/
void CG_CreateFx_ExportAll_f()
{
  if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
  {
    if ( s_createFxTool->lastExportInProgress )
    {
      Com_PrintWarning(0, "[CreateFx] Cannot export because an export is already in progress\n");
    }
    else
    {
      s_createFxTool->needToExportAllLayers = 1;
      CG_CreateFx_Export(0);
    }
  }
}

/*
==============
CG_CreateFx_ExportLayer
==============
*/
__int64 CG_CreateFx_ExportLayer(const CreateFxMapLayerDef *const layerDef, bool isAutosave)
{
  bool v2; 
  const char *v4; 
  fileHandle_t *v5; 
  __int64 handle; 
  const char *v7; 
  __int64 result; 
  CreateFxTool *v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v36; 
  int time; 
  char *fmt; 
  char *fmta; 
  double v40; 
  double v41; 
  fileHandle_t outFile; 
  fileHandle_t dest[34]; 
  char v45[272]; 
  char v46[272]; 
  char v47[272]; 

  v2 = isAutosave;
  if ( !layerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8322, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
    __debugbreak();
  if ( !layerDef->pathString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8323, ASSERT_TYPE_ASSERT, "(layerDef->pathString)", (const char *)&queryFormat, "layerDef->pathString") )
    __debugbreak();
  if ( layerDef->filtered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8324, ASSERT_TYPE_ASSERT, "(!layerDef->filtered)", (const char *)&queryFormat, "!layerDef->filtered") )
    __debugbreak();
  if ( s_createFxTool->lastExportInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8325, ASSERT_TYPE_ASSERT, "(!s_createFxTool->lastExportInProgress)", (const char *)&queryFormat, "!s_createFxTool->lastExportInProgress") )
    __debugbreak();
  Com_sprintf((char *)dest, 0x104ui64, "%s%s", layerDef->pathString, ".sav");
  v5 = FS_FOpenFileWriteToDir(dest, "main", v4);
  outFile.handle.handle = (__int64)v5;
  handle = (__int64)v5;
  if ( v5 == (fileHandle_t *)-1i64 )
  {
    v7 = j_va("Couldn't open temp file '%s'", (const char *)dest);
    Com_PrintError(1, "ERROR: %s\n", v7);
    CG_CreateFx_PrintError(v7);
    s_createFxTool->lastExportInProgress = 0;
    return 0i64;
  }
  else
  {
    FS_Printf((fileHandle_t)v5, "iwmap %d\n", 13i64);
    FS_Printf((fileHandle_t)handle, "layers\n");
    FS_Printf((fileHandle_t)handle, "{\n");
    FS_Printf((fileHandle_t)handle, "\t\"The Map\"\n");
    FS_Printf((fileHandle_t)handle, "\t\"000_Global\" flags active\n");
    FS_Printf((fileHandle_t)handle, "}\n");
    FS_Printf((fileHandle_t)handle, "entity 0\n");
    FS_Printf((fileHandle_t)handle, "{\n");
    FS_Printf((fileHandle_t)handle, "\t\"origin\" \"0 0 0\"\n");
    FS_Printf((fileHandle_t)handle, "\t\"classname\" \"worldspawn\"\n");
    FS_Printf((fileHandle_t)handle, "\t\"createfxversion\" \"%s\"\n", "2.8");
    FS_Printf((fileHandle_t)handle, "}\n");
    v9 = s_createFxTool;
    v10 = 0;
    v11 = 1;
    v12 = 0;
    v13 = 1;
    if ( s_createFxTool->usedEffectTotal > 0 )
    {
      v14 = 7078100i64;
      do
      {
        v15 = *(int *)(&v9->inited + v14);
        if ( v9->scratchDataState[v15].layer == layerDef )
        {
          FS_Printf((fileHandle_t)handle, "entity %d\n", v13);
          FS_Printf((fileHandle_t)handle, "{\n");
          CG_CreateFx_WriteEffectToFile(v15, &outFile);
          handle = outFile.handle.handle;
          FS_Printf(outFile, "}\n");
          v9 = s_createFxTool;
          ++v10;
          ++v13;
        }
        ++v12;
        v14 += 4i64;
      }
      while ( v12 < v9->usedEffectTotal );
      v2 = isAutosave;
    }
    if ( v9->layerListTotal <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8373, ASSERT_TYPE_ASSERT, "(s_createFxTool->layerListTotal > 0)", (const char *)&queryFormat, "s_createFxTool->layerListTotal > 0") )
        __debugbreak();
      v9 = s_createFxTool;
    }
    if ( layerDef->path == v9->layerList[0].path )
    {
      if ( v9->layerListTotal > 1 )
      {
        _RDI = 8391616i64;
        do
        {
          FS_Printf((fileHandle_t)handle, "entity %d\n", v13);
          FS_Printf((fileHandle_t)handle, "{\n");
          _RSI = s_createFxTool;
          Com_sprintf(v47, 0x104ui64, "%s%s%s", "prefabs/", *(const char **)((char *)&s_createFxTool->menuDrawMode + _RDI), ".map");
          FS_Printf((fileHandle_t)handle, "\t\"footprint_mask_group\" \"default\"\n");
          FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "model", v47);
          if ( s_createFxTool->rootHasOffset )
          {
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"0 0 0\"\n", "origin");
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"0 0 0\"\n", "angles");
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rsi+120h]
              vmovss  xmm3, dword ptr [rdi+rsi+118h]
              vmovss  xmm1, dword ptr [rdi+rsi+11Ch]
              vcvtss2sd xmm0, xmm0, xmm0
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+4D8h+var_4B0], xmm0
              vmovq   r9, xmm3
              vmovsd  [rsp+4D8h+fmt], xmm1
            }
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%g %g %g\"\n", "origin", *(double *)&_XMM3, *(double *)&fmt, v40);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rsi+12Ch]
              vmovss  xmm3, dword ptr [rdi+rsi+124h]
              vmovss  xmm1, dword ptr [rdi+rsi+128h]
              vcvtss2sd xmm0, xmm0, xmm0
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+4D8h+var_4B0], xmm0
              vmovq   r9, xmm3
              vmovsd  [rsp+4D8h+fmt], xmm1
            }
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%g %g %g\"\n", "angles", *(double *)&_XMM3, *(double *)&fmta, v41);
          }
          v32 = (char *)&_RSI->clipboard + _RDI;
          if ( (CreateFxTool *)((char *)_RSI + _RDI) != (CreateFxTool *)-16i64 && *v32 )
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "mapnamefilter", v32);
          FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "classname", "misc_prefab");
          FS_Printf((fileHandle_t)handle, "}\n");
          ++v13;
          ++v11;
          _RDI += 304i64;
        }
        while ( v11 < s_createFxTool->layerListTotal );
        v2 = isAutosave;
      }
      FS_Printf((fileHandle_t)handle, "entity %d\n", v13);
      FS_Printf((fileHandle_t)handle, "{\n");
      FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "classname", "client_createfx_root");
      FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s%s%s\"\n", "path", "prefabs/", layerDef->pathString, ".map");
      FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "targetname", layerDef->pathString);
      FS_Printf((fileHandle_t)handle, "\t\"%s\" \"0 0 0\"\n", "origin");
      FS_Printf((fileHandle_t)handle, "\t\"%s\" \"0 0 0\"\n", "angles");
      FS_Printf((fileHandle_t)handle, "}\n");
    }
    FS_FCloseFile((fileHandle_t)handle);
    Com_sprintf(v46, 0x104ui64, "/%s/%s", "main", (const char *)dest);
    v33 = (char *)&queryFormat.fmt + 3;
    if ( v2 )
      v33 = "autosave/";
    Com_sprintf(v45, 0x104ui64, "/map_source/%s%s%s%s", "prefabs/", v33, layerDef->pathString, ".map");
    Com_Printf_NoFilter("[CreateFx] Wrote %s to %s\n", layerDef->pathString, v46);
    Com_Printf_NoFilter("[CreateFx] Copying %s to %s\n", layerDef->pathString, v45);
    Dvar_SetBoolByName("unattended", 0);
    v34 = "GAMEPRINTP4ENABLED:";
    if ( v2 )
      v34 = (char *)&queryFormat.fmt + 3;
    Com_Printf_NoFilter("LAUNCHERPRINTLN:GAMEPRINTMOVEFILE:%s:%s%s>%s\n", "iw8", v34, v46, v45);
    s_createFxTool->lastExportInProgress = 1;
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v36 = s_createFxTool;
    time = LocalClientGlobals->time;
    result = v10;
    s_createFxTool->lastExportTime = time;
    v36->lastExportAutosave = v2;
  }
  return result;
}

/*
==============
CG_CreateFx_Export_f
==============
*/
void CG_CreateFx_Export_f()
{
  if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
  {
    if ( s_createFxTool->lastExportInProgress )
      Com_PrintWarning(0, "[CreateFx] Cannot export because an export is already in progress\n");
    else
      CG_CreateFx_Export(0);
  }
}

/*
==============
CG_CreateFx_FilterSettings_ConfirmSelection
==============
*/
void CG_CreateFx_FilterSettings_ConfirmSelection(CreateFxMenuPage *const page)
{
  __int64 selectionIndex; 
  __int64 v3; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6475, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  selectionIndex = page->selectionIndex;
  if ( (_DWORD)selectionIndex )
  {
    if ( (unsigned int)(selectionIndex - 1) <= 5 )
      s_createFxFilter[selectionIndex] = !s_createFxFilter[selectionIndex];
  }
  else
  {
    s_createFxFilter[0] = !s_createFxFilter[0];
    s_createFxFilter[1] = s_createFxFilter[0];
    s_createFxFilter[2] = s_createFxFilter[0];
    s_createFxFilter[3] = s_createFxFilter[0];
    s_createFxFilter[4] = s_createFxFilter[0];
    s_createFxFilter[5] = s_createFxFilter[0];
    s_createFxFilter[6] = s_createFxFilter[0];
  }
  v3 = 1i64;
  while ( s_createFxFilter[v3] )
  {
    if ( ++v3 >= 7 )
    {
      s_createFxFilter[0] = 1;
      return;
    }
  }
  s_createFxFilter[0] = 0;
}

/*
==============
CG_CreateFx_FilterSettings_Draw
==============
*/
void CG_CreateFx_FilterSettings_Draw(CreateFxMenuPage *const page, const ScreenPlacement *const scrPlace)
{
  int v4; 
  unsigned __int8 *v5; 
  const char **v6; 
  const char *v7; 
  const char *v8; 
  CreateFxMenuDrawPage data; 
  CreateFxHintText hints; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6514, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  hints = 34;
  CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, &hints, 1, s_hintsMenuCommon, 2);
  CG_CreateFx_Menu_DrawFrame(&data, "FILTER", 0, 0);
  v4 = 0;
  if ( page->selectionIndexMax > 0 )
  {
    v5 = (unsigned __int8 *)s_createFxFilter;
    v6 = (const char **)createFxEffectTypeStrings;
    do
    {
      v7 = "Show All";
      if ( v4 )
        v7 = *v6;
      v8 = j_va("%d", *v5);
      CG_CreateFx_Menu_DrawRow(&data, v4++, v7, v8, -1, 0);
      ++v6;
      ++v5;
    }
    while ( v4 < page->selectionIndexMax );
  }
}

/*
==============
CG_CreateFx_FilterSettings_Input
==============
*/
bool CG_CreateFx_FilterSettings_Input(CreateFxMenuPage *const page, LocalClientNum_t localClientNum, int key, int down)
{
  int v8; 
  bool result; 
  __int64 selectionIndex; 
  __int64 v11; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6534, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  switch ( CG_CreateFx_Handle_KeyJump(page, localClientNum, key, down) )
  {
    case 1:
    case 13:
      if ( s_menuFocus != MENU || !down )
        return 0;
      if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6475, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
        __debugbreak();
      selectionIndex = page->selectionIndex;
      if ( (_DWORD)selectionIndex )
      {
        if ( (unsigned int)(selectionIndex - 1) <= 5 )
          s_createFxFilter[selectionIndex] = !s_createFxFilter[selectionIndex];
      }
      else
      {
        s_createFxFilter[0] = !s_createFxFilter[0];
        s_createFxFilter[1] = s_createFxFilter[0];
        s_createFxFilter[2] = s_createFxFilter[0];
        s_createFxFilter[3] = s_createFxFilter[0];
        s_createFxFilter[4] = s_createFxFilter[0];
        s_createFxFilter[5] = s_createFxFilter[0];
        s_createFxFilter[6] = s_createFxFilter[0];
      }
      v11 = 1i64;
      break;
    case 2:
    case 27:
      if ( s_menuFocus != MENU || !down )
        return 0;
      CG_CreateFx_MenuMoveBack();
      return 1;
    case 20:
    case 132:
      if ( s_menuFocus != MENU || page->selectionIndex <= 0 || !down )
        return 0;
      v8 = page->selectionIndex - 1;
      goto LABEL_9;
    case 21:
    case 133:
      if ( s_menuFocus == MENU )
      {
        v8 = page->selectionIndex + 1;
        if ( v8 < page->selectionIndexMax )
        {
          if ( down )
LABEL_9:
            page->selectionIndex = v8;
        }
      }
      return 0;
    default:
      return 0;
  }
  while ( s_createFxFilter[v11] )
  {
    if ( ++v11 >= 7 )
    {
      s_createFxFilter[0] = 1;
      return 1;
    }
  }
  result = 1;
  s_createFxFilter[0] = 0;
  return result;
}

/*
==============
CG_CreateFx_FindEffectFieldIndex
==============
*/
__int64 CG_CreateFx_FindEffectFieldIndex(const CreateFxEffectType effectType, int fieldType)
{
  __int64 v2; 
  bool v5; 
  int v6; 
  __int64 v7; 
  CreateFxEffectFieldInfo *v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = effectType;
  if ( fieldType < 2 )
    return (unsigned int)fieldType;
  if ( effectType )
  {
    if ( (unsigned int)effectType < 6 )
      goto LABEL_9;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7308, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFields ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFields )\n\t%i not in [0, %i)", effectType, 6);
  }
  else
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7305, ASSERT_TYPE_ASSERT, "(effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectType != CreateFxEffectType::None");
  }
  if ( v5 )
    __debugbreak();
LABEL_9:
  v6 = 0;
  v7 = s_createFxEffectFieldCount[v2];
  v8 = s_createFxEffectFields[v2];
  if ( v7 <= 0 )
  {
LABEL_13:
    LODWORD(v10) = fieldType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7321, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_FindEffectFieldIndex: failed to find index for variable field type '%d' in effect type '%s'", v10, createFxEffectTypeStrings[v2]) )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  else
  {
    v9 = 0i64;
    while ( *(_DWORD *)v8->type != fieldType )
    {
      ++v6;
      ++v9;
      ++v8;
      if ( v9 >= v7 )
        goto LABEL_13;
    }
    return (unsigned int)(v6 + 2);
  }
}

/*
==============
CG_CreateFx_FinishActiveEdits
==============
*/
void CG_CreateFx_FinishActiveEdits(void)
{
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
  }
}

/*
==============
CG_CreateFx_Frame
==============
*/
void CG_CreateFx_Frame(const cg_t *const cgameGlob)
{
  double v1; 
  const dvar_t *v3; 
  char enabled; 
  CreateFxTool *v5; 
  char v6; 
  int time; 
  const dvar_t *v8; 
  _BYTE *integer64; 
  CreateFxTool *v10; 
  bool IsEditKeyDown; 
  bool v12; 
  void (*deferredCommand)(void); 
  CreateFxTool *v14; 
  int v15; 
  CreateFxTool *v16; 
  int nextAutosaveTime; 
  int v18; 
  vec3_t outOrg; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    if ( s_resumeCreateFxAfterRestart )
    {
      CG_CreateFx_InitializeIfNeeded();
      CG_CreateFx_Resume();
      s_resumeCreateFxAfterRestart = 0;
    }
    v3 = DVARBOOL_createfx_enabled;
    if ( !DVARBOOL_createfx_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "createfx_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    enabled = v3->current.enabled;
    v5 = s_createFxTool;
    v6 = s_createFxTool && s_createFxTool->enabled;
    if ( enabled != v6 )
    {
      if ( enabled )
        CG_CreateFx_Enter_f(v1);
      else
        CG_CreateFx_Exit_f();
      v5 = s_createFxTool;
    }
    if ( v5 )
    {
      if ( v5->hasBeenEnabled )
      {
        CG_CreateFx_UpdatePendingExploders(cgameGlob->time);
        CG_CreateFx_AddSounds(v1);
        v5 = s_createFxTool;
      }
      if ( v5 && v5->enabled )
      {
        if ( NET_RemoteDbgHostConsoleConnected() )
        {
          time = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
          v8 = DVARSTR_launcher_probe_success;
          if ( !DVARSTR_launcher_probe_success && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "launcher_probe_success") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          integer64 = (_BYTE *)v8->current.integer64;
          if ( integer64 && *integer64 )
          {
            Dvar_SetString_Internal(DVARSTR_launcher_probe_success, (const char *)&queryFormat.fmt + 3);
            v10 = s_createFxTool;
            s_createFxTool->lastProbeSuccess = time;
            v10->nextProbeTime = time + 15000;
          }
          else if ( s_createFxTool->lastExportInProgress )
          {
            s_createFxTool->nextProbeTime = time + 15000;
          }
          else if ( s_createFxTool->nextProbeTime < time )
          {
            Com_Printf_NoFilter("LAUNCHERPRINTLN:GAMEPRINTPROBE\n");
            s_createFxTool->nextProbeTime = time + 15000;
          }
        }
        CG_CreateFx_UpdateExportProgress();
        if ( s_interruptCommandActive )
        {
          IsEditKeyDown = CG_CreateFx_IsEditKeyDown();
          v12 = s_interruptCommandActive;
          if ( !IsEditKeyDown )
            v12 = 0;
          s_interruptCommandActive = v12;
        }
        deferredCommand = s_createFxTool->deferredCommand;
        if ( deferredCommand )
        {
          deferredCommand();
          s_createFxTool->deferredCommand = NULL;
        }
        RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
        CG_CreateFx_BuildDrawList(&outOrg, cgameGlob->refdef.view.axis.m);
        v14 = s_createFxTool;
        if ( s_createFxTool->selectedEffectTotal > 0 )
        {
          if ( !DevGui_IsActive() && !Con_IsActive(LOCAL_CLIENT_0) && !s_interruptCommandActive && !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5) && s_menuFocus == WORLD )
            CG_CreateFx_UpdateWorldMove();
          v14 = s_createFxTool;
        }
        if ( !v14->autosaveDisabledDvar->current.enabled && !v14->lastExportInProgress )
        {
          v15 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
          v16 = s_createFxTool;
          nextAutosaveTime = s_createFxTool->nextAutosaveTime;
          v18 = nextAutosaveTime;
          if ( nextAutosaveTime > 0 && v15 >= nextAutosaveTime )
          {
            CG_CreateFx_Export(1);
            v16 = s_createFxTool;
            s_createFxTool->nextAutosaveTime = 0;
            v18 = 0;
          }
          if ( !v18 )
            v16->nextAutosaveTime = v15 + 1000 * v16->autosaveIntervalDvar->current.integer;
        }
        memset(&outOrg, 0, sizeof(outOrg));
      }
    }
  }
}

/*
==============
CG_CreateFx_FreeSoundIndex
==============
*/
void CG_CreateFx_FreeSoundIndex(const int storageIndex)
{
  __int64 v1; 
  __int64 v2; 
  CreateFxTool *v3; 
  __int64 v4; 
  __int64 v5; 

  v1 = storageIndex;
  v2 = s_createFxTool->soundIndexUsage.effectToSoundIndexMap[storageIndex];
  if ( (_DWORD)v2 != 0xFFFF )
  {
    if ( (unsigned int)v2 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3638, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->soundIndexUsage.soundIndexToEffectMap ) ) + 0 ) )", "soundIndex doesn't index s_createFxTool->soundIndexUsage.soundIndexToEffectMap\n\t%i not in [0, %i)", s_createFxTool->soundIndexUsage.effectToSoundIndexMap[storageIndex], 1024) )
      __debugbreak();
    s_createFxTool->soundIndexUsage.soundIndexToEffectMap[v2] = -1;
    if ( (unsigned int)v1 >= 0x4000 )
    {
      LODWORD(v5) = 0x4000;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3641, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchDataState ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchDataState )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = s_createFxTool;
    s_createFxTool->soundIndexUsage.effectToSoundIndexMap[v1] = -1;
    if ( (unsigned int)(v3->scratchDataState[v1].effectType - 1) <= 2 )
    {
      if ( (unsigned int)v2 >= 0x400 )
      {
        LODWORD(v5) = 1024;
        LODWORD(v4) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3651, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( ( 1024 ) )", "soundIndex doesn't index MAX_CLIENT_ENT_SOUNDS\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      s_createFxTool->soundIndexUsage.loopingSoundIndexInUse[v2] = 0;
    }
  }
}

/*
==============
CG_CreateFx_FreeStrings
==============
*/
void CG_CreateFx_FreeStrings()
{
  CreateFxTool *v0; 
  int v1; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  bool *v5; 
  scr_string_t v6; 
  scr_string_t v7; 
  scr_string_t v8; 
  int v9; 
  const char **m_assets; 
  scr_string_t String; 
  int v12; 
  const char **v13; 
  scr_string_t v14; 
  int v15; 
  const char **v16; 
  scr_string_t v17; 
  __int64 v18; 
  scr_string_t v19; 

  v0 = s_createFxTool;
  v1 = 0;
  v2 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v3 = 7078100i64;
    do
    {
      v4 = *(int *)(&v0->inited + v3);
      v5 = &v0->inited + 104 * v4;
      if ( v0->scratchDataState[v4].effectType == 3 )
      {
        v6 = *((_DWORD *)v5 + 1179714);
        if ( v6 )
        {
          SL_RemoveRefToString(v6);
          v0 = s_createFxTool;
        }
        v7 = *((_DWORD *)v5 + 1179723);
        if ( v7 )
        {
          SL_RemoveRefToString(v7);
          v0 = s_createFxTool;
        }
        v8 = *((_DWORD *)v5 + 1179724);
        if ( v8 )
        {
          SL_RemoveRefToString(v8);
          v0 = s_createFxTool;
        }
      }
      ++v2;
      v3 += 4i64;
    }
    while ( v2 < v0->usedEffectTotal );
  }
  v9 = 0;
  if ( s_createFX_paletteExploderGroups.m_count )
  {
    m_assets = s_createFX_paletteExploderGroups.m_assets;
    do
    {
      if ( **m_assets )
      {
        String = SL_FindString(*m_assets);
        if ( String )
          SL_RemoveRefToString(String);
      }
      ++v9;
      ++m_assets;
    }
    while ( v9 < s_createFX_paletteExploderGroups.m_count );
    v0 = s_createFxTool;
  }
  v12 = 0;
  if ( s_createFX_paletteEarthquakeGroups.m_count )
  {
    v13 = s_createFX_paletteEarthquakeGroups.m_assets;
    do
    {
      if ( **v13 )
      {
        v14 = SL_FindString(*v13);
        if ( v14 )
          SL_RemoveRefToString(v14);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < s_createFX_paletteEarthquakeGroups.m_count );
    v0 = s_createFxTool;
  }
  v15 = 0;
  if ( s_createFX_paletteRumbleGroups.m_count )
  {
    v16 = s_createFX_paletteRumbleGroups.m_assets;
    do
    {
      if ( **v16 )
      {
        v17 = SL_FindString(*v16);
        if ( v17 )
          SL_RemoveRefToString(v17);
      }
      ++v15;
      ++v16;
    }
    while ( v15 < s_createFX_paletteRumbleGroups.m_count );
    v0 = s_createFxTool;
  }
  if ( v0->layerListTotal > 0 )
  {
    v18 = 8391312i64;
    do
    {
      v19 = *(_DWORD *)(&v0->inited + v18);
      if ( v19 )
      {
        SL_RemoveRefToString(v19);
        v0 = s_createFxTool;
      }
      ++v1;
      v18 += 304i64;
    }
    while ( v1 < v0->layerListTotal );
  }
}

/*
==============
CG_CreateFx_GetActiveLayer
==============
*/
const CreateFxMapLayerDef *CG_CreateFx_GetActiveLayer()
{
  CreateFxTool *v0; 

  v0 = s_createFxTool;
  if ( !s_createFxTool->activeLayer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9185, ASSERT_TYPE_ASSERT, "(s_createFxTool->activeLayer)", (const char *)&queryFormat, "s_createFxTool->activeLayer") )
      __debugbreak();
    v0 = s_createFxTool;
  }
  return v0->activeLayer;
}

/*
==============
CG_CreateFx_GetCurrentMenu
==============
*/
CreateFxMenuPage *CG_CreateFx_GetCurrentMenu()
{
  return s_menuPath[s_menuPathCount];
}

/*
==============
CG_CreateFx_GetCurrentRootName
==============
*/
const char *CG_CreateFx_GetCurrentRootName()
{
  if ( s_createFxTool && s_createFxTool->enabled && s_createFxTool->layerListTotal > 0 )
    return s_createFxTool->layerList[0].pathString;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
CG_CreateFx_GetEffectAngles
==============
*/
void CG_CreateFx_GetEffectAngles(const CreateFXDataUnion *effectData, const CreateFxEffectType effectType, vec3_t *outAngles)
{
  vec3_t *p_angles; 

  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
  {
    p_angles = &effectData->oneShotFxDef.angles;
    if ( p_angles )
      *outAngles = *p_angles;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3223, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectAngles: unhandled effect type '%d'", effectType) )
  {
    __debugbreak();
  }
}

/*
==============
CG_CreateFx_GetEffectBytes
==============
*/
CreateFXDataUnion *CG_CreateFx_GetEffectBytes(CreateFXDataUnion *effectData, const CreateFxEffectType effectType)
{
  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
    return effectData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3325, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectBytes: unhandled effect type '%d'", effectType) )
    __debugbreak();
  return 0i64;
}

/*
==============
CG_CreateFx_GetEffectColor
==============
*/
void CG_CreateFx_GetEffectColor(CreateFxEffectType effectType, bool isSelected, bool isHighlighted, bool isInOtherLayer, bool isInvalid, bool isOccluded, const vec4_t *errorColor, vec4_t *outColor)
{
  bool v10; 

  _R10 = outColor;
  if ( isInOtherLayer )
  {
    outColor->v[0] = 0.5;
    outColor->v[1] = 0.5;
    outColor->v[2] = 0.5;
    outColor->v[3] = 0.5;
  }
  else if ( isInvalid )
  {
    *outColor = *errorColor;
  }
  else
  {
    _RCX = effectType;
    v10 = !isSelected;
    _RDX = s_effectTypeColors;
    if ( v10 )
    {
      if ( isHighlighted )
      {
        *(_QWORD *)outColor->v = *(_QWORD *)s_effectTypeColors[_RCX].highlightedColor.v;
        outColor->v[2] = s_effectTypeColors[_RCX].highlightedColor.v[2];
        __asm { vmovss  xmm0, dword ptr [rdx+rcx*8+1Ch] }
      }
      else
      {
        *(_QWORD *)outColor->v = *(_QWORD *)s_effectTypeColors[_RCX].defaultColor.v;
        outColor->v[2] = s_effectTypeColors[_RCX].defaultColor.v[2];
        __asm { vmovss  xmm0, dword ptr [rdx+rcx*8+2Ch] }
      }
    }
    else
    {
      *(_QWORD *)outColor->v = *(_QWORD *)s_effectTypeColors[_RCX].selectedColor.v;
      outColor->v[2] = s_effectTypeColors[_RCX].selectedColor.v[2];
      __asm { vmovss  xmm0, dword ptr [rdx+rcx*8+0Ch] }
    }
    __asm { vmovss  dword ptr [r10+0Ch], xmm0 }
    if ( isOccluded )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vmovss  dword ptr [r10+0Ch], xmm0
      }
    }
  }
}

/*
==============
CG_CreateFx_GetEffectOrigin
==============
*/
void CG_CreateFx_GetEffectOrigin(const CreateFXDataUnion *effectData, const CreateFxEffectType effectType, vec3_t *outOrigin)
{
  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
  {
    if ( effectData )
      *outOrigin = effectData->oneShotFxDef.origin;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", effectType) )
  {
    __debugbreak();
  }
}

/*
==============
CG_CreateFx_GetEffectSoundAliasName
==============
*/
const char *CG_CreateFx_GetEffectSoundAliasName(const CreateFXDataUnion *effectData, const CreateFxEffectType effectType)
{
  switch ( effectType )
  {
    case 1:
      return effectData->oneShotFxDef.effectSound.name;
    case 2:
      return effectData->intervalSoundsDef.effectSound.name;
    case 3:
      return effectData->oneShotFxDef.effectSound.name;
    case 4:
      return effectData->intervalSoundsDef.effectSound.name;
    case 5:
      return effectData->reactiveEntDef.effectSound.name;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3360, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectSoundAliasName: unhandled effect type '%d'", effectType) )
    __debugbreak();
  return 0i64;
}

/*
==============
CG_CreateFx_GetExploderDef
==============
*/
CreateFXDataUnion *CG_CreateFx_GetExploderDef(const unsigned int exploderIndex)
{
  __int64 v1; 
  int v4; 

  v1 = exploderIndex;
  if ( exploderIndex >= 0x4000 )
  {
    v4 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9799, ASSERT_TYPE_ASSERT, "(unsigned)( exploderIndex ) < (unsigned)( CREATEFX_MAX_FX )", "exploderIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", exploderIndex, v4) )
      __debugbreak();
  }
  if ( s_createFxTool->scratchDataState[v1].effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9803, ASSERT_TYPE_ASSERT, "(effectState.effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectState.effectType == CreateFxEffectType::Exploder") )
    __debugbreak();
  CG_CreateFx_FreeSoundIndex(v1);
  CG_CreateFx_AllocSoundIndex(v1);
  return &s_createFxTool->scratchData[v1];
}

/*
==============
CG_CreateFx_GetImportEntityClassname
==============
*/
void CG_CreateFx_GetImportEntityClassname(const char *buffer, char *outClassname, const unsigned __int64 outClassnameMaxSize)
{
  const char *v5; 
  char v6; 
  __int64 v7; 
  const char *v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  char i; 
  char src[64]; 

  v5 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9084, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !outClassname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9085, ASSERT_TYPE_ASSERT, "(outClassname)", (const char *)&queryFormat, "outClassname") )
    __debugbreak();
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 < 9u || (unsigned __int8)v6 > 0x20u )
      break;
    ++v5;
  }
LABEL_10:
  if ( v6 )
  {
    v7 = 1i64;
    v8 = v5;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v9 = v8["}" - v5];
      v10 = v7;
      v11 = *v8++;
      --v7;
      if ( !v10 )
        break;
      if ( v9 != v11 )
      {
        while ( *v5 >= 9u && *v5 <= 0x20u )
          ++v5;
        if ( j_sscanf(v5, "\"classname\" \"%[^\"]\"", src) == 1 )
        {
          Core_strcpy(outClassname, outClassnameMaxSize, src);
          return;
        }
        for ( i = *v5; i != 10; i = *++v5 )
        {
          if ( i == 13 )
            break;
          if ( !i )
            break;
        }
        while ( 1 )
        {
          v6 = *v5;
          if ( *v5 < 9u || (unsigned __int8)v6 > 0x20u )
            break;
          ++v5;
        }
        goto LABEL_10;
      }
    }
    while ( v9 );
  }
}

/*
==============
CG_CreateFx_GetNameForPath
==============
*/
const char *CG_CreateFx_GetNameForPath(const char *path)
{
  __int64 v1; 
  __int64 v2; 
  const char *v3; 
  bool v4; 

  v1 = -1i64;
  do
    ++v1;
  while ( path[v1] );
  v2 = (unsigned int)(v1 - 1);
  if ( (_DWORD)v2 )
  {
    v3 = &path[(unsigned int)v2];
    while ( *v3 != 47 )
    {
      --v3;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
      if ( v4 )
        return &path[v2];
    }
    v2 = (unsigned int)(v2 + 1);
  }
  return &path[v2];
}

/*
==============
CG_CreateFx_GetRootName
==============
*/
char *CG_CreateFx_GetRootName(const ClientRootDef *const root)
{
  const char *v1; 
  const char *v3; 
  __int64 v4; 
  char *v5; 

  v1 = SL_ConvertToStringSafe(root->path);
  if ( I_strstr(v1, "prefabs/") == v1 )
  {
    v3 = v1 + 8;
    v4 = -1i64;
    do
      ++v4;
    while ( v3[v4] );
    Core_strncpy(rootName, 0x40ui64, v3, (unsigned int)v4);
    v5 = strstr_0(rootName, ".map");
    if ( v5 )
    {
      *v5 = 0;
      return rootName;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280C10, 335i64, v1, ".map");
      return (char *)&queryFormat.fmt + 3;
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280BB0, 334i64, v1, "client_createfx_root", "prefabs/");
    return (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
CG_CreateFx_GetScratchEffectAngles
==============
*/
void CG_CreateFx_GetScratchEffectAngles(const int storageIndex, vec3_t *outAngles)
{
  __int64 v2; 
  const CreateFXDataUnion *v4; 
  CreateFxEffectType *p_effectType; 
  int v7; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v7 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3236, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v7) )
      __debugbreak();
  }
  v4 = &s_createFxTool->scratchData[v2];
  p_effectType = &s_createFxTool->scratchDataState[v2].effectType;
  if ( *p_effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3241, ASSERT_TYPE_ASSERT, "(effectState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectState.effectType != CreateFxEffectType::None") )
    __debugbreak();
  CG_CreateFx_GetEffectAngles(v4, *p_effectType, outAngles);
}

/*
==============
CG_CreateFx_GetScratchEffectOrigin
==============
*/
void CG_CreateFx_GetScratchEffectOrigin(const int storageIndex, vec3_t *outOrigin)
{
  __int64 v2; 
  const CreateFXDataUnion *v4; 
  CreateFxEffectType *p_effectType; 
  int v7; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v7 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3134, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v7) )
      __debugbreak();
  }
  v4 = &s_createFxTool->scratchData[v2];
  p_effectType = &s_createFxTool->scratchDataState[v2].effectType;
  if ( *p_effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3139, ASSERT_TYPE_ASSERT, "(effectState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectState.effectType != CreateFxEffectType::None") )
    __debugbreak();
  CG_CreateFx_GetEffectOrigin(v4, *p_effectType, outOrigin);
}

/*
==============
CG_CreateFx_GetSelectedEffectType
==============
*/
__int64 CG_CreateFx_GetSelectedEffectType(CreateFxMenuPage *const page, const int elementIndex)
{
  unsigned int v4; 
  __int64 v6; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7245, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( (unsigned int)elementIndex >= page->selectionIndexMax )
  {
    LODWORD(v6) = elementIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7246, ASSERT_TYPE_ASSERT, "(unsigned)( elementIndex ) < (unsigned)( page->selectionIndexMax )", "elementIndex doesn't index page->selectionIndexMax\n\t%i not in [0, %i)", v6, page->selectionIndexMax) )
      __debugbreak();
  }
  if ( !s_createFxTool->m_assetList.m_enumStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7247, ASSERT_TYPE_ASSERT, "(s_createFxTool->m_assetList.m_enumStrings)", (const char *)&queryFormat, "s_createFxTool->m_assetList.m_enumStrings") )
    __debugbreak();
  v4 = elementIndex + 1;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7250, ASSERT_TYPE_ASSERT, "(selectedEffectType != CreateFxEffectType::None)", (const char *)&queryFormat, "selectedEffectType != CreateFxEffectType::None") )
    __debugbreak();
  return v4;
}

/*
==============
CG_CreateFx_GetSelectedInfo
==============
*/
void CG_CreateFx_GetSelectedInfo(int effectSelection, int fieldSelection, CreateFxSelectedInfo *out_info)
{
  __int64 v4; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 

  v4 = effectSelection;
  _RBX = out_info;
  if ( (unsigned int)effectSelection > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6605, ASSERT_TYPE_ASSERT, "(effectSelection >= 0 && effectSelection < CREATEFX_MAX_FX)", (const char *)&queryFormat, "effectSelection >= 0 && effectSelection < CREATEFX_MAX_FX") )
    __debugbreak();
  _RAX = s_createFxTool;
  _RCX = 5 * v4;
  _RBX->m_storageIndex = v4;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax+rcx*8+6200D0h]
    vpextrd rdi, xmm1, 2
  }
  _RBX->m_effectType = _RDI;
  __asm
  {
    vextractf128 xmm0, ymm1, 1
    vpextrq qword ptr [rbx+20h], xmm0, 1
  }
  if ( (unsigned int)_RDI >= 6 )
  {
    v17 = 6;
    LODWORD(v14) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6614, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFieldCount ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFieldCount )\n\t%i not in [0, %i)", v14, v17) )
      __debugbreak();
    LODWORD(v18) = 6;
    LODWORD(v15) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6615, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFields ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFields )\n\t%i not in [0, %i)", v15, v18) )
      __debugbreak();
  }
  v12 = s_createFxEffectFieldCount[(int)_RDI];
  _RBX->m_fields = s_createFxEffectFields[(int)_RDI];
  v13 = fieldSelection - 2;
  _RBX->m_fieldCount = v12;
  _RBX->m_fieldIndex = fieldSelection - 2;
  if ( fieldSelection - 2 < 0 || v13 >= v12 )
  {
    *(_DWORD *)_RBX->m_fieldType = fieldSelection;
  }
  else
  {
    if ( v13 >= (unsigned int)v12 )
    {
      LODWORD(v16) = v12;
      LODWORD(v14) = fieldSelection - 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6622, ASSERT_TYPE_ASSERT, "(unsigned)( out_info.m_fieldIndex ) < (unsigned)( out_info.m_fieldCount )", "out_info.m_fieldIndex doesn't index out_info.m_fieldCount\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    *(_DWORD *)_RBX->m_fieldType = *(_DWORD *)_RBX->m_fields[_RBX->m_fieldIndex].type;
  }
}

/*
==============
CG_CreateFx_GetSnapMovement
==============
*/
void CG_CreateFx_GetSnapMovement(const LocalClientNum_t localClientNum, vec3_t *outValue)
{
  bool v4; 
  CreateFxTool *v7; 
  CreateFxTool *v9; 
  CreateFxTool *v12; 
  CreateFxTool *v16; 
  CreateFxTool *v20; 
  CreateFxTool *v23; 

  _RBX = outValue;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  v4 = CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) != 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  if ( (!CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 20) || (v7 = s_createFxTool, s_createFxTool->keyNeedsRelease[20])) && (v4 || !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 132) || (v7 = s_createFxTool, s_createFxTool->keyNeedsRelease[132])) )
  {
    if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 21) && (v9 = s_createFxTool, !s_createFxTool->keyNeedsRelease[21]) || !v4 && CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 133) && (v9 = s_createFxTool, !s_createFxTool->keyNeedsRelease[133]) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm1
      }
      v9->keyNeedsRelease[21] = 1;
      v9->keyNeedsRelease[133] = 1;
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    v7->keyNeedsRelease[20] = 1;
    v7->keyNeedsRelease[132] = 1;
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 22) && (v12 = s_createFxTool, !s_createFxTool->keyNeedsRelease[22]) || CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 134) && (v12 = s_createFxTool, !s_createFxTool->keyNeedsRelease[134]) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rbx+4], xmm1
    }
    v12->keyNeedsRelease[22] = 1;
    v12->keyNeedsRelease[134] = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return;
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 23) && (v16 = s_createFxTool, !s_createFxTool->keyNeedsRelease[23]) || CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 135) && (v16 = s_createFxTool, !s_createFxTool->keyNeedsRelease[135]) )
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm0
    }
    v16->keyNeedsRelease[23] = 1;
    v16->keyNeedsRelease[135] = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return;
  }
  if ( CG_CreateFx_IsFirstPress(2) || v4 && CG_CreateFx_IsFirstPress(133) )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+8] }
    v23 = s_createFxTool;
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rbx+8], xmm1
    }
    v23->keyNeedsRelease[2] = 1;
    v23->keyNeedsRelease[133] = 1;
  }
  else if ( CG_CreateFx_IsFirstPress(4) || v4 && CG_CreateFx_IsFirstPress(132) )
  {
    __asm { vaddss  xmm0, xmm6, dword ptr [rbx+8] }
    v20 = s_createFxTool;
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
    v20->keyNeedsRelease[4] = 1;
    v20->keyNeedsRelease[132] = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
CG_CreateFx_GotoMenu
==============
*/
void CG_CreateFx_GotoMenu(CreateFxMenuNames menuIndex)
{
  int v1; 
  __int64 v2; 

  v1 = s_menuPathCount;
  v2 = menuIndex;
  if ( s_menuPathCount + 1 >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1989, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount + 1 < CREATEFX_MAX_MENU_DEPTH ) )", "ERROR: Create FX menu history is to long") )
      __debugbreak();
    v1 = s_menuPathCount;
  }
  s_menuPathCount = v1 + 1;
  s_menuPath[v1 + 1] = &s_menuPages[v2];
}

/*
==============
CG_CreateFx_GotoSelected
==============
*/
void CG_CreateFx_GotoSelected(__int64 a1, double a2)
{
  CreateFxTool *v10; 
  cg_t *LocalClientGlobals; 
  const char *v39; 
  char *fmt; 
  __int64 v48; 
  vec3_t outCenter; 
  vec3_t outOrg; 
  vec3_t vec; 
  vec3_t forward; 
  vec3_t v53; 
  vec3_t v54; 
  vec3_t angles; 
  __int64 v56; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v56;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  v10 = s_createFxTool;
  if ( s_createFxTool->selectedEffectTotal <= 0 )
  {
    if ( s_createFxTool->highlightedEffectIndex == -1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9588, ASSERT_TYPE_ASSERT, "(s_createFxTool->highlightedEffectIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "s_createFxTool->highlightedEffectIndex != INVALID_EFFECT_INDEX") )
        __debugbreak();
      v10 = s_createFxTool;
    }
    CG_CreateFx_GetScratchEffectOrigin(v10->highlightedEffectIndex, &outCenter);
  }
  else
  {
    CG_CreateFx_CalculateSelectionCenter(&outCenter, a2);
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+110h+outOrg]
    vmovss  xmm11, dword ptr [rsp+110h+outCenter]
    vmovss  xmm10, dword ptr [rsp+110h+outCenter+4]
    vmovss  xmm9, dword ptr [rsp+110h+outCenter+8]
    vsubss  xmm1, xmm0, xmm11
    vmovss  xmm0, dword ptr [rsp+110h+outOrg+4]
    vmovss  dword ptr [rsp+110h+vec], xmm1
    vsubss  xmm1, xmm0, xmm10
    vmovss  xmm0, dword ptr [rsp+110h+outOrg+8]
    vmovss  dword ptr [rsp+110h+vec+4], xmm1
    vsubss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rsp+110h+vec+8], xmm1
  }
  vectoangles(&vec, &angles);
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm3, cs:__real@43480000
    vmulss  xmm1, xmm3, dword ptr [rsp+110h+forward]
    vmulss  xmm0, xmm3, dword ptr [rsp+110h+forward+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+110h+forward+8]
    vaddss  xmm7, xmm0, xmm10
    vaddss  xmm8, xmm1, xmm11
    vsubss  xmm0, xmm11, xmm8
    vaddss  xmm6, xmm2, xmm9
    vmovss  dword ptr [rsp+110h+var_A0], xmm0
    vsubss  xmm0, xmm9, xmm6
    vsubss  xmm1, xmm10, xmm7
    vmovss  dword ptr [rsp+110h+var_A0+8], xmm0
    vmovss  dword ptr [rsp+110h+var_A0+4], xmm1
  }
  vectoangles(&v53, &v54);
  __asm
  {
    vcvttss2si ecx, dword ptr [rbp+10h+var_90+4]
    vcvttss2si eax, dword ptr [rbp+10h+var_90]
  }
  LODWORD(v48) = _EAX;
  __asm
  {
    vcvtss2sd xmm3, xmm6, xmm6
    vcvtss2sd xmm2, xmm7, xmm7
    vcvtss2sd xmm1, xmm8, xmm8
  }
  LODWORD(fmt) = _ECX;
  __asm
  {
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v39 = j_va("setviewpos %g %g %g %d %d", _RDX, _R8, _R9, fmt, v48);
  Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v39);
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_CreateFx_HandleGamepadEvents
==============
*/
void CG_CreateFx_HandleGamepadEvents(LocalClientNum_t localClientNum, float forward, float side, float pitch)
{
  ;
}

/*
==============
CG_CreateFx_HandleKeyEvents
==============
*/
bool CG_CreateFx_HandleKeyEvents(LocalClientNum_t localClientNum, int key, int down, int repeats, unsigned int time)
{
  __int64 v6; 
  const int *v9; 
  CreateFxMenuPage *v10; 
  bool (__fastcall *menuInputFunction)(CreateFxMenuPage *const, LocalClientNum_t, int, int, unsigned int); 
  bool v12; 
  bool shiftDown; 
  int IsKeyDown; 
  bool result; 

  v6 = key;
  if ( !s_createFxTool || !s_createFxTool->enabled || DevGui_IsActive() || (_DWORD)v6 == 96 )
    return 0;
  if ( !down && s_createFxTool->keyNeedsRelease[v6] )
  {
    if ( (unsigned int)v6 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6235, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( 256 )", "key doesn't index MAX_KEYS\n\t%i not in [0, %i)", v6, 256) )
      __debugbreak();
    s_createFxTool->keyNeedsRelease[v6] = 0;
  }
  if ( s_menuFocus )
    goto LABEL_15;
  v9 = s_editKeysList;
  while ( (_DWORD)v6 != *v9 )
  {
    if ( (__int64)++v9 >= (__int64)s_createFxEffectClassname )
      goto LABEL_15;
  }
  if ( s_createFxTool->editBuffer.effectTotal <= 0 )
  {
    if ( !down )
      return 0;
    CG_CreateFx_OnEditBegin();
LABEL_15:
    if ( down )
      goto LABEL_16;
    return 0;
  }
  if ( !down )
  {
    if ( !CG_CreateFx_IsEditKeyDown() )
      CG_CreateFx_OnEditEnd();
    return 0;
  }
LABEL_16:
  v10 = s_menuPath[s_menuPathCount];
  menuInputFunction = v10->menuInputFunction;
  if ( menuInputFunction && (menuInputFunction(v10, localClientNum, v6, down, time) || s_menuFocus == EDIT) )
    return 1;
  s_createFxLastInputTime[v6] = time;
  v12 = CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) != 0;
  shiftDown = CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) != 0;
  IsKeyDown = CL_Keys_IsKeyDown(localClientNum, 5);
  if ( CG_CreateFx_ResolveCommand(localClientNum, v6, down, repeats, v12, shiftDown, IsKeyDown != 0) || s_menuFocus )
    return 1;
  switch ( (int)v6 )
  {
    case 5:
    case 17:
    case 20:
    case 21:
    case 22:
    case 23:
    case 101:
    case 103:
    case 113:
    case 118:
    case 120:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 192:
    case 193:
      return 1;
    case 18:
    case 19:
    case 187:
    case 188:
      result = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->predictedPlayerState.pm_type < 2;
      break;
    default:
      if ( (unsigned int)(v6 - 49) <= 8 || (unsigned int)(v6 - 169) <= 8 )
        return 1;
      result = 0;
      break;
  }
  return result;
}

/*
==============
CG_CreateFx_HandleMouseEvents
==============
*/
void CG_CreateFx_HandleMouseEvents(LocalClientNum_t localClientNum, int dx, int dy)
{
  ;
}

/*
==============
CG_CreateFx_Handle_KeyJump
==============
*/
__int64 CG_CreateFx_Handle_KeyJump(CreateFxMenuPage *const page, LocalClientNum_t localClientNum, int key, int down)
{
  unsigned int v4; 
  CreateFxMenuPage *v6; 
  bool v7; 
  int v8; 

  v4 = key;
  if ( !down )
    return v4;
  v7 = 1;
  if ( s_createFxTool->m_assetList.m_palette )
  {
    v6 = s_menuPath[s_menuPathCount];
    if ( v6 )
    {
      if ( v6->menuName == HUD_ASSET_LIST )
        v7 = 0;
    }
  }
  if ( (unsigned int)(key - 49) <= 8 && (v7 || CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL)) )
    v4 += 120;
  v8 = v4 - 169;
  if ( v4 - 169 > 9 )
    return v4;
  if ( v8 < page->selectionIndexMax )
    page->selectionIndex = v8;
  return 13i64;
}

/*
==============
CG_CreateFx_HasBeenEnabled
==============
*/
bool CG_CreateFx_HasBeenEnabled()
{
  return s_createFxTool && s_createFxTool->hasBeenEnabled;
}

/*
==============
CG_CreateFx_Import
==============
*/
char CG_CreateFx_Import(const char *rootName, const vec3_t *rootOrigin, const vec3_t *rootAngles)
{
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  char v8; 
  bool v10; 
  CreateFxTool *v11; 
  CreateFxMapLayerDef *v12; 
  __int64 v13; 
  bool Fx_ParseMapFile; 
  CreateFxTool *v15; 
  int v16; 
  __int64 v17; 
  bool *v18; 
  const char *v19; 
  __int64 v20; 
  CgClientSideEffectsSystem *v21; 
  CreateFxTool *v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  vec3_t layerAngles; 
  vec3_t layerOrigin; 
  char dest[272]; 

  _RBX = rootAngles;
  _RDI = rootOrigin;
  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
  CgClientSideEffectsSystem::Shutdown(ClientSideEffectsSystem);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdi]
  }
  if ( !v8 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rdi+4] }
  if ( !v8 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rdi+8] }
  if ( !v8 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rbx] }
  if ( !v8 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rbx+4] }
  if ( !v8 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rbx+8] }
  if ( v8 )
    v10 = 0;
  else
LABEL_8:
    v10 = 1;
  v11 = s_createFxTool;
  __asm { vmovss  dword ptr [rsp+180h+layerAngles], xmm0 }
  s_createFxTool->rootHasOffset = v10;
  v11->rootOrigin = *_RDI;
  v11->rootAngles = *_RBX;
  __asm
  {
    vmovss  dword ptr [rsp+180h+layerAngles+4], xmm0
    vmovss  dword ptr [rsp+180h+layerAngles+8], xmm0
    vmovss  dword ptr [rsp+180h+layerOrigin], xmm0
    vmovss  dword ptr [rsp+180h+layerOrigin+4], xmm0
    vmovss  dword ptr [rsp+180h+layerOrigin+8], xmm0
  }
  v12 = CG_CreateFx_AddLayer(rootName, (const char *const)&queryFormat.fmt + 3, &layerOrigin, &layerAngles);
  CG_CreateFx_SetActiveLayer(v12);
  if ( I_strstr(rootName, "maps/prefabs/") == rootName )
    Core_strcpy(dest, 0x104ui64, rootName);
  else
    Com_sprintf(dest, 0x104ui64, "%s%s", "maps/prefabs/", rootName);
  if ( !I_strstr(dest, ".map") )
    goto LABEL_16;
  v13 = -1i64;
  do
    ++v13;
  while ( dest[v13] );
  if ( *(_DWORD *)&dest[(unsigned int)v13 - 4] != *(_DWORD *)".map" )
LABEL_16:
    Com_sprintf(dest, 0x104ui64, "%s%s", dest, ".map");
  Fx_ParseMapFile = CG_CreateFx_ParseMapFile(dest, 1);
  v15 = s_createFxTool;
  v16 = 1;
  if ( s_createFxTool->layerListTotal > 1 )
  {
    v17 = 8391616i64;
    while ( Fx_ParseMapFile )
    {
      v18 = &v15->inited + v17;
      if ( !*((_BYTE *)&v15->clipboard.effectData[2].reactiveEntDef.radius + v17 + 4) )
      {
        CG_CreateFx_SetActiveLayer((const CreateFxMapLayerDef *const)(&v15->inited + v17));
        v19 = (const char *)*((_QWORD *)v18 + 1);
        if ( I_strstr(v19, "maps/prefabs/") == v19 )
          Core_strcpy(dest, 0x104ui64, v19);
        else
          Com_sprintf(dest, 0x104ui64, "%s%s", "maps/prefabs/", v19);
        if ( !I_strstr(dest, ".map") )
          goto LABEL_28;
        v20 = -1i64;
        do
          ++v20;
        while ( dest[v20] );
        if ( *(_DWORD *)&dest[(unsigned int)v20 - 4] != *(_DWORD *)".map" )
LABEL_28:
          Com_sprintf(dest, 0x104ui64, "%s%s", dest, ".map");
        Fx_ParseMapFile = CG_CreateFx_ParseMapFile(dest, 0);
        v15 = s_createFxTool;
      }
      ++v16;
      v17 += 304i64;
      if ( v16 >= v15->layerListTotal )
        goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_31:
  if ( !Fx_ParseMapFile )
  {
LABEL_32:
    Com_Printf_NoFilter("[CreateFx] Import FAILED\n");
    CG_CreateFx_ClearEffectsData();
    v21 = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
    CgClientSideEffectsSystem::Restart(v21);
    return 0;
  }
  CG_CreateFX_RegisterPalettes();
  s_createFxTool->imported = 1;
  Com_Printf_NoFilter("[CreateFx] Import DONE\n");
  v23 = s_createFxTool;
  v24 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v25 = 7078100i64;
    do
    {
      v26 = *(_DWORD *)(&v23->inited + v25);
      CG_CreateFx_UpdateEffectAlias(v26);
      CG_CreateFx_FreeSoundIndex(v26);
      CG_CreateFx_AllocSoundIndex(v26);
      CG_CreateFx_StartEffect(v26);
      v23 = s_createFxTool;
      v25 += 4i64;
      ++v24;
    }
    while ( v24 < s_createFxTool->usedEffectTotal );
  }
  if ( !v12 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9177, ASSERT_TYPE_ASSERT, "(newActiveLayer)", (const char *)&queryFormat, "newActiveLayer") )
      __debugbreak();
    v23 = s_createFxTool;
  }
  v23->activeLayer = v12;
  Com_Printf_NoFilter("[CreateFx] SetActiveLayer %s\n", v12->pathString);
  return 1;
}

/*
==============
CG_CreateFx_InitializeIfNeeded
==============
*/
void CG_CreateFx_InitializeIfNeeded(double a1)
{
  CreateFxTool *v1; 
  CreateFxTool *v2; 
  CreateFxTool *v3; 

  if ( !s_createFxTool || !s_createFxTool->inited )
  {
    Com_Printf_NoFilter("[CreateFx] Initializing\n");
    if ( s_createFxTool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9913, ASSERT_TYPE_ASSERT, "(s_createFxTool == nullptr)", (const char *)&queryFormat, "s_createFxTool == nullptr") )
      __debugbreak();
    v1 = (CreateFxTool *)Mem_Virtual_Alloc(0x817248ui64, "CreateFxToolStorage", TRACK_DEBUG);
    s_createFxTool = v1;
    if ( !v1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9918, ASSERT_TYPE_ASSERT, "(s_createFxTool)", (const char *)&queryFormat, "s_createFxTool") )
        __debugbreak();
      v1 = s_createFxTool;
    }
    memset_0(v1, 0, sizeof(CreateFxTool));
    CG_CreateFx_AllocateCommandHeap(a1);
    CG_CreateFx_SetupColors();
    v2 = s_createFxTool;
    s_menuPages[0].menuDrawFunction = CG_CreateFx_MainMenu_Draw;
    s_menuPages[1].menuName = HUD_OBJECT_PROPERTIES;
    s_menuPages[0].menuInputFunction = CG_CreateFx_MainMenu_Input;
    s_menuPages[2].menuName = HUD_FILTER_SETTINGS;
    s_menuPages[1].menuDrawFunction = CG_CreateFx_ObjectProperties_Draw;
    s_menuPages[0].menuName = HUD_MAIN;
    s_menuPages[1].menuInputFunction = CG_CreateFx_ObjectProperties_Input;
    s_menuPages[2].menuDrawFunction = CG_CreateFx_FilterSettings_Draw;
    s_menuPages[2].menuInputFunction = (bool (__fastcall *)(CreateFxMenuPage *const, LocalClientNum_t, int, int, unsigned int))CG_CreateFx_FilterSettings_Input;
    s_menuPages[3].menuDrawFunction = CG_CreateFx_MenuAssetList_Draw;
    s_menuPages[3].menuInputFunction = CG_CreateFx_MenuAssetList_Input;
    s_menuPages[2].selectionIndexMax = 7;
    s_menuPages[3].menuName = HUD_ASSET_LIST;
    s_menuPages[3].selectionIndexMax = 8;
    s_menuPath[s_menuPathCount] = s_menuPages;
    *(_DWORD *)s_createFxFilter = 16843009;
    *(_WORD *)&s_createFxFilter[4] = 257;
    s_createFxFilter[6] = 1;
    v2->highlightedEffectIndex = -1;
    s_menuFocus = WORLD;
    v2->editCameraRelative = 1;
    v2->invalidEntityIndex = -1;
    CG_CreateFx_ResetEffectsLists();
    FX_LoadEffectCombinedDef("vfx/palette/Debug/vfx_debug_axis_model_simple_createfx", &v2->axisModelFx);
    FX_LoadEffectCombinedDef("vfx/palette/Debug/vfx_debug_angle_model_simple_createfx", &s_createFxTool->anglesModelFx);
    v3 = s_createFxTool;
    s_createFxTool->axisModelHandle.m_particleSystemDef = s_createFxTool->axisModelFx.particleSystemDef;
    v3->anglesModelHandle.m_particleSystemDef = v3->anglesModelFx.particleSystemDef;
    s_createFXHints[1].valueDvar = createfx_hintLevel;
    s_createFXHints[1].valueEnumStr = s_CreateFxHintLevelStrings;
    s_createFXHints[2].value = &v3->menuDrawMode;
    s_createFXHints[2].valueEnumStr = s_CreateFxDrawModeStrings;
    s_createFXHints[4].value = &v3->editCameraRelative;
    s_createFXHints[3].value = &v3->editRotation;
    s_createFXHints[1].value = NULL;
    s_createFXHints[1].valueType = SIZE_T;
    s_createFXHints[1].valueEnumStrCount = 3;
    s_createFXHints[2].valueDvar = NULL;
    s_createFXHints[2].valueType = MAX_INT;
    s_createFXHints[2].valueEnumStrCount = 4;
    s_createFXHints[4].valueDvar = NULL;
    s_createFXHints[4].valueType = HALF;
    s_createFXHints[4].valueEnumStr = NULL;
    s_createFXHints[4].valueEnumStrCount = 0;
    s_createFXHints[3].valueDvar = NULL;
    s_createFXHints[3].valueType = HALF;
    s_createFXHints[3].valueEnumStr = NULL;
    s_createFXHints[3].valueEnumStrCount = 0;
    s_createFXHints[40].value = &s_createFxEditRateIndex;
    s_createFXHints[51].value = &v3->snapToNormal;
    s_createFXHints[52].value = &v3->snapToAngleIndex;
    s_createFXHints[52].valueEnumStr = CREATEFX_ANGLE_SNAP_STRINGS;
    s_createFXHints[53].value = &v3->drawExploderLines;
    s_createFXHints[40].valueDvar = NULL;
    s_createFXHints[40].valueType = LONG;
    s_createFXHints[40].valueEnumStr = NULL;
    s_createFXHints[40].valueEnumStrCount = 0;
    s_createFXHints[51].valueDvar = NULL;
    s_createFXHints[51].valueType = HALF;
    s_createFXHints[51].valueEnumStr = NULL;
    s_createFXHints[51].valueEnumStrCount = 0;
    s_createFXHints[52].valueDvar = NULL;
    s_createFXHints[52].valueType = MAX_INT;
    s_createFXHints[52].valueEnumStrCount = 4;
    s_createFXHints[53].valueDvar = NULL;
    s_createFXHints[53].valueType = HALF;
    s_createFXHints[53].valueEnumStr = NULL;
    s_createFXHints[53].valueEnumStrCount = 0;
    v3->rootHasOffset = 0;
    *(_QWORD *)v3->rootOrigin.v = 0i64;
    *(_QWORD *)&v3->rootOrigin.z = 0i64;
    *(_QWORD *)&v3->rootAngles.y = 0i64;
    v3->inited = 1;
    Com_Printf_NoFilter("[CreateFx] Initializing DONE\n");
    Com_Printf_NoFilter("[CreateFx] Root Count = %d\n", cm.mapEnts->clientSideEffects.rootCount);
  }
}

/*
==============
CG_CreateFx_InsertNewFx
==============
*/
void CG_CreateFx_InsertNewFx()
{
  char v1; 
  bool v2; 
  CreateFxMenuPage *v4; 
  int editEffectType; 
  int v6; 
  bool v7; 

  _RCX = s_createFxTool;
  v1 = 0;
  v2 = s_createFxTool->editBuffer.effectTotal == 0;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    _RCX = s_createFxTool;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rcx+240018h]
  }
  if ( !(v1 | v2) && 0x4000 - _RCX->usedEffectTotal > 0 )
  {
    v4 = s_menuPath[s_menuPathCount];
    if ( !v4 || v4->menuName != HUD_ASSET_LIST )
    {
      editEffectType = _RCX->editEffectType;
      v6 = 1;
      s_menuFocus = MENU;
      if ( editEffectType )
      {
        v6 = editEffectType;
        if ( editEffectType < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4444, ASSERT_TYPE_ASSERT, "(selectionCurrent >= 0)", (const char *)&queryFormat, "selectionCurrent >= 0") )
            __debugbreak();
          _RCX = s_createFxTool;
        }
      }
      if ( !s_menuPath[s_menuPathCount] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4447, ASSERT_TYPE_ASSERT, "(currentPage)", (const char *)&queryFormat, "currentPage") )
          __debugbreak();
        _RCX = s_createFxTool;
      }
      *(_QWORD *)&_RCX->m_assetList.m_count = 7i64;
      _RCX->m_assetList.m_title = "PROPERTIES: Type";
      v7 = _RCX->m_assetList.m_page < 1;
      _RCX->m_assetList.m_onSelected = CG_CreateFx_OnPaletteSelected_EffectTypeNew;
      _RCX->m_assetList.m_enumStrings = createFxEffectTypeStrings;
      _RCX->m_assetList.m_palette = NULL;
      if ( !v7 )
        _RCX->m_assetList.m_page = 0;
      _RCX->m_assetList.m_page = 0;
      _RCX->m_assetList.m_enumStrings = &createFxEffectTypeStrings[1];
      _RCX->m_assetList.m_count = 6;
      if ( v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4465, ASSERT_TYPE_ASSERT, "(selectionCurrent > 0)", (const char *)&queryFormat, "selectionCurrent > 0") )
        __debugbreak();
      CG_CreateFx_GotoMenu(HUD_ASSET_LIST);
      CG_CreateFx_MenuAssetList_SetCursorIndex(s_menuPath[s_menuPathCount], v6 - 1);
    }
  }
}

/*
==============
CG_CreateFx_IsEditKey
==============
*/
char CG_CreateFx_IsEditKey(const int key)
{
  const int *v1; 

  v1 = s_editKeysList;
  while ( key != *v1 )
  {
    if ( (__int64)++v1 >= (__int64)s_createFxEffectClassname )
      return 0;
  }
  return 1;
}

/*
==============
CG_CreateFx_IsEditKeyDown
==============
*/
bool CG_CreateFx_IsEditKeyDown()
{
  int *v0; 
  int IsKeyDown; 

  v0 = (int *)s_editKeysList;
  while ( 1 )
  {
    IsKeyDown = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, *v0);
    if ( IsKeyDown )
      break;
    if ( (__int64)++v0 >= (__int64)s_createFxEffectClassname )
      return IsKeyDown;
  }
  LOBYTE(IsKeyDown) = 1;
  return IsKeyDown;
}

/*
==============
CG_CreateFx_IsEditPending
==============
*/
bool CG_CreateFx_IsEditPending()
{
  return s_createFxTool->editBuffer.effectTotal > 0;
}

/*
==============
CG_CreateFx_IsEffectDefValid
==============
*/
__int64 CG_CreateFx_IsEffectDefValid(const CreateFXDataUnion *effectData, const CreateFxEffectType effectType)
{
  unsigned __int8 v3; 
  const char *name; 
  const ParticleSystemDef *particleSystemDef; 
  bool v7; 
  SndAliasList *aliasList; 

  v3 = 0;
  switch ( effectType )
  {
    case 1:
      v7 = effectData->oneShotFxDef.effect.particleSystemDef == NULL;
      break;
    case 2:
      aliasList = effectData->intervalSoundsDef.aliasList;
      if ( (aliasList || (aliasList = SND_TryFindAlias(effectData->intervalSoundsDef.effectSound.name)) != NULL) && aliasList->head && Com_IsSoundAliasLooping(aliasList) )
        return 1i64;
      return 0i64;
    case 3:
      return effectData->explodersDef.client.name != 0;
    case 4:
      particleSystemDef = effectData->oneShotFxDef.effect.particleSystemDef;
      v7 = particleSystemDef == NULL;
      if ( !particleSystemDef )
        return SND_TryFindAlias(effectData->intervalSoundsDef.effectSound.name) != NULL;
      break;
    case 5:
      name = effectData->oneShotFxDef.effectSound.name;
      if ( !name )
        name = (const char *)SND_TryFindAlias(effectData->reactiveEntDef.effectSound.name);
      return effectData->intervalSoundsDef.effectSound.name || name;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3073, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_IsEffectDefValid: unhandled effect type '%d'", effectType) )
      {
        __debugbreak();
        return 0i64;
      }
      return v3;
  }
  return !v7;
}

/*
==============
CG_CreateFx_IsEnabled
==============
*/
bool CG_CreateFx_IsEnabled()
{
  return s_createFxTool && s_createFxTool->enabled;
}

/*
==============
CG_CreateFx_IsFirstPress
==============
*/
bool CG_CreateFx_IsFirstPress(const int key)
{
  __int64 v1; 

  v1 = key;
  return CL_Keys_IsKeyDown(LOCAL_CLIENT_0, key) && !s_createFxTool->keyNeedsRelease[v1];
}

/*
==============
CG_CreateFx_LoadLoose
==============
*/
void CG_CreateFx_LoadLoose(double a1)
{
  Com_Printf_NoFilter("[CreateFx] LoadLoose (due to developer_createfx)\n");
  if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
  {
    CG_CreateFx_Resume();
  }
  else
  {
    s_doingTemporaryCreateFxActivation = 1;
    CG_CreateFx_Enter_f(a1);
    CG_CreateFx_Exit_f();
  }
}

/*
==============
CG_CreateFx_MainMenu_ConfirmSelection
==============
*/
void CG_CreateFx_MainMenu_ConfirmSelection(CreateFxMenuPage *const page)
{
  int i; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6287, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( page->selectionIndex )
  {
    switch ( page->selectionIndex )
    {
      case 1:
        if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
        {
          if ( s_createFxTool->lastExportInProgress )
            Com_PrintWarning(0, "[CreateFx] Cannot export because an export is already in progress\n");
          else
            CG_CreateFx_Export(0);
        }
        for ( i = s_menuPathCount; i > 0; s_menuPathCount = i )
          --i;
        s_menuFocus = WORLD;
        break;
      case 2:
        CG_CreateFx_GotoMenu(HUD_FILTER_SETTINGS);
        break;
      case 3:
        CG_CreateFx_Exit_f();
        break;
    }
  }
  else
  {
    CG_CreateFx_OpenAssetListWithPalette("CREATE FX: Layer", CG_CreateFx_OnPaletteSelected_Layer, BOOL, &s_createFX_paletteLayers);
  }
}

/*
==============
CG_CreateFx_MainMenu_Draw
==============
*/
void CG_CreateFx_MainMenu_Draw(CreateFxMenuPage *const page, const ScreenPlacement *const scrPlace)
{
  int v5; 
  const CreateFxMapLayerDef *ActiveLayer; 
  char *v7; 
  bool v8; 
  __int64 v11; 
  bool v12; 
  int v13[4]; 
  CreateFxMenuDrawPage data; 
  char *strKey[4]; 
  char *strValue[2]; 
  CreateFxHintText hints[8]; 
  int v19; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6316, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  strKey[0] = "Layer";
  strKey[1] = "Save";
  strKey[2] = "Filter";
  strKey[3] = "Quit";
  v5 = 0;
  ActiveLayer = CG_CreateFx_GetActiveLayer();
  v7 = NULL;
  if ( s_createFxTool->lastExportInProgress )
  {
    v7 = "Saving...";
  }
  else if ( !NET_RemoteDbgHostConsoleConnected() || s_createFxTool->lastProbeSuccess < CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time - 15000 )
  {
    v7 = "Launcher Missing";
  }
  v8 = s_menuFocus == EDIT;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  strValue[0] = (char *)ActiveLayer->pathString;
  __asm { vmovdqu [rsp+168h+var_58], xmm0 }
  strValue[1] = v7;
  page->selectionIndexMax = 4;
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6347, ASSERT_TYPE_ASSERT, "(s_menuFocus != CreateFxFocusStates::EDIT)", (const char *)&queryFormat, "s_menuFocus != CreateFxFocusStates::EDIT") )
    __debugbreak();
  if ( s_menuFocus == MENU )
  {
    v13[0] = 1;
    v13[1] = 29;
    CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, (const CreateFxHintText *const)v13, 2, s_hintsMenuCommon, 2);
  }
  else
  {
    __asm
    {
      vmovdqu ymm0, cs:__ymm@0000001800000013000000340000003300000004000000020000001d00000001
      vmovdqu ymmword ptr [rsp+168h+hints], ymm0
    }
    v19 = 53;
    CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, hints, 9, s_hintsWorldCommon, 13);
  }
  CG_CreateFx_Menu_DrawFrame(&data, "CREATE FX", 0, 0);
  if ( page->selectionIndexMax > 0 )
  {
    v11 = 0i64;
    do
    {
      v12 = v5 == 1 && v7;
      CG_CreateFx_Menu_DrawRow(&data, v5++, strKey[v11], strValue[v11], -1, v12);
      ++v11;
    }
    while ( v5 < page->selectionIndexMax );
  }
}

/*
==============
CG_CreateFx_MainMenu_Input
==============
*/
bool CG_CreateFx_MainMenu_Input(CreateFxMenuPage *const page, LocalClientNum_t localClientNum, int key, int down)
{
  int Fx_Handle_KeyJump; 
  int v9; 
  bool result; 
  int i; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6417, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  Fx_Handle_KeyJump = CG_CreateFx_Handle_KeyJump(page, localClientNum, key, down);
  if ( s_menuFocus != MENU || !down )
    return 0;
  switch ( Fx_Handle_KeyJump )
  {
    case 1:
    case 13:
      if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6287, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
        __debugbreak();
      if ( !page->selectionIndex )
      {
        CG_CreateFx_OpenAssetListWithPalette("CREATE FX: Layer", CG_CreateFx_OnPaletteSelected_Layer, BOOL, &s_createFX_paletteLayers);
        return 1;
      }
      if ( page->selectionIndex != 1 )
      {
        if ( page->selectionIndex == 2 )
        {
          CG_CreateFx_GotoMenu(HUD_FILTER_SETTINGS);
          return 1;
        }
        if ( page->selectionIndex == 3 )
        {
          CG_CreateFx_Exit_f();
          return 1;
        }
        return 1;
      }
      if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
      {
        if ( s_createFxTool->lastExportInProgress )
          Com_PrintWarning(0, "[CreateFx] Cannot export because an export is already in progress\n");
        else
          CG_CreateFx_Export(0);
      }
      for ( i = s_menuPathCount; i > 0; s_menuPathCount = i )
        --i;
      s_menuFocus = WORLD;
      result = 1;
      break;
    case 2:
    case 27:
      s_menuFocus = WORLD;
      s_createFxTool->keyNeedsRelease[Fx_Handle_KeyJump] = 1;
      return 1;
    case 20:
    case 132:
      if ( page->selectionIndex <= 0 )
        return 0;
      v9 = page->selectionIndex - 1;
      goto LABEL_9;
    case 21:
    case 133:
      v9 = page->selectionIndex + 1;
      if ( v9 >= page->selectionIndexMax )
        return 0;
LABEL_9:
      page->selectionIndex = v9;
      return 0;
    default:
      return 0;
  }
  return result;
}

/*
==============
CG_CreateFx_MenuAssetList_Draw
==============
*/

void __fastcall CG_CreateFx_MenuAssetList_Draw(CreateFxMenuPage *const page, const ScreenPlacement *const scrPlace, double _XMM2_8)
{
  int v8; 
  int v9; 
  int i; 
  const char *v35; 
  int v38; 
  CreateFxAssetPalette *m_palette; 
  unsigned __int16 m_filteredCount; 
  const char *AliasForIndex; 
  int v42; 
  float fmt; 
  float fmta; 
  float fmtb; 
  CreateFxHintText *hints2; 
  float hints2a; 
  float hints2b; 
  float hints2c; 
  __int64 hintCount2; 
  int hintCount2a; 
  int hintCount2b; 
  int hintCount2c; 
  float v54; 
  CreateFxMenuDrawPage data; 
  CreateFxHintText hints[4]; 

  __asm { vmovaps [rsp+150h+var_30], xmm6 }
  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7459, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( s_menuFocus != MENU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7460, ASSERT_TYPE_ASSERT, "(s_menuFocus == CreateFxFocusStates::MENU)", (const char *)&queryFormat, "s_menuFocus == CreateFxFocusStates::MENU") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( 9 * s_createFxTool->m_assetList.m_page + i >= s_createFxTool->m_assetList.m_count )
      break;
    ++v9;
  }
  page->selectionIndexMax = v9;
  __asm { vmovaps [rsp+150h+var_40], xmm7 }
  hints[0] = SIZE_T|0x20;
  hints[1] = LONG_DOUBLE|HALF|0x20;
  hints[2] = 32;
  CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, hints, 3, s_hintsMenuCommon, 2);
  __asm { vmovss  xmm6, [rbp+50h+data.font.rowHeight] }
  if ( s_createFxTool->m_assetList.m_palette )
  {
    __asm
    {
      vaddss  xmm1, xmm6, [rbp+50h+data.frameHeight]
      vmovss  xmm2, [rbp+50h+data.firstRowY]
      vmovss  [rbp+50h+data.frameHeight], xmm1
      vaddss  xmm1, xmm6, [rbp+50h+data.firstHintY]
      vaddss  xmm7, xmm2, xmm6
      vmovss  [rbp+50h+data.firstHintY], xmm1
      vmovss  [rbp+50h+data.firstRowY], xmm7
    }
  }
  else
  {
    __asm { vmovss  xmm7, [rbp+50h+data.firstRowY] }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+80093Ch]
    vmulss  xmm1, xmm0, cs:__real@3de38e39
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vcvttss2si r9d, xmm2; pageCount
  }
  CG_CreateFx_Menu_DrawFrame(&data, s_createFxTool->m_assetList.m_title, s_createFxTool->m_assetList.m_page, _ER9);
  if ( s_createFxTool->m_assetList.m_palette )
  {
    __asm
    {
      vmovss  xmm0, [rbp+50h+data.frameBorder]
      vmulss  xmm2, xmm0, cs:__real@40000000
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm1, [rbp+50h+data.frameWidth]
      vmovss  dword ptr [rsp+150h+var_118], xmm0
      vmovss  [rsp+150h+hintCount2], xmm0
      vxorps  xmm4, xmm4, xmm4
      vsubss  xmm7, xmm7, xmm6
      vsubss  xmm2, xmm1, xmm2; w
      vsubss  xmm1, xmm7, xmm6; y
      vmovaps xmm3, xmm6; h
      vmovss  xmm6, [rbp+50h+data.headerX]
      vmovss  dword ptr [rsp+150h+hints2], xmm4
      vmovaps xmm0, xmm6; x
      vmovss  dword ptr [rsp+150h+fmt], xmm4
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, hints2a, *(float *)&hintCount2a, v54, &colorBlackFaded, s_effectTypeMaterials[0]);
    __asm
    {
      vmovss  xmm0, [rbp+50h+data.font.fontScale]
      vmovaps xmm3, xmm6; x
    }
    if ( s_createFxTool->m_assetFilter.m_buffer[0] )
    {
      __asm
      {
        vmovss  [rsp+150h+hintCount2], xmm0
        vmovss  dword ptr [rsp+150h+hints2], xmm0
        vmovss  dword ptr [rsp+150h+fmt], xmm7
      }
      CL_DrawTextPhysicalWithCursor(s_createFxTool->m_assetFilter.m_buffer, 0x7FFFFFFF, data.font.font, *(float *)&_XMM3, fmta, hints2b, *(float *)&hintCount2b, &colorYellow, data.font.fontStyle, s_createFxTool->m_assetFilter.m_cursor, 124);
    }
    else
    {
      v35 = "<type to filter, / to search>";
      if ( s_createFxTool->m_assetList.m_palette != &s_createFX_paletteSounds )
        v35 = "<type to filter>";
      __asm
      {
        vmovss  [rsp+150h+hintCount2], xmm0
        vmovss  dword ptr [rsp+150h+hints2], xmm0
        vmovss  dword ptr [rsp+150h+fmt], xmm7
      }
      CL_DrawTextPhysical(v35, 0x7FFFFFFF, data.font.font, *(float *)&_XMM3, fmtb, hints2c, *(float *)&hintCount2c, &colorWhite, data.font.fontStyle);
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+150h+var_40]
    vmovaps xmm6, [rsp+150h+var_30]
  }
  if ( page->selectionIndexMax > 0 )
  {
    do
    {
      v38 = v8 + 8 * s_createFxTool->m_assetList.m_page + s_createFxTool->m_assetList.m_page;
      if ( (unsigned int)v38 >= s_createFxTool->m_assetList.m_count )
      {
        LODWORD(hintCount2) = s_createFxTool->m_assetList.m_count;
        LODWORD(hints2) = v8 + 8 * s_createFxTool->m_assetList.m_page + s_createFxTool->m_assetList.m_page;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7491, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( s_createFxTool->m_assetList.m_count )", "assetIndex doesn't index s_createFxTool->m_assetList.m_count\n\t%i not in [0, %i)", hints2, hintCount2) )
          __debugbreak();
      }
      m_palette = s_createFxTool->m_assetList.m_palette;
      if ( m_palette )
      {
        if ( (v38 < 0 || (unsigned int)v38 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v38, "signed", v38) )
          __debugbreak();
        m_filteredCount = m_palette->m_filteredCount;
        if ( (unsigned __int16)v38 >= m_filteredCount )
        {
          LODWORD(hintCount2) = m_filteredCount;
          LODWORD(hints2) = (unsigned __int16)v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 617, ASSERT_TYPE_ASSERT, "(unsigned)( filteredIndex ) < (unsigned)( m_filteredCount )", "filteredIndex doesn't index m_filteredCount\n\t%i not in [0, %i)", hints2, hintCount2) )
            __debugbreak();
        }
        AliasForIndex = CreateFxAssetPalette::getAliasForIndex(m_palette, m_palette->m_filtered[(unsigned __int16)v38]);
        if ( AliasForIndex )
          goto LABEL_40;
        v42 = 7496;
      }
      else
      {
        if ( !s_createFxTool->m_assetList.m_enumStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7501, ASSERT_TYPE_ASSERT, "(s_createFxTool->m_assetList.m_enumStrings)", (const char *)&queryFormat, "s_createFxTool->m_assetList.m_enumStrings") )
          __debugbreak();
        AliasForIndex = s_createFxTool->m_assetList.m_enumStrings[v38];
        if ( AliasForIndex )
          goto LABEL_40;
        v42 = 7503;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", v42, ASSERT_TYPE_ASSERT, "(assetString)", (const char *)&queryFormat, "assetString") )
        __debugbreak();
LABEL_40:
      CG_CreateFx_Menu_DrawRow(&data, v8++, AliasForIndex, NULL, -1, 0);
    }
    while ( v8 < page->selectionIndexMax );
  }
}

/*
==============
CG_CreateFx_MenuAssetList_Input
==============
*/
char CG_CreateFx_MenuAssetList_Input(CreateFxMenuPage *const page, LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  CreateFxTool *v12; 
  int v13; 
  int selectionIndex; 
  CreateFxTool *v15; 
  __int64 v16; 
  CreateFxAssetPalette *m_palette; 
  int v18; 
  int v25; 
  CreateFxTool *v26; 
  unsigned int v27; 
  const char *m_title; 
  CreateFxMenuPage *v29; 
  bool v30; 
  int m_propertyIndex; 
  CreateFxMapLayerDef *v33; 
  const char *pathString; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  const char *name; 
  int m_bufferCount; 
  CreateFxEditBuffer *p_m_assetFilter; 
  CreateFxAssetPalette *v41; 
  __int64 allowNumbers; 
  __int64 allowNumbersa; 
  vec3_t layerAngles; 
  vec3_t layerOrigin; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7542, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( s_menuFocus != MENU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7543, ASSERT_TYPE_ASSERT, "(s_menuFocus == CreateFxFocusStates::MENU)", (const char *)&queryFormat, "s_menuFocus == CreateFxFocusStates::MENU") )
    __debugbreak();
  if ( !down )
    return 0;
  if ( key != 27 && key != 2 )
  {
    v12 = s_createFxTool;
    v13 = 0;
    if ( s_createFxTool->m_assetList.m_count > 0 )
    {
      key = CG_CreateFx_Handle_KeyJump(page, localClientNum, key, down);
      switch ( key )
      {
        case 1:
        case 13:
          v26 = s_createFxTool;
          v27 = page->selectionIndex + 9 * s_createFxTool->m_assetList.m_page;
          if ( v27 >= s_createFxTool->m_assetList.m_count )
          {
            LODWORD(allowNumbers) = page->selectionIndex + 9 * s_createFxTool->m_assetList.m_page;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7614, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( s_createFxTool->m_assetList.m_count )", "assetIndex doesn't index s_createFxTool->m_assetList.m_count\n\t%i not in [0, %i)", allowNumbers, s_createFxTool->m_assetList.m_count) )
              __debugbreak();
            v26 = s_createFxTool;
          }
          m_title = v26->m_assetList.m_title;
          v26->m_assetList.m_onSelected(page, v27);
          v29 = s_menuPath[s_menuPathCount];
          if ( !v29 || v29->menuName != HUD_ASSET_LIST || s_createFxTool->m_assetList.m_title != m_title )
            return 1;
          v30 = s_createFxTool->editBuffer.effectTotal <= 0;
          goto LABEL_56;
        case 20:
        case 132:
        case 170:
          selectionIndex = page->selectionIndex - 1;
          goto LABEL_14;
        case 21:
        case 133:
        case 176:
          selectionIndex = page->selectionIndex + 1;
          goto LABEL_14;
        case 22:
        case 134:
        case 172:
          v12 = s_createFxTool;
          v18 = s_createFxTool->m_assetList.m_page - 1;
          if ( v18 < 0 )
            v18 = 0;
          s_createFxTool->m_assetList.m_page = v18;
          goto LABEL_16;
        case 23:
        case 135:
        case 174:
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm0, xmm0, dword ptr [rdx+80093Ch]
            vmulss  xmm1, xmm0, cs:__real@3de38e39
            vroundss xmm2, xmm2, xmm1, 2
            vcvttss2si ecx, xmm2
          }
          v25 = _ECX - 1;
          if ( s_createFxTool->m_assetList.m_page + 1 < v25 )
            v25 = s_createFxTool->m_assetList.m_page + 1;
          s_createFxTool->m_assetList.m_page = v25;
          selectionIndex = page->selectionIndex;
LABEL_14:
          CG_CreateFx_MenuAssetList_SetCursorIndex(page, selectionIndex);
          break;
        default:
          break;
      }
LABEL_15:
      v12 = s_createFxTool;
      goto LABEL_16;
    }
    if ( key != 1 && key != 13 )
    {
LABEL_16:
      if ( !v12->m_assetList.m_palette || !CG_CreateFx_BufferInput(&v12->m_assetFilter, localClientNum, key, down, time, 1, 1, 1) )
        return 0;
      v15 = s_createFxTool;
      if ( s_createFxTool->m_assetList.m_palette == &s_createFX_paletteSounds )
      {
        if ( s_createFxTool->m_assetFilter.m_bufferCount && s_createFxTool->m_assetFilter.m_buffer[0] == 47 )
        {
          v16 = -1i64;
          do
            ++v16;
          while ( s_createFxTool->m_assetFilter.m_buffer[v16 + 1] );
          if ( (unsigned int)v16 >= 4 )
          {
            CreateFxAssetPalette::init(&s_createFX_paletteSounds, "sounds");
            SND_BankEnumAliasLists((void (__fastcall *)(SndAliasList *))CG_CreateFX_SearchSoundAlias);
            v15 = s_createFxTool;
            m_palette = s_createFxTool->m_assetList.m_palette;
            m_palette->m_filteredCount = 0;
            if ( m_palette->m_count )
            {
              do
              {
                m_palette->m_filtered[m_palette->m_filteredCount] = v13;
                LOWORD(v13) = v13 + 1;
                ++m_palette->m_filteredCount;
              }
              while ( (unsigned __int16)v13 < m_palette->m_count );
            }
            v15->soundPaletteContainsSearchResults = 1;
          }
          goto LABEL_83;
        }
        if ( s_createFxTool->soundPaletteContainsSearchResults )
        {
          CreateFxAssetPalette::init(&s_createFX_paletteSounds, "sounds");
          v15 = s_createFxTool;
          if ( s_createFxTool->usedEffectTotal > 0 )
          {
            v35 = 7078100i64;
            do
            {
              v36 = *(int *)(&v15->inited + v35);
              v37 = v36;
              switch ( v15->scratchDataState[v36].effectType )
              {
                case 1:
                  goto LABEL_73;
                case 2:
                  goto LABEL_72;
                case 3:
LABEL_73:
                  name = v15->scratchData[v37].oneShotFxDef.effectSound.name;
                  break;
                case 4:
LABEL_72:
                  name = v15->scratchData[v37].intervalSoundsDef.effectSound.name;
                  break;
                case 5:
                  name = v15->scratchData[v37].reactiveEntDef.effectSound.name;
                  break;
                default:
                  LODWORD(allowNumbersa) = v15->scratchDataState[v36].effectType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3360, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectSoundAliasName: unhandled effect type '%d'", allowNumbersa) )
                    __debugbreak();
LABEL_77:
                  v15 = s_createFxTool;
                  goto LABEL_78;
              }
              if ( name )
              {
                if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteSounds, name) )
                  CreateFxAssetPalette::add(&s_createFX_paletteSounds, name, NULL);
                goto LABEL_77;
              }
LABEL_78:
              ++v13;
              v35 += 4i64;
            }
            while ( v13 < v15->usedEffectTotal );
          }
          v15->soundPaletteContainsSearchResults = 0;
        }
        m_bufferCount = v15->m_assetFilter.m_bufferCount;
        p_m_assetFilter = &v15->m_assetFilter;
        v41 = v15->m_assetList.m_palette;
      }
      else
      {
        m_bufferCount = s_createFxTool->m_assetFilter.m_bufferCount;
        p_m_assetFilter = &s_createFxTool->m_assetFilter;
        v41 = s_createFxTool->m_assetList.m_palette;
      }
      CreateFxAssetPalette::filter(v41, p_m_assetFilter->m_buffer, m_bufferCount);
      v15 = s_createFxTool;
LABEL_83:
      CG_CreateFx_SetAssetListCount(v15->m_assetList.m_palette->m_filteredCount);
      return 1;
    }
    m_propertyIndex = s_createFxTool->m_assetList.m_propertyIndex;
    if ( m_propertyIndex == 1 )
    {
      if ( s_createFxTool->layerListTotal >= 128 )
        goto LABEL_16;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+78h+layerAngles], xmm0
        vmovss  dword ptr [rsp+78h+layerAngles+4], xmm0
        vmovss  dword ptr [rsp+78h+layerAngles+8], xmm0
        vmovss  dword ptr [rsp+78h+layerOrigin], xmm0
        vmovss  dword ptr [rsp+78h+layerOrigin+4], xmm0
        vmovss  dword ptr [rsp+78h+layerOrigin+8], xmm0
      }
      v33 = CG_CreateFx_AddLayer(s_createFxTool->m_assetFilter.m_buffer, (const char *const)&queryFormat.fmt + 3, &layerOrigin, &layerAngles);
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7643, ASSERT_TYPE_ASSERT, "(newLayer)", (const char *)&queryFormat, "newLayer") )
        __debugbreak();
      s_createFxTool->needToExportRootLayer = 1;
      pathString = v33->pathString;
      if ( pathString && !CreateFxAssetPalette::containsAsset(&s_createFX_paletteLayers, v33->pathString) )
        CreateFxAssetPalette::add(&s_createFX_paletteLayers, pathString, NULL);
      CG_CreateFx_SetEffectLayerForSelected(v33);
      v30 = s_createFxTool->editBuffer.effectTotal <= 0;
    }
    else
    {
      if ( m_propertyIndex < 2 )
        goto LABEL_16;
      if ( !CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)s_createFxTool->editEffectType, m_propertyIndex - 2, s_createFxTool->m_assetFilter.m_buffer, 1) )
        goto LABEL_15;
      v30 = s_createFxTool->editBuffer.effectTotal <= 0;
    }
LABEL_56:
    if ( !v30 )
    {
      s_interruptCommandActive = 1;
      CG_CreateFx_OnEditEnd();
    }
    CG_CreateFx_MenuMoveBack();
    return 1;
  }
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
  }
  if ( s_menuPathCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
    __debugbreak();
  --s_menuPathCount;
  return 1;
}

/*
==============
CG_CreateFx_MenuAssetList_SetCursorIndex
==============
*/
void CG_CreateFx_MenuAssetList_SetCursorIndex(CreateFxMenuPage *const page, const int newCursorIndex)
{
  int m_count; 
  int selectionIndexMax; 
  int v6; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7512, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  m_count = s_createFxTool->m_assetList.m_count;
  if ( m_count )
  {
    if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7431, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
      __debugbreak();
    selectionIndexMax = page->selectionIndexMax;
    v6 = m_count - 9 * s_createFxTool->m_assetList.m_page;
    if ( v6 <= selectionIndexMax )
      selectionIndexMax = v6 - 1;
    if ( newCursorIndex >= 0 )
    {
      if ( newCursorIndex > selectionIndexMax )
        newCursorIndex = 0;
      selectionIndexMax = newCursorIndex;
    }
    page->selectionIndex = selectionIndexMax;
  }
  else
  {
    page->selectionIndex = 0;
  }
}

/*
==============
CG_CreateFx_MenuMoveBack
==============
*/
void CG_CreateFx_MenuMoveBack(void)
{
  if ( s_menuPathCount > 0 )
  {
    --s_menuPathCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
      __debugbreak();
    --s_menuPathCount;
  }
}

/*
==============
CG_CreateFx_Menu_DrawFrame
==============
*/
void CG_CreateFx_Menu_DrawFrame(const CreateFxMenuDrawPage *data, const char *strHeader, int pageNum, int pageCount)
{
  bool v8; 
  Material *material; 
  GfxFont *font; 
  int fontStyle; 
  GfxFont *v36; 
  const char *v37; 
  int v41; 
  int v42; 
  __int64 v44; 
  __int64 v50; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float t1; 
  float t1a; 
  float t1b; 
  float t1c; 
  float t1d; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  int color; 
  void *retaddr; 

  _RAX = &retaddr;
  v8 = data->page == NULL;
  _RSI = data;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4239, ASSERT_TYPE_ASSERT, "(data.page)", (const char *)&queryFormat, "data.page") )
    __debugbreak();
  if ( !strHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4240, ASSERT_TYPE_ASSERT, "(strHeader)", (const char *)&queryFormat, "strHeader") )
    __debugbreak();
  material = s_effectTypeMaterials[0];
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm3, dword ptr [rsi+58h]; h
    vmovss  xmm2, dword ptr [rsi+5Ch]; w
    vmovss  xmm1, dword ptr [rsi+68h]; y
    vmovss  xmm0, dword ptr [rsi+64h]; x
    vmovss  dword ptr [rsp+0A8h+var_70], xmm6
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+0A8h+var_78], xmm6
    vmovss  [rsp+0A8h+t1], xmm7
    vmovss  dword ptr [rsp+0A8h+fmt], xmm7
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t1, v68, v73, &colorBlackFaded, s_effectTypeMaterials[0]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+34h]
    vmovss  xmm3, dword ptr [rsi+6Ch]; x
  }
  font = _RSI->font.font;
  color = _RSI->font.fontStyle;
  if ( (unsigned int)(s_menuFocus - 1) <= 1 )
  {
    __asm
    {
      vmovss  [rsp+0A8h+var_78], xmm0
      vmovss  [rsp+0A8h+t1], xmm0
      vmovss  xmm0, dword ptr [rsi+70h]
      vmovss  dword ptr [rsp+0A8h+fmt], xmm0
    }
    CL_DrawTextPhysical(strHeader, 0x7FFFFFFF, font, *(float *)&_XMM3, fmtb, t1b, v70, &colorYellow, color);
    if ( _RSI->page->selectionIndexMax > 0 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+78h]
        vsubss  xmm1, xmm1, dword ptr [rsi+44h]; y
        vmovss  xmm2, cs:__real@40800000; w
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm3, xmm0, dword ptr [rsi+44h]; h
        vaddss  xmm0, xmm6, dword ptr [rsi+64h]; x
        vmovss  dword ptr [rsp+0A8h+var_70], xmm6
        vmovss  [rsp+0A8h+var_78], xmm6
        vmovss  [rsp+0A8h+t1], xmm7
        vmovss  dword ptr [rsp+0A8h+fmt], xmm7
      }
      CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, t1c, v71, v74, &colorYellow, material);
    }
  }
  else
  {
    __asm
    {
      vmovss  [rsp+0A8h+var_78], xmm0
      vmovss  [rsp+0A8h+t1], xmm0
      vmovss  xmm0, dword ptr [rsi+70h]
      vmovss  dword ptr [rsp+0A8h+fmt], xmm0
    }
    CL_DrawTextPhysical(strHeader, 0x7FFFFFFF, font, *(float *)&_XMM3, fmta, t1a, v69, &colorWhite, color);
  }
  if ( pageCount > 0 )
  {
    __asm { vmovaps [rsp+0A8h+var_58], xmm8 }
    if ( pageNum >= pageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4265, ASSERT_TYPE_ASSERT, "(pageNum < pageCount)", (const char *)&queryFormat, "pageNum < pageCount") )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+5Ch]
      vmulss  xmm2, xmm1, cs:__real@3f400000
      vmovss  xmm0, dword ptr [rsi+4Ch]
      vaddss  xmm6, xmm2, dword ptr [rsi+64h]
    }
    fontStyle = _RSI->font.fontStyle;
    __asm
    {
      vmovss  xmm8, dword ptr [rsi+38h]
      vaddss  xmm7, xmm0, dword ptr [rsi+68h]
    }
    v36 = _RSI->font.font;
    v37 = j_va("Page %d / %d", (unsigned int)(pageNum + 1), (unsigned int)pageCount);
    __asm
    {
      vmovss  [rsp+0A8h+var_78], xmm8
      vmovss  [rsp+0A8h+t1], xmm8
      vmovaps xmm3, xmm6; x
      vmovss  dword ptr [rsp+0A8h+fmt], xmm7
    }
    CL_DrawTextPhysical(v37, 0x7FFFFFFF, v36, *(float *)&_XMM3, fmtd, t1d, v72, &colorWhite, fontStyle);
    __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
  v41 = 0;
  v42 = 0;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  if ( _RSI->hintCount > 0 )
  {
    v44 = 0i64;
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+7Ch]; x
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm1, xmm0, dword ptr [rsi+4Ch]
        vmovss  xmm0, dword ptr [rsi+38h]
        vaddss  xmm3, xmm1, dword ptr [rsi+80h]; y
        vmovss  dword ptr [rsp+0A8h+fmt], xmm0
      }
      CG_CreateFx_Menu_DrawHint(_RSI, _RSI->hints[v44], *(float *)&_XMM2, *(float *)&_XMM3, fmte);
      ++v42;
      ++v44;
    }
    while ( v42 < _RSI->hintCount );
  }
  if ( _RSI->hintCount2 > 0 )
  {
    v50 = 0i64;
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+7Ch]; x
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, dword ptr [rsi+4Ch]
        vmovss  xmm0, dword ptr [rsi+38h]
        vaddss  xmm3, xmm1, dword ptr [rsi+80h]; y
        vmovss  dword ptr [rsp+0A8h+fmt], xmm0
      }
      CG_CreateFx_Menu_DrawHint(_RSI, _RSI->hints2[v50], *(float *)&_XMM2, *(float *)&_XMM3, fmtf);
      ++v41;
      ++v50;
    }
    while ( v41 < _RSI->hintCount2 );
  }
}

/*
==============
CG_CreateFx_Menu_DrawGetData
==============
*/
void CG_CreateFx_Menu_DrawGetData(CreateFxMenuDrawPage *data, CreateFxMenuPage *const page, const ScreenPlacement *const scrPlace, const CreateFxHintText *const hints, const int hintCount, const CreateFxHintText *const hints2, const int hintCount2)
{
  int integer; 
  GfxFont *font; 
  const dvar_t *v35; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = data;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  if ( (!page || !scrPlace || !hints) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4060, ASSERT_TYPE_ASSERT, "(page && scrPlace && hints)", (const char *)&queryFormat, "page && scrPlace && hints") )
    __debugbreak();
  _RBX->hintCount = hintCount;
  _RBX->hints2 = hints2;
  _RBX->hintCount2 = hintCount2;
  _RBX->page = page;
  _RBX->hints = hints;
  integer = createfx_hintLevel->current.integer;
  if ( !integer )
    goto LABEL_9;
  if ( integer == 2 )
  {
    _RBX->hintCount = 0;
LABEL_9:
    _RBX->hintCount2 = 0;
  }
  _RBX->font.font = cls.consoleFont;
  _RDI = createfx_menuFontSize;
  if ( !createfx_menuFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vmulss  xmm0, xmm1, cs:__real@3fcccccd
  }
  font = _RBX->font.font;
  __asm
  {
    vmovss  dword ptr [rbx+34h], xmm0
    vmovss  dword ptr [rbx+30h], xmm1
    vmovss  dword ptr [rbx+38h], xmm1
  }
  R_TextHeight(font);
  __asm { vmovss  xmm3, cs:__real@3f8ccccd }
  _RBX->font.fontStyle = 0;
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, eax
    vmulss  xmm5, xmm4, dword ptr [rbx+30h]
    vmulss  xmm1, xmm4, dword ptr [rbx+34h]
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbx+48h], xmm2
    vmulss  xmm2, xmm5, cs:__real@3e99999a
    vmovss  dword ptr [rbx+3Ch], xmm4
    vmovss  dword ptr [rbx+50h], xmm2
    vmovss  dword ptr [rbx+54h], xmm5
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rbx+44h], xmm0
    vmulss  xmm0, xmm4, dword ptr [rbx+38h]
    vmulss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbx+4Ch], xmm1
    vmovss  xmm1, dword ptr [rbx+30h]
    vmulss  xmm0, xmm1, cs:__real@40a00000
    vmulss  xmm1, xmm1, cs:__real@43eb0000
    vmovss  dword ptr [rbx+5Ch], xmm1
    vmovss  dword ptr [rbx+60h], xmm0
  }
  v35 = createfx_menuTextXOrigin;
  if ( !createfx_menuTextXOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  LODWORD(_RBX->frameX) = v35->current.integer;
  _RDI = createfx_menuTextYOrigin;
  if ( !createfx_menuTextYOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm10, dword ptr [rdi+28h]
    vmovss  xmm9, dword ptr [rbx+60h]
    vaddss  xmm4, xmm9, dword ptr [rbx+64h]
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vaddss  xmm0, xmm9, xmm10
    vaddss  xmm5, xmm0, dword ptr [rbx+48h]
    vaddss  xmm7, xmm5, dword ptr [rbx+50h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbx+68h], xmm10
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+4]
    vmulss  xmm1, xmm0, dword ptr [rbx+44h]
    vmulss  xmm0, xmm9, cs:__real@40c00000
    vaddss  xmm2, xmm1, xmm7
    vaddss  xmm1, xmm0, dword ptr [rbx+64h]
    vaddss  xmm8, xmm2, dword ptr [rbx+54h]
    vaddss  xmm0, xmm8, dword ptr [rbx+4Ch]
    vaddss  xmm2, xmm7, dword ptr [rbx+44h]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovss  dword ptr [rbx+80h], xmm0
    vmovss  dword ptr [rbx+74h], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rbx+4Ch]
    vmulss  xmm0, xmm9, cs:__real@40000000
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rbx+78h], xmm2
    vaddss  xmm2, xmm1, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vsubss  xmm3, xmm2, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+58h], xmm1
    vmovss  dword ptr [rbx+6Ch], xmm4
    vmovss  dword ptr [rbx+70h], xmm5
    vmovss  dword ptr [rbx+7Ch], xmm4
  }
}

/*
==============
CG_CreateFx_Menu_DrawHint
==============
*/

void __fastcall CG_CreateFx_Menu_DrawHint(const CreateFxMenuDrawPage *data, const CreateFxHintText hint, double x, double y, float scale)
{
  __int64 v11; 
  __int64 v17; 
  bool v18; 
  bool v19; 
  int v22; 
  const vec4_t *v23; 
  const vec4_t *color; 
  const vec4_t *v26; 
  const vec4_t *v29; 
  int v33; 
  const char *v36; 
  GfxFont *consoleFont; 
  char *v41; 
  GfxFont *v42; 
  GfxFont *v43; 
  char *v44; 
  __int64 integer; 
  unsigned int v46; 
  int v47; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float xScalea; 
  float xScaleb; 
  float xScalec; 
  __int64 xScale; 
  float xScaled; 
  float yScalea; 
  float yScaleb; 
  float yScalec; 
  __int64 yScale; 
  float yScaled; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v11 = hint;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned int)hint >= 0x36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4116, ASSERT_TYPE_ASSERT, "(unsigned)( buttonInfoIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFXHints ) ) + 0 ) )", "buttonInfoIndex doesn't index ARRAY_COUNT( s_createFXHints )\n\t%i not in [0, %i)", hint, 54) )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+0C8h+scale]
    vmulss  xmm0, xmm6, cs:__real@42c80000
    vmulss  xmm1, xmm6, cs:__real@43480000
  }
  v17 = v11 << 7;
  v18 = 0;
  v19 = 0;
  __asm
  {
    vaddss  xmm9, xmm0, xmm7
    vaddss  xmm10, xmm1, xmm7
  }
  if ( (*(_DWORD *)&s_createFXHints[0].action[v17 + 48] & 0x100) != 0 )
    v18 = CL_Keys_IsModifierKeyDown(LOCAL_CLIENT_0, KMOD_SHIFT) == 0;
  if ( (s_createFXHints[0].action[v17 + 48] & 1) != 0 && !CL_Keys_IsModifierKeyDown(LOCAL_CLIENT_0, KMOD_CTRL) )
    v18 = 1;
  if ( (s_createFXHints[0].action[v17 + 48] & 2) != 0 && CL_Keys_IsModifierKeyDown(LOCAL_CLIENT_0, KMOD_CTRL) )
    v18 = 1;
  if ( (s_createFXHints[0].action[v17 + 48] & 4) != 0 )
    v19 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5) == 0;
  if ( (s_createFXHints[0].action[v17 + 48] & 8) != 0 && CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5) )
    v19 = 1;
  v22 = *(_DWORD *)&s_createFXHints[0].action[v17 + 48];
  if ( (v22 & 0x10) != 0 && !s_createFxTool->selectedEffectTotal )
  {
    v18 = 1;
    v19 = 1;
  }
  if ( (v22 & 0x20) != 0 && !s_createFxTool->clipboard.effectTotal )
  {
    v18 = 1;
    v19 = 1;
  }
  if ( (v22 & 0x40) != 0 && !s_createFxTool->undoCount.m_count )
  {
    v18 = 1;
    v19 = 1;
  }
  if ( (v22 & 0x80u) != 0 && !s_createFxTool->redoCount.m_count )
  {
    v18 = 1;
    v19 = 1;
  }
  if ( (v22 & 0x200) != 0 && s_createFxTool->selectedEffectTotal < 2 )
  {
    v18 = 1;
    v19 = 1;
  }
  v23 = &colorWhiteMoreFaded;
  color = &colorWhite;
  if ( v19 )
    color = &colorWhiteMoreFaded;
  __asm
  {
    vmovss  [rsp+0C8h+yScale], xmm6
    vmovss  [rsp+0C8h+xScale], xmm6
    vmovaps xmm3, xmm7; x
    vmovss  dword ptr [rsp+0C8h+fmt], xmm8
  }
  CL_DrawTextPhysical(&s_createFXHints[0].buttons[v17], 0x7FFFFFFF, cls.consoleFont, *(float *)&_XMM3, fmt, xScalea, yScalea, color, 0);
  v26 = &colorWhite;
  if ( v18 )
    v26 = &colorWhiteMoreFaded;
  __asm
  {
    vmovss  [rsp+0C8h+yScale], xmm6
    vmovss  [rsp+0C8h+xScale], xmm6
    vmovaps xmm3, xmm9; x
    vmovss  dword ptr [rsp+0C8h+fmt], xmm8
  }
  CL_DrawTextPhysical(&s_createFXHints[0].keys[v17], 0x7FFFFFFF, cls.consoleFont, *(float *)&_XMM3, fmta, xScaleb, yScaleb, v26, 0);
  __asm { vmovaps xmm9, [rsp+0C8h+var_68] }
  if ( !v18 || (v29 = &colorWhiteMoreFaded, !v19) )
    v29 = &colorWhite;
  __asm
  {
    vmovss  [rsp+0C8h+yScale], xmm6
    vmovss  [rsp+0C8h+xScale], xmm6
    vmovaps xmm3, xmm10; x
    vmovss  dword ptr [rsp+0C8h+fmt], xmm8
  }
  CL_DrawTextPhysical(&s_createFXHints[0].action[v17], 0x7FFFFFFF, cls.consoleFont, *(float *)&_XMM3, fmtb, xScalec, yScalec, v29, 0);
  _R9 = *(unsigned int **)((char *)&s_createFXHints[0].value + v17);
  __asm { vmovaps xmm10, [rsp+0C8h+var_78] }
  if ( _R9 || *(const dvar_t **)((char *)&s_createFXHints[0].valueDvar + v17) )
  {
    v33 = *(CreateFxHintValueType *)((char *)&s_createFXHints[0].valueType + v17);
    if ( v33 )
    {
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@43c30000
        vaddss  xmm7, xmm0, xmm7
      }
      switch ( v33 )
      {
        case 1:
          if ( !v18 || !v19 )
            v23 = &colorWhite;
          v36 = "Off";
          if ( *(_BYTE *)_R9 )
            v36 = "On";
          goto LABEL_74;
        case 2:
          if ( !v18 || !v19 )
            v23 = &colorWhite;
          __asm { vmovss  xmm1, dword ptr [r9] }
          consoleFont = cls.consoleFont;
          __asm
          {
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v41 = j_va("%g", _RDX);
          v42 = consoleFont;
          v36 = v41;
          goto LABEL_75;
        case 3:
          if ( !v18 || !v19 )
            v23 = &colorWhite;
          v43 = cls.consoleFont;
          v44 = j_va("%d", *_R9);
          v42 = v43;
          v36 = v44;
          goto LABEL_75;
        case 4:
          if ( !v18 || !v19 )
            v23 = &colorWhite;
          v36 = *(const char **)((char *)&s_createFXHints[0].value + v17);
          goto LABEL_74;
        case 5:
          integer = (int)*_R9;
          v46 = *(int *)((char *)&s_createFXHints[0].valueEnumStrCount + v17);
          if ( (unsigned int)integer < v46 )
            goto LABEL_70;
          v47 = 4224;
          break;
        case 6:
          if ( !*(const dvar_t **)((char *)&s_createFXHints[0].valueDvar + v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4213, ASSERT_TYPE_ASSERT, "(info.valueDvar)", (const char *)&queryFormat, "info.valueDvar") )
            __debugbreak();
          integer = (*(const dvar_t **)((char *)&s_createFXHints[0].valueDvar + v17))->current.integer;
          v46 = *(int *)((char *)&s_createFXHints[0].valueEnumStrCount + v17);
          if ( (unsigned int)integer < v46 )
            goto LABEL_70;
          v47 = 4215;
          break;
        default:
          goto LABEL_76;
      }
      LODWORD(yScale) = v46;
      LODWORD(xScale) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", v47, ASSERT_TYPE_ASSERT, "(unsigned)( valueInt ) < (unsigned)( info.valueEnumStrCount )", "valueInt doesn't index info.valueEnumStrCount\n\t%i not in [0, %i)", xScale, yScale) )
        __debugbreak();
LABEL_70:
      if ( !v18 || !v19 )
        v23 = &colorWhite;
      v36 = (*(const char *const **)((char *)&s_createFXHints[0].valueEnumStr + v17))[integer];
LABEL_74:
      v42 = cls.consoleFont;
LABEL_75:
      __asm
      {
        vmovss  [rsp+0C8h+yScale], xmm6
        vmovss  [rsp+0C8h+xScale], xmm6
        vmovaps xmm3, xmm7; x
        vmovss  dword ptr [rsp+0C8h+fmt], xmm8
      }
      CL_DrawTextPhysical(v36, 0x7FFFFFFF, v42, *(float *)&_XMM3, fmtc, xScaled, yScaled, v23, 0);
    }
  }
LABEL_76:
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_CreateFx_Menu_DrawRow
==============
*/
void CG_CreateFx_Menu_DrawRow(CreateFxMenuDrawPage *data, const int row, const char *const strKey, const char *strValue, int cursor, bool isDisabled)
{
  bool v12; 
  bool v17; 
  const vec4_t *color; 
  vec4_t *v34; 
  int style; 
  GfxFont *font; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int64 xScale; 
  float xScalea; 
  float xScaleb; 
  float xScalec; 
  float xScaled; 
  float yScale; 
  float yScalea; 
  float yScaleb; 
  float yScalec; 
  char dest[8]; 
  __int64 v56; 
  int v57; 
  char v60; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  v12 = data->page == NULL;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  _RBX = data;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4315, ASSERT_TYPE_ASSERT, "(data.page)", (const char *)&queryFormat, "data.page") )
    __debugbreak();
  if ( _RBX->page->selectionIndexMax <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4316, ASSERT_TYPE_ASSERT, "(data.page->selectionIndexMax > 0)", (const char *)&queryFormat, "data.page->selectionIndexMax > 0") )
    __debugbreak();
  if ( (unsigned int)row >= _RBX->page->selectionIndexMax )
  {
    LODWORD(xScale) = row;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4317, ASSERT_TYPE_ASSERT, "(unsigned)( row ) < (unsigned)( data.page->selectionIndexMax )", "row doesn't index data.page->selectionIndexMax\n\t%i not in [0, %i)", xScale, _RBX->page->selectionIndexMax) )
      __debugbreak();
  }
  if ( !strKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4318, ASSERT_TYPE_ASSERT, "(strKey)", (const char *)&queryFormat, "strKey") )
    __debugbreak();
  v17 = (unsigned int)(s_menuFocus - 1) <= 1 && row == _RBX->page->selectionIndex;
  if ( isDisabled )
  {
    color = &colorRed;
  }
  else
  {
    color = &colorWhite;
    if ( v17 )
      color = &colorYellow;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+30h]
    vmulss  xmm0, xmm6, cs:__real@432a0000
    vmovss  xmm7, dword ptr [rbx+74h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebp
    vaddss  xmm9, xmm0, xmm7
    vmulss  xmm0, xmm1, dword ptr [rbx+44h]
    vaddss  xmm8, xmm0, dword ptr [rbx+78h]
  }
  *(_QWORD *)dest = 0i64;
  v56 = 0i64;
  v57 = 0;
  Com_sprintf(dest, 0x14ui64, "%d.", (unsigned int)(row + 1));
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rsp+0F8h+yScale], xmm0
    vmovss  [rsp+0F8h+xScale], xmm0
    vmovaps xmm3, xmm7; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm8
  }
  CL_DrawTextPhysical(dest, 0x7FFFFFFF, _RBX->font.font, *(float *)&_XMM3, fmt, xScalea, yScale, color, _RBX->font.fontStyle);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+30h]
    vmulss  xmm0, xmm6, cs:__real@41c80000
    vmovss  [rsp+0F8h+yScale], xmm1
    vmovss  [rsp+0F8h+xScale], xmm1
    vaddss  xmm3, xmm0, xmm7; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm8
  }
  CL_DrawTextPhysical(strKey, 0x7FFFFFFF, _RBX->font.font, *(float *)&_XMM3, fmta, xScaleb, yScalea, color, _RBX->font.fontStyle);
  __asm
  {
    vmovaps xmm7, [rsp+0F8h+var_58]
    vmovaps xmm6, [rsp+0F8h+var_48]
  }
  if ( strValue )
  {
    if ( v17 )
    {
      v34 = &colorOrange;
      if ( s_menuFocus != EDIT )
        v34 = (vec4_t *)color;
      color = v34;
    }
    style = _RBX->font.fontStyle;
    font = _RBX->font.font;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovaps xmm3, xmm9; x
    }
    if ( cursor == -1 )
    {
      __asm
      {
        vmovss  [rsp+0F8h+yScale], xmm0
        vmovss  [rsp+0F8h+xScale], xmm0
        vmovss  dword ptr [rsp+0F8h+fmt], xmm8
      }
      CL_DrawTextPhysical(strValue, 0x7FFFFFFF, font, *(float *)&_XMM3, fmtc, xScaled, yScalec, color, style);
    }
    else
    {
      __asm
      {
        vmovss  [rsp+0F8h+yScale], xmm0
        vmovss  [rsp+0F8h+xScale], xmm0
        vmovss  dword ptr [rsp+0F8h+fmt], xmm8
      }
      CL_DrawTextPhysicalWithCursor(strValue, 0x7FFFFFFF, font, *(float *)&_XMM3, fmtb, xScalec, yScaleb, color, style, cursor, 124);
    }
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-50h]
    vmovaps xmm9, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_CreateFx_MoveSelectionToCursor
==============
*/
void CG_CreateFx_MoveSelectionToCursor(__int64 a1, double a2)
{
  int v17; 
  __int64 v18; 
  __int64 v22; 
  CreateFxEffectType effectType; 
  __int64 v31; 
  __int64 v32; 

  _RAX = s_createFxTool;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovaps [rsp+0C8h+var_68], xmm9
    vmovaps [rsp+0C8h+var_78], xmm10
    vcomiss xmm0, dword ptr [rax+240018h]
    vmovaps [rsp+0C8h+var_88], xmm11
  }
  CG_CreateFx_CalculateSelectionCenter(&s_createFxTool->selectionCenter, a2);
  _RBX = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    _RBX = s_createFxTool;
  }
  CG_CreateFx_SaveSelectionToBuffer(&_RBX->editBuffer);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24001Ch]
    vsubss  xmm9, xmm0, dword ptr [rbx+4800C0h]
    vmovss  xmm0, dword ptr [rbx+240024h]
    vmovss  xmm1, dword ptr [rbx+240020h]
    vsubss  xmm11, xmm0, dword ptr [rbx+4800C8h]
    vsubss  xmm10, xmm1, dword ptr [rbx+4800C4h]
  }
  v17 = 0;
  if ( _RBX->selectedEffectTotal > 0 )
  {
    v18 = 7209180i64;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovss  xmm6, [rsp+0C8h+arg_0]
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovss  xmm7, [rsp+0C8h+arg_0]
      vmovaps [rsp+0C8h+var_58], xmm8
      vmovss  xmm8, [rsp+0C8h+arg_0]
    }
    do
    {
      v22 = *(int *)(&_RBX->inited + v18);
      _RDI = &_RBX->scratchData[v22];
      effectType = _RBX->scratchDataState[v22].effectType;
      if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
      {
        if ( _RDI )
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rdi]
            vmovss  xmm6, dword ptr [rdi+4]
            vmovss  xmm7, dword ptr [rdi+8]
          }
        }
      }
      else
      {
        LODWORD(v31) = effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v31) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm8, xmm8, xmm9
        vaddss  xmm6, xmm6, xmm10
        vaddss  xmm7, xmm7, xmm11
      }
      if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
      {
        if ( _RDI )
        {
          __asm
          {
            vmovss  dword ptr [rdi], xmm8
            vmovss  dword ptr [rdi+4], xmm6
            vmovss  dword ptr [rdi+8], xmm7
          }
        }
      }
      else
      {
        LODWORD(v31) = effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v31) )
          __debugbreak();
      }
      CG_CreateFx_OrientEffect(_RDI, effectType);
      if ( (unsigned int)v22 >= 0x4000 )
      {
        LODWORD(v32) = 0x4000;
        LODWORD(v31) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      CG_CreateFx_StopEffect(v22);
      CG_CreateFx_StartEffect(v22);
      _RBX = s_createFxTool;
      ++v17;
      v18 += 4i64;
    }
    while ( v17 < s_createFxTool->selectedEffectTotal );
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
  __asm
  {
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovaps xmm10, [rsp+0C8h+var_78]
    vmovaps xmm11, [rsp+0C8h+var_88]
  }
  CG_CreateFx_OnEditEnd();
}

/*
==============
CG_CreateFx_ObjectProperties_Draw
==============
*/
void CG_CreateFx_ObjectProperties_Draw(CreateFxMenuPage *const page, const ScreenPlacement *const scrPlace)
{
  __int64 m_fieldCount; 
  int v5; 
  CreateFxTool *v6; 
  int v7; 
  int v8; 
  CreateFxHintText *v10; 
  const char *v13; 
  CreateFxTool *v14; 
  const CreateFxEffectFieldInfo *m_fields; 
  __int64 v16; 
  int m_storageIndex; 
  int m_cursor; 
  const char *m_buffer; 
  int fmt; 
  CreateFxHintText *hints2; 
  int hintCount2; 
  CreateFxSelectedInfo out_info; 
  CreateFxMenuDrawPage data; 
  __int128 v25; 
  int v26; 
  int v27; 
  CreateFxHintText hints[8]; 
  int v30; 
  int v31; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6902, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  CG_CreateFx_GetSelectedInfo(s_createFxTool->selectedEffectList[0], page->selectionIndex, &out_info);
  m_fieldCount = (unsigned int)out_info.m_fieldCount;
  v5 = out_info.m_fieldCount + 2;
  if ( page->selectionIndex >= out_info.m_fieldCount + 2 )
    page->selectionIndex = 0;
  v6 = s_createFxTool;
  v7 = 2;
  page->selectionIndexMax = 2;
  v8 = 2;
  if ( v6->selectionHomogeneous )
    v8 = v5;
  page->selectionIndexMax = v8;
  if ( s_menuFocus == EDIT )
  {
    if ( (unsigned int)(*(_DWORD *)out_info.m_fieldType - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6921, ASSERT_TYPE_ASSERT, "(CG_CreateFx_ObjectProperties_IsNumber( info.m_fieldType ))", (const char *)&queryFormat, "CG_CreateFx_ObjectProperties_IsNumber( info.m_fieldType )") )
      __debugbreak();
    __asm { vmovdqu xmm0, cs:__xmm@00000029000000280000002700000001 }
    hintCount2 = 0;
    v10 = (CreateFxHintText *)&v25;
    hints2 = NULL;
    __asm { vmovdqu [rbp+70h+var_70], xmm0 }
    fmt = 6;
    v26 = 32;
    v27 = 33;
  }
  else
  {
    if ( s_menuFocus == MENU )
    {
      LODWORD(v25) = 1;
      if ( *(_DWORD *)out_info.m_fieldType == 9 )
      {
        DWORD1(v25) = 34;
        CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, (const CreateFxHintText *const)&v25, 2, s_hintsMenuCommon, 2);
      }
      else
      {
        *(_QWORD *)((char *)&v25 + 4) = 0x1E00000024i64;
        CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, (const CreateFxHintText *const)&v25, 3, s_hintsMenuCommon, 2);
      }
      goto LABEL_22;
    }
    if ( v6->editRotation )
      __asm { vmovdqu ymm0, cs:__ymm@000000160000001400000012000000170000003200000031000000300000001e }
    else
      __asm { vmovdqu ymm0, cs:__ymm@000000160000001400000012000000170000002c0000002b0000002a0000001e }
    __asm { vmovdqu xmm1, cs:__xmm@0000001a000000190000001500000003 }
    hintCount2 = 13;
    hints2 = (CreateFxHintText *)s_hintsWorldCommon;
    v10 = hints;
    fmt = 14;
    __asm
    {
      vmovdqu ymmword ptr [rbp+70h+hints], ymm0
      vmovdqu [rbp+70h+var_38], xmm1
    }
    v30 = 27;
    v31 = 28;
  }
  CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, v10, fmt, hints2, hintCount2);
LABEL_22:
  CG_CreateFx_Menu_DrawFrame(&data, "PROPERTIES", 0, 0);
  if ( s_createFxTool->selectionHomogeneous )
    v13 = createFxEffectTypeStrings[out_info.m_effectType];
  else
    v13 = "Multiple Selected";
  CG_CreateFx_Menu_DrawRow(&data, 0, "Type", v13, -1, 0);
  CG_CreateFx_Menu_DrawRow(&data, 1, "Layer", out_info.m_layer->pathString, -1, 0);
  v14 = s_createFxTool;
  if ( s_createFxTool->selectionHomogeneous && (int)m_fieldCount > 0 )
  {
    m_fields = out_info.m_fields;
    v16 = m_fieldCount;
    m_storageIndex = out_info.m_storageIndex;
    while ( 1 )
    {
      if ( s_menuFocus == EDIT && v7 == data.page->selectionIndex && (unsigned int)(*(_DWORD *)m_fields->type - 2) <= 1 )
      {
        m_cursor = v14->m_numberEdit.m_cursor;
        m_buffer = v14->m_numberEdit.m_buffer;
      }
      else
      {
        m_buffer = CG_CreateFx_EffectField_Get(m_storageIndex, m_fields);
        m_cursor = -1;
      }
      CG_CreateFx_Menu_DrawRow(&data, v7++, m_fields->description, m_buffer, m_cursor, 0);
      ++m_fields;
      if ( !--v16 )
        break;
      v14 = s_createFxTool;
    }
  }
}

/*
==============
CG_CreateFx_ObjectProperties_Input
==============
*/
bool CG_CreateFx_ObjectProperties_Input(CreateFxMenuPage *const page, LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  int Fx_Handle_KeyJump; 
  bool result; 
  int v12; 
  int m_fieldIndex; 
  const char *v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  CreateFxTool *v18; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 m_bufferCount; 
  CreateFxTool *v26; 
  int v29; 
  int v30; 
  CreateFxSelectedInfo out_info; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7054, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  if ( !down )
    goto LABEL_60;
  if ( s_menuFocus == MENU )
  {
    Fx_Handle_KeyJump = CG_CreateFx_Handle_KeyJump(page, localClientNum, key, down);
    switch ( Fx_Handle_KeyJump )
    {
      case 1:
      case 13:
        if ( s_createFxTool->editBuffer.effectTotal > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7102, ASSERT_TYPE_ASSERT, "(!CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "!CG_CreateFx_IsEditPending()") )
          __debugbreak();
        CG_CreateFx_GetSelectedInfo(s_createFxTool->selectedEffectList[0], page->selectionIndex, &out_info);
        v12 = *(_DWORD *)out_info.m_fieldType;
        if ( *(_DWORD *)out_info.m_fieldType == 9 )
        {
          m_fieldIndex = out_info.m_fieldIndex;
          v14 = CG_CreateFx_EffectField_Get(out_info.m_storageIndex, &out_info.m_fields[out_info.m_fieldIndex]);
          CG_CreateFx_OnEditBegin();
          v15 = "true";
          v16 = m_fieldIndex;
          if ( *v14 == 116 )
            v15 = "false";
LABEL_19:
          CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)out_info.m_effectType, v16, v15, 0);
          CG_CreateFx_OnEditEnd();
          goto $LN58_17;
        }
        CG_CreateFx_OnEditBegin();
        CG_CreateFx_EffectField_BeginEdit(v12);
        if ( (unsigned int)(v12 - 2) > 1 )
          goto $LN58_17;
        v17 = CG_CreateFx_EffectField_Get(out_info.m_storageIndex, &out_info.m_fields[out_info.m_fieldIndex]);
        v18 = s_createFxTool;
        v19 = v17;
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 718, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
          __debugbreak();
        v20 = -1i64;
        v21 = -1i64;
        do
          ++v21;
        while ( v19[v21] );
        Core_strncpy(v18->m_numberEdit.m_buffer, 0x3FFui64, v19, (unsigned int)v21);
        do
          ++v20;
        while ( v18->m_numberEdit.m_buffer[v20] );
        v18->m_numberEdit.m_bufferCount = v20;
        if ( (unsigned int)v20 > 0x3FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 721, ASSERT_TYPE_ASSERT, "(m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM)", (const char *)&queryFormat, "m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM") )
          __debugbreak();
        m_bufferCount = v18->m_numberEdit.m_bufferCount;
        v18->m_numberEdit.m_cursor = m_bufferCount;
        v18->m_numberEdit.m_buffer[m_bufferCount] = 0;
        result = 1;
        break;
      case 2:
      case 27:
        if ( s_menuFocus != MENU )
          goto LABEL_60;
        s_menuFocus = WORLD;
        s_createFxTool->keyNeedsRelease[Fx_Handle_KeyJump] = 1;
        result = 1;
        goto LABEL_61;
      case 20:
      case 132:
        if ( page->selectionIndex <= 0 )
          goto LABEL_60;
        --page->selectionIndex;
        result = 1;
        goto LABEL_61;
      case 21:
      case 133:
        if ( page->selectionIndex >= page->selectionIndexMax - 1 )
          goto LABEL_60;
        ++page->selectionIndex;
        result = 1;
        goto LABEL_61;
      case 149:
        if ( !s_createFxTool->selectionHomogeneous )
          goto LABEL_60;
        CG_CreateFx_GetSelectedInfo(s_createFxTool->selectedEffectList[0], page->selectionIndex, &out_info);
        if ( *(int *)out_info.m_fieldType < 2 )
          goto $LN58_17;
        CG_CreateFx_OnEditBegin();
        v16 = out_info.m_fieldIndex;
        v15 = (char *)&queryFormat.fmt + 3;
        goto LABEL_19;
      default:
        goto LABEL_60;
    }
    goto LABEL_61;
  }
  if ( s_menuFocus != EDIT )
  {
LABEL_60:
    result = 0;
    goto LABEL_61;
  }
  _RAX = s_createFxEditRateIndex;
  _RDI = 0x140000000ui64;
  __asm { vmovss  xmm6, rva s_createFxEditRates[rdi+rax*4] }
  CG_CreateFx_GetSelectedInfo(s_createFxTool->selectedEffectList[0], page->selectionIndex, &out_info);
  if ( (unsigned int)(*(_DWORD *)out_info.m_fieldType - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7159, ASSERT_TYPE_ASSERT, "(CG_CreateFx_ObjectProperties_IsNumber( info.m_fieldType ))", (const char *)&queryFormat, "CG_CreateFx_ObjectProperties_IsNumber( info.m_fieldType )") )
    __debugbreak();
  v26 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7160, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "CG_CreateFx_IsEditPending()") )
      __debugbreak();
    v26 = s_createFxTool;
  }
  switch ( key )
  {
    case 1:
    case 13:
      CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)out_info.m_effectType, out_info.m_fieldIndex, v26->m_numberEdit.m_buffer, 0);
      CG_CreateFx_OnEditEnd();
      result = 1;
      s_menuFocus = MENU;
      break;
    case 2:
    case 27:
      if ( v26->editBuffer.effectTotal <= 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2101, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "CG_CreateFx_IsEditPending()") )
          __debugbreak();
        v26 = s_createFxTool;
      }
      s_menuFocus = MENU;
      v26->editBuffer.effectTotal = 0;
      result = 1;
      break;
    case 20:
    case 132:
      __asm { vmovaps xmm1, xmm6; delta }
      CreateFxEditBuffer::modifyNumber(&v26->m_numberEdit, *(const float *)&_XMM1);
      result = 1;
      break;
    case 21:
    case 133:
      __asm { vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000; jumptable 0000000141C2BB1F cases 21,133 }
      CreateFxEditBuffer::modifyNumber(&v26->m_numberEdit, *(const float *)&_XMM1);
      result = 1;
      break;
    case 22:
      v29 = s_createFxEditRateIndex - 1;
      if ( s_createFxEditRateIndex - 1 < 0 )
        v29 = 0;
      s_createFxEditRateIndex = v29;
      result = 1;
      break;
    case 23:
      v30 = 8;
      if ( s_createFxEditRateIndex + 1 < 8 )
        v30 = s_createFxEditRateIndex + 1;
      result = 1;
      s_createFxEditRateIndex = v30;
      break;
    case 61:
$LN58_17:
      result = 1;
      break;
    default:
      result = CG_CreateFx_BufferInput(&v26->m_numberEdit, localClientNum, key, down, time, 1, 0, 0);
      break;
  }
LABEL_61:
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  return result;
}

/*
==============
CG_CreateFx_OnEditAbandon
==============
*/
void CG_CreateFx_OnEditAbandon(void)
{
  CreateFxTool *v0; 

  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2101, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "CG_CreateFx_IsEditPending()") )
      __debugbreak();
    v0 = s_createFxTool;
  }
  v0->editBuffer.effectTotal = 0;
}

/*
==============
CG_CreateFx_OnEditBegin
==============
*/
void CG_CreateFx_OnEditBegin(void)
{
  CreateFxTool *v0; 

  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v0 = s_createFxTool;
  }
  CG_CreateFx_SaveSelectionToBuffer(&v0->editBuffer);
}

/*
==============
CG_CreateFx_OnEditEnd
==============
*/
void CG_CreateFx_OnEditEnd(void)
{
  CreateFxTool *v0; 
  int v1; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  int v19; 
  __int64 v20; 
  const CreateFXDataUnion *v21; 

  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2108, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "CG_CreateFx_IsEditPending()") )
      __debugbreak();
    v0 = s_createFxTool;
  }
  if ( v0->editBuffer.effectTotal != v0->selectedEffectTotal )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2109, ASSERT_TYPE_ASSERT, "(s_createFxTool->editBuffer.effectTotal == s_createFxTool->selectedEffectTotal)", (const char *)&queryFormat, "s_createFxTool->editBuffer.effectTotal == s_createFxTool->selectedEffectTotal") )
      __debugbreak();
    v0 = s_createFxTool;
  }
  v1 = 0;
  v2 = 0;
  v19 = 0;
  if ( v0->selectedEffectTotal <= 0 )
  {
    v0->editBuffer.effectTotal = 0;
  }
  else
  {
    v3 = 7209180i64;
    v4 = 0i64;
    v5 = 2359448i64;
    do
    {
      v6 = *(int *)(&v0->inited + v3);
      v7 = (__int64)&v0->editBuffer.effectDataState[v4];
      _R13 = &v0->inited + v5;
      v20 = (__int64)&v0->scratchDataState[v6];
      v21 = &v0->scratchData[v6];
      if ( !CG_CreateFx_EffectsAreEqual((const CreateFxDataState *)v7, (const CreateFXDataUnion *)(&v0->inited + v5), (const CreateFxDataState *)v20, v21) )
      {
        CG_CreateFx_ClearRedoStack();
        while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0xF8 )
          CG_CreateFx_DiscardUndoSequence();
        _RBX = (CreateFxCommand *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0xF8ui64, 4ui64, 1);
        if ( !_RBX )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
        LODWORD(_RBX[1].__vftable) = v6;
        _RBX->__vftable = (CreateFxCommand_vtbl *)&CreateFxEditCommand::`vftable';
        HIDWORD(_RBX[1].__vftable) = 0;
        LODWORD(_RBX[16].__vftable) = 0;
        if ( !*(_DWORD *)(v7 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1378, ASSERT_TYPE_ASSERT, "(beforeState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "beforeState.effectType != CreateFxEffectType::None") )
          __debugbreak();
        HIDWORD(_RBX[1].__vftable) = *(_DWORD *)(v7 + 8);
        _RBX[15].__vftable = *(CreateFxCommand_vtbl **)(v7 + 24);
        __asm
        {
          vmovups ymm0, ymmword ptr [r13+0]
          vmovups ymmword ptr [rbx+10h], ymm0
          vmovups ymm1, ymmword ptr [r13+20h]
          vmovups ymmword ptr [rbx+30h], ymm1
          vmovups ymm0, ymmword ptr [r13+40h]
          vmovups ymmword ptr [rbx+50h], ymm0
          vmovsd  xmm1, qword ptr [r13+60h]
          vmovsd  qword ptr [rbx+70h], xmm1
        }
        if ( !*(_DWORD *)(v20 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1383, ASSERT_TYPE_ASSERT, "(afterState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "afterState.effectType != CreateFxEffectType::None") )
          __debugbreak();
        LODWORD(_RBX[16].__vftable) = *(_DWORD *)(v20 + 8);
        _RBX[30].__vftable = *(CreateFxCommand_vtbl **)(v20 + 24);
        _RAX = v21;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbx+88h], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rbx+0A8h], ymm1
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rbx+0C8h], ymm0
          vmovsd  xmm1, qword ptr [rax+60h]
          vmovsd  qword ptr [rbx+0E8h], xmm1
        }
        CG_CreateFx_PushUndoCommand(_RBX);
        v1 = ++v19;
      }
      v0 = s_createFxTool;
      ++v2;
      v3 += 4i64;
      v5 += 104i64;
      ++v4;
    }
    while ( v2 < s_createFxTool->selectedEffectTotal );
    if ( v1 > 0 )
    {
      CG_CreateFx_PushUndoSequence(v1);
      v0 = s_createFxTool;
    }
    v0->editBuffer.effectTotal = 0;
  }
}

/*
==============
CG_CreateFx_OnMapRestart
==============
*/
void CG_CreateFx_OnMapRestart(void)
{
  const dvar_t *v0; 

  if ( s_createFxTool && s_createFxTool->inited )
  {
    Com_Printf_NoFilter("[CreateFx] MapRestart\n");
    v0 = DCONST_DVARBOOL_developer_createfx;
    if ( !DCONST_DVARBOOL_developer_createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_createfx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    s_resumeCreateFxAfterRestart = !v0->current.enabled && s_createFxTool && s_createFxTool->hasBeenEnabled;
  }
}

/*
==============
CG_CreateFx_OnPaletteSelected_EffectType
==============
*/
void CG_CreateFx_OnPaletteSelected_EffectType(CreateFxMenuPage *const page, const int elementIndex)
{
  CreateFxEffectType SelectedEffectType; 
  CreateFxTool *v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  SelectedEffectType = (unsigned int)CG_CreateFx_GetSelectedEffectType(page, elementIndex);
  if ( SelectedEffectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7229, ASSERT_TYPE_ASSERT, "(newEffectType != CreateFxEffectType::None)", (const char *)&queryFormat, "newEffectType != CreateFxEffectType::None") )
    __debugbreak();
  v3 = s_createFxTool;
  v4 = 0;
  if ( s_createFxTool->selectedEffectTotal > 0 )
  {
    v5 = 7209180i64;
    do
    {
      v6 = *(_DWORD *)(&v3->inited + v5);
      CG_CreateFx_StopEffect(v6);
      CG_CreateFx_SetEffectType(v6, SelectedEffectType);
      CG_CreateFx_StartEffect(v6);
      v3 = s_createFxTool;
      v5 += 4i64;
      ++v4;
    }
    while ( v4 < s_createFxTool->selectedEffectTotal );
  }
  CG_CreateFx_EvaluateSelectionHomogeneity();
}

/*
==============
CG_CreateFx_OnPaletteSelected_EffectTypeNew
==============
*/
void CG_CreateFx_OnPaletteSelected_EffectTypeNew(CreateFxMenuPage *const page, const int elementIndex)
{
  int SelectedEffectType; 
  int v3; 
  char *v4; 
  const CreateFxMapLayerDef *ActiveLayer; 
  CreateFxTool *v6; 
  CreateFxTool *v7; 
  int v8; 
  int v9; 
  int v10; 

  SelectedEffectType = CG_CreateFx_GetSelectedEffectType(page, elementIndex);
  CG_CreateFx_ClearRedoStack();
  while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x28 )
    CG_CreateFx_DiscardUndoSequence();
  v3 = 4;
  v4 = (char *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x28ui64, 4ui64, 1);
  if ( !v4 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
  *((_DWORD *)v4 + 2) = -1;
  *(_QWORD *)v4 = &CreateFxInsertNewEffectCommand::`vftable';
  *((_QWORD *)v4 + 2) = 0i64;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 3) = SelectedEffectType;
  ActiveLayer = CG_CreateFx_GetActiveLayer();
  v6 = s_createFxTool;
  *((_QWORD *)v4 + 4) = ActiveLayer;
  *(vec3_t *)(v4 + 16) = v6->clipboard.cursorTrace.position;
  (**(void (__fastcall ***)(void *))v4)(v4);
  CG_CreateFx_PushUndoCommand((CreateFxCommand *const)v4);
  CG_CreateFx_PushUndoSequence(1u);
  if ( s_menuPathCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
    __debugbreak();
  --s_menuPathCount;
  CG_CreateFx_ClearSelection();
  v7 = s_createFxTool;
  s_menuFocus = WORLD;
  if ( s_createFxTool->usedEffectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1611, ASSERT_TYPE_ASSERT, "(s_createFxTool->usedEffectTotal > 0)", (const char *)&queryFormat, "s_createFxTool->usedEffectTotal > 0") )
      __debugbreak();
    v7 = s_createFxTool;
  }
  CG_CreateFx_SelectFx(*((_DWORD *)&v7->scratchDataState[0x4000].selected + v7->usedEffectTotal), 1);
  v8 = SelectedEffectType - 1;
  if ( !v8 )
    goto LABEL_17;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_17:
    CG_CreateFx_EffectField_BeginEdit(v3);
    goto LABEL_18;
  }
  if ( v10 == 1 )
  {
LABEL_16:
    v3 = 5;
    goto LABEL_17;
  }
LABEL_18:
  s_menuFocus = MENU;
}

/*
==============
CG_CreateFx_OnPaletteSelected_Field
==============
*/
void CG_CreateFx_OnPaletteSelected_Field(CreateFxMenuPage *const page, const int elementIndex)
{
  CreateFxAssetPalette *m_palette; 
  unsigned __int16 v4; 
  const char *AssetForFiltered; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7384, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( !s_createFxTool->m_assetList.m_palette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7385, ASSERT_TYPE_ASSERT, "(s_createFxTool->m_assetList.m_palette)", (const char *)&queryFormat, "s_createFxTool->m_assetList.m_palette") )
    __debugbreak();
  if ( !s_createFxTool->selectionHomogeneous && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7386, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectionHomogeneous)", (const char *)&queryFormat, "s_createFxTool->selectionHomogeneous") )
    __debugbreak();
  m_palette = s_createFxTool->m_assetList.m_palette;
  v4 = truncate_cast<unsigned short,int>(elementIndex);
  AssetForFiltered = CreateFxAssetPalette::getAssetForFiltered(m_palette, v4);
  if ( !AssetForFiltered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7389, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)s_createFxTool->editEffectType, s_createFxTool->m_assetList.m_propertyIndex - 2, AssetForFiltered, 0);
}

/*
==============
CG_CreateFx_OnPaletteSelected_Layer
==============
*/
void CG_CreateFx_OnPaletteSelected_Layer(CreateFxMenuPage *const page, const int elementIndex)
{
  CreateFxAssetPalette *m_palette; 
  unsigned __int16 v3; 
  int v4; 
  const char *AssetForFiltered; 
  __int64 v6; 
  const CreateFxMapLayerDef *v7; 
  __int64 v8; 
  const char *pathString; 
  __int64 v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  int i; 

  m_palette = s_createFxTool->m_assetList.m_palette;
  v3 = truncate_cast<unsigned short,int>(elementIndex);
  v4 = 0;
  AssetForFiltered = CreateFxAssetPalette::getAssetForFiltered(m_palette, v3);
  if ( s_createFxTool->layerListTotal <= 0 )
  {
LABEL_22:
    v7 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7398, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
      __debugbreak();
  }
  else
  {
    v6 = 8391312i64;
LABEL_3:
    v7 = (const CreateFxMapLayerDef *)(&s_createFxTool->inited + v6);
    v8 = -1i64;
    do
      ++v8;
    while ( AssetForFiltered[v8] );
    pathString = v7->pathString;
    v10 = (unsigned int)v8;
    if ( !AssetForFiltered && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !pathString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v11 = AssetForFiltered - pathString;
    do
    {
      v12 = (unsigned __int8)pathString[v11];
      v13 = v10;
      v14 = *(unsigned __int8 *)pathString++;
      --v10;
      if ( !v13 )
        break;
      if ( v12 != v14 )
      {
        v15 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v15 = v12;
        v12 = v15;
        v16 = v14 + 32;
        if ( (unsigned int)(v14 - 65) > 0x19 )
          v16 = v14;
        if ( v12 != v16 )
        {
          ++v4;
          v6 += 304i64;
          if ( v4 < s_createFxTool->layerListTotal )
            goto LABEL_3;
          goto LABEL_22;
        }
      }
    }
    while ( v12 );
  }
  if ( s_createFxTool->selectedEffectTotal <= 0 )
  {
    CG_CreateFx_SetActiveLayer(v7);
    for ( i = s_menuPathCount; i > 0; s_menuPathCount = i )
      --i;
    s_menuFocus = WORLD;
  }
  else
  {
    CG_CreateFx_SetEffectLayerForSelected(v7);
  }
}

/*
==============
CG_CreateFx_OpenAssetListWithEnum
==============
*/
void CG_CreateFx_OpenAssetListWithEnum(const char *title, void (*onSelected)(CreateFxMenuPage *const, const int), int fieldType, const char *const *enumStrings, int enumCount, bool skipFirst, int selectionCurrent)
{
  int v13; 
  int EffectFieldIndex; 
  CreateFxTool *v15; 

  if ( !title && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4440, ASSERT_TYPE_ASSERT, "(title)", (const char *)&queryFormat, "title") )
    __debugbreak();
  if ( !onSelected && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4441, ASSERT_TYPE_ASSERT, "(onSelected)", (const char *)&queryFormat, "onSelected") )
    __debugbreak();
  if ( !enumStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4442, ASSERT_TYPE_ASSERT, "(enumStrings)", (const char *)&queryFormat, "enumStrings") )
    __debugbreak();
  if ( enumCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4443, ASSERT_TYPE_ASSERT, "(enumCount > 0)", (const char *)&queryFormat, "enumCount > 0") )
    __debugbreak();
  v13 = selectionCurrent;
  if ( selectionCurrent < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4444, ASSERT_TYPE_ASSERT, "(selectionCurrent >= 0)", (const char *)&queryFormat, "selectionCurrent >= 0") )
    __debugbreak();
  if ( !s_menuPath[s_menuPathCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4447, ASSERT_TYPE_ASSERT, "(currentPage)", (const char *)&queryFormat, "currentPage") )
    __debugbreak();
  EffectFieldIndex = CG_CreateFx_FindEffectFieldIndex((const CreateFxEffectType)s_createFxTool->editEffectType, fieldType);
  if ( EffectFieldIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4450, ASSERT_TYPE_ASSERT, "(fieldIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "fieldIndex != INVALID_EFFECT_INDEX") )
    __debugbreak();
  v15 = s_createFxTool;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmulss  xmm1, xmm0, cs:__real@3de38e39
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vcvttss2si eax, xmm2
  }
  s_createFxTool->m_assetList.m_title = title;
  v15->m_assetList.m_onSelected = onSelected;
  v15->m_assetList.m_palette = NULL;
  v15->m_assetList.m_enumStrings = enumStrings;
  v15->m_assetList.m_propertyIndex = EffectFieldIndex;
  v15->m_assetList.m_count = enumCount;
  if ( v15->m_assetList.m_page >= _EAX )
    v15->m_assetList.m_page = 0;
  v15->m_assetList.m_page = 0;
  if ( skipFirst )
  {
    v15->m_assetList.m_enumStrings = enumStrings + 1;
    v15->m_assetList.m_count = enumCount - 1;
    if ( selectionCurrent <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4465, ASSERT_TYPE_ASSERT, "(selectionCurrent > 0)", (const char *)&queryFormat, "selectionCurrent > 0") )
      __debugbreak();
    v13 = selectionCurrent - 1;
  }
  CG_CreateFx_GotoMenu(HUD_ASSET_LIST);
  CG_CreateFx_MenuAssetList_SetCursorIndex(s_menuPath[s_menuPathCount], v13);
}

/*
==============
CG_CreateFx_OpenAssetListWithPalette
==============
*/
void CG_CreateFx_OpenAssetListWithPalette(const char *title, void (*onSelected)(CreateFxMenuPage *const, const int), int fieldType, CreateFxAssetPalette *const palette)
{
  CreateFxTool *v10; 
  CreateFxAssetPalette *m_palette; 
  int EffectFieldIndex; 
  CreateFxTool *v13; 
  __int64 v20; 

  if ( !title && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4401, ASSERT_TYPE_ASSERT, "(title)", (const char *)&queryFormat, "title") )
    __debugbreak();
  if ( !onSelected && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4402, ASSERT_TYPE_ASSERT, "(onSelected)", (const char *)&queryFormat, "onSelected") )
    __debugbreak();
  if ( !palette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4403, ASSERT_TYPE_ASSERT, "(palette)", (const char *)&queryFormat, "palette") )
    __debugbreak();
  if ( !s_menuPath[s_menuPathCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4406, ASSERT_TYPE_ASSERT, "(currentPage)", (const char *)&queryFormat, "currentPage") )
    __debugbreak();
  v10 = s_createFxTool;
  m_palette = s_createFxTool->m_assetList.m_palette;
  if ( m_palette != palette )
  {
    memset_0(&s_createFxTool->m_assetFilter, 0, 0x400ui64);
    *(_QWORD *)&v10->m_assetFilter.m_bufferCount = 0i64;
  }
  CreateFxAssetPalette::filter(palette, v10->m_assetFilter.m_buffer, v10->m_assetFilter.m_bufferCount);
  EffectFieldIndex = CG_CreateFx_FindEffectFieldIndex((const CreateFxEffectType)s_createFxTool->editEffectType, fieldType);
  if ( EffectFieldIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4418, ASSERT_TYPE_ASSERT, "(fieldIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "fieldIndex != INVALID_EFFECT_INDEX") )
    __debugbreak();
  v13 = s_createFxTool;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
  }
  s_createFxTool->m_assetList.m_title = title;
  v13->m_assetList.m_onSelected = onSelected;
  v13->m_assetList.m_palette = palette;
  v13->m_assetList.m_enumStrings = NULL;
  v13->m_assetList.m_propertyIndex = EffectFieldIndex;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3de38e39
    vroundss xmm2, xmm2, xmm1, 2
  }
  v13->m_assetList.m_count = palette->m_filteredCount;
  __asm { vcvttss2si eax, xmm2 }
  if ( v13->m_assetList.m_page >= _EAX )
    v13->m_assetList.m_page = 0;
  CG_CreateFx_GotoMenu(HUD_ASSET_LIST);
  if ( m_palette != palette )
  {
    v20 = s_menuPathCount;
    s_createFxTool->m_assetList.m_page = 0;
    CG_CreateFx_MenuAssetList_SetCursorIndex(s_menuPath[v20], 0);
  }
}

/*
==============
CG_CreateFx_OrientEffect
==============
*/
void CG_CreateFx_OrientEffect(CreateFXDataUnion *effectData, const CreateFxEffectType effectType)
{
  CreateFxEffectType v11; 
  vec3_t angles; 

  _RCX = s_createFxTool;
  if ( s_createFxTool->snapToNormal )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vcomiss xmm0, dword ptr [rcx+240018h]
    }
    if ( s_createFxTool->snapToNormal )
    {
      vectoangles(&s_createFxTool->clipboard.cursorTrace.normal, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angles]
        vaddss  xmm0, xmm0, cs:__real@42b40000; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovss  dword ptr [rsp+58h+angles], xmm0 }
      if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
      {
        _RAX = &effectData->oneShotFxDef.angles;
        if ( effectData != (CreateFXDataUnion *)-12i64 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+58h+angles+8]
            vmovss  dword ptr [rax], xmm0
            vmovss  xmm0, dword ptr [rsp+58h+angles+4]
            vmovss  dword ptr [rax+4], xmm0
            vmovss  dword ptr [rax+8], xmm1
          }
        }
      }
      else
      {
        v11 = effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", v11) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_CreateFx_ParseEntity
==============
*/
const char *CG_CreateFx_ParseEntity(const char *const buffer, const CreateFxEffectType effectType)
{
  const char *v4; 
  const CreateFxMapLayerDef *ActiveLayer; 
  unsigned __int64 EffectIndex; 
  CreateFxTool *v8; 
  unsigned __int64 v9; 
  bool v12; 
  char v13; 
  __int64 v16; 
  const char *v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  CreateFxTool *v23; 
  char j; 
  char v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  char v30; 
  __int64 v31; 
  char v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  char v37; 
  __int64 v38; 
  char v39; 
  const CreateFxMapLayerDef *v40; 
  tmat33_t<vec3_t> *p_axis; 
  vec3_t *p_rootOrigin; 
  vec3_t *p_point; 
  unsigned __int64 v50; 
  __int64 v51; 
  char v52; 
  unsigned __int64 v53; 
  char v54; 
  unsigned __int64 v55; 
  __int64 v56; 
  char v57; 
  unsigned __int64 v58; 
  char v59; 
  bool *v60; 
  __int64 v61; 
  unsigned __int64 v62; 
  __int64 v63; 
  char v64; 
  unsigned __int64 v65; 
  char v66; 
  unsigned __int64 v67; 
  __int64 v68; 
  char v69; 
  unsigned __int64 v70; 
  char v71; 
  unsigned __int64 v72; 
  __int64 v73; 
  char v74; 
  unsigned __int64 v75; 
  char v76; 
  scr_string_t v78; 
  __int64 v79; 
  bool *v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v88; 
  __int64 v90; 
  scr_string_t v91; 
  __int64 v92; 
  scr_string_t String; 
  __int64 v94; 
  __int64 v95; 
  __int64 v98; 
  __int64 v99; 
  FxCombinedDef *v100; 
  __int64 v101; 
  char v102; 
  __int64 v103; 
  char v104; 
  bool v114; 
  char i; 
  __int64 v129; 
  __int64 v130; 
  bool v131; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  char v138; 
  const CreateFxMapLayerDef *v139; 
  int v140; 
  int v141; 
  int v142; 
  vec3_t from; 
  vec3_t dst; 
  int v145[4]; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> rotation; 
  char s0[64]; 
  char _Buffer[272]; 

  v4 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8898, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8899, ASSERT_TYPE_ASSERT, "(effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectType != CreateFxEffectType::None") )
    __debugbreak();
  ActiveLayer = CG_CreateFx_GetActiveLayer();
  v139 = ActiveLayer;
  EffectIndex = (int)CG_CreateFx_AllocateEffectIndex();
  if ( (unsigned int)EffectIndex >= 0x4000 )
  {
    LODWORD(v129) = EffectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8759, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v129, 0x4000) )
      __debugbreak();
  }
  v8 = s_createFxTool;
  v9 = EffectIndex;
  *(_QWORD *)&s_createFxTool->scratchDataState[v9].selected = 0i64;
  *(_QWORD *)&v8->scratchDataState[v9].effectType = 0i64;
  v8->scratchDataState[v9].aliasString = NULL;
  v8->scratchDataState[v9].layer = NULL;
  *(_QWORD *)&v8->scratchDataState[v9].effectHandle = 0i64;
  CG_CreateFx_SetEffectType(EffectIndex, effectType);
  CG_CreateFx_SetEffectLayer(EffectIndex, ActiveLayer);
  _R12 = s_createFxTool;
  _R15 = EffectIndex;
  v12 = effectType == 6;
  if ( v4 )
  {
    v13 = *v4;
    __asm
    {
      vmovaps [rsp+2C0h+var_48+8], xmm6
      vmovaps [rsp+2C0h+var_58+8], xmm7
      vmovss  xmm7, cs:__real@447a0000
    }
    v131 = effectType == 6;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    while ( v13 )
    {
      while ( (unsigned __int8)v13 >= 9u && (unsigned __int8)v13 <= 0x20u )
        v13 = *++v4;
      v16 = 1i64;
      v17 = v4;
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v18 = v17["}" - v4];
        v19 = v16;
        v20 = *v17;
        --v16;
        ++v17;
        if ( !v19 )
        {
LABEL_22:
          v12 = v131;
          goto LABEL_23;
        }
        if ( v18 != v20 )
          break;
        if ( !v18 )
          goto LABEL_22;
      }
      if ( j_sscanf(v4, "\"%[^\"]\" \"%[^\"]\"", s0, _Buffer) != 2 )
        goto LABEL_208;
      v26 = -1i64;
      do
        ++v26;
      while ( s0[v26] );
      v27 = (unsigned int)v26;
      v28 = (unsigned int)v26;
      v29 = 0i64;
      do
      {
        v30 = s0[v29];
        v31 = v28;
        v32 = aOrigin[v29++];
        --v28;
        if ( !v31 )
          break;
        if ( v30 != v32 )
        {
          v50 = v27;
          v51 = 0i64;
          while ( 1 )
          {
            v52 = s0[v51];
            v53 = v50;
            v54 = aAngles_1[v51++];
            --v50;
            if ( !v53 )
              goto LABEL_45;
            if ( v52 != v54 )
            {
              v55 = v27;
              v56 = 0i64;
              while ( 1 )
              {
                v57 = s0[v56];
                v58 = v55;
                v59 = aFxid_0[v56++];
                --v55;
                if ( !v58 )
                {
LABEL_66:
                  if ( (unsigned int)EffectIndex >= 0x4000 )
                  {
                    LODWORD(v130) = 0x4000;
                    LODWORD(v129) = EffectIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4623, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v129, v130) )
                      __debugbreak();
                  }
                  v60 = &s_createFxTool->inited + _R15 * 104;
                  if ( s_createFxTool->scratchDataState[EffectIndex].effectType == 1 || s_createFxTool->scratchDataState[EffectIndex].effectType == 3 )
                  {
                    v61 = 4718832i64;
                  }
                  else
                  {
                    if ( s_createFxTool->scratchDataState[EffectIndex].effectType != 5 )
                      goto LABEL_208;
                    v61 = 4718824i64;
                  }
                  v100 = (FxCombinedDef *)&v60[v61];
                  if ( &v60[v61] )
                  {
                    v100->particleSystemDef = NULL;
                    if ( _Buffer[0] )
                      FX_LoadEffectCombinedDef(_Buffer, v100);
                    CG_CreateFx_UpdateEffectAlias(EffectIndex);
                  }
                  goto LABEL_208;
                }
                if ( v57 != v59 )
                  break;
                if ( !v57 )
                  goto LABEL_66;
              }
              v62 = v27;
              v63 = 0i64;
              while ( 1 )
              {
                v64 = s0[v63];
                v65 = v62;
                v66 = aSoundalias_2[v63++];
                --v62;
                if ( !v65 )
                {
LABEL_77:
                  CG_CreateFx_SetEffectSoundalias(EffectIndex, _Buffer);
                  goto LABEL_208;
                }
                if ( v64 != v66 )
                  break;
                if ( !v64 )
                  goto LABEL_77;
              }
              v12 = v131;
              if ( v131 )
              {
LABEL_84:
                v72 = v27;
                v73 = 0i64;
                while ( 1 )
                {
                  v74 = s0[v73];
                  v75 = v72;
                  v76 = aReactiveRadius[v73++];
                  --v72;
                  if ( !v75 )
                  {
LABEL_88:
                    if ( effectType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8966, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::ReactiveEnt)", (const char *)&queryFormat, "effectType == CreateFxEffectType::ReactiveEnt") )
                      __debugbreak();
                    __asm { vmovss  [rsp+2C0h+var_274], xmm6 }
                    if ( j_sscanf(_Buffer, "%g", &v134) == 1 )
                    {
                      __asm
                      {
                        vmovss  xmm0, [rsp+2C0h+var_274]
                        vmovss  dword ptr [r15+r12+480100h], xmm0
                      }
                    }
                    goto LABEL_209;
                  }
                  if ( v74 != v76 )
                    break;
                  if ( !v74 )
                    goto LABEL_88;
                }
                if ( I_strncmp(s0, "exploder", v27) )
                {
                  v79 = -1i64;
                  do
                    ++v79;
                  while ( s0[v79] );
                  if ( !I_strncmp(s0, "delay", (unsigned int)v79) )
                  {
                    if ( j_sscanf(_Buffer, "%g", &v135) != 1 )
                      goto LABEL_209;
                    __asm
                    {
                      vmulss  xmm1, xmm7, [rsp+2C0h+var_270]
                      vcvttss2si ebx, xmm1
                    }
                    if ( (unsigned int)EffectIndex >= 0x4000 )
                    {
                      LODWORD(v130) = 0x4000;
                      LODWORD(v129) = EffectIndex;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4807, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v129, v130) )
                        __debugbreak();
                    }
                    v82 = &s_createFxTool->inited + _R15 * 104;
                    if ( s_createFxTool->scratchDataState[EffectIndex].effectType == 1 )
                    {
                      v83 = 4718828i64;
                    }
                    else
                    {
                      if ( s_createFxTool->scratchDataState[EffectIndex].effectType != 3 )
                        goto LABEL_208;
                      v83 = 4718824i64;
                    }
                    if ( &v82[v83] )
                      *(_DWORD *)&v82[v83] = _EBX;
                    goto LABEL_208;
                  }
                  v84 = -1i64;
                  do
                    ++v84;
                  while ( s0[v84] );
                  if ( !I_strncmp(s0, "delay_min", (unsigned int)v84) )
                    goto LABEL_234;
                  v85 = -1i64;
                  do
                    ++v85;
                  while ( s0[v85] );
                  if ( I_strncmp(s0, "delay_max", (unsigned int)v85) )
                  {
                    v86 = -1i64;
                    do
                      ++v86;
                    while ( s0[v86] );
                    if ( I_strncmp(s0, "damage", (unsigned int)v86) )
                    {
                      v88 = -1i64;
                      do
                        ++v88;
                      while ( s0[v88] );
                      if ( I_strncmp(s0, "damage_radius", (unsigned int)v88) )
                      {
                        v90 = -1i64;
                        do
                          ++v90;
                        while ( s0[v90] );
                        if ( I_strncmp(s0, "earthquake", (unsigned int)v90) )
                        {
                          v92 = -1i64;
                          do
                            ++v92;
                          while ( s0[v92] );
                          if ( I_strncmp(s0, "rumble", (unsigned int)v92) )
                          {
                            v94 = -1i64;
                            do
                              ++v94;
                            while ( s0[v94] );
                            if ( I_strncmp(s0, "envonly", (unsigned int)v94) )
                            {
                              v95 = -1i64;
                              do
                                ++v95;
                              while ( s0[v95] );
                              if ( !I_strncmp(s0, "dotraces", (unsigned int)v95) )
                              {
                                if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9054, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                                  __debugbreak();
                                if ( j_sscanf(_Buffer, "%d", &v137) == 1 )
                                  _R12->scratchData[_R15].explodersDef.server.damageDoOcclusionTraces = v137 != 0;
                              }
                            }
                            else
                            {
                              if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9044, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                                __debugbreak();
                              if ( j_sscanf(_Buffer, "%d", &v136) == 1 )
                                _R12->scratchData[_R15].explodersDef.server.damageEnvironmentOnly = v136 != 0;
                            }
                          }
                          else
                          {
                            if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9038, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                              __debugbreak();
                            String = SL_GetString(_Buffer, 0);
                            _R12->scratchData[_R15].explodersDef.server.rumbleName = String;
                            if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9040, ASSERT_TYPE_ASSERT, "(effectData.explodersDef.server.rumbleName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "effectData.explodersDef.server.rumbleName != NULL_SCR_STRING") )
                              goto LABEL_152;
                          }
                        }
                        else
                        {
                          if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9032, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                            __debugbreak();
                          v91 = SL_GetString(_Buffer, 0);
                          _R12->scratchData[_R15].explodersDef.server.earthquakeName = v91;
                          if ( !v91 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9034, ASSERT_TYPE_ASSERT, "(effectData.explodersDef.server.earthquakeName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "effectData.explodersDef.server.earthquakeName != NULL_SCR_STRING") )
                            goto LABEL_152;
                        }
                      }
                      else
                      {
                        if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9022, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                          __debugbreak();
                        __asm { vmovss  [rsp+2C0h+var_278], xmm6 }
                        if ( j_sscanf(_Buffer, "%g", &v133) == 1 )
                        {
                          __asm
                          {
                            vmovss  xmm0, [rsp+2C0h+var_278]
                            vmovss  dword ptr [r15+r12+480124h], xmm0
                          }
                        }
                      }
                    }
                    else
                    {
                      if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9012, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                        __debugbreak();
                      __asm { vmovss  [rsp+2C0h+var_27C], xmm6 }
                      if ( j_sscanf(_Buffer, "%g", &v132) == 1 )
                      {
                        __asm
                        {
                          vmovss  xmm0, [rsp+2C0h+var_27C]
                          vmovss  dword ptr [r15+r12+480120h], xmm0
                        }
                      }
                    }
                  }
                  else
                  {
LABEL_234:
                    if ( effectType != Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8992, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::IntervalSound)", (const char *)&queryFormat, "effectType == CreateFxEffectType::IntervalSound") )
                      __debugbreak();
                    if ( j_sscanf(_Buffer, "%g", &v138) == 1 )
                    {
                      __asm
                      {
                        vmulss  xmm1, xmm7, dword ptr [rsp+2C0h+var_268+4]
                        vcvttss2si ebx, xmm1
                      }
                      v98 = -1i64;
                      do
                        ++v98;
                      while ( s0[v98] );
                      if ( I_strncmp(s0, "delay_min", (unsigned int)v98) )
                      {
                        v99 = -1i64;
                        do
                          ++v99;
                        while ( s0[v99] );
                        if ( I_strncmp(s0, "delay_max", (unsigned int)v99) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9005, ASSERT_TYPE_ASSERT, "(!I_strncmp( key, CREATEFX_ENT_DELAY_MAX_KEY, I_strlen( key ) ))", (const char *)&queryFormat, "!I_strncmp( key, CREATEFX_ENT_DELAY_MAX_KEY, I_strlen( key ) )") )
                          __debugbreak();
                        _R12->scratchData[_R15].intervalSoundsDef.delayMaxMsec = _EBX;
                      }
                      else
                      {
                        _R12->scratchData[_R15].intervalSoundsDef.delayMinMsec = _EBX;
                      }
                      goto LABEL_208;
                    }
                  }
                }
                else
                {
                  if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8976, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                    __debugbreak();
                  v78 = SL_GetString(_Buffer, 0);
                  _R12->scratchData[_R15].explodersDef.client.name = v78;
                  if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8979, ASSERT_TYPE_ASSERT, "(effectData.explodersDef.client.name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "effectData.explodersDef.client.name != NULL_SCR_STRING") )
                  {
LABEL_152:
                    __debugbreak();
                    goto LABEL_209;
                  }
                }
              }
              else
              {
                v67 = v27;
                v68 = 0i64;
                do
                {
                  v69 = s0[v68];
                  v70 = v67;
                  v71 = destKey[v68++];
                  --v67;
                  if ( !v70 )
                    break;
                  if ( v69 != v71 )
                    goto LABEL_84;
                }
                while ( v69 );
                v12 = 1;
                v131 = 1;
              }
              goto LABEL_209;
            }
            if ( !v52 )
              goto LABEL_45;
          }
        }
      }
      while ( v30 );
LABEL_45:
      if ( j_sscanf(_Buffer, "%g %g %g", &v140, &v141, &v142) == 3 )
      {
        v33 = -1i64;
        do
          ++v33;
        while ( s0[v33] );
        v34 = (unsigned int)v33;
        v35 = 0i64;
        v36 = (unsigned int)v33;
        do
        {
          v37 = s0[v35];
          v38 = v36;
          v39 = aOrigin[v35++];
          --v36;
          if ( !v38 )
            break;
          if ( v37 != v39 )
          {
            v101 = 0i64;
            do
            {
              v102 = s0[v101];
              v103 = v34;
              v104 = aAngles_1[v101++];
              --v34;
              if ( !v103 )
                break;
              if ( v102 != v104 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8944, ASSERT_TYPE_ASSERT, "(!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) ))", (const char *)&queryFormat, "!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) )") )
                  __debugbreak();
                break;
              }
            }
            while ( v102 );
            if ( !v139 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8062, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, [rsp+2C0h+var_258]
              vmovss  xmm2, [rsp+2C0h+anonymous_0]
            }
            if ( s_createFxTool->rootHasOffset )
            {
              __asm
              {
                vaddss  xmm1, xmm0, dword ptr [rax+81723Ch]
                vmovss  dword ptr [rsp+2C0h+from], xmm1
                vaddss  xmm0, xmm2, dword ptr [rax+817240h]
                vmovss  xmm1, [rsp+2C0h+var_250]
                vmovss  dword ptr [rsp+2C0h+from+4], xmm0
                vaddss  xmm2, xmm1, dword ptr [rax+817244h]
              }
            }
            else
            {
              __asm
              {
                vaddss  xmm1, xmm0, dword ptr [rdi+124h]
                vaddss  xmm0, xmm2, dword ptr [rdi+128h]
                vmovss  dword ptr [rsp+2C0h+from], xmm1
                vmovss  xmm1, [rsp+2C0h+var_250]
                vaddss  xmm2, xmm1, dword ptr [rdi+12Ch]
                vmovss  dword ptr [rsp+2C0h+from+4], xmm0
              }
            }
            __asm { vmovss  dword ptr [rbp+1C0h+from+8], xmm2 }
            AnglesNormalize360(&from, &from);
            if ( effectType != 1 && effectType != 2 && effectType != 3 && effectType != Menu && effectType != 5 )
            {
              LODWORD(v129) = effectType;
              v114 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", v129);
              goto LABEL_206;
            }
            v12 = v131;
            _RAX = (__int64)&_R12->scratchData[_R15].reactiveEntDef.angles;
            if ( (CreateFxTool *)((char *)_R12 + _R15 * 104) != (CreateFxTool *)-4718812i64 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+2C0h+from]
                vmovss  xmm1, dword ptr [rsp+2C0h+from+4]
                vmovss  dword ptr [rax], xmm0
                vmovss  xmm0, dword ptr [rbp+1C0h+from+8]
                vmovss  dword ptr [rax+8], xmm0
                vmovss  dword ptr [rax+4], xmm1
              }
            }
            goto LABEL_209;
          }
        }
        while ( v37 );
        v40 = v139;
        if ( !v139 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8033, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, [rsp+2C0h+var_258]
          vmovss  xmm2, [rsp+2C0h+anonymous_0]
        }
        if ( s_createFxTool->rootHasOffset )
        {
          __asm
          {
            vaddss  xmm1, xmm0, dword ptr [rcx+817230h]
            vaddss  xmm0, xmm2, dword ptr [rcx+817234h]
            vmovss  [rbp+1C0h+var_228], xmm1
            vmovss  xmm1, [rsp+2C0h+var_250]
            vaddss  xmm2, xmm1, dword ptr [rcx+817238h]
            vmovss  [rbp+1C0h+var_220], xmm2
            vmovss  [rbp+1C0h+var_224], xmm0
          }
          AnglesToAxis(&s_createFxTool->rootAngles, &axis);
          p_axis = &axis;
          p_rootOrigin = &s_createFxTool->rootOrigin;
          p_point = (vec3_t *)v145;
        }
        else
        {
          __asm
          {
            vaddss  xmm1, xmm0, dword ptr [rbx]
            vaddss  xmm0, xmm2, dword ptr [rbx+4]
            vmovss  dword ptr [rbp+1C0h+point], xmm1
            vmovss  xmm1, [rsp+2C0h+var_250]
            vaddss  xmm2, xmm1, dword ptr [rbx+8]
            vmovss  dword ptr [rbp+1C0h+point+8], xmm2
            vmovss  dword ptr [rbp+1C0h+point+4], xmm0
          }
          AnglesToAxis(&v40->angles, &rotation);
          p_axis = &rotation;
          p_rootOrigin = &v40->origin;
          p_point = &point;
        }
        RotatePointAroundPoint(&dst, p_point, p_rootOrigin, p_axis);
        CG_CreateFx_Vec3FixSubEpsilonValues(&dst);
        if ( effectType != 1 && effectType != 2 && effectType != 3 && effectType != Menu && effectType != 5 )
        {
          LODWORD(v129) = effectType;
          v114 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v129);
LABEL_206:
          if ( v114 )
            __debugbreak();
          goto LABEL_208;
        }
        v12 = v131;
        _RDI = (__int64)&_R12->scratchData[_R15];
        if ( (CreateFxTool *)((char *)_R12 + _R15 * 104) != (CreateFxTool *)-4718800i64 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1C0h+dst]
            vmovss  xmm1, dword ptr [rbp+1C0h+dst+4]
            vmovss  dword ptr [rdi], xmm0
            vmovss  xmm0, dword ptr [rbp+1C0h+dst+8]
            vmovss  dword ptr [r15+r12+4800D8h], xmm0
            vmovss  dword ptr [r15+r12+4800D4h], xmm1
          }
        }
      }
      else
      {
LABEL_208:
        v12 = v131;
      }
LABEL_209:
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8712, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
        __debugbreak();
      for ( i = *v4; i != 10; i = *++v4 )
      {
        if ( i == 13 )
          break;
        if ( !i )
          break;
      }
      while ( 1 )
      {
        v13 = *v4;
        if ( *v4 < 9u || (unsigned __int8)v13 > 0x20u || !v13 )
          break;
        ++v4;
      }
    }
LABEL_23:
    __asm
    {
      vmovaps xmm6, [rsp+2C0h+var_48+8]
      vmovaps xmm7, [rsp+2C0h+var_58+8]
    }
  }
  if ( !v12 && !s_createFxTool->needToExportAllLayers )
  {
    Com_Printf_NoFilter("[CreateFx] Detected missing data in .map file, marking all layers for export\n");
    v23 = s_createFxTool;
    s_createFxTool->needToExportAllLayers = 1;
    v23->needToExport = 1;
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8712, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  for ( j = *v4; j != 10; j = *++v4 )
  {
    if ( j == 13 )
      break;
    if ( !j )
      break;
  }
  while ( 1 )
  {
    v25 = *v4;
    if ( *v4 < 9u || (unsigned __int8)v25 > 0x20u || !v25 )
      break;
    ++v4;
  }
  return v4;
}

/*
==============
CG_CreateFx_ParseMapFile
==============
*/
char CG_CreateFx_ParseMapFile(const char *const filepath, bool isRoot)
{
  const dvar_t *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  void *v8; 
  fileHandle_t file; 

  if ( I_strempty(filepath) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9192, ASSERT_TYPE_ASSERT, "(!I_strempty( filepath ))", (const char *)&queryFormat, "!I_strempty( filepath )") )
    __debugbreak();
  if ( !I_strstr(filepath, ".map") )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144285B50, 337i64, filepath, ".map");
  if ( I_strstr(filepath, "maps/prefabs/") != filepath )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144285BB0, 338i64, filepath, "maps/prefabs/");
  Dvar_SetBoolByName("NOKSRMNQ", 1);
  v4 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
  if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9213, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
    __debugbreak();
  v5 = FS_FOpenFileReadScriptLoose(filepath, &file);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = Mem_Virtual_Alloc(v5 + 1, "CreateFx_AllocMem", TRACK_DEBUG);
    FS_Read(v8, v6, file);
    *((_BYTE *)v8 + v6) = 0;
    FS_FCloseFile(file);
    Com_Printf_NoFilter("[CreateFx] ParseMapFile %s\n", filepath);
    CG_CreateFx_ParseMapFileBuffer((const char *const)v8, isRoot);
    Mem_Virtual_Free(v8);
    return 1;
  }
  else
  {
    Com_PrintError(1, "[CreateFx] file not found: %s\n", filepath);
    return 0;
  }
}

/*
==============
CG_CreateFx_ParseMapFileBuffer
==============
*/
void CG_CreateFx_ParseMapFileBuffer(const char *const buffer, bool isRoot)
{
  const char *v3; 
  char v4; 
  __int64 v5; 
  char *i; 
  char v7; 
  int v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  char v21; 
  __int64 v22; 
  char v23; 
  CreateFxEffectType v24; 
  const char *Fx_ParsePrefab; 
  unsigned __int64 v26; 
  __int64 v27; 
  char v28; 
  unsigned __int64 v29; 
  char v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  char v33; 
  unsigned __int64 v34; 
  char v35; 
  unsigned __int64 v36; 
  __int64 v37; 
  char v38; 
  unsigned __int64 v39; 
  char v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  char v43; 
  unsigned __int64 v44; 
  char v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  char j; 
  char outClassname[64]; 

  v3 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9137, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  while ( v3 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    v5 = 6i64;
    for ( i = (char *)v3; ; v4 = *i )
    {
      v7 = (i++)["entity" - v3];
      if ( !v5-- )
      {
LABEL_14:
        v9 = 0;
        goto LABEL_15;
      }
      if ( v7 != v4 )
        break;
      if ( !v7 )
        goto LABEL_14;
    }
    v9 = 1;
    if ( v7 < v4 )
      v9 = -1;
LABEL_15:
    if ( v9 || (CG_CreateFx_GetImportEntityClassname(v3, outClassname, 0x40ui64), !outClassname[0]) )
    {
LABEL_79:
      for ( j = *v3; j != 10; j = *++v3 )
      {
        if ( j == 13 )
          break;
        if ( !j )
          break;
      }
      while ( *v3 >= 9u && *v3 <= 0x20u )
        ++v3;
    }
    else
    {
      v10 = -1i64;
      do
        ++v10;
      while ( outClassname[v10] );
      v11 = (unsigned int)v10;
      v12 = 0i64;
      v13 = (unsigned int)v10;
      do
      {
        v14 = outClassname[v12];
        v15 = v13;
        v16 = aClientEffectOn[v12++];
        --v13;
        if ( !v15 )
          break;
        if ( v14 != v16 )
        {
          v26 = v11;
          v27 = 0i64;
          while ( 1 )
          {
            v28 = outClassname[v27];
            v29 = v26;
            v30 = aClientEffectRe[v27++];
            --v26;
            if ( !v29 )
              goto LABEL_23;
            if ( v28 != v30 )
            {
              v31 = v11;
              v32 = 0i64;
              while ( 1 )
              {
                v33 = outClassname[v32];
                v34 = v31;
                v35 = aClientEffectEx[v32++];
                --v31;
                if ( !v34 )
                  goto LABEL_23;
                if ( v33 != v35 )
                {
                  v36 = v11;
                  v37 = 0i64;
                  while ( 1 )
                  {
                    v38 = outClassname[v37];
                    v39 = v36;
                    v40 = aClientSoundInt[v37++];
                    --v36;
                    if ( !v39 )
                      goto LABEL_23;
                    if ( v38 != v40 )
                    {
                      v41 = v11;
                      v42 = 0i64;
                      while ( 1 )
                      {
                        v43 = outClassname[v42];
                        v44 = v41;
                        v45 = aClientSoundLoo[v42++];
                        --v41;
                        if ( !v44 )
                          goto LABEL_23;
                        if ( v43 != v45 )
                        {
                          if ( I_strnicmp(outClassname, "misc_prefab", v11) )
                            goto LABEL_79;
                          if ( !isRoot )
                            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144285A00, 336i64);
                          Fx_ParsePrefab = CG_CreateFx_ParsePrefab(v3);
                          goto LABEL_31;
                        }
                        if ( !v43 )
                          goto LABEL_23;
                      }
                    }
                    if ( !v38 )
                      goto LABEL_23;
                  }
                }
                if ( !v33 )
                  goto LABEL_23;
              }
            }
            if ( !v28 )
              goto LABEL_23;
          }
        }
      }
      while ( v14 );
LABEL_23:
      v17 = -1i64;
      do
        ++v17;
      while ( outClassname[v17] );
      v18 = (unsigned int)v17;
      v19 = 0i64;
      v20 = (unsigned int)v17;
      while ( 1 )
      {
        v21 = outClassname[v19];
        v22 = v20;
        v23 = aClientEffectOn[v19++];
        --v20;
        if ( !v22 )
        {
LABEL_29:
          v24 = 1;
          goto LABEL_30;
        }
        if ( v21 != v23 )
          break;
        if ( !v21 )
          goto LABEL_29;
      }
      if ( I_strncmp(outClassname, "client_effect_reactive", v18) )
      {
        v46 = -1i64;
        do
          ++v46;
        while ( outClassname[v46] );
        if ( I_strncmp(outClassname, "client_effect_exploder", (unsigned int)v46) )
        {
          v47 = -1i64;
          do
            ++v47;
          while ( outClassname[v47] );
          if ( I_strncmp(outClassname, "client_sound_interval", (unsigned int)v47) )
          {
            v48 = -1i64;
            do
              ++v48;
            while ( outClassname[v48] );
            if ( I_strncmp(outClassname, "client_sound_looping", (unsigned int)v48) )
            {
              v49 = -1i64;
              do
                ++v49;
              while ( outClassname[v49] );
              if ( I_strncmp(outClassname, "client_createfx_root", (unsigned int)v49) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8752, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectTypeForClassname: failed to resolve effect type for classname '%s'", outClassname) )
                  __debugbreak();
                v24 = None;
              }
              else
              {
                v24 = 6;
              }
            }
            else
            {
              v24 = 2;
            }
          }
          else
          {
            v24 = Menu;
          }
        }
        else
        {
          v24 = 3;
        }
      }
      else
      {
        v24 = 5;
      }
LABEL_30:
      Fx_ParsePrefab = CG_CreateFx_ParseEntity(v3, v24);
LABEL_31:
      v3 = Fx_ParsePrefab;
    }
  }
}

/*
==============
CG_CreateFx_ParsePrefab
==============
*/
const char *CG_CreateFx_ParsePrefab(const char *const buffer)
{
  const char *v3; 
  char v5; 
  __int64 v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  char *v11; 
  CreateFxTool *v12; 
  char j; 
  char v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  char *v29; 
  char i; 
  __int64 v31; 
  __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  __int64 v39; 
  char v40; 
  __int64 v41; 
  char v42; 
  __int64 v43; 
  char v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  char v49; 
  __int64 v50; 
  char v51; 
  __int64 v53; 
  char v54; 
  __int64 v55; 
  char v56; 
  vec3_t layerAngles; 
  vec3_t layerOrigin; 
  __int64 v61; 
  float v62; 
  char v63[64]; 
  char s0[8]; 
  char layerPath[264]; 
  char src[272]; 
  char layerFilter[272]; 
  void *retaddr; 

  _R11 = &retaddr;
  v3 = buffer;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8811, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  layerFilter[0] = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+410h+layerOrigin], xmm6
    vmovss  dword ptr [rsp+410h+layerOrigin+4], xmm6
    vmovss  dword ptr [rsp+410h+layerOrigin+8], xmm6
    vmovss  dword ptr [rsp+410h+layerAngles], xmm6
    vmovss  dword ptr [rsp+410h+layerAngles+4], xmm6
    vmovss  dword ptr [rsp+410h+layerAngles+8], xmm6
  }
  if ( v3 )
  {
    v5 = *v3;
    while ( v5 )
    {
      while ( (unsigned __int8)v5 >= 9u && (unsigned __int8)v5 <= 0x20u )
        v5 = *++v3;
      v6 = 1i64;
      v7 = v3;
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v8 = v7["}" - v3];
        v9 = v6;
        v10 = *v7++;
        --v6;
        if ( !v9 )
        {
LABEL_16:
          if ( I_strstr(s0, "prefabs/") != s0 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144285340, 334i64, s0, "prefabs/");
          v11 = strstr_0(s0, ".map");
          if ( !v11 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280C10, 335i64, s0, ".map");
          v12 = s_createFxTool;
          *v11 = 0;
          if ( v12->rootHasOffset )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+410h+layerOrigin]
              vucomiss xmm0, xmm6
            }
            if ( v12->rootHasOffset )
              goto LABEL_27;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+410h+layerOrigin+4]
              vucomiss xmm0, xmm6
            }
            if ( v12->rootHasOffset )
              goto LABEL_27;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+410h+layerOrigin+8]
              vucomiss xmm0, xmm6
            }
            if ( v12->rootHasOffset )
              goto LABEL_27;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+410h+layerAngles]
              vucomiss xmm0, xmm6
            }
            if ( v12->rootHasOffset )
              goto LABEL_27;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+410h+layerAngles+4]
              vucomiss xmm0, xmm6
            }
            if ( v12->rootHasOffset )
              goto LABEL_27;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+410h+layerAngles+8]
              vucomiss xmm0, xmm6
            }
            if ( v12->rootHasOffset )
LABEL_27:
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442853B0, 335i64, s0);
            __asm
            {
              vmovss  dword ptr [rsp+410h+layerOrigin], xmm6
              vmovss  dword ptr [rsp+410h+layerOrigin+4], xmm6
              vmovss  dword ptr [rsp+410h+layerOrigin+8], xmm6
              vmovss  dword ptr [rsp+410h+layerAngles], xmm6
              vmovss  dword ptr [rsp+410h+layerAngles+4], xmm6
              vmovss  dword ptr [rsp+410h+layerAngles+8], xmm6
            }
          }
          CG_CreateFx_AddLayer(layerPath, layerFilter, &layerOrigin, &layerAngles);
          goto LABEL_30;
        }
        if ( v8 != v10 )
          break;
        if ( !v8 )
          goto LABEL_16;
      }
      if ( j_sscanf_s(v3, "\"%[^\"]\" \"%[^\"]\"", v63, 64i64) == 2 )
      {
        v22 = -1i64;
        do
          ++v22;
        while ( v63[v22] );
        v23 = (unsigned int)v22;
        v24 = 0i64;
        v25 = (unsigned int)v22;
        while ( 1 )
        {
          v26 = v63[v24];
          v27 = v25;
          v28 = aModel_0[v24++];
          --v25;
          if ( !v27 )
          {
LABEL_48:
            v29 = s0;
LABEL_49:
            Core_strcpy(v29, 0x104ui64, src);
            goto LABEL_50;
          }
          if ( v26 != v28 )
            break;
          if ( !v26 )
            goto LABEL_48;
        }
        v31 = v23;
        v32 = 0i64;
        while ( 1 )
        {
          v33 = v63[v32];
          v34 = v31;
          v35 = aMapnamefilter[v32++];
          --v31;
          if ( !v34 )
          {
LABEL_64:
            v29 = layerFilter;
            goto LABEL_49;
          }
          if ( v33 != v35 )
            break;
          if ( !v33 )
            goto LABEL_64;
        }
        v36 = v23;
        v37 = 0i64;
        do
        {
          v38 = v63[v37];
          v39 = v36;
          v40 = aOrigin[v37++];
          --v36;
          if ( !v39 )
            break;
          if ( v38 != v40 )
          {
            v41 = 0i64;
            do
            {
              v42 = v63[v41];
              v43 = v23;
              v44 = aAngles_1[v41];
              --v23;
              ++v41;
              if ( !v43 )
                break;
              if ( v42 != v44 )
                goto LABEL_50;
            }
            while ( v42 );
            break;
          }
        }
        while ( v38 );
        if ( j_sscanf(src, "%g %g %g", &v61, (char *)&v61 + 4, &v62) == 3 )
        {
          v45 = -1i64;
          do
            ++v45;
          while ( v63[v45] );
          v46 = (unsigned int)v45;
          v47 = 0i64;
          v48 = (unsigned int)v45;
          while ( 1 )
          {
            v49 = v63[v47];
            v50 = v48;
            v51 = aOrigin[v47];
            --v48;
            ++v47;
            if ( !v50 )
            {
LABEL_81:
              __asm
              {
                vmovsd  xmm0, [rsp+410h+var_3C0]
                vmovsd  qword ptr [rsp+410h+layerOrigin], xmm0
              }
              layerOrigin.v[2] = v62;
              goto LABEL_50;
            }
            if ( v49 != v51 )
              break;
            if ( !v49 )
              goto LABEL_81;
          }
          v53 = 0i64;
          do
          {
            v54 = v63[v53];
            v55 = v46;
            v56 = aAngles_1[v53];
            --v46;
            ++v53;
            if ( !v55 )
              break;
            if ( v54 != v56 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8882, ASSERT_TYPE_ASSERT, "(!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) ))", (const char *)&queryFormat, "!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) )") )
                __debugbreak();
              break;
            }
          }
          while ( v54 );
          __asm
          {
            vmovsd  xmm0, [rsp+410h+var_3C0]
            vmovsd  qword ptr [rsp+410h+layerAngles], xmm0
          }
          layerAngles.v[2] = v62;
        }
      }
LABEL_50:
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8712, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
        __debugbreak();
      for ( i = *v3; i != 10; i = *++v3 )
      {
        if ( i == 13 )
          break;
        if ( !i )
          break;
      }
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 < 9u || (unsigned __int8)v5 > 0x20u )
          break;
        ++v3;
      }
    }
  }
LABEL_30:
  __asm { vmovaps xmm6, [rsp+410h+var_38+8] }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8712, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  for ( j = *v3; j != 10; j = *++v3 )
  {
    if ( j == 13 )
      break;
    if ( !j )
      break;
  }
  while ( 1 )
  {
    v21 = *v3;
    if ( *v3 < 9u || (unsigned __int8)v21 > 0x20u || !v21 )
      break;
    ++v3;
  }
  return v3;
}

/*
==============
CG_CreateFx_PasteClipboard
==============
*/
void CG_CreateFx_PasteClipboard(const vec3_t *pasteOrigin)
{
  CreateFxTool *v1; 
  int v2; 
  __int64 v3; 
  char *v8; 
  CreateFxEffectType effectType; 
  void (__fastcall **v18)(void *); 
  __int64 v19; 
  vec3_t originalOrigin; 
  vec3_t outOrigin; 

  CG_CreateFx_ClearSelection();
  v1 = s_createFxTool;
  v2 = 0;
  if ( s_createFxTool->clipboard.effectTotal > 0 )
  {
    v3 = 0i64;
    do
    {
      _RSI = (__int64)&v1->clipboard + 104 * v2;
      if ( v1->clipboard.effectDataState[v3].effectType == 1 || v1->clipboard.effectDataState[v3].effectType == 2 || v1->clipboard.effectDataState[v3].effectType == 3 || v1->clipboard.effectDataState[v3].effectType == Menu || v1->clipboard.effectDataState[v3].effectType == 5 )
      {
        if ( (CreateFxTool *)((char *)v1 + 104 * v2) != (CreateFxTool *)-16i64 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vmovss  xmm1, dword ptr [rsi+4]
            vmovss  dword ptr [rsp+88h+originalOrigin], xmm0
            vmovss  xmm0, dword ptr [rsi+8]
            vmovss  dword ptr [rsp+88h+originalOrigin+8], xmm0
            vmovss  dword ptr [rsp+88h+originalOrigin+4], xmm1
          }
        }
      }
      else
      {
        LODWORD(v19) = v1->clipboard.effectDataState[v3].effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v19) )
          __debugbreak();
      }
      CG_CreateFx_CalculateClipboardEntityOrigin(&originalOrigin, &outOrigin);
      CG_CreateFx_ClearRedoStack();
      while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x80 )
        CG_CreateFx_DiscardUndoSequence();
      v8 = (char *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x80ui64, 4ui64, 1);
      if ( !v8 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
      *((_DWORD *)v8 + 2) = -1;
      *(_QWORD *)v8 = &CreateFxInsertEffectCopyCommand::`vftable';
      effectType = v1->clipboard.effectDataState[v3].effectType;
      _RDI = v8 + 16;
      *((_DWORD *)v8 + 3) = effectType;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymmword ptr [rdi], ymm0
        vmovups ymm1, ymmword ptr [rsi+20h]
        vmovups ymmword ptr [rdi+20h], ymm1
        vmovups ymm0, ymmword ptr [rsi+40h]
        vmovups ymmword ptr [rdi+40h], ymm0
        vmovsd  xmm1, qword ptr [rsi+60h]
        vmovsd  qword ptr [rdi+60h], xmm1
      }
      if ( *((_DWORD *)v8 + 3) == 1 || *((_DWORD *)v8 + 3) == 2 || *((_DWORD *)v8 + 3) == 3 || *((_DWORD *)v8 + 3) == 4 || *((_DWORD *)v8 + 3) == 5 )
      {
        if ( v8 != (char *)-16i64 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
            vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
            vmovss  dword ptr [rdi], xmm0
            vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
            vmovss  dword ptr [rdi+8], xmm0
            vmovss  dword ptr [rdi+4], xmm1
          }
        }
      }
      else
      {
        LODWORD(v19) = *((_DWORD *)v8 + 3);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v19) )
          __debugbreak();
      }
      CG_CreateFx_OrientEffect((CreateFXDataUnion *)(v8 + 16), *((const CreateFxEffectType *)v8 + 3));
      if ( !s_createFxTool->activeLayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9185, ASSERT_TYPE_ASSERT, "(s_createFxTool->activeLayer)", (const char *)&queryFormat, "s_createFxTool->activeLayer") )
        __debugbreak();
      v18 = *(void (__fastcall ***)(void *))v8;
      *((_QWORD *)v8 + 15) = s_createFxTool->activeLayer;
      (*v18)(v8);
      CG_CreateFx_PushUndoCommand((CreateFxCommand *const)v8);
      if ( *((_DWORD *)v8 + 2) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1310, ASSERT_TYPE_ASSERT, "(m_effectIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "m_effectIndex != INVALID_EFFECT_INDEX") )
        __debugbreak();
      CG_CreateFx_SelectFx(*((_DWORD *)v8 + 2), 1);
      v1 = s_createFxTool;
      ++v2;
      ++v3;
    }
    while ( v2 < s_createFxTool->clipboard.effectTotal );
  }
  CG_CreateFx_PushUndoSequence(v1->clipboard.effectTotal);
}

/*
==============
CG_CreateFx_PlayReactiveSounds
==============
*/

void __fastcall CG_CreateFx_PlayReactiveSounds(const vec3_t *eventOrigin, double eventRadius, const float timeDelay)
{
  cg_t *LocalClientGlobals; 
  CreateFxTool *v7; 
  int v8; 
  unsigned int time; 
  __int64 v10; 
  __int64 v11; 
  bool *v12; 
  __int64 v13; 
  const SndAliasList *aliasList; 
  SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  __int64 v30; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _R12 = eventOrigin;
  __asm { vmovaps xmm6, xmm1 }
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v7 = s_createFxTool;
  v8 = 0;
  time = LocalClientGlobals->time;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v10 = 7078100i64;
    do
    {
      v11 = *(int *)(&v7->inited + v10);
      v12 = &v7->inited + 40 * v11;
      if ( *((_DWORD *)v12 + 1605686) == 5 )
      {
        v13 = (__int64)&v7->scratchData[v11];
        if ( time >= *((_DWORD *)v12 + 1605693) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r12]
            vsubss  xmm5, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [r12+4]
            vsubss  xmm2, xmm1, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [r12+8]
            vsubss  xmm3, xmm0, dword ptr [rbx+8]
            vaddss  xmm4, xmm6, dword ptr [rbx+30h]
            vmulss  xmm0, xmm5, xmm5
            vmulss  xmm1, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vcomiss xmm3, xmm0
          }
          if ( time <= *((_DWORD *)v12 + 1605693) )
          {
            aliasList = v7->scratchData[v11].reactiveEntDef.aliasList;
            if ( aliasList || (Alias = SND_TryFindAlias(v7->scratchData[v11].reactiveEntDef.effectSound.name), v7 = s_createFxTool, (aliasList = Alias) != NULL) )
            {
              SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
              CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)v13, aliasList);
              v7 = s_createFxTool;
            }
            v30 = *(_QWORD *)(v13 + 24);
            if ( v30 )
            {
              def.m_particleSystemDef = *(const ParticleSystemDef **)(v13 + 24);
              AnglesToAxis((const vec3_t *)(v13 + 12), &axis);
              LODWORD(v30) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, 0, (const vec3_t *)v13, &axis);
              v7 = s_createFxTool;
            }
            *((_DWORD *)v12 + 1605692) = v30;
            *((_DWORD *)v12 + 1605693) = time + 3000;
          }
        }
      }
      ++v8;
      v10 += 4i64;
    }
    while ( v8 < v7->usedEffectTotal );
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
CG_CreateFx_PrintError
==============
*/
void CG_CreateFx_PrintError(const char *const msg)
{
  const char *v1; 
  cg_t *LocalClientGlobals; 

  v1 = j_va("ERROR: %s", msg);
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  _RDX = s_createFxTool;
  s_createFxTool->statusMessageTimeout = LocalClientGlobals->time + 3000;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
    vmovss  dword ptr [rdx+80A3ACh], xmm0
    vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
    vmovss  dword ptr [rdx+80A3B0h], xmm1
    vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
    vmovss  dword ptr [rdx+80A3B4h], xmm0
    vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+0Ch; vec4_t const colorRed
    vmovss  dword ptr [rdx+80A3B8h], xmm1
  }
  Core_strcpy(_RDX->statusMessageBuffer, 0x100ui64, v1);
}

/*
==============
CG_CreateFx_PrintMessageInternal
==============
*/
void CG_CreateFx_PrintMessageInternal(const char *const msg, const vec4_t *color)
{
  cg_t *LocalClientGlobals; 
  CreateFxTool *v5; 

  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v5 = s_createFxTool;
  s_createFxTool->statusMessageTimeout = LocalClientGlobals->time + 3000;
  v5->statusMessageColor = *color;
  Core_strcpy(v5->statusMessageBuffer, 0x100ui64, msg);
}

/*
==============
CG_CreateFx_PushUndoCommand
==============
*/
void CG_CreateFx_PushUndoCommand(CreateFxCommand *const command)
{
  CreateFxTool *v2; 

  if ( s_createFxTool->undoBuffer.m_count == 0x10000 )
  {
    CG_CreateFx_DiscardUndoSequence();
    if ( s_createFxTool->undoBuffer.m_count == 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5554, ASSERT_TYPE_ASSERT, "(!s_createFxTool->undoBuffer.full())", (const char *)&queryFormat, "!s_createFxTool->undoBuffer.full()") )
      __debugbreak();
  }
  v2 = s_createFxTool;
  if ( s_createFxTool->undoBuffer.m_count == 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 502, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
    __debugbreak();
  v2->undoBuffer.pool[LOWORD(v2->undoBuffer.m_top)] = command;
  ++v2->undoBuffer.m_top;
  ++v2->undoBuffer.m_count;
}

/*
==============
CG_CreateFx_PushUndoSequence
==============
*/
void CG_CreateFx_PushUndoSequence(const unsigned __int16 commandCount)
{
  CreateFxTool *v1; 

  v1 = s_createFxTool;
  if ( s_createFxTool->undoCount.m_count == 0x4000 )
  {
    CG_CreateFx_DiscardUndoSequence();
    v1 = s_createFxTool;
    if ( s_createFxTool->undoCount.m_count == 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 502, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
      __debugbreak();
  }
  v1->undoCount.pool[v1->undoCount.m_top++ & 0x3FFF] = commandCount;
  ++v1->undoCount.m_count;
}

/*
==============
CG_CreateFx_ReduceSelectionToEffectType
==============
*/
void CG_CreateFx_ReduceSelectionToEffectType(const CreateFxEffectType targetType)
{
  CreateFxTool *v1; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  int selectedEffectTotal; 
  int v8; 
  __int64 v9; 
  int *selectedEffectList; 
  CreateFxMenuPage *v11; 
  __int64 v12; 
  __int64 v13; 

  v1 = s_createFxTool;
  v3 = s_createFxTool->selectedEffectTotal - 1;
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 4i64 * v3 + 7209180;
    do
    {
      v6 = *(int *)(&v1->inited + v5);
      if ( v1->scratchDataState[v6].effectType != targetType )
      {
        if ( (unsigned int)v6 >= 0x4000 )
        {
          LODWORD(v13) = 0x4000;
          LODWORD(v12) = *(_DWORD *)(&v1->inited + v5);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2621, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
          v1 = s_createFxTool;
        }
        if ( v1->selectedEffectTotal >= 0x4000u )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2622, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectedEffectTotal < ( sizeof( *array_counter( s_createFxTool->selectedEffectList ) ) + 0 ))", (const char *)&queryFormat, "s_createFxTool->selectedEffectTotal < ARRAY_COUNT( s_createFxTool->selectedEffectList )") )
            __debugbreak();
          v1 = s_createFxTool;
        }
        if ( v1->editBuffer.effectTotal > 0 )
        {
          s_interruptCommandActive = 1;
          CG_CreateFx_OnEditEnd();
          v1 = s_createFxTool;
        }
        selectedEffectTotal = v1->selectedEffectTotal;
        v8 = 0;
        v9 = 0i64;
        if ( selectedEffectTotal > 0 )
        {
          selectedEffectList = v1->selectedEffectList;
          while ( *selectedEffectList != (_DWORD)v6 )
          {
            ++v8;
            ++v9;
            ++selectedEffectList;
            if ( v8 >= selectedEffectTotal )
              goto LABEL_20;
          }
          v1->scratchDataState[v6].selected = 0;
          v1->selectedEffectList[v9] = v1->freeEffectList[v1->selectedEffectTotal + 0x4000];
          v1->freeEffectList[v1->selectedEffectTotal-- + 0x4000] = -1;
          selectedEffectTotal = v1->selectedEffectTotal;
        }
LABEL_20:
        v11 = s_menuPath[s_menuPathCount];
        if ( selectedEffectTotal )
        {
          if ( selectedEffectTotal > 0 )
          {
            CG_CreateFx_EvaluateSelectionHomogeneity();
            if ( v11->menuName != HUD_OBJECT_PROPERTIES )
            {
              if ( s_menuPathCount + 1 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1989, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount + 1 < CREATEFX_MAX_MENU_DEPTH ) )", "ERROR: Create FX menu history is to long") )
                __debugbreak();
              s_menuPath[++s_menuPathCount] = &s_menuPages[1];
            }
            v1 = s_createFxTool;
          }
        }
        else if ( v11->menuName == HUD_OBJECT_PROPERTIES )
        {
          s_menuFocus = WORLD;
          if ( s_menuPathCount <= 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
              __debugbreak();
            v1 = s_createFxTool;
          }
          --s_menuPathCount;
        }
      }
      v5 -= 4i64;
      --v4;
    }
    while ( v4 >= 0 );
  }
}

/*
==============
CG_CreateFx_RegisterCommonDvars
==============
*/
void CG_CreateFx_RegisterCommonDvars()
{
  const dvar_t *v4; 
  const dvar_t *v9; 
  const dvar_t *v13; 
  const dvar_t *v17; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 

  __asm { vmovaps [rsp+58h+var_18], xmm8 }
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm3, cs:__real@40c00000; max
    vmovss  xmm1, cs:__real@3f4ccccd; value
    vmovss  dword ptr [rsp+58h+var_38], xmm2
  }
  v4 = Dvar_RegisterFloat("MORLRLTTTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v23, 0, "Createfx native font size");
  __asm
  {
    vmovss  xmm8, cs:__real@40a00000
    vmovss  xmm3, cs:__real@453b8000; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  createfx_menuFontSize = v4;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  dword ptr [rsp+58h+var_38], xmm8
  }
  v9 = Dvar_RegisterFloat("LLONRQQTKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v24, 0, "Createfx text origin X");
  __asm
  {
    vmovss  xmm3, cs:__real@453b8000; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  createfx_menuTextXOrigin = v9;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  dword ptr [rsp+58h+var_38], xmm8
  }
  v13 = Dvar_RegisterFloat("MSTTNLOORL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v25, 0, "Createfx text origin Y");
  __asm
  {
    vmovss  xmm2, cs:__real@42c80000; min
    vmovss  xmm3, cs:__real@47435000; max
    vmovss  xmm1, cs:__real@447a0000; value
  }
  createfx_menuTextYOrigin = v13;
  __asm { vmovss  dword ptr [rsp+58h+var_38], xmm2 }
  v17 = Dvar_RegisterFloat("OLKQQMLKTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v26, 0, "Createfx draw distance for the tool");
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm3, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@41400000; value
  }
  createfx_drawdist = v17;
  __asm
  {
    vmovaps xmm2, xmm8; min
    vmovss  dword ptr [rsp+58h+var_38], xmm0
  }
  createfx_worldIconSize = Dvar_RegisterFloat("MKMSNKTKTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v27, 0, "The size of world icons for fx");
  createfx_hintLevel = Dvar_RegisterEnum("LNTRLONRST", s_CreateFxHintLevelStrings, 0, 0, "Createfx hint level");
  createfx_mapnamefilter = Dvar_RegisterString("TQPRRKROR", (const char *)&queryFormat.fmt + 3, 0, "If set, only layers/prefabs with this filter on will be loaded");
  __asm { vmovaps xmm8, [rsp+58h+var_18] }
  Dvar_EndPermanentRegistration();
}

/*
==============
CG_CreateFx_Reimport_f
==============
*/
void CG_CreateFx_Reimport_f()
{
  bool v1; 
  vec3_t rootAngles; 
  vec3_t rootOrigin; 
  char dest[64]; 

  if ( s_createFxTool && s_createFxTool->hasBeenEnabled && s_createFxTool->enabled && s_createFxTool->layerListTotal )
  {
    Core_strcpy(dest, 0x40ui64, s_createFxTool->layerList[0].pathString);
    if ( !dest[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8530, ASSERT_TYPE_ASSERT, "(!I_strempty( rootName ))", (const char *)&queryFormat, "!I_strempty( rootName )") )
      __debugbreak();
    _RAX = s_createFxTool;
    v1 = s_createFxTool->editBuffer.effectTotal <= 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+817230h]
      vmovss  xmm1, dword ptr [rax+817234h]
      vmovss  dword ptr [rsp+0A8h+rootOrigin], xmm0
      vmovss  xmm0, dword ptr [rax+817238h]
      vmovss  dword ptr [rsp+0A8h+rootOrigin+4], xmm1
      vmovss  xmm1, dword ptr [rax+81723Ch]
      vmovss  dword ptr [rsp+0A8h+rootOrigin+8], xmm0
      vmovss  xmm0, dword ptr [rax+817240h]
      vmovss  dword ptr [rsp+0A8h+rootAngles], xmm1
      vmovss  xmm1, dword ptr [rax+817244h]
      vmovss  dword ptr [rsp+0A8h+rootAngles+4], xmm0
      vmovss  dword ptr [rsp+0A8h+rootAngles+8], xmm1
    }
    if ( !v1 )
    {
      s_interruptCommandActive = 1;
      CG_CreateFx_OnEditEnd();
    }
    CG_CreateFx_ExitAllMenus();
    CG_CreateFx_StopAllEffects();
    CG_CreateFx_ClearEffectsData();
    CG_CreateFx_Import(dest, &rootOrigin, &rootAngles);
  }
}

/*
==============
CG_CreateFx_ResetEffectsLists
==============
*/
void *CG_CreateFx_ResetEffectsLists()
{
  CreateFxTool *v0; 
  int *selectedEffectList; 
  int v2; 
  int *freeEffectList; 
  void *result; 

  v0 = s_createFxTool;
  selectedEffectList = s_createFxTool->selectedEffectList;
  s_createFxTool->selectedEffectTotal = 0;
  memset_0(selectedEffectList, 0, 0x10000ui64);
  v0->usedEffectTotal = 0;
  memset_0(v0->usedEffectList, -1, 0x4000ui64);
  v2 = 0;
  v0->freeEffectListIndex = 0;
  freeEffectList = v0->freeEffectList;
  do
    *freeEffectList++ = v2++;
  while ( v2 < 0x4000 );
  memset_0(&v0->soundIndexUsage, 0xFFFF, 0x4000ui64);
  memset_0(v0->soundIndexUsage.soundIndexToEffectMap, -1, 0x400ui64);
  result = memset_0(v0->soundIndexUsage.loopingSoundIndexInUse, 0, sizeof(v0->soundIndexUsage.loopingSoundIndexInUse));
  v0->activeExploderCount = 0;
  v0->pendingExploderCount = 0;
  return result;
}

/*
==============
CG_CreateFx_ResetExportStatus
==============
*/
__int64 CG_CreateFx_ResetExportStatus()
{
  int time; 
  CreateFxTool *v1; 
  __int64 result; 

  time = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
  Dvar_SetString_Internal(DVARSTR_launcher_movefile_fail, (const char *)&queryFormat.fmt + 3);
  Dvar_SetString_Internal(DVARSTR_launcher_movefile_success, (const char *)&queryFormat.fmt + 3);
  v1 = s_createFxTool;
  result = (unsigned int)(time + 15000);
  s_createFxTool->lastExportInProgress = 0;
  v1->lastProbeSuccess = time;
  v1->nextProbeTime = result;
  return result;
}

/*
==============
CG_CreateFx_ResolveCommand
==============
*/
bool CG_CreateFx_ResolveCommand(const LocalClientNum_t localClientNum, __int64 key, const int down, const int repeats, const bool ctrlDown, const bool shiftDown, const bool leftShoulderDown)
{
  double v7; 
  __int64 effectTotal; 
  __int64 selectedEffectTotal; 
  bool result; 
  DiscardingStack<unsigned short,16384> *p_redoCount; 
  unsigned int v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  __int64 m_top_low; 
  CreateFxCommand *v18; 
  DiscardingStack<CreateFxCommand *,65536> *p_undoBuffer; 
  bool v21; 
  CreateFxTool *v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  int highlightedEffectIndex; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  ParticleSystemHandle *p_effectHandle; 
  ParticleSystemHandle v37; 
  __int64 v38; 
  ParticleSystem *v39; 
  ParticleSystem *v40; 
  __int16 v41; 
  int v42; 
  int *activeExploderIndices; 
  int *v44; 
  int activeExploderCount; 
  int v46; 
  int *selectedEffectList; 
  int v48; 
  __int64 v49; 
  scr_string_t name; 
  const char *v51; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v58; 
  __int64 v59; 
  __int64 v60; 
  int usedEffectTotal; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  CreateFxTool *v66; 
  int v67; 
  __int64 v68; 
  __int64 v69; 
  int v70; 
  int v71; 
  CreateFxMenuPage *v72; 
  __int64 v73; 
  CreateFxTool *v74; 
  __int64 v75; 
  __int64 v76; 
  CreateFxDrawMode menuDrawMode; 
  CreateFxDrawMode v78; 
  const dvar_t *v79; 
  int v80; 
  __int64 v81; 
  __int64 v82; 
  vec3_t outAngles; 

  if ( !down || repeats != 1 )
    return 0;
  if ( (_DWORD)key == 14 || (_DWORD)key == 154 )
  {
    v79 = createfx_hintLevel;
    if ( !createfx_hintLevel )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2536, ASSERT_TYPE_ASSERT, "(createfx_hintLevel)", (const char *)&queryFormat, "createfx_hintLevel") )
        __debugbreak();
      v79 = createfx_hintLevel;
    }
    v80 = 0;
    if ( v79->current.integer + 1 < 3 )
      v80 = v79->current.integer + 1;
    Dvar_SetInt_Internal(v79, v80);
    return 1;
  }
  if ( (_DWORD)key == 155 )
  {
    menuDrawMode = s_createFxTool->menuDrawMode;
    if ( menuDrawMode == MOVEMENT )
    {
      s_createFxTool->menuDrawMode = DODGE;
      return 1;
    }
    if ( menuDrawMode == DODGE )
    {
      s_createFxTool->menuDrawMode = COUNT;
      return 1;
    }
    v78 = MOVEMENT;
    if ( menuDrawMode == COUNT )
      v78 = COUNT|DODGE;
    s_createFxTool->menuDrawMode = v78;
    return 1;
  }
  effectTotal = (__int64)s_menuPath[s_menuPathCount];
  if ( effectTotal )
  {
    if ( *(_DWORD *)(effectTotal + 8) == 3 )
      return 0;
  }
  _RBX = s_createFxTool;
  selectedEffectTotal = s_createFxTool->selectedEffectTotal;
  if ( ctrlDown && (_DWORD)key == 122 || leftShoulderDown && (_DWORD)key == 22 )
  {
    CG_CreateFx_Undo(effectTotal, key, selectedEffectTotal);
    return 1;
  }
  if ( ctrlDown && (_DWORD)key == 121 || leftShoulderDown && (_DWORD)key == 23 )
  {
    if ( s_createFxTool->editBuffer.effectTotal > 0 )
    {
      s_interruptCommandActive = 1;
      CG_CreateFx_OnEditEnd();
      _RBX = s_createFxTool;
    }
    if ( _RBX->redoCount.m_count )
    {
      p_redoCount = &_RBX->redoCount;
      if ( !_RBX->redoCount.m_count )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        _RBX = s_createFxTool;
      }
      v14 = --p_redoCount->m_top;
      --p_redoCount->m_count;
      v15 = p_redoCount->pool[v14 & 0x3FFF];
      if ( v15 )
      {
        v16 = v15;
        do
        {
          if ( !_RBX->redoBuffer.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
            __debugbreak();
          --_RBX->redoBuffer.m_top;
          m_top_low = LOWORD(_RBX->redoBuffer.m_top);
          --_RBX->redoBuffer.m_count;
          v18 = _RBX->redoBuffer.pool[m_top_low];
          ((void (__fastcall *)(CreateFxCommand *, __int64, __int64))v18->Do)(v18, key, selectedEffectTotal);
          _RBX = s_createFxTool;
          p_undoBuffer = &s_createFxTool->undoBuffer;
          if ( s_createFxTool->undoBuffer.m_count == 0x10000 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 502, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
              __debugbreak();
            _RBX = s_createFxTool;
          }
          p_undoBuffer->pool[LOWORD(p_undoBuffer->m_top)] = v18;
          ++p_undoBuffer->m_top;
          ++p_undoBuffer->m_count;
          --v16;
        }
        while ( v16 );
      }
      CG_CreateFx_PushUndoSequence(v15);
      return 1;
    }
    return 1;
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  if ( ctrlDown && (_DWORD)key == 99 || (_DWORD)key == 16 && !leftShoulderDown )
  {
    if ( (int)selectedEffectTotal > 0 )
    {
      CG_CreateFx_CopyToClipboard(localClientNum, v7);
      return 1;
    }
  }
  else if ( ctrlDown && (_DWORD)key == 120 || (_DWORD)key == 16 && leftShoulderDown )
  {
    if ( (int)selectedEffectTotal > 0 )
    {
      CG_CreateFx_CopyToClipboard(localClientNum, v7);
      CG_CreateFx_DeleteSelection();
      return 1;
    }
  }
  else if ( ctrlDown && (v21 = (unsigned int)key <= 0x76, (_DWORD)key == 118) || (_DWORD)key == 17 && (v21 = !leftShoulderDown) )
  {
    __asm { vcomiss xmm0, dword ptr [rbx+240018h] }
    if ( !v21 )
    {
      effectTotal = (unsigned int)s_createFxTool->clipboard.effectTotal;
      if ( (int)effectTotal > 0 && 0x4000 - s_createFxTool->usedEffectTotal >= (int)effectTotal )
      {
        CG_CreateFx_PasteClipboard(&s_createFxTool->clipboard.cursorTrace.position);
        return 1;
      }
    }
  }
  else if ( ctrlDown && (_DWORD)key == 97 )
  {
    CG_CreateFx_ClearSelection();
    v22 = s_createFxTool;
    v23 = 0;
    if ( s_createFxTool->usedEffectTotal <= 0 )
      return 1;
    v24 = 7078100i64;
    do
    {
      v25 = *(int *)(&v22->inited + v24);
      if ( v22->scratchDataState[v25].effectType == None )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5758, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None") )
          __debugbreak();
        v22 = s_createFxTool;
      }
      if ( v22->scratchDataState[v25].layer == v22->activeLayer )
      {
        CG_CreateFx_SelectFx(v25, 1);
        v22 = s_createFxTool;
      }
      ++v23;
      v24 += 4i64;
    }
    while ( v23 < v22->usedEffectTotal );
    return 1;
  }
  if ( (_DWORD)key != 120 && (_DWORD)key != 27 )
  {
    if ( (_DWORD)key != 17 )
      goto LABEL_75;
    if ( !leftShoulderDown )
      goto LABEL_82;
  }
  if ( (int)selectedEffectTotal > 0 )
  {
    CG_CreateFx_ClearSelection();
    return 1;
  }
  if ( s_createFxTool->clipboard.effectTotal )
  {
    result = 1;
    s_createFxTool->clipboard.effectTotal = 0;
    return result;
  }
LABEL_75:
  switch ( (_DWORD)key )
  {
    case 0x95:
      if ( (int)selectedEffectTotal > 0 )
      {
LABEL_77:
        CG_CreateFx_DeleteSelection();
        return 1;
      }
      break;
    case 0x94:
LABEL_79:
      CG_CreateFx_InsertNewFx();
      return 1;
    case 0x6F:
      s_createFxTool->editCameraRelative = !s_createFxTool->editCameraRelative;
      return 1;
  }
LABEL_82:
  if ( s_menuFocus )
    goto LABEL_91;
  if ( (_DWORD)key == 13 )
  {
LABEL_86:
    s_menuFocus = MENU;
    return 1;
  }
  if ( (_DWORD)key != 3 )
  {
LABEL_91:
    if ( ((_DWORD)key == 153 || (_DWORD)key == 108 || (_DWORD)key == 21 && leftShoulderDown) && (int)selectedEffectTotal > 0 )
    {
      if ( s_createFxTool->deferredCommand )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9372, ASSERT_TYPE_ASSERT, "(s_createFxTool->deferredCommand == nullptr)", (const char *)&queryFormat, "s_createFxTool->deferredCommand == nullptr") )
          __debugbreak();
        _RBX = s_createFxTool;
      }
      _RBX->deferredCommand = CG_CreateFx_DropSelectionToGround;
      return 1;
    }
  }
  else if ( !leftShoulderDown )
  {
    goto LABEL_86;
  }
  switch ( (int)key )
  {
    case 1:
    case 187:
      highlightedEffectIndex = s_createFxTool->highlightedEffectIndex;
      if ( highlightedEffectIndex == -1 )
        return 0;
      if ( ctrlDown || leftShoulderDown )
      {
        CG_CreateFx_SelectFx(highlightedEffectIndex, 1);
        return 1;
      }
      else
      {
        CG_CreateFx_SelectFx(highlightedEffectIndex, 0);
        return 1;
      }
    case 2:
      if ( (int)selectedEffectTotal <= 0 )
        return 0;
      if ( leftShoulderDown )
        goto LABEL_77;
      return 1;
    case 3:
      if ( !leftShoulderDown )
        return 0;
      goto $LN55_21;
    case 4:
      if ( leftShoulderDown )
        goto LABEL_79;
      return 1;
    case 6:
      if ( leftShoulderDown )
        goto LABEL_131;
      goto $LN69_17;
    case 9:
$LN69_17:
      if ( (int)selectedEffectTotal <= 0 )
        return 1;
      __asm { vcomiss xmm0, dword ptr [rbx+240018h] }
      if ( !(_DWORD)selectedEffectTotal )
        return 1;
      CG_CreateFx_MoveSelectionToCursor(effectTotal, v7);
      return 1;
    case 19:
      if ( !leftShoulderDown )
        return 0;
      if ( (int)selectedEffectTotal <= 0 )
        goto LABEL_144;
      goto LABEL_146;
    case 20:
      if ( !leftShoulderDown )
        return 0;
      goto $LN65_14;
    case 32:
      if ( (int)selectedEffectTotal <= 0 )
        return 0;
LABEL_146:
      CG_CreateFx_TriggerSelectedExploders(!shiftDown);
      return 1;
    case 44:
      usedEffectTotal = s_createFxTool->usedEffectTotal;
      v62 = 1;
      if ( usedEffectTotal < 1 )
        return 1;
      while ( 1 )
      {
        v63 = (v62 + _RBX->invalidEntityIndex) % usedEffectTotal;
        v64 = _RBX->usedEffectList[v63];
        if ( (unsigned int)v64 >= 0x4000 )
        {
          LODWORD(v82) = 0x4000;
          LODWORD(v81) = _RBX->usedEffectList[v63];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3083, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v81, v82) )
            __debugbreak();
          _RBX = s_createFxTool;
        }
        if ( _RBX->scratchDataState[v64].effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3088, ASSERT_TYPE_ASSERT, "(effectState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectState.effectType != CreateFxEffectType::None") )
          __debugbreak();
        if ( !(unsigned __int8)CG_CreateFx_IsEffectDefValid(&_RBX->scratchData[v64], (const CreateFxEffectType)_RBX->scratchDataState[v64].effectType) )
          break;
        _RBX = s_createFxTool;
        ++v62;
        usedEffectTotal = s_createFxTool->usedEffectTotal;
        if ( v62 > usedEffectTotal )
          return 1;
      }
      s_createFxTool->invalidEntityIndex = v63;
      CG_CreateFx_ClearSelection();
      CG_CreateFx_SelectFx(v64, 0);
      CG_CreateFx_GotoSelected(v65, v7);
      return 1;
    case 45:
      v31 = s_createFxEditRateIndex - 1;
      if ( s_createFxEditRateIndex - 1 < 0 )
        v31 = 0;
      s_createFxEditRateIndex = v31;
      return 1;
    case 61:
      v32 = 8;
      if ( s_createFxEditRateIndex + 1 < 8 )
        v32 = s_createFxEditRateIndex + 1;
      result = 1;
      s_createFxEditRateIndex = v32;
      return result;
    case 101:
      if ( ctrlDown )
      {
        s_createFxTool->drawExploderLines = !s_createFxTool->drawExploderLines;
        return 1;
      }
      if ( (int)selectedEffectTotal <= 0 )
        return 0;
      CG_CreateFx_ReduceSelectionToEffectType((const CreateFxEffectType)1);
      v66 = s_createFxTool;
      if ( s_createFxTool->selectedEffectTotal < 1 )
        return 1;
      if ( s_createFxTool->editBuffer.effectTotal > 0 )
      {
        s_interruptCommandActive = 1;
        CG_CreateFx_OnEditEnd();
        v66 = s_createFxTool;
      }
      CG_CreateFx_SaveSelectionToBuffer(&v66->editBuffer);
      v67 = 0;
      if ( v66->selectedEffectTotal > 0 )
      {
        v68 = 7209180i64;
        do
        {
          v69 = *(int *)(&v66->inited + v68);
          if ( v66->scratchDataState[v69].effectType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9746, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::OneshotEffect)", (const char *)&queryFormat, "effectType == CreateFxEffectType::OneshotEffect") )
            __debugbreak();
          CG_CreateFx_StopEffect(v69);
          CG_CreateFx_SetEffectType(v69, (const CreateFxEffectType)3);
          v66 = s_createFxTool;
          ++v67;
          v68 += 4i64;
        }
        while ( v67 < s_createFxTool->selectedEffectTotal );
      }
      CG_CreateFx_OnEditEnd();
      v70 = s_menuPathCount;
      v71 = s_createFxTool->selectedEffectTotal;
      v72 = s_menuPath[s_menuPathCount];
      if ( !v71 )
      {
        if ( v72->menuName != HUD_OBJECT_PROPERTIES )
          return 1;
        s_menuFocus = WORLD;
        if ( s_menuPathCount <= 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
            __debugbreak();
          v70 = s_menuPathCount;
        }
        result = 1;
        s_menuPathCount = v70 - 1;
        return result;
      }
      if ( v71 > 0 )
      {
        CG_CreateFx_EvaluateSelectionHomogeneity();
        if ( v72->menuName != HUD_OBJECT_PROPERTIES )
        {
          CG_CreateFx_GotoMenu(HUD_OBJECT_PROPERTIES);
          return 1;
        }
      }
      return 1;
    case 103:
      if ( ctrlDown )
      {
LABEL_144:
        CG_CreateFx_TriggerReactiveEntsNearCursor();
        return 1;
      }
      if ( shiftDown )
      {
        if ( (int)selectedEffectTotal > 0 || s_createFxTool->highlightedEffectIndex != -1 )
        {
LABEL_131:
          CG_CreateFx_GotoSelected(effectTotal, v7);
          return 1;
        }
        return 1;
      }
      if ( (int)selectedEffectTotal <= 0 )
        return 1;
      CG_CreateFx_ReduceSelectionToEffectType((const CreateFxEffectType)3);
      return 1;
    case 104:
      if ( (int)selectedEffectTotal <= 0 )
        return 1;
      v46 = 0;
      selectedEffectList = s_createFxTool->selectedEffectList;
      v48 = 0;
      break;
    case 107:
      if ( !ctrlDown )
        return 1;
      v33 = 0;
      if ( s_createFxTool->usedEffectTotal <= 0 )
        return 1;
      v34 = 7078100i64;
      do
      {
        v35 = *(int *)(&_RBX->inited + v34);
        if ( _RBX->scratchDataState[v35].effectType == 3 )
        {
          p_effectHandle = &_RBX->scratchDataState[v35].effectHandle;
          v37 = *p_effectHandle;
          if ( *p_effectHandle )
          {
            v38 = 0i64;
            if ( g_particleSystemsGeneration[v37 & 0xFFF].__all32 == v37 )
              v38 = v37 & 0xFFF;
            v39 = NULL;
            v40 = g_particleSystems[0][v38];
            if ( (unsigned __int64)v40 >= 0x1000 )
              v39 = v40;
            if ( v39 )
            {
              ParticleManager::KillSystem(g_particleManager, v39);
              _RBX = s_createFxTool;
            }
          }
          *p_effectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
          if ( _RBX->activeExploderCount )
          {
            v41 = 0;
            v42 = 0;
            activeExploderIndices = _RBX->activeExploderIndices;
            v44 = _RBX->activeExploderIndices;
            do
            {
              if ( *v44 == (_DWORD)v35 )
                ++v41;
              else
                *activeExploderIndices++ = *v44;
              activeExploderCount = _RBX->activeExploderCount;
              ++v42;
              ++v44;
            }
            while ( v42 < activeExploderCount );
            _RBX->activeExploderCount = activeExploderCount - v41;
          }
        }
        ++v33;
        v34 += 4i64;
      }
      while ( v33 < _RBX->usedEffectTotal );
      return 1;
    case 110:
      if ( !ctrlDown )
        return 1;
      s_createFxTool->snapToNormal = !s_createFxTool->snapToNormal;
      return 1;
    case 112:
$LN65_14:
      if ( (int)selectedEffectTotal <= 0 )
        return 1;
      if ( s_createFxTool->editBuffer.effectTotal > 0 )
      {
        s_interruptCommandActive = 1;
        CG_CreateFx_OnEditEnd();
        _RBX = s_createFxTool;
      }
      CG_CreateFx_SaveSelectionToBuffer(&_RBX->editBuffer);
      v27 = 0;
      if ( _RBX->selectedEffectTotal > 0 )
      {
        v28 = 7209180i64;
        do
        {
          v29 = *(int *)(&_RBX->inited + v28);
          v30 = v29;
          if ( _RBX->scratchDataState[v29].effectType == 1 || _RBX->scratchDataState[v29].effectType == 2 || _RBX->scratchDataState[v29].effectType == 3 || _RBX->scratchDataState[v29].effectType == Menu || _RBX->scratchDataState[v29].effectType == 5 )
          {
            if ( (CreateFxTool *)((char *)_RBX + v30 * 104) != (CreateFxTool *)-4718812i64 )
            {
              *(_QWORD *)_RBX->scratchData[v30].reactiveEntDef.angles.v = 0i64;
              _RBX->scratchData[v30].oneShotFxDef.angles.v[2] = 0.0;
            }
          }
          else
          {
            LODWORD(v81) = _RBX->scratchDataState[v29].effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", v81) )
              __debugbreak();
          }
          if ( (unsigned int)v29 >= 0x4000 )
          {
            LODWORD(v82) = 0x4000;
            LODWORD(v81) = v29;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v81, v82) )
              __debugbreak();
          }
          CG_CreateFx_StopEffect(v29);
          CG_CreateFx_StartEffect(v29);
          _RBX = s_createFxTool;
          ++v27;
          v28 += 4i64;
        }
        while ( v27 < s_createFxTool->selectedEffectTotal );
      }
      goto LABEL_129;
    case 114:
$LN55_21:
      s_createFxTool->editRotation = !s_createFxTool->editRotation;
      return 1;
    case 116:
      ++s_createFxTool->snapToAngleIndex;
      if ( _RBX->snapToAngleIndex < 4u )
        return 1;
      result = 1;
      _RBX->snapToAngleIndex = 0;
      return result;
    case 118:
      if ( (int)selectedEffectTotal <= 0 )
        return 0;
      if ( (int)selectedEffectTotal < 2 )
        return 1;
      v73 = selectedEffectTotal - 1;
      CG_CreateFx_GetScratchEffectAngles(s_createFxTool->freeEffectList[selectedEffectTotal + 0x4000], &outAngles);
      v74 = s_createFxTool;
      if ( s_createFxTool->editBuffer.effectTotal > 0 )
      {
        s_interruptCommandActive = 1;
        CG_CreateFx_OnEditEnd();
        v74 = s_createFxTool;
      }
      CG_CreateFx_SaveSelectionToBuffer(&v74->editBuffer);
      if ( v73 > 0 )
      {
        v75 = 0i64;
        v76 = 7209180i64;
        while ( 1 )
        {
          CG_CreateFx_SetScratchEffectAngles(*(_DWORD *)(&v74->inited + v76), &outAngles);
          ++v75;
          v76 += 4i64;
          if ( v75 >= v73 )
            break;
          v74 = s_createFxTool;
        }
      }
LABEL_129:
      CG_CreateFx_OnEditEnd();
      return 1;
    case 158:
      CG_CreateFx_Export_f();
      return 1;
    default:
      return 0;
  }
  while ( 1 )
  {
    v49 = *selectedEffectList;
    if ( s_createFxTool->scratchDataState[v49].effectType == 3 )
    {
      name = s_createFxTool->scratchData[v49].explodersDef.client.name;
      if ( name )
        break;
    }
    ++v48;
    ++selectedEffectList;
    if ( v48 >= (int)selectedEffectTotal )
    {
      v51 = j_va("ERROR: %s", "No named exploders in selection");
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      _RDX = s_createFxTool;
      s_createFxTool->statusMessageTimeout = LocalClientGlobals->time + 3000;
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
        vmovss  dword ptr [rdx+80A3ACh], xmm0
        vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
        vmovss  dword ptr [rdx+80A3B0h], xmm1
        vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
        vmovss  dword ptr [rdx+80A3B4h], xmm0
        vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+0Ch; vec4_t const colorRed
        vmovss  dword ptr [rdx+80A3B8h], xmm1
      }
      Core_strcpy(_RDX->statusMessageBuffer, 0x100ui64, v51);
      return 1;
    }
  }
  CG_CreateFx_ClearSelection();
  v58 = s_createFxTool;
  if ( s_createFxTool->usedEffectTotal <= 0 )
    return 1;
  v59 = 7078100i64;
  do
  {
    v60 = *(int *)(&v58->inited + v59);
    if ( v58->scratchDataState[v60].effectType == 3 && v58->scratchData[v60].explodersDef.client.name == name )
    {
      CG_CreateFx_SelectFx(v60, 1);
      v58 = s_createFxTool;
    }
    ++v46;
    v59 += 4i64;
  }
  while ( v46 < v58->usedEffectTotal );
  return 1;
}

/*
==============
CG_CreateFx_RestartEffect
==============
*/
void CG_CreateFx_RestartEffect(const int storageIndex)
{
  int v3; 

  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v3 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v3) )
      __debugbreak();
  }
  CG_CreateFx_StopEffect(storageIndex);
  CG_CreateFx_StartEffect(storageIndex);
}

/*
==============
CG_CreateFx_Resume
==============
*/
void CG_CreateFx_Resume(double a1)
{
  const dvar_t *v1; 
  bool enabled; 
  int i; 
  CreateFxTool *v4; 

  v1 = DVARBOOL_createfx_enabled;
  if ( !DVARBOOL_createfx_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "createfx_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  enabled = v1->current.enabled;
  Com_Printf_NoFilter("[CreateFx] Resume\n");
  CG_CreateFx_FreeStrings();
  CG_CreateFx_StopAllEffects();
  CG_CreateFx_ClearEffectsData();
  for ( i = s_menuPathCount; i > 0; s_menuPathCount = i )
    --i;
  v4 = s_createFxTool;
  s_menuFocus = WORLD;
  s_doingTemporaryCreateFxActivation = !enabled;
  s_createFxTool->enabled = 0;
  v4->hasBeenEnabled = 0;
  CG_CreateFx_Enter_f(a1);
  if ( !enabled )
    CG_CreateFx_Exit_f();
}

/*
==============
CG_CreateFx_RootLoad_f
==============
*/

void __fastcall CG_CreateFx_RootLoad_f(double _XMM0_8)
{
  const char *v1; 
  vec3_t rootAngles; 
  vec3_t rootOrigin; 

  if ( Cmd_Argc() > 1 )
  {
    if ( s_createFxTool && s_createFxTool->enabled )
    {
      Com_PrintWarning(0, "Cannot load a root while editing an existing one\n");
    }
    else
    {
      CG_CreateFx_InitializeIfNeeded(_XMM0_8);
      CG_CreateFx_StopAllEffects();
      CG_CreateFx_ClearEffectsData();
      v1 = Cmd_Argv(1);
      if ( v1 && *v1 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+58h+rootAngles], xmm0
          vmovss  dword ptr [rsp+58h+rootAngles+4], xmm0
          vmovss  dword ptr [rsp+58h+rootAngles+8], xmm0
          vmovss  dword ptr [rsp+58h+rootOrigin], xmm0
          vmovss  dword ptr [rsp+58h+rootOrigin+4], xmm0
          vmovss  dword ptr [rsp+58h+rootOrigin+8], xmm0
        }
        CG_CreateFx_EnterRoot(v1, &rootOrigin, &rootAngles);
        s_createFxTool->loadedManually = 1;
      }
      else
      {
        Com_PrintWarning(0, "Root name not specified\n");
      }
    }
  }
  else
  {
    Com_PrintWarning(0, "You must specify a root map path with the command, for example 'cfxToolLoadRoot createfx/myNewRootPrefab'\n");
  }
}

/*
==============
CG_CreateFx_RootNew_f
==============
*/
void CG_CreateFx_RootNew_f(double a1)
{
  const char *v2; 
  CreateFxTool *v4; 
  int v5; 
  vec3_t layerAngles; 
  vec3_t layerOrigin; 
  char dest[64]; 

  if ( Cmd_Argc() > 1 )
  {
    if ( s_createFxTool && s_createFxTool->enabled )
    {
      Com_PrintWarning(0, "[CreateFx] Cannot make a new root while editing an existing one without destroying the existing one's data\n");
    }
    else
    {
      __asm { vmovaps [rsp+0A0h+var_10], xmm6 }
      CG_CreateFx_InitializeIfNeeded(a1);
      CG_CreateFx_ClearEffectsData();
      v2 = Cmd_Argv(1);
      Com_Printf_NoFilter("[CreateFx] RootNew %s\n", v2);
      Com_sprintf<64>((char (*)[64])dest, "%s_cfx", v2);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmovss  dword ptr [rbp+57h+layerAngles], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+4], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+8], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+4], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+8], xmm6
      }
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerOrigin, &layerAngles);
      Com_sprintf<64>((char (*)[64])dest, "%s/%s_fx", v2, v2);
      __asm
      {
        vmovss  dword ptr [rbp+57h+layerOrigin], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+4], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+8], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+4], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+8], xmm6
      }
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerAngles, &layerOrigin);
      Com_sprintf<64>((char (*)[64])dest, "%s/%s_sound", v2, v2);
      __asm
      {
        vmovss  dword ptr [rbp+57h+layerOrigin], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+4], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+8], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+4], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+8], xmm6
      }
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerAngles, &layerOrigin);
      Com_sprintf<64>((char (*)[64])dest, "%s/%s_rex", v2, v2);
      __asm
      {
        vmovss  dword ptr [rbp+57h+layerOrigin], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+4], xmm6
        vmovss  dword ptr [rbp+57h+layerOrigin+8], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+4], xmm6
        vmovss  dword ptr [rbp+57h+layerAngles+8], xmm6
      }
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerAngles, &layerOrigin);
      v4 = s_createFxTool;
      v5 = 0;
      __asm { vmovaps xmm6, [rsp+0A0h+var_10] }
      if ( s_createFxTool->layerListTotal > 0 )
      {
        do
        {
          CG_CreateFx_ExportLayer(&v4->layerList[v5], 0);
          v4 = s_createFxTool;
          ++v5;
        }
        while ( v5 < s_createFxTool->layerListTotal );
      }
    }
  }
  else
  {
    Com_PrintWarning(0, "[CreateFx] You must specify a root map name with the command, for example 'cfxToolRootNew createfx/myNewRootPrefab'\n");
  }
}

/*
==============
CG_CreateFx_SaveSelectionToBuffer
==============
*/
void CG_CreateFx_SaveSelectionToBuffer(CreateFxEffectBuffer_t *buffer)
{
  int v2; 
  int selectedEffectTotal; 
  int *selectedEffectList; 
  __int64 v6; 
  __int64 v8; 

  _R9 = s_createFxTool;
  v2 = 0;
  _R10 = buffer;
  selectedEffectTotal = s_createFxTool->selectedEffectTotal;
  buffer->effectTotal = selectedEffectTotal;
  if ( selectedEffectTotal > 0 )
  {
    selectedEffectList = _R9->selectedEffectList;
    do
    {
      v6 = *selectedEffectList++;
      _RAX = 104 * v6;
      v8 = v2++;
      __asm { vmovups ymm0, ymmword ptr [rax+r9+4800D0h] }
      _RCX = &_R10->effectData[v8];
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm1, ymmword ptr [rax+r9+4800F0h]
        vmovups ymmword ptr [rcx+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+r9+480110h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovsd  xmm1, qword ptr [rax+r9+480130h]
        vmovsd  qword ptr [rcx+60h], xmm1
      }
      _RCX = (__int64)&_R9->scratchDataState[v6];
      __asm { vmovups ymm0, ymmword ptr [rcx] }
      _RAX = 5 * v8;
      __asm
      {
        vmovups ymmword ptr [r10+rax*8+1A0000h], ymm0
        vmovsd  xmm1, qword ptr [rcx+20h]
        vmovsd  qword ptr [r10+rax*8+1A0020h], xmm1
      }
    }
    while ( v2 < _R10->effectTotal );
  }
}

/*
==============
CG_CreateFx_SelectFx
==============
*/
void CG_CreateFx_SelectFx(const int storageIndex, const bool multiSelect, __int64 a3, __int64 a4)
{
  __int64 v4; 
  CreateFxTool *v6; 
  __int64 selectedEffectTotal; 
  __int64 v8; 
  int *selectedEffectList; 
  bool v10; 
  int v11; 
  int v12; 
  CreateFxMenuPage *v13; 

  v4 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2643, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  v6 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v6 = s_createFxTool;
  }
  selectedEffectTotal = v6->selectedEffectTotal;
  if ( selectedEffectTotal <= 0 )
  {
LABEL_10:
    if ( !multiSelect )
    {
      CG_CreateFx_ClearSelection();
      v6 = s_createFxTool;
    }
    v6->scratchDataState[v4].selected = 1;
    v6->selectedEffectList[v6->selectedEffectTotal] = v4;
    v10 = v6->selectedEffectTotal++ == -1;
    v11 = v6->selectedEffectTotal;
    v12 = s_menuPathCount;
    v13 = s_menuPath[s_menuPathCount];
    if ( v10 && v13->menuName == HUD_OBJECT_PROPERTIES )
    {
      s_menuFocus = WORLD;
      if ( s_menuPathCount <= 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
          __debugbreak();
        v12 = s_menuPathCount;
      }
      s_menuPathCount = v12 - 1;
    }
    else if ( v11 > 0 )
    {
      CG_CreateFx_EvaluateSelectionHomogeneity();
      if ( v13->menuName != HUD_OBJECT_PROPERTIES )
        CG_CreateFx_GotoMenu(HUD_OBJECT_PROPERTIES);
    }
  }
  else
  {
    v8 = 0i64;
    selectedEffectList = v6->selectedEffectList;
    while ( *selectedEffectList != (_DWORD)v4 )
    {
      ++v8;
      ++selectedEffectList;
      if ( v8 >= selectedEffectTotal )
        goto LABEL_10;
    }
    CG_CreateFx_DeselectFx(v4, (__int64)v6, selectedEffectTotal, a4);
  }
}

/*
==============
CG_CreateFx_SetActiveLayer
==============
*/
void CG_CreateFx_SetActiveLayer(const CreateFxMapLayerDef *const newActiveLayer)
{
  if ( !newActiveLayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9177, ASSERT_TYPE_ASSERT, "(newActiveLayer)", (const char *)&queryFormat, "newActiveLayer") )
    __debugbreak();
  s_createFxTool->activeLayer = newActiveLayer;
  Com_Printf_NoFilter("[CreateFx] SetActiveLayer %s\n", newActiveLayer->pathString);
}

/*
==============
CG_CreateFx_SetAssetListCount
==============
*/

void __fastcall CG_CreateFx_SetAssetListCount(const int newCount, __int64 a2, double _XMM2_8)
{
  CreateFxTool *v4; 

  v4 = s_createFxTool;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, cs:__real@3de38e39
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vcvttss2si eax, xmm2
  }
  s_createFxTool->m_assetList.m_count = newCount;
  if ( v4->m_assetList.m_page >= _EAX )
    v4->m_assetList.m_page = 0;
}

/*
==============
CG_CreateFx_SetEffectAngles
==============
*/
void CG_CreateFx_SetEffectAngles(CreateFXDataUnion *effectData, const CreateFxEffectType effectType, const vec3_t *newAngles)
{
  vec3_t *p_angles; 

  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
  {
    p_angles = &effectData->oneShotFxDef.angles;
    if ( p_angles )
      *p_angles = *newAngles;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", effectType) )
  {
    __debugbreak();
  }
}

/*
==============
CG_CreateFx_SetEffectData
==============
*/
void CG_CreateFx_SetEffectData(const int storageIndex, const CreateFxEffectType effectType, const CreateFXDataUnion *effectData)
{
  __int64 v3; 
  int v13; 

  v3 = storageIndex;
  _RDI = effectData;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v13 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1643, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v13) )
      __debugbreak();
  }
  CG_CreateFx_StopEffect(v3);
  CG_CreateFx_SetEffectType(v3, effectType);
  _RCX = s_createFxTool;
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _RAX = 104 * v3;
  __asm
  {
    vmovups ymmword ptr [rax+rcx+4800D0h], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rax+rcx+4800F0h], ymm1
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rax+rcx+480110h], ymm0
    vmovsd  xmm1, qword ptr [rdi+60h]
    vmovsd  qword ptr [rax+rcx+480130h], xmm1
  }
  *(_QWORD *)&_RCX->scratchDataState[v3].effectHandle = 0i64;
  CG_CreateFx_UpdateEffectAlias(v3);
  CG_CreateFx_FreeSoundIndex(v3);
  CG_CreateFx_AllocSoundIndex(v3);
  CG_CreateFx_StartEffect(v3);
}

/*
==============
CG_CreateFx_SetEffectFx
==============
*/
void CG_CreateFx_SetEffectFx(const int storageIndex, const char *const newEffectPath)
{
  __int64 v2; 
  bool *v4; 
  __int64 v5; 
  FxCombinedDef *v6; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4623, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  if ( !newEffectPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4624, ASSERT_TYPE_ASSERT, "(newEffectPath)", (const char *)&queryFormat, "newEffectPath") )
    __debugbreak();
  v4 = &s_createFxTool->inited + 104 * v2;
  if ( s_createFxTool->scratchDataState[v2].effectType == 1 || s_createFxTool->scratchDataState[v2].effectType == 3 )
  {
    v5 = 4718832i64;
  }
  else
  {
    if ( s_createFxTool->scratchDataState[v2].effectType != 5 )
      return;
    v5 = 4718824i64;
  }
  v6 = (FxCombinedDef *)&v4[v5];
  if ( &v4[v5] )
  {
    v6->particleSystemDef = NULL;
    if ( *newEffectPath )
      FX_LoadEffectCombinedDef(newEffectPath, v6);
    CG_CreateFx_UpdateEffectAlias(v2);
  }
}

/*
==============
CG_CreateFx_SetEffectLayer
==============
*/
void CG_CreateFx_SetEffectLayer(const int storageIndex, const CreateFxMapLayerDef *const newLayer)
{
  __int64 v2; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3796, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchDataState ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchDataState )\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  if ( !newLayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3797, ASSERT_TYPE_ASSERT, "(newLayer)", (const char *)&queryFormat, "newLayer") )
    __debugbreak();
  s_createFxTool->scratchDataState[v2].layer = newLayer;
}

/*
==============
CG_CreateFx_SetEffectLayerForSelected
==============
*/
void CG_CreateFx_SetEffectLayerForSelected(const CreateFxMapLayerDef *const layerDef)
{
  CreateFxTool *v2; 
  int v3; 
  __int64 v4; 

  if ( !layerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7272, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
    __debugbreak();
  v2 = s_createFxTool;
  v3 = 0;
  if ( s_createFxTool->selectedEffectTotal > 0 )
  {
    v4 = 7209180i64;
    do
    {
      CG_CreateFx_SetEffectLayer(*(_DWORD *)(&v2->inited + v4), layerDef);
      v2 = s_createFxTool;
      v4 += 4i64;
      ++v3;
    }
    while ( v3 < s_createFxTool->selectedEffectTotal );
  }
  if ( v2->activeLayer != layerDef )
  {
    if ( !layerDef )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9177, ASSERT_TYPE_ASSERT, "(newActiveLayer)", (const char *)&queryFormat, "newActiveLayer") )
        __debugbreak();
      v2 = s_createFxTool;
    }
    v2->activeLayer = layerDef;
    Com_Printf_NoFilter("[CreateFx] SetActiveLayer %s\n", layerDef->pathString);
  }
}

/*
==============
CG_CreateFx_SetEffectOrigin
==============
*/
void CG_CreateFx_SetEffectOrigin(CreateFXDataUnion *effectData, const CreateFxEffectType effectType, const vec3_t *newOrigin)
{
  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
  {
    if ( effectData )
      effectData->oneShotFxDef.origin = *newOrigin;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", effectType) )
  {
    __debugbreak();
  }
}

/*
==============
CG_CreateFx_SetEffectSoundalias
==============
*/
void CG_CreateFx_SetEffectSoundalias(const int storageIndex, const char *const newAliasName)
{
  __int64 v2; 
  bool *v4; 
  __int64 v5; 
  __int64 v6; 
  char **v7; 
  SndAliasList **v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  char *aliasName; 
  CreateFxTool *v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  int v16; 
  int missingSoundCount; 
  unsigned __int64 missingSoundNext; 
  CreateFxTool *v19; 
  bool outIsAlwaysLoaded; 
  SndAliasList *outAlias; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4665, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  if ( !newAliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4666, ASSERT_TYPE_ASSERT, "(newAliasName)", (const char *)&queryFormat, "newAliasName") )
    __debugbreak();
  v4 = &s_createFxTool->inited + 104 * v2;
  switch ( s_createFxTool->scratchDataState[v2].effectType )
  {
    case 1:
      goto LABEL_14;
    case 2:
LABEL_13:
      v6 = 4718824i64;
      v5 = 4718832i64;
      goto LABEL_15;
    case 3:
LABEL_14:
      v6 = 4718840i64;
      v5 = 4718848i64;
      goto LABEL_15;
    case 4:
      goto LABEL_13;
  }
  if ( s_createFxTool->scratchDataState[v2].effectType != 5 )
    return;
  v5 = 4718840i64;
  v6 = 4718832i64;
LABEL_15:
  v7 = (char **)&v4[v6];
  v8 = (SndAliasList **)&v4[v5];
  if ( &v4[v5] && v7 )
  {
    v9 = 0;
    v10 = -1i64;
    v11 = -1i64;
    outAlias = NULL;
    aliasName = NULL;
    do
      ++v11;
    while ( newAliasName[v11] );
    if ( (_DWORD)v11 )
    {
      if ( SND_TryFindAliasForCaching(newAliasName, &outAlias, &outIsAlwaysLoaded) )
      {
        if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4724, ASSERT_TYPE_ASSERT, "(newAliasList != nullptr)", (const char *)&queryFormat, "newAliasList != nullptr") )
          __debugbreak();
        aliasName = (char *)outAlias->aliasName;
        if ( !outIsAlwaysLoaded )
        {
          Com_Printf(0, "[CreateFx] entity %d reference to sound %s can't be cached (transient bank)\n", (unsigned int)v2, newAliasName);
          outAlias = NULL;
        }
      }
      else
      {
        v13 = s_createFxTool;
        if ( s_createFxTool->imported )
        {
          Com_PrintWarning(0, "[CreateFx] entity %d has a reference to sound %s, but we can't find the alias list.\n", (unsigned int)v2, newAliasName);
          return;
        }
        do
          ++v10;
        while ( newAliasName[v10] );
        v14 = (unsigned int)v10;
        if ( s_createFxTool->missingSoundCount > 0 )
        {
          v15 = 8434624i64;
          do
          {
            v16 = I_strncmp(*(const char **)(&v13->inited + v15), newAliasName, v14);
            v13 = s_createFxTool;
            if ( !v16 )
              break;
            ++v9;
            v15 += 8i64;
          }
          while ( v9 < s_createFxTool->missingSoundCount );
        }
        missingSoundCount = v13->missingSoundCount;
        if ( v9 >= missingSoundCount )
        {
          if ( v14 + v13->missingSoundNext >= 0xFFF )
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144282F90);
            return;
          }
          if ( missingSoundCount >= 200 )
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144282FF0);
            return;
          }
          if ( v9 != missingSoundCount )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4769, ASSERT_TYPE_ASSERT, "(missingSoundIndex == s_createFxTool->missingSoundCount)", (const char *)&queryFormat, "missingSoundIndex == s_createFxTool->missingSoundCount") )
              __debugbreak();
            v13 = s_createFxTool;
          }
          missingSoundNext = v13->missingSoundNext;
          aliasName = &v13->missingSoundBuffer[missingSoundNext];
          Core_strcpy(aliasName, 4096 - missingSoundNext, newAliasName);
          v19 = s_createFxTool;
          aliasName[v14] = 0;
          v19->missingSoundNext += v14 + 1;
          ++v19->missingSoundCount;
          v19->missingSoundNames[v9] = aliasName;
          Com_PrintWarning(0, "[CreateFx] found missing sound %s while parsing map.\n", aliasName);
        }
        else
        {
          aliasName = (char *)v13->missingSoundNames[v9];
        }
      }
    }
    *v8 = outAlias;
    *v7 = aliasName;
    CG_CreateFx_UpdateEffectAlias(v2);
    CG_CreateFx_FreeSoundIndex(v2);
    CG_CreateFx_AllocSoundIndex(v2);
  }
}

/*
==============
CG_CreateFx_SetEffectType
==============
*/
void CG_CreateFx_SetEffectType(const int storageIndex, const CreateFxEffectType newEffectType)
{
  __int64 v2; 
  CreateFxEffectType *p_effectType; 
  int v6; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v6 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3776, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->scratchDataState ) ) + 0 ) )", "storageIndex doesn't index ARRAY_COUNT( s_createFxTool->scratchDataState )\n\t%i not in [0, %i)", storageIndex, v6) )
      __debugbreak();
  }
  p_effectType = &s_createFxTool->scratchDataState[v2].effectType;
  if ( *p_effectType != newEffectType )
  {
    CG_CreateFx_TransmuteEffectData(v2, newEffectType);
    *p_effectType = newEffectType;
    CG_CreateFx_UpdateEffectAlias(v2);
    CG_CreateFx_FreeSoundIndex(v2);
    CG_CreateFx_AllocSoundIndex(v2);
  }
}

/*
==============
CG_CreateFx_SetScratchEffectAngles
==============
*/
void CG_CreateFx_SetScratchEffectAngles(const int storageIndex, const vec3_t *newAngles)
{
  __int64 v2; 
  CreateFXDataUnion *v4; 
  CreateFxEffectType *p_effectType; 
  int v7; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v7 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3287, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v7) )
      __debugbreak();
  }
  v4 = &s_createFxTool->scratchData[v2];
  p_effectType = &s_createFxTool->scratchDataState[v2].effectType;
  if ( *p_effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3292, ASSERT_TYPE_ASSERT, "(effectState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectState.effectType != CreateFxEffectType::None") )
    __debugbreak();
  CG_CreateFx_SetEffectAngles(v4, *p_effectType, newAngles);
}

/*
==============
CG_CreateFx_SetScratchEffectOrigin
==============
*/
void CG_CreateFx_SetScratchEffectOrigin(const int storageIndex, const vec3_t *newOrigin)
{
  __int64 v2; 
  CreateFXDataUnion *v4; 
  CreateFxEffectType *p_effectType; 
  int v7; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v7 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3185, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v7) )
      __debugbreak();
  }
  v4 = &s_createFxTool->scratchData[v2];
  p_effectType = &s_createFxTool->scratchDataState[v2].effectType;
  if ( *p_effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3190, ASSERT_TYPE_ASSERT, "(effectState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectState.effectType != CreateFxEffectType::None") )
    __debugbreak();
  CG_CreateFx_SetEffectOrigin(v4, *p_effectType, newOrigin);
}

/*
==============
CG_CreateFx_SetupColors
==============
*/
void CG_CreateFx_SetupColors(void)
{
  Material *v0; 
  Material *v11; 

  v0 = Material_RegisterHandle("white", IMAGE_TRACK_HUD);
  __asm
  {
    vmovaps ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vmovups ymmword ptr cs:s_effectTypeColors.selectedColor, ymm0
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
  }
  s_effectTypeMaterials[0] = v0;
  __asm
  {
    vmovups xmmword ptr cs:s_effectTypeColors.defaultColor, xmm0
    vmovups xmm0, xmmword ptr cs:s_colorSelected
    vmovaps ymm1, cs:__ymm@3f8000003f3333333f8000003f3333333f8000003e4ccccd3f8000003e4ccccd
  }
  s_effectTypeMaterials[2] = Material_RegisterHandle("create_fx_waypoint_loop_sound", IMAGE_TRACK_HUD);
  __asm
  {
    vmovups xmmword ptr cs:s_effectTypeColors.selectedColor+60h, xmm0
    vmovups ymmword ptr cs:s_effectTypeColors.highlightedColor+60h, ymm1
    vmovups xmm0, xmmword ptr cs:s_colorSelected
    vmovaps ymm1, cs:__ymm@3f8000003f3333333f8000003f3333333f8000003e4ccccd3f8000003e4ccccd
  }
  s_effectTypeMaterials[5] = Material_RegisterHandle("create_fx_waypoint_reactive_ent", IMAGE_TRACK_HUD);
  __asm
  {
    vmovups xmmword ptr cs:s_effectTypeColors.selectedColor+0F0h, xmm0
    vmovups ymmword ptr cs:s_effectTypeColors.highlightedColor+0F0h, ymm1
    vmovups xmm0, xmmword ptr cs:s_colorSelected
    vmovaps ymm1, cs:__ymm@3f8000003f3333333f8000003f3333333f8000003e4ccccd3f8000003e4ccccd
  }
  s_effectTypeMaterials[4] = Material_RegisterHandle("create_fx_waypoint_interval_sound", IMAGE_TRACK_HUD);
  __asm
  {
    vmovups xmmword ptr cs:s_effectTypeColors.selectedColor+0C0h, xmm0
    vmovups ymmword ptr cs:s_effectTypeColors.highlightedColor+0C0h, ymm1
    vmovups xmm0, xmmword ptr cs:s_colorSelected
    vmovaps ymm1, cs:__ymm@3f8000003f8000003f8000003f3333333f8000003f8000003f8000003e4ccccd
  }
  s_effectTypeMaterials[3] = Material_RegisterHandle("create_fx_waypoint_exploder", IMAGE_TRACK_HUD);
  __asm
  {
    vmovups xmmword ptr cs:s_effectTypeColors.selectedColor+90h, xmm0
    vmovups ymmword ptr cs:s_effectTypeColors.highlightedColor+90h, ymm1
  }
  v11 = Material_RegisterHandle("create_fx_waypoint_one_shot_effect", IMAGE_TRACK_HUD);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_colorSelected
    vmovaps ymm1, cs:__ymm@3f8000003f8000003f3333333f3333333f8000003f8000003e4ccccd3e4ccccd
    vmovups xmmword ptr cs:s_effectTypeColors.selectedColor+30h, xmm0
    vmovups ymmword ptr cs:s_effectTypeColors.highlightedColor+30h, ymm1
  }
  s_effectTypeMaterials[1] = v11;
}

/*
==============
CG_CreateFx_StartEffect
==============
*/
void CG_CreateFx_StartEffect(const int storageIndex)
{
  CreateFxTool *v1; 
  __int64 v3; 
  __int64 v4; 
  bool *v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 

  v1 = s_createFxTool;
  v3 = storageIndex;
  v4 = storageIndex;
  v5 = &s_createFxTool->inited + v4 * 40;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v8 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1583, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v8) )
      __debugbreak();
    LODWORD(v9) = 0x4000;
    LODWORD(v7) = storageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1574, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
    v1 = s_createFxTool;
  }
  if ( v1->scratchDataState[v4].effectHandle )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1584, ASSERT_TYPE_ASSERT, "( !CG_CreateFx_IsEffectStarted( storageIndex ) )", "Start effect with CG_CreateFx_StartEffect before calling CG_CreateFX_StopFX") )
      __debugbreak();
    v1 = s_createFxTool;
  }
  if ( v1->scratchDataState[v4].effectType == 1 )
    *((_DWORD *)v5 + 1605692) = CG_CreateFX_PlayFXFromDef(&v1->scratchData[v3].oneShotFxDef.effect, &v1->scratchData[v3].oneShotFxDef.origin, &v1->scratchData[v3].oneShotFxDef.angles, v1->scratchData[v3].oneShotFxDef.delayMsec);
}

/*
==============
CG_CreateFx_StopAllEffects
==============
*/
void CG_CreateFx_StopAllEffects()
{
  CreateFxTool *v0; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  bool *v4; 
  int v5; 
  __int64 v6; 
  ParticleSystem *v7; 
  ParticleSystem *v8; 
  int v9; 
  __int64 v10; 
  ParticleSystem *v11; 
  ParticleSystem *v12; 
  __int16 v13; 
  int v14; 
  int *activeExploderIndices; 
  int *v16; 
  int activeExploderCount; 
  __int64 v18; 
  __int64 v19; 

  v0 = s_createFxTool;
  v1 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v2 = 7078100i64;
    do
    {
      v3 = *(int *)(&v0->inited + v2);
      if ( (unsigned int)v3 >= 0x4000 )
      {
        LODWORD(v19) = 0x4000;
        LODWORD(v18) = *(_DWORD *)(&v0->inited + v2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4599, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
        v0 = s_createFxTool;
      }
      v4 = &v0->inited + 40 * v3;
      switch ( *((_DWORD *)v4 + 1605686) )
      {
        case 1:
          goto LABEL_10;
        case 3:
          v9 = *((_DWORD *)v4 + 1605692);
          if ( v9 )
          {
            v10 = 0i64;
            if ( g_particleSystemsGeneration[v9 & 0xFFF].__all32 == v9 )
              v10 = v9 & 0xFFF;
            v11 = NULL;
            v12 = g_particleSystems[0][v10];
            if ( (unsigned __int64)v12 >= 0x1000 )
              v11 = v12;
            if ( v11 )
            {
              ParticleManager::KillSystem(g_particleManager, v11);
              v0 = s_createFxTool;
            }
          }
          *((_DWORD *)v4 + 1605692) = 0;
          if ( v0->activeExploderCount )
          {
            v13 = 0;
            v14 = 0;
            activeExploderIndices = v0->activeExploderIndices;
            v16 = v0->activeExploderIndices;
            do
            {
              if ( *v16 == (_DWORD)v3 )
                ++v13;
              else
                *activeExploderIndices++ = *v16;
              activeExploderCount = v0->activeExploderCount;
              ++v14;
              ++v16;
            }
            while ( v14 < activeExploderCount );
            v0->activeExploderCount = activeExploderCount - v13;
          }
          break;
        case 5:
LABEL_10:
          v5 = *((_DWORD *)v4 + 1605692);
          if ( v5 )
          {
            v6 = 0i64;
            if ( g_particleSystemsGeneration[v5 & 0xFFF].__all32 == v5 )
              v6 = v5 & 0xFFF;
            v7 = NULL;
            v8 = g_particleSystems[0][v6];
            if ( (unsigned __int64)v8 >= 0x1000 )
              v7 = v8;
            if ( v7 )
            {
              ParticleManager::KillSystem(g_particleManager, v7);
              v0 = s_createFxTool;
            }
          }
          *((_DWORD *)v4 + 1605692) = 0;
          break;
      }
      ++v1;
      v2 += 4i64;
    }
    while ( v1 < v0->usedEffectTotal );
  }
}

/*
==============
CG_CreateFx_StopEffect
==============
*/
void CG_CreateFx_StopEffect(const int storageIndex)
{
  __int64 v1; 
  bool *v2; 
  int v3; 
  __int64 v4; 
  ParticleSystem *v5; 
  ParticleSystem *v6; 
  int v7; 
  __int64 v8; 
  ParticleSystem *v9; 
  ParticleSystem *v10; 

  v1 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4599, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  v2 = &s_createFxTool->inited + 40 * v1;
  if ( *((_DWORD *)v2 + 1605686) == 1 )
  {
LABEL_7:
    v3 = *((_DWORD *)v2 + 1605692);
    if ( v3 )
    {
      v4 = 0i64;
      if ( g_particleSystemsGeneration[v3 & 0xFFF].__all32 == v3 )
        v4 = v3 & 0xFFF;
      v5 = NULL;
      v6 = g_particleSystems[0][v4];
      if ( (unsigned __int64)v6 >= 0x1000 )
        v5 = v6;
      if ( v5 )
        ParticleManager::KillSystem(g_particleManager, v5);
    }
    *((_DWORD *)v2 + 1605692) = 0;
    return;
  }
  if ( *((_DWORD *)v2 + 1605686) != 3 )
  {
    if ( *((_DWORD *)v2 + 1605686) != 5 )
      return;
    goto LABEL_7;
  }
  v7 = *((_DWORD *)v2 + 1605692);
  if ( v7 )
  {
    v8 = 0i64;
    if ( g_particleSystemsGeneration[v7 & 0xFFF].__all32 == v7 )
      v8 = v7 & 0xFFF;
    v9 = NULL;
    v10 = g_particleSystems[0][v8];
    if ( (unsigned __int64)v10 >= 0x1000 )
      v9 = v10;
    if ( v9 )
      ParticleManager::KillSystem(g_particleManager, v9);
  }
  *((_DWORD *)v2 + 1605692) = 0;
  CG_CreateFx_ClearActiveExploderIndex(v1);
}

/*
==============
CG_CreateFx_TransmuteEffectData
==============
*/
void CG_CreateFx_TransmuteEffectData(const int storageIndex, const CreateFxEffectType newEffectType)
{
  ParticleSystemDef *aliasList; 
  __int64 v9; 
  const char *name; 
  const char *v11; 
  __int64 v13; 
  CreateFxEffectType effectType; 
  SndAliasList *Alias; 
  __int64 v29; 

  aliasList = NULL;
  v9 = storageIndex;
  name = NULL;
  v11 = NULL;
  if ( newEffectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3471, ASSERT_TYPE_ASSERT, "(newEffectType != CreateFxEffectType::None)", (const char *)&queryFormat, "newEffectType != CreateFxEffectType::None") )
    __debugbreak();
  v13 = v9;
  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm6
    vmovaps [rsp+0B8h+var_38], xmm7
    vmovaps [rsp+0B8h+var_48], xmm8
    vmovaps [rsp+0B8h+var_58], xmm9
    vmovaps [rsp+0B8h+var_68], xmm10
    vmovaps [rsp+0B8h+var_78], xmm11
  }
  _RSI = &s_createFxTool->scratchData[v9];
  effectType = s_createFxTool->scratchDataState[v13].effectType;
  switch ( effectType )
  {
    case 0:
      __asm
      {
        vxorps  xmm6, xmm6, xmm6; jumptable 0000000141C33E24 case 0
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm11, xmm11, xmm11
      }
      break;
    case 1:
    case 3:
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]; jumptable 0000000141C33E24 cases 1,3
        vmovss  xmm7, dword ptr [rsi+4]
        vmovss  xmm8, dword ptr [rsi+8]
        vmovss  xmm9, dword ptr [rsi+0Ch]
        vmovss  xmm10, dword ptr [rsi+10h]
        vmovss  xmm11, dword ptr [rsi+14h]
      }
      name = _RSI->reactiveEntDef.effectSound.name;
      v11 = _RSI->oneShotFxDef.effectSound.name;
      aliasList = (ParticleSystemDef *)_RSI->oneShotFxDef.aliasList;
      break;
    case 2:
    case 4:
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]; jumptable 0000000141C33E24 cases 2,4
        vmovss  xmm7, dword ptr [rsi+4]
        vmovss  xmm8, dword ptr [rsi+8]
        vmovss  xmm9, dword ptr [rsi+0Ch]
        vmovss  xmm10, dword ptr [rsi+10h]
        vmovss  xmm11, dword ptr [rsi+14h]
      }
      v11 = _RSI->intervalSoundsDef.effectSound.name;
      aliasList = (ParticleSystemDef *)_RSI->oneShotFxDef.effect.particleSystemDef;
      break;
    case 5:
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]; jumptable 0000000141C33E24 case 5
        vmovss  xmm7, dword ptr [rsi+4]
        vmovss  xmm8, dword ptr [rsi+8]
        vmovss  xmm9, dword ptr [rsi+0Ch]
        vmovss  xmm10, dword ptr [rsi+10h]
        vmovss  xmm11, dword ptr [rsi+14h]
      }
      name = _RSI->intervalSoundsDef.effectSound.name;
      v11 = _RSI->reactiveEntDef.effectSound.name;
      aliasList = (ParticleSystemDef *)_RSI->oneShotFxDef.effectSound.name;
      break;
    default:
      LODWORD(v29) = effectType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3545, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_TransmuteEffectData: cannot copy data from unhandled effect type '%d'", v29) )
        __debugbreak();
      __asm
      {
        vmovss  xmm11, [rsp+0B8h+var_88]
        vmovss  xmm8, [rsp+0B8h+var_88]
        vmovss  xmm10, [rsp+0B8h+var_88]
        vmovss  xmm7, [rsp+0B8h+var_88]
        vmovss  xmm6, [rsp+0B8h+var_88]
        vmovss  xmm9, [rsp+0B8h+var_88]
      }
      break;
  }
  memset_0(_RSI, 0, sizeof(CreateFXDataUnion));
  if ( newEffectType == 1 )
  {
    __asm
    {
      vmovss  dword ptr [rsi], xmm6
      vmovss  dword ptr [rsi+4], xmm7
      vmovss  dword ptr [rsi+8], xmm8
      vmovss  dword ptr [rsi+0Ch], xmm9
      vmovss  dword ptr [rsi+10h], xmm10
      vmovss  dword ptr [rsi+14h], xmm11
    }
    _RSI->oneShotFxDef.delayMsec = -4000;
    goto LABEL_30;
  }
  if ( newEffectType != 2 )
  {
    if ( newEffectType != 3 )
    {
      if ( newEffectType == Menu )
      {
        __asm
        {
          vmovss  dword ptr [rsi], xmm6
          vmovss  dword ptr [rsi+4], xmm7
          vmovss  dword ptr [rsi+8], xmm8
          vmovss  dword ptr [rsi+0Ch], xmm9
          vmovss  dword ptr [rsi+10h], xmm10
          vmovss  dword ptr [rsi+14h], xmm11
        }
        _RSI->intervalSoundsDef.effectSound.name = v11;
        _RSI->oneShotFxDef.effect.particleSystemDef = aliasList;
        _RSI->intervalSoundsDef.delayMinMsec = 750;
        _RSI->intervalSoundsDef.delayMaxMsec = 2000;
      }
      else if ( newEffectType == 5 )
      {
        __asm
        {
          vmovss  dword ptr [rsi], xmm6
          vmovss  dword ptr [rsi+4], xmm7
          vmovss  dword ptr [rsi+8], xmm8
          vmovss  dword ptr [rsi+0Ch], xmm9
          vmovss  dword ptr [rsi+10h], xmm10
          vmovss  dword ptr [rsi+14h], xmm11
        }
        _RSI->intervalSoundsDef.effectSound.name = name;
        _RSI->oneShotFxDef.effect.particleSystemDef = (const ParticleSystemDef *)v11;
        _RSI->oneShotFxDef.effectSound.name = (const char *)aliasList;
        _RSI->reactiveEntDef.radius = 350.0;
      }
      else
      {
        LODWORD(v29) = newEffectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_TransmuteEffectData: cannot write data to unhandled effect type '%d'", v29) )
          __debugbreak();
      }
      goto LABEL_31;
    }
    __asm
    {
      vmovss  dword ptr [rsi], xmm6
      vmovss  dword ptr [rsi+4], xmm7
      vmovss  dword ptr [rsi+8], xmm8
      vmovss  dword ptr [rsi+0Ch], xmm9
      vmovss  dword ptr [rsi+10h], xmm10
      vmovss  dword ptr [rsi+14h], xmm11
    }
    _RSI->explodersDef.client.delayMsec = 0;
    _RSI->explodersDef.client.name = 0;
LABEL_30:
    _RSI->oneShotFxDef.aliasList = (SndAliasList *)aliasList;
    _RSI->oneShotFxDef.effectSound.name = v11;
    _RSI->oneShotFxDef.effect.particleSystemDef = (const ParticleSystemDef *)name;
    goto LABEL_31;
  }
  __asm
  {
    vmovss  dword ptr [rsi], xmm6
    vmovss  dword ptr [rsi+4], xmm7
    vmovss  dword ptr [rsi+8], xmm8
    vmovss  dword ptr [rsi+0Ch], xmm9
    vmovss  dword ptr [rsi+10h], xmm10
    vmovss  dword ptr [rsi+14h], xmm11
  }
  if ( aliasList )
    Alias = (SndAliasList *)aliasList;
  else
    Alias = SND_TryFindAlias(v11);
  if ( Alias && Alias->head && Com_IsSoundAliasLooping(Alias) )
  {
    _RSI->intervalSoundsDef.effectSound.name = v11;
    _RSI->oneShotFxDef.effect.particleSystemDef = aliasList;
  }
LABEL_31:
  __asm
  {
    vmovaps xmm11, [rsp+0B8h+var_78]
    vmovaps xmm10, [rsp+0B8h+var_68]
    vmovaps xmm9, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_38]
    vmovaps xmm6, [rsp+0B8h+var_28]
  }
}

/*
==============
CG_CreateFx_TriggerReactiveEntsNearCursor
==============
*/
void CG_CreateFx_TriggerReactiveEntsNearCursor()
{
  char v2; 
  float v6; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v8; 
  int v9; 
  unsigned int time; 
  __int64 v12; 
  __int64 v13; 
  bool *v14; 
  __int64 v15; 
  const SndAliasList *aliasList; 
  SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  __int64 v32; 
  FXRegisteredDef def; 
  vec3_t center; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  _RAX = s_createFxTool;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rax+240018h]
  }
  if ( !v2 )
  {
    __asm { vmovsd  xmm0, qword ptr [rax+24001Ch] }
    v6 = s_createFxTool->clipboard.cursorTrace.position.v[2];
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm6
      vmovsd  qword ptr [rsp+0A8h+center], xmm0
    }
    center.v[2] = v6;
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v8 = s_createFxTool;
    v9 = 0;
    __asm { vmovss  xmm6, cs:__real@43800000 }
    time = LocalClientGlobals->time;
    if ( s_createFxTool->usedEffectTotal > 0 )
    {
      v12 = 7078100i64;
      do
      {
        v13 = *(int *)(&v8->inited + v12);
        v14 = &v8->inited + 40 * v13;
        if ( *((_DWORD *)v14 + 1605686) == 5 )
        {
          v15 = (__int64)&v8->scratchData[v13];
          if ( time >= *((_DWORD *)v14 + 1605693) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0A8h+center]
              vsubss  xmm3, xmm0, dword ptr [rbx]
              vmovss  xmm1, dword ptr [rsp+0A8h+center+4]
              vmovss  xmm0, dword ptr [rsp+0A8h+center+8]
              vsubss  xmm4, xmm0, dword ptr [rbx+8]
              vsubss  xmm2, xmm1, dword ptr [rbx+4]
              vaddss  xmm5, xmm6, dword ptr [rbx+30h]
              vmulss  xmm0, xmm3, xmm3
              vmulss  xmm2, xmm2, xmm2
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm1
              vmulss  xmm0, xmm5, xmm5
              vcomiss xmm4, xmm0
            }
            if ( time <= *((_DWORD *)v14 + 1605693) )
            {
              aliasList = v8->scratchData[v13].reactiveEntDef.aliasList;
              if ( aliasList || (Alias = SND_TryFindAlias(v8->scratchData[v13].reactiveEntDef.effectSound.name), v8 = s_createFxTool, (aliasList = Alias) != NULL) )
              {
                SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
                CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)v15, aliasList);
                v8 = s_createFxTool;
              }
              v32 = *(_QWORD *)(v15 + 24);
              if ( v32 )
              {
                def.m_particleSystemDef = *(const ParticleSystemDef **)(v15 + 24);
                AnglesToAxis((const vec3_t *)(v15 + 12), &axis);
                LODWORD(v32) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, 0, (const vec3_t *)v15, &axis);
                v8 = s_createFxTool;
              }
              *((_DWORD *)v14 + 1605692) = v32;
              *((_DWORD *)v14 + 1605693) = time + 3000;
            }
          }
        }
        ++v9;
        v12 += 4i64;
      }
      while ( v9 < v8->usedEffectTotal );
    }
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 0, 60);
    __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  }
}

/*
==============
CG_CreateFx_TriggerSelectedExploders
==============
*/
void CG_CreateFx_TriggerSelectedExploders(const bool restartExploders)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  ClientReactiveEntDef *v6; 
  __int64 v7; 
  char *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  char *v13; 
  __int64 v14; 
  char *v15; 
  char *v16; 
  bool v17; 
  signed __int64 v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  ClientReactiveEntDef *v22; 
  __int64 v23; 
  char *v24; 
  __int64 v25; 
  __int64 v26; 
  ParticleSystemHandle *p_effectHandle; 
  ParticleSystemHandle v28; 
  __int64 v29; 
  ParticleSystem *v30; 
  ParticleSystem *v31; 
  CreateFxTool *v32; 
  __int16 v33; 
  int v34; 
  int *activeExploderIndices; 
  int *v36; 
  int activeExploderCount; 
  cg_t *LocalClientGlobals; 
  __int64 v40; 
  char v41[8192]; 
  unsigned __int64 v42; 

  HIDWORD(v40) = -1;
  v1 = 0i64;
  v2 = 0i64;
  v42 = 0i64;
  v3 = 0;
  if ( s_createFxTool->selectedEffectTotal > 0 )
  {
    v4 = 7209180i64;
    do
    {
      v5 = *(int *)(&s_createFxTool->inited + v4);
      if ( s_createFxTool->scratchDataState[v5].effectType == 3 )
      {
        v6 = &s_createFxTool->scratchData[v5].reactiveEntDef + 1;
        v7 = 4 * v2;
        v8 = v41;
        v9 = (__int64)(4 * v2) >> 2;
        v10 = v9;
        while ( v10 > 0 )
        {
          v11 = v10 >> 1;
          if ( *(_DWORD *)&v8[4 * (v10 >> 1)] >= SLODWORD(v6->origin.v[0]) )
          {
            v10 >>= 1;
          }
          else
          {
            v8 += 4 * v11 + 4;
            v10 += -1 - v11;
          }
        }
        v12 = &v41[v7];
        if ( v8 == &v41[v7] )
          goto LABEL_13;
        if ( SLODWORD(v6->origin.v[0]) < *(_DWORD *)v8 )
          v8 = &v41[v7];
        if ( v8 == v12 )
        {
LABEL_13:
          v13 = v41;
          while ( v9 > 0 )
          {
            v14 = v9 >> 1;
            if ( *(_DWORD *)&v13[4 * (v9 >> 1)] >= SLODWORD(v6->origin.v[0]) )
            {
              v9 >>= 1;
            }
            else
            {
              v13 += 4 * v14 + 4;
              v9 += -1 - v14;
            }
          }
          if ( v13 == v12 || SLODWORD(v6->origin.v[0]) < *(_DWORD *)v13 )
          {
            if ( v2 == 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
              __debugbreak();
            if ( (v13 < v41 || v13 > &v41[4 * v2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
              __debugbreak();
            if ( ((v13 - v41) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
              __debugbreak();
            if ( v6 >= (ClientReactiveEntDef *)v13 && v6 < (ClientReactiveEntDef *)&v41[4 * v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
              __debugbreak();
            v15 = &v41[4 * v2];
            if ( v13 != v15 )
            {
              v16 = &v41[4 * v2 + 4];
              if ( v13 == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                __debugbreak();
              if ( v15 == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                __debugbreak();
              v17 = v15 <= v13;
              if ( v15 < v13 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                  __debugbreak();
                v17 = v15 <= v13;
              }
              if ( !v17 )
              {
                v18 = v16 - v15;
                do
                {
                  v15 -= 4;
                  *(_DWORD *)&v15[v18] = *(_DWORD *)v15;
                }
                while ( v15 > v13 );
                v2 = v42;
              }
            }
            v42 = v2 + 1;
            *(float *)v13 = v6->origin.v[0];
            v2 = v42;
          }
        }
      }
      ++v3;
      v4 += 4i64;
    }
    while ( v3 < s_createFxTool->selectedEffectTotal );
    v1 = 0i64;
    if ( v2 )
    {
      v19 = 0;
      if ( s_createFxTool->usedEffectTotal > 0 )
      {
        v20 = 7078100i64;
        do
        {
          v21 = *(int *)(&s_createFxTool->inited + v20);
          if ( s_createFxTool->scratchDataState[v21].effectType == 3 )
          {
            v22 = &s_createFxTool->scratchData[v21].reactiveEntDef + 1;
            v23 = 4 * v2;
            v24 = v41;
            v25 = (__int64)(4 * v2) >> 2;
            while ( v25 > 0 )
            {
              v26 = v25 >> 1;
              if ( *(_DWORD *)&v24[4 * (v25 >> 1)] >= SLODWORD(v22->origin.v[0]) )
              {
                v25 >>= 1;
              }
              else
              {
                v24 += 4 * v26 + 4;
                v25 += -1 - v26;
              }
            }
            if ( v24 != &v41[v23] )
            {
              if ( SLODWORD(v22->origin.v[0]) < *(_DWORD *)v24 )
                v24 = &v41[v23];
              if ( v24 != &v41[v23] )
              {
                p_effectHandle = &s_createFxTool->scratchDataState[v21].effectHandle;
                v28 = *p_effectHandle;
                if ( *p_effectHandle )
                {
                  v29 = 0i64;
                  if ( g_particleSystemsGeneration[v28 & 0xFFF].__all32 == v28 )
                    v29 = v28 & 0xFFF;
                  v30 = g_particleSystems[0][v29];
                  v31 = NULL;
                  if ( (unsigned __int64)v30 >= 0x1000 )
                    v31 = v30;
                  if ( v31 )
                    ParticleManager::KillSystem(g_particleManager, v31);
                }
                *p_effectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
                v32 = s_createFxTool;
                if ( s_createFxTool->activeExploderCount )
                {
                  v33 = 0;
                  v34 = 0;
                  activeExploderIndices = s_createFxTool->activeExploderIndices;
                  v36 = s_createFxTool->activeExploderIndices;
                  do
                  {
                    if ( *v36 == (_DWORD)v21 )
                      ++v33;
                    else
                      *activeExploderIndices++ = *v36;
                    ++v34;
                    ++v36;
                    activeExploderCount = v32->activeExploderCount;
                  }
                  while ( v34 < activeExploderCount );
                  v32->activeExploderCount = activeExploderCount - v33;
                }
                if ( restartExploders )
                {
                  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
                  CG_CreateFx_ActivateIndividualExploder(v21, LocalClientGlobals->time);
                }
              }
            }
          }
          ++v19;
          v20 += 4i64;
        }
        while ( v19 < s_createFxTool->usedEffectTotal );
      }
    }
  }
  if ( v2 )
  {
    do
    {
      if ( v1 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v1;
    }
    while ( v1 < v2 );
  }
}

/*
==============
CG_CreateFx_Undo
==============
*/
void CG_CreateFx_Undo()
{
  CreateFxTool *v0; 
  unsigned int m_top; 
  unsigned __int16 v2; 
  __int64 v3; 
  CreateFxTool *v4; 
  __int64 m_top_low; 
  CreateFxCommand *v6; 
  CreateFxTool *v7; 
  CreateFxTool *v8; 

  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
  }
  v0 = s_createFxTool;
  if ( s_createFxTool->undoCount.m_count )
  {
    --s_createFxTool->undoCount.m_top;
    m_top = v0->undoCount.m_top;
    --v0->undoCount.m_count;
    v2 = v0->undoCount.pool[m_top & 0x3FFF];
    if ( v2 )
    {
      v3 = v2;
      do
      {
        v4 = s_createFxTool;
        if ( !s_createFxTool->undoBuffer.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        --v4->undoBuffer.m_top;
        m_top_low = LOWORD(v4->undoBuffer.m_top);
        --v4->undoBuffer.m_count;
        v6 = v4->undoBuffer.pool[m_top_low];
        v6->Undo(v6);
        v7 = s_createFxTool;
        if ( s_createFxTool->redoBuffer.m_count == 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 502, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
          __debugbreak();
        v7->redoBuffer.pool[LOWORD(v7->redoBuffer.m_top)] = v6;
        ++v7->redoBuffer.m_top;
        ++v7->redoBuffer.m_count;
        --v3;
      }
      while ( v3 );
    }
    v8 = s_createFxTool;
    if ( s_createFxTool->redoCount.m_count == 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 502, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
      __debugbreak();
    v8->redoCount.pool[v8->redoCount.m_top++ & 0x3FFF] = v2;
    ++v8->redoCount.m_count;
  }
}

/*
==============
CG_CreateFx_UpdateCursor
==============
*/
void CG_CreateFx_UpdateCursor(LocalClientNum_t localClientNum)
{
  char v14; 
  char v15; 
  vec3_t outOrg; 
  vec3_t end; 
  vec3_t v35; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    if ( s_createFxTool )
    {
      if ( s_createFxTool->enabled )
      {
        _RDI = CG_GetLocalClientGlobals(localClientNum);
        RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+6948h]
          vmovss  xmm4, dword ptr [rdi+694Ch]
          vmovss  xmm3, cs:__real@443b8000
          vmulss  xmm0, xmm3, dword ptr [rdi+6944h]
          vaddss  xmm1, xmm0, dword ptr [rsp+0A8h+outOrg]
          vmovss  dword ptr [rsp+0A8h+end], xmm1
          vmulss  xmm2, xmm3, xmm2
          vaddss  xmm0, xmm2, dword ptr [rsp+0A8h+outOrg+4]
          vmulss  xmm1, xmm3, xmm4
          vaddss  xmm2, xmm1, dword ptr [rsp+0A8h+outOrg+8]
          vmovss  dword ptr [rsp+0A8h+end+8], xmm2
          vmovss  dword ptr [rsp+0A8h+end+4], xmm0
        }
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &s_createFxTool->clipboard.cursorTrace, &outOrg, &end, &bounds_origin, _RDI->predictedPlayerState.clientNum, 0, 41969969, 0, NULL, All);
        _RAX = s_createFxTool;
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vcomiss xmm0, dword ptr [rax+240018h]
        }
        if ( !(v14 | v15) )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rax+240080h]; angle2
            vmovss  xmm0, dword ptr [rdi+1E4h]; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          _RAX = s_createFxTool;
          __asm { vmovss  dword ptr [rax+240094h], xmm0 }
          _RCX = &_RAX->clipboard.cursorTrace.position;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx]
            vsubss  xmm1, xmm0, dword ptr [rax+240070h]
            vmovss  dword ptr [rax+240088h], xmm1
            vmovss  xmm2, dword ptr [rcx+4]
            vsubss  xmm0, xmm2, dword ptr [rax+240074h]
            vmovss  dword ptr [rax+24008Ch], xmm0
            vmovss  xmm1, dword ptr [rcx+8]
            vsubss  xmm2, xmm1, dword ptr [rax+240078h]
            vmovss  dword ptr [rax+240090h], xmm2
          }
          if ( _RAX->clipboard.effectTotal <= 0 )
          {
            __asm
            {
              vmovss  xmm3, cs:__real@41200000
              vmulss  xmm0, xmm3, dword ptr [rax+240028h]
              vaddss  xmm1, xmm0, dword ptr [rcx]
              vmulss  xmm0, xmm3, dword ptr [rax+24002Ch]
              vmovss  dword ptr [rsp+0A8h+var_28], xmm1
              vaddss  xmm1, xmm0, dword ptr [rcx+4]
              vmulss  xmm0, xmm3, dword ptr [rax+240030h]
              vmovss  dword ptr [rsp+0A8h+var_28+4], xmm1
              vaddss  xmm1, xmm0, dword ptr [rcx+8]
              vmovss  dword ptr [rsp+0A8h+var_28+8], xmm1
            }
            CL_AddDebugLine(_RCX, &v35, &colorYellow, 0, 0, 0);
          }
        }
      }
    }
  }
}

/*
==============
CG_CreateFx_UpdateEffectAlias
==============
*/
void CG_CreateFx_UpdateEffectAlias(const int storageIndex)
{
  const char *v1; 
  bool *v2; 
  bool *v3; 
  const char **v4; 
  const char *v5; 
  const char *AliasForAsset; 
  const char **v7; 

  if ( s_createFxTool->imported )
  {
    v1 = "(null)";
    v2 = &s_createFxTool->inited + 40 * storageIndex;
    v3 = &s_createFxTool->inited + 104 * storageIndex;
    if ( *((_DWORD *)v2 + 1605686) == 1 )
    {
      v7 = (const char **)*((_QWORD *)v3 + 589854);
      if ( v7 )
      {
        v5 = *v7;
        goto LABEL_20;
      }
      goto LABEL_22;
    }
    if ( *((_DWORD *)v2 + 1605686) != 2 )
    {
      if ( *((_DWORD *)v2 + 1605686) == 3 )
      {
        v4 = (const char **)*((_QWORD *)v3 + 589854);
        if ( v4 )
        {
LABEL_10:
          v5 = *v4;
LABEL_20:
          AliasForAsset = CreateFxAssetPalette::getAliasForAsset(&s_createFX_paletteFX, v5);
LABEL_21:
          v1 = AliasForAsset;
          goto LABEL_22;
        }
        AliasForAsset = (const char *)*((_QWORD *)v3 + 589855);
        if ( AliasForAsset )
          goto LABEL_21;
LABEL_22:
        *((_QWORD *)v2 + 802844) = v1;
        return;
      }
      if ( *((_DWORD *)v2 + 1605686) != 4 )
      {
        if ( *((_DWORD *)v2 + 1605686) != 5 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3433, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_FindAliasStringForDef: unhandled effect type '%d'", *((_DWORD *)v2 + 1605686)) )
            __debugbreak();
          goto LABEL_22;
        }
        v4 = (const char **)*((_QWORD *)v3 + 589853);
        if ( v4 )
          goto LABEL_10;
        AliasForAsset = (const char *)*((_QWORD *)v3 + 589854);
        if ( AliasForAsset )
          goto LABEL_21;
        goto LABEL_22;
      }
    }
    AliasForAsset = (const char *)*((_QWORD *)v3 + 589853);
    if ( AliasForAsset )
      goto LABEL_21;
    goto LABEL_22;
  }
}

/*
==============
CG_CreateFx_UpdateExportProgress
==============
*/
void CG_CreateFx_UpdateExportProgress()
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v1; 
  int time; 
  const char *string; 
  const char *v4; 
  cg_t *v5; 
  const dvar_t *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  CreateFxTool *v15; 
  bool lastExportAutosave; 
  const char *v17; 
  __int64 exportLayerStackCount; 
  const CreateFxMapLayerDef *v19; 
  __int64 v20; 
  __int64 v21; 

  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v1 = DVARSTR_launcher_movefile_success;
  time = LocalClientGlobals->time;
  if ( !DVARSTR_launcher_movefile_success && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "launcher_movefile_success") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  string = v1->current.string;
  if ( string && *string )
  {
    Com_Printf_NoFilter("[CreateFx] Saved %s\n", string);
    v4 = j_va("Saved %s", string);
    v5 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    _RDX = s_createFxTool;
    s_createFxTool->statusMessageTimeout = v5->time + 3000;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdx+80A3ACh], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdx+80A3B0h], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdx+80A3B4h], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdx+80A3B8h], xmm1
    }
    Core_strcpy(_RDX->statusMessageBuffer, 0x100ui64, v4);
    CG_CreateFx_ResetExportStatus();
  }
  else
  {
    v11 = DVARSTR_launcher_movefile_fail;
    if ( !DVARSTR_launcher_movefile_fail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "launcher_movefile_fail") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.string;
    if ( v12 && *v12 )
    {
      Com_Printf_NoFilter("[CreateFx] Save Failed %s\n", v12);
      v13 = j_va("ERROR:(%s): see launcher output for more details", v12);
      CG_CreateFx_PrintMessageInternal(v13, &colorRed);
      CG_CreateFx_ResetExportStatus();
    }
    else if ( s_createFxTool->lastExportInProgress )
    {
      if ( s_createFxTool->lastExportTime >= time - 20000 )
      {
        if ( s_createFxTool->lastExportAutosave )
          CG_CreateFx_PrintMessageInternal("Auto-Saving...", &colorYellow);
        else
          CG_CreateFx_PrintMessageInternal("Saving...", &colorYellow);
      }
      else
      {
        v14 = "Save";
        if ( s_createFxTool->lastExportAutosave )
          v14 = "Autosave";
        Com_Printf_NoFilter("[CreateFx] %s timed out\n", v14);
        CG_CreateFx_PrintMessageInternal("NxLauncher Missing", &colorRed);
        v15 = s_createFxTool;
        s_createFxTool->lastExportTime = 0;
        *(_WORD *)&v15->lastExportAutosave = 0;
      }
    }
    else if ( s_createFxTool->exportLayerStackCount > 0 )
    {
      lastExportAutosave = s_createFxTool->lastExportAutosave;
      v17 = (char *)&queryFormat.fmt + 3;
      if ( lastExportAutosave )
        v17 = "(autosave)";
      Com_Printf(0, "[CreateFx] exportLayerStack %s\n", v17);
      exportLayerStackCount = s_createFxTool->exportLayerStackCount;
      if ( (int)exportLayerStackCount - 1 >= (unsigned int)exportLayerStackCount )
      {
        LODWORD(v21) = s_createFxTool->exportLayerStackCount;
        LODWORD(v20) = exportLayerStackCount - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5031, ASSERT_TYPE_ASSERT, "(unsigned)( exportLayerStackIndex ) < (unsigned)( s_createFxTool->exportLayerStackCount )", "exportLayerStackIndex doesn't index s_createFxTool->exportLayerStackCount\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v19 = (const CreateFxMapLayerDef *)*((_QWORD *)&s_createFxTool->snapToNormal + exportLayerStackCount);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5033, ASSERT_TYPE_ASSERT, "(layer)", (const char *)&queryFormat, "layer") )
        __debugbreak();
      if ( !v19->filtered )
        CG_CreateFx_ExportLayer(v19, lastExportAutosave);
      --s_createFxTool->exportLayerStackCount;
    }
  }
}

/*
==============
CG_CreateFx_UpdateLoopSound
==============
*/
void CG_CreateFx_UpdateLoopSound(const int soundIndex, const SndAliasList *const aliasList, const vec3_t *origin)
{
  int v5; 
  char v11; 
  char v12; 
  CgSoundSystem *SoundSystem; 

  v5 = soundIndex + 2049;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( soundIndex + 2049 >= 3329 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2671, ASSERT_TYPE_ASSERT, "(soundClientEntIndex < ( ( ( ( 2048 ) ) ) + ( 1 ) ) + ( 1024 ) + ( 128 ) + ( 128 ))", (const char *)&queryFormat, "soundClientEntIndex < FIRST_CLIENT_ENT_SOUND + MAX_CLIENT_ENT_SOUNDS + MAX_CLIENT_ENT_REACTIVE_SOUNDS + MAX_CLIENT_ENT_INTERVAL_SOUNDS") )
    __debugbreak();
  if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2673, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  if ( !aliasList->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2674, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
    __debugbreak();
  _RAX = aliasList->head;
  __asm { vmovss  xmm6, dword ptr [rax+68h] }
  *(double *)&_XMM0 = SND_DistSqToNearestListener(origin);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vcomiss xmm0, xmm1
  }
  if ( v11 | v12 )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
    CgSoundSystem::PlaySoundAliasAsync(SoundSystem, v5, origin, aliasList);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
CG_CreateFx_UpdatePendingExploders
==============
*/
void CG_CreateFx_UpdatePendingExploders(const unsigned int timeNow)
{
  __int64 v8; 
  unsigned int startTime; 
  __int64 exploderIndex; 
  bool *v14; 
  const ParticleSystemDef *particleSystemDef; 
  const SndAliasList *v17; 
  SndAliasList *Alias; 
  bool v19; 
  CgSoundSystem *SoundSystem; 
  unsigned __int16 activeExploderCount; 
  const char *v38; 
  tmat33_t<vec3_t> *v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  _R9 = s_createFxTool;
  v8 = s_createFxTool->pendingExploderCount - 1i64;
  if ( v8 >= 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovss  xmm8, cs:__real@3a83126f
      vmovaps xmmword ptr [r11-38h], xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    while ( 1 )
    {
      startTime = _R9->pendingExploders[v8].startTime;
      if ( startTime < timeNow )
        break;
LABEL_22:
      if ( --v8 < 0 )
      {
        __asm
        {
          vmovaps xmm8, [rsp+0F8h+var_58]
          vmovaps xmm7, [rsp+0F8h+var_48]
          vmovaps xmm6, [rsp+0F8h+var_38]
        }
        return;
      }
    }
    exploderIndex = _R9->pendingExploders[v8].exploderIndex;
    if ( _R9->scratchDataState[exploderIndex].effectType != 3 )
    {
LABEL_21:
      _R9->pendingExploders[v8] = *(PendingClientExploder *)&_R9->activeExploderIndices[2 * _R9->pendingExploderCount-- + 1023];
      goto LABEL_22;
    }
    _RDI = (int)exploderIndex;
    v14 = &_R9->inited + 40 * (int)exploderIndex;
    _RSI = (__int64)&_R9->scratchData[_RDI];
    particleSystemDef = _R9->scratchData[_RDI].oneShotFxDef.effect.particleSystemDef;
    if ( particleSystemDef )
    {
      def.m_particleSystemDef = _R9->scratchData[_RDI].oneShotFxDef.effect.particleSystemDef;
      AnglesToAxis(&_R9->scratchData[_RDI].oneShotFxDef.angles, &axis);
      LODWORD(particleSystemDef) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, startTime, (const vec3_t *)_RSI, &axis);
      _R9 = s_createFxTool;
    }
    *((_DWORD *)v14 + 1605692) = (_DWORD)particleSystemDef;
    v17 = *(const SndAliasList **)(_RSI + 48);
    if ( v17 || (Alias = SND_TryFindAlias(*(const char **)(_RSI + 40)), _R9 = s_createFxTool, v17 = Alias, v19 = Alias == NULL, Alias) )
    {
      v19 = v17->head == NULL;
      if ( v17->head )
      {
        if ( Com_IsSoundAliasLooping(v17) )
        {
          _R9 = s_createFxTool;
          activeExploderCount = s_createFxTool->activeExploderCount;
          if ( activeExploderCount < 0x400u )
          {
            s_createFxTool->activeExploderIndices[activeExploderCount] = exploderIndex;
            v19 = _R9->activeExploderCount++ == 0xFFFF;
            goto LABEL_16;
          }
          Com_PrintWarning(0, "WARNING: too many active exploders!\n");
        }
        else
        {
          SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
          CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)_RSI, v17);
        }
        _R9 = s_createFxTool;
      }
    }
LABEL_16:
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+r9+480120h]
      vucomiss xmm6, xmm7
    }
    if ( !v19 )
    {
      __asm { vucomiss xmm7, dword ptr [rdi+r9+480124h] }
      if ( !v19 )
        goto LABEL_20;
    }
    if ( _R9->scratchData[_RDI].explodersDef.server.earthquakeName || _R9->scratchData[_RDI].explodersDef.server.rumbleName )
    {
LABEL_20:
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+r9+480124h]
        vmovss  xmm3, dword ptr [rsi+8]
        vmovss  xmm2, dword ptr [rsi+4]
        vmovss  xmm1, dword ptr [rsi]
      }
      LODWORD(v48) = _R9->scratchData[_RDI].explodersDef.server.rumbleName;
      LODWORD(v47) = _R9->scratchData[_RDI].explodersDef.server.earthquakeName;
      LODWORD(v46) = _R9->scratchData[_RDI].explodersDef.server.damageEnvironmentOnly;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+18h]
        vmulss  xmm4, xmm0, xmm8
      }
      LODWORD(v45) = _R9->scratchData[_RDI].explodersDef.server.damageDoOcclusionTraces;
      __asm
      {
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0F8h+var_C8], xmm5
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm0, xmm6, xmm6
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0F8h+var_D0], xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
        vmovsd  [rsp+0F8h+var_D8], xmm4
      }
      v38 = j_va("cfx_exploder %g %g %g %f %f %f %d %d %u %u", _RDX, _R8, _R9, v42, v43, v44, v45, v46, v47, v48);
      Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v38);
      _R9 = s_createFxTool;
    }
    goto LABEL_21;
  }
}

/*
==============
CG_CreateFx_UpdateWorldMove
==============
*/
void CG_CreateFx_UpdateWorldMove()
{
  bool editCameraRelative; 
  char v9; 
  CreateFxTool *v13; 
  int v14; 
  __int64 v16; 
  __int64 v19; 
  CreateFxEffectType effectType; 
  __int64 v28; 
  __int64 v29; 
  float v31; 
  vec3_t outValue; 

  if ( s_createFxTool->editRotation )
  {
    CG_CreateFx_WorldMoveRotation();
  }
  else
  {
    editCameraRelative = s_createFxTool->editCameraRelative;
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
      vunpcklps xmm0, xmm6, xmm6
      vmovaps [rsp+0F8h+var_68], xmm9
      vmovss  [rsp+0F8h+var_A8], xmm6
      vmovaps [rsp+0F8h+var_78], xmm10
      vmovsd  qword ptr [rsp+0F8h+outValue], xmm0
    }
    outValue.v[2] = v31;
    __asm { vmovaps [rsp+0F8h+var_88], xmm11 }
    CG_CreateFx_EditVec3Update(LOCAL_CLIENT_0, editCameraRelative, &outValue);
    __asm
    {
      vmovss  xmm11, dword ptr [rsp+0F8h+outValue]
      vucomiss xmm11, xmm6
      vmovss  xmm9, dword ptr [rsp+0F8h+outValue+8]
      vmovss  xmm10, dword ptr [rsp+0F8h+outValue+4]
    }
    if ( !v9 )
      goto LABEL_38;
    __asm { vucomiss xmm10, xmm6 }
    if ( !v9 )
      goto LABEL_38;
    __asm { vucomiss xmm9, xmm6 }
    if ( !v9 )
    {
LABEL_38:
      v13 = s_createFxTool;
      v14 = 0;
      if ( s_createFxTool->selectedEffectTotal > 0 )
      {
        __asm { vmovss  xmm6, [rsp+0F8h+var_B8] }
        v16 = 7209180i64;
        __asm
        {
          vmovaps [rsp+0F8h+var_48], xmm7
          vmovss  xmm7, [rsp+0F8h+var_B8]
          vmovaps [rsp+0F8h+var_58], xmm8
          vmovss  xmm8, [rsp+0F8h+var_B8]
        }
        do
        {
          v19 = *(int *)(&v13->inited + v16);
          if ( (unsigned int)v19 >= 0x4000 )
          {
            LODWORD(v29) = 0x4000;
            LODWORD(v28) = *(_DWORD *)(&v13->inited + v16);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6879, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
            v13 = s_createFxTool;
          }
          _RBX = (__int64)&v13->scratchData[v19];
          effectType = v13->scratchDataState[v19].effectType;
          if ( effectType == 1 || v13->scratchDataState[v19].effectType == 2 || v13->scratchDataState[v19].effectType == 3 || v13->scratchDataState[v19].effectType == Menu || v13->scratchDataState[v19].effectType == 5 )
          {
            if ( (CreateFxTool *)((char *)v13 + 104 * v19) != (CreateFxTool *)-4718800i64 )
            {
              __asm
              {
                vmovss  xmm7, dword ptr [rbx]
                vmovss  xmm6, dword ptr [rbx+4]
                vmovss  xmm8, dword ptr [rbx+8]
              }
            }
          }
          else
          {
            LODWORD(v28) = v13->scratchDataState[v19].effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v28) )
              __debugbreak();
          }
          __asm
          {
            vaddss  xmm7, xmm7, xmm11
            vaddss  xmm6, xmm6, xmm10
            vaddss  xmm8, xmm8, xmm9
          }
          if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
          {
            if ( _RBX )
            {
              __asm
              {
                vmovss  dword ptr [rbx], xmm7
                vmovss  dword ptr [rbx+4], xmm6
                vmovss  dword ptr [rbx+8], xmm8
              }
            }
          }
          else
          {
            LODWORD(v28) = effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v28) )
              __debugbreak();
          }
          if ( (unsigned int)v19 >= 0x4000 )
          {
            LODWORD(v29) = 0x4000;
            LODWORD(v28) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          CG_CreateFx_StopEffect(v19);
          CG_CreateFx_StartEffect(v19);
          v13 = s_createFxTool;
          ++v14;
          v16 += 4i64;
        }
        while ( v14 < s_createFxTool->selectedEffectTotal );
        __asm
        {
          vmovaps xmm8, [rsp+0F8h+var_58]
          vmovaps xmm7, [rsp+0F8h+var_48]
        }
      }
    }
    __asm
    {
      vmovaps xmm9, [rsp+0F8h+var_68]
      vmovaps xmm6, [rsp+0F8h+var_38]
      vmovaps xmm10, [rsp+0F8h+var_78]
      vmovaps xmm11, [rsp+0F8h+var_88]
    }
  }
}

/*
==============
CG_CreateFx_Vec3FixSubEpsilonValues
==============
*/
void CG_CreateFx_Vec3FixSubEpsilonValues(vec3_t *vec)
{
  unsigned int v5; 
  bool v7; 
  bool v8; 
  bool v11; 
  bool v12; 
  bool v13; 
  __int64 v20; 
  __int64 v21; 
  char v25; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+78h+var_28], xmm7
  }
  v5 = 0;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm8, cs:__real@3a83126f
  }
  v7 = 1;
  v8 = 0;
  _RDI = vec;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    if ( !v7 )
    {
      LODWORD(v21) = 3;
      LODWORD(v20) = v5;
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21);
      v8 = !v11;
      if ( v11 )
        __debugbreak();
    }
    __asm { vucomiss xmm7, dword ptr [rdi] }
    if ( !v8 )
    {
      v12 = v5 < 3;
      if ( v5 >= 3 )
      {
        LODWORD(v21) = 3;
        LODWORD(v20) = v5;
        v13 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21);
        v12 = 0;
        if ( v13 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm8
      }
      if ( v12 )
      {
        if ( v5 >= 3 )
        {
          LODWORD(v21) = 3;
          LODWORD(v20) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        _RDI->v[0] = 0.0;
      }
    }
    ++v5;
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v7 = v5 < 3;
    v8 = v5 == 3;
  }
  while ( (int)v5 < 3 );
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v25;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
CG_CreateFx_WorldMoveRotation
==============
*/
void CG_CreateFx_WorldMoveRotation(__int64 a1, double a2)
{
  CreateFxTool *v5; 
  bool v6; 
  unsigned int v11; 
  CreateFxTool *v12; 
  int v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  vec3_t outValue; 
  vec3_t outCenter; 
  vec3_t angles; 
  tmat33_t<vec3_t> inAxis; 
  vec3_t pivotPoint; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+0F0h+var_10], xmm6
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+57h+outCenter+8], xmm6
  }
  outValue.v[2] = outCenter.v[2];
  __asm
  {
    vunpcklps xmm0, xmm6, xmm6
    vmovsd  qword ptr [rbp+57h+outValue], xmm0
  }
  if ( s_createFxTool->snapToAngleIndex )
    CG_CreateFx_GetSnapMovement(LOCAL_CLIENT_0, &outValue);
  else
    CG_CreateFx_EditVec3Update(LOCAL_CLIENT_0, 0, &outValue);
  v5 = s_createFxTool;
  v6 = s_createFxTool->selectedEffectTotal == 1;
  if ( s_createFxTool->selectedEffectTotal > 1 )
  {
    CG_CreateFx_CalculateSelectionCenter(&outCenter, a2);
    AxisClear(&axis);
    FX_PlayOrientedEffect(LOCAL_CLIENT_0, &s_createFxTool->anglesModelHandle, 0, &outCenter, &axis);
    v5 = s_createFxTool;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+57h+outValue]
    vucomiss xmm2, xmm6
    vmovss  xmm1, dword ptr [rbp+57h+outValue+8]
    vmovss  xmm0, dword ptr [rbp+57h+outValue+4]
  }
  if ( !v6 )
    goto LABEL_9;
  __asm { vucomiss xmm0, xmm6 }
  if ( !v6 )
    goto LABEL_9;
  __asm { vucomiss xmm1, xmm6 }
  if ( !v6 )
  {
LABEL_9:
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@bf800000
      vmovss  dword ptr [rbp+57h+angles+4], xmm0
      vmovss  dword ptr [rbp+57h+angles], xmm2
      vmovss  dword ptr [rbp+57h+angles+8], xmm1
    }
    if ( v5->selectedEffectTotal == 1 )
    {
      v11 = v5->selectedEffectList[0];
      if ( v11 >= 0x4000 )
      {
        v20 = 0x4000;
        v18 = v5->selectedEffectList[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6812, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v18, v20) )
          __debugbreak();
      }
      CG_CreateFx_GetScratchEffectAngles(v11, &outValue);
      AnglesToAxis(&outValue, &inAxis);
      RotateAxisAroundVectors(&inAxis, &inAxis, &angles, &inAxis);
      AxisToAngles(&inAxis, &outValue);
      CG_CreateFx_SetScratchEffectAngles(v11, &outValue);
      CG_CreateFx_RestartEffect(v11);
    }
    else if ( v5->selectedEffectTotal > 1 )
    {
      CG_CreateFx_CalculateSelectionCenter(&pivotPoint, *(double *)&_XMM1);
      AxisClear(&inAxis);
      RotateAxisAroundVectors(&inAxis, &inAxis, &angles, &inAxis);
      v12 = s_createFxTool;
      v13 = 0;
      if ( s_createFxTool->selectedEffectTotal > 0 )
      {
        v14 = 7209180i64;
        do
        {
          v15 = *(_DWORD *)(&v12->inited + v14);
          if ( v15 >= 0x4000 )
          {
            LODWORD(v19) = 0x4000;
            LODWORD(v17) = *(_DWORD *)(&v12->inited + v14);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6842, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
          }
          CG_CreateFx_GetScratchEffectOrigin(v15, &outValue);
          RotatePointAroundPoint(&outValue, &outValue, &pivotPoint, &inAxis);
          CG_CreateFx_SetScratchEffectOrigin(v15, &outValue);
          CG_CreateFx_GetScratchEffectAngles(v15, &outCenter);
          AnglesToAxis(&outCenter, &axis);
          RotateAxisAroundVectors(&axis, &inAxis, &angles, &axis);
          AxisToAngles(&axis, &outCenter);
          CG_CreateFx_SetScratchEffectAngles(v15, &outCenter);
          CG_CreateFx_RestartEffect(v15);
          v12 = s_createFxTool;
          ++v13;
          v14 += 4i64;
        }
        while ( v13 < s_createFxTool->selectedEffectTotal );
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0F0h+var_10] }
}

/*
==============
CG_CreateFx_WriteEffectToFile
==============
*/
void CG_CreateFx_WriteEffectToFile(const int storageIndex, fileHandle_t *outFile)
{
  __int64 v7; 
  CreateFxTool *v8; 
  __int64 effectType; 
  const CreateFxMapLayerDef *layer; 
  __int64 handle; 
  char *v51; 
  char *v53; 
  int v56; 
  int v57; 
  bool v58; 
  int v59; 
  int v60; 
  const char *v61; 
  __int64 v63; 
  char *v64; 
  scr_string_t v65; 
  const char ***v66; 
  const char *v85; 
  const char *v86; 
  const char *v87; 
  char *fmt; 
  char *fmta; 
  __int64 v96; 
  double v97; 
  __int64 v98; 
  double v99; 
  char v100; 
  scr_string_t v102; 
  scr_string_t stringValue; 
  scr_string_t stringValue_4; 
  char *v105; 
  vec3_t vec; 
  vec3_t dst; 
  vec3_t from; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  void *retaddr; 

  _R11 = &retaddr;
  v7 = storageIndex;
  v8 = s_createFxTool;
  _RDI = (char *)(&s_createFxTool->inited + 104 * storageIndex);
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  effectType = v8->scratchDataState[storageIndex].effectType;
  _RBX = _RDI + 4718800;
  if ( (unsigned int)effectType >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8131, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectClassname ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectClassname )\n\t%i not in [0, %i)", effectType, 6) )
    __debugbreak();
  FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "classname", s_createFxEffectClassname[effectType]);
  if ( (_DWORD)effectType == 1 || (_DWORD)effectType == 2 || (_DWORD)effectType == 3 || (_DWORD)effectType == 4 || (_DWORD)effectType == 5 )
  {
    if ( _RDI != (char *)-4718800i64 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rdi+4800D4h]
        vmovss  dword ptr [rbp+60h+point], xmm0
        vmovss  xmm0, dword ptr [rdi+4800D8h]
        vmovss  dword ptr [rbp+60h+point+8], xmm0
        vmovss  dword ptr [rbp+60h+point+4], xmm1
      }
    }
  }
  else
  {
    LODWORD(v96) = effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v96) )
      __debugbreak();
  }
  layer = v8->scratchDataState[v7].layer;
  if ( !layer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8078, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
    __debugbreak();
  if ( s_createFxTool->rootHasOffset )
  {
    AnglesToAxis(&s_createFxTool->rootAngles, &axis);
    MatrixTranspose(&axis, &out);
    RotatePointAroundPoint(&dst, &point, &s_createFxTool->rootOrigin, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+dst]
      vmovss  xmm2, dword ptr [rsp+160h+dst+4]
      vsubss  xmm1, xmm0, dword ptr [rax+817230h]
      vsubss  xmm0, xmm2, dword ptr [rax+817234h]
      vmovss  dword ptr [rsp+160h+vec], xmm1
      vmovss  xmm1, dword ptr [rbp+60h+dst+8]
      vsubss  xmm2, xmm1, dword ptr [rax+817238h]
    }
  }
  else
  {
    AnglesToAxis(&layer->angles, &out);
    MatrixTranspose(&out, &axis);
    RotatePointAroundPoint(&dst, &point, &layer->origin, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+dst]
      vsubss  xmm1, xmm0, dword ptr [rbx+118h]
      vmovss  xmm2, dword ptr [rsp+160h+dst+4]
      vsubss  xmm0, xmm2, dword ptr [rbx+11Ch]
      vmovss  dword ptr [rsp+160h+vec], xmm1
      vmovss  xmm1, dword ptr [rbp+60h+dst+8]
      vsubss  xmm2, xmm1, dword ptr [rbx+120h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+160h+vec+4], xmm0
    vmovss  dword ptr [rsp+160h+vec+8], xmm2
  }
  CG_CreateFx_Vec3FixSubEpsilonValues(&vec);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+vec+8]
    vmovss  xmm3, dword ptr [rsp+160h+vec]
    vmovss  xmm1, dword ptr [rsp+160h+vec+4]
  }
  handle = outFile->handle.handle;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+160h+var_138], xmm0
    vmovq   r9, xmm3
    vmovaps [rsp+160h+var_58+8], xmm7
    vmovsd  [rsp+160h+fmt], xmm1
    vmovaps [rsp+160h+var_68+8], xmm8
  }
  FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%g %g %g\"\n", "origin", *(double *)&_XMM3, *(double *)&fmt, v97);
  if ( (_DWORD)effectType == 1 || (_DWORD)effectType == 2 || (_DWORD)effectType == 3 || (_DWORD)effectType == 4 || (_DWORD)effectType == 5 )
  {
    _RAX = _RDI + 4718812;
    if ( _RDI != (char *)-4718812i64 )
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rax]
        vmovss  xmm7, dword ptr [rax+4]
        vmovss  xmm6, dword ptr [rax+8]
      }
      goto LABEL_27;
    }
  }
  else
  {
    LODWORD(v98) = effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3223, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectAngles: unhandled effect type '%d'", v98) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, [rsp+160h+var_11C]
    vmovss  xmm7, [rsp+160h+var_11C]
    vmovss  xmm6, [rsp+160h+var_11C]
  }
LABEL_27:
  if ( !v8->scratchDataState[v7].layer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8110, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
    __debugbreak();
  if ( s_createFxTool->rootHasOffset )
  {
    __asm
    {
      vsubss  xmm0, xmm8, dword ptr [rax+81723Ch]
      vmovss  dword ptr [rbp+60h+from], xmm0
      vsubss  xmm1, xmm7, dword ptr [rax+817240h]
      vmovss  dword ptr [rbp+60h+from+4], xmm1
      vsubss  xmm0, xmm6, dword ptr [rax+817244h]
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm8, dword ptr [rbx+124h]
      vmovss  dword ptr [rbp+60h+from], xmm0
      vsubss  xmm1, xmm7, dword ptr [rbx+128h]
      vmovss  dword ptr [rbp+60h+from+4], xmm1
      vsubss  xmm0, xmm6, dword ptr [rbx+12Ch]
    }
  }
  __asm { vmovss  dword ptr [rbp+60h+from+8], xmm0 }
  AnglesNormalize360(&from, &from);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+60h+from+8]
    vmovss  xmm3, dword ptr [rbp+60h+from]
    vmovss  xmm1, dword ptr [rbp+60h+from+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+160h+var_138], xmm0
    vmovq   r9, xmm3
    vmovsd  [rsp+160h+fmt], xmm1
  }
  FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g %g %g\"\n", "angles", *(double *)&_XMM3, *(double *)&fmta, v99);
  FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "target", s_createFxTool->layerList[0].pathString);
  __asm { vmovaps xmm8, [rsp+160h+var_68+8] }
  v51 = NULL;
  __asm { vmovaps xmm7, [rsp+160h+var_58+8] }
  v53 = NULL;
  v105 = NULL;
  _R13 = NULL;
  v100 = 0;
  _R12 = NULL;
  stringValue = 0;
  stringValue_4 = 0;
  v102 = 0;
  *(_QWORD *)dst.v = 0i64;
  *(_QWORD *)vec.v = 0i64;
  v56 = effectType - 1;
  if ( !v56 )
  {
    v61 = (const char *)*((_QWORD *)_RDI + 589855);
    v51 = _RDI + 4718828;
    _RSI = NULL;
LABEL_48:
    v63 = 4718832i64;
LABEL_49:
    v66 = (const char ***)&_RDI[v63];
    if ( &_RDI[v63] && *v66 )
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "fxid", **v66);
    v64 = NULL;
    goto LABEL_53;
  }
  v57 = v56 - 1;
  if ( !v57 )
  {
    v61 = (const char *)*((_QWORD *)_RDI + 589853);
    _RSI = NULL;
    v64 = NULL;
    goto LABEL_53;
  }
  v58 = v57 == 0;
  v59 = v57 - 1;
  if ( !v59 )
  {
    _R13 = _RDI + 4718880;
    v65 = *((_DWORD *)_RDI + 1179724);
    v51 = _RDI + 4718824;
    v61 = (const char *)*((_QWORD *)_RDI + 589855);
    _R12 = _RDI + 4718884;
    stringValue = *((_DWORD *)_RDI + 1179714);
    stringValue_4 = *((_DWORD *)_RDI + 1179723);
    *(_QWORD *)dst.v = _RDI + 4718900;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [r13+0]
    }
    *(_QWORD *)vec.v = _RDI + 4718901;
    v102 = v65;
    if ( !v58 )
      goto LABEL_44;
    __asm { vcomiss xmm0, dword ptr [r12] }
    v100 = 1;
    if ( !v58 )
LABEL_44:
      v100 = 0;
    _RSI = NULL;
    goto LABEL_48;
  }
  v60 = v59 - 1;
  if ( v60 )
  {
    if ( v60 != 1 )
    {
      _RSI = NULL;
      v64 = NULL;
      goto LABEL_58;
    }
    v61 = (const char *)*((_QWORD *)_RDI + 589854);
    _RSI = _RDI + 4718848;
    v63 = 4718824i64;
    goto LABEL_49;
  }
  v61 = (const char *)*((_QWORD *)_RDI + 589853);
  v105 = _RDI + 4718840;
  v64 = _RDI + 4718844;
  _RSI = NULL;
LABEL_53:
  if ( v61 && *v61 )
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "soundalias", v61);
  v53 = v105;
LABEL_58:
  __asm { vmovss  xmm6, cs:__real@3a83126f }
  if ( v51 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r15]
      vmulss  xmm1, xmm0, xmm6
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%.3g\"\n", "delay", *(double *)&_XMM3);
  }
  if ( v53 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
      vmulss  xmm1, xmm0, xmm6
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%.3g\"\n", "delay_min", *(double *)&_XMM3);
  }
  if ( v64 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
      vmulss  xmm1, xmm0, xmm6
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%.3g\"\n", "delay_max", *(double *)&_XMM3);
  }
  __asm { vmovaps xmm6, [rsp+160h+var_48+8] }
  if ( _RSI )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g\"\n", "reactive_radius", *(double *)&_XMM3);
  }
  if ( stringValue )
  {
    v85 = SL_ConvertToString(stringValue);
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "exploder", v85);
  }
  if ( stringValue_4 )
  {
    v86 = SL_ConvertToString(stringValue_4);
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "earthquake", v86);
  }
  if ( v102 )
  {
    v87 = SL_ConvertToString(v102);
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "rumble", v87);
  }
  if ( v100 )
  {
    if ( _R13 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g\"\n", "damage", *(double *)&_XMM3);
    }
    if ( _R12 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r12]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g\"\n", "damage_radius", *(double *)&_XMM3);
    }
    if ( *(_QWORD *)dst.v )
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%i\"\n", "envonly", (unsigned __int8)**(_BYTE **)dst.v);
    if ( *(_QWORD *)vec.v )
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%i\"\n", "dotraces", (unsigned __int8)**(_BYTE **)vec.v);
  }
}

/*
==============
ClassNameValueToCreateFxEffectType
==============
*/
__int64 ClassNameValueToCreateFxEffectType(const char *value)
{
  const char *v1; 
  __int64 v2; 
  __int64 v3; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  const char *v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  const char *v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  const char *v39; 
  signed __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 

  v1 = "client_effect_oneshot";
  v2 = 0x7FFFFFFFi64;
  v3 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v5 = (unsigned __int8)v1[value - "client_effect_oneshot"];
    v6 = v3;
    v7 = *(unsigned __int8 *)v1++;
    --v3;
    if ( !v6 )
      return 1i64;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v9 = v7;
      if ( v5 != v9 )
        break;
    }
    if ( !v5 )
      return 1i64;
  }
  v11 = "client_sound_looping";
  v12 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v13 = (unsigned __int8)v11[value - "client_sound_looping"];
    v14 = v12;
    v15 = *(unsigned __int8 *)v11++;
    --v12;
    if ( !v14 )
      return 2i64;
    if ( v13 != v15 )
    {
      v16 = v13 + 32;
      if ( (unsigned int)(v13 - 65) > 0x19 )
        v16 = v13;
      v13 = v16;
      v17 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v17 = v15;
      if ( v13 != v17 )
        break;
    }
    if ( !v13 )
      return 2i64;
  }
  v18 = "client_sound_interval";
  v19 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v20 = (unsigned __int8)v18[value - "client_sound_interval"];
    v21 = v19;
    v22 = *(unsigned __int8 *)v18++;
    --v19;
    if ( !v21 )
      return 4i64;
    if ( v20 != v22 )
    {
      v23 = v20 + 32;
      if ( (unsigned int)(v20 - 65) > 0x19 )
        v23 = v20;
      v20 = v23;
      v24 = v22 + 32;
      if ( (unsigned int)(v22 - 65) > 0x19 )
        v24 = v22;
      if ( v20 != v24 )
        break;
    }
    if ( !v20 )
      return 4i64;
  }
  v25 = "client_effect_reactive";
  v26 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v27 = (unsigned __int8)v25[value - "client_effect_reactive"];
    v28 = v26;
    v29 = *(unsigned __int8 *)v25++;
    --v26;
    if ( !v28 )
      return 5i64;
    if ( v27 != v29 )
    {
      v30 = v27 + 32;
      if ( (unsigned int)(v27 - 65) > 0x19 )
        v30 = v27;
      v27 = v30;
      v31 = v29 + 32;
      if ( (unsigned int)(v29 - 65) > 0x19 )
        v31 = v29;
      if ( v27 != v31 )
        break;
    }
    if ( !v27 )
      return 5i64;
  }
  v32 = "client_effect_exploder";
  v33 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v34 = (unsigned __int8)v32[value - "client_effect_exploder"];
    v35 = v33;
    v36 = *(unsigned __int8 *)v32++;
    --v33;
    if ( !v35 )
      return 3i64;
    if ( v34 != v36 )
    {
      v37 = v34 + 32;
      if ( (unsigned int)(v34 - 65) > 0x19 )
        v37 = v34;
      v34 = v37;
      v38 = v36 + 32;
      if ( (unsigned int)(v36 - 65) > 0x19 )
        v38 = v36;
      if ( v34 != v38 )
        break;
    }
    if ( !v34 )
      return 3i64;
  }
  v39 = "client_createfx_root";
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v40 = value - "client_createfx_root";
  while ( 1 )
  {
    v41 = (unsigned __int8)v39[v40];
    v42 = v2;
    v43 = *(unsigned __int8 *)v39++;
    --v2;
    if ( !v42 )
      return 6i64;
    if ( v41 != v43 )
    {
      v44 = v41 + 32;
      if ( (unsigned int)(v41 - 65) > 0x19 )
        v44 = v41;
      v41 = v44;
      v45 = v43 + 32;
      if ( (unsigned int)(v43 - 65) > 0x19 )
        v45 = v43;
      if ( v41 != v45 )
        break;
    }
    if ( !v41 )
      return 6i64;
  }
  return 0i64;
}

/*
==============
CreateFxDeleteCommand::Do
==============
*/
void CreateFxDeleteCommand::Do(CreateFxDeleteCommand *this)
{
  Com_Printf_NoFilter("[CreateFx] Delete %d\n", (unsigned int)this->m_effectIndex);
  s_createFxTool->needToExport = 1;
  CG_CreateFx_DeleteEffect(this->m_effectIndex);
}

/*
==============
CreateFxDropToGroundCommand::Do
==============
*/
void CreateFxDropToGroundCommand::Do(CreateFxDropToGroundCommand *this)
{
  unsigned int m_effectIndex; 
  int v3; 
  int v4; 

  CG_CreateFx_SetScratchEffectOrigin(this->m_effectIndex, &this->m_groundOrigin);
  m_effectIndex = this->m_effectIndex;
  if ( m_effectIndex >= 0x4000 )
  {
    v4 = 0x4000;
    v3 = this->m_effectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  CG_CreateFx_StopEffect(m_effectIndex);
  CG_CreateFx_StartEffect(m_effectIndex);
  Com_Printf_NoFilter("[CreateFx] Drop %d\n", (unsigned int)this->m_effectIndex);
  s_createFxTool->needToExport = 1;
}

/*
==============
CreateFxEditCommand::Do
==============
*/
void CreateFxEditCommand::Do(CreateFxEditCommand *this)
{
  int m_effectIndex; 

  CG_CreateFx_SetEffectData(this->m_effectIndex, (const CreateFxEffectType)this->m_afterEffectType, &this->m_afterEffectData);
  CG_CreateFx_UpdateEffectAlias(this->m_effectIndex);
  m_effectIndex = this->m_effectIndex;
  CG_CreateFx_FreeSoundIndex(m_effectIndex);
  CG_CreateFx_AllocSoundIndex(m_effectIndex);
  CG_CreateFx_SetEffectLayer(this->m_effectIndex, this->m_afterEffectLayer);
  Com_Printf_NoFilter("[CreateFx] Edit %d,%s\n", (unsigned int)this->m_effectIndex, createFxEffectTypeStrings[this->m_afterEffectType]);
  s_createFxTool->needToExport = 1;
}

/*
==============
CreateFxInsertEffectCopyCommand::Do
==============
*/
void CreateFxInsertEffectCopyCommand::Do(CreateFxInsertEffectCopyCommand *this)
{
  int EffectIndex; 
  CreateFxEffectType m_effectType; 
  int m_effectIndex; 
  scr_string_t name; 
  scr_string_t earthquakeName; 
  scr_string_t rumbleName; 

  _RDI = this;
  EffectIndex = CG_CreateFx_AllocateEffectIndex();
  m_effectType = _RDI->m_effectType;
  _RDI->m_effectIndex = EffectIndex;
  CG_CreateFx_SetEffectType(EffectIndex, m_effectType);
  CG_CreateFx_SetEffectLayer(_RDI->m_effectIndex, _RDI->m_effectLayer);
  __asm { vmovups ymm0, ymmword ptr [rdi+10h] }
  _RCX = 104i64 * _RDI->m_effectIndex;
  _RAX = s_createFxTool;
  __asm
  {
    vmovups ymmword ptr [rcx+rax+4800D0h], ymm0
    vmovups ymm1, ymmword ptr [rdi+30h]
    vmovups ymmword ptr [rcx+rax+4800F0h], ymm1
    vmovups ymm0, ymmword ptr [rdi+50h]
    vmovups ymmword ptr [rcx+rax+480110h], ymm0
    vmovsd  xmm1, qword ptr [rdi+70h]
    vmovsd  qword ptr [rcx+rax+480130h], xmm1
  }
  CG_CreateFx_UpdateEffectAlias(_RDI->m_effectIndex);
  m_effectIndex = _RDI->m_effectIndex;
  CG_CreateFx_FreeSoundIndex(m_effectIndex);
  CG_CreateFx_AllocSoundIndex(m_effectIndex);
  if ( _RDI->m_effectType == 3 )
  {
    name = _RDI->m_effectData.explodersDef.client.name;
    if ( name )
      SL_AddRefToString(name);
    earthquakeName = _RDI->m_effectData.explodersDef.server.earthquakeName;
    if ( earthquakeName )
      SL_AddRefToString(earthquakeName);
    rumbleName = _RDI->m_effectData.explodersDef.server.rumbleName;
    if ( rumbleName )
      SL_AddRefToString(rumbleName);
  }
  CG_CreateFx_StartEffect(_RDI->m_effectIndex);
  Com_Printf_NoFilter("[CreateFx] Copy %d:%s\n", (unsigned int)_RDI->m_effectIndex, createFxEffectTypeStrings[_RDI->m_effectType]);
  s_createFxTool->needToExport = 1;
}

/*
==============
CreateFxInsertNewEffectCommand::Do
==============
*/
void CreateFxInsertNewEffectCommand::Do(CreateFxInsertNewEffectCommand *this)
{
  int EffectIndex; 

  EffectIndex = CG_CreateFx_AllocateEffectIndex();
  this->m_effectIndex = EffectIndex;
  memset_0(&s_createFxTool->scratchData[EffectIndex], 0, sizeof(s_createFxTool->scratchData[EffectIndex]));
  if ( this->m_effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1245, ASSERT_TYPE_ASSERT, "(m_effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "m_effectType != CreateFxEffectType::None") )
    __debugbreak();
  CG_CreateFx_SetEffectType(this->m_effectIndex, (const CreateFxEffectType)this->m_effectType);
  CG_CreateFx_SetEffectLayer(this->m_effectIndex, this->m_effectLayer);
  CG_CreateFx_SetScratchEffectOrigin(this->m_effectIndex, &this->m_effectPosition);
  Com_Printf_NoFilter("[CreateFx] New %d:%s\n", (unsigned int)this->m_effectIndex, createFxEffectTypeStrings[this->m_effectType]);
  s_createFxTool->needToExport = 1;
}

/*
==============
GetDotProductFromView
==============
*/
float GetDotProductFromView(const vec3_t *targetOrigin, const vec3_t *viewOrigin, const vec3_t *viewForward)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm4, xmm1, dword ptr [rdx+4]
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vsubss  xmm7, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm6, xmm0, dword ptr [rdx+8]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, dword ptr [r8+4]
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm2, xmm1, dword ptr [r8]
    vmovaps xmm7, [rsp+28h+var_28]
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, dword ptr [r8+8]
    vmovaps xmm6, [rsp+28h+var_18]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
CreateFxDeleteCommand::Undo
==============
*/
void CreateFxDeleteCommand::Undo(CreateFxDeleteCommand *this)
{
  __int64 m_effectIndex; 
  CreateFxEffectType m_effectType; 
  scr_string_t name; 
  scr_string_t earthquakeName; 
  scr_string_t rumbleName; 
  CreateFxTool *v7; 
  __int64 v8; 
  __int64 v9; 

  m_effectIndex = this->m_effectIndex;
  m_effectType = this->m_effectType;
  if ( (unsigned int)m_effectIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1663, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", m_effectIndex, 0x4000) )
    __debugbreak();
  if ( s_createFxTool->scratchDataState[m_effectIndex].effectType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1664, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType == CreateFxEffectType::None)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType == CreateFxEffectType::None") )
    __debugbreak();
  CG_CreateFx_SetEffectData(m_effectIndex, m_effectType, &this->m_effectData);
  if ( m_effectType == 3 )
  {
    name = this->m_effectData.explodersDef.client.name;
    if ( name )
      SL_AddRefToString(name);
    earthquakeName = this->m_effectData.explodersDef.server.earthquakeName;
    if ( earthquakeName )
      SL_AddRefToString(earthquakeName);
    rumbleName = this->m_effectData.explodersDef.server.rumbleName;
    if ( rumbleName )
      SL_AddRefToString(rumbleName);
  }
  v7 = s_createFxTool;
  if ( s_createFxTool->freeEffectList[s_createFxTool->freeEffectListIndex] != (_DWORD)m_effectIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1670, ASSERT_TYPE_ASSERT, "(s_createFxTool->freeEffectList[s_createFxTool->freeEffectListIndex] == storageIndex)", (const char *)&queryFormat, "s_createFxTool->freeEffectList[s_createFxTool->freeEffectListIndex] == storageIndex") )
      __debugbreak();
    v7 = s_createFxTool;
  }
  ++v7->freeEffectListIndex;
  if ( v7->usedEffectTotal >= 0x4000u )
  {
    LODWORD(v9) = 0x4000;
    LODWORD(v8) = v7->usedEffectTotal;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1673, ASSERT_TYPE_ASSERT, "(unsigned)( s_createFxTool->usedEffectTotal ) < (unsigned)( ( sizeof( *array_counter( s_createFxTool->usedEffectList ) ) + 0 ) )", "s_createFxTool->usedEffectTotal doesn't index ARRAY_COUNT( s_createFxTool->usedEffectList )\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
    v7 = s_createFxTool;
  }
  v7->usedEffectList[v7->usedEffectTotal++] = m_effectIndex;
  CG_CreateFx_SetEffectLayer(this->m_effectIndex, this->m_effectLayer);
}

/*
==============
CreateFxDropToGroundCommand::Undo
==============
*/
void CreateFxDropToGroundCommand::Undo(CreateFxDropToGroundCommand *this)
{
  unsigned int m_effectIndex; 
  unsigned int v3; 
  int v4; 

  CG_CreateFx_SetScratchEffectOrigin(this->m_effectIndex, &this->m_oldOrigin);
  m_effectIndex = this->m_effectIndex;
  if ( m_effectIndex >= 0x4000 )
  {
    v4 = 0x4000;
    v3 = m_effectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  CG_CreateFx_StopEffect(m_effectIndex);
  CG_CreateFx_StartEffect(m_effectIndex);
}

/*
==============
CreateFxEditCommand::Undo
==============
*/
void CreateFxEditCommand::Undo(CreateFxEditCommand *this)
{
  int m_effectIndex; 

  CG_CreateFx_SetEffectData(this->m_effectIndex, (const CreateFxEffectType)this->m_beforeEffectType, &this->m_beforeEffectData);
  CG_CreateFx_UpdateEffectAlias(this->m_effectIndex);
  m_effectIndex = this->m_effectIndex;
  CG_CreateFx_FreeSoundIndex(m_effectIndex);
  CG_CreateFx_AllocSoundIndex(m_effectIndex);
  CG_CreateFx_SetEffectLayer(this->m_effectIndex, this->m_beforeEffectLayer);
}

/*
==============
CreateFxInsertEffectCopyCommand::Undo
==============
*/
void CreateFxInsertEffectCopyCommand::Undo(CreateFxInsertEffectCopyCommand *this)
{
  CG_CreateFx_DeleteEffect(this->m_effectIndex);
}

/*
==============
CreateFxInsertNewEffectCommand::Undo
==============
*/
void CreateFxInsertNewEffectCommand::Undo(CreateFxInsertNewEffectCommand *this)
{
  CG_CreateFx_DeleteEffect(this->m_effectIndex);
}

/*
==============
CreateFxAssetPalette::add
==============
*/
bool CreateFxAssetPalette::add(CreateFxAssetPalette *this, const char *const asset, const char *alias)
{
  const char *v4; 
  unsigned int v6; 
  char v7; 
  const char *v8; 
  unsigned __int64 v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *mp_next; 
  bool result; 
  unsigned int v13; 
  char v14; 
  char *v15; 
  unsigned __int64 v16; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v17; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v18; 
  ntl::internal::pool_allocator_freelist<16> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v20; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v21; 

  v4 = asset;
  if ( asset )
  {
    v7 = *asset;
    v6 = 0;
    if ( *asset )
    {
      v8 = asset;
      do
      {
        ++v8;
        v6 = v7 + 31 * v6;
        v7 = *v8;
      }
      while ( *v8 );
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 581, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    v6 = 0;
  }
  v9 = v6 % 0x407ui64;
  if ( v9 >= 0x407 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v10 = &this->m_assetToIndexMap.m_buckets.m_data[v9];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v10->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v10->m_listHead.m_sentinel.mp_next != v10 )
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == v6 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v10 )
        goto LABEL_20;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 582, ASSERT_TYPE_ASSERT, "(!containsAsset( asset ))", (const char *)&queryFormat, "!containsAsset( asset )") )
      __debugbreak();
  }
LABEL_20:
  if ( this->m_count < 0x400u )
  {
    v13 = 0;
    if ( v4 )
    {
      v14 = *v4;
      if ( *v4 )
      {
        v15 = (char *)v4;
        do
        {
          ++v15;
          v13 = v14 + 31 * v13;
          v14 = *v15;
        }
        while ( *v15 );
      }
    }
    WORD2(v21) = this->m_count;
    LODWORD(v21) = v13;
    v16 = v13 % 0x407ui64;
    if ( v16 >= 0x407 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v17 = &this->m_assetToIndexMap.m_buckets.m_data[v16];
    v18 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v17->m_listHead.m_sentinel.mp_next;
    if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v17->m_listHead.m_sentinel.mp_next == v17 )
    {
LABEL_35:
      p_m_freelist = &this->m_assetToIndexMap.m_freelist;
      if ( !this->m_assetToIndexMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<16> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x400ui64) )
        __debugbreak();
      v20 = p_m_freelist->m_head.mp_next;
      p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
      v20->mp_next = NULL;
      v20[1].mp_next = v21;
      v20->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v17->m_listHead.m_sentinel.mp_next;
      v17->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v20;
      ++this->m_assetToIndexMap.m_currentNumItems;
    }
    else
    {
      while ( 1 )
      {
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(v18[1].m_listHead.m_sentinel.mp_next) == v13 )
          break;
        v18 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v18->m_listHead.m_sentinel.mp_next;
        if ( v18 == v17 )
          goto LABEL_35;
      }
    }
    this->m_assets[this->m_count] = v4;
    if ( alias )
      v4 = alias;
    this->m_aliases[this->m_count] = v4;
    result = 1;
    ++this->m_count;
  }
  else
  {
    Com_PrintWarning(0, "WARNING: CREATEFX_MAX_EFFECT_ALIASES overflow in palette '%s'\n", this->m_name);
    return 0;
  }
  return result;
}

/*
==============
CreateFxAssetPalette::containsAsset
==============
*/
bool CreateFxAssetPalette::containsAsset(CreateFxAssetPalette *this, const char *const asset)
{
  unsigned int v2; 
  char i; 
  unsigned __int64 v5; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v6; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *mp_next; 

  v2 = 0;
  if ( asset )
  {
    for ( i = *asset; *asset; i = *asset )
    {
      ++asset;
      v2 = i + 31 * v2;
    }
  }
  v5 = v2 % 0x407ui64;
  if ( v5 >= 0x407 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v6 = &this->m_assetToIndexMap.m_buckets.m_data[v5];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v6->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v6->m_listHead.m_sentinel.mp_next == v6 )
  {
LABEL_13:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == v2 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v6 )
        goto LABEL_13;
    }
  }
  return mp_next != NULL;
}

/*
==============
CreateFxAssetPalette::filter
==============
*/
void CreateFxAssetPalette::filter(CreateFxAssetPalette *this, const char *const str, const unsigned int len)
{
  unsigned __int16 m_count; 
  unsigned __int16 v4; 
  __int64 v8; 
  __int64 v9; 

  m_count = this->m_count;
  v4 = 0;
  for ( this->m_filteredCount = 0; v4 < m_count; ++v4 )
  {
    if ( len < 3 )
      goto LABEL_7;
    if ( v4 >= m_count )
    {
      LODWORD(v9) = m_count;
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 548, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_count )", "index doesn't index m_count\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( I_strstr(this->m_aliases[v4], str) )
LABEL_7:
      this->m_filtered[this->m_filteredCount++] = v4;
    m_count = this->m_count;
  }
}

/*
==============
CreateFxAssetPalette::getAliasForAsset
==============
*/
const char *CreateFxAssetPalette::getAliasForAsset(CreateFxAssetPalette *this, const char *asset)
{
  unsigned int v4; 
  char v5; 
  const char *v6; 
  unsigned __int64 v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *mp_next; 

  if ( asset )
  {
    v5 = *asset;
    v4 = 0;
    if ( *asset )
    {
      v6 = asset;
      do
      {
        ++v6;
        v4 = v5 + 31 * v4;
        v5 = *v6;
      }
      while ( *v6 );
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 631, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    v4 = 0;
  }
  v7 = v4 % 0x407ui64;
  if ( v7 >= 0x407 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v8 = &this->m_assetToIndexMap.m_buckets.m_data[v7];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v8->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v8->m_listHead.m_sentinel.mp_next == v8 )
  {
LABEL_17:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == v4 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v8 )
        goto LABEL_17;
    }
  }
  if ( mp_next && WORD2(mp_next[1].m_listHead.m_sentinel.mp_next) != 1024 )
    return CreateFxAssetPalette::getAliasForIndex(this, WORD2(mp_next[1].m_listHead.m_sentinel.mp_next));
  Com_PrintWarning(0, "WARNING: getAliasForAsset failed to find '%s'\n", asset);
  return asset;
}

/*
==============
CreateFxAssetPalette::getAliasForIndex
==============
*/
const char *CreateFxAssetPalette::getAliasForIndex(CreateFxAssetPalette *this, const unsigned __int16 index)
{
  unsigned __int16 m_count; 
  int v6; 
  int v7; 

  m_count = this->m_count;
  if ( index < m_count )
    return this->m_aliases[index];
  v7 = m_count;
  v6 = index;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 548, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_count )", "index doesn't index m_count\n\t%i not in [0, %i)", v6, v7) )
    __debugbreak();
  return this->m_aliases[index];
}

/*
==============
CreateFxAssetPalette::getAssetForFiltered
==============
*/
const char *CreateFxAssetPalette::getAssetForFiltered(CreateFxAssetPalette *this, const unsigned __int16 filteredIndex)
{
  unsigned __int16 m_filteredCount; 
  unsigned __int16 v5; 
  unsigned __int16 m_count; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 

  m_filteredCount = this->m_filteredCount;
  if ( filteredIndex >= m_filteredCount )
  {
    v11 = m_filteredCount;
    v9 = filteredIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 624, ASSERT_TYPE_ASSERT, "(unsigned)( filteredIndex ) < (unsigned)( m_filteredCount )", "filteredIndex doesn't index m_filteredCount\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v5 = this->m_filtered[filteredIndex];
  m_count = this->m_count;
  if ( v5 >= m_count )
  {
    LODWORD(v10) = m_count;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 555, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_count )", "index doesn't index m_count\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return this->m_assets[v5];
}

/*
==============
CreateFxAssetPalette::init
==============
*/
void CreateFxAssetPalette::init(CreateFxAssetPalette *this, const char *name)
{
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,1031> *p_m_buckets; 
  unsigned __int64 *p_m_currentNumItems; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,1031> *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v6; 

  this->m_name = name;
  p_m_buckets = &this->m_assetToIndexMap.m_buckets;
  this->m_count = 0;
  p_m_currentNumItems = &this->m_assetToIndexMap.m_currentNumItems;
  for ( this->m_filteredCount = 0; p_m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,1031> *)p_m_currentNumItems; p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,1031> *)((char *)p_m_buckets + 8) )
  {
    for ( i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,1031> *)p_m_buckets->m_data[0].m_listHead.m_sentinel.mp_next; i != p_m_buckets; this->m_assetToIndexMap.m_freelist.m_head.mp_next = v6 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v6 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,1031> *)i->m_data[0].m_listHead.m_sentinel.mp_next;
      v6->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_assetToIndexMap.m_freelist.m_head;
    }
    p_m_buckets->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)p_m_buckets;
  }
  *p_m_currentNumItems = 0i64;
}

/*
==============
CreateFxEditBuffer::modifyNumber
==============
*/

void __fastcall CreateFxEditBuffer::modifyNumber(CreateFxEditBuffer *this, double delta)
{
  __int64 v10; 
  __int64 m_bufferCount; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  *(double *)&_XMM0 = atof(this->m_buffer);
  __asm
  {
    vcvtsd2ss xmm2, xmm0, xmm0
    vaddss  xmm1, xmm2, xmm6
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(this->m_buffer, 0x3FFui64, "%g", *(double *)&_XMM3);
  v10 = -1i64;
  do
    ++v10;
  while ( this->m_buffer[v10] );
  this->m_bufferCount = v10;
  if ( (unsigned int)v10 > 0x3FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 733, ASSERT_TYPE_ASSERT, "(m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM)", (const char *)&queryFormat, "m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM") )
    __debugbreak();
  m_bufferCount = this->m_bufferCount;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  this->m_cursor = m_bufferCount;
  this->m_buffer[m_bufferCount] = 0;
}

/*
==============
CreateFxEditBuffer::remove
==============
*/
char CreateFxEditBuffer::remove(CreateFxEditBuffer *this, keyNum_t key)
{
  int m_bufferCount; 
  int m_cursor; 
  int v7; 
  char *v8; 
  int v9; 

  if ( key != K_BACKSPACE && key != K_DEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 742, ASSERT_TYPE_ASSERT, "(key == K_BACKSPACE || key == K_DEL)", (const char *)&queryFormat, "key == K_BACKSPACE || key == K_DEL") )
    __debugbreak();
  if ( this->m_cursor > this->m_bufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 743, ASSERT_TYPE_ASSERT, "(m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor <= m_bufferCount") )
    __debugbreak();
  if ( this->m_bufferCount > 0x3FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 744, ASSERT_TYPE_ASSERT, "(m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM)", (const char *)&queryFormat, "m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM") )
    __debugbreak();
  m_bufferCount = this->m_bufferCount;
  if ( !m_bufferCount )
    return 0;
  if ( key == K_BACKSPACE )
  {
    if ( !this->m_cursor )
      return 0;
  }
  else if ( key == K_DEL && this->m_cursor == m_bufferCount )
  {
    return 0;
  }
  m_cursor = this->m_cursor;
  v7 = m_cursor - 1;
  if ( key != K_BACKSPACE )
    v7 = this->m_cursor;
  if ( v7 < m_bufferCount )
  {
    v8 = &this->m_buffer[v7];
    do
    {
      ++v7;
      *v8 = v8[1];
      ++v8;
      m_bufferCount = this->m_bufferCount;
    }
    while ( v7 < m_bufferCount );
    m_cursor = this->m_cursor;
  }
  this->m_bufferCount = m_bufferCount - 1;
  if ( key == K_BACKSPACE )
    this->m_cursor = m_cursor - 1;
  this->m_buffer[m_bufferCount - 1] = 0;
  v9 = this->m_cursor;
  if ( (v9 < 0 || v9 > this->m_bufferCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 777, ASSERT_TYPE_ASSERT, "(m_cursor >=0 && m_cursor <= m_bufferCount)", (const char *)&queryFormat, "m_cursor >=0 && m_cursor <= m_bufferCount") )
    __debugbreak();
  return 1;
}

