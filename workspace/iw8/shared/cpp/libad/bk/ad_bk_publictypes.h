/*
==============
AD_MixBedToChannelCount
==============
*/

AD_MixBed_Channel_Count __fastcall AD_MixBedToChannelCount(const AD_MixBed mixBed)
{
  return ?AD_MixBedToChannelCount@@YA?AW4AD_MixBed_Channel_Count@@W4AD_MixBed@@@Z(mixBed);
}

/*
==============
AD_MixBedToChannelCount
==============
*/
__int64 AD_MixBedToChannelCount(const AD_MixBed mixBed)
{
  __int64 result; 

  switch ( mixBed )
  {
    case 0:
      result = 16i64;
      break;
    case 1:
      result = 12i64;
      break;
    case 2:
      result = 10i64;
      break;
    case 3:
      result = 8i64;
      break;
    case 4:
      result = 6i64;
      break;
    case 5:
      result = 4i64;
      break;
    case 6:
      result = 2i64;
      break;
    case 7:
      result = 1i64;
      break;
    default:
      result = 0xFFFFFFFFi64;
      break;
  }
  return result;
}

