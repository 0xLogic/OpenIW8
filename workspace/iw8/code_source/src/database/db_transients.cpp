/*
==============
DB_Transients_UsingSPTransientSets
==============
*/

bool __fastcall DB_Transients_UsingSPTransientSets()
{
  return ?DB_Transients_UsingSPTransientSets@@YA_NXZ();
}

/*
==============
DB_Transients_RegisterZones
==============
*/

void __fastcall DB_Transients_RegisterZones(const char *name, const TransientInfo *transientInfo)
{
  ?DB_Transients_RegisterZones@@YAXPEBDPEBUTransientInfo@@@Z(name, transientInfo);
}

/*
==============
DB_Transients_UnregisterZones
==============
*/

void __fastcall DB_Transients_UnregisterZones(const TransientInfo *transientInfo)
{
  ?DB_Transients_UnregisterZones@@YAXPEBUTransientInfo@@@Z(transientInfo);
}

/*
==============
DB_Transients_GetMPCustomizationAvailCount
==============
*/

unsigned int __fastcall DB_Transients_GetMPCustomizationAvailCount()
{
  return ?DB_Transients_GetMPCustomizationAvailCount@@YAIXZ();
}

/*
==============
DB_Transients_GetWorldTransientIndexFromName
==============
*/

unsigned int __fastcall DB_Transients_GetWorldTransientIndexFromName(const char *name)
{
  return ?DB_Transients_GetWorldTransientIndexFromName@@YAIPEBD@Z(name);
}

/*
==============
DB_Transients_GetWorldTransientCount
==============
*/

unsigned int __fastcall DB_Transients_GetWorldTransientCount()
{
  return ?DB_Transients_GetWorldTransientCount@@YAIXZ();
}

/*
==============
DB_Transients_GetMPInfilAvailCount
==============
*/

unsigned int __fastcall DB_Transients_GetMPInfilAvailCount()
{
  return ?DB_Transients_GetMPInfilAvailCount@@YAIXZ();
}

/*
==============
DB_Transients_GetSPTransientName
==============
*/

const char *__fastcall DB_Transients_GetSPTransientName(unsigned int transientIndex)
{
  return ?DB_Transients_GetSPTransientName@@YAPEBDI@Z(transientIndex);
}

/*
==============
DB_Transients_GetSPTransientIndex
==============
*/

unsigned int __fastcall DB_Transients_GetSPTransientIndex(const char *name)
{
  return ?DB_Transients_GetSPTransientIndex@@YAIPEBD@Z(name);
}

/*
==============
DB_Transients_GetMPPhysicsAvailCount
==============
*/

unsigned int __fastcall DB_Transients_GetMPPhysicsAvailCount()
{
  return ?DB_Transients_GetMPPhysicsAvailCount@@YAIXZ();
}

/*
==============
DB_Transients_GetSPTransientZoneFlags
==============
*/

unsigned int __fastcall DB_Transients_GetSPTransientZoneFlags(unsigned int transientIndex)
{
  return ?DB_Transients_GetSPTransientZoneFlags@@YAII@Z(transientIndex);
}

/*
==============
DB_Transients_IsRegisteredSPTransient
==============
*/

bool __fastcall DB_Transients_IsRegisteredSPTransient(unsigned int transientIndex)
{
  return ?DB_Transients_IsRegisteredSPTransient@@YA_NI@Z(transientIndex);
}

/*
==============
DB_Transients_GetMPWorldAvailCount
==============
*/

unsigned int __fastcall DB_Transients_GetMPWorldAvailCount()
{
  return ?DB_Transients_GetMPWorldAvailCount@@YAIXZ();
}

/*
==============
DB_Transients_GetWorldTransientName
==============
*/

const char *__fastcall DB_Transients_GetWorldTransientName(unsigned int transientWorldIndex)
{
  return ?DB_Transients_GetWorldTransientName@@YAPEBDI@Z(transientWorldIndex);
}

/*
==============
DB_Transients_VerbosePrint
==============
*/

bool __fastcall DB_Transients_VerbosePrint()
{
  return ?DB_Transients_VerbosePrint@@YA_NXZ();
}

/*
==============
DB_Transients_GetMPWeaponAvailCount
==============
*/

unsigned int __fastcall DB_Transients_GetMPWeaponAvailCount()
{
  return ?DB_Transients_GetMPWeaponAvailCount@@YAIXZ();
}

/*
==============
DB_Transients_GetWorldTransientIndexFromList
==============
*/

unsigned int __fastcall DB_Transients_GetWorldTransientIndexFromList(const char *name)
{
  return ?DB_Transients_GetWorldTransientIndexFromList@@YAIPEBD@Z(name);
}

/*
==============
DB_Transients_GetSPTransientSets
==============
*/

const TransientSets *__fastcall DB_Transients_GetSPTransientSets()
{
  return ?DB_Transients_GetSPTransientSets@@YAPEBUTransientSets@@XZ();
}

/*
==============
DB_Transients_GetMPAttachmentAvailCount
==============
*/

unsigned int __fastcall DB_Transients_GetMPAttachmentAvailCount()
{
  return ?DB_Transients_GetMPAttachmentAvailCount@@YAIXZ();
}

/*
==============
DB_Transients_GetMPAttachmentAvailCount
==============
*/
__int64 DB_Transients_GetMPAttachmentAvailCount()
{
  return s_dbTransients.attachmentCount;
}

/*
==============
DB_Transients_GetMPCustomizationAvailCount
==============
*/
__int64 DB_Transients_GetMPCustomizationAvailCount()
{
  return s_dbTransients.customizationCount;
}

/*
==============
DB_Transients_GetMPInfilAvailCount
==============
*/
__int64 DB_Transients_GetMPInfilAvailCount()
{
  return s_dbTransients.infilFileCount;
}

/*
==============
DB_Transients_GetMPPhysicsAvailCount
==============
*/
__int64 DB_Transients_GetMPPhysicsAvailCount()
{
  return s_dbTransients.physicsFileCount;
}

/*
==============
DB_Transients_GetMPWeaponAvailCount
==============
*/
__int64 DB_Transients_GetMPWeaponAvailCount()
{
  return s_dbTransients.weaponCount;
}

/*
==============
DB_Transients_GetMPWorldAvailCount
==============
*/
__int64 DB_Transients_GetMPWorldAvailCount()
{
  return s_dbTransients.worldFileCount;
}

/*
==============
DB_Transients_GetSPTransientIndex
==============
*/
__int64 DB_Transients_GetSPTransientIndex(const char *name)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v5; 

  if ( !s_dbTransients.worldTransientInfo || (v2 = DB_Transients_SearchForTransientFastfile(s_dbTransients.worldTransientInfo, name), v3 = v2, v2 == -1) )
  {
    if ( !s_dbTransients.spCommonTransientInfo )
      return 0xFFFFFFFFi64;
    v5 = DB_Transients_SearchForTransientFastfile(s_dbTransients.spCommonTransientInfo, name);
    if ( v5 == -1 )
      return 0xFFFFFFFFi64;
    else
      return v5 + 32;
  }
  else
  {
    if ( v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 637, ASSERT_TYPE_ASSERT, "(index < commonStartIndex)", (const char *)&queryFormat, "index < commonStartIndex") )
      __debugbreak();
    return v3;
  }
}

/*
==============
DB_Transients_GetSPTransientName
==============
*/
const char *DB_Transients_GetSPTransientName(unsigned int transientIndex)
{
  __int64 v1; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 

  v1 = transientIndex;
  if ( s_dbTransients.worldTransientInfo && transientIndex < 0x20 )
  {
    if ( transientIndex >= s_dbTransients.worldTransientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( s_dbTransients.worldTransientCount )", "transientIndex doesn't index s_dbTransients.worldTransientCount\n\t%i not in [0, %i)", transientIndex, s_dbTransients.worldTransientCount) )
      __debugbreak();
    if ( (unsigned int)v1 >= s_dbTransients.worldTransientInfo->transientFileCount )
    {
      LODWORD(v5) = s_dbTransients.worldTransientInfo->transientFileCount;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( s_dbTransients.worldTransientInfo->transientFileCount )", "transientIndex doesn't index s_dbTransients.worldTransientInfo->transientFileCount\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    return s_dbTransients.worldTransientInfo->transientFiles[v1].name;
  }
  else if ( s_dbTransients.spCommonTransientInfo && transientIndex >= 0x20 )
  {
    v3 = transientIndex - 32;
    if ( transientIndex - 32 >= s_dbTransients.spCommonTransientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 617, ASSERT_TYPE_ASSERT, "(unsigned)( commonIndex ) < (unsigned)( s_dbTransients.spCommonTransientCount )", "commonIndex doesn't index s_dbTransients.spCommonTransientCount\n\t%i not in [0, %i)", v3, s_dbTransients.spCommonTransientCount) )
      __debugbreak();
    if ( v3 >= s_dbTransients.spCommonTransientInfo->transientFileCount )
    {
      LODWORD(v5) = s_dbTransients.spCommonTransientInfo->transientFileCount;
      LODWORD(v4) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 618, ASSERT_TYPE_ASSERT, "(unsigned)( commonIndex ) < (unsigned)( s_dbTransients.spCommonTransientInfo->transientFileCount )", "commonIndex doesn't index s_dbTransients.spCommonTransientInfo->transientFileCount\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    return s_dbTransients.spCommonTransientInfo->transientFiles[v3].name;
  }
  else
  {
    return 0i64;
  }
}

/*
==============
DB_Transients_GetSPTransientSets
==============
*/
const TransientSets *DB_Transients_GetSPTransientSets()
{
  const TransientSets *result; 

  result = s_dbTransients.spTransientSets;
  if ( !s_dbTransients.spTransientSets || !s_dbTransients.spTransientSets->count )
    return 0i64;
  return result;
}

/*
==============
DB_Transients_GetSPTransientZoneFlags
==============
*/
__int64 DB_Transients_GetSPTransientZoneFlags(unsigned int transientIndex)
{
  unsigned int v2; 
  unsigned int v4; 
  unsigned int worldTransientCount; 
  unsigned int spCommonTransientCount; 

  if ( s_dbTransients.worldTransientInfo && transientIndex < 0x20 )
  {
    if ( transientIndex >= s_dbTransients.worldTransientCount )
    {
      worldTransientCount = s_dbTransients.worldTransientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 664, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( s_dbTransients.worldTransientCount )", "transientIndex doesn't index s_dbTransients.worldTransientCount\n\t%i not in [0, %i)", transientIndex, worldTransientCount) )
        __debugbreak();
    }
    return 0x4000i64;
  }
  else if ( s_dbTransients.spCommonTransientInfo && transientIndex >= 0x20 )
  {
    v2 = transientIndex - 32;
    if ( v2 >= s_dbTransients.spCommonTransientCount )
    {
      spCommonTransientCount = s_dbTransients.spCommonTransientCount;
      v4 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 675, ASSERT_TYPE_ASSERT, "(unsigned)( commonIndex ) < (unsigned)( s_dbTransients.spCommonTransientCount )", "commonIndex doesn't index s_dbTransients.spCommonTransientCount\n\t%i not in [0, %i)", v4, spCommonTransientCount) )
        __debugbreak();
    }
    return 4096i64;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 681, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown transient index %d", transientIndex) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
DB_Transients_GetWorldTransientCount
==============
*/
__int64 DB_Transients_GetWorldTransientCount()
{
  __int64 result; 

  result = s_dbTransients.worldTransientCount;
  if ( s_dbTransients.worldTransientCount && !s_dbTransients.worldTransientInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 507, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldTransientInfo)", (const char *)&queryFormat, "s_dbTransients.worldTransientInfo") )
      __debugbreak();
    return s_dbTransients.worldTransientCount;
  }
  return result;
}

/*
==============
DB_Transients_GetWorldTransientIndexFromList
==============
*/
__int64 DB_Transients_GetWorldTransientIndexFromList(const char *name)
{
  unsigned int v2; 
  const TransientInfo *spCommonTransientInfo; 
  int v5; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  if ( s_dbTransients.worldTransientInfo )
  {
    v2 = DB_Transients_SearchForTransientFastfile(s_dbTransients.worldTransientInfo, name);
    if ( v2 != -1 && v2 >= s_dbTransients.worldTransientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 552, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_dbTransients.worldTransientCount )", "index doesn't index s_dbTransients.worldTransientCount\n\t%i not in [0, %i)", v2, s_dbTransients.worldTransientCount) )
      __debugbreak();
    return v2;
  }
  else
  {
    spCommonTransientInfo = s_dbTransients.spCommonTransientInfo;
    if ( s_dbTransients.spCommonTransientInfo )
    {
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 486, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      v5 = 0;
      if ( spCommonTransientInfo->transientFileCount )
      {
        while ( 1 )
        {
          v6 = spCommonTransientInfo->transientFiles[v5].name;
          if ( v6 )
            break;
LABEL_29:
          if ( ++v5 >= spCommonTransientInfo->transientFileCount )
            return 0xFFFFFFFFi64;
        }
        v7 = 0x7FFFFFFFi64;
        v8 = name;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v9 = v6 - name;
        do
        {
          v10 = (unsigned __int8)v8[v9];
          v11 = v7;
          v12 = *(unsigned __int8 *)v8++;
          --v7;
          if ( !v11 )
            break;
          if ( v10 != v12 )
          {
            v13 = v10 + 32;
            if ( (unsigned int)(v10 - 65) > 0x19 )
              v13 = v10;
            v10 = v13;
            v14 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v14 = v12;
            if ( v10 != v14 )
              goto LABEL_29;
          }
        }
        while ( v10 );
        if ( v5 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 559, ASSERT_TYPE_ASSERT, "(DB_Transients_SearchForTransientFastfile( s_dbTransients.spCommonTransientInfo, name ) == 0xffffffff)", (const char *)&queryFormat, "DB_Transients_SearchForTransientFastfile( s_dbTransients.spCommonTransientInfo, name ) == UINT_MAX") )
          __debugbreak();
      }
    }
    return 0xFFFFFFFFi64;
  }
}

/*
==============
DB_Transients_GetWorldTransientIndexFromName
==============
*/
__int64 DB_Transients_GetWorldTransientIndexFromName(const char *name)
{
  __int64 v2; 
  bool v3; 
  unsigned int v5; 

  v2 = -1i64;
  do
    ++v2;
  while ( name[v2] );
  if ( (unsigned int)v2 > 8 )
  {
    if ( j_sscanf_s(&name[(unsigned int)(v2 - 8)], "%05u_tr", &v5) == 1 )
      return v5;
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 535, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Transient world file '%s' doesn't match our '%s' format", name, "%s_%05u_tr");
  }
  else
  {
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 526, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Transient world file '%s' doesn't match our '%s' format (size too small)", name, "%s_%05u_tr");
  }
  if ( v3 )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

/*
==============
DB_Transients_GetWorldTransientName
==============
*/
const char *DB_Transients_GetWorldTransientName(unsigned int transientWorldIndex)
{
  __int64 v1; 
  const char *result; 
  __int64 v3; 
  __int64 v4; 

  v1 = transientWorldIndex;
  if ( s_dbTransients.worldTransientInfo )
  {
    if ( transientWorldIndex )
    {
      if ( transientWorldIndex >= s_dbTransients.worldTransientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 577, ASSERT_TYPE_ASSERT, "(unsigned)( transientWorldIndex ) < (unsigned)( DB_Transients_GetWorldTransientCount() )", "transientWorldIndex doesn't index DB_Transients_GetWorldTransientCount()\n\t%i not in [0, %i)", transientWorldIndex, s_dbTransients.worldTransientCount) )
        __debugbreak();
      if ( (unsigned int)v1 >= s_dbTransients.worldTransientInfo->transientFileCount )
      {
        LODWORD(v4) = s_dbTransients.worldTransientInfo->transientFileCount;
        LODWORD(v3) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 578, ASSERT_TYPE_ASSERT, "(unsigned)( transientWorldIndex ) < (unsigned)( s_dbTransients.worldTransientInfo->transientFileCount )", "transientWorldIndex doesn't index s_dbTransients.worldTransientInfo->transientFileCount\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      result = s_dbTransients.worldTransientInfo->transientFiles[v1].name;
      if ( !result )
        return "unused";
    }
    else
    {
      if ( !s_dbTransients.worldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 572, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldName)", (const char *)&queryFormat, "s_dbTransients.worldName") )
        __debugbreak();
      return s_dbTransients.worldName;
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 591, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No world transients in use") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
DB_Transients_IsRegisteredSPTransient
==============
*/
bool DB_Transients_IsRegisteredSPTransient(unsigned int transientIndex)
{
  if ( s_dbTransients.worldTransientInfo && transientIndex < 0x20 )
    return transientIndex < s_dbTransients.worldTransientCount;
  if ( s_dbTransients.spCommonTransientInfo && transientIndex >= 0x20 )
    return transientIndex - 32 < s_dbTransients.spCommonTransientCount;
  return 0;
}

/*
==============
DB_Transients_RegisterFiles
==============
*/
void DB_Transients_RegisterFiles(const char *const name, const TransientInfo *const transientInfo)
{
  int v4; 
  int v5; 
  int ZoneIndexFromName; 
  unsigned int v7; 
  unsigned int ZoneFlagsFromIndex; 
  __int64 v9; 
  TransientFileReference *v10; 
  unsigned __int8 type; 
  char v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int worldFileCount; 
  __int64 v19; 
  int v20; 
  char v21; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 80, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 81, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  v4 = -1;
  v5 = -1;
  v21 = 0;
  if ( transientInfo->transientFileCount )
  {
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(name);
    v7 = 0;
    ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(ZoneIndexFromName);
    if ( transientInfo->transientFileCount )
    {
      do
      {
        v9 = v7;
        v10 = &transientInfo->transientFiles[v9];
        type = v10->type;
        switch ( type )
        {
          case 0u:
          case 1u:
          case 2u:
            if ( (ZoneFlagsFromIndex & 0x180) == 0 )
              Sys_Error((const ObfuscateErrorText)&stru_143DFFE00, v10->name, name, ZoneFlagsFromIndex);
            if ( v4 == -1 )
            {
              if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 112, ASSERT_TYPE_ASSERT, "(i == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "i == TRANSIENT_ZONE_ALWAYSLOADED") )
                __debugbreak();
              if ( s_dbTransients.worldTransientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 113, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldTransientInfo == nullptr)", (const char *)&queryFormat, "s_dbTransients.worldTransientInfo == nullptr") )
                __debugbreak();
              if ( s_dbTransients.worldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 114, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldName == nullptr)", (const char *)&queryFormat, "s_dbTransients.worldName == nullptr") )
                __debugbreak();
              if ( I_stricmp(transientInfo->transientFiles[v9].name, name) )
                Sys_Error((const ObfuscateErrorText)&stru_143DFFF98, transientInfo->transientFiles[v9].name, name);
              s_dbTransients.worldTransientInfo = transientInfo;
              s_dbTransients.worldName = name;
            }
            else
            {
              if ( (ZoneFlagsFromIndex & 0x80u) != 0 )
              {
                LODWORD(v16) = ZoneFlagsFromIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 126, ASSERT_TYPE_ASSERT, "( ( ( ownerZoneFlags & DB_ZONE_UI_SCENE ) == 0 ) )", "( ownerZoneFlags ) = %u", v16) )
                  __debugbreak();
              }
              if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 127, ASSERT_TYPE_ASSERT, "(i != TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "i != TRANSIENT_ZONE_ALWAYSLOADED") )
                __debugbreak();
              if ( s_dbTransients.worldTransientInfo != transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 128, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldTransientInfo == transientInfo)", (const char *)&queryFormat, "s_dbTransients.worldTransientInfo == transientInfo") )
                __debugbreak();
              if ( v4 != v7 - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 129, ASSERT_TYPE_ASSERT, "(lastWorldIndex == ( i - 1 ))", (const char *)&queryFormat, "lastWorldIndex == ( i - 1 )") )
                __debugbreak();
            }
            v4 = v7;
            s_dbTransients.worldTransientCount = v7 + 1;
            if ( !type )
              break;
            ++s_dbTransients.worldFileCount;
            if ( type != 2 )
              break;
            v12 = 1;
            v21 = 1;
            goto LABEL_72;
          case 3u:
            if ( (ZoneFlagsFromIndex & 0x100) == 0 )
              Sys_Error((const ObfuscateErrorText)&stru_143E00170, v10->name, name, ZoneFlagsFromIndex);
            ++s_dbTransients.physicsFileCount;
            break;
          case 4u:
            if ( (ZoneFlagsFromIndex & 8) == 0 )
              Sys_Error((const ObfuscateErrorText)&stru_143E001E0, v10->name, name, ZoneFlagsFromIndex);
            goto LABEL_45;
          case 5u:
            if ( (ZoneFlagsFromIndex & 0x100) != 0 )
            {
LABEL_45:
              ++s_dbTransients.infilFileCount;
            }
            else
            {
              Sys_Error((const ObfuscateErrorText)&stru_143E00270, v10->name, name, ZoneFlagsFromIndex);
              ++s_dbTransients.infilFileCount;
            }
            break;
          case 6u:
            if ( (ZoneFlagsFromIndex & 0x100) != 0 )
              Sys_Error((const ObfuscateErrorText)&stru_143E002F0, v10->name, name, "i == 0");
            if ( v5 == -1 )
            {
              if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 197, ASSERT_TYPE_ASSERT, "(i == 0)", (const char *)&queryFormat, "i == 0") )
                __debugbreak();
              if ( s_dbTransients.spCommonTransientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 198, ASSERT_TYPE_ASSERT, "(s_dbTransients.spCommonTransientInfo == nullptr)", (const char *)&queryFormat, "s_dbTransients.spCommonTransientInfo == nullptr") )
                __debugbreak();
              s_dbTransients.spCommonTransientInfo = transientInfo;
              s_dbTransients.spCommonTransientCount = v7 + 1;
              v5 = v7;
            }
            else
            {
              if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 203, ASSERT_TYPE_ASSERT, "(i != 0)", (const char *)&queryFormat, "i != 0") )
                __debugbreak();
              if ( s_dbTransients.spCommonTransientInfo != transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 204, ASSERT_TYPE_ASSERT, "(s_dbTransients.spCommonTransientInfo == transientInfo)", (const char *)&queryFormat, "s_dbTransients.spCommonTransientInfo == transientInfo") )
                __debugbreak();
              if ( v5 != v7 - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 205, ASSERT_TYPE_ASSERT, "(lastSpCommonIndex == ( i - 1 ))", (const char *)&queryFormat, "lastSpCommonIndex == ( i - 1 )") )
                __debugbreak();
              v5 = v7;
              s_dbTransients.spCommonTransientCount = v7 + 1;
            }
            break;
          case 7u:
          case 8u:
          case 9u:
            ++s_dbTransients.customizationCount;
            break;
          case 0xAu:
          case 0xBu:
            ++s_dbTransients.weaponCount;
            break;
          case 0xCu:
          case 0xDu:
            ++s_dbTransients.attachmentCount;
            break;
          default:
            break;
        }
        v12 = v21;
LABEL_72:
        ++v7;
      }
      while ( v7 < transientInfo->transientFileCount );
      if ( v12 )
      {
        if ( s_dbTransients.worldFileCount <= 0x400 )
          goto LABEL_83;
        v20 = 1024;
        worldFileCount = s_dbTransients.worldFileCount;
        v13 = "( s_dbTransients.worldFileCount ) <= ( MAX_TRANSIENT_MP_WORLD_FASTFILES )";
        v14 = "MAX_TRANSIENT_MP_WORLD_FASTFILES";
        v15 = 250;
        goto LABEL_78;
      }
    }
  }
  if ( s_dbTransients.worldFileCount > 0x20 )
  {
    v20 = 32;
    v13 = "( s_dbTransients.worldFileCount ) <= ( MAX_TRANSIENT_SP_WORLD_FASTFILES )";
    worldFileCount = s_dbTransients.worldFileCount;
    v15 = 254;
    v14 = "MAX_TRANSIENT_SP_WORLD_FASTFILES";
LABEL_78:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", v15, ASSERT_TYPE_ASSERT, v13, "%s <= %s\n\t%u, %u", "s_dbTransients.worldFileCount", v14, worldFileCount, v20) )
      __debugbreak();
  }
  if ( s_dbTransients.worldFileCount > 0x400 )
  {
    LODWORD(v19) = 1024;
    LODWORD(v17) = s_dbTransients.worldFileCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 257, ASSERT_TYPE_ASSERT, "( s_dbTransients.worldFileCount ) <= ( MAX_TRANSIENT_WORLD_FASTFILES )", "%s <= %s\n\t%u, %u", "s_dbTransients.worldFileCount", "MAX_TRANSIENT_WORLD_FASTFILES", v17, v19) )
      __debugbreak();
  }
LABEL_83:
  if ( s_dbTransients.physicsFileCount > 0x401 )
  {
    LODWORD(v19) = 1025;
    LODWORD(v17) = s_dbTransients.physicsFileCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 259, ASSERT_TYPE_ASSERT, "( s_dbTransients.physicsFileCount ) <= ( MAX_TRANSIENT_MP_PHYSICS_FASTFILES )", "%s <= %s\n\t%u, %u", "s_dbTransients.physicsFileCount", "MAX_TRANSIENT_MP_PHYSICS_FASTFILES", v17, v19) )
      __debugbreak();
  }
  if ( s_dbTransients.infilFileCount > 0xC )
  {
    LODWORD(v19) = 12;
    LODWORD(v17) = s_dbTransients.infilFileCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 261, ASSERT_TYPE_ASSERT, "( s_dbTransients.infilFileCount ) <= ( MAX_TRANSIENT_MP_INFIL_FASTFILES )", "%s <= %s\n\t%u, %u", "s_dbTransients.infilFileCount", "MAX_TRANSIENT_MP_INFIL_FASTFILES", v17, v19) )
      __debugbreak();
  }
  if ( s_dbTransients.spCommonTransientCount )
  {
    LODWORD(v17) = s_dbTransients.spCommonTransientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 263, ASSERT_TYPE_ASSERT, "( s_dbTransients.spCommonTransientCount ) <= ( MAX_TRANSIENT_SP_COMMON_FASTFILES )", "%s <= %s\n\t%u, %u", "s_dbTransients.spCommonTransientCount", "MAX_TRANSIENT_SP_COMMON_FASTFILES", v17, 0i64) )
      __debugbreak();
  }
  if ( s_dbTransients.attachmentCount + s_dbTransients.customizationCount + s_dbTransients.weaponCount > 0x2000 )
  {
    LODWORD(v19) = 0x2000;
    LODWORD(v17) = s_dbTransients.attachmentCount + s_dbTransients.customizationCount + s_dbTransients.weaponCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 265, ASSERT_TYPE_ASSERT, "( ( s_dbTransients.attachmentCount + s_dbTransients.customizationCount + s_dbTransients.weaponCount ) ) <= ( MAX_TRANSIENT_MP_COMMON_FASTFILES )", "%s <= %s\n\t%u, %u", "( s_dbTransients.attachmentCount + s_dbTransients.customizationCount + s_dbTransients.weaponCount )", "MAX_TRANSIENT_MP_COMMON_FASTFILES", v17, v19) )
      __debugbreak();
  }
}

/*
==============
DB_Transients_RegisterZones
==============
*/
void DB_Transients_RegisterZones(const char *name, const TransientInfo *transientInfo)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 449, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 450, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  DB_Transients_RegisterFiles(name, transientInfo);
  if ( transientInfo->transientSets.count )
  {
    if ( s_dbTransients.spTransientSets )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 460, ASSERT_TYPE_ASSERT, "(s_dbTransients.spTransientSets == nullptr)", (const char *)&queryFormat, "s_dbTransients.spTransientSets == nullptr") )
        __debugbreak();
    }
    s_dbTransients.spTransientSets = &transientInfo->transientSets;
  }
}

/*
==============
DB_Transients_SearchForTransientFastfile
==============
*/
__int64 DB_Transients_SearchForTransientFastfile(const TransientInfo *const transientInfo, const char *const name)
{
  unsigned int v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 485, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 486, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v4 = 0;
  if ( !transientInfo->transientFileCount )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    v5 = transientInfo->transientFiles[v4].name;
    if ( v5 )
      break;
LABEL_22:
    if ( ++v4 >= transientInfo->transientFileCount )
      return 0xFFFFFFFFi64;
  }
  v6 = 0x7FFFFFFFi64;
  v7 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v8 = v5 - name;
  do
  {
    v9 = (unsigned __int8)v7[v8];
    v10 = v6;
    v11 = *(unsigned __int8 *)v7++;
    --v6;
    if ( !v10 )
      break;
    if ( v9 != v11 )
    {
      v12 = v9 + 32;
      if ( (unsigned int)(v9 - 65) > 0x19 )
        v12 = v9;
      v9 = v12;
      v13 = v11 + 32;
      if ( (unsigned int)(v11 - 65) > 0x19 )
        v13 = v11;
      if ( v9 != v13 )
        goto LABEL_22;
    }
  }
  while ( v9 );
  return v4;
}

/*
==============
DB_Transients_UnregisterFiles
==============
*/
void DB_Transients_UnregisterFiles(const TransientInfo *const transientInfo)
{
  unsigned int i; 
  unsigned __int8 type; 

  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 272, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  for ( i = 0; i < transientInfo->transientFileCount; ++i )
  {
    type = transientInfo->transientFiles[i].type;
    switch ( type )
    {
      case 0u:
      case 1u:
      case 2u:
        if ( s_dbTransients.worldTransientInfo )
        {
          if ( i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 285, ASSERT_TYPE_ASSERT, "(i == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "i == TRANSIENT_ZONE_ALWAYSLOADED") )
            __debugbreak();
          if ( s_dbTransients.worldTransientInfo != transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 286, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldTransientInfo == transientInfo)", (const char *)&queryFormat, "s_dbTransients.worldTransientInfo == transientInfo") )
            __debugbreak();
          s_dbTransients.worldTransientInfo = NULL;
          s_dbTransients.worldName = NULL;
          s_dbTransients.worldTransientCount = 0;
        }
        if ( type )
        {
          if ( !s_dbTransients.worldFileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 294, ASSERT_TYPE_ASSERT, "(s_dbTransients.worldFileCount > 0)", (const char *)&queryFormat, "s_dbTransients.worldFileCount > 0") )
            __debugbreak();
          --s_dbTransients.worldFileCount;
        }
        break;
      case 3u:
        if ( !s_dbTransients.physicsFileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 304, ASSERT_TYPE_ASSERT, "(s_dbTransients.physicsFileCount > 0)", (const char *)&queryFormat, "s_dbTransients.physicsFileCount > 0") )
          __debugbreak();
        --s_dbTransients.physicsFileCount;
        break;
      case 4u:
      case 5u:
        if ( !s_dbTransients.infilFileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 314, ASSERT_TYPE_ASSERT, "(s_dbTransients.infilFileCount > 0)", (const char *)&queryFormat, "s_dbTransients.infilFileCount > 0") )
          __debugbreak();
        --s_dbTransients.infilFileCount;
        break;
      case 6u:
        if ( s_dbTransients.spCommonTransientInfo )
        {
          if ( i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 324, ASSERT_TYPE_ASSERT, "(i == 0)", (const char *)&queryFormat, "i == 0") )
            __debugbreak();
          if ( s_dbTransients.spCommonTransientInfo != transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 325, ASSERT_TYPE_ASSERT, "(s_dbTransients.spCommonTransientInfo == transientInfo)", (const char *)&queryFormat, "s_dbTransients.spCommonTransientInfo == transientInfo") )
            __debugbreak();
          s_dbTransients.spCommonTransientInfo = NULL;
        }
        break;
      case 7u:
      case 8u:
      case 9u:
        if ( !s_dbTransients.customizationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 344, ASSERT_TYPE_ASSERT, "(s_dbTransients.customizationCount > 0)", (const char *)&queryFormat, "s_dbTransients.customizationCount > 0") )
          __debugbreak();
        --s_dbTransients.customizationCount;
        break;
      case 0xAu:
      case 0xBu:
        if ( !s_dbTransients.weaponCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 352, ASSERT_TYPE_ASSERT, "(s_dbTransients.weaponCount > 0)", (const char *)&queryFormat, "s_dbTransients.weaponCount > 0") )
          __debugbreak();
        --s_dbTransients.weaponCount;
        break;
      case 0xCu:
      case 0xDu:
        if ( !s_dbTransients.attachmentCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 335, ASSERT_TYPE_ASSERT, "(s_dbTransients.attachmentCount > 0)", (const char *)&queryFormat, "s_dbTransients.attachmentCount > 0") )
          __debugbreak();
        --s_dbTransients.attachmentCount;
        break;
      default:
        continue;
    }
  }
}

/*
==============
DB_Transients_UnregisterZones
==============
*/
void DB_Transients_UnregisterZones(const TransientInfo *transientInfo)
{
  const TransientSets *spTransientSets; 

  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transients.cpp", 468, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  DB_Transients_UnregisterFiles(transientInfo);
  spTransientSets = s_dbTransients.spTransientSets;
  if ( (const TransientInfo *)s_dbTransients.spTransientSets == transientInfo )
    spTransientSets = NULL;
  s_dbTransients.spTransientSets = spTransientSets;
}

/*
==============
DB_Transients_UsingSPTransientSets
==============
*/
bool DB_Transients_UsingSPTransientSets()
{
  return s_dbTransients.spTransientSets && s_dbTransients.spTransientSets->count;
}

/*
==============
DB_Transients_VerbosePrint
==============
*/
bool DB_Transients_VerbosePrint()
{
  const dvar_t *v0; 
  unsigned int flags; 

  v0 = DVARBOOL_transients_verbose;
  if ( !DVARBOOL_transients_verbose )
    return 0;
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v0->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v0->name) )
      __debugbreak();
  }
  return v0->current.enabled;
}

