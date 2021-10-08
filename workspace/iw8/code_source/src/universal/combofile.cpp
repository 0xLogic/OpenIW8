/*
==============
Sys_GetSaveProtocolVersion
==============
*/

unsigned int __fastcall Sys_GetSaveProtocolVersion()
{
  return ?Sys_GetSaveProtocolVersion@@YAIXZ();
}

/*
==============
GetAdvertisedPatchVersion
==============
*/

unsigned int __fastcall GetAdvertisedPatchVersion()
{
  return ?GetAdvertisedPatchVersion@@YAIXZ();
}

/*
==============
GetProtocolVersion
==============
*/

unsigned int __fastcall GetProtocolVersion()
{
  return ?GetProtocolVersion@@YAIXZ();
}

/*
==============
GetAdvertisedPatchVersion
==============
*/
__int64 GetAdvertisedPatchVersion()
{
  Online_PatchStreamer *Instance; 
  unsigned int PatchManifestVersion; 

  Instance = Online_PatchStreamer::GetInstance();
  PatchManifestVersion = Online_PatchStreamer::GetPatchManifestVersion(Instance, MOVEMENT);
  if ( PatchManifestVersion >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\combofile.cpp", 60, ASSERT_TYPE_ASSERT, "(patchManifestVersion < (1 << 15))", (const char *)&queryFormat, "patchManifestVersion < (1 << 15)") )
    __debugbreak();
  return PatchManifestVersion;
}

/*
==============
GetProtocolVersion
==============
*/
unsigned int GetProtocolVersion()
{
  return Sys_GetProtocolVersion_Internal(0);
}

/*
==============
Sys_GetProtocolVersion_Internal
==============
*/
__int64 Sys_GetProtocolVersion_Internal(int isSaveProtocol)
{
  unsigned int Int_Internal_DebugName; 
  Online_PatchStreamer *Instance; 
  unsigned int PatchManifestVersion; 
  unsigned int v5; 
  int v6; 

  Int_Internal_DebugName = 1098;
  if ( DCONST_DVARINT_dev_protocol_version && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_dev_protocol_version, "dev_protocol_version") >= 0 )
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_dev_protocol_version, "dev_protocol_version");
  Instance = Online_PatchStreamer::GetInstance();
  PatchManifestVersion = Online_PatchStreamer::GetPatchManifestVersion(Instance, MOVEMENT);
  if ( PatchManifestVersion >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\combofile.cpp", 60, ASSERT_TYPE_ASSERT, "(patchManifestVersion < (1 << 15))", (const char *)&queryFormat, "patchManifestVersion < (1 << 15)") )
    __debugbreak();
  if ( Int_Internal_DebugName > 0xFFFF )
  {
    v6 = 0xFFFF;
    v5 = Int_Internal_DebugName;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\combofile.cpp", 36, ASSERT_TYPE_ASSERT, "( lowProtocol ) <= ( 65535 )", "%s <= %s\n\t%i, %i", "lowProtocol", "65535", v5, v6) )
      __debugbreak();
  }
  return Int_Internal_DebugName + (PatchManifestVersion << 16);
}

/*
==============
Sys_GetSaveProtocolVersion
==============
*/
__int64 Sys_GetSaveProtocolVersion()
{
  return Sys_GetProtocolVersion_Internal(1);
}

