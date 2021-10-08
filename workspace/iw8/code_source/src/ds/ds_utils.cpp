/*
==============
DS_UtilsFrame
==============
*/

void DS_UtilsFrame(void)
{
  ?DS_UtilsFrame@@YAXXZ();
}

/*
==============
DS_GetCompassBuildId
==============
*/

int __fastcall DS_GetCompassBuildId()
{
  return ?DS_GetCompassBuildId@@YAHXZ();
}

/*
==============
DS_GetCodeBuildNumber
==============
*/

int __fastcall DS_GetCodeBuildNumber()
{
  return ?DS_GetCodeBuildNumber@@YAHXZ();
}

/*
==============
DS_GetDataBuildNumber
==============
*/

int __fastcall DS_GetDataBuildNumber()
{
  return ?DS_GetDataBuildNumber@@YAHXZ();
}

/*
==============
DS_GetCompassBuildName
==============
*/

const char *__fastcall DS_GetCompassBuildName()
{
  return ?DS_GetCompassBuildName@@YAPEBDXZ();
}

/*
==============
DS_GetConfigName
==============
*/

const char *__fastcall DS_GetConfigName()
{
  return ?DS_GetConfigName@@YAPEBDXZ();
}

/*
==============
DS_GetGameMode
==============
*/

GameModeType __fastcall DS_GetGameMode()
{
  return ?DS_GetGameMode@@YA?AW4GameModeType@@XZ();
}

/*
==============
DS_GetCodeBuildNumber
==============
*/
unsigned int DS_GetCodeBuildNumber()
{
  unsigned int result; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  result = s_codeBuildNumber;
  if ( s_codeBuildNumber < 0 )
  {
    v1 = DVARINT_ds_code_buildnumber_override;
    if ( DVARINT_ds_code_buildnumber_override && (Dvar_CheckFrontendServerThread(DVARINT_ds_code_buildnumber_override), v1->current.integer >= 0) )
    {
      v2 = DVARINT_ds_code_buildnumber_override;
      if ( !DVARINT_ds_code_buildnumber_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ds_code_buildnumber_override") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      result = v2->current.unsignedInt;
    }
    else
    {
      result = j_getBuildNumberAsInt();
    }
    s_codeBuildNumber = result;
  }
  return result;
}

/*
==============
DS_GetCompassBuildId
==============
*/
__int64 DS_GetCompassBuildId()
{
  return (unsigned int)s_compassBuildId;
}

/*
==============
DS_GetCompassBuildName
==============
*/
char *DS_GetCompassBuildName()
{
  return s_compassBuildName;
}

/*
==============
DS_GetConfigName
==============
*/
const char *DS_GetConfigName()
{
  return "test";
}

/*
==============
DS_GetDataBuildNumber
==============
*/
__int64 DS_GetDataBuildNumber()
{
  __int64 result; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  result = (unsigned int)s_dataBuildNumber;
  if ( s_dataBuildNumber < 0 )
  {
    v1 = DVARINT_ds_data_buildnumber_override;
    result = 0i64;
    s_dataBuildNumber = 0;
    if ( DVARINT_ds_data_buildnumber_override )
    {
      Dvar_CheckFrontendServerThread(DVARINT_ds_data_buildnumber_override);
      if ( v1->current.integer < 0 )
      {
        return (unsigned int)s_dataBuildNumber;
      }
      else
      {
        v2 = DVARINT_ds_data_buildnumber_override;
        if ( !DVARINT_ds_data_buildnumber_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ds_data_buildnumber_override") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v2);
        result = v2->current.unsignedInt;
        s_dataBuildNumber = v2->current.integer;
      }
    }
  }
  return result;
}

/*
==============
DS_GetGameMode
==============
*/
__int64 DS_GetGameMode()
{
  GameModeType ActiveGameMode; 
  bool IsOnline; 
  unsigned __int8 v2; 

  ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  IsOnline = BG_GameInterface_GameModeIsOnline(ActiveGameMode);
  v2 = ActiveGameMode;
  if ( !IsOnline )
    return 2;
  return v2;
}

/*
==============
DS_PopulateBuildVars
==============
*/
void DS_PopulateBuildVars()
{
  const RawFile *rawfile; 
  bool Int32; 
  bool v2; 
  char *i; 
  char v4; 
  const char *v5; 
  bdJSONDeserializer v6; 
  __int64 v7; 
  char buf[128]; 

  v7 = -2i64;
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, "version.txt", 1).rawfile;
  if ( !DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, "version.txt") )
  {
    DB_GetRawBuffer(rawfile, buf, 128);
    bdJSONDeserializer::bdJSONDeserializer(&v6);
    bdJSONDeserializer::parse(&v6, buf);
    Int32 = bdJSONDeserializer::getInt32(&v6, "data_build_number", &s_dataBuildNumber);
    if ( Int32 )
      Com_Printf(25, "DS_PopulateBuildVars :: data_build_number : %d\n", (unsigned int)s_dataBuildNumber);
    else
      Com_PrintWarning(25, "DS_PopulateBuildVars :: data_build_number read failed\n");
    v2 = bdJSONDeserializer::getString(&v6, "compass_build_name", s_compassBuildName, 0x11u) && Int32;
    if ( v2 )
      Com_Printf(25, "DS_PopulateBuildVars :: compass_build_name : %s\n", s_compassBuildName);
    else
      Com_PrintWarning(25, "DS_PopulateBuildVars :: compass_build_name read failed\n");
    if ( bdJSONDeserializer::getInt32(&v6, "compass_build_id", &s_compassBuildId) && v2 )
    {
      Com_Printf(25, "DS_PopulateBuildVars :: compass_build_id : %d\n", (unsigned int)s_compassBuildId);
    }
    else
    {
      Com_PrintWarning(25, "DS_PopulateBuildVars :: compass_build_id read failed\n");
      buf[127] = 0;
      for ( i = buf; strchr_0(" \t\r\n", *i); ++i )
        ;
      v4 = *i;
      if ( *i )
      {
        v5 = i;
        do
        {
          if ( strchr_0(" \t\r\n", v4) )
            break;
          v4 = *++i;
        }
        while ( *i );
        if ( *i )
          *i = 0;
        if ( v5 && *v5 )
        {
          s_dataBuildNumber = I_atoui(v5);
          Com_PrintWarning(25, "DS_PopulateBuildVars :: data_build_number reset to %d\n", (unsigned int)s_dataBuildNumber);
        }
      }
      Core_strcpy(s_compassBuildName, 0x11ui64, "default");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v6);
  }
  Content_RegisterDLCDvars();
}

/*
==============
DS_UtilsFrame
==============
*/
void DS_UtilsFrame(void)
{
  if ( !s_hasCheckedForFastFile && DB_Zones_IsFinishedLoading("code_post_gfx") )
  {
    s_hasCheckedForFastFile = 1;
    DS_PopulateBuildVars();
  }
}

