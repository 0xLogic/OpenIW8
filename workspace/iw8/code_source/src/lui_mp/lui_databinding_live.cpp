/*
==============
LUI_DataBindingLive_UpdateCommerce
==============
*/

void __fastcall LUI_DataBindingLive_UpdateCommerce(const int controllerIndex)
{
  ?LUI_DataBindingLive_UpdateCommerce@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_DataBindingLive_UpdateCommerce
==============
*/
void LUI_DataBindingLive_UpdateCommerce(const int controllerIndex)
{
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  Online_Commerce *Instance; 
  __int64 CurrencyAmount; 
  int v9; 
  Online_Commerce *v10; 
  __int64 v11; 
  int v12; 
  Online_Commerce *v13; 
  __int64 v14; 
  int v15; 
  Online_Commerce *v16; 
  __int64 v17; 
  int v18; 
  int v20; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v20 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_live.cpp", 11, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v20) )
      __debugbreak();
  }
  ModelForController = LUI_Model_GetModelForController(controllerIndex);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.commerce.currency.crafting");
  v4 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.commerce.currency.inGame");
  v5 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.commerce.currency.premium");
  v6 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.commerce.currency.commonCrate");
  Instance = Online_Commerce::GetInstance();
  CurrencyAmount = Online_Commerce::GetCurrencyAmount(Instance, controllerIndex, 12);
  v9 = truncate_cast<int,__int64>(CurrencyAmount);
  v10 = Online_Commerce::GetInstance();
  v11 = Online_Commerce::GetCurrencyAmount(v10, controllerIndex, 11);
  v12 = truncate_cast<int,__int64>(v11);
  v13 = Online_Commerce::GetInstance();
  v14 = Online_Commerce::GetCurrencyAmount(v13, controllerIndex, 20);
  v15 = truncate_cast<int,__int64>(v14);
  v16 = Online_Commerce::GetInstance();
  v17 = Online_Commerce::GetCurrencyAmount(v16, controllerIndex, 10);
  v18 = truncate_cast<int,__int64>(v17);
  LUI_Model_SetInt(ModelFromPath, v9);
  LUI_Model_SetInt(v4, v12);
  LUI_Model_SetInt(v5, v15);
  LUI_Model_SetInt(v6, v18);
}

