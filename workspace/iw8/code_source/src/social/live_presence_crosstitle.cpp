/*
==============
LiveCrossTitlePresence_Read
==============
*/

bool __fastcall LiveCrossTitlePresence_Read(CrossTitlePresenceData *outData, const bdUserPresenceInfoV3 *inData)
{
  return ?LiveCrossTitlePresence_Read@@YA_NPEAUCrossTitlePresenceData@@PEBVbdUserPresenceInfoV3@@@Z(outData, inData);
}

/*
==============
bdPlatformTypeToStr
==============
*/

const char *__fastcall bdPlatformTypeToStr(bdPlatformType platformType)
{
  return ?bdPlatformTypeToStr@@YAPEBDW4bdPlatformType@@@Z(platformType);
}

/*
==============
bdStrToPlatformType
==============
*/

bdPlatformType __fastcall bdStrToPlatformType(const char *platformString)
{
  return ?bdStrToPlatformType@@YA?AW4bdPlatformType@@PEBD@Z(platformString);
}

/*
==============
LiveCrossTitlePresence_Write
==============
*/

bool __fastcall LiveCrossTitlePresence_Write(const CrossTitlePresenceData *inData, bdUserPresenceInfoV3 *outData)
{
  return ?LiveCrossTitlePresence_Write@@YA_NPEBUCrossTitlePresenceData@@PEAVbdUserPresenceInfoV3@@@Z(inData, outData);
}

/*
==============
LiveCrossTitlePresence_Read
==============
*/
_BOOL8 LiveCrossTitlePresence_Read(CrossTitlePresenceData *outData, const bdUserPresenceInfoV3 *inData)
{
  bool v4; 
  const char *Platform; 
  const char *Buffer; 
  bdPresenceData result; 
  bdString value; 

  bdString::bdString(&value);
  bdUserPresenceInfoV3::getData((bdUserPresenceInfoV3 *)inData, &result);
  v4 = bdCrossPlatformUserMetadata::readUInt32(&result, "00_VERSION", &outData->version);
  if ( outData->version == 1 )
  {
    outData->online = bdUserPresenceInfoV3::getOnline((bdUserPresenceInfoV3 *)inData);
    outData->titleId = bdUserPresenceInfoV3::getTitleID((bdUserPresenceInfoV3 *)inData);
    Platform = bdUserPresenceInfoV3::getPlatform((bdUserPresenceInfoV3 *)inData);
    outData->platform = bdStrToPlatformType(Platform);
    v4 = v4 && bdCrossPlatformUserMetadata::readString(&result, "00_PLATFORMID", &value);
    Buffer = bdString::getBuffer(&value);
    outData->platformId = I_atoui64(Buffer);
  }
  bdPresenceData::~bdPresenceData(&result);
  bdString::~bdString(&value);
  return v4;
}

/*
==============
LiveCrossTitlePresence_Write
==============
*/
_BOOL8 LiveCrossTitlePresence_Write(const CrossTitlePresenceData *inData, bdUserPresenceInfoV3 *outData)
{
  const char *v4; 
  bool v5; 
  bool v6; 
  bdCrossPlatformUserMetadata v8; 
  __int64 v9; 
  char dest[21]; 

  v9 = -2i64;
  bdPresenceData::bdPresenceData((bdPresenceData *)&v8);
  bdUserPresenceInfoV3::setOnline(outData, inData->online);
  switch ( inData->platform )
  {
    case PLATFORM_TYPE_UNKNOWN:
      goto LABEL_27;
    case PLATFORM_TYPE_ANDROID:
      v4 = "and";
      break;
    case PLATFORM_TYPE_BATTLENET:
      v4 = "bnet";
      break;
    case PLATFORM_TYPE_IOS:
      v4 = "ios";
      break;
    case PLATFORM_TYPE_KINDLE_FIRE:
      v4 = "kf";
      break;
    case PLATFORM_TYPE_PS3:
      v4 = "ps3";
      break;
    case PLATFORM_TYPE_PS4:
      v4 = "ps4";
      break;
    case PLATFORM_TYPE_PS5:
      v4 = "ps5";
      break;
    case PLATFORM_TYPE_STEAM:
      v4 = "steam";
      break;
    case PLATFORM_TYPE_STUDIO:
      v4 = "studio";
      break;
    case PLATFORM_TYPE_SWITCH:
      v4 = "switch";
      break;
    case PLATFORM_TYPE_UNO:
      v4 = "uno";
      break;
    case PLATFORM_TYPE_UWP:
      v4 = "uwp";
      break;
    case PLATFORM_TYPE_WE_GAME:
      v4 = "we";
      break;
    case PLATFORM_TYPE_WII:
      v4 = "wii";
      break;
    case PLATFORM_TYPE_WIIU:
      v4 = "wiiu";
      break;
    case PLATFORM_TYPE_XBOX_360:
      v4 = "x360";
      break;
    case PLATFORM_TYPE_XBOX_ONE:
      v4 = "xb1";
      break;
    case PLATFORM_TYPE_XBOX_TWO:
      v4 = "xb2";
      break;
    case PLATFORM_TYPE_ATVI_DEDICATED:
      v4 = "atvi";
      break;
    case PLATFORM_TYPE_DEDICATED:
      v4 = "ded";
      break;
    case PLATFORM_TYPE_HOST_LICENSE:
      v4 = "hl";
      break;
    case PLATFORM_TYPE_SINGLE_IDENTITY:
      v4 = "si";
      break;
    case PLATFORM_TYPE_USER_LICENSE:
      v4 = "ul";
      break;
    case PLATFORM_TYPE_EPIC:
      v4 = "epic";
      break;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPlatformType", "c:\\workspace\\iw8\\code_source\\src\\social\\live_presence_crosstitle.cpp", "bdPlatformTypeToStr", 0x4Eu, "bdPlatformType::enumToStr - Invalid platform platformType enum provided.");
LABEL_27:
      v4 = "unknown";
      break;
  }
  bdUserPresenceInfoV3::setPlatform(outData, v4);
  v5 = bdCrossPlatformUserMetadata::writeUInt32(&v8, "00_VERSION", 1u);
  Com_sprintf<21>((char (*)[21])dest, "%zu", inData->platformId);
  v6 = v5 && bdCrossPlatformUserMetadata::writeString(&v8, "00_PLATFORMID", dest);
  bdUserPresenceInfoV3::setData(outData, (const bdPresenceData *)&v8);
  bdPresenceData::~bdPresenceData((bdPresenceData *)&v8);
  return v6;
}

/*
==============
bdPlatformTypeToStr
==============
*/
const char *bdPlatformTypeToStr(bdPlatformType platformType)
{
  const char *result; 

  switch ( platformType )
  {
    case PLATFORM_TYPE_UNKNOWN:
      goto $LN4_90;
    case PLATFORM_TYPE_ANDROID:
      result = "and";
      break;
    case PLATFORM_TYPE_BATTLENET:
      result = "bnet";
      break;
    case PLATFORM_TYPE_IOS:
      result = "ios";
      break;
    case PLATFORM_TYPE_KINDLE_FIRE:
      result = "kf";
      break;
    case PLATFORM_TYPE_PS3:
      result = "ps3";
      break;
    case PLATFORM_TYPE_PS4:
      result = "ps4";
      break;
    case PLATFORM_TYPE_PS5:
      result = "ps5";
      break;
    case PLATFORM_TYPE_STEAM:
      result = "steam";
      break;
    case PLATFORM_TYPE_STUDIO:
      result = "studio";
      break;
    case PLATFORM_TYPE_SWITCH:
      result = "switch";
      break;
    case PLATFORM_TYPE_UNO:
      result = "uno";
      break;
    case PLATFORM_TYPE_UWP:
      result = "uwp";
      break;
    case PLATFORM_TYPE_WE_GAME:
      result = "we";
      break;
    case PLATFORM_TYPE_WII:
      result = "wii";
      break;
    case PLATFORM_TYPE_WIIU:
      result = "wiiu";
      break;
    case PLATFORM_TYPE_XBOX_360:
      result = "x360";
      break;
    case PLATFORM_TYPE_XBOX_ONE:
      result = "xb1";
      break;
    case PLATFORM_TYPE_XBOX_TWO:
      result = "xb2";
      break;
    case PLATFORM_TYPE_ATVI_DEDICATED:
      result = "atvi";
      break;
    case PLATFORM_TYPE_DEDICATED:
      result = "ded";
      break;
    case PLATFORM_TYPE_HOST_LICENSE:
      result = "hl";
      break;
    case PLATFORM_TYPE_SINGLE_IDENTITY:
      result = "si";
      break;
    case PLATFORM_TYPE_USER_LICENSE:
      result = "ul";
      break;
    case PLATFORM_TYPE_EPIC:
      result = "epic";
      break;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPlatformType", "c:\\workspace\\iw8\\code_source\\src\\social\\live_presence_crosstitle.cpp", "bdPlatformTypeToStr", 0x4Eu, "bdPlatformType::enumToStr - Invalid platform platformType enum provided.");
$LN4_90:
      result = "unknown";
      break;
  }
  return result;
}

/*
==============
bdStrToPlatformType
==============
*/
char bdStrToPlatformType(const char *platformString)
{
  if ( I_streq(platformString, "and") )
    return 1;
  if ( I_streq(platformString, "bnet") )
    return 2;
  if ( I_streq(platformString, "ios") )
    return 3;
  if ( I_streq(platformString, "kf") )
    return 4;
  if ( I_streq(platformString, "ps3") )
    return 5;
  if ( I_streq(platformString, "ps4") )
    return 6;
  if ( I_streq(platformString, "ps5") )
    return 7;
  if ( I_streq(platformString, "steam") )
    return 8;
  if ( I_streq(platformString, "studio") )
    return 9;
  if ( I_streq(platformString, "switch") )
    return 10;
  if ( I_streq(platformString, "uno") )
    return 11;
  if ( I_streq(platformString, "uwp") )
    return 12;
  if ( I_streq(platformString, "we") )
    return 13;
  if ( I_streq(platformString, "wii") )
    return 14;
  if ( I_streq(platformString, "wiiu") )
    return 15;
  if ( I_streq(platformString, "x360") )
    return 16;
  if ( I_streq(platformString, "xb1") )
    return 17;
  if ( I_streq(platformString, "xb2") )
    return 18;
  if ( I_streq(platformString, "ded") )
    return 20;
  return I_streq(platformString, "epic") ? 0x18 : 0;
}

