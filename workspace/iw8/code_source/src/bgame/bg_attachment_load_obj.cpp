/*
==============
BG_LoadDefaultWeaponAttachment
==============
*/

WeaponAttachment *__fastcall BG_LoadDefaultWeaponAttachment()
{
  return ?BG_LoadDefaultWeaponAttachment@@YAPEAUWeaponAttachment@@XZ();
}

/*
==============
BG_RegisterAttachment
==============
*/

WeaponAttachment *__fastcall BG_RegisterAttachment(const char *name)
{
  return ?BG_RegisterAttachment@@YAPEAUWeaponAttachment@@PEBD@Z(name);
}

/*
==============
BG_LoadDefaultWeaponAttachment
==============
*/
WeaponAttachment *BG_LoadDefaultWeaponAttachment()
{
  return DB_FindXAssetHeader(ASSET_TYPE_ATTACHMENT, "defaultattachment", 1).attachment;
}

/*
==============
BG_RegisterAttachment
==============
*/
WeaponAttachment *BG_RegisterAttachment(const char *name)
{
  return 0i64;
}

