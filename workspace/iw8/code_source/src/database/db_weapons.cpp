/*
==============
DB_Weapons_ValidateTransientFlags
==============
*/

void __fastcall DB_Weapons_ValidateTransientFlags(const WeaponCompleteDef *weapCompleteDef, bool (__fastcall *cb)(const XModel *))
{
  ?DB_Weapons_ValidateTransientFlags@@YAXAEBUWeaponCompleteDef@@P6A_NPEBUXModel@@@Z@Z(weapCompleteDef, cb);
}

/*
==============
DB_Weapons_FlagAttachmentForMyChanges
==============
*/

void __fastcall DB_Weapons_FlagAttachmentForMyChanges(WeaponAttachment *outAttachment)
{
  ?DB_Weapons_FlagAttachmentForMyChanges@@YAXAEAUWeaponAttachment@@@Z(outAttachment);
}

/*
==============
DB_Weapons_FlagWeaponForMyChanges
==============
*/

void __fastcall DB_Weapons_FlagWeaponForMyChanges(WeaponCompleteDef *outWeapCompleteDef)
{
  ?DB_Weapons_FlagWeaponForMyChanges@@YAXAEAUWeaponCompleteDef@@@Z(outWeapCompleteDef);
}

/*
==============
DB_Weapons_FlagAttachmentForMyChanges
==============
*/
void DB_Weapons_FlagAttachmentForMyChanges(WeaponAttachment *outAttachment)
{
  int v2; 
  unsigned __int16 v3; 

  v2 = I_stricmp(outAttachment->szInternalName, g_defaultAssetName[38]);
  v3 = -1;
  if ( !v2 )
    v3 = 0;
  outAttachment->transientViewFlags = v3;
  outAttachment->transientWorldFlags = v3;
}

/*
==============
DB_Weapons_FlagWeaponForMyChanges
==============
*/
void DB_Weapons_FlagWeaponForMyChanges(WeaponCompleteDef *outWeapCompleteDef)
{
  WeaponDef *weapDef; 

  weapDef = outWeapCompleteDef->weapDef;
  if ( weapDef )
  {
    if ( I_stricmp(outWeapCompleteDef->szInternalName, g_defaultAssetName[39]) )
    {
      *(_WORD *)&weapDef->transientBaseWorldFlags = 511;
      weapDef->transientBaseViewFlags = -1;
    }
    else
    {
      *(_WORD *)&weapDef->transientBaseWorldFlags = 0;
      weapDef->transientBaseViewFlags = 0;
    }
  }
}

/*
==============
DB_Weapons_ValidateTransientFlags
==============
*/
void DB_Weapons_ValidateTransientFlags(const WeaponCompleteDef *weapCompleteDef, bool (*cb)(const XModel *))
{
  WeaponDef *weapDef; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  unsigned int v7; 
  AttachmentList *attachments; 
  bool v9; 
  bool hasWorldFlags; 
  bool v11; 
  unsigned __int8 v12; 
  XModel *stowOffsetModel; 
  ValidateAttachmentTransientFlags functor; 
  unsigned __int8 v15; 
  char v16; 

  weapDef = weapCompleteDef->weapDef;
  functor.cb = cb;
  *(_WORD *)&functor.hasViewFlags = 0;
  v15 = 0;
  v16 = 0;
  if ( !weapDef )
    return;
  if ( weapDef->defaultViewModel )
  {
    if ( ((unsigned __int8 (*)(void))cb)() )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26760, 214i64, weapDef->defaultViewModel->name);
    v15 = 1;
  }
  if ( weapDef->defaultWorldModel )
  {
    if ( ((unsigned __int8 (*)(void))cb)() )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D267F0, 215i64, weapDef->defaultWorldModel->name);
    v16 = 1;
  }
  if ( weapDef->defaultWorldModelLeftHand && ((unsigned __int8 (*)(void))cb)() )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26880, 216i64, weapDef->defaultWorldModelLeftHand->name);
  if ( weapDef->defaultWorldModelRightHand && ((unsigned __int8 (*)(void))cb)() )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26920, 217i64, weapDef->defaultWorldModelRightHand->name);
  v5 = cb(weapDef->gunXModel);
  if ( cb(weapDef->gunXModelLeftHand) )
    v5 |= 2u;
  if ( cb(weapDef->gunXModelRightHand) )
    v5 |= 4u;
  v6 = cb(weapDef->worldModel);
  if ( cb(weapDef->worldXModelLeftHand) )
    v6 |= 2u;
  if ( cb(weapDef->worldXModelRightHand) )
    v6 |= 4u;
  v7 = 0;
  attachments = weapCompleteDef->attachments;
  do
  {
    if ( DB_Weapons_ForEachAttachmentArray_ValidateAttachmentTransientFlags_((const WeaponAttachment *const *const)attachments->attachments, attachments->attachmentCount, &functor) )
      break;
    ++v7;
    ++attachments;
  }
  while ( v7 < 0xE );
  v9 = v5 || functor.hasViewFlags;
  hasWorldFlags = functor.hasWorldFlags;
  v11 = v6 || functor.hasWorldFlags;
  if ( !weapDef->hasAnyTransientModels && (v9 || v11) || !weapDef->transientBaseViewFlags && v5 || !weapDef->transientBaseWorldFlags && v6 )
  {
    Com_Printf(0, "%s : Weapon transient flags mismatch:\n", weapCompleteDef->szInternalName);
    Com_Printf(0, "\t What we see right now:\n");
    Com_Printf(0, "\t\t hasTransientViewModels %d\n", v9);
    Com_Printf(0, "\t\t hasTransientWorldModels %d\n", v11);
    Com_Printf(0, "\t\t baseTransientViewFlags %d\n", v5);
    Com_Printf(0, "\t\t baseTransientWorldFlags %d\n", v6);
    Com_Printf(0, "\t\t attachmentFlags.hasViewFlags %d\n", functor.hasViewFlags);
    Com_Printf(0, "\t\t attachmentFlags.hasWorldFlags %d\n", hasWorldFlags);
    v12 = v15;
    Com_Printf(0, "\t\t hasDefaultViewModels %d\n", v15);
    Com_Printf(0, "\t\t hasDefaultWorldModels %d\n", v15);
    Com_Printf(0, "\t What we set in linker:\n");
    Com_Printf(0, "\t\t weapDef->hasAnyTransientModels %d\n", weapDef->hasAnyTransientModels);
    Com_Printf(0, "\t\t weapDef->transientBaseViewFlags %d\n", weapDef->transientBaseViewFlags);
    Com_Printf(0, "\t\t weapDef->transientBaseWorldFlags %d\n", weapDef->transientBaseWorldFlags);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26C10, 218i64, weapCompleteDef->szInternalName);
  }
  else
  {
    v12 = v15;
  }
  if ( v9 )
  {
    if ( !v12 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26D00, 219i64, weapCompleteDef->szInternalName);
    goto LABEL_48;
  }
  if ( v11 )
  {
LABEL_48:
    if ( !v16 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26DE0, 220i64, weapCompleteDef->szInternalName);
  }
  if ( weapDef->stowOffsetModel && ((unsigned __int8 (*)(void))cb)() )
  {
    stowOffsetModel = weapDef->stowOffsetModel;
    if ( stowOffsetModel != weapDef->worldModel )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D26ED0, 221i64, weapCompleteDef->szInternalName, stowOffsetModel->name);
  }
}

