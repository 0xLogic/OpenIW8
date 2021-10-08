/*
==============
ProfanityFilter_IsBadWord
==============
*/

bool __fastcall ProfanityFilter_IsBadWord(const int controllerIndex, const char *testString)
{
  return ?ProfanityFilter_IsBadWord@@YA_NHPEBD@Z(controllerIndex, testString);
}

/*
==============
XB3_ProfanityFilter_IsBadWord
==============
*/

bool __fastcall XB3_ProfanityFilter_IsBadWord(const int controllerIndex, const char *testString)
{
  return ?XB3_ProfanityFilter_IsBadWord@@YA_NHPEBD@Z(controllerIndex, testString);
}

/*
==============
ProfanityFilter_IsBadWord
==============
*/

bool __fastcall ProfanityFilter_IsBadWord(const int controllerIndex, const char *testString)
{
  return XB3_ProfanityFilter_IsBadWord(controllerIndex, testString);
}

/*
==============
XB3_ProfanityFilter_IsBadWord
==============
*/
char XB3_ProfanityFilter_IsBadWord(const int controllerIndex, const char *testString)
{
  __int64 v5; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v6; 
  Platform::String *v7; 
  Platform::String *v8; 
  bool v9; 
  bool pIsVulgar; 
  Platform::String *v11; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v12; 
  __int64 v13; 
  __int64 v14; 
  wchar_t pDestBuffer[512]; 

  v13 = -2i64;
  if ( !Live_IsUserSignedInToLive(controllerIndex) )
  {
    Com_PrintError(16, "Profanity filter check may not be performed when not on line!");
    return 1;
  }
  if ( !testString || !*testString )
    return 0;
  v12 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v12);
  v6 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)v5;
  v14 = v5;
  v11 = NULL;
  if ( !ConvertCharArrayToWideCharArray(testString, pDestBuffer, 0x200ui64) )
  {
    Com_PrintError(13, "XB3_ProfanityFilter_IsBadWord: Unable to convert wide char to multi byte\n");
    WindowsDeleteString_0(NULL);
    if ( v6 )
      v6->__abi_Release(v6);
    return 1;
  }
  Platform::String::String(NULL, pDestBuffer);
  v8 = v7;
  WindowsDeleteString_0(NULL);
  v11 = v8;
  v12 = NULL;
  WindowsDeleteString_0(NULL);
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v6, v8);
  pIsVulgar = 0;
  if ( !Live_XB3ProfanityFilter_CheckStrings(controllerIndex, v6, &pIsVulgar) )
  {
    WindowsDeleteString_0((HSTRING)v8);
    if ( v6 )
      v6->__abi_Release(v6);
    return 0;
  }
  v9 = pIsVulgar;
  WindowsDeleteString_0((HSTRING)v8);
  if ( v6 )
    v6->__abi_Release(v6);
  return v9;
}

