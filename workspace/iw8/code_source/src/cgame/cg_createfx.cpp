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
  CreateFxTool *v2; 
  __int64 v4; 
  CreateFXDataUnion *v5; 
  SndAliasList *aliasList; 
  CgSoundSystem *SoundSystem; 
  CreateFxTool *v8; 
  unsigned __int16 activeExploderCount; 
  float damageAmount; 
  const char *v11; 

  v2 = s_createFxTool;
  v4 = effectIndex;
  v5 = &s_createFxTool->scratchData[v4];
  v2->scratchDataState[effectIndex].effectHandle = CG_CreateFX_PlayFXFromDef(&s_createFxTool->scratchData[v4].oneShotFxDef.effect, &v5->oneShotFxDef.origin, &s_createFxTool->scratchData[v4].oneShotFxDef.angles, startTimeMsec);
  aliasList = v5->oneShotFxDef.aliasList;
  if ( aliasList || (aliasList = SND_TryFindAlias(v5->oneShotFxDef.effectSound.name)) != NULL )
  {
    if ( aliasList->head )
    {
      if ( Com_IsSoundAliasLooping(aliasList) )
      {
        v8 = s_createFxTool;
        activeExploderCount = s_createFxTool->activeExploderCount;
        if ( activeExploderCount >= 0x400u )
        {
          Com_PrintWarning(0, "WARNING: too many active exploders!\n");
        }
        else
        {
          s_createFxTool->activeExploderIndices[activeExploderCount] = effectIndex;
          ++v8->activeExploderCount;
        }
      }
      else
      {
        SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
        CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, &v5->oneShotFxDef.origin, aliasList);
      }
    }
  }
  damageAmount = s_createFxTool->scratchData[v4].explodersDef.server.damageAmount;
  if ( damageAmount != 0.0 && s_createFxTool->scratchData[v4].explodersDef.server.damageRadius != 0.0 || s_createFxTool->scratchData[v4].explodersDef.server.earthquakeName || s_createFxTool->scratchData[v4].explodersDef.server.rumbleName )
  {
    v11 = j_va("cfx_exploder %g %g %g %f %f %f %d %d %u %u", v5->oneShotFxDef.origin.v[0], v5->oneShotFxDef.origin.v[1], v5->oneShotFxDef.origin.v[2], (float)((float)v5->explodersDef.client.delayMsec * 0.001), damageAmount, s_createFxTool->scratchData[v4].explodersDef.server.damageRadius, s_createFxTool->scratchData[v4].explodersDef.server.damageDoOcclusionTraces, s_createFxTool->scratchData[v4].explodersDef.server.damageEnvironmentOnly, s_createFxTool->scratchData[v4].explodersDef.server.earthquakeName, s_createFxTool->scratchData[v4].explodersDef.server.rumbleName);
    Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v11);
  }
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
  CreateFxMapLayerDef *v12; 
  const char *v13; 
  __int64 v14; 

  if ( s_createFxTool->layerListTotal >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8767, ASSERT_TYPE_ASSERT, "(s_createFxTool->layerListTotal < ( sizeof( *array_counter( s_createFxTool->layerList ) ) + 0 ))", (const char *)&queryFormat, "s_createFxTool->layerListTotal < ARRAY_COUNT( s_createFxTool->layerList )") )
    __debugbreak();
  String = SL_GetString(layerPath, 0);
  layerListTotal = s_createFxTool->layerListTotal;
  if ( layerListTotal <= 0 )
  {
LABEL_8:
    v12 = &s_createFxTool->layerList[layerListTotal];
    v12->path = String;
    v12->pathString = SL_ConvertToString(String);
    *(double *)v12->origin.v = *(double *)layerOrigin->v;
    v12->origin.v[2] = layerOrigin->v[2];
    *(double *)v12->angles.v = *(double *)layerAngles->v;
    v12->angles.v[2] = layerAngles->v[2];
    v12->filtered = 0;
    v12->filterString[0] = 0;
    if ( layerFilter )
    {
      if ( *layerFilter )
      {
        Core_strcpy(v12->filterString, 0x104ui64, layerFilter);
        if ( createfx_mapnamefilter )
        {
          v13 = createfx_mapnamefilter->current.string;
          if ( v13 )
          {
            if ( *v13 )
            {
              v14 = -1i64;
              do
                ++v14;
              while ( layerFilter[v14] );
              v12->filtered = I_strncmp(v12->filterString, v13, (unsigned int)v14) != 0;
            }
          }
        }
      }
    }
    Com_Printf_NoFilter("[CreateFx] AddLayer %s (%d total)\n", layerPath, (unsigned int)(s_createFxTool->layerListTotal + 1));
    if ( v12->filtered )
      Com_Printf_NoFilter("[CreateFx] AddLayer %s [filtered because layer specifies %s and dvar specifies %s]\n", layerPath, layerFilter, createfx_mapnamefilter->current.string);
    result = v12;
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
void CG_CreateFx_AddSounds()
{
  unsigned int time; 
  CreateFxTool *v1; 
  int v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  bool *v7; 
  const ClientIntervalSoundDef *v8; 
  const SndAliasList *v9; 
  SndAliasList *v10; 
  unsigned int v11; 
  float distMax; 
  double v13; 
  CgSoundSystem *SoundSystem; 
  const vec3_t *p_origin; 
  const SndAliasList *aliasList; 
  const char *name; 
  SndAliasList *Alias; 
  __int64 v19; 
  __int64 v20; 
  const vec3_t *v21; 
  SndAliasList *v22; 
  SndAlias *head; 
  unsigned int pHoldrand; 

  time = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
  pHoldrand = Sys_Milliseconds();
  BG_srand(&pHoldrand);
  v1 = s_createFxTool;
  v2 = 0;
  v3 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v4 = 7078100i64;
    while ( 1 )
    {
      v5 = *(int *)(&v1->inited + v4);
      v6 = v1->soundIndexUsage.effectToSoundIndexMap[v5];
      v7 = &v1->inited + 40 * v5;
      if ( *((_DWORD *)v7 + 1605686) == 1 )
        break;
      if ( *((_DWORD *)v7 + 1605686) == 2 )
      {
        p_origin = &v1->scratchData[v5].oneShotFxDef.origin;
        aliasList = v1->scratchData[v5].intervalSoundsDef.aliasList;
        if ( !aliasList )
        {
          name = v1->scratchData[v5].intervalSoundsDef.effectSound.name;
LABEL_18:
          Alias = SND_TryFindAlias(name);
          v1 = s_createFxTool;
          aliasList = Alias;
          if ( !Alias )
            goto LABEL_23;
        }
        goto LABEL_19;
      }
      if ( *((_DWORD *)v7 + 1605686) != 4 )
        goto LABEL_23;
      v8 = (const ClientIntervalSoundDef *)&v1->scratchData[v5];
      v9 = v1->scratchData[v5].intervalSoundsDef.aliasList;
      if ( !v9 )
      {
        v10 = SND_TryFindAlias(v1->scratchData[v5].intervalSoundsDef.effectSound.name);
        v1 = s_createFxTool;
        v9 = v10;
        if ( !v10 )
          goto LABEL_23;
      }
      if ( !v9->head )
        goto LABEL_23;
      v11 = *((_DWORD *)v7 + 1605693);
      if ( !v11 )
      {
        *((_DWORD *)v7 + 1605693) = CG_SetIntervalSoundTimer(v8, time, &pHoldrand);
LABEL_22:
        v1 = s_createFxTool;
        goto LABEL_23;
      }
      if ( time >= v11 )
      {
        *((_DWORD *)v7 + 1605693) = CG_SetIntervalSoundTimer(v8, time, &pHoldrand);
        distMax = v9->head->distMax;
        v13 = SND_DistSqToNearestListener(&v8->origin);
        if ( *(float *)&v13 <= (float)(distMax * distMax) )
        {
          SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
          CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, &v8->origin, v9);
        }
        goto LABEL_22;
      }
LABEL_23:
      ++v3;
      v4 += 4i64;
      if ( v3 >= v1->usedEffectTotal )
        goto LABEL_24;
    }
    p_origin = &v1->scratchData[v5].oneShotFxDef.origin;
    aliasList = v1->scratchData[v5].oneShotFxDef.aliasList;
    if ( !aliasList )
    {
      name = v1->scratchData[v5].oneShotFxDef.effectSound.name;
      goto LABEL_18;
    }
LABEL_19:
    if ( aliasList->head )
    {
      if ( Com_IsSoundAliasLooping(aliasList) )
        CG_CreateFx_UpdateLoopSound(v6, aliasList, p_origin);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
LABEL_24:
  if ( v1->activeExploderCount )
  {
    v19 = 8475176i64;
    do
    {
      v20 = *(unsigned int *)(&v1->inited + v19);
      if ( v1->scratchDataState[v20].effectType != 3 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2801, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[exploderIndex].effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[exploderIndex].effectType == CreateFxEffectType::Exploder") )
          __debugbreak();
        v1 = s_createFxTool;
      }
      v21 = &v1->scratchData[v20].oneShotFxDef.origin;
      v22 = v1->scratchData[v20].oneShotFxDef.aliasList;
      if ( v22 || (v22 = SND_TryFindAlias(v1->scratchData[v20].oneShotFxDef.effectSound.name), v1 = s_createFxTool, v22) )
      {
        head = v22->head;
        if ( head )
        {
          if ( (head->flags & 1) != 0 )
          {
            CG_CreateFx_UpdateLoopSound(v1->soundIndexUsage.effectToSoundIndexMap[v20], v22, v21);
            v1 = s_createFxTool;
          }
        }
      }
      ++v2;
      v19 += 4i64;
    }
    while ( v2 < v1->activeExploderCount );
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
  ntl::solitary_buffer_allocator v3; 
  ntl::internal::buffer_memory_block<char> v4; 

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
  __asm { vpxor   xmm0, xmm0, xmm0 }
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", _XMM0) )
    __debugbreak();
  v3.m_data.m_buffer = (char *)v1;
  v3.m_data.m_size = 10485760i64;
  ntl::nxheap::shutdown(&s_createFxCommandHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_createFxCommandHeap.m_region);
  if ( s_createFxCommandHeap.m_data.m_buffer )
  {
    if ( s_createFxCommandHeap.m_data.m_buffer != s_createFxCommandHeap.m_allocator.m_data.m_buffer && s_createFxCommandHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_createFxCommandHeap.m_data.m_buffer = NULL;
    s_createFxCommandHeap.m_data.m_size = 0i64;
  }
  s_createFxCommandHeap.m_allocator = v3;
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
  v4.m_buffer = s_createFxCommandHeap.m_allocator.m_data.m_buffer;
  v4.m_size = 10485760i64;
  s_createFxCommandHeap.m_data = v4;
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
  const dvar_t *v2; 
  CreateFxTool *v4; 
  int v5; 
  float v6; 
  float v7; 
  int v8; 
  __int64 v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  cg_t *LocalClientGlobals; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  __int64 v30; 
  __int64 skipEntity; 
  vec3_t end; 
  trace_t results; 

  v2 = createfx_drawdist;
  if ( !createfx_drawdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v4 = s_createFxTool;
  v5 = 0;
  v6 = FLOAT_0_97000003;
  v7 = v2->current.value * v2->current.value;
  v8 = -1;
  s_createFxDrawCount = 0;
  if ( s_createFxTool->usedEffectTotal <= 0 )
    goto LABEL_38;
  v9 = 7078100i64;
  v10 = *(float *)&drawForward;
  v11 = (unsigned int)drawForward;
  v12 = *(float *)&drawForward;
  do
  {
    v13 = *(int *)(&v4->inited + v9);
    v14 = (__int64)&v4->scratchDataState[v13];
    if ( *(_BYTE *)v14 || s_createFxFilter[v4->scratchDataState[v13].effectType] )
    {
      if ( v4->scratchDataState[v13].effectType == 1 || v4->scratchDataState[v13].effectType == 2 || v4->scratchDataState[v13].effectType == 3 || v4->scratchDataState[v13].effectType == Menu || v4->scratchDataState[v13].effectType == 5 )
      {
        if ( (CreateFxTool *)((char *)v4 + 104 * v13) != (CreateFxTool *)-4718800i64 )
        {
          v12 = v4->scratchData[v13].oneShotFxDef.origin.v[0];
          v11 = LODWORD(v4->scratchData[v13].oneShotFxDef.origin.v[1]);
          v10 = v4->scratchData[v13].oneShotFxDef.origin.v[2];
        }
      }
      else
      {
        LODWORD(skipEntity) = v4->scratchDataState[v13].effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", skipEntity) )
          __debugbreak();
        v4 = s_createFxTool;
      }
      if ( *(_BYTE *)v14 || (float)((float)((float)((float)(*(float *)&v11 - drawOrigin->v[1]) * (float)(*(float *)&v11 - drawOrigin->v[1])) + (float)((float)(v12 - drawOrigin->v[0]) * (float)(v12 - drawOrigin->v[0]))) + (float)((float)(v10 - drawOrigin->v[2]) * (float)(v10 - drawOrigin->v[2]))) <= v7 )
      {
        v15 = v12 - drawOrigin->v[0];
        v16 = v11;
        *(float *)&v16 = *(float *)&v11 - drawOrigin->v[1];
        v17 = v10 - drawOrigin->v[2];
        if ( v15 == 0.0 && *(float *)&v16 == 0.0 && (float)(v10 - drawOrigin->v[2]) == 0.0 )
        {
          v18 = FLOAT_1_0;
        }
        else
        {
          *(float *)&v16 = fsqrt((float)((float)(*(float *)&v16 * *(float *)&v16) + (float)(v15 * v15)) + (float)(v17 * v17));
          _XMM3 = v16;
          __asm
          {
            vcmpless xmm0, xmm3, xmm15
            vblendvps xmm0, xmm3, xmm12, xmm0
          }
          v18 = (float)((float)((float)((float)(*(float *)&v11 - drawOrigin->v[1]) * (float)(1.0 / *(float *)&_XMM0)) * drawForward->v[1]) + (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * drawForward->v[0])) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * drawForward->v[2]);
        }
        if ( v4->scratchDataState[v13].effectType == None )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5758, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None") )
            __debugbreak();
          v4 = s_createFxTool;
        }
        if ( v4->scratchDataState[v13].layer == v4->activeLayer && v18 > v6 )
        {
          v6 = v18;
          v8 = v13;
        }
        *(_DWORD *)(v14 + 4) = *(_BYTE *)v14 != 0;
        LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        v23 = drawOrigin->v[0] - v12;
        v25 = LODWORD(drawOrigin->v[1]);
        v24 = drawOrigin->v[1] - *(float *)&v11;
        v26 = drawOrigin->v[2] - v10;
        *(float *)&v25 = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v26 * v26));
        _XMM1 = v25;
        __asm
        {
          vcmpless xmm0, xmm1, xmm15
          vblendvps xmm0, xmm1, xmm12, xmm0
        }
        end.v[0] = (float)(v23 * (float)(1.0 / *(float *)&_XMM0)) + v12;
        end.v[2] = v10 + (float)(v26 * (float)(1.0 / *(float *)&_XMM0));
        end.v[1] = (float)(v24 * (float)(1.0 / *(float *)&_XMM0)) + *(float *)&v11;
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_CLIENT_FIRST, &results, drawOrigin, &end, &bounds_origin, LocalClientGlobals->predictedPlayerState.clientNum, 0, 41969969, 0, NULL, All);
        v30 = s_createFxDrawCount;
        *(_BYTE *)(v14 + 1) = results.fraction != 1.0;
        s_createFxDrawList[v30] = v13;
        v4 = s_createFxTool;
        s_createFxDrawCount = v30 + 1;
      }
    }
    ++v5;
    v9 += 4i64;
  }
  while ( v5 < v4->usedEffectTotal );
  if ( v8 <= -1 )
  {
LABEL_38:
    v4->highlightedEffectIndex = -1;
  }
  else
  {
    if ( !*(_DWORD *)v4->scratchDataState[v8].visualState )
      *(_DWORD *)v4->scratchDataState[v8].visualState = 2;
    v4->highlightedEffectIndex = v8;
  }
}

/*
==============
CG_CreateFx_CalculateClipboardEntityOrigin
==============
*/
void CG_CreateFx_CalculateClipboardEntityOrigin(const vec3_t *originalOrigin, vec3_t *outOrigin)
{
  float v2; 
  CreateFxTool *v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  vec3_t point; 
  vec3_t dst; 

  v2 = originalOrigin->v[0];
  v4 = s_createFxTool;
  if ( s_createFxTool->clipboard.effectTotal <= 1 )
  {
    outOrigin->v[0] = v2;
    outOrigin->v[1] = originalOrigin->v[1];
    v8 = originalOrigin->v[2];
  }
  else
  {
    v5 = originalOrigin->v[1] - s_createFxTool->clipboard.vCentroid.v[1];
    point.v[0] = v2 - s_createFxTool->clipboard.vCentroid.v[0];
    point.v[2] = originalOrigin->v[2] - s_createFxTool->clipboard.vCentroid.v[2];
    point.v[1] = v5;
    RotatePointAroundVector(&dst, &VEC3_UP, &point, s_createFxTool->clipboard.yawDelta);
    v4 = s_createFxTool;
    v6 = dst.v[2];
    v7 = dst.v[1];
    outOrigin->v[0] = dst.v[0] + s_createFxTool->clipboard.vCentroid.v[0];
    outOrigin->v[1] = v7 + v4->clipboard.vCentroid.v[1];
    v8 = v6 + v4->clipboard.vCentroid.v[2];
  }
  outOrigin->v[2] = v8;
  outOrigin->v[0] = outOrigin->v[0] + v4->clipboard.vCentroidToCursor.v[0];
  outOrigin->v[1] = v4->clipboard.vCentroidToCursor.v[1] + outOrigin->v[1];
  outOrigin->v[2] = v4->clipboard.vCentroidToCursor.v[2] + outOrigin->v[2];
}

/*
==============
CG_CreateFx_CalculateSelectionCenter
==============
*/
void CG_CreateFx_CalculateSelectionCenter(vec3_t *outCenter)
{
  CreateFxTool *v1; 
  int v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int64 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  vec3_t outOrigin; 

  v1 = s_createFxTool;
  if ( s_createFxTool->selectedEffectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1681, ASSERT_TYPE_ASSERT, "(s_createFxTool->selectedEffectTotal > 0)", (const char *)&queryFormat, "s_createFxTool->selectedEffectTotal > 0") )
      __debugbreak();
    v1 = s_createFxTool;
  }
  v3 = 0;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  if ( v1->selectedEffectTotal > 0 )
  {
    v7 = 7209180i64;
    do
    {
      CG_CreateFx_GetScratchEffectOrigin(*(_DWORD *)(&v1->inited + v7), &outOrigin);
      v1 = s_createFxTool;
      v7 += 4i64;
      v8 = v4;
      *(float *)&v8 = *(float *)&v4 + outOrigin.v[0];
      v4 = v8;
      v9 = v5;
      *(float *)&v9 = *(float *)&v5 + outOrigin.v[1];
      v5 = v9;
      v10 = v6;
      *(float *)&v10 = *(float *)&v6 + outOrigin.v[2];
      v6 = v10;
      ++v3;
    }
    while ( v3 < s_createFxTool->selectedEffectTotal );
  }
  v11 = 1.0 / (float)v1->selectedEffectTotal;
  outCenter->v[0] = *(float *)&v4 * v11;
  outCenter->v[2] = *(float *)&v6 * v11;
  outCenter->v[1] = *(float *)&v5 * v11;
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
void CG_CreateFx_CopyToClipboard(const LocalClientNum_t localClientNum)
{
  CreateFxTool *v1; 
  int v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int64 v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  __int64 v14; 
  float v15; 

  v1 = s_createFxTool;
  CG_CreateFx_SaveSelectionToBuffer(&s_createFxTool->clipboard);
  if ( v1->clipboard.effectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5572, ASSERT_TYPE_ASSERT, "(s_createFxTool->clipboard.effectTotal > 0)", (const char *)&queryFormat, "s_createFxTool->clipboard.effectTotal > 0") )
      __debugbreak();
    v1 = s_createFxTool;
  }
  v2 = 0;
  v3 = 0i64;
  v4 = 0i64;
  v5 = 0i64;
  if ( v1->clipboard.effectTotal > 0 )
  {
    v6 = 1703960i64;
    v7 = v15;
    v8 = v15;
    v9 = v15;
    do
    {
      if ( *(_DWORD *)(&v1->inited + v6) == 1 || *(_DWORD *)(&v1->inited + v6) == 2 || *(_DWORD *)(&v1->inited + v6) == 3 || *(_DWORD *)(&v1->inited + v6) == 4 || *(_DWORD *)(&v1->inited + v6) == 5 )
      {
        if ( (CreateFxTool *)((char *)v1 + 104 * v2) != (CreateFxTool *)-16i64 )
        {
          v9 = v1->clipboard.effectData[v2].oneShotFxDef.origin.v[0];
          v7 = v1->clipboard.effectData[v2].oneShotFxDef.origin.v[1];
          v8 = v1->clipboard.effectData[v2].oneShotFxDef.origin.v[2];
        }
      }
      else
      {
        LODWORD(v14) = *(_DWORD *)(&v1->inited + v6);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v14) )
          __debugbreak();
        v1 = s_createFxTool;
      }
      ++v2;
      v6 += 40i64;
      v10 = v3;
      *(float *)&v10 = *(float *)&v3 + v9;
      v3 = v10;
      v11 = v4;
      *(float *)&v11 = *(float *)&v4 + v7;
      v4 = v11;
      v12 = v5;
      *(float *)&v12 = *(float *)&v5 + v8;
      v5 = v12;
    }
    while ( v2 < v1->clipboard.effectTotal );
  }
  v13 = 1.0 / (float)v1->clipboard.effectTotal;
  v1->clipboard.vCentroid.v[0] = *(float *)&v3 * v13;
  v1->clipboard.vCentroid.v[2] = *(float *)&v5 * v13;
  v1->clipboard.vCentroid.v[1] = *(float *)&v4 * v13;
  s_createFxTool->clipboard.vPlayerAngles = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->predictedPlayerState.viewangles;
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
  char *v3; 
  CreateFxTool *v4; 
  bool *v5; 
  CreateFxTool *v6; 

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
      v3 = (char *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x80ui64, 4ui64, 1);
      if ( !v3 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
      v4 = s_createFxTool;
      *(_QWORD *)v3 = &CreateFxDeleteCommand::`vftable';
      *((_DWORD *)v3 + 3) = 0;
      *((_DWORD *)v3 + 2) = v2;
      v5 = &v4->inited + 40 * v2;
      if ( !*((_DWORD *)v5 + 1605686) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1335, ASSERT_TYPE_ASSERT, "(effectStateData.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectStateData.effectType != CreateFxEffectType::None") )
        __debugbreak();
      *((_DWORD *)v3 + 3) = *((_DWORD *)v5 + 1605686);
      *((_QWORD *)v3 + 15) = *((_QWORD *)v5 + 802845);
      v6 = s_createFxTool;
      *(__m256i *)(v3 + 16) = *(__m256i *)s_createFxTool->scratchData[v2].oneShotFxDef.origin.v;
      *(__m256i *)(v3 + 48) = *(__m256i *)&v6->scratchData[v2].reactiveEntDef.effectSound.name;
      *(__m256i *)(v3 + 80) = *((__m256i *)&v6->scratchData[v2].reactiveEntDef + 2);
      *((double *)v3 + 14) = *((double *)&v6->scratchData[v2].reactiveEntDef + 12);
      (**(void (__fastcall ***)(void *))v3)(v3);
      CG_CreateFx_PushUndoCommand((CreateFxCommand *const)v3);
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
  float v9; 
  float v10; 
  float v13; 
  bool v15; 
  bool v16; 
  bool v17; 
  double Float_Internal; 
  bool v19; 
  __int128 highlightedColor; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  ClientRootDef *v25; 
  const char *v26; 
  vec4_t color; 
  vec3_t end; 

  v9 = viewPos->v[1] - origin->v[1];
  v10 = viewPos->v[2] - origin->v[2];
  v13 = fsqrt((float)((float)(v9 * v9) + (float)((float)(viewPos->v[0] - origin->v[0]) * (float)(viewPos->v[0] - origin->v[0]))) + (float)(v10 * v10));
  if ( v13 <= maxDistance && v13 > 0.0 )
  {
    v15 = !text || !*text;
    v16 = s_createFxTool && s_createFxTool->enabled;
    v17 = isSpatiallyActive && !v16;
    Float_Internal = Dvar_GetFloat_Internal(createfx_drawdist);
    v19 = *(float *)&Float_Internal > v13;
    if ( v16 )
    {
      highlightedColor = _xmm;
    }
    else if ( v15 )
    {
      highlightedColor = (__int128)colorRed;
    }
    else if ( v17 )
    {
      highlightedColor = (__int128)s_effectTypeColors[type].highlightedColor;
    }
    else
    {
      highlightedColor = (__int128)s_effectTypeColors[type].defaultColor;
    }
    color = (vec4_t)highlightedColor;
    if ( v19 )
    {
      CG_CreateFx_Draw3DIcon(localClientNum, scrPlace, origin, v13, &color, type);
      if ( !v15 )
        CG_CreateFx_Draw3DText(localClientNum, scrPlace, origin, v13, &color, 0, text);
      if ( rootIndex != -1 )
      {
        v23 = origin->v[1];
        end.v[0] = origin->v[0];
        v24 = origin->v[2];
        v25 = &cm.mapEnts->clientSideEffects.roots[rootIndex];
        end.v[1] = v23;
        end.v[2] = v24 - 10.0;
        v26 = SL_ConvertToStringSafe(v25->path);
        CG_CreateFx_Draw3DText(localClientNum, scrPlace, &end, v13, &color, 0, v26);
      }
    }
    else
    {
      v21 = origin->v[1];
      end.v[0] = origin->v[0];
      end.v[2] = origin->v[2];
      end.v[1] = v21;
      v22 = Dvar_GetFloat_Internal(createfx_worldIconSize);
      end.v[2] = *(float *)&v22 + end.v[2];
      CG_DebugLine(origin, &end, &color, 0, 0);
    }
  }
}

/*
==============
CG_CreateFx_Draw3DIcon
==============
*/
void CG_CreateFx_Draw3DIcon(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *origin, float worldDistance, const vec4_t *color, CreateFxEffectType type)
{
  const dvar_t *v6; 
  float v10; 
  __int64 t1; 
  int s2; 
  vec2_t outScreenPos; 

  v6 = createfx_worldIconSize;
  if ( !createfx_worldIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v10 = (float)(v6->current.value * 1100.0) / worldDistance;
  CG_WorldPosToScreenPosReal(localClientNum, scrPlace, origin, &outScreenPos);
  outScreenPos.v[0] = (float)(v10 * -0.5) + outScreenPos.v[0];
  outScreenPos.v[1] = outScreenPos.v[1] - v10;
  if ( (unsigned int)type >= 7 )
  {
    s2 = 7;
    LODWORD(t1) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3864, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( s_effectTypeMaterials ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( s_effectTypeMaterials )\n\t%i not in [0, %i)", t1, s2) )
      __debugbreak();
  }
  CL_DrawStretchPicPhysical(outScreenPos.v[0], outScreenPos.v[1], v10, v10, 0.0, 0.0, 1.0, 1.0, color, s_effectTypeMaterials[type]);
}

/*
==============
CG_CreateFx_Draw3DRepresentation
==============
*/
void CG_CreateFx_Draw3DRepresentation(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *fxOrigin, const vec3_t *fxAngles, const vec4_t *color, const CreateFxDataState *fxState, const CreateFXDataUnion *data, const char *const text, const bool isGhost)
{
  const char *v12; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v14; 
  float value; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 effectType; 
  FXRegisteredDef *p_anglesModelHandle; 
  int v23; 
  bool v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  __int64 fromServer; 
  char *v38; 
  vec3_t outOrg; 
  vec3_t *angles; 
  const CreateFXDataUnion *v41; 
  __int64 v42; 
  vec3_t xyz; 
  tmat33_t<vec3_t> axis; 

  v42 = -2i64;
  angles = (vec3_t *)fxAngles;
  v41 = data;
  v12 = text;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3946, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3947, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v14 = createfx_worldIconSize;
  if ( !createfx_worldIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  value = v14->current.value;
  v16 = value * 0.035;
  v17 = (float)((float)R_TextHeight(cls.bigDevFont) * (float)(value * 0.035)) * 0.60000002;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v18 = outOrg.v[0];
  v19 = outOrg.v[1];
  v20 = fsqrt((float)((float)((float)(fxOrigin->v[1] - outOrg.v[1]) * (float)(fxOrigin->v[1] - outOrg.v[1])) + (float)((float)(fxOrigin->v[0] - outOrg.v[0]) * (float)(fxOrigin->v[0] - outOrg.v[0]))) + (float)((float)(fxOrigin->v[2] - outOrg.v[2]) * (float)(fxOrigin->v[2] - outOrg.v[2])));
  if ( v20 > 0.0 )
  {
    effectType = fxState->effectType;
    if ( isGhost || !fxState->selected )
    {
      if ( s_createFxTool->menuDrawMode != COUNT )
        CG_CreateFx_Draw3DIcon(localClientNum, scrPlace, fxOrigin, v20, color, fxState->effectType);
    }
    else
    {
      p_anglesModelHandle = &s_createFxTool->anglesModelHandle;
      if ( s_createFxTool->editRotation == isGhost )
        p_anglesModelHandle = &s_createFxTool->axisModelHandle;
      AnglesToAxis(angles, &axis);
      if ( v20 > 256.0 || fxState->occluded )
      {
        CL_AddOrientedDebugStar(fxOrigin, &axis, color, v20 * 0.0035000001, 0, 0);
        v12 = text;
      }
      else
      {
        FX_PlayOrientedEffect(LOCAL_CLIENT_0, p_anglesModelHandle, 0, fxOrigin, &axis);
        v12 = text;
      }
    }
    if ( (s_createFxTool->menuDrawMode & 0xFFFFFFFD) == 0 || *(_DWORD *)fxState->visualState )
    {
      v23 = *(_DWORD *)fxState->visualState;
      v24 = v23 == 1 || !s_createFxTool->selectedEffectTotal && v23 == 2;
      CG_CreateFx_Draw3DText(localClientNum, scrPlace, fxOrigin, v20, color, v24, v12);
      if ( *(_DWORD *)fxState->visualState )
      {
        if ( !isGhost )
        {
          if ( (unsigned int)effectType >= 7 )
          {
            LODWORD(v38) = 7;
            LODWORD(fromServer) = effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3997, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( createFxEffectTypeStrings ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( createFxEffectTypeStrings )\n\t%i not in [0, %i)", fromServer, v38) )
              __debugbreak();
          }
          v25 = fxOrigin->v[0] - v18;
          v26 = LODWORD(fxOrigin->v[1]);
          v28 = v26;
          *(float *)&v28 = *(float *)&v26 - v19;
          v27 = *(float *)&v26 - v19;
          v29 = fxOrigin->v[2];
          if ( v25 != 0.0 || *(float *)&v28 != 0.0 || (float)(v29 - outOrg.v[2]) != 0.0 )
          {
            *(float *)&v28 = fsqrt((float)(*(float *)&v28 * *(float *)&v28) + (float)(v25 * v25));
            _XMM2 = v28;
            __asm
            {
              vcmpless xmm0, xmm2, cs:__real@80000000
              vblendvps xmm1, xmm2, xmm3, xmm0
            }
            xyz.v[0] = (float)((float)(v27 * (float)(1.0 / *(float *)&_XMM1)) * value) + fxOrigin->v[0];
            xyz.v[1] = *(float *)&v26 - (float)((float)(v25 * (float)(1.0 / *(float *)&_XMM1)) * value);
            xyz.v[2] = (float)(v17 * 3.0) + v29;
            CL_AddDebugString(&xyz, color, v16, createFxEffectTypeStrings[effectType], 0, 0);
            xyz.v[2] = xyz.v[2] - v17;
            v33 = j_va("Origin: (%.1f, %.1f, %.1f)", fxOrigin->v[0], fxOrigin->v[1], fxOrigin->v[2]);
            CL_AddDebugString(&xyz, &colorWhite, v16, v33, 0, 0);
            xyz.v[2] = xyz.v[2] - v17;
            v34 = j_va("Angles: (%.1f, %.1f, %.1f)", angles->v[0], angles->v[1], angles->v[2]);
            CL_AddDebugString(&xyz, &colorWhite, v16, v34, 0, 0);
            xyz.v[2] = xyz.v[2] - v17;
            if ( fxState->effectType == 3 )
            {
              v35 = SL_ConvertToString(v41->explodersDef.client.name);
              v36 = j_va("Group: %s", v35);
              CL_AddDebugString(&xyz, &colorWhite, v16, v36, 0, 0);
            }
          }
        }
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_CreateFx_Draw3DText
==============
*/
void CG_CreateFx_Draw3DText(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, const vec3_t *origin, float worldDistance, const vec4_t *color, bool isSelected, const char *text)
{
  double Float_Internal; 
  float v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  const char *v13; 
  vec3_t xyz; 

  if ( text && *text )
  {
    Float_Internal = Dvar_GetFloat_Internal(createfx_worldIconSize);
    v9 = *(float *)&Float_Internal * 0.035;
    v10 = R_TextHeight(cls.bigDevFont);
    *(float *)&Float_Internal = origin->v[1];
    xyz.v[0] = origin->v[0];
    xyz.v[2] = origin->v[2] - (float)((float)v10 * v9);
    xyz.v[1] = *(float *)&Float_Internal;
    v11 = -1i64;
    do
      ++v11;
    while ( text[v11] );
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = &text[v12];
      while ( *v13 != 47 )
      {
        --v13;
        if ( !--v12 )
          goto LABEL_11;
      }
      ++v12;
    }
LABEL_11:
    CL_AddDebugStringCentered(&xyz, color, v9, &text[v12], 0, 0);
  }
}

/*
==============
CG_CreateFx_DrawInfo
==============
*/
void CG_CreateFx_DrawInfo(LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace)
{
  __int128 v2; 
  const ScreenPlacement *v3; 
  LocalClientNum_t v4; 
  float v5; 
  float v6; 
  double v7; 
  vec4_t v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  CreateFxTool *v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  const CreateFxDataState *v14; 
  bool v15; 
  const CreateFxMapLayerDef *activeLayer; 
  const CreateFxMapLayerDef *layer; 
  bool v18; 
  int v19; 
  char occluded; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const char *aliasString; 
  __int64 v27; 
  const CreateFXDataUnion *v28; 
  const char *EffectSoundAliasName; 
  SndAlias *head; 
  const OcclusionShape *OcclusionShapeById; 
  float *v32; 
  float distMax; 
  SndAliasList *aliasList; 
  SndAlias *v35; 
  SndAliasList *Alias; 
  SndAlias *v37; 
  float damageRadius; 
  scr_string_t name; 
  int v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  const CreateFXDataUnion *data; 
  CreateFxDataState *v47; 
  float v48; 
  __int64 v49; 
  CreateFxMenuPage *v50; 
  void (__fastcall *menuDrawFunction)(CreateFxMenuPage *const, const ScreenPlacement *const); 
  Material *v52; 
  const vec4_t *v53; 
  float v54; 
  const char *v55; 
  float displayHeight; 
  float v57; 
  const char *v58; 
  __int64 v59; 
  int v60; 
  float v61; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v63; 
  int v64; 
  float v65; 
  CreateFxDataState *fxState; 
  char *text; 
  __int64 v68; 
  const CreateFxMapLayerDef *v69; 
  const char *v70; 
  bool outIsAlwaysLoaded; 
  int v72; 
  LocalClientNum_t localClientNuma; 
  int v74; 
  SndAliasList *outAlias; 
  vec3_t center; 
  vec4_t color; 
  vec4_t v78; 
  vec3_t outOrigin; 
  vec3_t scrPlacea; 
  vec3_t outAngles; 
  vec3_t effectData; 
  vec3_t direction; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t fxAngles; 
  vec3_t forward; 
  __int128 v88; 

  v3 = scrPlace;
  *(_QWORD *)scrPlacea.v = scrPlace;
  v4 = localClientNum;
  localClientNuma = localClientNum;
  if ( s_createFxTool && s_createFxTool->enabled )
  {
    if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5255, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
      __debugbreak();
    v78.v[0] = FLOAT_1_0;
    v78.v[1] = 0.0;
    v78.v[2] = 0.0;
    v5 = (float)CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time * 0.0062831854;
    v6 = (float)(sinf_0(v5) * 0.25) + 0.75;
    v7 = I_fclamp(v6, 0.0, 1.0);
    v78.v[3] = *(float *)&v7;
    v72 = 0;
    if ( s_createFxDrawCount > 0 )
    {
      v8 = v78;
      v9 = 0i64;
      v68 = 0i64;
      while ( 1 )
      {
        v10 = s_createFxDrawList[v9];
        v11 = s_createFxTool;
        v12 = v10;
        v10 *= 5i64;
        v13 = *(int *)&s_createFxTool->scratchDataState[0].visualState[8 * v10 + 4];
        v14 = (CreateFxDataState *)((char *)s_createFxTool->scratchDataState + 8 * v10);
        v15 = *(_DWORD *)&s_createFxTool->scratchDataState[0].visualState[8 * v10] == 0;
        activeLayer = s_createFxTool->activeLayer;
        layer = v14->layer;
        *(_QWORD *)effectData.v = &s_createFxTool->scratchData[v12];
        v74 = v13;
        v69 = activeLayer;
        v18 = v15 && !CG_CreateFx_IsEffectDefValid(&s_createFxTool->scratchData[v12], (const CreateFxEffectType)v13);
        v19 = *(_DWORD *)v14->visualState;
        if ( (_DWORD)v13 == 1 || (_DWORD)v13 == 2 || (_DWORD)v13 == 3 || (_DWORD)v13 == 4 || (_DWORD)v13 == 5 )
        {
          if ( *(_QWORD *)effectData.v )
          {
            center.v[0] = **(float **)effectData.v;
            *(_QWORD *)&center.y = *(_QWORD *)&v11->scratchData[v12].loopSoundsDef.origin.y;
          }
        }
        else
        {
          LODWORD(fxState) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", fxState) )
            __debugbreak();
        }
        if ( (_DWORD)v13 == 1 || (_DWORD)v13 == 2 || (_DWORD)v13 == 3 || (_DWORD)v13 == 4 || (_DWORD)v13 == 5 )
        {
          if ( (CreateFxTool *)((char *)v11 + v12 * 104) != (CreateFxTool *)-4718812i64 )
            fxAngles = v11->scratchData[v12].reactiveEntDef.angles;
        }
        else
        {
          LODWORD(fxState) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3223, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectAngles: unhandled effect type '%d'", fxState) )
            __debugbreak();
        }
        occluded = v14->occluded;
        if ( layer == v69 )
        {
          if ( v18 )
          {
            color = v8;
          }
          else
          {
            if ( v19 == 1 )
            {
              v21 = s_effectTypeColors[v13].selectedColor.v[1];
              color.v[0] = s_effectTypeColors[v13].selectedColor.v[0];
              v22 = s_effectTypeColors[v13].selectedColor.v[2];
              color.v[1] = v21;
              v23 = s_effectTypeColors[v13].selectedColor.v[3];
            }
            else if ( v19 == 2 )
            {
              v24 = s_effectTypeColors[v13].highlightedColor.v[1];
              color.v[0] = s_effectTypeColors[v13].highlightedColor.v[0];
              v22 = s_effectTypeColors[v13].highlightedColor.v[2];
              color.v[1] = v24;
              v23 = s_effectTypeColors[v13].highlightedColor.v[3];
            }
            else
            {
              v25 = s_effectTypeColors[v13].defaultColor.v[1];
              color.v[0] = s_effectTypeColors[v13].defaultColor.v[0];
              v22 = s_effectTypeColors[v13].defaultColor.v[2];
              color.v[1] = v25;
              v23 = s_effectTypeColors[v13].defaultColor.v[3];
            }
            color.v[2] = v22;
            color.v[3] = v23;
            if ( occluded )
              color.v[3] = v23 * 0.5;
          }
        }
        else
        {
          color = (vec4_t)_xmm;
        }
        if ( !v14->aliasString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3335, ASSERT_TYPE_ASSERT, "(effectState.aliasString)", (const char *)&queryFormat, "effectState.aliasString") )
          __debugbreak();
        aliasString = v14->aliasString;
        v70 = aliasString;
        if ( v14->selected )
          break;
        v27 = v68;
LABEL_52:
        if ( s_createFxTool->menuDrawMode == (COUNT|DODGE) && !*(_DWORD *)v14->visualState )
        {
          v3 = *(const ScreenPlacement **)scrPlacea.v;
        }
        else
        {
          v28 = *(const CreateFXDataUnion **)effectData.v;
          v3 = *(const ScreenPlacement **)scrPlacea.v;
          CG_CreateFx_Draw3DRepresentation(localClientNuma, *(const ScreenPlacement *const *)scrPlacea.v, &center, &fxAngles, &color, v14, *(const CreateFXDataUnion **)effectData.v, aliasString, 0);
          if ( *(_DWORD *)v14->visualState == 1 )
          {
            EffectSoundAliasName = CG_CreateFx_GetEffectSoundAliasName(v28, (const CreateFxEffectType)v13);
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
                      v32 = (float *)OcclusionShapeById;
                      if ( OcclusionShapeById )
                      {
                        if ( OcclusionShapeById->id != g_snd.defaultHash )
                        {
                          CG_CreateFx_GetEffectAngles(v28, (const CreateFxEffectType)v13, &outAngles);
                          outAngles.v[0] = outAngles.v[0] + v32[24];
                          outAngles.v[1] = outAngles.v[1] + v32[23];
                          AngleVectors(&outAngles, &forward, NULL, NULL);
                          CG_CreateFx_GetEffectOrigin(v28, (const CreateFxEffectType)v13, &outOrigin);
                          distMax = outAlias->head->distMax;
                          origin.v[0] = (float)(distMax * forward.v[0]) + outOrigin.v[0];
                          origin.v[1] = (float)(distMax * forward.v[1]) + outOrigin.v[1];
                          origin.v[2] = (float)(distMax * forward.v[2]) + outOrigin.v[2];
                          LODWORD(direction.v[1]) = LODWORD(forward.v[1]) ^ _xmm;
                          v78 = colorMagenta;
                          LODWORD(direction.v[0]) = LODWORD(forward.v[0]) ^ _xmm;
                          LODWORD(direction.v[2]) = LODWORD(forward.v[2]) ^ _xmm;
                          CG_DebugCone(&origin, &direction, v32[18], outAlias->head->distMax, &v78, 0, 0);
                          v78.v[0] = 0.5 * v78.v[0];
                          v78.v[1] = 0.5 * v78.v[1];
                          v78.v[2] = 0.5 * v78.v[2];
                          CG_DebugCone(&origin, &direction, v32[17], outAlias->head->distMax, &v78, 0, 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v9 = v27 + 1;
        v68 = v9;
        if ( ++v72 >= s_createFxDrawCount )
        {
          v4 = localClientNuma;
          goto LABEL_90;
        }
      }
      switch ( v14->effectType )
      {
        case 2:
          aliasList = v11->scratchData[v12].intervalSoundsDef.aliasList;
          if ( !aliasList )
          {
            aliasList = SND_TryFindAlias(v11->scratchData[v12].intervalSoundsDef.effectSound.name);
            if ( !aliasList )
              goto LABEL_50;
          }
          v35 = aliasList->head;
          if ( !v35 )
            goto LABEL_50;
          break;
        case 3:
          Alias = v11->scratchData[v12].oneShotFxDef.aliasList;
          if ( Alias || (Alias = SND_TryFindAlias(v11->scratchData[v12].oneShotFxDef.effectSound.name)) != NULL )
          {
            v37 = Alias->head;
            if ( v37 )
            {
              CG_DebugSphere(&center, v37->distMin, &colorRed, 1, 0);
              CG_DebugSphere(&center, Alias->head->distMax, &colorGreen, 1, 0);
            }
          }
          if ( v11->scratchData[v12].explodersDef.server.damageAmount != 0.0 )
          {
            damageRadius = v11->scratchData[v12].explodersDef.server.damageRadius;
            if ( damageRadius != 0.0 )
              CG_DebugSphere(&center, damageRadius, &colorOrange, 1, 0);
          }
          v27 = v68;
          if ( s_createFxTool->drawExploderLines )
          {
            name = v11->scratchData[v12].explodersDef.client.name;
            v40 = 0;
            v41 = 0i64;
            if ( s_createFxDrawCount > 0 )
            {
              do
              {
                if ( v41 != v68 )
                {
                  v42 = s_createFxDrawList[v41];
                  v43 = v42;
                  if ( s_createFxTool->scratchDataState[v42].effectType == 3 && s_createFxTool->scratchData[v43].explodersDef.client.name == name )
                  {
                    end = s_createFxTool->scratchData[v43].oneShotFxDef.origin;
                    CL_AddDebugLine(&center, &end, &color, 0, 0, 0);
                  }
                }
                ++v40;
                ++v41;
              }
              while ( v40 < s_createFxDrawCount );
              LODWORD(v13) = v74;
            }
          }
          goto LABEL_51;
        case 4:
          aliasList = v11->scratchData[v12].intervalSoundsDef.aliasList;
          if ( !aliasList )
          {
            aliasList = SND_TryFindAlias(v11->scratchData[v12].intervalSoundsDef.effectSound.name);
            if ( !aliasList )
              goto LABEL_49;
          }
          v35 = aliasList->head;
          if ( !v35 )
            goto LABEL_49;
          break;
        case 5:
LABEL_49:
          CG_DebugSphere(&center, s_createFxTool->scratchData[v12].reactiveEntDef.radius, &colorGreen, 1, 0);
          goto LABEL_50;
        default:
LABEL_50:
          v27 = v68;
LABEL_51:
          aliasString = v70;
          goto LABEL_52;
      }
      CG_DebugSphere(&center, v35->distMin, &colorRed, 1, 0);
      CG_DebugSphere(&center, aliasList->head->distMax, &colorGreen, 1, 0);
      goto LABEL_50;
    }
LABEL_90:
    if ( s_createFxTool->clipboard.cursorTrace.fraction < 1.0 && s_createFxTool->clipboard.effectTotal > 0 )
    {
      v44 = 0;
      v45 = 0i64;
      do
      {
        data = &s_createFxTool->clipboard.effectData[v44];
        v47 = &s_createFxTool->clipboard.effectDataState[v45];
        if ( s_createFxTool->clipboard.effectDataState[v45].effectType == 1 || s_createFxTool->clipboard.effectDataState[v45].effectType == 2 || s_createFxTool->clipboard.effectDataState[v45].effectType == 3 || s_createFxTool->clipboard.effectDataState[v45].effectType == Menu || s_createFxTool->clipboard.effectDataState[v45].effectType == 5 )
        {
          if ( (CreateFxTool *)((char *)s_createFxTool + 104 * v44) != (CreateFxTool *)-16i64 )
          {
            v48 = s_createFxTool->clipboard.effectData[v44].oneShotFxDef.origin.v[1];
            outOrigin.v[0] = data->oneShotFxDef.origin.v[0];
            outOrigin.v[2] = s_createFxTool->clipboard.effectData[v44].oneShotFxDef.origin.v[2];
            outOrigin.v[1] = v48;
          }
        }
        else
        {
          LODWORD(fxState) = s_createFxTool->clipboard.effectDataState[v45].effectType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", fxState) )
            __debugbreak();
        }
        CG_CreateFx_CalculateClipboardEntityOrigin(&outOrigin, &effectData);
        if ( !v47->aliasString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3335, ASSERT_TYPE_ASSERT, "(effectState.aliasString)", (const char *)&queryFormat, "effectState.aliasString") )
          __debugbreak();
        text = (char *)v47->aliasString;
        scrPlacea.v[0] = 0.0;
        scrPlacea.v[1] = 0.0;
        scrPlacea.v[2] = 0.0;
        CG_CreateFx_Draw3DRepresentation(v4, v3, &effectData, &scrPlacea, &colorRedFaded, v47, data, text, 1);
        ++v44;
        ++v45;
      }
      while ( v44 < s_createFxTool->clipboard.effectTotal );
    }
    v49 = -1i64;
    if ( !CL_Keys_IsCatcherActive(v4, -1) )
    {
      v88 = v2;
      v50 = s_menuPath[s_menuPathCount];
      menuDrawFunction = v50->menuDrawFunction;
      if ( menuDrawFunction )
        menuDrawFunction(v50, v3);
      v52 = s_effectTypeMaterials[0];
      v53 = &colorWhiteFaded;
      if ( s_createFxTool->highlightedEffectIndex != -1 )
        v53 = &colorYellow;
      CL_DrawStretchPic(v3, -8.0, -8.0, 3.0, 1.0, 2, 2, 0.0, 0.0, 1.0, 1.0, v53, s_effectTypeMaterials[0]);
      CL_DrawStretchPic(v3, -8.0, -8.0, 1.0, 16.0, 2, 2, 0.0, 0.0, 1.0, 1.0, v53, v52);
      CL_DrawStretchPic(v3, 6.0, -8.0, 3.0, 1.0, 2, 2, 0.0, 0.0, 1.0, 1.0, v53, v52);
      CL_DrawStretchPic(v3, 9.0, -8.0, 1.0, 16.0, 2, 2, 0.0, 0.0, 1.0, 1.0, v53, v52);
    }
    v54 = (float)R_TextHeight(cls.consoleFont);
    v55 = "OFF";
    displayHeight = (float)cls.vidConfig.displayHeight;
    v57 = displayHeight - v54;
    if ( s_createFxTool->snapToNormal )
      v55 = "ON";
    v58 = j_va("Version %s Rate:%g Snap2Angle:%d Snap2Normal:%s", "2.8", s_createFxEditRates[s_createFxEditRateIndex], CREATEFX_ANGLE_SNAPS[s_createFxTool->snapToAngleIndex], v55);
    v59 = -1i64;
    do
      ++v59;
    while ( v58[v59] );
    CL_DrawTextPhysical(v58, v59, cls.consoleFont, v54, v57, 1.0, 1.0, &colorWhite, 0);
    if ( !NET_RemoteDbgHostConsoleConnected() || s_createFxTool->lastProbeSuccess < CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time - 15000 )
    {
      v60 = 2 * R_TextHeight(cls.bigDevFont);
      v61 = v3->realViewportSize.v[0] - (float)R_TextWidth("NX Launcher Missing", 0x7FFFFFFF, cls.bigDevFont, v60);
      CL_DrawTextPhysical("NX Launcher Missing", 19, cls.bigDevFont, v61 * 0.5, (float)v60 + 50.0, 1.0, 1.0, &colorRed, 0);
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v63 = s_createFxTool;
    if ( LocalClientGlobals->time < s_createFxTool->statusMessageTimeout && s_createFxTool->statusMessageBuffer[0] )
    {
      v64 = R_TextHeight(cls.bigDevFont);
      v65 = (float)(v3->realViewportSize.v[0] - (float)R_TextWidth(v63->statusMessageBuffer, 0x7FFFFFFF, cls.bigDevFont, v64)) * 0.5;
      do
        ++v49;
      while ( v63->statusMessageBuffer[v49] );
      CL_DrawTextPhysical(v63->statusMessageBuffer, v49, cls.bigDevFont, v65, 50.0, 1.0, 1.0, &s_createFxTool->statusMessageColor, 0);
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
  CreateFxTool *v0; 
  unsigned __int16 selectedEffectTotal; 
  int v2; 
  __int64 v3; 
  int v4; 
  void *v5; 
  cg_t *LocalClientGlobals; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v0 = s_createFxTool;
  }
  selectedEffectTotal = v0->selectedEffectTotal;
  v2 = 0;
  if ( v0->selectedEffectTotal > 0 )
  {
    v3 = 7209180i64;
    do
    {
      v4 = *(_DWORD *)(&v0->inited + v3);
      CG_CreateFx_ClearRedoStack();
      while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x28 )
        CG_CreateFx_DiscardUndoSequence();
      v5 = ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x28ui64, 4ui64, 1);
      if ( !v5 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
      *(_QWORD *)v5 = &CreateFxDropToGroundCommand::`vftable';
      *((_DWORD *)v5 + 2) = v4;
      CG_CreateFx_GetScratchEffectOrigin(v4, (vec3_t *)v5 + 1);
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      v7 = *((float *)v5 + 5);
      v8 = *((float *)v5 + 3);
      v9 = *((float *)v5 + 4);
      start.v[2] = v7 + 1.0;
      end.v[2] = v7 - 16384.0;
      start.v[0] = v8;
      start.v[1] = v9;
      end.v[0] = v8;
      end.v[1] = v9;
      PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_CLIENT_FIRST, &results, &start, &end, &bounds_origin, LocalClientGlobals->predictedPlayerState.clientNum, 0, 41969969, 0, NULL, All);
      if ( results.fraction >= 1.0 )
      {
        *((_DWORD *)v5 + 6) = *((_DWORD *)v5 + 3);
        *((_DWORD *)v5 + 7) = *((_DWORD *)v5 + 4);
        *((_DWORD *)v5 + 8) = *((_DWORD *)v5 + 5);
      }
      else
      {
        v10 = results.position.v[1];
        *((float *)v5 + 6) = results.position.v[0];
        *((float *)v5 + 8) = results.position.v[2];
        *((float *)v5 + 7) = v10;
      }
      (**(void (__fastcall ***)(void *))v5)(v5);
      CG_CreateFx_PushUndoCommand((CreateFxCommand *const)v5);
      v0 = s_createFxTool;
      ++v2;
      v3 += 4i64;
    }
    while ( v2 < s_createFxTool->selectedEffectTotal );
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
  float v6; 
  bool v7; 
  cg_t *LocalClientGlobals; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  v6 = s_createFxEditRates[s_createFxEditRateIndex];
  v7 = CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) != 0;
  if ( !cameraRelativeEditing )
  {
    if ( CL_Keys_IsKeyDown(localClientNum, 20) || !v7 && CL_Keys_IsKeyDown(localClientNum, 132) )
    {
      outValue->v[0] = v6 + outValue->v[0];
    }
    else if ( CL_Keys_IsKeyDown(localClientNum, 21) || !v7 && CL_Keys_IsKeyDown(localClientNum, 133) )
    {
      outValue->v[0] = outValue->v[0] - v6;
    }
    if ( !CL_Keys_IsKeyDown(localClientNum, 22) && !CL_Keys_IsKeyDown(localClientNum, 134) )
    {
      if ( CL_Keys_IsKeyDown(localClientNum, 23) || CL_Keys_IsKeyDown(localClientNum, 135) )
        outValue->v[1] = v6 + outValue->v[1];
      goto LABEL_32;
    }
    v14 = outValue->v[1] - v6;
    goto LABEL_31;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals->refdef.view.axis.m[0].v[0];
  v10 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
  if ( CL_Keys_IsKeyDown(localClientNum, 20) || !v7 && CL_Keys_IsKeyDown(localClientNum, 132) )
  {
    outValue->v[0] = (float)(v9 * v6) + outValue->v[0];
    v11 = (float)(v10 * v6) + outValue->v[1];
    goto LABEL_10;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, 21) || !v7 && CL_Keys_IsKeyDown(localClientNum, 133) )
  {
    outValue->v[0] = outValue->v[0] - (float)(v9 * v6);
    v11 = outValue->v[1] - (float)(v10 * v6);
LABEL_10:
    outValue->v[1] = v11;
  }
  v12 = LocalClientGlobals->refdef.view.axis.m[1].v[0];
  v13 = LocalClientGlobals->refdef.view.axis.m[1].v[1];
  if ( CL_Keys_IsKeyDown(localClientNum, 22) || CL_Keys_IsKeyDown(localClientNum, 134) )
  {
    outValue->v[0] = (float)(v12 * v6) + outValue->v[0];
    v14 = (float)(v13 * v6) + outValue->v[1];
  }
  else
  {
    if ( !CL_Keys_IsKeyDown(localClientNum, 23) && !CL_Keys_IsKeyDown(localClientNum, 135) )
      goto LABEL_32;
    outValue->v[0] = outValue->v[0] - (float)(v12 * v6);
    v14 = outValue->v[1] - (float)(v13 * v6);
  }
LABEL_31:
  outValue->v[1] = v14;
LABEL_32:
  if ( !s_createFxTool->keyNeedsRelease[2] && CL_Keys_IsKeyDown(localClientNum, 2) )
    goto LABEL_40;
  if ( CL_Keys_IsKeyDown(localClientNum, 4) || CL_Keys_IsKeyDown(localClientNum, 132) && v7 )
  {
    outValue->v[2] = v6 + outValue->v[2];
    return;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, 133) && v7 )
LABEL_40:
    outValue->v[2] = outValue->v[2] - v6;
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
  __int64 v2; 
  CreateFxEffectType effectType; 
  __int64 v5; 
  CreateFXDataUnion *v6; 
  double v7; 
  const char *result; 
  const char *v9; 
  const char ***v10; 
  char *v11; 
  scr_string_t *v12; 
  __int64 v13; 

  v2 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7705, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, 0x4000) )
    __debugbreak();
  if ( *(int *)fieldInfo->type < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7706, ASSERT_TYPE_ASSERT, "(fieldInfo.type >= CreateFxEffectFieldType::VARIABLE_BEGIN)", (const char *)&queryFormat, "fieldInfo.type >= CreateFxEffectFieldType::VARIABLE_BEGIN") )
    __debugbreak();
  effectType = s_createFxTool->scratchDataState[v2].effectType;
  v5 = v2;
  v6 = NULL;
  if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
  {
    v6 = &s_createFxTool->scratchData[v5];
  }
  else
  {
    LODWORD(v13) = effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3325, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectBytes: unhandled effect type '%d'", v13) )
      __debugbreak();
  }
  switch ( *(_DWORD *)fieldInfo->type )
  {
    case 2:
      v7 = *(float *)((char *)v6->oneShotFxDef.origin.v + fieldInfo->ofs);
      return j_va("%g", v7);
    case 3:
      v7 = (float)((float)*(int *)((char *)v6->oneShotFxDef.origin.v + fieldInfo->ofs) * 0.001);
      return j_va("%g", v7);
    case 4:
      v10 = (const char ***)((char *)v6 + fieldInfo->ofs);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7736, ASSERT_TYPE_ASSERT, "(fxDef)", (const char *)&queryFormat, "fxDef") )
        __debugbreak();
      if ( !*v10 )
        goto LABEL_37;
      result = CreateFxAssetPalette::getAliasForAsset(&s_createFX_paletteFX, **v10);
      break;
    case 5:
      v11 = (char *)v6 + fieldInfo->ofs;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7748, ASSERT_TYPE_ASSERT, "(lookup)", (const char *)&queryFormat, "lookup") )
        __debugbreak();
      return *(const char **)v11;
    case 6:
    case 7:
    case 8:
      v12 = (scr_string_t *)((char *)v6 + fieldInfo->ofs);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7759, ASSERT_TYPE_ASSERT, "(stringValue)", (const char *)&queryFormat, "stringValue") )
        __debugbreak();
      return SL_ConvertToString(*v12);
    case 9:
      v9 = "false";
      if ( *((_BYTE *)v6->oneShotFxDef.origin.v + fieldInfo->ofs) )
        return "true";
      return v9;
    default:
      LODWORD(v13) = *(_DWORD *)fieldInfo->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7764, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_Get: unhandled field type '%d'", v13) )
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
  CreateFXDataUnion *v7; 
  scr_string_t v10; 
  __int64 v11; 

  v4 = storageIndex;
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7774, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !s_createFxTool->imported && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7775, ASSERT_TYPE_ASSERT, "(s_createFxTool->imported)", (const char *)&queryFormat, "s_createFxTool->imported") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x4000 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7776, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v11, 0x4000) )
      __debugbreak();
  }
  v7 = NULL;
  if ( s_createFxTool->scratchDataState[v4].effectType == 1 || s_createFxTool->scratchDataState[v4].effectType == 2 || s_createFxTool->scratchDataState[v4].effectType == 3 || s_createFxTool->scratchDataState[v4].effectType == Menu || s_createFxTool->scratchDataState[v4].effectType == 5 )
  {
    v7 = &s_createFxTool->scratchData[v4];
  }
  else
  {
    LODWORD(v11) = s_createFxTool->scratchDataState[v4].effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3325, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectBytes: unhandled effect type '%d'", v11) )
      __debugbreak();
  }
  switch ( *(_DWORD *)fieldInfo->type )
  {
    case 2:
      *(double *)&_XMM0 = atof(asset);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      *(float *)((char *)v7->oneShotFxDef.origin.v + fieldInfo->ofs) = *(float *)&_XMM1;
      break;
    case 3:
      *(double *)&_XMM0 = atof(asset);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      *(_DWORD *)((char *)v7->oneShotFxDef.origin.v + fieldInfo->ofs) = (int)(float)(*(float *)&_XMM1 * 1000.0);
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
      v10 = *(_DWORD *)((char *)v7->oneShotFxDef.origin.v + fieldInfo->ofs);
      if ( v10 )
        SL_RemoveRefToString(v10);
      *(_DWORD *)((char *)v7->oneShotFxDef.origin.v + fieldInfo->ofs) = SL_GetString(asset, 0);
      break;
    case 9:
      *((_BYTE *)v7->oneShotFxDef.origin.v + fieldInfo->ofs) = *asset == 49 || *asset == 116;
      break;
    default:
      LODWORD(v11) = *(_DWORD *)fieldInfo->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7841, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_Set: unhandled field type '%d'", v11) )
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
  CreateFxEffectFieldInfo *v9; 
  __int128 v10; 
  double v11; 
  CreateFxAssetPalette *v12; 
  CreateFxTool *v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  char result; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
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
    LODWORD(v18) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6590, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFields ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFields )\n\t%i not in [0, %i)", v18, 6) )
      __debugbreak();
    LODWORD(v21) = 6;
    LODWORD(v19) = v6;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6591, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFieldCount ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFieldCount )\n\t%i not in [0, %i)", v19, v21);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6586, ASSERT_TYPE_ASSERT, "(effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectType != CreateFxEffectType::None");
  }
  if ( v8 )
    __debugbreak();
LABEL_17:
  v9 = s_createFxEffectFields[v6];
  if ( (unsigned int)v4 >= s_createFxEffectFieldCount[v6] )
  {
    LODWORD(v20) = s_createFxEffectFieldCount[v6];
    LODWORD(v18) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6596, ASSERT_TYPE_ASSERT, "(unsigned)( fieldIndex ) < (unsigned)( fieldCount )", "fieldIndex doesn't index fieldCount\n\t%i not in [0, %i)", v18, v20) )
      __debugbreak();
  }
  v10 = *(_OWORD *)v9[v4].type;
  v11 = *(double *)&v9[v4].description;
  *(_OWORD *)fieldInfo.type = v10;
  *(double *)&fieldInfo.description = v11;
  if ( !(_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7995, ASSERT_TYPE_ASSERT, "(fieldInfo.type != CreateFxEffectFieldType::FXTYPE)", (const char *)&queryFormat, "fieldInfo.type != CreateFxEffectFieldType::FXTYPE") )
    __debugbreak();
  if ( isNewAssetName )
  {
    if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7931, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    if ( !s_createFxTool->imported && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7932, ASSERT_TYPE_ASSERT, "(s_createFxTool->imported)", (const char *)&queryFormat, "s_createFxTool->imported") )
      __debugbreak();
    if ( ((unsigned int)(v10 - 2) <= 1 || (_DWORD)v10 == 9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7933, ASSERT_TYPE_ASSERT, "(type != CreateFxEffectFieldType::FLOAT && type != CreateFxEffectFieldType::DELAY && type != CreateFxEffectFieldType::BOOL)", (const char *)&queryFormat, "type != CreateFxEffectFieldType::FLOAT && type != CreateFxEffectFieldType::DELAY && type != CreateFxEffectFieldType::BOOL") )
      __debugbreak();
    switch ( (int)v10 )
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
        v12 = &s_createFX_paletteExploderGroups;
        goto LABEL_41;
      case 7:
        v12 = &s_createFX_paletteEarthquakeGroups;
        goto LABEL_41;
      case 8:
        v12 = &s_createFX_paletteRumbleGroups;
LABEL_41:
        asset = CG_CreateFx_EffectField_AddNewScriptStringToPalette(v12, asset);
LABEL_42:
        if ( asset )
          goto LABEL_43;
        goto $LN92_4;
      default:
        LODWORD(v18) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7980, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectField_AttemptToAddNewAssetToPalette: unhandled field type '%d'", v18) )
          __debugbreak();
$LN92_4:
        result = 0;
        break;
    }
  }
  else
  {
LABEL_43:
    v13 = s_createFxTool;
    v14 = 0;
    if ( s_createFxTool->selectedEffectTotal > 0 )
    {
      v15 = 7209180i64;
      do
      {
        v16 = *(int *)(&v13->inited + v15);
        if ( v13->scratchDataState[v16].effectType != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8009, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType == effectType)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType == effectType") )
          __debugbreak();
        CG_CreateFx_StopEffect(v16);
        CG_CreateFx_EffectField_Set(v16, &fieldInfo, asset);
        CG_CreateFx_StartEffect(v16);
        v13 = s_createFxTool;
        ++v14;
        v15 += 4i64;
      }
      while ( v14 < s_createFxTool->selectedEffectTotal );
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
  __m256i v10; 
  __m256i v11; 
  double v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  double v16; 
  size_t v18; 
  __int64 v19; 
  _BYTE Buf2[96]; 
  double v21; 
  _BYTE Buf1[96]; 
  double v23; 

  effectType = leftState->effectType;
  v5 = rightState->effectType;
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
  v10 = *(__m256i *)&leftData->reactiveEntDef.effectSound.name;
  *(__m256i *)Buf1 = *(__m256i *)leftData->oneShotFxDef.origin.v;
  v11 = *((__m256i *)&leftData->reactiveEntDef + 2);
  *(__m256i *)&Buf1[32] = v10;
  v12 = *((double *)&leftData->reactiveEntDef + 12);
  *(__m256i *)&Buf1[64] = v11;
  v13 = *(__m256i *)rightData->oneShotFxDef.origin.v;
  v23 = v12;
  v14 = *(__m256i *)&rightData->reactiveEntDef.effectSound.name;
  *(__m256i *)Buf2 = v13;
  v15 = *((__m256i *)&rightData->reactiveEntDef + 2);
  *(__m256i *)&Buf2[32] = v14;
  v16 = *((double *)&rightData->reactiveEntDef + 12);
  *(__m256i *)&Buf2[64] = v15;
  v21 = v16;
  switch ( effectType )
  {
    case 1:
      goto LABEL_26;
    case 2:
      v18 = 40i64;
      break;
    case 3:
      v18 = 104i64;
      break;
    case 4:
      v18 = 48i64;
      break;
    case 5:
LABEL_26:
      v18 = 56i64;
      return memcmp_0(Buf1, Buf2, v18) == 0;
    default:
      LODWORD(v19) = effectType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2083, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_EffectsAreEqual: unhandled effect type '%d'", v19) )
        __debugbreak();
      return 0;
  }
  return memcmp_0(Buf1, Buf2, v18) == 0;
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
void CG_CreateFx_Enter_f()
{
  const dvar_t *v0; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  int RootLookAt; 
  ClientRootDef *v3; 
  const char *v4; 
  vec3_t *p_angles; 
  vec3_t *p_origin; 
  char *v7; 
  const char *v8; 
  __int64 v9; 
  char *v10; 
  vec3_t rootAngles; 
  vec3_t rootOrigin; 
  char dest[64]; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && (!s_createFxTool || !s_createFxTool->enabled) )
  {
    v0 = DCONST_DVARBOOL_cg_cfx_debug_effects;
    if ( !DCONST_DVARBOOL_cg_cfx_debug_effects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_effects") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled && CG_HaveMapEntsEffectsMultipleRoots() )
    {
      ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
      RootLookAt = CgClientSideEffectsSystem::GetRootLookAt(ClientSideEffectsSystem);
      if ( RootLookAt != -1 )
      {
        v3 = &cm.mapEnts->clientSideEffects.roots[RootLookAt];
        v4 = SL_ConvertToStringSafe(v3->path);
        if ( I_strstr(v4, "prefabs/") == v4 )
        {
          v8 = v4 + 8;
          v9 = -1i64;
          do
            ++v9;
          while ( v8[v9] );
          Core_strncpy(rootName, 0x40ui64, v8, (unsigned int)v9);
          v10 = strstr_0(rootName, ".map");
          if ( v10 )
          {
            *v10 = 0;
            if ( rootName[0] )
            {
              p_angles = &v3->angles;
              p_origin = &v3->origin;
              v7 = rootName;
LABEL_17:
              CG_CreateFx_EnterRoot(v7, p_origin, p_angles);
              return;
            }
          }
          else
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280C10, 335i64, v4, ".map");
          }
        }
        else
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280BB0, 334i64, v4, "client_createfx_root", "prefabs/");
        }
      }
      Com_Printf_NoFilter("[CreateFx] No root look at, reverting to base map\n");
    }
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    Com_sprintf<64>((char (*)[64])dest, "%s%s_cfx", "createfx/", cls.m_activeGameMapName);
    rootAngles.v[0] = 0.0;
    rootAngles.v[1] = 0.0;
    rootAngles.v[2] = 0.0;
    rootOrigin.v[0] = 0.0;
    rootOrigin.v[1] = 0.0;
    rootOrigin.v[2] = 0.0;
    p_angles = &rootAngles;
    p_origin = &rootOrigin;
    v7 = dest;
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
  __int64 v16; 
  CreateFxTool *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v22; 
  int time; 
  fileHandle_t outFile; 
  fileHandle_t dest[34]; 
  char v27[272]; 
  char v28[272]; 
  char v29[272]; 

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
        v16 = 8391616i64;
        do
        {
          FS_Printf((fileHandle_t)handle, "entity %d\n", v13);
          FS_Printf((fileHandle_t)handle, "{\n");
          v17 = s_createFxTool;
          Com_sprintf(v29, 0x104ui64, "%s%s%s", "prefabs/", *(const char **)((char *)&s_createFxTool->menuDrawMode + v16), ".map");
          FS_Printf((fileHandle_t)handle, "\t\"footprint_mask_group\" \"default\"\n");
          FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "model", v29);
          if ( s_createFxTool->rootHasOffset )
          {
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"0 0 0\"\n", "origin");
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"0 0 0\"\n", "angles");
          }
          else
          {
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%g %g %g\"\n", "origin", *(float *)((char *)&v17->clipboard.effectData[2].explodersDef.client.name + v16), *(float *)((char *)&v17->clipboard.effectData[2].reactiveEntDef + v16 + 60), v17->clipboard.effectData[2].explodersDef.server.origin.v[(unsigned __int64)v16 / 4]);
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%g %g %g\"\n", "angles", v17->clipboard.effectData[2].explodersDef.server.origin.v[(unsigned __int64)v16 / 4 + 1], v17->clipboard.effectData[2].explodersDef.server.origin.v[(unsigned __int64)v16 / 4 + 2], *(float *)((char *)&v17->clipboard.effectData[2].explodersDef.server.delayMsec + v16));
          }
          v18 = (char *)&v17->clipboard + v16;
          if ( (CreateFxTool *)((char *)v17 + v16) != (CreateFxTool *)-16i64 && *v18 )
            FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "mapnamefilter", v18);
          FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%s\"\n", "classname", "misc_prefab");
          FS_Printf((fileHandle_t)handle, "}\n");
          ++v13;
          ++v11;
          v16 += 304i64;
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
    Com_sprintf(v28, 0x104ui64, "/%s/%s", "main", (const char *)dest);
    v19 = (char *)&queryFormat.fmt + 3;
    if ( v2 )
      v19 = "autosave/";
    Com_sprintf(v27, 0x104ui64, "/map_source/%s%s%s%s", "prefabs/", v19, layerDef->pathString, ".map");
    Com_Printf_NoFilter("[CreateFx] Wrote %s to %s\n", layerDef->pathString, v28);
    Com_Printf_NoFilter("[CreateFx] Copying %s to %s\n", layerDef->pathString, v27);
    Dvar_SetBoolByName("unattended", 0);
    v20 = "GAMEPRINTP4ENABLED:";
    if ( v2 )
      v20 = (char *)&queryFormat.fmt + 3;
    Com_Printf_NoFilter("LAUNCHERPRINTLN:GAMEPRINTMOVEFILE:%s:%s%s>%s\n", "iw8", v20, v28, v27);
    s_createFxTool->lastExportInProgress = 1;
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v22 = s_createFxTool;
    time = LocalClientGlobals->time;
    result = v10;
    s_createFxTool->lastExportTime = time;
    v22->lastExportAutosave = v2;
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
  const dvar_t *v2; 
  char enabled; 
  CreateFxTool *v4; 
  char v5; 
  int time; 
  const dvar_t *v7; 
  _BYTE *integer64; 
  CreateFxTool *v9; 
  bool IsEditKeyDown; 
  bool v11; 
  void (*deferredCommand)(void); 
  CreateFxTool *v13; 
  int v14; 
  CreateFxTool *v15; 
  int nextAutosaveTime; 
  int v17; 
  vec3_t outOrg; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    if ( s_resumeCreateFxAfterRestart )
    {
      CG_CreateFx_InitializeIfNeeded();
      CG_CreateFx_Resume();
      s_resumeCreateFxAfterRestart = 0;
    }
    v2 = DVARBOOL_createfx_enabled;
    if ( !DVARBOOL_createfx_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "createfx_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    enabled = v2->current.enabled;
    v4 = s_createFxTool;
    v5 = s_createFxTool && s_createFxTool->enabled;
    if ( enabled != v5 )
    {
      if ( enabled )
        CG_CreateFx_Enter_f();
      else
        CG_CreateFx_Exit_f();
      v4 = s_createFxTool;
    }
    if ( v4 )
    {
      if ( v4->hasBeenEnabled )
      {
        CG_CreateFx_UpdatePendingExploders(cgameGlob->time);
        CG_CreateFx_AddSounds();
        v4 = s_createFxTool;
      }
      if ( v4 && v4->enabled )
      {
        if ( NET_RemoteDbgHostConsoleConnected() )
        {
          time = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
          v7 = DVARSTR_launcher_probe_success;
          if ( !DVARSTR_launcher_probe_success && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "launcher_probe_success") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v7);
          integer64 = (_BYTE *)v7->current.integer64;
          if ( integer64 && *integer64 )
          {
            Dvar_SetString_Internal(DVARSTR_launcher_probe_success, (const char *)&queryFormat.fmt + 3);
            v9 = s_createFxTool;
            s_createFxTool->lastProbeSuccess = time;
            v9->nextProbeTime = time + 15000;
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
          v11 = s_interruptCommandActive;
          if ( !IsEditKeyDown )
            v11 = 0;
          s_interruptCommandActive = v11;
        }
        deferredCommand = s_createFxTool->deferredCommand;
        if ( deferredCommand )
        {
          deferredCommand();
          s_createFxTool->deferredCommand = NULL;
        }
        RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
        CG_CreateFx_BuildDrawList(&outOrg, cgameGlob->refdef.view.axis.m);
        v13 = s_createFxTool;
        if ( s_createFxTool->selectedEffectTotal > 0 )
        {
          if ( !DevGui_IsActive() && !Con_IsActive(LOCAL_CLIENT_0) && !s_interruptCommandActive && !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5) && s_menuFocus == WORLD )
            CG_CreateFx_UpdateWorldMove();
          v13 = s_createFxTool;
        }
        if ( !v13->autosaveDisabledDvar->current.enabled && !v13->lastExportInProgress )
        {
          v14 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->time;
          v15 = s_createFxTool;
          nextAutosaveTime = s_createFxTool->nextAutosaveTime;
          v17 = nextAutosaveTime;
          if ( nextAutosaveTime > 0 && v14 >= nextAutosaveTime )
          {
            CG_CreateFx_Export(1);
            v15 = s_createFxTool;
            s_createFxTool->nextAutosaveTime = 0;
            v17 = 0;
          }
          if ( !v17 )
            v15->nextAutosaveTime = v14 + 1000 * v15->autosaveIntervalDvar->current.integer;
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
  __int64 v8; 
  float v9; 

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
    v8 = effectType;
    if ( isSelected )
    {
      *(_QWORD *)outColor->v = *(_QWORD *)s_effectTypeColors[v8].selectedColor.v;
      outColor->v[2] = s_effectTypeColors[v8].selectedColor.v[2];
      v9 = s_effectTypeColors[v8].selectedColor.v[3];
    }
    else if ( isHighlighted )
    {
      *(_QWORD *)outColor->v = *(_QWORD *)s_effectTypeColors[v8].highlightedColor.v;
      outColor->v[2] = s_effectTypeColors[v8].highlightedColor.v[2];
      v9 = s_effectTypeColors[v8].highlightedColor.v[3];
    }
    else
    {
      *(_QWORD *)outColor->v = *(_QWORD *)s_effectTypeColors[v8].defaultColor.v;
      outColor->v[2] = s_effectTypeColors[v8].defaultColor.v[2];
      v9 = s_effectTypeColors[v8].defaultColor.v[3];
    }
    outColor->v[3] = v9;
    if ( isOccluded )
      outColor->v[3] = v9 * 0.5;
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
  CreateFxTool *v7; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 

  v4 = effectSelection;
  _RBX = out_info;
  if ( (unsigned int)effectSelection > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6605, ASSERT_TYPE_ASSERT, "(effectSelection >= 0 && effectSelection < CREATEFX_MAX_FX)", (const char *)&queryFormat, "effectSelection >= 0 && effectSelection < CREATEFX_MAX_FX") )
    __debugbreak();
  v7 = s_createFxTool;
  _RBX->m_storageIndex = v4;
  _YMM1 = *(__m256i *)&v7->scratchDataState[v4].selected;
  __asm { vpextrd rdi, xmm1, 2 }
  _RBX->m_effectType = _RDI;
  __asm
  {
    vextractf128 xmm0, ymm1, 1
    vpextrq qword ptr [rbx+20h], xmm0, 1
  }
  if ( (unsigned int)_RDI >= 6 )
  {
    v16 = 6;
    LODWORD(v13) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6614, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFieldCount ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFieldCount )\n\t%i not in [0, %i)", v13, v16) )
      __debugbreak();
    LODWORD(v17) = 6;
    LODWORD(v14) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6615, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectFields ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectFields )\n\t%i not in [0, %i)", v14, v17) )
      __debugbreak();
  }
  v11 = s_createFxEffectFieldCount[(int)_RDI];
  _RBX->m_fields = s_createFxEffectFields[(int)_RDI];
  v12 = fieldSelection - 2;
  _RBX->m_fieldCount = v11;
  _RBX->m_fieldIndex = fieldSelection - 2;
  if ( fieldSelection - 2 < 0 || v12 >= v11 )
  {
    *(_DWORD *)_RBX->m_fieldType = fieldSelection;
  }
  else
  {
    if ( v12 >= (unsigned int)v11 )
    {
      LODWORD(v15) = v11;
      LODWORD(v13) = fieldSelection - 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6622, ASSERT_TYPE_ASSERT, "(unsigned)( out_info.m_fieldIndex ) < (unsigned)( out_info.m_fieldCount )", "out_info.m_fieldIndex doesn't index out_info.m_fieldCount\n\t%i not in [0, %i)", v13, v15) )
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
  bool v3; 
  float v4; 
  CreateFxTool *v5; 
  CreateFxTool *v6; 
  CreateFxTool *v7; 
  CreateFxTool *v8; 
  CreateFxTool *v9; 
  CreateFxTool *v10; 

  v3 = CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) != 0;
  v4 = (float)CREATEFX_ANGLE_SNAPS[s_createFxTool->snapToAngleIndex];
  if ( (!CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 20) || (v5 = s_createFxTool, s_createFxTool->keyNeedsRelease[20])) && (v3 || !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 132) || (v5 = s_createFxTool, s_createFxTool->keyNeedsRelease[132])) )
  {
    if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 21) && (v6 = s_createFxTool, !s_createFxTool->keyNeedsRelease[21]) || !v3 && CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 133) && (v6 = s_createFxTool, !s_createFxTool->keyNeedsRelease[133]) )
    {
      outValue->v[0] = outValue->v[0] - v4;
      v6->keyNeedsRelease[21] = 1;
      v6->keyNeedsRelease[133] = 1;
    }
  }
  else
  {
    outValue->v[0] = v4 + outValue->v[0];
    v5->keyNeedsRelease[20] = 1;
    v5->keyNeedsRelease[132] = 1;
  }
  if ( (!CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 22) || (v7 = s_createFxTool, s_createFxTool->keyNeedsRelease[22])) && (!CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 134) || (v7 = s_createFxTool, s_createFxTool->keyNeedsRelease[134])) )
  {
    if ( (!CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 23) || (v8 = s_createFxTool, s_createFxTool->keyNeedsRelease[23])) && (!CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 135) || (v8 = s_createFxTool, s_createFxTool->keyNeedsRelease[135])) )
    {
      if ( CG_CreateFx_IsFirstPress(2) || v3 && CG_CreateFx_IsFirstPress(133) )
      {
        v10 = s_createFxTool;
        outValue->v[2] = outValue->v[2] - v4;
        v10->keyNeedsRelease[2] = 1;
        v10->keyNeedsRelease[133] = 1;
      }
      else if ( CG_CreateFx_IsFirstPress(4) || v3 && CG_CreateFx_IsFirstPress(132) )
      {
        v9 = s_createFxTool;
        outValue->v[2] = v4 + outValue->v[2];
        v9->keyNeedsRelease[4] = 1;
        v9->keyNeedsRelease[132] = 1;
      }
    }
    else
    {
      outValue->v[1] = v4 + outValue->v[1];
      v8->keyNeedsRelease[23] = 1;
      v8->keyNeedsRelease[135] = 1;
    }
  }
  else
  {
    outValue->v[1] = outValue->v[1] - v4;
    v7->keyNeedsRelease[22] = 1;
    v7->keyNeedsRelease[134] = 1;
  }
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
void CG_CreateFx_GotoSelected()
{
  CreateFxTool *v0; 
  cg_t *LocalClientGlobals; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  const char *v8; 
  char *fmt; 
  __int64 v10; 
  vec3_t outCenter; 
  vec3_t outOrg; 
  vec3_t vec; 
  vec3_t forward; 
  vec3_t v15; 
  vec3_t v16; 
  vec3_t angles; 

  v0 = s_createFxTool;
  if ( s_createFxTool->selectedEffectTotal <= 0 )
  {
    if ( s_createFxTool->highlightedEffectIndex == -1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9588, ASSERT_TYPE_ASSERT, "(s_createFxTool->highlightedEffectIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "s_createFxTool->highlightedEffectIndex != INVALID_EFFECT_INDEX") )
        __debugbreak();
      v0 = s_createFxTool;
    }
    CG_CreateFx_GetScratchEffectOrigin(v0->highlightedEffectIndex, &outCenter);
  }
  else
  {
    CG_CreateFx_CalculateSelectionCenter(&outCenter);
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v2 = outCenter.v[0];
  v3 = outCenter.v[1];
  v4 = outCenter.v[2];
  vec.v[0] = outOrg.v[0] - outCenter.v[0];
  vec.v[1] = outOrg.v[1] - outCenter.v[1];
  vec.v[2] = outOrg.v[2] - outCenter.v[2];
  vectoangles(&vec, &angles);
  AngleVectors(&angles, &forward, NULL, NULL);
  v5 = (float)(200.0 * forward.v[1]) + v3;
  v6 = (float)(200.0 * forward.v[0]) + v2;
  v7 = (float)(200.0 * forward.v[2]) + v4;
  v15.v[0] = v2 - v6;
  v15.v[2] = v4 - v7;
  v15.v[1] = v3 - v5;
  vectoangles(&v15, &v16);
  LODWORD(v10) = (int)v16.v[0];
  LODWORD(fmt) = (int)v16.v[1];
  v8 = j_va("setviewpos %g %g %g %d %d", v6, v5, v7, fmt, v10);
  Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v8);
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
  bool v7; 
  CreateFxTool *v8; 
  CreateFxMapLayerDef *v9; 
  __int64 v10; 
  bool Fx_ParseMapFile; 
  CreateFxTool *v12; 
  int v13; 
  __int64 v14; 
  bool *v15; 
  const char *v16; 
  __int64 v17; 
  CgClientSideEffectsSystem *v18; 
  CreateFxTool *v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  vec3_t layerAngles; 
  vec3_t layerOrigin; 
  char dest[272]; 

  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
  CgClientSideEffectsSystem::Shutdown(ClientSideEffectsSystem);
  v7 = rootOrigin->v[0] != 0.0 || rootOrigin->v[1] != 0.0 || rootOrigin->v[2] != 0.0 || rootAngles->v[0] != 0.0 || rootAngles->v[1] != 0.0 || rootAngles->v[2] != 0.0;
  v8 = s_createFxTool;
  layerAngles.v[0] = 0.0;
  s_createFxTool->rootHasOffset = v7;
  v8->rootOrigin = *rootOrigin;
  v8->rootAngles = *rootAngles;
  layerAngles.v[1] = 0.0;
  layerAngles.v[2] = 0.0;
  layerOrigin.v[0] = 0.0;
  layerOrigin.v[1] = 0.0;
  layerOrigin.v[2] = 0.0;
  v9 = CG_CreateFx_AddLayer(rootName, (const char *const)&queryFormat.fmt + 3, &layerOrigin, &layerAngles);
  CG_CreateFx_SetActiveLayer(v9);
  if ( I_strstr(rootName, "maps/prefabs/") == rootName )
    Core_strcpy(dest, 0x104ui64, rootName);
  else
    Com_sprintf(dest, 0x104ui64, "%s%s", "maps/prefabs/", rootName);
  if ( !I_strstr(dest, ".map") )
    goto LABEL_16;
  v10 = -1i64;
  do
    ++v10;
  while ( dest[v10] );
  if ( *(_DWORD *)&dest[(unsigned int)v10 - 4] != *(_DWORD *)".map" )
LABEL_16:
    Com_sprintf(dest, 0x104ui64, "%s%s", dest, ".map");
  Fx_ParseMapFile = CG_CreateFx_ParseMapFile(dest, 1);
  v12 = s_createFxTool;
  v13 = 1;
  if ( s_createFxTool->layerListTotal > 1 )
  {
    v14 = 8391616i64;
    while ( Fx_ParseMapFile )
    {
      v15 = &v12->inited + v14;
      if ( !*((_BYTE *)&v12->clipboard.effectData[2].reactiveEntDef.radius + v14 + 4) )
      {
        CG_CreateFx_SetActiveLayer((const CreateFxMapLayerDef *const)(&v12->inited + v14));
        v16 = (const char *)*((_QWORD *)v15 + 1);
        if ( I_strstr(v16, "maps/prefabs/") == v16 )
          Core_strcpy(dest, 0x104ui64, v16);
        else
          Com_sprintf(dest, 0x104ui64, "%s%s", "maps/prefabs/", v16);
        if ( !I_strstr(dest, ".map") )
          goto LABEL_28;
        v17 = -1i64;
        do
          ++v17;
        while ( dest[v17] );
        if ( *(_DWORD *)&dest[(unsigned int)v17 - 4] != *(_DWORD *)".map" )
LABEL_28:
          Com_sprintf(dest, 0x104ui64, "%s%s", dest, ".map");
        Fx_ParseMapFile = CG_CreateFx_ParseMapFile(dest, 0);
        v12 = s_createFxTool;
      }
      ++v13;
      v14 += 304i64;
      if ( v13 >= v12->layerListTotal )
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
    v18 = CgClientSideEffectsSystem::GetClientSideEffectsSystem(LOCAL_CLIENT_0);
    CgClientSideEffectsSystem::Restart(v18);
    return 0;
  }
  CG_CreateFX_RegisterPalettes();
  s_createFxTool->imported = 1;
  Com_Printf_NoFilter("[CreateFx] Import DONE\n");
  v20 = s_createFxTool;
  v21 = 0;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v22 = 7078100i64;
    do
    {
      v23 = *(_DWORD *)(&v20->inited + v22);
      CG_CreateFx_UpdateEffectAlias(v23);
      CG_CreateFx_FreeSoundIndex(v23);
      CG_CreateFx_AllocSoundIndex(v23);
      CG_CreateFx_StartEffect(v23);
      v20 = s_createFxTool;
      v22 += 4i64;
      ++v21;
    }
    while ( v21 < s_createFxTool->usedEffectTotal );
  }
  if ( !v9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9177, ASSERT_TYPE_ASSERT, "(newActiveLayer)", (const char *)&queryFormat, "newActiveLayer") )
      __debugbreak();
    v20 = s_createFxTool;
  }
  v20->activeLayer = v9;
  Com_Printf_NoFilter("[CreateFx] SetActiveLayer %s\n", v9->pathString);
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
  CreateFxTool *v0; 
  CreateFxMenuPage *v1; 
  int editEffectType; 
  int v3; 
  bool v4; 

  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v0 = s_createFxTool;
  }
  if ( v0->clipboard.cursorTrace.fraction < 1.0 && 0x4000 - v0->usedEffectTotal > 0 )
  {
    v1 = s_menuPath[s_menuPathCount];
    if ( !v1 || v1->menuName != HUD_ASSET_LIST )
    {
      editEffectType = v0->editEffectType;
      v3 = 1;
      s_menuFocus = MENU;
      if ( editEffectType )
      {
        v3 = editEffectType;
        if ( editEffectType < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4444, ASSERT_TYPE_ASSERT, "(selectionCurrent >= 0)", (const char *)&queryFormat, "selectionCurrent >= 0") )
            __debugbreak();
          v0 = s_createFxTool;
        }
      }
      if ( !s_menuPath[s_menuPathCount] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4447, ASSERT_TYPE_ASSERT, "(currentPage)", (const char *)&queryFormat, "currentPage") )
          __debugbreak();
        v0 = s_createFxTool;
      }
      *(_QWORD *)&v0->m_assetList.m_count = 7i64;
      v0->m_assetList.m_title = "PROPERTIES: Type";
      v4 = v0->m_assetList.m_page < 1;
      v0->m_assetList.m_onSelected = CG_CreateFx_OnPaletteSelected_EffectTypeNew;
      v0->m_assetList.m_enumStrings = createFxEffectTypeStrings;
      v0->m_assetList.m_palette = NULL;
      if ( !v4 )
        v0->m_assetList.m_page = 0;
      v0->m_assetList.m_page = 0;
      v0->m_assetList.m_enumStrings = &createFxEffectTypeStrings[1];
      v0->m_assetList.m_count = 6;
      if ( v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4465, ASSERT_TYPE_ASSERT, "(selectionCurrent > 0)", (const char *)&queryFormat, "selectionCurrent > 0") )
        __debugbreak();
      CG_CreateFx_GotoMenu(HUD_ASSET_LIST);
      CG_CreateFx_MenuAssetList_SetCursorIndex(s_menuPath[s_menuPathCount], v3 - 1);
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
void CG_CreateFx_LoadLoose(void)
{
  Com_Printf_NoFilter("[CreateFx] LoadLoose (due to developer_createfx)\n");
  if ( s_createFxTool && s_createFxTool->hasBeenEnabled )
  {
    CG_CreateFx_Resume();
  }
  else
  {
    s_doingTemporaryCreateFxActivation = 1;
    CG_CreateFx_Enter_f();
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
  __int64 v10; 
  bool v11; 
  int v12[4]; 
  CreateFxMenuDrawPage data; 
  char *strKey[4]; 
  char *strValue[2]; 
  __int128 v16; 
  CreateFxHintText hints[8]; 
  int v18; 

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
  v16 = _XMM0;
  strValue[1] = v7;
  page->selectionIndexMax = 4;
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6347, ASSERT_TYPE_ASSERT, "(s_menuFocus != CreateFxFocusStates::EDIT)", (const char *)&queryFormat, "s_menuFocus != CreateFxFocusStates::EDIT") )
    __debugbreak();
  if ( s_menuFocus == MENU )
  {
    v12[0] = 1;
    v12[1] = 29;
    CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, (const CreateFxHintText *const)v12, 2, s_hintsMenuCommon, 2);
  }
  else
  {
    *(__m256i *)hints = _ymm;
    v18 = 53;
    CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, hints, 9, s_hintsWorldCommon, 13);
  }
  CG_CreateFx_Menu_DrawFrame(&data, "CREATE FX", 0, 0);
  if ( page->selectionIndexMax > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = v5 == 1 && v7;
      CG_CreateFx_Menu_DrawRow(&data, v5++, strKey[v10], strValue[v10], -1, v11);
      ++v10;
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
void CG_CreateFx_MenuAssetList_Draw(CreateFxMenuPage *const page, const ScreenPlacement *const scrPlace)
{
  __int128 v2; 
  __int128 v3; 
  int v6; 
  int v7; 
  int i; 
  float rowHeight; 
  float firstRowY; 
  float v13; 
  float v14; 
  float v15; 
  float headerX; 
  const char *v17; 
  int v18; 
  CreateFxAssetPalette *m_palette; 
  unsigned __int16 m_filteredCount; 
  const char *AliasForIndex; 
  int v22; 
  CreateFxHintText *hints2; 
  __int64 hintCount2; 
  CreateFxMenuDrawPage data; 
  CreateFxHintText hints[4]; 
  __int128 v27; 
  __int128 v28; 

  v28 = v2;
  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7459, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( s_menuFocus != MENU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7460, ASSERT_TYPE_ASSERT, "(s_menuFocus == CreateFxFocusStates::MENU)", (const char *)&queryFormat, "s_menuFocus == CreateFxFocusStates::MENU") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( 9 * s_createFxTool->m_assetList.m_page + i >= s_createFxTool->m_assetList.m_count )
      break;
    ++v7;
  }
  page->selectionIndexMax = v7;
  v27 = v3;
  hints[0] = SIZE_T|0x20;
  hints[1] = LONG_DOUBLE|HALF|0x20;
  hints[2] = 32;
  CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, hints, 3, s_hintsMenuCommon, 2);
  rowHeight = data.font.rowHeight;
  if ( s_createFxTool->m_assetList.m_palette )
  {
    data.frameHeight = data.font.rowHeight + data.frameHeight;
    firstRowY = data.firstRowY + data.font.rowHeight;
    data.firstHintY = data.font.rowHeight + data.firstHintY;
    data.firstRowY = data.firstRowY + data.font.rowHeight;
  }
  else
  {
    firstRowY = data.firstRowY;
  }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  CG_CreateFx_Menu_DrawFrame(&data, s_createFxTool->m_assetList.m_title, s_createFxTool->m_assetList.m_page, (int)*(float *)&_XMM2);
  if ( s_createFxTool->m_assetList.m_palette )
  {
    v13 = firstRowY - rowHeight;
    v14 = v13 - rowHeight;
    v15 = rowHeight;
    headerX = data.headerX;
    CL_DrawStretchPicPhysical(data.headerX, v14, data.frameWidth - (float)(data.frameBorder * 2.0), v15, 0.0, 0.0, 1.0, 1.0, &colorBlackFaded, s_effectTypeMaterials[0]);
    if ( s_createFxTool->m_assetFilter.m_buffer[0] )
    {
      CL_DrawTextPhysicalWithCursor(s_createFxTool->m_assetFilter.m_buffer, 0x7FFFFFFF, data.font.font, headerX, v13, data.font.fontScale, data.font.fontScale, &colorYellow, data.font.fontStyle, s_createFxTool->m_assetFilter.m_cursor, 124);
    }
    else
    {
      v17 = "<type to filter, / to search>";
      if ( s_createFxTool->m_assetList.m_palette != &s_createFX_paletteSounds )
        v17 = "<type to filter>";
      CL_DrawTextPhysical(v17, 0x7FFFFFFF, data.font.font, headerX, v13, data.font.fontScale, data.font.fontScale, &colorWhite, data.font.fontStyle);
    }
  }
  if ( page->selectionIndexMax > 0 )
  {
    do
    {
      v18 = v6 + 8 * s_createFxTool->m_assetList.m_page + s_createFxTool->m_assetList.m_page;
      if ( (unsigned int)v18 >= s_createFxTool->m_assetList.m_count )
      {
        LODWORD(hintCount2) = s_createFxTool->m_assetList.m_count;
        LODWORD(hints2) = v6 + 8 * s_createFxTool->m_assetList.m_page + s_createFxTool->m_assetList.m_page;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7491, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( s_createFxTool->m_assetList.m_count )", "assetIndex doesn't index s_createFxTool->m_assetList.m_count\n\t%i not in [0, %i)", hints2, hintCount2) )
          __debugbreak();
      }
      m_palette = s_createFxTool->m_assetList.m_palette;
      if ( m_palette )
      {
        if ( (v18 < 0 || (unsigned int)v18 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v18, "signed", v18) )
          __debugbreak();
        m_filteredCount = m_palette->m_filteredCount;
        if ( (unsigned __int16)v18 >= m_filteredCount )
        {
          LODWORD(hintCount2) = m_filteredCount;
          LODWORD(hints2) = (unsigned __int16)v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 617, ASSERT_TYPE_ASSERT, "(unsigned)( filteredIndex ) < (unsigned)( m_filteredCount )", "filteredIndex doesn't index m_filteredCount\n\t%i not in [0, %i)", hints2, hintCount2) )
            __debugbreak();
        }
        AliasForIndex = CreateFxAssetPalette::getAliasForIndex(m_palette, m_palette->m_filtered[(unsigned __int16)v18]);
        if ( AliasForIndex )
          goto LABEL_40;
        v22 = 7496;
      }
      else
      {
        if ( !s_createFxTool->m_assetList.m_enumStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7501, ASSERT_TYPE_ASSERT, "(s_createFxTool->m_assetList.m_enumStrings)", (const char *)&queryFormat, "s_createFxTool->m_assetList.m_enumStrings") )
          __debugbreak();
        AliasForIndex = s_createFxTool->m_assetList.m_enumStrings[v18];
        if ( AliasForIndex )
          goto LABEL_40;
        v22 = 7503;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", v22, ASSERT_TYPE_ASSERT, "(assetString)", (const char *)&queryFormat, "assetString") )
        __debugbreak();
LABEL_40:
      CG_CreateFx_Menu_DrawRow(&data, v6++, AliasForIndex, NULL, -1, 0);
    }
    while ( v6 < page->selectionIndexMax );
  }
}

/*
==============
CG_CreateFx_MenuAssetList_Input
==============
*/
char CG_CreateFx_MenuAssetList_Input(CreateFxMenuPage *const page, LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  CreateFxTool *v10; 
  int v11; 
  int selectionIndex; 
  CreateFxTool *v13; 
  __int64 v14; 
  CreateFxAssetPalette *m_palette; 
  int v16; 
  int v19; 
  CreateFxTool *v20; 
  unsigned int v21; 
  const char *m_title; 
  CreateFxMenuPage *v23; 
  bool v24; 
  int m_propertyIndex; 
  CreateFxMapLayerDef *v26; 
  const char *pathString; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  const char *name; 
  int m_bufferCount; 
  CreateFxEditBuffer *p_m_assetFilter; 
  CreateFxAssetPalette *v34; 
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
    v10 = s_createFxTool;
    v11 = 0;
    if ( s_createFxTool->m_assetList.m_count > 0 )
    {
      key = CG_CreateFx_Handle_KeyJump(page, localClientNum, key, down);
      switch ( key )
      {
        case 1:
        case 13:
          v20 = s_createFxTool;
          v21 = page->selectionIndex + 9 * s_createFxTool->m_assetList.m_page;
          if ( v21 >= s_createFxTool->m_assetList.m_count )
          {
            LODWORD(allowNumbers) = page->selectionIndex + 9 * s_createFxTool->m_assetList.m_page;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7614, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( s_createFxTool->m_assetList.m_count )", "assetIndex doesn't index s_createFxTool->m_assetList.m_count\n\t%i not in [0, %i)", allowNumbers, s_createFxTool->m_assetList.m_count) )
              __debugbreak();
            v20 = s_createFxTool;
          }
          m_title = v20->m_assetList.m_title;
          v20->m_assetList.m_onSelected(page, v21);
          v23 = s_menuPath[s_menuPathCount];
          if ( !v23 || v23->menuName != HUD_ASSET_LIST || s_createFxTool->m_assetList.m_title != m_title )
            return 1;
          v24 = s_createFxTool->editBuffer.effectTotal <= 0;
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
          v10 = s_createFxTool;
          v16 = s_createFxTool->m_assetList.m_page - 1;
          if ( v16 < 0 )
            v16 = 0;
          s_createFxTool->m_assetList.m_page = v16;
          goto LABEL_16;
        case 23:
        case 135:
        case 174:
          _XMM2 = 0i64;
          __asm { vroundss xmm2, xmm2, xmm1, 2 }
          v19 = (int)*(float *)&_XMM2 - 1;
          if ( s_createFxTool->m_assetList.m_page + 1 < v19 )
            v19 = s_createFxTool->m_assetList.m_page + 1;
          s_createFxTool->m_assetList.m_page = v19;
          selectionIndex = page->selectionIndex;
LABEL_14:
          CG_CreateFx_MenuAssetList_SetCursorIndex(page, selectionIndex);
          break;
        default:
          break;
      }
LABEL_15:
      v10 = s_createFxTool;
      goto LABEL_16;
    }
    if ( key != 1 && key != 13 )
    {
LABEL_16:
      if ( !v10->m_assetList.m_palette || !CG_CreateFx_BufferInput(&v10->m_assetFilter, localClientNum, key, down, time, 1, 1, 1) )
        return 0;
      v13 = s_createFxTool;
      if ( s_createFxTool->m_assetList.m_palette == &s_createFX_paletteSounds )
      {
        if ( s_createFxTool->m_assetFilter.m_bufferCount && s_createFxTool->m_assetFilter.m_buffer[0] == 47 )
        {
          v14 = -1i64;
          do
            ++v14;
          while ( s_createFxTool->m_assetFilter.m_buffer[v14 + 1] );
          if ( (unsigned int)v14 >= 4 )
          {
            CreateFxAssetPalette::init(&s_createFX_paletteSounds, "sounds");
            SND_BankEnumAliasLists((void (__fastcall *)(SndAliasList *))CG_CreateFX_SearchSoundAlias);
            v13 = s_createFxTool;
            m_palette = s_createFxTool->m_assetList.m_palette;
            m_palette->m_filteredCount = 0;
            if ( m_palette->m_count )
            {
              do
              {
                m_palette->m_filtered[m_palette->m_filteredCount] = v11;
                LOWORD(v11) = v11 + 1;
                ++m_palette->m_filteredCount;
              }
              while ( (unsigned __int16)v11 < m_palette->m_count );
            }
            v13->soundPaletteContainsSearchResults = 1;
          }
          goto LABEL_83;
        }
        if ( s_createFxTool->soundPaletteContainsSearchResults )
        {
          CreateFxAssetPalette::init(&s_createFX_paletteSounds, "sounds");
          v13 = s_createFxTool;
          if ( s_createFxTool->usedEffectTotal > 0 )
          {
            v28 = 7078100i64;
            do
            {
              v29 = *(int *)(&v13->inited + v28);
              v30 = v29;
              switch ( v13->scratchDataState[v29].effectType )
              {
                case 1:
                  goto LABEL_73;
                case 2:
                  goto LABEL_72;
                case 3:
LABEL_73:
                  name = v13->scratchData[v30].oneShotFxDef.effectSound.name;
                  break;
                case 4:
LABEL_72:
                  name = v13->scratchData[v30].intervalSoundsDef.effectSound.name;
                  break;
                case 5:
                  name = v13->scratchData[v30].reactiveEntDef.effectSound.name;
                  break;
                default:
                  LODWORD(allowNumbersa) = v13->scratchDataState[v29].effectType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3360, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectSoundAliasName: unhandled effect type '%d'", allowNumbersa) )
                    __debugbreak();
LABEL_77:
                  v13 = s_createFxTool;
                  goto LABEL_78;
              }
              if ( name )
              {
                if ( !CreateFxAssetPalette::containsAsset(&s_createFX_paletteSounds, name) )
                  CreateFxAssetPalette::add(&s_createFX_paletteSounds, name, NULL);
                goto LABEL_77;
              }
LABEL_78:
              ++v11;
              v28 += 4i64;
            }
            while ( v11 < v13->usedEffectTotal );
          }
          v13->soundPaletteContainsSearchResults = 0;
        }
        m_bufferCount = v13->m_assetFilter.m_bufferCount;
        p_m_assetFilter = &v13->m_assetFilter;
        v34 = v13->m_assetList.m_palette;
      }
      else
      {
        m_bufferCount = s_createFxTool->m_assetFilter.m_bufferCount;
        p_m_assetFilter = &s_createFxTool->m_assetFilter;
        v34 = s_createFxTool->m_assetList.m_palette;
      }
      CreateFxAssetPalette::filter(v34, p_m_assetFilter->m_buffer, m_bufferCount);
      v13 = s_createFxTool;
LABEL_83:
      CG_CreateFx_SetAssetListCount(v13->m_assetList.m_palette->m_filteredCount);
      return 1;
    }
    m_propertyIndex = s_createFxTool->m_assetList.m_propertyIndex;
    if ( m_propertyIndex == 1 )
    {
      if ( s_createFxTool->layerListTotal >= 128 )
        goto LABEL_16;
      layerAngles.v[0] = 0.0;
      layerAngles.v[1] = 0.0;
      layerAngles.v[2] = 0.0;
      layerOrigin.v[0] = 0.0;
      layerOrigin.v[1] = 0.0;
      layerOrigin.v[2] = 0.0;
      v26 = CG_CreateFx_AddLayer(s_createFxTool->m_assetFilter.m_buffer, (const char *const)&queryFormat.fmt + 3, &layerOrigin, &layerAngles);
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7643, ASSERT_TYPE_ASSERT, "(newLayer)", (const char *)&queryFormat, "newLayer") )
        __debugbreak();
      s_createFxTool->needToExportRootLayer = 1;
      pathString = v26->pathString;
      if ( pathString && !CreateFxAssetPalette::containsAsset(&s_createFX_paletteLayers, v26->pathString) )
        CreateFxAssetPalette::add(&s_createFX_paletteLayers, pathString, NULL);
      CG_CreateFx_SetEffectLayerForSelected(v26);
      v24 = s_createFxTool->editBuffer.effectTotal <= 0;
    }
    else
    {
      if ( m_propertyIndex < 2 )
        goto LABEL_16;
      if ( !CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)s_createFxTool->editEffectType, m_propertyIndex - 2, s_createFxTool->m_assetFilter.m_buffer, 1) )
        goto LABEL_15;
      v24 = s_createFxTool->editBuffer.effectTotal <= 0;
    }
LABEL_56:
    if ( !v24 )
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
  Material *material; 
  float fontScaleHeader; 
  float headerX; 
  GfxFont *font; 
  int selectionIndexMax; 
  float v13; 
  int fontStyle; 
  float fontScaleHint; 
  float v16; 
  GfxFont *v17; 
  const char *v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  int color; 

  if ( !data->page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4239, ASSERT_TYPE_ASSERT, "(data.page)", (const char *)&queryFormat, "data.page") )
    __debugbreak();
  if ( !strHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4240, ASSERT_TYPE_ASSERT, "(strHeader)", (const char *)&queryFormat, "strHeader") )
    __debugbreak();
  material = s_effectTypeMaterials[0];
  CL_DrawStretchPicPhysical(data->frameX, data->frameY, data->frameWidth, data->frameHeight, 0.0, 0.0, 1.0, 1.0, &colorBlackFaded, s_effectTypeMaterials[0]);
  fontScaleHeader = data->font.fontScaleHeader;
  headerX = data->headerX;
  font = data->font.font;
  color = data->font.fontStyle;
  if ( (unsigned int)(s_menuFocus - 1) <= 1 )
  {
    CL_DrawTextPhysical(strHeader, 0x7FFFFFFF, font, headerX, data->headerY, fontScaleHeader, fontScaleHeader, &colorYellow, color);
    selectionIndexMax = data->page->selectionIndexMax;
    if ( selectionIndexMax > 0 )
      CL_DrawStretchPicPhysical(data->frameX + 1.0, data->firstRowY - data->font.rowHeight, 4.0, (float)selectionIndexMax * data->font.rowHeight, 0.0, 0.0, 1.0, 1.0, &colorYellow, material);
  }
  else
  {
    CL_DrawTextPhysical(strHeader, 0x7FFFFFFF, font, headerX, data->headerY, fontScaleHeader, fontScaleHeader, &colorWhite, color);
  }
  if ( pageCount > 0 )
  {
    if ( pageNum >= pageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4265, ASSERT_TYPE_ASSERT, "(pageNum < pageCount)", (const char *)&queryFormat, "pageNum < pageCount") )
      __debugbreak();
    v13 = (float)(data->frameWidth * 0.75) + data->frameX;
    fontStyle = data->font.fontStyle;
    fontScaleHint = data->font.fontScaleHint;
    v16 = data->font.rowHeightHint + data->frameY;
    v17 = data->font.font;
    v18 = j_va("Page %d / %d", (unsigned int)(pageNum + 1), (unsigned int)pageCount);
    CL_DrawTextPhysical(v18, 0x7FFFFFFF, v17, v13, v16, fontScaleHint, fontScaleHint, &colorWhite, fontStyle);
  }
  v19 = 0;
  v20 = 0;
  if ( data->hintCount > 0 )
  {
    v21 = 0i64;
    do
      CG_CreateFx_Menu_DrawHint(data, data->hints[v21++], data->firstHintX, (float)((float)v20++ * data->font.rowHeightHint) + data->firstHintY, data->font.fontScaleHint);
    while ( v20 < data->hintCount );
  }
  if ( data->hintCount2 > 0 )
  {
    v22 = 0i64;
    do
    {
      CG_CreateFx_Menu_DrawHint(data, data->hints2[v22], data->firstHintX, (float)((float)(v19 + data->hintCount) * data->font.rowHeightHint) + data->firstHintY, data->font.fontScaleHint);
      ++v19;
      ++v22;
    }
    while ( v19 < data->hintCount2 );
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
  const dvar_t *v11; 
  float value; 
  GfxFont *font; 
  int v14; 
  float v15; 
  float fontScale; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float v19; 
  float frameBorder; 
  float v21; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 

  if ( (!page || !scrPlace || !hints) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4060, ASSERT_TYPE_ASSERT, "(page && scrPlace && hints)", (const char *)&queryFormat, "page && scrPlace && hints") )
    __debugbreak();
  data->hintCount = hintCount;
  data->hints2 = hints2;
  data->hintCount2 = hintCount2;
  data->page = page;
  data->hints = hints;
  integer = createfx_hintLevel->current.integer;
  if ( !integer )
    goto LABEL_9;
  if ( integer == 2 )
  {
    data->hintCount = 0;
LABEL_9:
    data->hintCount2 = 0;
  }
  data->font.font = cls.consoleFont;
  v11 = createfx_menuFontSize;
  if ( !createfx_menuFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  font = data->font.font;
  data->font.fontScaleHeader = value * 1.6;
  data->font.fontScale = value;
  data->font.fontScaleHint = value;
  v14 = R_TextHeight(font);
  data->font.fontStyle = 0;
  v15 = (float)v14 * data->font.fontScale;
  data->font.rowHeightHeader = (float)((float)v14 * data->font.fontScaleHeader) * 1.1;
  data->font.fontHeight = (float)v14;
  data->font.spaceBetweenHeaderAndBody = v15 * 0.30000001;
  data->font.spaceBetweenBodyAndHints = v15;
  data->font.rowHeight = v15 * 1.1;
  data->font.rowHeightHint = (float)((float)v14 * data->font.fontScaleHint) * 1.1;
  fontScale = data->font.fontScale;
  data->frameWidth = fontScale * 470.0;
  data->frameBorder = fontScale * 5.0;
  v17 = createfx_menuTextXOrigin;
  if ( !createfx_menuTextXOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  LODWORD(data->frameX) = v17->current.integer;
  v18 = createfx_menuTextYOrigin;
  if ( !createfx_menuTextYOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v18->current.value;
  frameBorder = data->frameBorder;
  v21 = frameBorder + data->frameX;
  v22 = data->hintCount + data->hintCount2;
  v23 = (float)(frameBorder + v19) + data->font.rowHeightHeader;
  v24 = v23 + data->font.spaceBetweenHeaderAndBody;
  data->frameY = v19;
  v25 = (float)(frameBorder * 6.0) + data->frameX;
  v26 = (float)((float)((float)page->selectionIndexMax * data->font.rowHeight) + v24) + data->font.spaceBetweenBodyAndHints;
  v27 = v24 + data->font.rowHeight;
  data->firstHintY = v26 + data->font.rowHeightHint;
  data->firstRowX = v25;
  v28 = (float)v22 * data->font.rowHeightHint;
  data->firstRowY = v27;
  data->frameHeight = (float)((float)(v28 + v26) - v19) + (float)(frameBorder * 2.0);
  data->headerX = v21;
  data->headerY = v23;
  data->firstHintX = v21;
}

/*
==============
CG_CreateFx_Menu_DrawHint
==============
*/
void CG_CreateFx_Menu_DrawHint(const CreateFxMenuDrawPage *data, const CreateFxHintText hint, float x, float y, float scale)
{
  __int64 v5; 
  __int64 v6; 
  bool v7; 
  bool v8; 
  int v9; 
  const vec4_t *v10; 
  const vec4_t *color; 
  const vec4_t *v12; 
  const vec4_t *v13; 
  float *v14; 
  int v15; 
  const char *v16; 
  GfxFont *consoleFont; 
  char *v18; 
  GfxFont *v19; 
  GfxFont *v20; 
  char *v21; 
  __int64 integer; 
  unsigned int v23; 
  int v24; 
  __int64 xScale; 
  __int64 yScale; 

  v5 = hint;
  if ( (unsigned int)hint >= 0x36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4116, ASSERT_TYPE_ASSERT, "(unsigned)( buttonInfoIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFXHints ) ) + 0 ) )", "buttonInfoIndex doesn't index ARRAY_COUNT( s_createFXHints )\n\t%i not in [0, %i)", hint, 54) )
    __debugbreak();
  v6 = v5 << 7;
  v7 = 0;
  v8 = 0;
  if ( (*(_DWORD *)&s_createFXHints[0].action[v6 + 48] & 0x100) != 0 )
    v7 = CL_Keys_IsModifierKeyDown(LOCAL_CLIENT_0, KMOD_SHIFT) == 0;
  if ( (s_createFXHints[0].action[v6 + 48] & 1) != 0 && !CL_Keys_IsModifierKeyDown(LOCAL_CLIENT_0, KMOD_CTRL) )
    v7 = 1;
  if ( (s_createFXHints[0].action[v6 + 48] & 2) != 0 && CL_Keys_IsModifierKeyDown(LOCAL_CLIENT_0, KMOD_CTRL) )
    v7 = 1;
  if ( (s_createFXHints[0].action[v6 + 48] & 4) != 0 )
    v8 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5) == 0;
  if ( (s_createFXHints[0].action[v6 + 48] & 8) != 0 && CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5) )
    v8 = 1;
  v9 = *(_DWORD *)&s_createFXHints[0].action[v6 + 48];
  if ( (v9 & 0x10) != 0 && !s_createFxTool->selectedEffectTotal )
  {
    v7 = 1;
    v8 = 1;
  }
  if ( (v9 & 0x20) != 0 && !s_createFxTool->clipboard.effectTotal )
  {
    v7 = 1;
    v8 = 1;
  }
  if ( (v9 & 0x40) != 0 && !s_createFxTool->undoCount.m_count )
  {
    v7 = 1;
    v8 = 1;
  }
  if ( (v9 & 0x80u) != 0 && !s_createFxTool->redoCount.m_count )
  {
    v7 = 1;
    v8 = 1;
  }
  if ( (v9 & 0x200) != 0 && s_createFxTool->selectedEffectTotal < 2 )
  {
    v7 = 1;
    v8 = 1;
  }
  v10 = &colorWhiteMoreFaded;
  color = &colorWhite;
  if ( v8 )
    color = &colorWhiteMoreFaded;
  CL_DrawTextPhysical(&s_createFXHints[0].buttons[v6], 0x7FFFFFFF, cls.consoleFont, x, y, scale, scale, color, 0);
  v12 = &colorWhite;
  if ( v7 )
    v12 = &colorWhiteMoreFaded;
  CL_DrawTextPhysical(&s_createFXHints[0].keys[v6], 0x7FFFFFFF, cls.consoleFont, (float)(scale * 100.0) + x, y, scale, scale, v12, 0);
  if ( !v7 || (v13 = &colorWhiteMoreFaded, !v8) )
    v13 = &colorWhite;
  CL_DrawTextPhysical(&s_createFXHints[0].action[v6], 0x7FFFFFFF, cls.consoleFont, (float)(scale * 200.0) + x, y, scale, scale, v13, 0);
  v14 = *(float **)((char *)&s_createFXHints[0].value + v6);
  if ( v14 || *(const dvar_t **)((char *)&s_createFXHints[0].valueDvar + v6) )
  {
    v15 = *(CreateFxHintValueType *)((char *)&s_createFXHints[0].valueType + v6);
    if ( v15 )
    {
      switch ( v15 )
      {
        case 1:
          if ( !v7 || !v8 )
            v10 = &colorWhite;
          v16 = "Off";
          if ( *(_BYTE *)v14 )
            v16 = "On";
          goto LABEL_74;
        case 2:
          if ( !v7 || !v8 )
            v10 = &colorWhite;
          consoleFont = cls.consoleFont;
          v18 = j_va("%g", *v14);
          v19 = consoleFont;
          v16 = v18;
          goto LABEL_75;
        case 3:
          if ( !v7 || !v8 )
            v10 = &colorWhite;
          v20 = cls.consoleFont;
          v21 = j_va("%d", *(unsigned int *)v14);
          v19 = v20;
          v16 = v21;
          goto LABEL_75;
        case 4:
          if ( !v7 || !v8 )
            v10 = &colorWhite;
          v16 = *(const char **)((char *)&s_createFXHints[0].value + v6);
          goto LABEL_74;
        case 5:
          integer = *(int *)v14;
          v23 = *(int *)((char *)&s_createFXHints[0].valueEnumStrCount + v6);
          if ( (unsigned int)integer < v23 )
            goto LABEL_70;
          v24 = 4224;
          break;
        case 6:
          if ( !*(const dvar_t **)((char *)&s_createFXHints[0].valueDvar + v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4213, ASSERT_TYPE_ASSERT, "(info.valueDvar)", (const char *)&queryFormat, "info.valueDvar") )
            __debugbreak();
          integer = (*(const dvar_t **)((char *)&s_createFXHints[0].valueDvar + v6))->current.integer;
          v23 = *(int *)((char *)&s_createFXHints[0].valueEnumStrCount + v6);
          if ( (unsigned int)integer < v23 )
            goto LABEL_70;
          v24 = 4215;
          break;
        default:
          return;
      }
      LODWORD(yScale) = v23;
      LODWORD(xScale) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", v24, ASSERT_TYPE_ASSERT, "(unsigned)( valueInt ) < (unsigned)( info.valueEnumStrCount )", "valueInt doesn't index info.valueEnumStrCount\n\t%i not in [0, %i)", xScale, yScale) )
        __debugbreak();
LABEL_70:
      if ( !v7 || !v8 )
        v10 = &colorWhite;
      v16 = (*(const char *const **)((char *)&s_createFXHints[0].valueEnumStr + v6))[integer];
LABEL_74:
      v19 = cls.consoleFont;
LABEL_75:
      CL_DrawTextPhysical(v16, 0x7FFFFFFF, v19, (float)(scale * 390.0) + x, y, scale, scale, v10, 0);
    }
  }
}

/*
==============
CG_CreateFx_Menu_DrawRow
==============
*/
void CG_CreateFx_Menu_DrawRow(CreateFxMenuDrawPage *data, const int row, const char *const strKey, const char *strValue, int cursor, bool isDisabled)
{
  bool v10; 
  const vec4_t *color; 
  float fontScale; 
  float firstRowX; 
  float v14; 
  float v15; 
  vec4_t *v16; 
  int style; 
  GfxFont *font; 
  float yScale; 
  __int64 xScale; 
  char dest[8]; 
  __int64 v22; 
  int v23; 

  if ( !data->page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4315, ASSERT_TYPE_ASSERT, "(data.page)", (const char *)&queryFormat, "data.page") )
    __debugbreak();
  if ( data->page->selectionIndexMax <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4316, ASSERT_TYPE_ASSERT, "(data.page->selectionIndexMax > 0)", (const char *)&queryFormat, "data.page->selectionIndexMax > 0") )
    __debugbreak();
  if ( (unsigned int)row >= data->page->selectionIndexMax )
  {
    LODWORD(xScale) = row;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4317, ASSERT_TYPE_ASSERT, "(unsigned)( row ) < (unsigned)( data.page->selectionIndexMax )", "row doesn't index data.page->selectionIndexMax\n\t%i not in [0, %i)", xScale, data->page->selectionIndexMax) )
      __debugbreak();
  }
  if ( !strKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4318, ASSERT_TYPE_ASSERT, "(strKey)", (const char *)&queryFormat, "strKey") )
    __debugbreak();
  v10 = (unsigned int)(s_menuFocus - 1) <= 1 && row == data->page->selectionIndex;
  if ( isDisabled )
  {
    color = &colorRed;
  }
  else
  {
    color = &colorWhite;
    if ( v10 )
      color = &colorYellow;
  }
  fontScale = data->font.fontScale;
  firstRowX = data->firstRowX;
  v14 = (float)(fontScale * 170.0) + firstRowX;
  v15 = (float)((float)row * data->font.rowHeight) + data->firstRowY;
  *(_QWORD *)dest = 0i64;
  v22 = 0i64;
  v23 = 0;
  Com_sprintf(dest, 0x14ui64, "%d.", (unsigned int)(row + 1));
  CL_DrawTextPhysical(dest, 0x7FFFFFFF, data->font.font, firstRowX, v15, data->font.fontScale, data->font.fontScale, color, data->font.fontStyle);
  CL_DrawTextPhysical(strKey, 0x7FFFFFFF, data->font.font, (float)(fontScale * 25.0) + firstRowX, v15, data->font.fontScale, data->font.fontScale, color, data->font.fontStyle);
  if ( strValue )
  {
    if ( v10 )
    {
      v16 = &colorOrange;
      if ( s_menuFocus != EDIT )
        v16 = (vec4_t *)color;
      color = v16;
    }
    style = data->font.fontStyle;
    font = data->font.font;
    yScale = data->font.fontScale;
    if ( cursor == -1 )
      CL_DrawTextPhysical(strValue, 0x7FFFFFFF, font, v14, v15, yScale, yScale, color, style);
    else
      CL_DrawTextPhysicalWithCursor(strValue, 0x7FFFFFFF, font, v14, v15, yScale, yScale, color, style, cursor, 124);
  }
}

/*
==============
CG_CreateFx_MoveSelectionToCursor
==============
*/
void CG_CreateFx_MoveSelectionToCursor()
{
  CreateFxTool *v0; 
  float v1; 
  float v2; 
  float v3; 
  int v4; 
  __int64 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int64 v9; 
  CreateFXDataUnion *v10; 
  CreateFxEffectType effectType; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 

  if ( s_createFxTool->clipboard.cursorTrace.fraction >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5727, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsCursorValid())", (const char *)&queryFormat, "CG_CreateFx_IsCursorValid()") )
    __debugbreak();
  CG_CreateFx_CalculateSelectionCenter(&s_createFxTool->selectionCenter);
  v0 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal > 0 )
  {
    s_interruptCommandActive = 1;
    CG_CreateFx_OnEditEnd();
    v0 = s_createFxTool;
  }
  CG_CreateFx_SaveSelectionToBuffer(&v0->editBuffer);
  v1 = v0->clipboard.cursorTrace.position.v[0] - v0->selectionCenter.v[0];
  v2 = v0->clipboard.cursorTrace.position.v[2] - v0->selectionCenter.v[2];
  v3 = v0->clipboard.cursorTrace.position.v[1] - v0->selectionCenter.v[1];
  v4 = 0;
  if ( v0->selectedEffectTotal > 0 )
  {
    v5 = 7209180i64;
    v6 = v17;
    v7 = v17;
    v8 = v17;
    do
    {
      v9 = *(int *)(&v0->inited + v5);
      v10 = &v0->scratchData[v9];
      effectType = v0->scratchDataState[v9].effectType;
      if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
      {
        if ( v10 )
        {
          v8 = LODWORD(v10->oneShotFxDef.origin.v[0]);
          v6 = LODWORD(v10->oneShotFxDef.origin.v[1]);
          v7 = LODWORD(v10->oneShotFxDef.origin.v[2]);
        }
      }
      else
      {
        LODWORD(v15) = effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v15) )
          __debugbreak();
      }
      v12 = v8;
      *(float *)&v12 = *(float *)&v8 + v1;
      v8 = v12;
      v13 = v6;
      *(float *)&v13 = *(float *)&v6 + v3;
      v6 = v13;
      v14 = v7;
      *(float *)&v14 = *(float *)&v7 + v2;
      v7 = v14;
      if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
      {
        if ( v10 )
        {
          v10->oneShotFxDef.origin.v[0] = *(float *)&v8;
          v10->oneShotFxDef.origin.v[1] = *(float *)&v6;
          v10->oneShotFxDef.origin.v[2] = *(float *)&v14;
        }
      }
      else
      {
        LODWORD(v15) = effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v15) )
          __debugbreak();
      }
      CG_CreateFx_OrientEffect(v10, effectType);
      if ( (unsigned int)v9 >= 0x4000 )
      {
        LODWORD(v16) = 0x4000;
        LODWORD(v15) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      CG_CreateFx_StopEffect(v9);
      CG_CreateFx_StartEffect(v9);
      v0 = s_createFxTool;
      ++v4;
      v5 += 4i64;
    }
    while ( v4 < s_createFxTool->selectedEffectTotal );
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
  CreateFxHintText *v9; 
  __m256i v10; 
  const char *v11; 
  CreateFxTool *v12; 
  const CreateFxEffectFieldInfo *m_fields; 
  __int64 v14; 
  int m_storageIndex; 
  int m_cursor; 
  const char *m_buffer; 
  int fmt; 
  CreateFxHintText *hints2; 
  int hintCount2; 
  CreateFxSelectedInfo out_info; 
  CreateFxMenuDrawPage data; 
  __int128 v23; 
  int v24; 
  int v25; 
  CreateFxHintText hints[8]; 
  __int128 v27; 
  int v28; 
  int v29; 

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
    hintCount2 = 0;
    v9 = (CreateFxHintText *)&v23;
    hints2 = NULL;
    v23 = _xmm;
    fmt = 6;
    v24 = 32;
    v25 = 33;
  }
  else
  {
    if ( s_menuFocus == MENU )
    {
      LODWORD(v23) = 1;
      if ( *(_DWORD *)out_info.m_fieldType == 9 )
      {
        DWORD1(v23) = 34;
        CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, (const CreateFxHintText *const)&v23, 2, s_hintsMenuCommon, 2);
      }
      else
      {
        *(_QWORD *)((char *)&v23 + 4) = 0x1E00000024i64;
        CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, (const CreateFxHintText *const)&v23, 3, s_hintsMenuCommon, 2);
      }
      goto LABEL_22;
    }
    if ( v6->editRotation )
      v10 = _ymm;
    else
      v10 = _ymm;
    hintCount2 = 13;
    hints2 = (CreateFxHintText *)s_hintsWorldCommon;
    v9 = hints;
    fmt = 14;
    *(__m256i *)hints = v10;
    v27 = _xmm;
    v28 = 27;
    v29 = 28;
  }
  CG_CreateFx_Menu_DrawGetData(&data, page, scrPlace, v9, fmt, hints2, hintCount2);
LABEL_22:
  CG_CreateFx_Menu_DrawFrame(&data, "PROPERTIES", 0, 0);
  if ( s_createFxTool->selectionHomogeneous )
    v11 = createFxEffectTypeStrings[out_info.m_effectType];
  else
    v11 = "Multiple Selected";
  CG_CreateFx_Menu_DrawRow(&data, 0, "Type", v11, -1, 0);
  CG_CreateFx_Menu_DrawRow(&data, 1, "Layer", out_info.m_layer->pathString, -1, 0);
  v12 = s_createFxTool;
  if ( s_createFxTool->selectionHomogeneous && (int)m_fieldCount > 0 )
  {
    m_fields = out_info.m_fields;
    v14 = m_fieldCount;
    m_storageIndex = out_info.m_storageIndex;
    while ( 1 )
    {
      if ( s_menuFocus == EDIT && v7 == data.page->selectionIndex && (unsigned int)(*(_DWORD *)m_fields->type - 2) <= 1 )
      {
        m_cursor = v12->m_numberEdit.m_cursor;
        m_buffer = v12->m_numberEdit.m_buffer;
      }
      else
      {
        m_buffer = CG_CreateFx_EffectField_Get(m_storageIndex, m_fields);
        m_cursor = -1;
      }
      CG_CreateFx_Menu_DrawRow(&data, v7++, m_fields->description, m_buffer, m_cursor, 0);
      ++m_fields;
      if ( !--v14 )
        break;
      v12 = s_createFxTool;
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
  int v11; 
  int m_fieldIndex; 
  const char *v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  CreateFxTool *v17; 
  const char *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 m_bufferCount; 
  float v22; 
  CreateFxTool *v23; 
  int v24; 
  int v25; 
  CreateFxSelectedInfo out_info; 

  if ( !page && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7054, ASSERT_TYPE_ASSERT, "(page)", (const char *)&queryFormat, "page") )
    __debugbreak();
  if ( !down )
    return 0;
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
        v11 = *(_DWORD *)out_info.m_fieldType;
        if ( *(_DWORD *)out_info.m_fieldType == 9 )
        {
          m_fieldIndex = out_info.m_fieldIndex;
          v13 = CG_CreateFx_EffectField_Get(out_info.m_storageIndex, &out_info.m_fields[out_info.m_fieldIndex]);
          CG_CreateFx_OnEditBegin();
          v14 = "true";
          v15 = m_fieldIndex;
          if ( *v13 == 116 )
            v14 = "false";
LABEL_19:
          CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)out_info.m_effectType, v15, v14, 0);
          CG_CreateFx_OnEditEnd();
          goto $LN58_17;
        }
        CG_CreateFx_OnEditBegin();
        CG_CreateFx_EffectField_BeginEdit(v11);
        if ( (unsigned int)(v11 - 2) > 1 )
          goto $LN58_17;
        v16 = CG_CreateFx_EffectField_Get(out_info.m_storageIndex, &out_info.m_fields[out_info.m_fieldIndex]);
        v17 = s_createFxTool;
        v18 = v16;
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 718, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
          __debugbreak();
        v19 = -1i64;
        v20 = -1i64;
        do
          ++v20;
        while ( v18[v20] );
        Core_strncpy(v17->m_numberEdit.m_buffer, 0x3FFui64, v18, (unsigned int)v20);
        do
          ++v19;
        while ( v17->m_numberEdit.m_buffer[v19] );
        v17->m_numberEdit.m_bufferCount = v19;
        if ( (unsigned int)v19 > 0x3FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 721, ASSERT_TYPE_ASSERT, "(m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM)", (const char *)&queryFormat, "m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM") )
          __debugbreak();
        m_bufferCount = v17->m_numberEdit.m_bufferCount;
        v17->m_numberEdit.m_cursor = m_bufferCount;
        v17->m_numberEdit.m_buffer[m_bufferCount] = 0;
        result = 1;
        break;
      case 2:
      case 27:
        if ( s_menuFocus != MENU )
          return 0;
        s_menuFocus = WORLD;
        s_createFxTool->keyNeedsRelease[Fx_Handle_KeyJump] = 1;
        return 1;
      case 20:
      case 132:
        if ( page->selectionIndex <= 0 )
          return 0;
        --page->selectionIndex;
        return 1;
      case 21:
      case 133:
        if ( page->selectionIndex >= page->selectionIndexMax - 1 )
          return 0;
        ++page->selectionIndex;
        return 1;
      case 149:
        if ( !s_createFxTool->selectionHomogeneous )
          return 0;
        CG_CreateFx_GetSelectedInfo(s_createFxTool->selectedEffectList[0], page->selectionIndex, &out_info);
        if ( *(int *)out_info.m_fieldType < 2 )
          goto $LN58_17;
        CG_CreateFx_OnEditBegin();
        v15 = out_info.m_fieldIndex;
        v14 = (char *)&queryFormat.fmt + 3;
        goto LABEL_19;
      default:
        return 0;
    }
    return result;
  }
  if ( s_menuFocus != EDIT )
    return 0;
  v22 = s_createFxEditRates[s_createFxEditRateIndex];
  CG_CreateFx_GetSelectedInfo(s_createFxTool->selectedEffectList[0], page->selectionIndex, &out_info);
  if ( (unsigned int)(*(_DWORD *)out_info.m_fieldType - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7159, ASSERT_TYPE_ASSERT, "(CG_CreateFx_ObjectProperties_IsNumber( info.m_fieldType ))", (const char *)&queryFormat, "CG_CreateFx_ObjectProperties_IsNumber( info.m_fieldType )") )
    __debugbreak();
  v23 = s_createFxTool;
  if ( s_createFxTool->editBuffer.effectTotal <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 7160, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "CG_CreateFx_IsEditPending()") )
      __debugbreak();
    v23 = s_createFxTool;
  }
  switch ( key )
  {
    case 1:
    case 13:
      CG_CreateFx_EffectField_SetForSelected((const CreateFxEffectType)out_info.m_effectType, out_info.m_fieldIndex, v23->m_numberEdit.m_buffer, 0);
      CG_CreateFx_OnEditEnd();
      result = 1;
      s_menuFocus = MENU;
      break;
    case 2:
    case 27:
      if ( v23->editBuffer.effectTotal <= 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2101, ASSERT_TYPE_ASSERT, "(CG_CreateFx_IsEditPending())", (const char *)&queryFormat, "CG_CreateFx_IsEditPending()") )
          __debugbreak();
        v23 = s_createFxTool;
      }
      s_menuFocus = MENU;
      v23->editBuffer.effectTotal = 0;
      result = 1;
      break;
    case 20:
    case 132:
      CreateFxEditBuffer::modifyNumber(&v23->m_numberEdit, v22);
      result = 1;
      break;
    case 21:
    case 133:
      CreateFxEditBuffer::modifyNumber(&v23->m_numberEdit, COERCE_CONST_FLOAT(LODWORD(v22) ^ _xmm));
      result = 1;
      break;
    case 22:
      v24 = s_createFxEditRateIndex - 1;
      if ( s_createFxEditRateIndex - 1 < 0 )
        v24 = 0;
      s_createFxEditRateIndex = v24;
      result = 1;
      break;
    case 23:
      v25 = 8;
      if ( s_createFxEditRateIndex + 1 < 8 )
        v25 = s_createFxEditRateIndex + 1;
      result = 1;
      s_createFxEditRateIndex = v25;
      break;
    case 61:
$LN58_17:
      result = 1;
      break;
    default:
      result = CG_CreateFx_BufferInput(&v23->m_numberEdit, localClientNum, key, down, time, 1, 0, 0);
      break;
  }
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
  __m256i *v8; 
  char *v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 

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
  v10 = 0;
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
      v8 = (__m256i *)(&v0->inited + v5);
      v11 = (__int64)&v0->scratchDataState[v6];
      v12 = (__int64)&v0->scratchData[v6];
      if ( !CG_CreateFx_EffectsAreEqual((const CreateFxDataState *)v7, (const CreateFXDataUnion *)(&v0->inited + v5), (const CreateFxDataState *)v11, (const CreateFXDataUnion *)v12) )
      {
        CG_CreateFx_ClearRedoStack();
        while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0xF8 )
          CG_CreateFx_DiscardUndoSequence();
        v9 = (char *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0xF8ui64, 4ui64, 1);
        if ( !v9 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
        *((_DWORD *)v9 + 2) = v6;
        *(_QWORD *)v9 = &CreateFxEditCommand::`vftable';
        *((_DWORD *)v9 + 3) = 0;
        *((_DWORD *)v9 + 32) = 0;
        if ( !*(_DWORD *)(v7 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1378, ASSERT_TYPE_ASSERT, "(beforeState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "beforeState.effectType != CreateFxEffectType::None") )
          __debugbreak();
        *((_DWORD *)v9 + 3) = *(_DWORD *)(v7 + 8);
        *((_QWORD *)v9 + 15) = *(_QWORD *)(v7 + 24);
        *(__m256i *)(v9 + 16) = *v8;
        *(__m256i *)(v9 + 48) = v8[1];
        *(__m256i *)(v9 + 80) = v8[2];
        *((double *)v9 + 14) = *(double *)v8[3].m256i_i64;
        if ( !*(_DWORD *)(v11 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1383, ASSERT_TYPE_ASSERT, "(afterState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "afterState.effectType != CreateFxEffectType::None") )
          __debugbreak();
        *((_DWORD *)v9 + 32) = *(_DWORD *)(v11 + 8);
        *((_QWORD *)v9 + 30) = *(_QWORD *)(v11 + 24);
        *(__m256i *)(v9 + 136) = *(__m256i *)v12;
        *(__m256i *)(v9 + 168) = *(__m256i *)(v12 + 32);
        *(__m256i *)(v9 + 200) = *(__m256i *)(v12 + 64);
        *((double *)v9 + 29) = *(double *)(v12 + 96);
        CG_CreateFx_PushUndoCommand((CreateFxCommand *const)v9);
        v1 = ++v10;
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
  int v11; 
  int EffectFieldIndex; 
  CreateFxTool *v13; 

  if ( !title && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4440, ASSERT_TYPE_ASSERT, "(title)", (const char *)&queryFormat, "title") )
    __debugbreak();
  if ( !onSelected && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4441, ASSERT_TYPE_ASSERT, "(onSelected)", (const char *)&queryFormat, "onSelected") )
    __debugbreak();
  if ( !enumStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4442, ASSERT_TYPE_ASSERT, "(enumStrings)", (const char *)&queryFormat, "enumStrings") )
    __debugbreak();
  if ( enumCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4443, ASSERT_TYPE_ASSERT, "(enumCount > 0)", (const char *)&queryFormat, "enumCount > 0") )
    __debugbreak();
  v11 = selectionCurrent;
  if ( selectionCurrent < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4444, ASSERT_TYPE_ASSERT, "(selectionCurrent >= 0)", (const char *)&queryFormat, "selectionCurrent >= 0") )
    __debugbreak();
  if ( !s_menuPath[s_menuPathCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4447, ASSERT_TYPE_ASSERT, "(currentPage)", (const char *)&queryFormat, "currentPage") )
    __debugbreak();
  EffectFieldIndex = CG_CreateFx_FindEffectFieldIndex((const CreateFxEffectType)s_createFxTool->editEffectType, fieldType);
  if ( EffectFieldIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4450, ASSERT_TYPE_ASSERT, "(fieldIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "fieldIndex != INVALID_EFFECT_INDEX") )
    __debugbreak();
  v13 = s_createFxTool;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  s_createFxTool->m_assetList.m_title = title;
  v13->m_assetList.m_onSelected = onSelected;
  v13->m_assetList.m_palette = NULL;
  v13->m_assetList.m_enumStrings = enumStrings;
  v13->m_assetList.m_propertyIndex = EffectFieldIndex;
  v13->m_assetList.m_count = enumCount;
  if ( v13->m_assetList.m_page >= (int)*(float *)&_XMM2 )
    v13->m_assetList.m_page = 0;
  v13->m_assetList.m_page = 0;
  if ( skipFirst )
  {
    v13->m_assetList.m_enumStrings = enumStrings + 1;
    v13->m_assetList.m_count = enumCount - 1;
    if ( selectionCurrent <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4465, ASSERT_TYPE_ASSERT, "(selectionCurrent > 0)", (const char *)&queryFormat, "selectionCurrent > 0") )
      __debugbreak();
    v11 = selectionCurrent - 1;
  }
  CG_CreateFx_GotoMenu(HUD_ASSET_LIST);
  CG_CreateFx_MenuAssetList_SetCursorIndex(s_menuPath[s_menuPathCount], v11);
}

/*
==============
CG_CreateFx_OpenAssetListWithPalette
==============
*/
void CG_CreateFx_OpenAssetListWithPalette(const char *title, void (*onSelected)(CreateFxMenuPage *const, const int), int fieldType, CreateFxAssetPalette *const palette)
{
  CreateFxTool *v8; 
  CreateFxAssetPalette *m_palette; 
  int EffectFieldIndex; 
  CreateFxTool *v11; 
  __int64 v14; 

  if ( !title && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4401, ASSERT_TYPE_ASSERT, "(title)", (const char *)&queryFormat, "title") )
    __debugbreak();
  if ( !onSelected && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4402, ASSERT_TYPE_ASSERT, "(onSelected)", (const char *)&queryFormat, "onSelected") )
    __debugbreak();
  if ( !palette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4403, ASSERT_TYPE_ASSERT, "(palette)", (const char *)&queryFormat, "palette") )
    __debugbreak();
  if ( !s_menuPath[s_menuPathCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4406, ASSERT_TYPE_ASSERT, "(currentPage)", (const char *)&queryFormat, "currentPage") )
    __debugbreak();
  v8 = s_createFxTool;
  m_palette = s_createFxTool->m_assetList.m_palette;
  if ( m_palette != palette )
  {
    memset_0(&s_createFxTool->m_assetFilter, 0, 0x400ui64);
    *(_QWORD *)&v8->m_assetFilter.m_bufferCount = 0i64;
  }
  CreateFxAssetPalette::filter(palette, v8->m_assetFilter.m_buffer, v8->m_assetFilter.m_bufferCount);
  EffectFieldIndex = CG_CreateFx_FindEffectFieldIndex((const CreateFxEffectType)s_createFxTool->editEffectType, fieldType);
  if ( EffectFieldIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4418, ASSERT_TYPE_ASSERT, "(fieldIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "fieldIndex != INVALID_EFFECT_INDEX") )
    __debugbreak();
  v11 = s_createFxTool;
  _XMM2 = 0i64;
  s_createFxTool->m_assetList.m_title = title;
  v11->m_assetList.m_onSelected = onSelected;
  v11->m_assetList.m_palette = palette;
  v11->m_assetList.m_enumStrings = NULL;
  v11->m_assetList.m_propertyIndex = EffectFieldIndex;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  v11->m_assetList.m_count = palette->m_filteredCount;
  if ( v11->m_assetList.m_page >= (int)*(float *)&_XMM2 )
    v11->m_assetList.m_page = 0;
  CG_CreateFx_GotoMenu(HUD_ASSET_LIST);
  if ( m_palette != palette )
  {
    v14 = s_menuPathCount;
    s_createFxTool->m_assetList.m_page = 0;
    CG_CreateFx_MenuAssetList_SetCursorIndex(s_menuPath[v14], 0);
  }
}

/*
==============
CG_CreateFx_OrientEffect
==============
*/
void CG_CreateFx_OrientEffect(CreateFXDataUnion *effectData, const CreateFxEffectType effectType)
{
  double v4; 
  float v5; 
  CreateFxEffectType v6; 
  vec3_t angles; 

  if ( s_createFxTool->snapToNormal && s_createFxTool->clipboard.cursorTrace.fraction < 1.0 )
  {
    vectoangles(&s_createFxTool->clipboard.cursorTrace.normal, &angles);
    v4 = AngleNormalize360(angles.v[0] + 90.0);
    angles.v[0] = *(float *)&v4;
    if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
    {
      if ( effectData != (CreateFXDataUnion *)-12i64 )
      {
        v5 = angles.v[2];
        effectData->oneShotFxDef.angles.v[0] = *(float *)&v4;
        effectData->oneShotFxDef.angles.v[1] = angles.v[1];
        effectData->oneShotFxDef.angles.v[2] = v5;
      }
    }
    else
    {
      v6 = effectType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", v6) )
        __debugbreak();
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
  __int128 v2; 
  __int128 v3; 
  const char *v4; 
  const CreateFxMapLayerDef *ActiveLayer; 
  unsigned __int64 EffectIndex; 
  CreateFxTool *v8; 
  unsigned __int64 v9; 
  CreateFxTool *v10; 
  __int64 v11; 
  bool v12; 
  char v13; 
  __int64 v14; 
  const char *v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  CreateFxTool *v19; 
  char j; 
  char v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  float *v36; 
  int v37; 
  tmat33_t<vec3_t> *p_axis; 
  vec3_t *p_rootOrigin; 
  vec3_t *p_point; 
  unsigned __int64 v41; 
  __int64 v42; 
  char v43; 
  unsigned __int64 v44; 
  char v45; 
  unsigned __int64 v46; 
  __int64 v47; 
  char v48; 
  unsigned __int64 v49; 
  char v50; 
  bool *v51; 
  __int64 v52; 
  unsigned __int64 v53; 
  __int64 v54; 
  char v55; 
  unsigned __int64 v56; 
  char v57; 
  unsigned __int64 v58; 
  __int64 v59; 
  char v60; 
  unsigned __int64 v61; 
  char v62; 
  unsigned __int64 v63; 
  __int64 v64; 
  char v65; 
  unsigned __int64 v66; 
  char v67; 
  scr_string_t v68; 
  __int64 v69; 
  int v70; 
  bool *v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  scr_string_t v78; 
  __int64 v79; 
  scr_string_t String; 
  __int64 v81; 
  __int64 v82; 
  int v83; 
  __int64 v84; 
  __int64 v85; 
  FxCombinedDef *v86; 
  __int64 v87; 
  char v88; 
  __int64 v89; 
  char v90; 
  float *v91; 
  float v92; 
  float v93; 
  bool v94; 
  char i; 
  float v96; 
  float v97; 
  float v98; 
  __int64 v100; 
  __int64 v101; 
  bool v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  int v107; 
  int v108; 
  float v109; 
  float *v110; 
  float v111; 
  float v112; 
  float v113; 
  vec3_t from; 
  vec3_t dst; 
  int v116[4]; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> rotation; 
  char s0[64]; 
  char _Buffer[272]; 
  __int128 v122; 
  __int128 v123; 

  v4 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8898, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8899, ASSERT_TYPE_ASSERT, "(effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectType != CreateFxEffectType::None") )
    __debugbreak();
  ActiveLayer = CG_CreateFx_GetActiveLayer();
  v110 = (float *)ActiveLayer;
  EffectIndex = (int)CG_CreateFx_AllocateEffectIndex();
  if ( (unsigned int)EffectIndex >= 0x4000 )
  {
    LODWORD(v100) = EffectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8759, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v100, 0x4000) )
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
  v10 = s_createFxTool;
  v11 = EffectIndex;
  v12 = effectType == 6;
  if ( v4 )
  {
    v13 = *v4;
    v123 = v2;
    v122 = v3;
    v102 = effectType == 6;
    while ( v13 )
    {
      while ( (unsigned __int8)v13 >= 9u && (unsigned __int8)v13 <= 0x20u )
        v13 = *++v4;
      v14 = 1i64;
      v15 = v4;
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v16 = v15["}" - v4];
        v17 = v14;
        v18 = *v15;
        --v14;
        ++v15;
        if ( !v17 )
        {
LABEL_22:
          v12 = v102;
          goto LABEL_23;
        }
        if ( v16 != v18 )
          break;
        if ( !v16 )
          goto LABEL_22;
      }
      if ( j_sscanf(v4, "\"%[^\"]\" \"%[^\"]\"", s0, _Buffer) != 2 )
        goto LABEL_207;
      v22 = -1i64;
      do
        ++v22;
      while ( s0[v22] );
      v23 = (unsigned int)v22;
      v24 = (unsigned int)v22;
      v25 = 0i64;
      do
      {
        v26 = s0[v25];
        v27 = v24;
        v28 = aOrigin[v25++];
        --v24;
        if ( !v27 )
          break;
        if ( v26 != v28 )
        {
          v41 = v23;
          v42 = 0i64;
          while ( 1 )
          {
            v43 = s0[v42];
            v44 = v41;
            v45 = aAngles_1[v42++];
            --v41;
            if ( !v44 )
              goto LABEL_44;
            if ( v43 != v45 )
            {
              v46 = v23;
              v47 = 0i64;
              while ( 1 )
              {
                v48 = s0[v47];
                v49 = v46;
                v50 = aFxid_0[v47++];
                --v46;
                if ( !v49 )
                {
LABEL_65:
                  if ( (unsigned int)EffectIndex >= 0x4000 )
                  {
                    LODWORD(v101) = 0x4000;
                    LODWORD(v100) = EffectIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4623, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v100, v101) )
                      __debugbreak();
                  }
                  v51 = &s_createFxTool->inited + v11 * 104;
                  if ( s_createFxTool->scratchDataState[EffectIndex].effectType == 1 || s_createFxTool->scratchDataState[EffectIndex].effectType == 3 )
                  {
                    v52 = 4718832i64;
                  }
                  else
                  {
                    if ( s_createFxTool->scratchDataState[EffectIndex].effectType != 5 )
                      goto LABEL_207;
                    v52 = 4718824i64;
                  }
                  v86 = (FxCombinedDef *)&v51[v52];
                  if ( &v51[v52] )
                  {
                    v86->particleSystemDef = NULL;
                    if ( _Buffer[0] )
                      FX_LoadEffectCombinedDef(_Buffer, v86);
                    CG_CreateFx_UpdateEffectAlias(EffectIndex);
                  }
                  goto LABEL_207;
                }
                if ( v48 != v50 )
                  break;
                if ( !v48 )
                  goto LABEL_65;
              }
              v53 = v23;
              v54 = 0i64;
              while ( 1 )
              {
                v55 = s0[v54];
                v56 = v53;
                v57 = aSoundalias_2[v54++];
                --v53;
                if ( !v56 )
                {
LABEL_76:
                  CG_CreateFx_SetEffectSoundalias(EffectIndex, _Buffer);
                  goto LABEL_207;
                }
                if ( v55 != v57 )
                  break;
                if ( !v55 )
                  goto LABEL_76;
              }
              v12 = v102;
              if ( v102 )
              {
LABEL_83:
                v63 = v23;
                v64 = 0i64;
                while ( 1 )
                {
                  v65 = s0[v64];
                  v66 = v63;
                  v67 = aReactiveRadius[v64++];
                  --v63;
                  if ( !v66 )
                  {
LABEL_87:
                    if ( effectType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8966, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::ReactiveEnt)", (const char *)&queryFormat, "effectType == CreateFxEffectType::ReactiveEnt") )
                      __debugbreak();
                    v105 = 0.0;
                    if ( j_sscanf(_Buffer, "%g", &v105) == 1 )
                      v10->scratchData[v11].reactiveEntDef.radius = v105;
                    goto LABEL_208;
                  }
                  if ( v65 != v67 )
                    break;
                  if ( !v65 )
                    goto LABEL_87;
                }
                if ( I_strncmp(s0, "exploder", v23) )
                {
                  v69 = -1i64;
                  do
                    ++v69;
                  while ( s0[v69] );
                  if ( !I_strncmp(s0, "delay", (unsigned int)v69) )
                  {
                    if ( j_sscanf(_Buffer, "%g", &v106) != 1 )
                      goto LABEL_208;
                    v70 = (int)(float)(1000.0 * v106);
                    if ( (unsigned int)EffectIndex >= 0x4000 )
                    {
                      LODWORD(v101) = 0x4000;
                      LODWORD(v100) = EffectIndex;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 4807, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v100, v101) )
                        __debugbreak();
                    }
                    v71 = &s_createFxTool->inited + v11 * 104;
                    if ( s_createFxTool->scratchDataState[EffectIndex].effectType == 1 )
                    {
                      v72 = 4718828i64;
                    }
                    else
                    {
                      if ( s_createFxTool->scratchDataState[EffectIndex].effectType != 3 )
                        goto LABEL_207;
                      v72 = 4718824i64;
                    }
                    if ( &v71[v72] )
                      *(_DWORD *)&v71[v72] = v70;
                    goto LABEL_207;
                  }
                  v73 = -1i64;
                  do
                    ++v73;
                  while ( s0[v73] );
                  if ( !I_strncmp(s0, "delay_min", (unsigned int)v73) )
                    goto LABEL_233;
                  v74 = -1i64;
                  do
                    ++v74;
                  while ( s0[v74] );
                  if ( I_strncmp(s0, "delay_max", (unsigned int)v74) )
                  {
                    v75 = -1i64;
                    do
                      ++v75;
                    while ( s0[v75] );
                    if ( I_strncmp(s0, "damage", (unsigned int)v75) )
                    {
                      v76 = -1i64;
                      do
                        ++v76;
                      while ( s0[v76] );
                      if ( I_strncmp(s0, "damage_radius", (unsigned int)v76) )
                      {
                        v77 = -1i64;
                        do
                          ++v77;
                        while ( s0[v77] );
                        if ( I_strncmp(s0, "earthquake", (unsigned int)v77) )
                        {
                          v79 = -1i64;
                          do
                            ++v79;
                          while ( s0[v79] );
                          if ( I_strncmp(s0, "rumble", (unsigned int)v79) )
                          {
                            v81 = -1i64;
                            do
                              ++v81;
                            while ( s0[v81] );
                            if ( I_strncmp(s0, "envonly", (unsigned int)v81) )
                            {
                              v82 = -1i64;
                              do
                                ++v82;
                              while ( s0[v82] );
                              if ( !I_strncmp(s0, "dotraces", (unsigned int)v82) )
                              {
                                if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9054, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                                  __debugbreak();
                                if ( j_sscanf(_Buffer, "%d", &v108) == 1 )
                                  v10->scratchData[v11].explodersDef.server.damageDoOcclusionTraces = v108 != 0;
                              }
                            }
                            else
                            {
                              if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9044, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                                __debugbreak();
                              if ( j_sscanf(_Buffer, "%d", &v107) == 1 )
                                v10->scratchData[v11].explodersDef.server.damageEnvironmentOnly = v107 != 0;
                            }
                          }
                          else
                          {
                            if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9038, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                              __debugbreak();
                            String = SL_GetString(_Buffer, 0);
                            v10->scratchData[v11].explodersDef.server.rumbleName = String;
                            if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9040, ASSERT_TYPE_ASSERT, "(effectData.explodersDef.server.rumbleName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "effectData.explodersDef.server.rumbleName != NULL_SCR_STRING") )
                              goto LABEL_151;
                          }
                        }
                        else
                        {
                          if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9032, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                            __debugbreak();
                          v78 = SL_GetString(_Buffer, 0);
                          v10->scratchData[v11].explodersDef.server.earthquakeName = v78;
                          if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9034, ASSERT_TYPE_ASSERT, "(effectData.explodersDef.server.earthquakeName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "effectData.explodersDef.server.earthquakeName != NULL_SCR_STRING") )
                            goto LABEL_151;
                        }
                      }
                      else
                      {
                        if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9022, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                          __debugbreak();
                        v104 = 0.0;
                        if ( j_sscanf(_Buffer, "%g", &v104) == 1 )
                          v10->scratchData[v11].explodersDef.server.damageRadius = v104;
                      }
                    }
                    else
                    {
                      if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9012, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                        __debugbreak();
                      v103 = 0.0;
                      if ( j_sscanf(_Buffer, "%g", &v103) == 1 )
                        v10->scratchData[v11].explodersDef.server.damageAmount = v103;
                    }
                  }
                  else
                  {
LABEL_233:
                    if ( effectType != Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8992, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::IntervalSound)", (const char *)&queryFormat, "effectType == CreateFxEffectType::IntervalSound") )
                      __debugbreak();
                    if ( j_sscanf(_Buffer, "%g", &v109) == 1 )
                    {
                      v83 = (int)(float)(1000.0 * v109);
                      v84 = -1i64;
                      do
                        ++v84;
                      while ( s0[v84] );
                      if ( I_strncmp(s0, "delay_min", (unsigned int)v84) )
                      {
                        v85 = -1i64;
                        do
                          ++v85;
                        while ( s0[v85] );
                        if ( I_strncmp(s0, "delay_max", (unsigned int)v85) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9005, ASSERT_TYPE_ASSERT, "(!I_strncmp( key, CREATEFX_ENT_DELAY_MAX_KEY, I_strlen( key ) ))", (const char *)&queryFormat, "!I_strncmp( key, CREATEFX_ENT_DELAY_MAX_KEY, I_strlen( key ) )") )
                          __debugbreak();
                        v10->scratchData[v11].intervalSoundsDef.delayMaxMsec = v83;
                      }
                      else
                      {
                        v10->scratchData[v11].intervalSoundsDef.delayMinMsec = v83;
                      }
                      goto LABEL_207;
                    }
                  }
                }
                else
                {
                  if ( effectType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8976, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::Exploder)", (const char *)&queryFormat, "effectType == CreateFxEffectType::Exploder") )
                    __debugbreak();
                  v68 = SL_GetString(_Buffer, 0);
                  v10->scratchData[v11].explodersDef.client.name = v68;
                  if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8979, ASSERT_TYPE_ASSERT, "(effectData.explodersDef.client.name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "effectData.explodersDef.client.name != NULL_SCR_STRING") )
                  {
LABEL_151:
                    __debugbreak();
                    goto LABEL_208;
                  }
                }
              }
              else
              {
                v58 = v23;
                v59 = 0i64;
                do
                {
                  v60 = s0[v59];
                  v61 = v58;
                  v62 = destKey[v59++];
                  --v58;
                  if ( !v61 )
                    break;
                  if ( v60 != v62 )
                    goto LABEL_83;
                }
                while ( v60 );
                v12 = 1;
                v102 = 1;
              }
              goto LABEL_208;
            }
            if ( !v43 )
              goto LABEL_44;
          }
        }
      }
      while ( v26 );
LABEL_44:
      if ( j_sscanf(_Buffer, "%g %g %g", &v111, &v112, &v113) == 3 )
      {
        v29 = -1i64;
        do
          ++v29;
        while ( s0[v29] );
        v30 = (unsigned int)v29;
        v31 = 0i64;
        v32 = (unsigned int)v29;
        do
        {
          v33 = s0[v31];
          v34 = v32;
          v35 = aOrigin[v31++];
          --v32;
          if ( !v34 )
            break;
          if ( v33 != v35 )
          {
            v87 = 0i64;
            do
            {
              v88 = s0[v87];
              v89 = v30;
              v90 = aAngles_1[v87++];
              --v30;
              if ( !v89 )
                break;
              if ( v88 != v90 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8944, ASSERT_TYPE_ASSERT, "(!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) ))", (const char *)&queryFormat, "!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) )") )
                  __debugbreak();
                break;
              }
            }
            while ( v88 );
            v91 = v110;
            if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8062, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
              __debugbreak();
            if ( s_createFxTool->rootHasOffset )
            {
              from.v[0] = v111 + s_createFxTool->rootAngles.v[0];
              from.v[1] = v112 + s_createFxTool->rootAngles.v[1];
              v92 = v113 + s_createFxTool->rootAngles.v[2];
            }
            else
            {
              v93 = v112 + v91[74];
              from.v[0] = v111 + v91[73];
              v92 = v113 + v91[75];
              from.v[1] = v93;
            }
            from.v[2] = v92;
            AnglesNormalize360(&from, &from);
            if ( effectType != 1 && effectType != 2 && effectType != 3 && effectType != Menu && effectType != 5 )
            {
              LODWORD(v100) = effectType;
              v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", v100);
              goto LABEL_205;
            }
            v12 = v102;
            if ( (CreateFxTool *)((char *)v10 + v11 * 104) != (CreateFxTool *)-4718812i64 )
            {
              v96 = from.v[1];
              v10->scratchData[v11].oneShotFxDef.angles.v[0] = from.v[0];
              v10->scratchData[v11].oneShotFxDef.angles.v[2] = from.v[2];
              v10->scratchData[v11].oneShotFxDef.angles.v[1] = v96;
            }
            goto LABEL_208;
          }
        }
        while ( v33 );
        v36 = v110;
        if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8033, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
          __debugbreak();
        if ( s_createFxTool->rootHasOffset )
        {
          *(float *)&v37 = v112 + s_createFxTool->rootOrigin.v[1];
          *(float *)v116 = v111 + s_createFxTool->rootOrigin.v[0];
          *(float *)&v116[2] = v113 + s_createFxTool->rootOrigin.v[2];
          v116[1] = v37;
          AnglesToAxis(&s_createFxTool->rootAngles, &axis);
          p_axis = &axis;
          p_rootOrigin = &s_createFxTool->rootOrigin;
          p_point = (vec3_t *)v116;
        }
        else
        {
          v97 = v112 + v36[71];
          point.v[0] = v111 + v36[70];
          point.v[2] = v113 + v36[72];
          point.v[1] = v97;
          AnglesToAxis((const vec3_t *)(v36 + 73), &rotation);
          p_axis = &rotation;
          p_rootOrigin = (vec3_t *)(v36 + 70);
          p_point = &point;
        }
        RotatePointAroundPoint(&dst, p_point, p_rootOrigin, p_axis);
        CG_CreateFx_Vec3FixSubEpsilonValues(&dst);
        if ( effectType != 1 && effectType != 2 && effectType != 3 && effectType != Menu && effectType != 5 )
        {
          LODWORD(v100) = effectType;
          v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v100);
LABEL_205:
          if ( v94 )
            __debugbreak();
          goto LABEL_207;
        }
        v12 = v102;
        if ( (CreateFxTool *)((char *)v10 + v11 * 104) != (CreateFxTool *)-4718800i64 )
        {
          v98 = dst.v[1];
          v10->scratchData[v11].oneShotFxDef.origin.v[0] = dst.v[0];
          v10->scratchData[v11].oneShotFxDef.origin.v[2] = dst.v[2];
          v10->scratchData[v11].oneShotFxDef.origin.v[1] = v98;
        }
      }
      else
      {
LABEL_207:
        v12 = v102;
      }
LABEL_208:
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
  }
LABEL_23:
  if ( !v12 && !s_createFxTool->needToExportAllLayers )
  {
    Com_Printf_NoFilter("[CreateFx] Detected missing data in .map file, marking all layers for export\n");
    v19 = s_createFxTool;
    s_createFxTool->needToExportAllLayers = 1;
    v19->needToExport = 1;
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
    v21 = *v4;
    if ( *v4 < 9u || (unsigned __int8)v21 > 0x20u || !v21 )
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
  __int128 v1; 
  const char *v2; 
  char v3; 
  __int64 v4; 
  const char *v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  char *v9; 
  CreateFxTool *v10; 
  char j; 
  char v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  char v17; 
  __int64 v18; 
  char v19; 
  char *v20; 
  char i; 
  __int64 v22; 
  __int64 v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  __int64 v28; 
  char v29; 
  __int64 v30; 
  char v31; 
  __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  char v40; 
  __int64 v41; 
  char v42; 
  __int64 v43; 
  char v44; 
  __int64 v45; 
  char v46; 
  vec3_t layerAngles; 
  vec3_t layerOrigin; 
  vec3_t v50; 
  char v51[64]; 
  char s0[8]; 
  char layerPath[264]; 
  char src[272]; 
  char layerFilter[272]; 
  __int128 v56; 

  v2 = buffer;
  v56 = v1;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8811, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  layerFilter[0] = 0;
  layerOrigin.v[0] = 0.0;
  layerOrigin.v[1] = 0.0;
  layerOrigin.v[2] = 0.0;
  layerAngles.v[0] = 0.0;
  layerAngles.v[1] = 0.0;
  layerAngles.v[2] = 0.0;
  if ( v2 )
  {
    v3 = *v2;
    while ( v3 )
    {
      while ( (unsigned __int8)v3 >= 9u && (unsigned __int8)v3 <= 0x20u )
        v3 = *++v2;
      v4 = 1i64;
      v5 = v2;
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v6 = v5["}" - v2];
        v7 = v4;
        v8 = *v5++;
        --v4;
        if ( !v7 )
        {
LABEL_16:
          if ( I_strstr(s0, "prefabs/") != s0 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144285340, 334i64, s0, "prefabs/");
          v9 = strstr_0(s0, ".map");
          if ( !v9 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144280C10, 335i64, s0, ".map");
          v10 = s_createFxTool;
          *v9 = 0;
          if ( v10->rootHasOffset )
          {
            if ( layerOrigin.v[0] != 0.0 || layerOrigin.v[1] != 0.0 || layerOrigin.v[2] != 0.0 || layerAngles.v[0] != 0.0 || layerAngles.v[1] != 0.0 || layerAngles.v[2] != 0.0 )
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442853B0, 335i64, s0);
            layerOrigin.v[0] = 0.0;
            layerOrigin.v[1] = 0.0;
            layerOrigin.v[2] = 0.0;
            layerAngles.v[0] = 0.0;
            layerAngles.v[1] = 0.0;
            layerAngles.v[2] = 0.0;
          }
          CG_CreateFx_AddLayer(layerPath, layerFilter, &layerOrigin, &layerAngles);
          goto LABEL_30;
        }
        if ( v6 != v8 )
          break;
        if ( !v6 )
          goto LABEL_16;
      }
      if ( j_sscanf_s(v2, "\"%[^\"]\" \"%[^\"]\"", v51, 64i64) == 2 )
      {
        v13 = -1i64;
        do
          ++v13;
        while ( v51[v13] );
        v14 = (unsigned int)v13;
        v15 = 0i64;
        v16 = (unsigned int)v13;
        while ( 1 )
        {
          v17 = v51[v15];
          v18 = v16;
          v19 = aModel_0[v15++];
          --v16;
          if ( !v18 )
          {
LABEL_48:
            v20 = s0;
LABEL_49:
            Core_strcpy(v20, 0x104ui64, src);
            goto LABEL_50;
          }
          if ( v17 != v19 )
            break;
          if ( !v17 )
            goto LABEL_48;
        }
        v22 = v14;
        v23 = 0i64;
        while ( 1 )
        {
          v24 = v51[v23];
          v25 = v22;
          v26 = aMapnamefilter[v23++];
          --v22;
          if ( !v25 )
          {
LABEL_64:
            v20 = layerFilter;
            goto LABEL_49;
          }
          if ( v24 != v26 )
            break;
          if ( !v24 )
            goto LABEL_64;
        }
        v27 = v14;
        v28 = 0i64;
        do
        {
          v29 = v51[v28];
          v30 = v27;
          v31 = aOrigin[v28++];
          --v27;
          if ( !v30 )
            break;
          if ( v29 != v31 )
          {
            v32 = 0i64;
            do
            {
              v33 = v51[v32];
              v34 = v14;
              v35 = aAngles_1[v32];
              --v14;
              ++v32;
              if ( !v34 )
                break;
              if ( v33 != v35 )
                goto LABEL_50;
            }
            while ( v33 );
            break;
          }
        }
        while ( v29 );
        if ( j_sscanf(src, "%g %g %g", &v50, &v50.y, &v50.z) == 3 )
        {
          v36 = -1i64;
          do
            ++v36;
          while ( v51[v36] );
          v37 = (unsigned int)v36;
          v38 = 0i64;
          v39 = (unsigned int)v36;
          while ( 1 )
          {
            v40 = v51[v38];
            v41 = v39;
            v42 = aOrigin[v38];
            --v39;
            ++v38;
            if ( !v41 )
            {
LABEL_81:
              layerOrigin = v50;
              goto LABEL_50;
            }
            if ( v40 != v42 )
              break;
            if ( !v40 )
              goto LABEL_81;
          }
          v43 = 0i64;
          do
          {
            v44 = v51[v43];
            v45 = v37;
            v46 = aAngles_1[v43];
            --v37;
            ++v43;
            if ( !v45 )
              break;
            if ( v44 != v46 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8882, ASSERT_TYPE_ASSERT, "(!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) ))", (const char *)&queryFormat, "!I_strncmp( key, CREATEFX_ENT_ANGLES_KEY, I_strlen( key ) )") )
                __debugbreak();
              break;
            }
          }
          while ( v44 );
          layerAngles = v50;
        }
      }
LABEL_50:
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8712, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
        __debugbreak();
      for ( i = *v2; i != 10; i = *++v2 )
      {
        if ( i == 13 )
          break;
        if ( !i )
          break;
      }
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 < 9u || (unsigned __int8)v3 > 0x20u )
          break;
        ++v2;
      }
    }
  }
LABEL_30:
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8712, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  for ( j = *v2; j != 10; j = *++v2 )
  {
    if ( j == 13 )
      break;
    if ( !j )
      break;
  }
  while ( 1 )
  {
    v12 = *v2;
    if ( *v2 < 9u || (unsigned __int8)v12 > 0x20u || !v12 )
      break;
    ++v2;
  }
  return v2;
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
  float *v; 
  float v5; 
  char *v6; 
  float v7; 
  void (__fastcall **v8)(void *); 
  __int64 v9; 
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
      v = v1->clipboard.effectData[v2].oneShotFxDef.origin.v;
      if ( v1->clipboard.effectDataState[v3].effectType == 1 || v1->clipboard.effectDataState[v3].effectType == 2 || v1->clipboard.effectDataState[v3].effectType == 3 || v1->clipboard.effectDataState[v3].effectType == Menu || v1->clipboard.effectDataState[v3].effectType == 5 )
      {
        if ( (CreateFxTool *)((char *)v1 + 104 * v2) != (CreateFxTool *)-16i64 )
        {
          v5 = v1->clipboard.effectData[v2].oneShotFxDef.origin.v[1];
          originalOrigin.v[0] = *v;
          originalOrigin.v[2] = v1->clipboard.effectData[v2].oneShotFxDef.origin.v[2];
          originalOrigin.v[1] = v5;
        }
      }
      else
      {
        LODWORD(v9) = v1->clipboard.effectDataState[v3].effectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v9) )
          __debugbreak();
      }
      CG_CreateFx_CalculateClipboardEntityOrigin(&originalOrigin, &outOrigin);
      CG_CreateFx_ClearRedoStack();
      while ( ntl::nxheap::largest_free_block(&s_createFxCommandHeap.m_heap) < 0x80 )
        CG_CreateFx_DiscardUndoSequence();
      v6 = (char *)ntl::nxheap::allocate(&s_createFxCommandHeap.m_heap, 0x80ui64, 4ui64, 1);
      if ( !v6 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144286130, 333i64);
      *((_DWORD *)v6 + 2) = -1;
      *(_QWORD *)v6 = &CreateFxInsertEffectCopyCommand::`vftable';
      *((_DWORD *)v6 + 3) = v1->clipboard.effectDataState[v3].effectType;
      *(__m256i *)(v6 + 16) = *(__m256i *)v;
      *(__m256i *)(v6 + 48) = *(__m256i *)&v1->clipboard.effectData[v2].reactiveEntDef.effectSound.name;
      *(__m256i *)(v6 + 80) = *((__m256i *)&v1->clipboard.effectData[v2].reactiveEntDef + 2);
      *((double *)v6 + 14) = *((double *)&v1->clipboard.effectData[v2].reactiveEntDef + 12);
      if ( *((_DWORD *)v6 + 3) == 1 || *((_DWORD *)v6 + 3) == 2 || *((_DWORD *)v6 + 3) == 3 || *((_DWORD *)v6 + 3) == 4 || *((_DWORD *)v6 + 3) == 5 )
      {
        if ( v6 != (char *)-16i64 )
        {
          v7 = outOrigin.v[1];
          *((float *)v6 + 4) = outOrigin.v[0];
          *((float *)v6 + 6) = outOrigin.v[2];
          *((float *)v6 + 5) = v7;
        }
      }
      else
      {
        LODWORD(v9) = *((_DWORD *)v6 + 3);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v9) )
          __debugbreak();
      }
      CG_CreateFx_OrientEffect((CreateFXDataUnion *)(v6 + 16), *((const CreateFxEffectType *)v6 + 3));
      if ( !s_createFxTool->activeLayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9185, ASSERT_TYPE_ASSERT, "(s_createFxTool->activeLayer)", (const char *)&queryFormat, "s_createFxTool->activeLayer") )
        __debugbreak();
      v8 = *(void (__fastcall ***)(void *))v6;
      *((_QWORD *)v6 + 15) = s_createFxTool->activeLayer;
      (*v8)(v6);
      CG_CreateFx_PushUndoCommand((CreateFxCommand *const)v6);
      if ( *((_DWORD *)v6 + 2) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1310, ASSERT_TYPE_ASSERT, "(m_effectIndex != INVALID_EFFECT_INDEX)", (const char *)&queryFormat, "m_effectIndex != INVALID_EFFECT_INDEX") )
        __debugbreak();
      CG_CreateFx_SelectFx(*((_DWORD *)v6 + 2), 1);
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
void CG_CreateFx_PlayReactiveSounds(const vec3_t *eventOrigin, const float eventRadius, const float timeDelay)
{
  cg_t *LocalClientGlobals; 
  CreateFxTool *v5; 
  int v6; 
  unsigned int time; 
  __int64 v8; 
  __int64 v9; 
  bool *v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  const SndAliasList *aliasList; 
  SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  __int64 v18; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v5 = s_createFxTool;
  v6 = 0;
  time = LocalClientGlobals->time;
  if ( s_createFxTool->usedEffectTotal > 0 )
  {
    v8 = 7078100i64;
    do
    {
      v9 = *(int *)(&v5->inited + v8);
      v10 = &v5->inited + 40 * v9;
      if ( *((_DWORD *)v10 + 1605686) == 5 )
      {
        v11 = (__int64)&v5->scratchData[v9];
        if ( time >= *((_DWORD *)v10 + 1605693) )
        {
          v12 = eventOrigin->v[1] - v5->scratchData[v9].oneShotFxDef.origin.v[1];
          v13 = eventOrigin->v[2] - v5->scratchData[v9].oneShotFxDef.origin.v[2];
          v14 = eventRadius + v5->scratchData[v9].reactiveEntDef.radius;
          if ( (float)((float)((float)(v12 * v12) + (float)((float)(eventOrigin->v[0] - *(float *)v11) * (float)(eventOrigin->v[0] - *(float *)v11))) + (float)(v13 * v13)) <= (float)(v14 * v14) )
          {
            aliasList = v5->scratchData[v9].reactiveEntDef.aliasList;
            if ( aliasList || (Alias = SND_TryFindAlias(v5->scratchData[v9].reactiveEntDef.effectSound.name), v5 = s_createFxTool, (aliasList = Alias) != NULL) )
            {
              SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
              CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)v11, aliasList);
              v5 = s_createFxTool;
            }
            v18 = *(_QWORD *)(v11 + 24);
            if ( v18 )
            {
              def.m_particleSystemDef = *(const ParticleSystemDef **)(v11 + 24);
              AnglesToAxis((const vec3_t *)(v11 + 12), &axis);
              LODWORD(v18) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, 0, (const vec3_t *)v11, &axis);
              v5 = s_createFxTool;
            }
            *((_DWORD *)v10 + 1605692) = v18;
            *((_DWORD *)v10 + 1605693) = time + 3000;
          }
        }
      }
      ++v6;
      v8 += 4i64;
    }
    while ( v6 < v5->usedEffectTotal );
  }
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
  CreateFxTool *v3; 

  v1 = j_va("ERROR: %s", msg);
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v3 = s_createFxTool;
  s_createFxTool->statusMessageTimeout = LocalClientGlobals->time + 3000;
  v3->statusMessageColor = colorRed;
  Core_strcpy(v3->statusMessageBuffer, 0x100ui64, v1);
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
void CG_CreateFx_RegisterCommonDvars(void)
{
  Dvar_BeginPermanentRegistration();
  createfx_menuFontSize = Dvar_RegisterFloat("MORLRLTTTN", 0.80000001, 0.1, 6.0, 0.1, 0, "Createfx native font size");
  createfx_menuTextXOrigin = Dvar_RegisterFloat("LLONRQQTKM", 10.0, 0.0, 3000.0, 5.0, 0, "Createfx text origin X");
  createfx_menuTextYOrigin = Dvar_RegisterFloat("MSTTNLOORL", 10.0, 0.0, 3000.0, 5.0, 0, "Createfx text origin Y");
  createfx_drawdist = Dvar_RegisterFloat("OLKQQMLKTO", 1000.0, 100.0, 50000.0, 100.0, 0, "Createfx draw distance for the tool");
  createfx_worldIconSize = Dvar_RegisterFloat("MKMSNKTKTQ", 12.0, 5.0, 30.0, 1.0, 0, "The size of world icons for fx");
  createfx_hintLevel = Dvar_RegisterEnum("LNTRLONRST", s_CreateFxHintLevelStrings, 0, 0, "Createfx hint level");
  createfx_mapnamefilter = Dvar_RegisterString("TQPRRKROR", (const char *)&queryFormat.fmt + 3, 0, "If set, only layers/prefabs with this filter on will be loaded");
  Dvar_EndPermanentRegistration();
}

/*
==============
CG_CreateFx_Reimport_f
==============
*/
void CG_CreateFx_Reimport_f()
{
  bool v0; 
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  vec3_t rootAngles; 
  vec3_t rootOrigin; 
  char dest[64]; 

  if ( s_createFxTool && s_createFxTool->hasBeenEnabled && s_createFxTool->enabled && s_createFxTool->layerListTotal )
  {
    Core_strcpy(dest, 0x40ui64, s_createFxTool->layerList[0].pathString);
    if ( !dest[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8530, ASSERT_TYPE_ASSERT, "(!I_strempty( rootName ))", (const char *)&queryFormat, "!I_strempty( rootName )") )
      __debugbreak();
    v0 = s_createFxTool->editBuffer.effectTotal <= 0;
    v1 = s_createFxTool->rootOrigin.v[1];
    rootOrigin.v[0] = s_createFxTool->rootOrigin.v[0];
    v2 = s_createFxTool->rootOrigin.v[2];
    rootOrigin.v[1] = v1;
    v3 = s_createFxTool->rootAngles.v[0];
    rootOrigin.v[2] = v2;
    v4 = s_createFxTool->rootAngles.v[1];
    rootAngles.v[0] = v3;
    v5 = s_createFxTool->rootAngles.v[2];
    rootAngles.v[1] = v4;
    rootAngles.v[2] = v5;
    if ( !v0 )
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
  CreateFxMenuPage *v8; 
  CreateFxTool *v9; 
  __int64 selectedEffectTotal; 
  bool result; 
  DiscardingStack<unsigned short,16384> *p_redoCount; 
  unsigned int v13; 
  unsigned __int16 v14; 
  __int64 v15; 
  __int64 m_top_low; 
  CreateFxCommand *v17; 
  DiscardingStack<CreateFxCommand *,65536> *p_undoBuffer; 
  int effectTotal; 
  CreateFxTool *v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  int highlightedEffectIndex; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  ParticleSystemHandle *p_effectHandle; 
  ParticleSystemHandle v35; 
  __int64 v36; 
  ParticleSystem *v37; 
  ParticleSystem *v38; 
  __int16 v39; 
  int v40; 
  int *activeExploderIndices; 
  int *v42; 
  int activeExploderCount; 
  int v44; 
  int *selectedEffectList; 
  int v46; 
  __int64 v47; 
  scr_string_t name; 
  const char *v49; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v51; 
  CreateFxTool *v52; 
  __int64 v53; 
  __int64 v54; 
  int usedEffectTotal; 
  int v56; 
  __int64 v57; 
  __int64 v58; 
  CreateFxTool *v59; 
  int v60; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  int v64; 
  CreateFxMenuPage *v65; 
  __int64 v66; 
  CreateFxTool *v67; 
  __int64 v68; 
  __int64 v69; 
  CreateFxDrawMode menuDrawMode; 
  CreateFxDrawMode v71; 
  const dvar_t *v72; 
  int v73; 
  __int64 v74; 
  __int64 v75; 
  vec3_t outAngles; 

  if ( !down || repeats != 1 )
    return 0;
  if ( (_DWORD)key == 14 || (_DWORD)key == 154 )
  {
    v72 = createfx_hintLevel;
    if ( !createfx_hintLevel )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2536, ASSERT_TYPE_ASSERT, "(createfx_hintLevel)", (const char *)&queryFormat, "createfx_hintLevel") )
        __debugbreak();
      v72 = createfx_hintLevel;
    }
    v73 = 0;
    if ( v72->current.integer + 1 < 3 )
      v73 = v72->current.integer + 1;
    Dvar_SetInt_Internal(v72, v73);
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
    v71 = MOVEMENT;
    if ( menuDrawMode == COUNT )
      v71 = COUNT|DODGE;
    s_createFxTool->menuDrawMode = v71;
    return 1;
  }
  v8 = s_menuPath[s_menuPathCount];
  if ( v8 )
  {
    if ( v8->menuName == HUD_ASSET_LIST )
      return 0;
  }
  v9 = s_createFxTool;
  selectedEffectTotal = s_createFxTool->selectedEffectTotal;
  if ( ctrlDown && (_DWORD)key == 122 || leftShoulderDown && (_DWORD)key == 22 )
  {
    CG_CreateFx_Undo(v8, key, selectedEffectTotal);
    return 1;
  }
  if ( ctrlDown && (_DWORD)key == 121 || leftShoulderDown && (_DWORD)key == 23 )
  {
    if ( s_createFxTool->editBuffer.effectTotal > 0 )
    {
      s_interruptCommandActive = 1;
      CG_CreateFx_OnEditEnd();
      v9 = s_createFxTool;
    }
    if ( v9->redoCount.m_count )
    {
      p_redoCount = &v9->redoCount;
      if ( !v9->redoCount.m_count )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        v9 = s_createFxTool;
      }
      v13 = --p_redoCount->m_top;
      --p_redoCount->m_count;
      v14 = p_redoCount->pool[v13 & 0x3FFF];
      if ( v14 )
      {
        v15 = v14;
        do
        {
          if ( !v9->redoBuffer.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 510, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
            __debugbreak();
          --v9->redoBuffer.m_top;
          m_top_low = LOWORD(v9->redoBuffer.m_top);
          --v9->redoBuffer.m_count;
          v17 = v9->redoBuffer.pool[m_top_low];
          ((void (__fastcall *)(CreateFxCommand *, __int64, __int64))v17->Do)(v17, key, selectedEffectTotal);
          v9 = s_createFxTool;
          p_undoBuffer = &s_createFxTool->undoBuffer;
          if ( s_createFxTool->undoBuffer.m_count == 0x10000 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 502, ASSERT_TYPE_ASSERT, "(!full())", (const char *)&queryFormat, "!full()") )
              __debugbreak();
            v9 = s_createFxTool;
          }
          p_undoBuffer->pool[LOWORD(p_undoBuffer->m_top)] = v17;
          ++p_undoBuffer->m_top;
          ++p_undoBuffer->m_count;
          --v15;
        }
        while ( v15 );
      }
      CG_CreateFx_PushUndoSequence(v14);
      return 1;
    }
    return 1;
  }
  if ( ctrlDown && (_DWORD)key == 99 || (_DWORD)key == 16 && !leftShoulderDown )
  {
    if ( (int)selectedEffectTotal > 0 )
    {
      CG_CreateFx_CopyToClipboard(localClientNum);
      return 1;
    }
  }
  else if ( ctrlDown && (_DWORD)key == 120 || (_DWORD)key == 16 && leftShoulderDown )
  {
    if ( (int)selectedEffectTotal > 0 )
    {
      CG_CreateFx_CopyToClipboard(localClientNum);
      CG_CreateFx_DeleteSelection();
      return 1;
    }
  }
  else if ( ctrlDown && (_DWORD)key == 118 || (_DWORD)key == 17 && !leftShoulderDown )
  {
    if ( s_createFxTool->clipboard.cursorTrace.fraction < 1.0 )
    {
      effectTotal = s_createFxTool->clipboard.effectTotal;
      if ( effectTotal > 0 && 0x4000 - s_createFxTool->usedEffectTotal >= effectTotal )
      {
        CG_CreateFx_PasteClipboard(&s_createFxTool->clipboard.cursorTrace.position);
        return 1;
      }
    }
  }
  else if ( ctrlDown && (_DWORD)key == 97 )
  {
    CG_CreateFx_ClearSelection();
    v20 = s_createFxTool;
    v21 = 0;
    if ( s_createFxTool->usedEffectTotal <= 0 )
      return 1;
    v22 = 7078100i64;
    do
    {
      v23 = *(int *)(&v20->inited + v22);
      if ( v20->scratchDataState[v23].effectType == None )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5758, ASSERT_TYPE_ASSERT, "(s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "s_createFxTool->scratchDataState[storageIndex].effectType != CreateFxEffectType::None") )
          __debugbreak();
        v20 = s_createFxTool;
      }
      if ( v20->scratchDataState[v23].layer == v20->activeLayer )
      {
        CG_CreateFx_SelectFx(v23, 1);
        v20 = s_createFxTool;
      }
      ++v21;
      v22 += 4i64;
    }
    while ( v21 < v20->usedEffectTotal );
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
        v9 = s_createFxTool;
      }
      v9->deferredCommand = CG_CreateFx_DropSelectionToGround;
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
      if ( (int)selectedEffectTotal <= 0 || s_createFxTool->clipboard.cursorTrace.fraction >= 1.0 )
        return 1;
      CG_CreateFx_MoveSelectionToCursor();
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
      v56 = 1;
      if ( usedEffectTotal < 1 )
        return 1;
      while ( 1 )
      {
        v57 = (v56 + v9->invalidEntityIndex) % usedEffectTotal;
        v58 = v9->usedEffectList[v57];
        if ( (unsigned int)v58 >= 0x4000 )
        {
          LODWORD(v75) = 0x4000;
          LODWORD(v74) = v9->usedEffectList[v57];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3083, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v74, v75) )
            __debugbreak();
          v9 = s_createFxTool;
        }
        if ( v9->scratchDataState[v58].effectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3088, ASSERT_TYPE_ASSERT, "(effectState.effectType != CreateFxEffectType::None)", (const char *)&queryFormat, "effectState.effectType != CreateFxEffectType::None") )
          __debugbreak();
        if ( !(unsigned __int8)CG_CreateFx_IsEffectDefValid(&v9->scratchData[v58], (const CreateFxEffectType)v9->scratchDataState[v58].effectType) )
          break;
        v9 = s_createFxTool;
        ++v56;
        usedEffectTotal = s_createFxTool->usedEffectTotal;
        if ( v56 > usedEffectTotal )
          return 1;
      }
      s_createFxTool->invalidEntityIndex = v57;
      CG_CreateFx_ClearSelection();
      CG_CreateFx_SelectFx(v58, 0);
      CG_CreateFx_GotoSelected();
      return 1;
    case 45:
      v29 = s_createFxEditRateIndex - 1;
      if ( s_createFxEditRateIndex - 1 < 0 )
        v29 = 0;
      s_createFxEditRateIndex = v29;
      return 1;
    case 61:
      v30 = 8;
      if ( s_createFxEditRateIndex + 1 < 8 )
        v30 = s_createFxEditRateIndex + 1;
      result = 1;
      s_createFxEditRateIndex = v30;
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
      v59 = s_createFxTool;
      if ( s_createFxTool->selectedEffectTotal < 1 )
        return 1;
      if ( s_createFxTool->editBuffer.effectTotal > 0 )
      {
        s_interruptCommandActive = 1;
        CG_CreateFx_OnEditEnd();
        v59 = s_createFxTool;
      }
      CG_CreateFx_SaveSelectionToBuffer(&v59->editBuffer);
      v60 = 0;
      if ( v59->selectedEffectTotal > 0 )
      {
        v61 = 7209180i64;
        do
        {
          v62 = *(int *)(&v59->inited + v61);
          if ( v59->scratchDataState[v62].effectType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 9746, ASSERT_TYPE_ASSERT, "(effectType == CreateFxEffectType::OneshotEffect)", (const char *)&queryFormat, "effectType == CreateFxEffectType::OneshotEffect") )
            __debugbreak();
          CG_CreateFx_StopEffect(v62);
          CG_CreateFx_SetEffectType(v62, (const CreateFxEffectType)3);
          v59 = s_createFxTool;
          ++v60;
          v61 += 4i64;
        }
        while ( v60 < s_createFxTool->selectedEffectTotal );
      }
      CG_CreateFx_OnEditEnd();
      v63 = s_menuPathCount;
      v64 = s_createFxTool->selectedEffectTotal;
      v65 = s_menuPath[s_menuPathCount];
      if ( !v64 )
      {
        if ( v65->menuName != HUD_OBJECT_PROPERTIES )
          return 1;
        s_menuFocus = WORLD;
        if ( s_menuPathCount <= 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( s_menuPathCount > 0 ) )", "ERROR: Create FX menu error negitive menu index") )
            __debugbreak();
          v63 = s_menuPathCount;
        }
        result = 1;
        s_menuPathCount = v63 - 1;
        return result;
      }
      if ( v64 > 0 )
      {
        CG_CreateFx_EvaluateSelectionHomogeneity();
        if ( v65->menuName != HUD_OBJECT_PROPERTIES )
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
          CG_CreateFx_GotoSelected();
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
      v44 = 0;
      selectedEffectList = s_createFxTool->selectedEffectList;
      v46 = 0;
      break;
    case 107:
      if ( !ctrlDown )
        return 1;
      v31 = 0;
      if ( s_createFxTool->usedEffectTotal <= 0 )
        return 1;
      v32 = 7078100i64;
      do
      {
        v33 = *(int *)(&v9->inited + v32);
        if ( v9->scratchDataState[v33].effectType == 3 )
        {
          p_effectHandle = &v9->scratchDataState[v33].effectHandle;
          v35 = *p_effectHandle;
          if ( *p_effectHandle )
          {
            v36 = 0i64;
            if ( g_particleSystemsGeneration[v35 & 0xFFF].__all32 == v35 )
              v36 = v35 & 0xFFF;
            v37 = NULL;
            v38 = g_particleSystems[0][v36];
            if ( (unsigned __int64)v38 >= 0x1000 )
              v37 = v38;
            if ( v37 )
            {
              ParticleManager::KillSystem(g_particleManager, v37);
              v9 = s_createFxTool;
            }
          }
          *p_effectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
          if ( v9->activeExploderCount )
          {
            v39 = 0;
            v40 = 0;
            activeExploderIndices = v9->activeExploderIndices;
            v42 = v9->activeExploderIndices;
            do
            {
              if ( *v42 == (_DWORD)v33 )
                ++v39;
              else
                *activeExploderIndices++ = *v42;
              activeExploderCount = v9->activeExploderCount;
              ++v40;
              ++v42;
            }
            while ( v40 < activeExploderCount );
            v9->activeExploderCount = activeExploderCount - v39;
          }
        }
        ++v31;
        v32 += 4i64;
      }
      while ( v31 < v9->usedEffectTotal );
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
        v9 = s_createFxTool;
      }
      CG_CreateFx_SaveSelectionToBuffer(&v9->editBuffer);
      v25 = 0;
      if ( v9->selectedEffectTotal > 0 )
      {
        v26 = 7209180i64;
        do
        {
          v27 = *(int *)(&v9->inited + v26);
          v28 = v27;
          if ( v9->scratchDataState[v27].effectType == 1 || v9->scratchDataState[v27].effectType == 2 || v9->scratchDataState[v27].effectType == 3 || v9->scratchDataState[v27].effectType == Menu || v9->scratchDataState[v27].effectType == 5 )
          {
            if ( (CreateFxTool *)((char *)v9 + v28 * 104) != (CreateFxTool *)-4718812i64 )
            {
              *(_QWORD *)v9->scratchData[v28].reactiveEntDef.angles.v = 0i64;
              v9->scratchData[v28].oneShotFxDef.angles.v[2] = 0.0;
            }
          }
          else
          {
            LODWORD(v74) = v9->scratchDataState[v27].effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectAngles: unhandled effect type '%d'", v74) )
              __debugbreak();
          }
          if ( (unsigned int)v27 >= 0x4000 )
          {
            LODWORD(v75) = 0x4000;
            LODWORD(v74) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v74, v75) )
              __debugbreak();
          }
          CG_CreateFx_StopEffect(v27);
          CG_CreateFx_StartEffect(v27);
          v9 = s_createFxTool;
          ++v25;
          v26 += 4i64;
        }
        while ( v25 < s_createFxTool->selectedEffectTotal );
      }
      goto LABEL_129;
    case 114:
$LN55_21:
      s_createFxTool->editRotation = !s_createFxTool->editRotation;
      return 1;
    case 116:
      ++s_createFxTool->snapToAngleIndex;
      if ( v9->snapToAngleIndex < 4u )
        return 1;
      result = 1;
      v9->snapToAngleIndex = 0;
      return result;
    case 118:
      if ( (int)selectedEffectTotal <= 0 )
        return 0;
      if ( (int)selectedEffectTotal < 2 )
        return 1;
      v66 = selectedEffectTotal - 1;
      CG_CreateFx_GetScratchEffectAngles(s_createFxTool->freeEffectList[selectedEffectTotal + 0x4000], &outAngles);
      v67 = s_createFxTool;
      if ( s_createFxTool->editBuffer.effectTotal > 0 )
      {
        s_interruptCommandActive = 1;
        CG_CreateFx_OnEditEnd();
        v67 = s_createFxTool;
      }
      CG_CreateFx_SaveSelectionToBuffer(&v67->editBuffer);
      if ( v66 > 0 )
      {
        v68 = 0i64;
        v69 = 7209180i64;
        while ( 1 )
        {
          CG_CreateFx_SetScratchEffectAngles(*(_DWORD *)(&v67->inited + v69), &outAngles);
          ++v68;
          v69 += 4i64;
          if ( v68 >= v66 )
            break;
          v67 = s_createFxTool;
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
    v47 = *selectedEffectList;
    if ( s_createFxTool->scratchDataState[v47].effectType == 3 )
    {
      name = s_createFxTool->scratchData[v47].explodersDef.client.name;
      if ( name )
        break;
    }
    ++v46;
    ++selectedEffectList;
    if ( v46 >= (int)selectedEffectTotal )
    {
      v49 = j_va("ERROR: %s", "No named exploders in selection");
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      v51 = s_createFxTool;
      s_createFxTool->statusMessageTimeout = LocalClientGlobals->time + 3000;
      v51->statusMessageColor = colorRed;
      Core_strcpy(v51->statusMessageBuffer, 0x100ui64, v49);
      return 1;
    }
  }
  CG_CreateFx_ClearSelection();
  v52 = s_createFxTool;
  if ( s_createFxTool->usedEffectTotal <= 0 )
    return 1;
  v53 = 7078100i64;
  do
  {
    v54 = *(int *)(&v52->inited + v53);
    if ( v52->scratchDataState[v54].effectType == 3 && v52->scratchData[v54].explodersDef.client.name == name )
    {
      CG_CreateFx_SelectFx(v54, 1);
      v52 = s_createFxTool;
    }
    ++v44;
    v53 += 4i64;
  }
  while ( v44 < v52->usedEffectTotal );
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
void CG_CreateFx_Resume()
{
  const dvar_t *v0; 
  bool enabled; 
  int i; 
  CreateFxTool *v3; 

  v0 = DVARBOOL_createfx_enabled;
  if ( !DVARBOOL_createfx_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "createfx_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  enabled = v0->current.enabled;
  Com_Printf_NoFilter("[CreateFx] Resume\n");
  CG_CreateFx_FreeStrings();
  CG_CreateFx_StopAllEffects();
  CG_CreateFx_ClearEffectsData();
  for ( i = s_menuPathCount; i > 0; s_menuPathCount = i )
    --i;
  v3 = s_createFxTool;
  s_menuFocus = WORLD;
  s_doingTemporaryCreateFxActivation = !enabled;
  s_createFxTool->enabled = 0;
  v3->hasBeenEnabled = 0;
  CG_CreateFx_Enter_f();
  if ( !enabled )
    CG_CreateFx_Exit_f();
}

/*
==============
CG_CreateFx_RootLoad_f
==============
*/
void CG_CreateFx_RootLoad_f(double a1)
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
      CG_CreateFx_InitializeIfNeeded(a1);
      CG_CreateFx_StopAllEffects();
      CG_CreateFx_ClearEffectsData();
      v1 = Cmd_Argv(1);
      if ( v1 && *v1 )
      {
        rootAngles.v[0] = 0.0;
        rootAngles.v[1] = 0.0;
        rootAngles.v[2] = 0.0;
        rootOrigin.v[0] = 0.0;
        rootOrigin.v[1] = 0.0;
        rootOrigin.v[2] = 0.0;
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
  const char *v1; 
  CreateFxTool *v2; 
  int i; 
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
      CG_CreateFx_InitializeIfNeeded(a1);
      CG_CreateFx_ClearEffectsData();
      v1 = Cmd_Argv(1);
      Com_Printf_NoFilter("[CreateFx] RootNew %s\n", v1);
      Com_sprintf<64>((char (*)[64])dest, "%s_cfx", v1);
      layerAngles.v[0] = 0.0;
      layerAngles.v[1] = 0.0;
      layerAngles.v[2] = 0.0;
      layerOrigin.v[0] = 0.0;
      layerOrigin.v[1] = 0.0;
      layerOrigin.v[2] = 0.0;
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerOrigin, &layerAngles);
      Com_sprintf<64>((char (*)[64])dest, "%s/%s_fx", v1, v1);
      layerOrigin.v[0] = 0.0;
      layerOrigin.v[1] = 0.0;
      layerOrigin.v[2] = 0.0;
      layerAngles.v[0] = 0.0;
      layerAngles.v[1] = 0.0;
      layerAngles.v[2] = 0.0;
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerAngles, &layerOrigin);
      Com_sprintf<64>((char (*)[64])dest, "%s/%s_sound", v1, v1);
      layerOrigin.v[0] = 0.0;
      layerOrigin.v[1] = 0.0;
      layerOrigin.v[2] = 0.0;
      layerAngles.v[0] = 0.0;
      layerAngles.v[1] = 0.0;
      layerAngles.v[2] = 0.0;
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerAngles, &layerOrigin);
      Com_sprintf<64>((char (*)[64])dest, "%s/%s_rex", v1, v1);
      layerOrigin.v[0] = 0.0;
      layerOrigin.v[1] = 0.0;
      layerOrigin.v[2] = 0.0;
      layerAngles.v[0] = 0.0;
      layerAngles.v[1] = 0.0;
      layerAngles.v[2] = 0.0;
      CG_CreateFx_AddLayer(dest, (const char *const)&queryFormat.fmt + 3, &layerAngles, &layerOrigin);
      v2 = s_createFxTool;
      for ( i = 0; i < s_createFxTool->layerListTotal; ++i )
      {
        CG_CreateFx_ExportLayer(&v2->layerList[i], 0);
        v2 = s_createFxTool;
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
  CreateFxTool *v1; 
  int v2; 
  int selectedEffectTotal; 
  int *selectedEffectList; 
  __int64 v6; 
  __int64 v7; 
  __m256i *v8; 
  __int64 v9; 

  v1 = s_createFxTool;
  v2 = 0;
  selectedEffectTotal = s_createFxTool->selectedEffectTotal;
  buffer->effectTotal = selectedEffectTotal;
  if ( selectedEffectTotal > 0 )
  {
    selectedEffectList = v1->selectedEffectList;
    do
    {
      v6 = *selectedEffectList++;
      v7 = v2++;
      v8 = (__m256i *)&buffer->effectData[v7];
      *v8 = *(__m256i *)v1->scratchData[v6].oneShotFxDef.origin.v;
      v8[1] = *(__m256i *)&v1->scratchData[v6].reactiveEntDef.effectSound.name;
      v8[2] = *((__m256i *)&v1->scratchData[v6].reactiveEntDef + 2);
      v8[3].m256i_i64[0] = *((__int64 *)&v1->scratchData[v6].reactiveEntDef + 12);
      v9 = v7;
      *(__m256i *)&buffer->effectDataState[v9].selected = *(__m256i *)&v1->scratchDataState[v6].selected;
      *(double *)&buffer->effectDataState[v9].effectHandle = *(double *)&v1->scratchDataState[v6].effectHandle;
    }
    while ( v2 < buffer->effectTotal );
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
void CG_CreateFx_SetAssetListCount(const int newCount)
{
  CreateFxTool *v1; 

  v1 = s_createFxTool;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  s_createFxTool->m_assetList.m_count = newCount;
  if ( v1->m_assetList.m_page >= (int)*(float *)&_XMM2 )
    v1->m_assetList.m_page = 0;
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
  unsigned __int64 v3; 
  CreateFxTool *v6; 
  unsigned __int64 v7; 
  int v9; 

  v3 = storageIndex;
  if ( (unsigned int)storageIndex >= 0x4000 )
  {
    v9 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1643, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", storageIndex, v9) )
      __debugbreak();
  }
  CG_CreateFx_StopEffect(v3);
  CG_CreateFx_SetEffectType(v3, effectType);
  v6 = s_createFxTool;
  v7 = v3;
  *(__m256i *)s_createFxTool->scratchData[v7].oneShotFxDef.origin.v = *(__m256i *)effectData->oneShotFxDef.origin.v;
  *(__m256i *)&v6->scratchData[v7].reactiveEntDef.effectSound.name = *(__m256i *)&effectData->reactiveEntDef.effectSound.name;
  *((__m256i *)&v6->scratchData[v7].reactiveEntDef + 2) = *((__m256i *)&effectData->reactiveEntDef + 2);
  *((double *)&v6->scratchData[v7].reactiveEntDef + 12) = *((double *)&effectData->reactiveEntDef + 12);
  *(_QWORD *)&v6->scratchDataState[v3].effectHandle = 0i64;
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
  Material *v1; 

  v0 = Material_RegisterHandle("white", IMAGE_TRACK_HUD);
  *(__m256i *)s_effectTypeColors[0].selectedColor.v = _ymm;
  s_effectTypeMaterials[0] = v0;
  s_effectTypeColors[0].defaultColor = (vec4_t)_xmm;
  s_effectTypeMaterials[2] = Material_RegisterHandle("create_fx_waypoint_loop_sound", IMAGE_TRACK_HUD);
  s_effectTypeColors[2].selectedColor = s_colorSelected;
  *(__m256i *)s_effectTypeColors[2].highlightedColor.v = _ymm;
  s_effectTypeMaterials[5] = Material_RegisterHandle("create_fx_waypoint_reactive_ent", IMAGE_TRACK_HUD);
  s_effectTypeColors[5].selectedColor = s_colorSelected;
  *(__m256i *)s_effectTypeColors[5].highlightedColor.v = _ymm;
  s_effectTypeMaterials[4] = Material_RegisterHandle("create_fx_waypoint_interval_sound", IMAGE_TRACK_HUD);
  s_effectTypeColors[4].selectedColor = s_colorSelected;
  *(__m256i *)s_effectTypeColors[4].highlightedColor.v = _ymm;
  s_effectTypeMaterials[3] = Material_RegisterHandle("create_fx_waypoint_exploder", IMAGE_TRACK_HUD);
  s_effectTypeColors[3].selectedColor = s_colorSelected;
  *(__m256i *)s_effectTypeColors[3].highlightedColor.v = _ymm;
  v1 = Material_RegisterHandle("create_fx_waypoint_one_shot_effect", IMAGE_TRACK_HUD);
  s_effectTypeColors[1].selectedColor = s_colorSelected;
  *(__m256i *)s_effectTypeColors[1].highlightedColor.v = _ymm;
  s_effectTypeMaterials[1] = v1;
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
  __int64 v3; 
  const char *name; 
  const char *v5; 
  __int64 v7; 
  CreateFXDataUnion *v8; 
  CreateFxEffectType effectType; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  SndAliasList *Alias; 
  __int64 v17; 
  float v18; 

  aliasList = NULL;
  v3 = storageIndex;
  name = NULL;
  v5 = NULL;
  if ( newEffectType == None && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3471, ASSERT_TYPE_ASSERT, "(newEffectType != CreateFxEffectType::None)", (const char *)&queryFormat, "newEffectType != CreateFxEffectType::None") )
    __debugbreak();
  v7 = v3;
  v8 = &s_createFxTool->scratchData[v3];
  effectType = s_createFxTool->scratchDataState[v7].effectType;
  switch ( effectType )
  {
    case 0:
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
      v15 = 0.0;
      break;
    case 1:
    case 3:
      v10 = v8->oneShotFxDef.origin.v[0];
      v11 = v8->oneShotFxDef.origin.v[1];
      v12 = v8->oneShotFxDef.origin.v[2];
      v13 = v8->oneShotFxDef.angles.v[0];
      v14 = v8->oneShotFxDef.angles.v[1];
      v15 = v8->oneShotFxDef.angles.v[2];
      name = v8->reactiveEntDef.effectSound.name;
      v5 = v8->oneShotFxDef.effectSound.name;
      aliasList = (ParticleSystemDef *)v8->oneShotFxDef.aliasList;
      break;
    case 2:
    case 4:
      v10 = v8->oneShotFxDef.origin.v[0];
      v11 = v8->oneShotFxDef.origin.v[1];
      v12 = v8->oneShotFxDef.origin.v[2];
      v13 = v8->oneShotFxDef.angles.v[0];
      v14 = v8->oneShotFxDef.angles.v[1];
      v15 = v8->oneShotFxDef.angles.v[2];
      v5 = v8->intervalSoundsDef.effectSound.name;
      aliasList = (ParticleSystemDef *)v8->oneShotFxDef.effect.particleSystemDef;
      break;
    case 5:
      v10 = v8->oneShotFxDef.origin.v[0];
      v11 = v8->oneShotFxDef.origin.v[1];
      v12 = v8->oneShotFxDef.origin.v[2];
      v13 = v8->oneShotFxDef.angles.v[0];
      v14 = v8->oneShotFxDef.angles.v[1];
      v15 = v8->oneShotFxDef.angles.v[2];
      name = v8->intervalSoundsDef.effectSound.name;
      v5 = v8->reactiveEntDef.effectSound.name;
      aliasList = (ParticleSystemDef *)v8->oneShotFxDef.effectSound.name;
      break;
    default:
      LODWORD(v17) = effectType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3545, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_TransmuteEffectData: cannot copy data from unhandled effect type '%d'", v17) )
        __debugbreak();
      v15 = v18;
      v12 = v18;
      v14 = v18;
      v11 = v18;
      v10 = v18;
      v13 = v18;
      break;
  }
  memset_0(v8, 0, sizeof(CreateFXDataUnion));
  if ( newEffectType == 1 )
  {
    v8->oneShotFxDef.origin.v[0] = v10;
    v8->oneShotFxDef.origin.v[1] = v11;
    v8->oneShotFxDef.origin.v[2] = v12;
    v8->oneShotFxDef.angles.v[0] = v13;
    v8->oneShotFxDef.angles.v[1] = v14;
    v8->oneShotFxDef.angles.v[2] = v15;
    v8->oneShotFxDef.delayMsec = -4000;
    goto LABEL_30;
  }
  if ( newEffectType != 2 )
  {
    if ( newEffectType != 3 )
    {
      if ( newEffectType == Menu )
      {
        v8->oneShotFxDef.origin.v[0] = v10;
        v8->oneShotFxDef.origin.v[1] = v11;
        v8->oneShotFxDef.origin.v[2] = v12;
        v8->oneShotFxDef.angles.v[0] = v13;
        v8->oneShotFxDef.angles.v[1] = v14;
        v8->oneShotFxDef.angles.v[2] = v15;
        v8->intervalSoundsDef.effectSound.name = v5;
        v8->oneShotFxDef.effect.particleSystemDef = aliasList;
        v8->intervalSoundsDef.delayMinMsec = 750;
        v8->intervalSoundsDef.delayMaxMsec = 2000;
      }
      else if ( newEffectType == 5 )
      {
        v8->oneShotFxDef.origin.v[0] = v10;
        v8->oneShotFxDef.origin.v[1] = v11;
        v8->oneShotFxDef.origin.v[2] = v12;
        v8->oneShotFxDef.angles.v[0] = v13;
        v8->oneShotFxDef.angles.v[1] = v14;
        v8->oneShotFxDef.angles.v[2] = v15;
        v8->intervalSoundsDef.effectSound.name = name;
        v8->oneShotFxDef.effect.particleSystemDef = (const ParticleSystemDef *)v5;
        v8->oneShotFxDef.effectSound.name = (const char *)aliasList;
        v8->reactiveEntDef.radius = 350.0;
      }
      else
      {
        LODWORD(v17) = newEffectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_TransmuteEffectData: cannot write data to unhandled effect type '%d'", v17) )
          __debugbreak();
      }
      return;
    }
    v8->oneShotFxDef.origin.v[0] = v10;
    v8->oneShotFxDef.origin.v[1] = v11;
    v8->oneShotFxDef.origin.v[2] = v12;
    v8->oneShotFxDef.angles.v[0] = v13;
    v8->oneShotFxDef.angles.v[1] = v14;
    v8->oneShotFxDef.angles.v[2] = v15;
    v8->explodersDef.client.delayMsec = 0;
    v8->explodersDef.client.name = 0;
LABEL_30:
    v8->oneShotFxDef.aliasList = (SndAliasList *)aliasList;
    v8->oneShotFxDef.effectSound.name = v5;
    v8->oneShotFxDef.effect.particleSystemDef = (const ParticleSystemDef *)name;
    return;
  }
  v8->oneShotFxDef.origin.v[0] = v10;
  v8->oneShotFxDef.origin.v[1] = v11;
  v8->oneShotFxDef.origin.v[2] = v12;
  v8->oneShotFxDef.angles.v[0] = v13;
  v8->oneShotFxDef.angles.v[1] = v14;
  v8->oneShotFxDef.angles.v[2] = v15;
  if ( aliasList )
    Alias = (SndAliasList *)aliasList;
  else
    Alias = SND_TryFindAlias(v5);
  if ( Alias && Alias->head && Com_IsSoundAliasLooping(Alias) )
  {
    v8->intervalSoundsDef.effectSound.name = v5;
    v8->oneShotFxDef.effect.particleSystemDef = aliasList;
  }
}

/*
==============
CG_CreateFx_TriggerReactiveEntsNearCursor
==============
*/
void CG_CreateFx_TriggerReactiveEntsNearCursor()
{
  float v0; 
  cg_t *LocalClientGlobals; 
  CreateFxTool *v2; 
  int v3; 
  unsigned int time; 
  __int64 v5; 
  __int64 v6; 
  bool *v7; 
  __int64 v8; 
  float v9; 
  float v10; 
  float v11; 
  const SndAliasList *aliasList; 
  SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  __int64 v15; 
  FXRegisteredDef def; 
  vec3_t center; 
  tmat33_t<vec3_t> axis; 

  if ( s_createFxTool->clipboard.cursorTrace.fraction < 1.0 )
  {
    v0 = s_createFxTool->clipboard.cursorTrace.position.v[2];
    *(_QWORD *)center.v = *(_QWORD *)s_createFxTool->clipboard.cursorTrace.position.v;
    center.v[2] = v0;
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v2 = s_createFxTool;
    v3 = 0;
    time = LocalClientGlobals->time;
    if ( s_createFxTool->usedEffectTotal > 0 )
    {
      v5 = 7078100i64;
      do
      {
        v6 = *(int *)(&v2->inited + v5);
        v7 = &v2->inited + 40 * v6;
        if ( *((_DWORD *)v7 + 1605686) == 5 )
        {
          v8 = (__int64)&v2->scratchData[v6];
          if ( time >= *((_DWORD *)v7 + 1605693) )
          {
            v9 = center.v[2] - v2->scratchData[v6].oneShotFxDef.origin.v[2];
            v10 = center.v[1] - v2->scratchData[v6].oneShotFxDef.origin.v[1];
            v11 = v2->scratchData[v6].reactiveEntDef.radius + 256.0;
            if ( (float)((float)((float)(v10 * v10) + (float)((float)(center.v[0] - *(float *)v8) * (float)(center.v[0] - *(float *)v8))) + (float)(v9 * v9)) <= (float)(v11 * v11) )
            {
              aliasList = v2->scratchData[v6].reactiveEntDef.aliasList;
              if ( aliasList || (Alias = SND_TryFindAlias(v2->scratchData[v6].reactiveEntDef.effectSound.name), v2 = s_createFxTool, (aliasList = Alias) != NULL) )
              {
                SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
                CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)v8, aliasList);
                v2 = s_createFxTool;
              }
              v15 = *(_QWORD *)(v8 + 24);
              if ( v15 )
              {
                def.m_particleSystemDef = *(const ParticleSystemDef **)(v8 + 24);
                AnglesToAxis((const vec3_t *)(v8 + 12), &axis);
                LODWORD(v15) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, 0, (const vec3_t *)v8, &axis);
                v2 = s_createFxTool;
              }
              *((_DWORD *)v7 + 1605692) = v15;
              *((_DWORD *)v7 + 1605693) = time + 3000;
            }
          }
        }
        ++v3;
        v5 += 4i64;
      }
      while ( v3 < v2->usedEffectTotal );
    }
    CG_DebugSphere(&center, 256.0, &colorGreen, 0, 60);
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
  cg_t *LocalClientGlobals; 
  float v3; 
  float v4; 
  double v5; 
  CreateFxTool *v6; 
  const vec3_t *p_position; 
  float v8; 
  float v9; 
  vec3_t outOrg; 
  vec3_t end; 
  vec3_t v12; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    if ( s_createFxTool )
    {
      if ( s_createFxTool->enabled )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        v3 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
        v4 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
        end.v[0] = (float)(750.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
        end.v[2] = (float)(750.0 * v4) + outOrg.v[2];
        end.v[1] = (float)(750.0 * v3) + outOrg.v[1];
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &s_createFxTool->clipboard.cursorTrace, &outOrg, &end, &bounds_origin, LocalClientGlobals->predictedPlayerState.clientNum, 0, 41969969, 0, NULL, All);
        if ( s_createFxTool->clipboard.cursorTrace.fraction < 1.0 )
        {
          v5 = AngleDelta(LocalClientGlobals->predictedPlayerState.viewangles.v[1], s_createFxTool->clipboard.vPlayerAngles.v[1]);
          v6 = s_createFxTool;
          s_createFxTool->clipboard.yawDelta = *(float *)&v5;
          p_position = &v6->clipboard.cursorTrace.position;
          v6->clipboard.vCentroidToCursor.v[0] = v6->clipboard.cursorTrace.position.v[0] - v6->clipboard.vCentroid.v[0];
          v6->clipboard.vCentroidToCursor.v[1] = v6->clipboard.cursorTrace.position.v[1] - v6->clipboard.vCentroid.v[1];
          v6->clipboard.vCentroidToCursor.v[2] = v6->clipboard.cursorTrace.position.v[2] - v6->clipboard.vCentroid.v[2];
          if ( v6->clipboard.effectTotal <= 0 )
          {
            v8 = 10.0 * v6->clipboard.cursorTrace.normal.v[1];
            v12.v[0] = (float)(10.0 * v6->clipboard.cursorTrace.normal.v[0]) + p_position->v[0];
            v9 = 10.0 * v6->clipboard.cursorTrace.normal.v[2];
            v12.v[1] = v8 + v6->clipboard.cursorTrace.position.v[1];
            v12.v[2] = v9 + v6->clipboard.cursorTrace.position.v[2];
            CL_AddDebugLine(p_position, &v12, &colorYellow, 0, 0, 0);
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
  CreateFxTool *v6; 
  const dvar_t *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  CreateFxTool *v11; 
  bool lastExportAutosave; 
  const char *v13; 
  __int64 exportLayerStackCount; 
  const CreateFxMapLayerDef *v15; 
  __int64 v16; 
  __int64 v17; 

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
    v6 = s_createFxTool;
    s_createFxTool->statusMessageTimeout = v5->time + 3000;
    v6->statusMessageColor = colorWhite;
    Core_strcpy(v6->statusMessageBuffer, 0x100ui64, v4);
    CG_CreateFx_ResetExportStatus();
  }
  else
  {
    v7 = DVARSTR_launcher_movefile_fail;
    if ( !DVARSTR_launcher_movefile_fail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "launcher_movefile_fail") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.string;
    if ( v8 && *v8 )
    {
      Com_Printf_NoFilter("[CreateFx] Save Failed %s\n", v8);
      v9 = j_va("ERROR:(%s): see launcher output for more details", v8);
      CG_CreateFx_PrintMessageInternal(v9, &colorRed);
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
        v10 = "Save";
        if ( s_createFxTool->lastExportAutosave )
          v10 = "Autosave";
        Com_Printf_NoFilter("[CreateFx] %s timed out\n", v10);
        CG_CreateFx_PrintMessageInternal("NxLauncher Missing", &colorRed);
        v11 = s_createFxTool;
        s_createFxTool->lastExportTime = 0;
        *(_WORD *)&v11->lastExportAutosave = 0;
      }
    }
    else if ( s_createFxTool->exportLayerStackCount > 0 )
    {
      lastExportAutosave = s_createFxTool->lastExportAutosave;
      v13 = (char *)&queryFormat.fmt + 3;
      if ( lastExportAutosave )
        v13 = "(autosave)";
      Com_Printf(0, "[CreateFx] exportLayerStack %s\n", v13);
      exportLayerStackCount = s_createFxTool->exportLayerStackCount;
      if ( (int)exportLayerStackCount - 1 >= (unsigned int)exportLayerStackCount )
      {
        LODWORD(v17) = s_createFxTool->exportLayerStackCount;
        LODWORD(v16) = exportLayerStackCount - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5031, ASSERT_TYPE_ASSERT, "(unsigned)( exportLayerStackIndex ) < (unsigned)( s_createFxTool->exportLayerStackCount )", "exportLayerStackIndex doesn't index s_createFxTool->exportLayerStackCount\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v15 = (const CreateFxMapLayerDef *)*((_QWORD *)&s_createFxTool->snapToNormal + exportLayerStackCount);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 5033, ASSERT_TYPE_ASSERT, "(layer)", (const char *)&queryFormat, "layer") )
        __debugbreak();
      if ( !v15->filtered )
        CG_CreateFx_ExportLayer(v15, lastExportAutosave);
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
  int v3; 
  float distMax; 
  double v7; 
  CgSoundSystem *SoundSystem; 

  v3 = soundIndex + 2049;
  if ( soundIndex + 2049 >= 3329 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2671, ASSERT_TYPE_ASSERT, "(soundClientEntIndex < ( ( ( ( 2048 ) ) ) + ( 1 ) ) + ( 1024 ) + ( 128 ) + ( 128 ))", (const char *)&queryFormat, "soundClientEntIndex < FIRST_CLIENT_ENT_SOUND + MAX_CLIENT_ENT_SOUNDS + MAX_CLIENT_ENT_REACTIVE_SOUNDS + MAX_CLIENT_ENT_INTERVAL_SOUNDS") )
    __debugbreak();
  if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2673, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  if ( !aliasList->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 2674, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
    __debugbreak();
  distMax = aliasList->head->distMax;
  v7 = SND_DistSqToNearestListener(origin);
  if ( *(float *)&v7 <= (float)(distMax * distMax) )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
    CgSoundSystem::PlaySoundAliasAsync(SoundSystem, v3, origin, aliasList);
  }
}

/*
==============
CG_CreateFx_UpdatePendingExploders
==============
*/
void CG_CreateFx_UpdatePendingExploders(const unsigned int timeNow)
{
  CreateFxTool *v1; 
  __int64 v3; 
  unsigned int startTime; 
  __int64 exploderIndex; 
  __int64 v6; 
  bool *v7; 
  float *v; 
  const ParticleSystemDef *particleSystemDef; 
  const SndAliasList *v10; 
  SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  unsigned __int16 activeExploderCount; 
  float damageAmount; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  v1 = s_createFxTool;
  v3 = s_createFxTool->pendingExploderCount - 1i64;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      startTime = v1->pendingExploders[v3].startTime;
      if ( startTime < timeNow )
        break;
LABEL_21:
      if ( --v3 < 0 )
        return;
    }
    exploderIndex = v1->pendingExploders[v3].exploderIndex;
    if ( v1->scratchDataState[exploderIndex].effectType != 3 )
    {
LABEL_20:
      v1->pendingExploders[v3] = *(PendingClientExploder *)&v1->activeExploderIndices[2 * v1->pendingExploderCount-- + 1023];
      goto LABEL_21;
    }
    v6 = (int)exploderIndex;
    v7 = &v1->inited + 40 * (int)exploderIndex;
    v = v1->scratchData[v6].oneShotFxDef.origin.v;
    particleSystemDef = v1->scratchData[v6].oneShotFxDef.effect.particleSystemDef;
    if ( particleSystemDef )
    {
      def.m_particleSystemDef = v1->scratchData[v6].oneShotFxDef.effect.particleSystemDef;
      AnglesToAxis(&v1->scratchData[v6].oneShotFxDef.angles, &axis);
      LODWORD(particleSystemDef) = FX_PlayOrientedEffect(LOCAL_CLIENT_0, &def, startTime, (const vec3_t *)v, &axis);
      v1 = s_createFxTool;
    }
    *((_DWORD *)v7 + 1605692) = (_DWORD)particleSystemDef;
    v10 = (const SndAliasList *)*((_QWORD *)v + 6);
    if ( v10 || (Alias = SND_TryFindAlias(*((const char **)v + 5)), v1 = s_createFxTool, (v10 = Alias) != NULL) )
    {
      if ( v10->head )
      {
        if ( Com_IsSoundAliasLooping(v10) )
        {
          v1 = s_createFxTool;
          activeExploderCount = s_createFxTool->activeExploderCount;
          if ( activeExploderCount < 0x400u )
          {
            s_createFxTool->activeExploderIndices[activeExploderCount] = exploderIndex;
            ++v1->activeExploderCount;
            goto LABEL_15;
          }
          Com_PrintWarning(0, "WARNING: too many active exploders!\n");
        }
        else
        {
          SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
          CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)v, v10);
        }
        v1 = s_createFxTool;
      }
    }
LABEL_15:
    damageAmount = v1->scratchData[v6].explodersDef.server.damageAmount;
    if ( damageAmount != 0.0 && v1->scratchData[v6].explodersDef.server.damageRadius != 0.0 || v1->scratchData[v6].explodersDef.server.earthquakeName || v1->scratchData[v6].explodersDef.server.rumbleName )
    {
      LODWORD(v19) = v1->scratchData[v6].explodersDef.server.rumbleName;
      LODWORD(v18) = v1->scratchData[v6].explodersDef.server.earthquakeName;
      LODWORD(v17) = v1->scratchData[v6].explodersDef.server.damageEnvironmentOnly;
      LODWORD(v16) = v1->scratchData[v6].explodersDef.server.damageDoOcclusionTraces;
      v15 = j_va("cfx_exploder %g %g %g %f %f %f %d %d %u %u", *v, v[1], v[2], (float)((float)*((int *)v + 6) * 0.001), damageAmount, v1->scratchData[v6].explodersDef.server.damageRadius, v16, v17, v18, v19);
      Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v15);
      v1 = s_createFxTool;
    }
    goto LABEL_20;
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
  float v3; 
  float v4; 
  float v5; 
  CreateFxTool *v6; 
  int v7; 
  __int128 v8; 
  __int64 v9; 
  __int128 v10; 
  __int128 v11; 
  __int64 v12; 
  float *v; 
  CreateFxEffectType effectType; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  vec3_t outValue; 

  if ( s_createFxTool->editRotation )
  {
    CG_CreateFx_WorldMoveRotation();
  }
  else
  {
    editCameraRelative = s_createFxTool->editCameraRelative;
    _XMM6 = 0i64;
    __asm { vunpcklps xmm0, xmm6, xmm6 }
    *(double *)outValue.v = *(double *)&_XMM0;
    outValue.v[2] = 0.0;
    CG_CreateFx_EditVec3Update(LOCAL_CLIENT_0, editCameraRelative, &outValue);
    v3 = outValue.v[0];
    v4 = outValue.v[2];
    v5 = outValue.v[1];
    if ( outValue.v[0] != 0.0 || outValue.v[1] != 0.0 || outValue.v[2] != 0.0 )
    {
      v6 = s_createFxTool;
      v7 = 0;
      if ( s_createFxTool->selectedEffectTotal > 0 )
      {
        v8 = v20;
        v9 = 7209180i64;
        v10 = v20;
        v11 = v20;
        do
        {
          v12 = *(int *)(&v6->inited + v9);
          if ( (unsigned int)v12 >= 0x4000 )
          {
            LODWORD(v19) = 0x4000;
            LODWORD(v18) = *(_DWORD *)(&v6->inited + v9);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6879, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
            v6 = s_createFxTool;
          }
          v = v6->scratchData[v12].oneShotFxDef.origin.v;
          effectType = v6->scratchDataState[v12].effectType;
          if ( effectType == 1 || v6->scratchDataState[v12].effectType == 2 || v6->scratchDataState[v12].effectType == 3 || v6->scratchDataState[v12].effectType == Menu || v6->scratchDataState[v12].effectType == 5 )
          {
            if ( (CreateFxTool *)((char *)v6 + 104 * v12) != (CreateFxTool *)-4718800i64 )
            {
              v10 = *(unsigned int *)v;
              v8 = LODWORD(v6->scratchData[v12].oneShotFxDef.origin.v[1]);
              v11 = LODWORD(v6->scratchData[v12].oneShotFxDef.origin.v[2]);
            }
          }
          else
          {
            LODWORD(v18) = v6->scratchDataState[v12].effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v18) )
              __debugbreak();
          }
          v15 = v10;
          *(float *)&v15 = *(float *)&v10 + v3;
          v10 = v15;
          v16 = v8;
          *(float *)&v16 = *(float *)&v8 + v5;
          v8 = v16;
          v17 = v11;
          *(float *)&v17 = *(float *)&v11 + v4;
          v11 = v17;
          if ( effectType == 1 || effectType == 2 || effectType == 3 || effectType == Menu || effectType == 5 )
          {
            if ( v )
            {
              *v = *(float *)&v10;
              v[1] = *(float *)&v8;
              v[2] = *(float *)&v17;
            }
          }
          else
          {
            LODWORD(v18) = effectType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_SetEffectOrigin: unhandled effect type '%d'", v18) )
              __debugbreak();
          }
          if ( (unsigned int)v12 >= 0x4000 )
          {
            LODWORD(v19) = 0x4000;
            LODWORD(v18) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          CG_CreateFx_StopEffect(v12);
          CG_CreateFx_StartEffect(v12);
          v6 = s_createFxTool;
          ++v7;
          v9 += 4i64;
        }
        while ( v7 < s_createFxTool->selectedEffectTotal );
      }
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
  unsigned int v1; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 

  v1 = 0;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v5) = 3;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( vec->v[0] != 0.0 )
    {
      if ( v1 >= 3 )
      {
        LODWORD(v5) = 3;
        LODWORD(v4) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      if ( COERCE_FLOAT(LODWORD(vec->v[0]) & _xmm) < 0.001 )
      {
        if ( v1 >= 3 )
        {
          LODWORD(v5) = 3;
          LODWORD(v4) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v4, v5) )
            __debugbreak();
        }
        vec->v[0] = 0.0;
      }
    }
    ++v1;
    vec = (vec3_t *)((char *)vec + 4);
    v2 = v1 < 3;
  }
  while ( (int)v1 < 3 );
}

/*
==============
CG_CreateFx_WorldMoveRotation
==============
*/
void CG_CreateFx_WorldMoveRotation()
{
  CreateFxTool *v2; 
  unsigned int v3; 
  CreateFxTool *v4; 
  int v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  vec3_t outValue; 
  vec3_t outCenter; 
  vec3_t angles; 
  tmat33_t<vec3_t> inAxis; 
  vec3_t pivotPoint; 
  tmat33_t<vec3_t> axis; 

  _XMM6 = 0i64;
  outCenter.v[2] = 0.0;
  outValue.v[2] = 0.0;
  __asm { vunpcklps xmm0, xmm6, xmm6 }
  *(double *)outValue.v = *(double *)&_XMM0;
  if ( s_createFxTool->snapToAngleIndex )
    CG_CreateFx_GetSnapMovement(LOCAL_CLIENT_0, &outValue);
  else
    CG_CreateFx_EditVec3Update(LOCAL_CLIENT_0, 0, &outValue);
  v2 = s_createFxTool;
  if ( s_createFxTool->selectedEffectTotal > 1 )
  {
    CG_CreateFx_CalculateSelectionCenter(&outCenter);
    AxisClear(&axis);
    FX_PlayOrientedEffect(LOCAL_CLIENT_0, &s_createFxTool->anglesModelHandle, 0, &outCenter, &axis);
    v2 = s_createFxTool;
  }
  if ( outValue.v[0] != 0.0 || outValue.v[1] != 0.0 || outValue.v[2] != 0.0 )
  {
    angles.v[1] = outValue.v[1] * -1.0;
    angles.v[0] = outValue.v[0];
    angles.v[2] = outValue.v[2];
    if ( v2->selectedEffectTotal == 1 )
    {
      v3 = v2->selectedEffectList[0];
      if ( v3 >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6812, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v2->selectedEffectList[0], 0x4000) )
        __debugbreak();
      CG_CreateFx_GetScratchEffectAngles(v3, &outValue);
      AnglesToAxis(&outValue, &inAxis);
      RotateAxisAroundVectors(&inAxis, &inAxis, &angles, &inAxis);
      AxisToAngles(&inAxis, &outValue);
      CG_CreateFx_SetScratchEffectAngles(v3, &outValue);
      CG_CreateFx_RestartEffect(v3);
    }
    else if ( v2->selectedEffectTotal > 1 )
    {
      CG_CreateFx_CalculateSelectionCenter(&pivotPoint);
      AxisClear(&inAxis);
      RotateAxisAroundVectors(&inAxis, &inAxis, &angles, &inAxis);
      v4 = s_createFxTool;
      v5 = 0;
      if ( s_createFxTool->selectedEffectTotal > 0 )
      {
        v6 = 7209180i64;
        do
        {
          v7 = *(_DWORD *)(&v4->inited + v6);
          if ( v7 >= 0x4000 )
          {
            LODWORD(v9) = 0x4000;
            LODWORD(v8) = *(_DWORD *)(&v4->inited + v6);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 6842, ASSERT_TYPE_ASSERT, "(unsigned)( storageIndex ) < (unsigned)( CREATEFX_MAX_FX )", "storageIndex doesn't index CREATEFX_MAX_FX\n\t%i not in [0, %i)", v8, v9) )
              __debugbreak();
          }
          CG_CreateFx_GetScratchEffectOrigin(v7, &outValue);
          RotatePointAroundPoint(&outValue, &outValue, &pivotPoint, &inAxis);
          CG_CreateFx_SetScratchEffectOrigin(v7, &outValue);
          CG_CreateFx_GetScratchEffectAngles(v7, &outCenter);
          AnglesToAxis(&outCenter, &axis);
          RotateAxisAroundVectors(&axis, &inAxis, &angles, &axis);
          AxisToAngles(&axis, &outCenter);
          CG_CreateFx_SetScratchEffectAngles(v7, &outCenter);
          CG_CreateFx_RestartEffect(v7);
          v4 = s_createFxTool;
          ++v5;
          v6 += 4i64;
        }
        while ( v5 < s_createFxTool->selectedEffectTotal );
      }
    }
  }
}

/*
==============
CG_CreateFx_WriteEffectToFile
==============
*/
void CG_CreateFx_WriteEffectToFile(const int storageIndex, fileHandle_t *outFile)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int64 v6; 
  CreateFxTool *v7; 
  char *v8; 
  __int64 effectType; 
  float v10; 
  const CreateFxMapLayerDef *layer; 
  float v12; 
  float v13; 
  __int64 handle; 
  float v15; 
  float v16; 
  float v17; 
  float *v18; 
  float v19; 
  int *v20; 
  int *v21; 
  float *v22; 
  float *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  const char *v28; 
  float *v29; 
  __int64 v30; 
  int *v31; 
  scr_string_t v32; 
  bool v33; 
  const char ***v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  __int64 v38; 
  __int64 v39; 
  char v40; 
  scr_string_t v41; 
  scr_string_t v42; 
  scr_string_t stringValue; 
  scr_string_t stringValue_4; 
  int *v45; 
  vec3_t vec; 
  vec3_t dst; 
  vec3_t from; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 

  v6 = storageIndex;
  v7 = s_createFxTool;
  v8 = (char *)(&s_createFxTool->inited + 104 * storageIndex);
  v54 = v2;
  effectType = s_createFxTool->scratchDataState[storageIndex].effectType;
  if ( (unsigned int)effectType >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8131, ASSERT_TYPE_ASSERT, "(unsigned)( effectTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_createFxEffectClassname ) ) + 0 ) )", "effectTypeIndex doesn't index ARRAY_COUNT( s_createFxEffectClassname )\n\t%i not in [0, %i)", effectType, 6) )
    __debugbreak();
  FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "classname", s_createFxEffectClassname[effectType]);
  if ( (_DWORD)effectType == 1 || (_DWORD)effectType == 2 || (_DWORD)effectType == 3 || (_DWORD)effectType == 4 || (_DWORD)effectType == 5 )
  {
    if ( v8 != (char *)-4718800i64 )
    {
      v10 = *((float *)v8 + 1179701);
      point.v[0] = *((float *)v8 + 1179700);
      point.v[2] = *((float *)v8 + 1179702);
      point.v[1] = v10;
    }
  }
  else
  {
    LODWORD(v38) = effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectOrigin: unhandled effect type '%d'", v38) )
      __debugbreak();
  }
  layer = v7->scratchDataState[v6].layer;
  if ( !layer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8078, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
    __debugbreak();
  if ( s_createFxTool->rootHasOffset )
  {
    AnglesToAxis(&s_createFxTool->rootAngles, &axis);
    MatrixTranspose(&axis, &out);
    RotatePointAroundPoint(&dst, &point, &s_createFxTool->rootOrigin, &out);
    v12 = dst.v[1] - s_createFxTool->rootOrigin.v[1];
    vec.v[0] = dst.v[0] - s_createFxTool->rootOrigin.v[0];
    v13 = dst.v[2] - s_createFxTool->rootOrigin.v[2];
  }
  else
  {
    AnglesToAxis(&layer->angles, &out);
    MatrixTranspose(&out, &axis);
    RotatePointAroundPoint(&dst, &point, &layer->origin, &axis);
    v12 = dst.v[1] - layer->origin.v[1];
    vec.v[0] = dst.v[0] - layer->origin.v[0];
    v13 = dst.v[2] - layer->origin.v[2];
  }
  vec.v[1] = v12;
  vec.v[2] = v13;
  CG_CreateFx_Vec3FixSubEpsilonValues(&vec);
  handle = outFile->handle.handle;
  v53 = v3;
  v52 = v4;
  FS_Printf((fileHandle_t)handle, "\t\"%s\" \"%g %g %g\"\n", "origin", vec.v[0], vec.v[1], vec.v[2]);
  if ( (_DWORD)effectType == 1 || (_DWORD)effectType == 2 || (_DWORD)effectType == 3 || (_DWORD)effectType == 4 || (_DWORD)effectType == 5 )
  {
    if ( v8 != (char *)-4718812i64 )
    {
      v15 = *((float *)v8 + 1179703);
      v16 = *((float *)v8 + 1179704);
      v17 = *((float *)v8 + 1179705);
      goto LABEL_27;
    }
  }
  else
  {
    LODWORD(v39) = effectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 3223, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CreateFx_GetEffectAngles: unhandled effect type '%d'", v39) )
      __debugbreak();
  }
  v15 = *(float *)&v41;
  v16 = *(float *)&v41;
  v17 = *(float *)&v41;
LABEL_27:
  v18 = (float *)v7->scratchDataState[v6].layer;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 8110, ASSERT_TYPE_ASSERT, "(layerDef)", (const char *)&queryFormat, "layerDef") )
    __debugbreak();
  if ( s_createFxTool->rootHasOffset )
  {
    from.v[0] = v15 - s_createFxTool->rootAngles.v[0];
    from.v[1] = v16 - s_createFxTool->rootAngles.v[1];
    v19 = v17 - s_createFxTool->rootAngles.v[2];
  }
  else
  {
    from.v[0] = v15 - v18[73];
    from.v[1] = v16 - v18[74];
    v19 = v17 - v18[75];
  }
  from.v[2] = v19;
  AnglesNormalize360(&from, &from);
  FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g %g %g\"\n", "angles", from.v[0], from.v[1], from.v[2]);
  FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "target", s_createFxTool->layerList[0].pathString);
  v20 = NULL;
  v21 = NULL;
  v45 = NULL;
  v22 = NULL;
  v40 = 0;
  v23 = NULL;
  stringValue = 0;
  stringValue_4 = 0;
  v42 = 0;
  *(_QWORD *)dst.v = 0i64;
  *(_QWORD *)vec.v = 0i64;
  v24 = effectType - 1;
  if ( !v24 )
  {
    v28 = (const char *)*((_QWORD *)v8 + 589855);
    v20 = (int *)(v8 + 4718828);
    v29 = NULL;
LABEL_48:
    v30 = 4718832i64;
LABEL_49:
    v34 = (const char ***)&v8[v30];
    if ( &v8[v30] && *v34 )
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "fxid", **v34);
    v31 = NULL;
    goto LABEL_53;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v28 = (const char *)*((_QWORD *)v8 + 589853);
    v29 = NULL;
    v31 = NULL;
    goto LABEL_53;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v22 = (float *)(v8 + 4718880);
    v32 = *((_DWORD *)v8 + 1179724);
    v20 = (int *)(v8 + 4718824);
    v28 = (const char *)*((_QWORD *)v8 + 589855);
    v23 = (float *)(v8 + 4718884);
    stringValue = *((_DWORD *)v8 + 1179714);
    stringValue_4 = *((_DWORD *)v8 + 1179723);
    *(_QWORD *)dst.v = v8 + 4718900;
    v33 = *((float *)v8 + 1179720) > 0.0;
    *(_QWORD *)vec.v = v8 + 4718901;
    v42 = v32;
    if ( !v33 || (v40 = 1, *v23 <= 0.0) )
      v40 = 0;
    v29 = NULL;
    goto LABEL_48;
  }
  v27 = v26 - 1;
  if ( v27 )
  {
    if ( v27 != 1 )
    {
      v29 = NULL;
      v31 = NULL;
      goto LABEL_58;
    }
    v28 = (const char *)*((_QWORD *)v8 + 589854);
    v29 = (float *)(v8 + 4718848);
    v30 = 4718824i64;
    goto LABEL_49;
  }
  v28 = (const char *)*((_QWORD *)v8 + 589853);
  v45 = (int *)(v8 + 4718840);
  v31 = (int *)(v8 + 4718844);
  v29 = NULL;
LABEL_53:
  if ( v28 && *v28 )
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "soundalias", v28);
  v21 = v45;
LABEL_58:
  if ( v20 )
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%.3g\"\n", "delay", (float)((float)*v20 * 0.001));
  if ( v21 )
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%.3g\"\n", "delay_min", (float)((float)*v21 * 0.001));
  if ( v31 )
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%.3g\"\n", "delay_max", (float)((float)*v31 * 0.001));
  if ( v29 )
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g\"\n", "reactive_radius", *v29);
  if ( stringValue )
  {
    v35 = SL_ConvertToString(stringValue);
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "exploder", v35);
  }
  if ( stringValue_4 )
  {
    v36 = SL_ConvertToString(stringValue_4);
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "earthquake", v36);
  }
  if ( v42 )
  {
    v37 = SL_ConvertToString(v42);
    FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%s\"\n", "rumble", v37);
  }
  if ( v40 )
  {
    if ( v22 )
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g\"\n", "damage", *v22);
    if ( v23 )
      FS_Printf((fileHandle_t)outFile->handle.handle, "\t\"%s\" \"%g\"\n", "damage_radius", *v23);
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

  EffectIndex = CG_CreateFx_AllocateEffectIndex();
  m_effectType = this->m_effectType;
  this->m_effectIndex = EffectIndex;
  CG_CreateFx_SetEffectType(EffectIndex, m_effectType);
  CG_CreateFx_SetEffectLayer(this->m_effectIndex, this->m_effectLayer);
  s_createFxTool->scratchData[this->m_effectIndex] = this->m_effectData;
  CG_CreateFx_UpdateEffectAlias(this->m_effectIndex);
  m_effectIndex = this->m_effectIndex;
  CG_CreateFx_FreeSoundIndex(m_effectIndex);
  CG_CreateFx_AllocSoundIndex(m_effectIndex);
  if ( this->m_effectType == 3 )
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
  CG_CreateFx_StartEffect(this->m_effectIndex);
  Com_Printf_NoFilter("[CreateFx] Copy %d:%s\n", (unsigned int)this->m_effectIndex, createFxEffectTypeStrings[this->m_effectType]);
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
  __int128 v3; 
  float v4; 
  float v5; 

  v3 = LODWORD(targetOrigin->v[1]);
  *(float *)&v3 = targetOrigin->v[1] - viewOrigin->v[1];
  v4 = targetOrigin->v[0] - viewOrigin->v[0];
  v5 = targetOrigin->v[2] - viewOrigin->v[2];
  if ( v4 == 0.0 && *(float *)&v3 == 0.0 && (float)(targetOrigin->v[2] - viewOrigin->v[2]) == 0.0 )
    return FLOAT_1_0;
  *(float *)&v3 = fsqrt((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(v4 * v4)) + (float)(v5 * v5));
  _XMM3 = v3;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  return (float)((float)((float)((float)(targetOrigin->v[1] - viewOrigin->v[1]) * (float)(1.0 / *(float *)&_XMM0)) * viewForward->v[1]) + (float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * viewForward->v[0])) + (float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * viewForward->v[2]);
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
void CreateFxEditBuffer::modifyNumber(CreateFxEditBuffer *this, const float delta)
{
  __int64 v5; 
  __int64 m_bufferCount; 

  *(double *)&_XMM0 = atof(this->m_buffer);
  __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
  Com_sprintf(this->m_buffer, 0x3FFui64, "%g", (float)(*(float *)&_XMM2 + delta));
  v5 = -1i64;
  do
    ++v5;
  while ( this->m_buffer[v5] );
  this->m_bufferCount = v5;
  if ( (unsigned int)v5 > 0x3FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_createfx.cpp", 733, ASSERT_TYPE_ASSERT, "(m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM)", (const char *)&queryFormat, "m_bufferCount >= 0 && m_bufferCount <= CREATEFX_FILTER_BUFFER_COUNT_MAX_MINUS_NULLTERM") )
    __debugbreak();
  m_bufferCount = this->m_bufferCount;
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

