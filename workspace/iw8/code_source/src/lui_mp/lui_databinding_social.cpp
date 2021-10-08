/*
==============
LUI_DataBindingLive_UpdateFriends
==============
*/

void __fastcall LUI_DataBindingLive_UpdateFriends(const int controllerIndex)
{
  ?LUI_DataBindingLive_UpdateFriends@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_DataBindingLive_UpdateFriends
==============
*/
void LUI_DataBindingLive_UpdateFriends(const int controllerIndex)
{
  unsigned __int16 ModelForController; 
  int v3; 
  unsigned __int16 ModelFromPath; 
  int i; 
  Online_Friends *Instance; 
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_social.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  ModelForController = LUI_Model_GetModelForController(controllerIndex);
  v3 = 0;
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "alwaysLoaded.friendsList.numOnlineFriends");
  for ( i = 0; i < 8; ++i )
  {
    Instance = Online_Friends::GetInstance();
    v3 += Online_Friends::GetNumOnlineFriends(Instance, i);
  }
  LUI_Model_SetInt(ModelFromPath, v3);
}

