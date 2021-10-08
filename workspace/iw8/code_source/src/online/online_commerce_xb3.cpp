/*
==============
Online_Commerce::GetEntitlements
==============
*/

void __fastcall Online_Commerce::GetEntitlements(Online_Commerce *this, const int controllerIndex)
{
  ?GetEntitlements@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::ExchangeItems
==============
*/

void __fastcall Online_Commerce::ExchangeItems(Online_Commerce *this, const int controllerIndex)
{
  ?ExchangeItems@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::GetPaidEntitlement
==============
*/

void __fastcall Online_Commerce::GetPaidEntitlement(Online_Commerce *this, const int controllerIndex)
{
  ?GetPaidEntitlement@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::HasSeasonPass
==============
*/

bool __fastcall Online_Commerce::HasSeasonPass(Online_Commerce *this, const int controllerIndex)
{
  return ?HasSeasonPass@Online_Commerce@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnXboxOneProcessProductComplete
==============
*/

void __fastcall OnXboxOneProcessProductComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnXboxOneProcessProductComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnXboxOneTransferConsumableComplete
==============
*/

void __fastcall OnXboxOneTransferConsumableComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnXboxOneTransferConsumableComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Commerce::ShowFirstPartyStore
==============
*/

void __fastcall Online_Commerce::ShowFirstPartyStore(Online_Commerce *this, const int controllerIndex, const char *data)
{
  ?ShowFirstPartyStore@Online_Commerce@@QEAAXHPEBD@Z(this, controllerIndex, data);
}

/*
==============
Online_Commerce::StartProcessProduct
==============
*/

void __fastcall Online_Commerce::StartProcessProduct(Online_Commerce *this, const int controllerIndex)
{
  ?StartProcessProduct@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::ControllerFrame
==============
*/

void __fastcall Online_Commerce::ControllerFrame(Online_Commerce *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Commerce@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::FinishProcessProduct
==============
*/

void __fastcall Online_Commerce::FinishProcessProduct(Online_Commerce *this, const int controllerIndex)
{
  ?FinishProcessProduct@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::GetInventory
==============
*/

void __fastcall Online_Commerce::GetInventory(Online_Commerce *this, const int controllerIndex)
{
  ?GetInventory@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
GetEntitlementsComplete
==============
*/
void GetEntitlementsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  bool v5; 
  Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *v6; 
  HSTRING v7; 
  HSTRING v8; 
  __int64 v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  HSTRING v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  HSTRING v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  HSTRING v32; 
  int v33; 
  HSTRING v34; 
  const wchar_t *StringRawBuffer_0; 
  __int64 v36; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v48; 
  int v49; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  int v53; 
  int v55; 
  int v56; 
  __int64 v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v62; 
  int v63; 
  __int64 v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  int v69; 
  int v70; 
  int v71; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  __int64 v74; 
  char v75; 
  char v76; 
  int v77; 
  __int64 v78; 
  __int64 v79; 
  int i; 
  HSTRING newString; 
  __int64 v82; 
  HSTRING string; 
  unsigned int v84; 
  HSTRING v85; 
  HSTRING v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  HSTRING v90; 
  __int64 v91; 
  __int64 v92; 
  char MultiByteStr[64]; 

  v88 = -2i64;
  m_controllerIndex = pTask->m_controllerIndex;
  v77 = pTask->m_controllerIndex;
  v75 = 0;
  v76 = 0;
  if ( taskState )
  {
    Online_Retry::SetNextRetry(&Online_Upsell::s_instance.m_retry[m_controllerIndex]);
  }
  else
  {
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(m_controllerIndex);
    v5 = UsersXboxLiveContext != NULL;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
    if ( v5 )
    {
      v6 = (Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
      Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>,1>::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>,1>(v6);
      v8 = v7;
      newString = v7;
      if ( v7 )
      {
        v9 = (__int64)(v7 + 2);
        v86 = v7 + 2;
        if ( v7 != (HSTRING)-8i64 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
      }
      else
      {
        v9 = 0i64;
        v86 = NULL;
      }
      v89 = v9;
      if ( v8 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
      m_asyncInfo = pTask->m_asyncInfo;
      v11 = NULL;
      v85 = NULL;
      if ( m_asyncInfo )
      {
        v12 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAVInventoryItemsResult_Marketplace_Services_Xbox_Microsoft___Foundation_Windows__, (void **)&v85);
        if ( v12 < 0 )
          __abi_WinRTraiseException(v12);
        v11 = v85;
      }
      newString = v11;
      if ( v11 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8i64))(v11);
      v90 = v11;
      if ( v11 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16i64))(v11);
      v13 = 0;
      for ( i = 0; ; ++i )
      {
        v78 = 0i64;
        v14 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v11 + 64i64))(v11, &v78);
        if ( v14 < 0 )
          __abi_WinRTraiseException(v14);
        v15 = v78;
        v16 = (HSTRING)v78;
        if ( v78 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8i64))(v78);
          v15 = v78;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
        string = v16;
        v79 = 0i64;
        v17 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v16 + 48i64))(v16, &v79);
        if ( v17 < 0 )
          __abi_WinRTraiseException(v17);
        v18 = v79;
        v19 = v79;
        if ( v79 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 8i64))(v79);
          v18 = v79;
        }
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
        v82 = v19;
        v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 56i64))(v19, &v84);
        if ( v20 < 0 )
          __abi_WinRTraiseException(v20);
        v21 = v13 < v84;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
        if ( !v21 )
          break;
        v79 = 0i64;
        v22 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v11 + 64i64))(v11, &v79);
        if ( v22 < 0 )
          __abi_WinRTraiseException(v22);
        v23 = v79;
        v24 = v79;
        if ( v79 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 8i64))(v79);
          v23 = v79;
        }
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
        v91 = v24;
        v78 = 0i64;
        v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48i64))(v24, &v78);
        if ( v25 < 0 )
          __abi_WinRTraiseException(v25);
        v26 = v78;
        v27 = v78;
        if ( v78 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8i64))(v78);
          v26 = v78;
        }
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
        v92 = v27;
        v82 = 0i64;
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48i64))(v27, v13, &v82);
        if ( v28 < 0 )
          __abi_WinRTraiseException(v28);
        v29 = v82;
        v30 = v82;
        if ( v82 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8i64))(v82);
          v29 = v82;
        }
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
        v87 = v30;
        string = NULL;
        v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 72i64))(v30, &string);
        if ( v31 < 0 )
          __abi_WinRTraiseException(v31);
        v32 = string;
        if ( string )
        {
          v33 = WindowsDuplicateString_0(string, &newString);
          if ( v33 < 0 )
            __abi_WinRTraiseException(v33);
          v34 = newString;
          v32 = string;
        }
        else
        {
          v34 = NULL;
        }
        WindowsDeleteString_0(v32);
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v34, NULL);
        WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 64, NULL, NULL);
        WindowsDeleteString_0(v34);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16i64))(v30);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16i64))(v27);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
        v36 = 0x7FFFFFFFi64;
        v37 = 0i64;
        do
        {
          v38 = (unsigned __int8)MultiByteStr[v37];
          v39 = (unsigned __int8)aB34bce6e11b745[v37++];
          if ( !v36-- )
            break;
          if ( v38 != v39 )
          {
            v41 = v38 + 32;
            if ( (unsigned int)(v38 - 65) > 0x19 )
              v41 = v38;
            v38 = v41;
            v42 = v39 + 32;
            if ( (unsigned int)(v39 - 65) > 0x19 )
              v42 = v39;
            if ( v38 != v42 )
              goto LABEL_62;
          }
        }
        while ( v38 );
        v75 = 1;
LABEL_62:
        v43 = 0x7FFFFFFFi64;
        v44 = 0i64;
        do
        {
          v45 = (unsigned __int8)MultiByteStr[v44];
          v46 = (unsigned __int8)a4bc79e54968146[v44++];
          if ( !v43-- )
            break;
          if ( v45 != v46 )
          {
            v48 = v45 + 32;
            if ( (unsigned int)(v45 - 65) > 0x19 )
              v48 = v45;
            v45 = v48;
            v49 = v46 + 32;
            if ( (unsigned int)(v46 - 65) > 0x19 )
              v49 = v46;
            if ( v45 != v49 )
            {
              v50 = 0x7FFFFFFFi64;
              v51 = 0i64;
              while ( 1 )
              {
                v52 = (unsigned __int8)MultiByteStr[v51];
                v53 = (unsigned __int8)aC5da3bf3345942[v51++];
                if ( !v50-- )
                  goto LABEL_101;
                if ( v52 != v53 )
                {
                  v55 = v52 + 32;
                  if ( (unsigned int)(v52 - 65) > 0x19 )
                    v55 = v52;
                  v52 = v55;
                  v56 = v53 + 32;
                  if ( (unsigned int)(v53 - 65) > 0x19 )
                    v56 = v53;
                  if ( v52 != v56 )
                  {
                    v57 = 0x7FFFFFFFi64;
                    v58 = 0i64;
                    while ( 1 )
                    {
                      v59 = (unsigned __int8)MultiByteStr[v58];
                      v60 = (unsigned __int8)aE70601e4619a40[v58++];
                      if ( !v57-- )
                        goto LABEL_101;
                      if ( v59 != v60 )
                      {
                        v62 = v59 + 32;
                        if ( (unsigned int)(v59 - 65) > 0x19 )
                          v62 = v59;
                        v59 = v62;
                        v63 = v60 + 32;
                        if ( (unsigned int)(v60 - 65) > 0x19 )
                          v63 = v60;
                        if ( v59 != v63 )
                        {
                          v64 = 0x7FFFFFFFi64;
                          v65 = 0i64;
                          while ( 1 )
                          {
                            v66 = (unsigned __int8)MultiByteStr[v65];
                            v67 = (unsigned __int8)a559cf838C5c449[v65++];
                            if ( !v64-- )
                              goto LABEL_101;
                            if ( v66 != v67 )
                            {
                              v69 = v66 + 32;
                              if ( (unsigned int)(v66 - 65) > 0x19 )
                                v69 = v66;
                              v66 = v69;
                              v70 = v67 + 32;
                              if ( (unsigned int)(v67 - 65) > 0x19 )
                                v70 = v67;
                              if ( v66 != v70 )
                                goto LABEL_102;
                            }
                            if ( !v66 )
                              goto LABEL_101;
                          }
                        }
                      }
                      if ( !v59 )
                        goto LABEL_101;
                    }
                  }
                }
                if ( !v52 )
                  goto LABEL_101;
              }
            }
          }
        }
        while ( v45 );
LABEL_101:
        v76 = 1;
LABEL_102:
        v13 = i + 1;
      }
      if ( v76 )
      {
        v71 = v77;
        Online_Upsell::s_instance.m_upsellType[v77] = UPSELL_TYPE_ALREADY_OWNS;
      }
      else
      {
        v71 = v77;
        if ( v75 )
          Online_Upsell::s_instance.m_upsellType[v77] = UPSELL_TYPE_DIGITAL;
      }
      GlobalModel = LUI_Model_GetGlobalModel();
      ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "alwaysLoaded.hasMWR");
      LUI_Model_SetBool(ModelFromPath, v75 | v76);
      v74 = v71;
      *(_QWORD *)&Online_Upsell::s_instance.m_retry[v74].m_numRetries = 0i64;
      Online_Upsell::s_instance.m_retry[v74].m_retrying = 0;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16i64))(v11);
      if ( v86 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v86 + 16i64))(v86);
    }
    else
    {
      Online_Retry::SetNextRetry(&Online_Upsell::s_instance.m_retry[m_controllerIndex]);
    }
  }
}

/*
==============
Online_Commerce::ControllerFrame
==============
*/
void Online_Commerce::ControllerFrame(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 
  Online_Loot *Instance; 

  v2 = controllerIndex;
  if ( this->m_storeEntitlements[controllerIndex].fromSignIn && !this->m_signInExchangeState[controllerIndex] )
  {
    Instance = Online_Loot::GetInstance();
    if ( Online_Loot::HasInventory(Instance, v2) )
    {
      this->m_signInExchangeState[v2] = 1;
      this->m_inventoryState = INVENTORY_STATE_CONSUMABLE;
      Online_Commerce::ExchangeItems(this, v2);
    }
  }
  LUI_DataBindingLive_UpdateCommerce(v2);
}

/*
==============
Online_Commerce::ExchangeItems
==============
*/
void Online_Commerce::ExchangeItems(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int v5; 
  Windows::Foundation::Collections::IVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *v6; 
  int v7; 
  Windows::Foundation::Collections::IVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *v8; 
  int v9; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v10; 
  StringTable *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  HSTRING v17; 
  int v18; 
  HSTRING v19; 
  const wchar_t *v20; 
  HSTRING v21; 
  HSTRING v22; 
  const wchar_t *v23; 
  int v24; 
  unsigned int v25; 
  const dvar_t *v26; 
  int integer; 
  const dvar_t *v28; 
  const char *v29; 
  Online_Loot *v30; 
  Online_Loot *v31; 
  int v32; 
  int v33; 
  HSTRING v34; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING v36; 
  HSTRING v37; 
  HSTRING v38; 
  Platform::String *m_currentExchangeProductID; 
  int v40; 
  int v41; 
  Online_Commerce *Instance; 
  volatile Platform::String *v43; 
  Online_Commerce *v44; 
  INVENTORY_STATE m_inventoryState; 
  __int32 v46; 
  StoreEntitlements *v47; 
  char *fmt; 
  HSTRING string; 
  Microsoft::Xbox::Services::Marketplace::MediaItemType v50; 
  HSTRING v51; 
  unsigned int v52; 
  void *v53; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *item; 
  StoreEntitlements *v55; 
  HSTRING newString; 
  StringTable *tablePtr[4]; 
  char Dest[64]; 

  tablePtr[1] = (StringTable *)-2i64;
  v2 = controllerIndex;
  v4 = controllerIndex;
  v55 = &this->m_storeEntitlements[controllerIndex];
  if ( v55->fromSignIn && this->m_signInExchangeState[controllerIndex] == -1 )
  {
    this->m_signInExchangeState[controllerIndex] = 0;
    return;
  }
  v5 = 0;
  v6 = this->m_inventoryItemDetails[controllerIndex];
  while ( 1 )
  {
    v7 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *, Microsoft::Xbox::Services::Marketplace::MediaItemType *))v6->Platform::Object::__vftable[1].__abi_AddRef)(v6, &v50);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    if ( v5 >= v50 )
      break;
    v8 = this->m_inventoryItemDetails[v4];
    item = NULL;
    v9 = v8->Platform::Object::__vftable[1].__abi_QueryInterface(v8, (Platform::Guid *)v5, (void **)&item);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v10 = item;
    v11 = (StringTable *)item;
    if ( item )
    {
      item->__abi_AddRef(item);
      v10 = item;
    }
    if ( v10 )
      v10->__abi_Release(v10);
    v51 = (HSTRING)v11;
    if ( v11 )
      (*((void (__fastcall **)(StringTable *))v11->name + 1))(v11);
    tablePtr[2] = v11;
    if ( v11 )
      (*((void (__fastcall **)(StringTable *))v11->name + 2))(v11);
    LODWORD(string) = 0;
    v12 = (*((__int64 (__fastcall **)(StringTable *, HSTRING *))v11->name + 8))(v11, &string);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    if ( (_DWORD)string == 5 )
    {
      v13 = (*((__int64 (__fastcall **)(StringTable *, unsigned int *))v11->name + 16))(v11, &v52);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      if ( v52 )
      {
        v33 = (*((__int64 (__fastcall **)(StringTable *, unsigned int *))v11->name + 16))(v11, &v52);
        if ( v33 < 0 )
          __abi_WinRTraiseException(v33);
        v34 = (HSTRING)Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals::ProductId::get((Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals *)v11);
        v53 = v34;
        v51 = NULL;
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v34, NULL);
        Platform::String::String(NULL, StringRawBuffer_0);
        v37 = v36;
        v51 = NULL;
        WindowsDeleteString_0(NULL);
        v51 = v37;
        Com_Printf(25, "Found: %s with a Cosumable Balance of %d\n", (const char *)v37, v52);
        WindowsDeleteString_0(v37);
        WindowsDeleteString_0(v34);
        if ( v55->fromSignIn )
          this->m_signInExchangeState[v2] = 1;
        v38 = (HSTRING)Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals::ProductId::get((Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals *)v11);
        v53 = v38;
        m_currentExchangeProductID = this->m_currentExchangeProductID;
        if ( m_currentExchangeProductID != (Platform::String *)v38 )
        {
          if ( m_currentExchangeProductID )
            WindowsDeleteString_0((HSTRING)m_currentExchangeProductID);
          this->m_currentExchangeProductID = NULL;
          if ( v38 )
          {
            v40 = WindowsDuplicateString_0(v38, &v51);
            if ( v40 < 0 )
              __abi_WinRTraiseException(v40);
            this->m_currentExchangeProductID = (Platform::String *)v51;
          }
        }
        WindowsDeleteString_0(v38);
        v50 = Worldwide;
        v41 = (*((__int64 (__fastcall **)(StringTable *, Microsoft::Xbox::Services::Marketplace::MediaItemType *))v11->name + 8))(v11, &v50);
        if ( v41 < 0 )
          __abi_WinRTraiseException(v41);
        this->m_currentExchangeType = v50;
        Instance = Online_Commerce::GetInstance();
        Online_Commerce::StartExchangeTransaction(Instance, v2);
        (*((void (__fastcall **)(StringTable *))v11->name + 2))(v11);
        return;
      }
    }
    LODWORD(string) = 0;
    v14 = (*((__int64 (__fastcall **)(StringTable *, HSTRING *))v11->name + 8))(v11, &string);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    if ( (_DWORD)string == 4 )
      goto LABEL_91;
    LODWORD(string) = 0;
    v15 = (*((__int64 (__fastcall **)(StringTable *, HSTRING *))v11->name + 8))(v11, &string);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    if ( (_DWORD)string == 2 )
    {
LABEL_91:
      if ( !UserOwnsInventoryItem(v2, (Microsoft::Xbox::Services::Marketplace::InventoryItem *)v11) )
        goto LABEL_25;
      string = NULL;
      v16 = (*((__int64 (__fastcall **)(StringTable *, HSTRING *))v11->name + 9))(v11, &string);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v17 = string;
      if ( string )
      {
        v18 = WindowsDuplicateString_0(string, &newString);
        if ( v18 < 0 )
          __abi_WinRTraiseException(v18);
        v19 = newString;
        v17 = string;
      }
      else
      {
        v19 = NULL;
      }
      WindowsDeleteString_0(v17);
      v51 = v19;
      v53 = NULL;
      v20 = WindowsGetStringRawBuffer_0(v19, NULL);
      Platform::String::String(NULL, v20);
      v22 = v21;
      v51 = NULL;
      WindowsDeleteString_0(NULL);
      v23 = WindowsGetStringRawBuffer_0(v22, NULL);
      wcstombs(Dest, v23, 0x40ui64);
      WindowsDeleteString_0(v22);
      WindowsDeleteString_0(v19);
      LODWORD(string) = 0;
      v24 = (*((__int64 (__fastcall **)(StringTable *, HSTRING *))v11->name + 7))(v11, &string);
      if ( v24 < 0 )
        __abi_WinRTraiseException(v24);
      v25 = (unsigned int)string;
      v26 = DVARINT_xb3_entitlement_state_mask;
      if ( !DVARINT_xb3_entitlement_state_mask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_entitlement_state_mask") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      integer = v26->current.integer;
      if ( _bittest(&integer, v25) )
      {
        StringTable_GetAsset("loot/dlc_ids.csv", (const StringTable **)tablePtr);
        v29 = StringTable_Lookup(tablePtr[0], 5, Dest, 0);
        v30 = Online_Loot::GetInstance();
        if ( Online_Loot::HasInventory(v30, v2) )
        {
          if ( v29 )
          {
            if ( *v29 )
            {
              v31 = Online_Loot::GetInstance();
              v32 = atoi(v29);
              if ( !Online_Loot::GetItemQuantity(v31, v2, v32 + 1000) )
              {
                Com_Printf(25, "Found: %s (%s) and it's not in our inventory\n", Dest, v29);
                if ( v55->fromSignIn )
                  this->m_signInExchangeState[v2] = 1;
                v43 = Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals::ProductId::get((Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals *)v11);
                v53 = (void *)v43;
                __abi_winrt_ptrto_string_assign((void **)&this->m_currentExchangeProductID, v43);
                WindowsDeleteString_0((HSTRING)v43);
                this->m_currentExchangeType = Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals::MediaItemType::get((Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals *)v11);
                v44 = Online_Commerce::GetInstance();
                Online_Commerce::StartExchangeTransaction(v44, v2);
                if ( v11 )
                  (*((void (__fastcall **)(StringTable *))v11->name + 2))(v11);
                return;
              }
            }
          }
        }
        v4 = v2;
        goto LABEL_48;
      }
      v28 = DVARINT_xb3_entitlement_state_mask;
      if ( !DVARINT_xb3_entitlement_state_mask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_entitlement_state_mask") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      LODWORD(fmt) = v28->current.integer;
      Com_Printf(25, "Ignoring %s State %d does not match %d\n", Dest, v25, fmt);
      if ( v11 )
        (*((void (__fastcall **)(StringTable *))v11->name + 2))(v11);
      v4 = v2;
LABEL_42:
      ++v5;
      v6 = this->m_inventoryItemDetails[v4];
    }
    else
    {
LABEL_48:
      if ( !v11 )
        goto LABEL_42;
LABEL_25:
      (*((void (__fastcall **)(StringTable *))v11->name + 2))(v11);
      ++v5;
      v6 = this->m_inventoryItemDetails[v4];
    }
  }
  m_inventoryState = this->m_inventoryState;
  if ( m_inventoryState == INVENTORY_STATE_CONSUMABLE )
  {
    this->m_inventoryState = INVENTORY_STATE_GAME_CONTENT;
    goto LABEL_74;
  }
  v46 = m_inventoryState - 1;
  if ( !v46 )
  {
    this->m_inventoryState = INVENTORY_STATE_GAMEV2;
LABEL_74:
    Online_Commerce::GetEntitlements(this, v2);
    return;
  }
  if ( v46 == 1 )
  {
    this->m_inventoryState = INVENTORY_STATE_CONSUMABLE;
    Com_Printf(25, "Exchanging Items Complete\n");
    Online_Commerce::SetEntitlementTaskState(this, v2, ENTITLEMENT_STATE_COMPLETE);
    v47 = v55;
    if ( v55->fromSignIn )
    {
      this->m_signInExchangeState[v4] = 2;
      v47->fromSignIn = 0;
    }
    Online_Commerce::GetCurrency(this, v2);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce_xb3.cpp", 700, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Illegal Inventory State") )
  {
    __debugbreak();
  }
}

/*
==============
Online_Commerce::FinishProcessProduct
==============
*/
void Online_Commerce::FinishProcessProduct(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 
  HSTRING v4; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING v6; 
  HSTRING v7; 
  Microsoft::Xbox::Services::Marketplace::MediaItemType m_currentExchangeType; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  Windows::Foundation::Collections::IVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *v12; 
  int v13; 
  __int64 v14; 
  bdRemoteTask *v15; 
  int v16; 
  HSTRING v17; 
  int v18; 
  const wchar_t *v19; 
  HSTRING v20; 
  HSTRING v21; 
  const wchar_t *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v28; 
  int v29; 
  Windows::Foundation::IUriRuntimeClass *v30; 
  Windows::Foundation::IUriRuntimeClass *v31; 
  bdRemoteTask *v32; 
  const wchar_t *v33; 
  HSTRING v34; 
  HSTRING v35; 
  const wchar_t *v36; 
  const char *consumablePath; 
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *v40; 
  bdRemoteTask *v41; 
  TaskManager *v42; 
  DWServicesAccess *v43; 
  DWMarketplace *v44; 
  TaskCreateRequest *v45; 
  bdRemoteTask *v46; 
  TaskManager *v47; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdReference<bdRemoteTask> v49; 
  unsigned int v50; 
  bdReference<bdRemoteTask> result; 
  Windows::Foundation::IUriRuntimeClass *v52; 
  TaskCreateRequest pTaskCreateRequest; 
  int v54; 
  bdRemoteTask *v55; 
  HSTRING string; 
  HSTRING newString[2]; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v59; 
  bdRemoteTask *v60; 
  char Dest[64]; 
  char Str[272]; 

  v59 = -2i64;
  v2 = controllerIndex;
  v4 = NULL;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  result.m_ptr = NULL;
  newString[0] = NULL;
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)this->m_currentExchangeProductID, NULL);
  Platform::String::String(NULL, StringRawBuffer_0);
  v7 = v6;
  v49.m_ptr = NULL;
  WindowsDeleteString_0(NULL);
  newString[0] = v7;
  ConvertPlatformStringToCharArray((Platform::String *)v7, productID, 0x80ui64);
  WindowsDeleteString_0(v7);
  m_currentExchangeType = this->m_currentExchangeType;
  if ( m_currentExchangeType == End )
  {
    v9 = 0;
    while ( 2 )
    {
      v10 = v2;
      v11 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *, unsigned int *))this->m_inventoryItemDetails[v2]->Platform::Object::__vftable[1].__abi_AddRef)(this->m_inventoryItemDetails[v2], &v50);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      if ( v9 >= v50 )
      {
        consumablePath = (const char *)result.m_ptr;
      }
      else
      {
        v12 = this->m_inventoryItemDetails[v2];
        v55 = NULL;
        v13 = v12->Platform::Object::__vftable[1].__abi_QueryInterface(v12, (Platform::Guid *)v9, (void **)&v55);
        if ( v13 < 0 )
          __abi_WinRTraiseException(v13);
        v14 = (__int64)v55;
        v15 = v55;
        if ( v55 )
        {
          v55->getStatus(v55);
          v14 = (__int64)v55;
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
        v49.m_ptr = v15;
        if ( v15 )
          v15->getStatus(v15);
        v60 = v15;
        if ( v15 )
          ((void (__fastcall *)(bdRemoteTask *))v15->setTimeout)(v15);
        string = NULL;
        v16 = ((__int64 (__fastcall *)(bdRemoteTask *, HSTRING *))v15->__vftable[1].handleAsyncTaskReply)(v15, &string);
        if ( v16 < 0 )
          __abi_WinRTraiseException(v16);
        v17 = string;
        if ( string )
        {
          v18 = WindowsDuplicateString_0(string, newString);
          if ( v18 < 0 )
            __abi_WinRTraiseException(v18);
          v4 = newString[0];
          v17 = string;
        }
        WindowsDeleteString_0(v17);
        v52 = NULL;
        v19 = WindowsGetStringRawBuffer_0(v4, NULL);
        Platform::String::String(NULL, v19);
        v21 = v20;
        v49.m_ptr = NULL;
        WindowsDeleteString_0(NULL);
        v22 = WindowsGetStringRawBuffer_0(v21, NULL);
        wcstombs(Dest, v22, 0x40ui64);
        WindowsDeleteString_0(v21);
        WindowsDeleteString_0(v4);
        v4 = NULL;
        v23 = 0x7FFFFFFFi64;
        v24 = 0i64;
        do
        {
          v25 = (unsigned __int8)Dest[v24];
          v26 = (unsigned __int8)productID[v24++];
          if ( !v23-- )
            break;
          if ( (_BYTE)v25 != (_BYTE)v26 )
            goto LABEL_24;
        }
        while ( (_BYTE)v25 );
        v28 = ((__int64 (__fastcall *)(bdRemoteTask *, int *, __int64, __int64))v15->__vftable[2].start)(v15, &v54, v23, v26);
        if ( v28 < 0 )
          __abi_WinRTraiseException(v28);
        if ( !v54 )
        {
LABEL_24:
          ((void (__fastcall *)(bdRemoteTask *, __int64, __int64))v15->setTimeout)(v15, v25, v23);
          ++v9;
          continue;
        }
        v52 = NULL;
        v29 = ((__int64 (__fastcall *)(bdRemoteTask *, Windows::Foundation::IUriRuntimeClass **))v15->__vftable[2].handleAsyncTaskReply)(v15, &v52);
        if ( v29 < 0 )
          __abi_WinRTraiseException(v29);
        v30 = v52;
        v31 = v52;
        if ( v52 )
        {
          v52->__abi_AddRef(v52);
          v30 = v52;
        }
        if ( v30 )
          v30->__abi_Release(v30);
        v32 = (bdRemoteTask *)Windows::Foundation::IUriRuntimeClass::AbsoluteUri::get(v31);
        result.m_ptr = v32;
        newString[1] = NULL;
        v33 = WindowsGetStringRawBuffer_0((HSTRING)v32, NULL);
        Platform::String::String(NULL, v33);
        v35 = v34;
        v49.m_ptr = NULL;
        WindowsDeleteString_0(NULL);
        v36 = WindowsGetStringRawBuffer_0(v35, NULL);
        wcstombs(Str, v36, 0x104ui64);
        WindowsDeleteString_0(v35);
        WindowsDeleteString_0((HSTRING)v32);
        if ( v31 )
          v31->__abi_Release(v31);
        consumablePath = strstr_0(Str, "consumables/") + 12;
        ((void (__fastcall *)(bdRemoteTask *))v15->setTimeout)(v15);
        v10 = v2;
      }
      break;
    }
    Instance = DWServicesAccess::GetInstance();
    MarketPlace = DWServicesAccess::GetMarketPlace(Instance, v2);
    v40 = (TaskCreateRequest *)DWMarketplace::xboxOneTransferConsumable(MarketPlace, &result, *(const char **)this->m_exchangeTransactionId._bytes_20, this->m_delegationToken[v10], consumablePath, productID, &this->m_exchangeTransactionResult);
    if ( v40 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v41 = *(bdRemoteTask **)&v40->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v41;
      if ( v41 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v41->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      pTaskCreateRequest.m_controllerIndex = v2;
      pTaskCreateRequest.m_onCompletionCallback = OnXboxOneTransferConsumableComplete;
      v42 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v42, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        Com_Printf(25, "xboxOneTransferConsumable() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v2);
      }
      else
      {
        Online_Commerce::ExchangeFailed(this, v2, (Online_Error_CAT_COMMERCE_t)0x4000, "task_failed");
        Com_PrintError(25, "xboxOneTransferConsumable() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v2);
      }
    }
    else
    {
      Online_Commerce::ExchangeFailed(this, v2, (Online_Error_CAT_COMMERCE_t)0x4000, "call_failed");
    }
  }
  else if ( ((m_currentExchangeType - 2) & 0xFFFFFFFD) != 0 )
  {
    Online_Commerce::ExchangeFailed(this, v2, (Online_Error_CAT_COMMERCE_t)0x1000000, productID);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce_xb3.cpp", 256, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown Commerce type.") )
      __debugbreak();
  }
  else
  {
    v43 = DWServicesAccess::GetInstance();
    v44 = DWServicesAccess::GetMarketPlace(v43, v2);
    v45 = (TaskCreateRequest *)DWMarketplace::xboxOneProcessProduct(v44, &v49, *(const char **)this->m_exchangeTransactionId._bytes_20, this->m_delegationToken[v2], productID, &this->m_exchangeTransactionResult);
    if ( v45 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v46 = *(bdRemoteTask **)&v45->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v46;
      if ( v46 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v46->m_refCount, 1u);
    }
    if ( v49.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v49.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v49.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v49.m_ptr->~bdReferencable)(v49.m_ptr, 1i64);
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      pTaskCreateRequest.m_controllerIndex = v2;
      pTaskCreateRequest.m_onCompletionCallback = OnXboxOneProcessProductComplete;
      v47 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v47, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        Com_Printf(25, "xboxOneProcessProduct() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v2);
      }
      else
      {
        Online_Commerce::ExchangeFailed(this, v2, (Online_Error_CAT_COMMERCE_t)0x8000, "task_failed");
        Com_PrintError(25, "xboxOneProcessProduct() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v2);
      }
    }
    else
    {
      Online_Commerce::ExchangeFailed(this, v2, (Online_Error_CAT_COMMERCE_t)0x8000, "call_failed");
    }
  }
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
Online_Commerce::GetEntitlements
==============
*/
void Online_Commerce::GetEntitlements(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v5; 
  unsigned int v6; 
  unsigned __int8 v7; 
  INVENTORY_STATE m_inventoryState; 
  Microsoft::Xbox::Services::Marketplace::InventoryService *v9; 
  _BOOL8 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  Windows::Foundation::IAsyncInfo *v14; 
  int v15; 
  TaskManager *Instance; 
  Online_ErrorReporting *InstancePtr; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Online_ErrorReporting *v19; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v21; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v22; 
  Microsoft::Xbox::Services::Marketplace::InventoryService *v23; 
  __int64 v24; 
  Windows::Foundation::IAsyncInfo *v25; 
  TaskCreateResult pTaskCreateResult; 
  Microsoft::Xbox::Services::XboxLiveContext *v27; 
  Windows::Foundation::IAsyncInfo *v28; 

  v21 = -2i64;
  v2 = controllerIndex;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v5 = UsersXboxLiveContext;
  v27 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v22 = v5;
  if ( v5 )
    v5->__abi_Release(v5);
  if ( Live_IsUserSignedIn(v2) && v5 )
  {
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appData, 0, 32);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v6 = 5;
    v7 = 0;
    m_inventoryState = this->m_inventoryState;
    if ( m_inventoryState == INVENTORY_STATE_GAME_CONTENT )
    {
      v6 = 4;
    }
    else
    {
      if ( m_inventoryState != INVENTORY_STATE_GAMEV2 )
      {
LABEL_12:
        pTaskCreateRequest.m_controllerIndex = v2;
        pTaskCreateRequest.m_onCompletionCallback = GetEntitlementsComplete_0;
        v9 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::InventoryService::get(v5);
        v23 = v9;
        v27 = NULL;
        LOBYTE(v10) = 1;
        v11 = v9->__abi___GetInventoryItemsAsync__3(v9, (Microsoft::Xbox::Services::Marketplace::MediaItemType)v6, v10, v7, (Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> **)&v27);
        if ( v11 < 0 )
          __abi_WinRTraiseException(v11);
        v12 = (__int64)v27;
        v13 = (__int64)v27;
        if ( v27 )
        {
          v27->__abi_AddRef(v27);
          v12 = (__int64)v27;
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
        v24 = v13;
        v14 = NULL;
        v28 = NULL;
        if ( v13 )
        {
          v15 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v13)(v13, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v28);
          if ( v15 < 0 )
            __abi_WinRTraiseException(v15);
          v14 = v28;
        }
        v25 = v14;
        if ( v14 != pTaskCreateRequest.m_asyncInfo )
        {
          v14->__abi_AddRef(v14);
          pTaskCreateRequest.m_asyncInfo = v14;
        }
        if ( v14 )
          v14->__abi_Release(v14);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
        if ( v9 )
          v9->__abi_Release(v9);
        Instance = TaskManager::GetInstance();
        if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
        {
          this->m_storeEntitlements[v2].taskState = ENTITLEMENT_STATE_ERROR;
          if ( this->m_storeEntitlements[v2].fromSignIn )
            Online_Commerce::ExchangeItemsError(this, v2);
          InstancePtr = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
          Com_Printf(25, "GetInventoryItemsAsync: Task Failed to Start");
        }
        pTaskCreateRequest.m_onCompletionCallback = NULL;
        pTaskCreateRequest.m_onUpdateCallback = NULL;
        pTaskCreateRequest.m_appSecondaryCallback = NULL;
        pTaskCreateRequest.m_timeoutInSeconds = 0;
        m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
        if ( pTaskCreateRequest.m_asyncInfo )
        {
          pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
          m_asyncInfo = NULL;
          pTaskCreateRequest.m_asyncInfo = NULL;
        }
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
            pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
          }
          m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
        }
        if ( m_asyncInfo )
          m_asyncInfo->__abi_Release(m_asyncInfo);
        goto LABEL_46;
      }
      v6 = 2;
    }
    v7 = 1;
    goto LABEL_12;
  }
  this->m_storeEntitlements[v2].taskState = ENTITLEMENT_STATE_ERROR;
  if ( this->m_storeEntitlements[v2].fromSignIn )
    Online_Commerce::ExchangeItemsError(this, v2);
  v19 = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(v19, MOVEMENT, NULL);
  Com_Printf(25, "GetInventoryItemsAsync: Task Failed to Start NO USER CONTEXT!");
LABEL_46:
  if ( v5 )
    v5->__abi_Release(v5);
}

/*
==============
Online_Commerce::GetInventory
==============
*/
void Online_Commerce::GetInventory(Online_Commerce *this, const int controllerIndex)
{
  Windows::Foundation::IAsyncInfo *v4; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v17[7]; 
  TaskCreateResult pTaskCreateResult; 
  Microsoft::Xbox::Services::XboxLiveContext *v19; 
  __int64 v20; 

  v17[1] = -2i64;
  v4 = NULL;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v6 = (__int64)UsersXboxLiveContext;
  v19 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v17[2] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = GetInventoryComplete;
  v19 = NULL;
  v7 = (*(__int64 (__fastcall **)(__int64, Microsoft::Xbox::Services::XboxLiveContext **))(*(_QWORD *)v6 + 200i64))(v6, &v19);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = (__int64)v19;
  v9 = (__int64)v19;
  if ( v19 )
  {
    v19->__abi_AddRef(v19);
    v8 = (__int64)v19;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  v17[3] = v9;
  v20 = 0i64;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 48i64))(v9, 5i64, &v20);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v11 = v20;
  v12 = v20;
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8i64))(v20);
    v11 = v20;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  v17[4] = v12;
  v17[0] = 0i64;
  if ( v12 )
  {
    v13 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v12)(v12, &_uuidof__AUIAsyncInfo_Foundation_Windows__, v17);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v4 = (Windows::Foundation::IAsyncInfo *)v17[0];
  }
  v17[5] = (__int64)v4;
  if ( v4 != pTaskCreateRequest.m_asyncInfo )
  {
    v4->__abi_AddRef(v4);
    pTaskCreateRequest.m_asyncInfo = v4;
  }
  if ( v4 )
    v4->__abi_Release(v4);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  Instance = TaskManager::GetInstance();
  if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    Online_Commerce::ExchangeFailed(this, controllerIndex, (Online_Error_CAT_COMMERCE_t)4096, "task_failed");
    Com_Printf(25, "GetInventoryItemsAsync: Task Failed to Start");
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
GetInventoryComplete
==============
*/
void GetInventoryComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  int m_controllerIndex; 
  Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *v4; 
  Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *v5; 
  __int64 v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *v8; 
  int v9; 
  unsigned int i; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  Online_Commerce *v29; 
  int v30; 
  __int64 *v31; 
  Online_Commerce *v32; 
  Online_Commerce *Instance; 
  __int64 v34; 
  __int64 v35[4]; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *v39; 
  int v40; 
  __int64 v41; 
  __int64 v42; 

  v35[1] = -2i64;
  m_controllerIndex = pTask->m_controllerIndex;
  v40 = m_controllerIndex;
  if ( taskState )
  {
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::ExchangeFailed(Instance, m_controllerIndex, (Online_Error_CAT_COMMERCE_t)0x2000, "complete_failed");
  }
  else
  {
    v39 = (Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
    Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>,1>::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>,1>(v39);
    v5 = v4;
    v39 = v4;
    if ( v4 )
    {
      v6 = (__int64)&v4->Windows::Foundation::Collections::IVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _>;
      if ( v4 != (Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *)-8i64 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
    }
    else
    {
      v6 = 0i64;
    }
    v35[2] = v6;
    if ( v5 )
      v5->__abi_Release(v5);
    m_asyncInfo = pTask->m_asyncInfo;
    v8 = NULL;
    v35[0] = 0i64;
    if ( m_asyncInfo )
    {
      v9 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAVInventoryItemsResult_Marketplace_Services_Xbox_Microsoft___Foundation_Windows__, (void **)v35);
      if ( v9 < 0 )
        __abi_WinRTraiseException(v9);
      v8 = (Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *)v35[0];
    }
    v39 = v8;
    if ( v8 )
      v8->__abi_AddRef(v8);
    v35[3] = (__int64)v8;
    if ( v8 )
      v8->__abi_Release(v8);
    for ( i = 0; ; ++i )
    {
      v41 = 0i64;
      v11 = ((__int64 (__fastcall *)(Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *, __int64 *))v8->Windows::Foundation::Collections::IObservableVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _>::Platform::Object::__vftable[1].__abi_Release)(v8, &v41);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v12 = v41;
      v13 = v41;
      if ( v41 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8i64))(v41);
        v12 = v41;
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
      v34 = v13;
      v42 = 0i64;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48i64))(v13, &v42);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = v42;
      v16 = v42;
      if ( v42 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8i64))(v42);
        v15 = v42;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
      v36 = v16;
      v17 = (*(__int64 (__fastcall **)(__int64, Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> **))(*(_QWORD *)v16 + 56i64))(v16, &v39);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = i < (unsigned int)v39;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
      if ( !v18 )
        break;
      v41 = 0i64;
      v19 = ((__int64 (__fastcall *)(Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *, __int64 *))v8->Windows::Foundation::Collections::IObservableVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _>::Platform::Object::__vftable[1].__abi_Release)(v8, &v41);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      v20 = v41;
      v21 = v41;
      if ( v41 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8i64))(v41);
        v20 = v41;
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
      v36 = v21;
      v42 = 0i64;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48i64))(v21, &v42);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v23 = v42;
      v24 = v42;
      if ( v42 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8i64))(v42);
        v23 = v42;
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
      v37 = v24;
      v34 = 0i64;
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 48i64))(v24, i, &v34);
      if ( v25 < 0 )
        __abi_WinRTraiseException(v25);
      v26 = v34;
      v27 = v34;
      if ( v34 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8i64))(v34);
        v26 = v34;
      }
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
      v38 = v27;
      v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104i64))(v6, v27);
      if ( v28 < 0 )
        __abi_WinRTraiseException(v28);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16i64))(v27);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16i64))(v21);
    }
    v29 = Online_Commerce::GetInstance();
    v30 = v40;
    v31 = (__int64 *)&v29->m_inventoryItemDetails[v40];
    if ( v6 != *v31 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
      if ( *v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*v31 + 16i64))(*v31);
      *v31 = v6;
    }
    v32 = Online_Commerce::GetInstance();
    Online_Commerce::FinishProcessProduct(v32, v30);
    v8->__abi_Release(v8);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  }
}

/*
==============
Online_Commerce::GetPaidEntitlement
==============
*/
void Online_Commerce::GetPaidEntitlement(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v5; 
  Windows::Foundation::IAsyncInfo *v6; 
  Online_Commerce *Instance; 
  Microsoft::Xbox::Services::Marketplace::InventoryService *v8; 
  _BOOL8 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  TaskManager *v14; 
  Online_ErrorReporting *InstancePtr; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Online_ErrorReporting *v17; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v19; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v20; 
  Microsoft::Xbox::Services::Marketplace::InventoryService *v21; 
  __int64 v22; 
  Windows::Foundation::IAsyncInfo *v23; 
  TaskCreateResult pTaskCreateResult; 
  Microsoft::Xbox::Services::XboxLiveContext *v25; 
  Windows::Foundation::IAsyncInfo *v26; 

  v19 = -2i64;
  v2 = controllerIndex;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v5 = UsersXboxLiveContext;
  v25 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v20 = v5;
  if ( v5 )
    v5->__abi_Release(v5);
  if ( Live_IsUserSignedIn(v2) && v5 )
  {
    v6 = NULL;
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appData, 0, 32);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = v2;
    pTaskCreateRequest.m_onCompletionCallback = GetPaidEntitlementComplete;
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::SetHavePaidEntitlement(Instance, v2, 0);
    v8 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::InventoryService::get(v5);
    v21 = v8;
    v25 = NULL;
    LOBYTE(v9) = 1;
    v10 = v8->__abi___GetInventoryItemsAsync__3(v8, SaudiArabia, v9, 0, (Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> **)&v25);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v11 = (__int64)v25;
    v12 = (__int64)v25;
    if ( v25 )
    {
      v25->__abi_AddRef(v25);
      v11 = (__int64)v25;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
    v22 = v12;
    v26 = NULL;
    if ( v12 )
    {
      v13 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v12)(v12, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v26);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v6 = v26;
    }
    v23 = v6;
    if ( v6 != pTaskCreateRequest.m_asyncInfo )
    {
      v6->__abi_AddRef(v6);
      pTaskCreateRequest.m_asyncInfo = v6;
    }
    if ( v6 )
      v6->__abi_Release(v6);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    if ( v8 )
      v8->__abi_Release(v8);
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      this->m_paidEntitlementTaskState[v2] = ENTITLEMENT_STATE_WORKING;
    }
    else
    {
      this->m_paidEntitlementTaskState[v2] = ENTITLEMENT_STATE_ERROR;
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
      Com_Printf(25, "GetInventoryItemsAsync: Task Failed to Start");
    }
    pTaskCreateRequest.m_onCompletionCallback = NULL;
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_appSecondaryCallback = NULL;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    if ( pTaskCreateRequest.m_asyncInfo )
    {
      pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
      m_asyncInfo = NULL;
      pTaskCreateRequest.m_asyncInfo = NULL;
    }
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
      }
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
  }
  else
  {
    this->m_paidEntitlementTaskState[v2] = ENTITLEMENT_STATE_ERROR;
    v17 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v17, MOVEMENT, NULL);
    Com_Printf(25, "GetInventoryItemsAsync: Task Failed to Start NO USER CONTEXT!");
  }
  if ( v5 )
    v5->__abi_Release(v5);
}

/*
==============
GetPaidEntitlementComplete
==============
*/
void GetPaidEntitlementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  HSTRING v2; 
  int v3; 
  unsigned int m_controllerIndex; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *v6; 
  int v7; 
  Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *Results; 
  HSTRING v9; 
  int v10; 
  unsigned int i; 
  int v12; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v13; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v14; 
  int v15; 
  HSTRING v16; 
  HSTRING v17; 
  int v18; 
  bool v19; 
  int v20; 
  HSTRING v21; 
  HSTRING v22; 
  int v23; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v24; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  HSTRING v30; 
  int v31; 
  HSTRING v32; 
  const wchar_t *StringRawBuffer_0; 
  int v34; 
  HSTRING UsersXboxLiveContext; 
  char v36; 
  unsigned int v37; 
  HSTRING v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  HSTRING v43; 
  HSTRING v44; 
  int v45; 
  bool v46; 
  int v47; 
  __int64 v48; 
  __int64 v49; 
  int v50; 
  HSTRING v51; 
  HSTRING v52; 
  int v53; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v54; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v55; 
  unsigned int j; 
  int v57; 
  HSTRING v58; 
  int v59; 
  PCWSTR v60; 
  char *v61; 
  int v62; 
  int v63; 
  char v64; 
  Online_Commerce *v65; 
  unsigned int v66; 
  int v67; 
  HSTRING v68; 
  int v69; 
  const wchar_t *v70; 
  Online_Commerce *v71; 
  Online_Commerce *v72; 
  Online_ErrorReporting *v73; 
  Online_Commerce *Instance; 
  Online_ErrorReporting *InstancePtr; 
  HSTRING string; 
  HSTRING v77; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *item; 
  HSTRING newString; 
  HSTRING v80; 
  void *v81; 
  __int64 v82; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *v83; 
  void *v84; 
  __int64 v85; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *v86; 
  Microsoft::Xbox::Services::Marketplace::InventoryItem *v87; 
  HSTRING v88; 
  int controllerIndex; 
  HSTRING v90; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *v91; 

  v88 = (HSTRING)pTask;
  v85 = -2i64;
  v2 = NULL;
  v3 = 0;
  controllerIndex = 0;
  m_controllerIndex = pTask->m_controllerIndex;
  controllerIndex = m_controllerIndex;
  if ( taskState )
  {
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::SetPaidEntitlementTaskState(Instance, m_controllerIndex, ENTITLEMENT_STATE_ERROR);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
    return;
  }
  m_asyncInfo = pTask->m_asyncInfo;
  v6 = NULL;
  v91 = NULL;
  v83 = NULL;
  if ( m_asyncInfo )
  {
    v7 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAVInventoryItemsResult_Marketplace_Services_Xbox_Microsoft___Foundation_Windows__, (void **)&v83);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    v6 = v83;
    v91 = v83;
  }
  v90 = (HSTRING)v6;
  if ( v6 )
    v6->__abi_AddRef(v6);
  v86 = v6;
  if ( v6 )
    v6->__abi_Release(v6);
  Results = Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult __gc *>::GetResults(v6);
  v80 = (HSTRING)Results;
  v9 = (HSTRING)Microsoft::Xbox::Services::Marketplace::__IInventoryItemsResultPublicNonVirtuals::Items::get(Results);
  newString = v9;
  v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v9 + 56i64))(v9, &v90);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  Com_Printf(25, "Online_Commerce::GetPaidEntitlement() controller=%d found %d inventory items\n", m_controllerIndex, (unsigned int)v90);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  if ( Results )
    Results->__abi_Release(Results);
  for ( i = 0; ; ++i )
  {
    item = NULL;
    v12 = ((__int64 (__fastcall *)(Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *, Microsoft::Xbox::Services::Marketplace::InventoryItem **))v6->Platform::Object::__vftable[1].__abi_Release)(v6, &item);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = item;
    v14 = item;
    if ( item )
    {
      item->__abi_AddRef(item);
      v13 = item;
    }
    if ( v13 )
      v13->__abi_Release(v13);
    v80 = (HSTRING)v14;
    string = NULL;
    v15 = v14->__abi_get_Url(v14, (Windows::Foundation::Uri **)&string);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    v16 = string;
    v17 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v16 = string;
    }
    if ( v16 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
    v77 = v17;
    v18 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v17 + 56i64))(v17, &v90);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    v19 = i < (unsigned int)v90;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
    v14->__abi_Release(v14);
    if ( !v19 )
      break;
    string = NULL;
    v20 = ((__int64 (__fastcall *)(Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *, HSTRING *))v6->Platform::Object::__vftable[1].__abi_Release)(v6, &string);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v21 = string;
    v22 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v21 = string;
    }
    if ( v21 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16i64))(v21);
    v80 = v22;
    item = NULL;
    v23 = (*(__int64 (__fastcall **)(HSTRING, Microsoft::Xbox::Services::Marketplace::InventoryItem **))(*(_QWORD *)v22 + 48i64))(v22, &item);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    v24 = item;
    v25 = item;
    if ( item )
    {
      item->__abi_AddRef(item);
      v24 = item;
    }
    if ( v24 )
      v24->__abi_Release(v24);
    v81 = v25;
    v77 = NULL;
    v26 = ((__int64 (__fastcall *)(Microsoft::Xbox::Services::Marketplace::InventoryItem *, _QWORD, HSTRING *))v25->__abi_get_Url)(v25, i, &v77);
    if ( v26 < 0 )
      __abi_WinRTraiseException(v26);
    v27 = (__int64)v77;
    v28 = (__int64)v77;
    if ( v77 )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v77 + 8i64))(v77);
      v27 = (__int64)v77;
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16i64))(v27);
    v82 = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8i64))(v28);
    v82 = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16i64))(v28);
    v25->__abi_Release(v25);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16i64))(v22);
    string = NULL;
    v29 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 72i64))(v28, &string);
    if ( v29 < 0 )
      __abi_WinRTraiseException(v29);
    v30 = string;
    if ( string )
    {
      v31 = WindowsDuplicateString_0(string, &newString);
      if ( v31 < 0 )
        __abi_WinRTraiseException(v31);
      v32 = newString;
      v30 = string;
    }
    else
    {
      v32 = NULL;
    }
    WindowsDeleteString_0(v30);
    v81 = v32;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v32, NULL);
    Com_Printf(25, "%S\n", StringRawBuffer_0);
    WindowsDeleteString_0(v32);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16i64))(v28);
  }
  v34 = controllerIndex;
  if ( Live_IsUserSignedIn(controllerIndex) )
  {
    UsersXboxLiveContext = (HSTRING)Live_GetUsersXboxLiveContext(v34);
    v90 = UsersXboxLiveContext;
    v3 = 1;
    if ( UsersXboxLiveContext )
    {
      v36 = 1;
      goto LABEL_55;
    }
  }
  else
  {
    UsersXboxLiveContext = v90;
  }
  v36 = 0;
LABEL_55:
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    if ( UsersXboxLiveContext )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)UsersXboxLiveContext + 16i64))(UsersXboxLiveContext);
  }
  if ( v36 )
  {
    v37 = 0;
    v38 = v77;
    while ( 1 )
    {
      v77 = NULL;
      v39 = ((__int64 (__fastcall *)(Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *, HSTRING *))v91->Platform::Object::__vftable[1].__abi_Release)(v91, &v77);
      if ( v39 < 0 )
        __abi_WinRTraiseException(v39);
      v40 = (__int64)v77;
      v41 = (__int64)v77;
      if ( v77 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v77 + 8i64))(v77);
        v40 = (__int64)v77;
      }
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16i64))(v40);
      v82 = v41;
      string = NULL;
      v42 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 48i64))(v41, &string);
      if ( v42 < 0 )
        __abi_WinRTraiseException(v42);
      v43 = string;
      v44 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v43 = string;
      }
      if ( v43 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16i64))(v43);
      v81 = v44;
      v45 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v44 + 56i64))(v44, &v90);
      if ( v45 < 0 )
        __abi_WinRTraiseException(v45);
      v46 = v37 < (unsigned int)v90;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v44 + 16i64))(v44);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16i64))(v41);
      if ( !v46 )
        break;
      v77 = NULL;
      v47 = ((__int64 (__fastcall *)(Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Marketplace::InventoryItemsResult _> *, HSTRING *))v91->Platform::Object::__vftable[1].__abi_Release)(v91, &v77);
      if ( v47 < 0 )
        __abi_WinRTraiseException(v47);
      v48 = (__int64)v77;
      v49 = (__int64)v77;
      if ( v77 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v77 + 8i64))(v77);
        v48 = (__int64)v77;
      }
      if ( v48 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16i64))(v48);
      v82 = v49;
      string = NULL;
      v50 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v49 + 48i64))(v49, &string);
      if ( v50 < 0 )
        __abi_WinRTraiseException(v50);
      v51 = string;
      v52 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v51 = string;
      }
      if ( v51 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v51 + 16i64))(v51);
      v81 = v52;
      item = NULL;
      v53 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, Microsoft::Xbox::Services::Marketplace::InventoryItem **))(*(_QWORD *)v52 + 48i64))(v52, v37, &item);
      if ( v53 < 0 )
        __abi_WinRTraiseException(v53);
      v54 = item;
      v55 = item;
      if ( item )
      {
        item->__abi_AddRef(item);
        v54 = item;
      }
      if ( v54 )
        v54->__abi_Release(v54);
      v84 = v55;
      if ( v55 )
        v55->__abi_AddRef(v55);
      v87 = v55;
      if ( v55 )
        v55->__abi_Release(v55);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v52 + 16i64))(v52);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16i64))(v49);
      for ( j = 0; j < 9; ++j )
      {
        if ( !UserOwnsInventoryItem(*((_DWORD *)v88 + 10), v55) )
          goto LABEL_104;
        newString = NULL;
        v57 = v55->__abi_get_ProductId(v55, (Platform::String **)&newString);
        if ( v57 < 0 )
          __abi_WinRTraiseException(v57);
        v58 = newString;
        if ( newString )
        {
          v59 = WindowsDuplicateString_0(newString, &v80);
          if ( v59 < 0 )
            __abi_WinRTraiseException(v59);
          v38 = v80;
          v58 = newString;
        }
        else
        {
          v38 = NULL;
        }
        WindowsDeleteString_0(v58);
        v77 = v38;
        v3 |= 2u;
        v60 = WindowsGetStringRawBuffer_0(v38, NULL);
        v61 = (char *)((char *)XB3_PAID_PRODUCT_IDS[j] - (char *)v60);
        do
        {
          v62 = *(unsigned __int16 *)&v61[(_QWORD)v60];
          v63 = *v60 - v62;
          if ( v63 )
            break;
          ++v60;
        }
        while ( v62 );
        if ( v63 )
LABEL_104:
          v64 = 0;
        else
          v64 = 1;
        if ( (v3 & 2) != 0 )
        {
          v3 &= ~2u;
          WindowsDeleteString_0(v38);
        }
        if ( v64 )
        {
          v65 = Online_Commerce::GetInstance();
          v66 = controllerIndex;
          Online_Commerce::SetHavePaidEntitlement(v65, controllerIndex, 1);
          v88 = NULL;
          v67 = v55->__abi_get_ProductId(v55, (Platform::String **)&v88);
          if ( v67 < 0 )
            __abi_WinRTraiseException(v67);
          v68 = v88;
          if ( v88 )
          {
            v69 = WindowsDuplicateString_0(v88, &v90);
            if ( v69 < 0 )
              __abi_WinRTraiseException(v69);
            v2 = v90;
            v68 = v88;
          }
          WindowsDeleteString_0(v68);
          v84 = v2;
          v70 = WindowsGetStringRawBuffer_0(v2, NULL);
          Com_Printf(25, "Online_Commerce::GetPaidEntitlement() controller=%d has paid entitlement %S\n", v66, v70);
          WindowsDeleteString_0(v2);
          if ( v55 )
            v55->__abi_Release(v55);
          goto LABEL_119;
        }
      }
      if ( v55 )
        v55->__abi_Release(v55);
      ++v37;
    }
    v66 = controllerIndex;
LABEL_119:
    v71 = Online_Commerce::GetInstance();
    Online_Commerce::SetPaidEntitlementTaskState(v71, v66, ENTITLEMENT_STATE_COMPLETE);
    v6 = v91;
  }
  else
  {
    v72 = Online_Commerce::GetInstance();
    Online_Commerce::SetPaidEntitlementTaskState(v72, v34, ENTITLEMENT_STATE_ERROR);
    v73 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v73, MOVEMENT, NULL);
  }
  if ( v6 )
    v6->__abi_Release(v6);
}

/*
==============
Online_Commerce::HasSeasonPass
==============
*/
bool Online_Commerce::HasSeasonPass(Online_Commerce *this, const int controllerIndex)
{
  return 0;
}

/*
==============
OnXboxOneProcessProductComplete
==============
*/
void OnXboxOneProcessProductComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  Platform::String *m_currentExchangeProductID; 
  int v4; 
  HSTRING v5; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING v7; 
  HSTRING v8; 
  const wchar_t *v9; 
  Online_Commerce *v10; 
  Online_Commerce *v11; 
  Online_Commerce *Instance; 
  bdLobbyErrorCode ErrorCode; 
  const char *v14; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode v16; 
  HSTRING newString[3]; 
  char Dest[64]; 

  newString[2] = (HSTRING)-2i64;
  if ( taskState )
  {
    Instance = Online_Commerce::GetInstance();
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    v14 = j_va("%d", (unsigned int)ErrorCode);
    Online_Commerce::ExchangeFailed(Instance, pTask->m_controllerIndex, (Online_Error_CAT_COMMERCE_t)0x8000, v14);
    TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
    v16 = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    Com_PrintWarning(25, "Error: OnXboxOneProcessProductComplete %d (%llu)\n", (unsigned int)v16, TransactionID);
  }
  else
  {
    Com_Printf(25, "OnXboxOneProcessProductComplete complete\n");
    m_currentExchangeProductID = Online_Commerce::GetInstance()->m_currentExchangeProductID;
    if ( m_currentExchangeProductID )
    {
      v4 = WindowsDuplicateString_0((HSTRING)m_currentExchangeProductID, newString);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      v5 = newString[0];
    }
    else
    {
      v5 = NULL;
    }
    newString[1] = NULL;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    Platform::String::String(NULL, StringRawBuffer_0);
    v8 = v7;
    WindowsDeleteString_0(NULL);
    v9 = WindowsGetStringRawBuffer_0(v8, NULL);
    wcstombs(Dest, v9, 0x40ui64);
    WindowsDeleteString_0(v8);
    WindowsDeleteString_0(v5);
    v10 = Online_Commerce::GetInstance();
    Online_Commerce::UpdateInventory(v10, pTask->m_controllerIndex, Dest, 5);
    if ( Online_Commerce::GetInstance()->m_storeEntitlements[pTask->m_controllerIndex].taskState == ENTITLEMENT_STATE_EXCHANGING )
    {
      v11 = Online_Commerce::GetInstance();
      Online_Commerce::GetEntitlements(v11, pTask->m_controllerIndex);
    }
  }
}

/*
==============
OnXboxOneTransferConsumableComplete
==============
*/
void OnXboxOneTransferConsumableComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  Platform::String *m_currentExchangeProductID; 
  int v4; 
  HSTRING v5; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING v7; 
  HSTRING v8; 
  const wchar_t *v9; 
  Online_Commerce *v10; 
  Online_Commerce *v11; 
  Online_Commerce *v12; 
  Online_Commerce *Instance; 
  bdLobbyErrorCode ErrorCode; 
  const char *v15; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode v17; 
  HSTRING newString[3]; 
  char Dest[64]; 

  newString[2] = (HSTRING)-2i64;
  if ( taskState )
  {
    Instance = Online_Commerce::GetInstance();
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    v15 = j_va("%d", (unsigned int)ErrorCode);
    Online_Commerce::ExchangeFailed(Instance, pTask->m_controllerIndex, (Online_Error_CAT_COMMERCE_t)0x4000, v15);
    TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
    v17 = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    Com_PrintWarning(25, "Error: OnXboxOneTransferConsumableComplete %d (%llu)\n", (unsigned int)v17, TransactionID);
  }
  else
  {
    Com_Printf(25, "OnXboxOneTransferConsumableComplete complete\n");
    m_currentExchangeProductID = Online_Commerce::GetInstance()->m_currentExchangeProductID;
    if ( m_currentExchangeProductID )
    {
      v4 = WindowsDuplicateString_0((HSTRING)m_currentExchangeProductID, newString);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      v5 = newString[0];
    }
    else
    {
      v5 = NULL;
    }
    newString[1] = NULL;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    Platform::String::String(NULL, StringRawBuffer_0);
    v8 = v7;
    WindowsDeleteString_0(NULL);
    v9 = WindowsGetStringRawBuffer_0(v8, NULL);
    wcstombs(Dest, v9, 0x40ui64);
    WindowsDeleteString_0(v8);
    WindowsDeleteString_0(v5);
    v10 = Online_Commerce::GetInstance();
    Online_Commerce::UpdateInventory(v10, pTask->m_controllerIndex, Dest, 5);
    if ( Online_Commerce::GetInstance()->m_storeEntitlements[pTask->m_controllerIndex].taskState == ENTITLEMENT_STATE_EXCHANGING )
    {
      v11 = Online_Commerce::GetInstance();
      Online_Commerce::GetEntitlements(v11, pTask->m_controllerIndex);
    }
    else
    {
      v12 = Online_Commerce::GetInstance();
      Online_Commerce::GetCurrency(v12, pTask->m_controllerIndex);
    }
  }
}

/*
==============
Online_Commerce::ShowFirstPartyStore
==============
*/
void Online_Commerce::ShowFirstPartyStore(Online_Commerce *this, const int controllerIndex, const char *data)
{
  unsigned __int64 PlatformUserId; 
  Windows::Xbox::System::User *UserByPlatformId; 
  __int64 v6; 
  HSTRING v7; 
  int ActivationFactoryByPCWSTR; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  void *ppActivationFactory; 
  __int64 v13; 
  Platform::Guid pGuid; 
  __int64 v15[4]; 
  wchar_t pDestBuffer[128]; 

  v15[1] = -2i64;
  PlatformUserId = Live_GetPlatformUserId(controllerIndex);
  UserByPlatformId = Users_GetUserByPlatformId(PlatformUserId);
  v15[2] = (__int64)UserByPlatformId;
  ConvertCharArrayToWideCharArray(data, pDestBuffer, 0x80ui64);
  v13 = 0i64;
  Platform::String::String(NULL, pDestBuffer);
  v7 = (HSTRING)v6;
  v15[3] = v6;
  WindowsDeleteString_0(NULL);
  pGuid.__vftable = (Platform::Object_vtbl *)0x4F6ABDD476EFB705i64;
  *(_DWORD *)&pGuid.__d = 1370065293;
  *(_DWORD *)&pGuid.__h = -407945187;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.ApplicationModel.Store.Product", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v15[0] = 0i64;
  v9 = (*(__int64 (__fastcall **)(void *, Windows::Xbox::System::User *, HSTRING, __int64 *))(*(_QWORD *)ppActivationFactory + 56i64))(ppActivationFactory, UserByPlatformId, v7, v15);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  v10 = v15[0];
  v11 = v15[0];
  if ( v15[0] )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 8i64))(v15[0]);
    v10 = v15[0];
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  v13 = 0i64;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  WindowsDeleteString_0(v7);
  if ( UserByPlatformId )
    UserByPlatformId->__abi_Release(UserByPlatformId);
}

/*
==============
Online_Commerce::StartProcessProduct
==============
*/
void Online_Commerce::StartProcessProduct(Online_Commerce *this, const int controllerIndex)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  __int64 v4; 
  int v5; 
  int v6; 
  HSTRING v7; 
  int v8; 
  int v9; 
  HSTRING v10; 
  int v11; 
  int v12; 
  HSTRING v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  Windows::Foundation::IAsyncInfo *v17; 
  int v18; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  HSTRING string; 
  HSTRING newString; 
  HSTRING v24; 
  HSTRING v25; 
  HSTRING v26; 
  HSTRING v27; 
  HSTRING v28; 
  HSTRING v29; 
  HSTRING v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  Windows::Foundation::IAsyncInfo *v34; 
  TaskCreateResult pTaskCreateResult; 
  HSTRING_HEADER hstringHeader; 
  HSTRING_HEADER v37; 
  HSTRING_HEADER v38; 
  Windows::Xbox::System::User *v41; 
  Windows::Foundation::IAsyncInfo *v42; 

  v31 = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v4 = (__int64)UserFromControllerIndex;
  v41 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  v32 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  v5 = WindowsCreateStringReference_0(L"POST", 4u, &hstringHeader, &string);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  if ( string )
  {
    v6 = WindowsDuplicateString_0(string, &newString);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v7 = newString;
    v24 = newString;
  }
  else
  {
    v7 = NULL;
    v24 = NULL;
  }
  v8 = WindowsCreateStringReference_0(L"Content-Type: application/json\r\n", 0x20u, &v37, &v25);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  if ( v25 )
  {
    v9 = WindowsDuplicateString_0(v25, &v26);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v10 = v26;
    v27 = v26;
  }
  else
  {
    v10 = NULL;
    v27 = NULL;
  }
  v11 = WindowsCreateStringReference_0(L"https:
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  if ( v28 )
  {
    v12 = WindowsDuplicateString_0(v28, &v29);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = v29;
    v30 = v29;
  }
  else
  {
    v13 = NULL;
    v30 = NULL;
  }
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = StartProcessProductComplete;
  v41 = NULL;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING, Windows::Xbox::System::User **))(*(_QWORD *)v4 + 128i64))(v4, v7, v13, v10, &v41);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  v15 = (__int64)v41;
  v16 = (__int64)v41;
  if ( v41 )
  {
    v41->__abi_AddRef(v41);
    v15 = (__int64)v41;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
  v33 = v16;
  v17 = NULL;
  v42 = NULL;
  if ( v16 )
  {
    v18 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v16)(v16, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v42);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    v17 = v42;
  }
  v34 = v17;
  if ( v17 != pTaskCreateRequest.m_asyncInfo )
  {
    v17->__abi_AddRef(v17);
    pTaskCreateRequest.m_asyncInfo = v17;
  }
  if ( v17 )
    v17->__abi_Release(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
  Instance = TaskManager::GetInstance();
  if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    Online_Commerce::ExchangeFailed(this, controllerIndex, (Online_Error_CAT_COMMERCE_t)512, "task_failed");
    Com_Printf(25, "Unable to retrieve delegation token\n");
  }
  WindowsDeleteString_0(v13);
  WindowsDeleteString_0(v10);
  WindowsDeleteString_0(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
StartProcessProductComplete
==============
*/
void StartProcessProductComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  Windows::Foundation::IAsyncInfo *v4; 
  HSTRING v5; 
  size_t v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  int v15; 
  const wchar_t *StringRawBuffer_0; 
  Online_Commerce *v17; 
  Online_Commerce *v18; 
  Online_Commerce *v19; 
  Online_Commerce *v20; 
  Online_Commerce *v21; 
  Online_Commerce *Instance; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  int v24; 
  const char *v25; 
  Windows::Foundation::IAsyncInfo *v26; 
  int v27; 
  HSTRING newString; 
  HSTRING v29; 
  __int64 v30; 
  size_t PtNumOfCharConverted[12]; 
  __int64 v32; 
  unsigned int v33; 
  HSTRING string; 
  size_t v35; 

  PtNumOfCharConverted[1] = -2i64;
  m_controllerIndex = pTask->m_controllerIndex;
  v33 = pTask->m_controllerIndex;
  if ( taskState )
  {
    Instance = Online_Commerce::GetInstance();
    m_asyncInfo = pTask->m_asyncInfo;
    v33 = 0;
    v24 = m_asyncInfo->__abi_get_ErrorCode(m_asyncInfo, (Windows::Foundation::HResult *)&v33);
    if ( v24 < 0 )
      __abi_WinRTraiseException(v24);
    v25 = j_va("%X", v33);
    Online_Commerce::ExchangeFailed(Instance, m_controllerIndex, (Online_Error_CAT_COMMERCE_t)1024, v25);
    v26 = pTask->m_asyncInfo;
    v33 = 0;
    v27 = v26->__abi_get_ErrorCode(v26, (Windows::Foundation::HResult *)&v33);
    if ( v27 < 0 )
      __abi_WinRTraiseException(v27);
    Com_Printf(25, "GetTokenAndSignatureAsync(): Failure Microsoft Error Code: [0x%X]\n", v33);
  }
  else
  {
    v4 = pTask->m_asyncInfo;
    v5 = NULL;
    v6 = 0i64;
    v35 = 0i64;
    if ( v4 )
    {
      v7 = v4->__abi_QueryInterface(v4, &_uuidof__AU__IAsyncOperation_PE_AAVGetTokenAndSignatureResult_System_Xbox_Windows___Foundation_Windows__, (void **)&v35);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v6 = v35;
    }
    v32 = v6;
    if ( v6 )
      (*(void (__fastcall **)(size_t))(*(_QWORD *)v6 + 8i64))(v6);
    PtNumOfCharConverted[2] = v6;
    if ( v6 )
      (*(void (__fastcall **)(size_t))(*(_QWORD *)v6 + 16i64))(v6);
    PtNumOfCharConverted[0] = 0i64;
    v32 = 0i64;
    v8 = (*(__int64 (__fastcall **)(size_t, __int64 *))(*(_QWORD *)v6 + 64i64))(v6, &v32);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v32;
    v10 = v32;
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8i64))(v32);
      v9 = v32;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    v30 = v10;
    string = NULL;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 56i64))(v10, &string);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = string;
    if ( string )
    {
      v13 = WindowsDuplicateString_0(string, &newString);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v14 = newString;
      v12 = string;
    }
    else
    {
      v14 = NULL;
    }
    WindowsDeleteString_0(v12);
    PtNumOfCharConverted[3] = (size_t)v14;
    if ( v14 )
    {
      v15 = WindowsDuplicateString_0(v14, &v29);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v5 = v29;
    }
    v30 = (__int64)v5;
    WindowsDeleteString_0(v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    v17 = Online_Commerce::GetInstance();
    wcstombs_s(PtNumOfCharConverted, v17->m_delegationToken[m_controllerIndex], 0x2000ui64, StringRawBuffer_0, 0x2000ui64);
    v18 = Online_Commerce::GetInstance();
    v18->m_delegationTokenLength[m_controllerIndex] = _Platform_WindowsGetStringLen(v5) + 1;
    v19 = Online_Commerce::GetInstance();
    Com_Printf(25, "DelegationToken %s\n", v19->m_delegationToken[m_controllerIndex]);
    if ( Online_Commerce::GetInstance()->m_storeEntitlements[m_controllerIndex].taskState == ENTITLEMENT_STATE_EXCHANGING )
    {
      v21 = Online_Commerce::GetInstance();
      Online_Commerce::FinishProcessProduct(v21, m_controllerIndex);
    }
    else
    {
      v20 = Online_Commerce::GetInstance();
      Online_Commerce::GetInventory(v20, m_controllerIndex);
    }
    WindowsDeleteString_0(v5);
    (*(void (__fastcall **)(size_t))(*(_QWORD *)v6 + 16i64))(v6);
  }
}

/*
==============
UserOwnsInventoryItem
==============
*/
bool UserOwnsInventoryItem(const int controllerIndex, Microsoft::Xbox::Services::Marketplace::InventoryItem *item)
{
  const dvar_t *v4; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::XboxLiveContext *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  HSTRING v11; 
  int v12; 
  HSTRING v13; 
  const wchar_t *StringRawBuffer_0; 
  int v15; 
  HSTRING v16; 
  Windows::Foundation::IUriRuntimeClass *v17; 
  HSTRING v18; 
  const wchar_t *v19; 
  HSTRING v20; 
  HSTRING v21; 
  const wchar_t *v22; 
  HSTRING v23; 
  const wchar_t *v24; 
  HSTRING string; 
  __int64 v27; 
  HSTRING newString; 
  __int64 v29; 
  __int64 v30; 
  Microsoft::Xbox::Services::XboxLiveContext *v31; 
  char Dest[272]; 
  char Str[272]; 

  v30 = -2i64;
  v4 = DVARBOOL_online_commerce_check_ownership;
  if ( !DVARBOOL_online_commerce_check_ownership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_commerce_check_ownership") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    goto LABEL_26;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v6 = UsersXboxLiveContext;
  v31 = UsersXboxLiveContext;
  string = NULL;
  if ( !UsersXboxLiveContext )
    return (char)UsersXboxLiveContext;
  v27 = 0i64;
  v7 = UsersXboxLiveContext->__abi_get_User(UsersXboxLiveContext, (Windows::Xbox::System::User **)&v27);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = v27;
  v9 = v27;
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8i64))(v27);
    v8 = v27;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  v29 = v9;
  string = NULL;
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 120i64))(v9, &string);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v11 = string;
  if ( string )
  {
    v12 = WindowsDuplicateString_0(string, &newString);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = newString;
    v11 = string;
  }
  else
  {
    v13 = NULL;
  }
  WindowsDeleteString_0(v11);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v13, NULL);
  wcstombs(Dest, StringRawBuffer_0, 0x104ui64);
  WindowsDeleteString_0(v13);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  string = NULL;
  v15 = item->__abi_get_Url(item, (Windows::Foundation::Uri **)&string);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  v16 = string;
  v17 = (Windows::Foundation::IUriRuntimeClass *)string;
  if ( string )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
    v16 = string;
  }
  if ( v16 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
  v29 = (__int64)v17;
  v18 = (HSTRING)Windows::Foundation::IUriRuntimeClass::AbsoluteUri::get(v17);
  newString = v18;
  v27 = 0i64;
  v19 = WindowsGetStringRawBuffer_0(v18, NULL);
  Platform::String::String(NULL, v19);
  v21 = v20;
  newString = NULL;
  WindowsDeleteString_0(NULL);
  v22 = WindowsGetStringRawBuffer_0(v21, NULL);
  wcstombs(Str, v22, 0x104ui64);
  WindowsDeleteString_0(v21);
  WindowsDeleteString_0(v18);
  if ( v17 )
    v17->__abi_Release(v17);
  if ( strstr_0(Str, Dest) )
  {
    v6->__abi_Release(v6);
LABEL_26:
    LOBYTE(UsersXboxLiveContext) = 1;
    return (char)UsersXboxLiveContext;
  }
  v23 = (HSTRING)Microsoft::Xbox::Services::Marketplace::__IInventoryItemPublicNonVirtuals::ProductId::get(item);
  v29 = (__int64)v23;
  v24 = WindowsGetStringRawBuffer_0(v23, NULL);
  Com_Printf(16, "entitlement %S ignored, URL does not contain user's own xuid '%s'\n", v24, Dest);
  WindowsDeleteString_0(v23);
  v6->__abi_Release(v6);
  LOBYTE(UsersXboxLiveContext) = 0;
  return (char)UsersXboxLiveContext;
}

