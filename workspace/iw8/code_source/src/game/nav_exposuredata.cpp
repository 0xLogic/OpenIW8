/*
==============
Bot_SetAreaExposureValue
==============
*/

unsigned int __fastcall Bot_SetAreaExposureValue(AreaExposureTypes_t exposureType, unsigned int exposureValue, unsigned int flags)
{
  return ?Bot_SetAreaExposureValue@@YAIW4AreaExposureTypes_t@@II@Z(exposureType, exposureValue, flags);
}

/*
==============
Bot_GetAreaExposureValue
==============
*/

unsigned int __fastcall Bot_GetAreaExposureValue(AreaExposureTypes_t exposureType, unsigned int flags)
{
  return ?Bot_GetAreaExposureValue@@YAIW4AreaExposureTypes_t@@I@Z(exposureType, flags);
}

/*
==============
Bot_GetAreaExposureValue
==============
*/
__int64 Bot_GetAreaExposureValue(AreaExposureTypes_t exposureType, unsigned int flags)
{
  int v4; 
  __int32 v5; 
  __int32 v6; 

  if ( (unsigned int)exposureType > AREA_EXPOSURE_LOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_exposuredata.cpp", 101, ASSERT_TYPE_ASSERT, "( exposureType >= AREA_EXPOSURE_SKY && exposureType < AREA_EXPOSURE_TYPE_COUNT )", (const char *)&queryFormat, "exposureType >= AREA_EXPOSURE_SKY && exposureType < AREA_EXPOSURE_TYPE_COUNT") )
    __debugbreak();
  v4 = 0;
  if ( exposureType )
  {
    v5 = exposureType - 1;
    if ( !v5 )
      return (unsigned __int8)(flags & 0x1E) >> 1;
    v6 = v5 - 1;
    if ( !v6 )
      return (unsigned __int16)(flags & 0x1E0) >> 5;
    if ( v6 == 1 )
      return (unsigned __int16)(flags & 0x1E00) >> 9;
  }
  else
  {
    v4 = 1;
  }
  return flags & v4;
}

/*
==============
Bot_SetAreaExposureValue
==============
*/
__int64 Bot_SetAreaExposureValue(AreaExposureTypes_t exposureType, unsigned int exposureValue, unsigned int flags)
{
  char v6; 
  int v7; 
  __int32 v8; 
  __int32 v9; 
  const char *v10; 
  const char *v11; 
  int v12; 
  unsigned int v13; 

  if ( (unsigned int)exposureType > AREA_EXPOSURE_LOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_exposuredata.cpp", 43, ASSERT_TYPE_ASSERT, "( exposureType >= AREA_EXPOSURE_SKY && exposureType < AREA_EXPOSURE_TYPE_COUNT )", (const char *)&queryFormat, "exposureType >= AREA_EXPOSURE_SKY && exposureType < AREA_EXPOSURE_TYPE_COUNT") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  if ( exposureType )
  {
    v8 = exposureType - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          goto LABEL_18;
        v6 = 9;
        v7 = 7680;
        if ( exposureValue <= 0xF )
          goto LABEL_18;
        v10 = "exposureValue >= 0 && exposureValue <= AREA_EXPOSURE_LOS_MAX";
        v11 = "( exposureValue >= 0 && exposureValue <= ( ( 1 << ( 4 ) ) - 1 ) )";
        v12 = 79;
      }
      else
      {
        v6 = 5;
        v7 = 480;
        if ( exposureValue <= 0xF )
          goto LABEL_18;
        v10 = "exposureValue >= 0 && exposureValue <= AREA_EXPOSURE_TRAFFIC_MAX";
        v11 = "( exposureValue >= 0 && exposureValue <= ( ( 1 << ( 4 ) ) - 1 ) )";
        v12 = 73;
      }
    }
    else
    {
      v6 = 1;
      v7 = 30;
      if ( exposureValue <= 0xF )
        goto LABEL_18;
      v10 = "exposureValue >= 0 && exposureValue <= AREA_EXPOSURE_GENERAL_MAX";
      v11 = "( exposureValue >= 0 && exposureValue <= ( ( 1 << ( 4 ) ) - 1 ) )";
      v12 = 67;
    }
  }
  else
  {
    v7 = 1;
    if ( exposureValue < 2 )
      goto LABEL_18;
    v10 = "exposureValue == 0 || exposureValue == 1";
    v11 = "( exposureValue == 0 || exposureValue == 1 )";
    v12 = 61;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_exposuredata.cpp", v12, ASSERT_TYPE_ASSERT, v11, (const char *)&queryFormat, v10) )
    __debugbreak();
LABEL_18:
  v13 = exposureValue << v6;
  if ( (v7 & v13) != v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_exposuredata.cpp", 86, ASSERT_TYPE_ASSERT, "( (( exposureValue << bitOffset ) & bitMask ) == ( exposureValue << bitOffset ) )", (const char *)&queryFormat, "(( exposureValue << bitOffset ) & bitMask ) == ( exposureValue << bitOffset )") )
    __debugbreak();
  return v13 | flags & ~v7;
}

