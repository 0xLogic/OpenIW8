/*
==============
InGameStore_PlatformShutdown
==============
*/

void InGameStore_PlatformShutdown(void)
{
  ?InGameStore_PlatformShutdown@@YAXXZ();
}

/*
==============
InGameStore_CoPlatformPurchaseProduct
==============
*/

bool __fastcall InGameStore_CoPlatformPurchaseProduct(const int controllerIndex, const InGameStoreProduct *const product, InGameStorePurchaseType purchaseType, bool *const purchased, bool *const refresh)
{
  return ?InGameStore_CoPlatformPurchaseProduct@@YA_NHQEBUInGameStoreProduct@@W4InGameStorePurchaseType@@QEA_N2@Z(controllerIndex, product, purchaseType, purchased, refresh);
}

/*
==============
InGameStore_CoPlatformFetchProductsOwnership
==============
*/

bool __fastcall InGameStore_CoPlatformFetchProductsOwnership(const int controllerIndex)
{
  return ?InGameStore_CoPlatformFetchProductsOwnership@@YA_NH@Z(controllerIndex);
}

/*
==============
InGameStore_CoPlatformFetchProducts
==============
*/

bool __fastcall InGameStore_CoPlatformFetchProducts(const int controllerIndex)
{
  return ?InGameStore_CoPlatformFetchProducts@@YA_NH@Z(controllerIndex);
}

/*
==============
InGameStore_ShowStoreIcon
==============
*/

bool __fastcall InGameStore_ShowStoreIcon(bool show, InGameStoreStoreIconPosition position)
{
  return ?InGameStore_ShowStoreIcon@@YA_N_NW4InGameStoreStoreIconPosition@@@Z(show, position);
}

/*
==============
InGameStore_CoPlatformDownloadProduct
==============
*/

bool __fastcall InGameStore_CoPlatformDownloadProduct(const int controllerIndex, const InGameStoreProduct *const product)
{
  return ?InGameStore_CoPlatformDownloadProduct@@YA_NHQEBUInGameStoreProduct@@@Z(controllerIndex, product);
}

/*
==============
InGameStore_PlatformInit
==============
*/

void InGameStore_PlatformInit(void)
{
  ?InGameStore_PlatformInit@@YAXXZ();
}

/*
==============
InGameStore_CoPlatformShowEmptyStoreDialog
==============
*/

bool __fastcall InGameStore_CoPlatformShowEmptyStoreDialog(const int controllerIndex)
{
  return ?InGameStore_CoPlatformShowEmptyStoreDialog@@YA_NH@Z(controllerIndex);
}

/*
==============
InGameStore_CoPlatformEnumerateContent
==============
*/

unsigned __int64 __fastcall InGameStore_CoPlatformEnumerateContent()
{
  return ?InGameStore_CoPlatformEnumerateContent@@YA_KXZ();
}

/*
==============
InGameStore_CoPlatformDeleteContent
==============
*/

bool __fastcall InGameStore_CoPlatformDeleteContent(const InGameStoreProduct *const product)
{
  return ?InGameStore_CoPlatformDeleteContent@@YA_NQEBUInGameStoreProduct@@@Z(product);
}

/*
==============
InGameStore_CoGetCatalogItemDetails
==============
*/
char InGameStore_CoGetCatalogItemDetails(const int controllerIndex, const winrt::Microsoft::Xbox::Services::XboxLiveContext xb3Context, std::vector<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>> *const catalogItemDetailsList)
{
  unsigned int v6; 
  InGameStoreCatalog *Catalog; 
  bool v8; 
  IUnknown_vtbl *v9; 
  winrt::hstring *Myend; 
  int v13; 
  winrt::hstring *v14; 
  winrt::hstring *v15; 
  winrt::hstring *Mylast; 
  winrt::hstring *Myfirst; 
  int productCount; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  HRESULT v22; 
  int v23; 
  bool v24; 
  HSTRING *p_m_value; 
  unsigned __int64 v26; 
  winrt::hstring *v27; 
  IUnknown_vtbl *v28; 
  IUnknown *v29; 
  int v30; 
  IUnknown *v31; 
  HRESULT v32; 
  winrt::impl::input_scope *v33; 
  winrt::impl::input_scope *v34; 
  IUnknown *v35; 
  unsigned int v36; 
  unsigned int v37; 
  HSTRING v38; 
  HRESULT v39; 
  int v40; 
  unsigned __int64 v41; 
  bool v42; 
  IUnknown *v43; 
  HSTRING *v44; 
  unsigned __int64 v45; 
  winrt::hstring *v46; 
  IUnknown_vtbl *v47; 
  bool v48; 
  HRESULT v49; 
  __int64 v50; 
  unsigned int v51; 
  HRESULT v52; 
  __int64 v53; 
  unsigned int v54; 
  bool v55; 
  IUnknown *v56; 
  HSTRING *v57; 
  unsigned __int64 v58; 
  winrt::hstring *v59; 
  IUnknown_vtbl *v60; 
  HRESULT v61; 
  std::vector<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>> *v62; 
  winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> *v63; 
  IUnknown *v64; 
  HSTRING *v65; 
  IUnknown *v66; 
  HSTRING *v67; 
  unsigned __int64 v68; 
  winrt::hstring *v69; 
  IUnknown_vtbl *v70; 
  _BYTE v71[12]; 
  winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> > v72; 
  winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> v73; 
  int controllerIndexa; 
  int v75; 
  HSTRING string; 
  IUnknown *m_ptr; 
  int v78; 
  std::vector<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>> *v79; 
  std::vector<winrt::hstring> v80; 
  winrt::vector_view<winrt::hstring> v81; 
  winrt::Microsoft::Xbox::Services::XboxLiveContext *v82; 
  InGameStoreCatalog *v83; 
  __int64 v84; 
  wchar_t WideCharStr[40]; 

  v84 = -2i64;
  v79 = catalogItemDetailsList;
  m_ptr = xb3Context.m_ptr;
  controllerIndexa = controllerIndex;
  v78 = controllerIndex;
  v82 = (winrt::Microsoft::Xbox::Services::XboxLiveContext *)xb3Context.m_ptr;
  v6 = 0;
  Catalog = InGameStore_GetCatalog(controllerIndex);
  v83 = Catalog;
  if ( Catalog )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+168h+var_F0.baseclass_0._Mypair._Myval2._Myfirst], xmm0
    }
    Myend = NULL;
    v80._Mypair._Myval2._Myend = NULL;
    v13 = 0;
    v14 = NULL;
    v15 = NULL;
    Mylast = v80._Mypair._Myval2._Mylast;
    Myfirst = v80._Mypair._Myval2._Myfirst;
    while ( 1 )
    {
      v75 = v13;
      productCount = Catalog->productCount;
      if ( v13 >= productCount )
        break;
      v19 = productCount - 1;
      v20 = v13;
      if ( Catalog->products[v20].skuType == INGAMESTORE_PRODUCT_SKU_TYPE_FIRST_PARTY )
      {
        memset(WideCharStr, 0, 74);
        MultiByteToWideChar(0xFDE9u, 0, Catalog->products[v20].skuId, -1, WideCharStr, 37);
        if ( WideCharStr[0] )
        {
          if ( Myend == v14 )
          {
            std::vector<winrt::hstring>::_Emplace_reallocate<wchar_t (&)[37]>(&v80, v14, (wchar_t (*)[37])WideCharStr);
            Myend = v80._Mypair._Myval2._Myend;
            Mylast = v80._Mypair._Myval2._Mylast;
            Myfirst = v80._Mypair._Myval2._Myfirst;
          }
          else
          {
            v21 = -1i64;
            do
              ++v21;
            while ( WideCharStr[v21] );
            string = NULL;
            v22 = WindowsCreateString_0(WideCharStr, v21, &string);
            if ( v22 )
              winrt::impl::throw_hresult(v22);
            v14->m_handle.m_value = string;
            Mylast = v14 + 1;
            v80._Mypair._Myval2._Mylast = v14 + 1;
          }
        }
      }
      v23 = v75;
      if ( v75 == v19 || (v14 = Mylast, Mylast - Myfirst == 10) )
      {
        if ( (unsigned __int64)((char *)Mylast - (char *)Myfirst) < 8 )
        {
          v24 = InGameStore_Error(controllerIndexa, INGAMESTORE_ERROR_XB3_GET_CATALOG_ITEM_DETAILS, "no_products");
          if ( Myfirst )
          {
            p_m_value = &Myfirst->m_handle.m_value;
            if ( Myfirst != Mylast )
            {
              do
              {
                if ( *p_m_value )
                {
                  WindowsDeleteString_0(*p_m_value);
                  *p_m_value = NULL;
                }
                ++p_m_value;
              }
              while ( p_m_value != (HSTRING *)Mylast );
            }
            v26 = 8 * (Myend - Myfirst);
            v27 = Myfirst;
            if ( v26 >= 0x1000 )
            {
              v26 += 39i64;
              Myfirst = (winrt::hstring *)Myfirst[-1].m_handle.m_value;
              if ( (unsigned __int64)((char *)v27 - (char *)Myfirst - 8) > 0x1F )
                _invalid_parameter_noinfo_noreturn();
            }
            operator delete(Myfirst, v26);
          }
          v28 = m_ptr->__vftable;
          if ( m_ptr->__vftable )
          {
            m_ptr->__vftable = NULL;
            (*((void (__fastcall **)(IUnknown_vtbl *))v28->QueryInterface + 2))(v28);
          }
          return v24;
        }
        v29 = m_ptr;
        string = NULL;
        v30 = v6 | 1;
        v31 = m_ptr;
        if ( m_ptr == (IUnknown *)-8i64 )
          v31 = NULL;
        v32 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, HSTRING *))v31->QueryInterface + 24))(v31->__vftable, &string);
        if ( v32 )
          winrt::impl::throw_hresult(v32);
        *(_QWORD *)&v71[4] = &v81;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu [rsp+168h+var_D8], xmm0
        }
        v33 = (winrt::impl::input_scope *)operator new(0x38ui64);
        v34 = v33;
        *(_QWORD *)&v71[4] = v33;
        if ( v33 )
        {
          v33->m_invalid = 0;
          *(_QWORD *)&v33[16].m_invalid = &winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::hstring,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::hstring>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>>::`vftable';
          *(_QWORD *)&v33[24].m_invalid = &winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::hstring,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::hstring>>>>,winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>::`vftable';
          *(_DWORD *)&v33[32].m_invalid = 1;
          *(_QWORD *)&v33[40].m_invalid = Myfirst;
          *(_QWORD *)&v33[48].m_invalid = Mylast;
        }
        else
        {
          v34 = NULL;
        }
        v35 = (IUnknown *)&v34[16];
        if ( !v34 )
          v35 = NULL;
        v81.m_pair.first.m_ptr = v35;
        v81.m_pair.second = v34;
        v81.m_owned = 1;
        winrt::Microsoft::Xbox::Services::Marketplace::impl___ICatalogServicePublicNonVirtuals<winrt::Microsoft::Xbox::Services::Marketplace::__ICatalogServicePublicNonVirtuals>::GetCatalogItemDetailsAsync((winrt::Microsoft::Xbox::Services::Marketplace::impl___ICatalogServicePublicNonVirtuals<winrt::Microsoft::Xbox::Services::Marketplace::__ICatalogServicePublicNonVirtuals> *)&m_ptr, &v72, &v81);
        v36 = v6 & 0xFFFFFFFC;
        v37 = v30 & 0xFFFFFFFC;
        v38 = string;
        if ( string )
        {
          string = NULL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v38 + 16i64))(v38);
        }
        v73.m_ptr = (IUnknown *)&v71[4];
        if ( v72.m_ptr )
        {
          *(_DWORD *)&v71[8] = 0;
          *(_QWORD *)v71 = v36 | 0x10;
          v39 = v72.m_ptr->QueryInterface(v72.m_ptr, &GUID_00000036_0000_0000_c000_000000000046, (void **)&v71[4]);
          if ( v39 )
            winrt::impl::throw_hresult(v39);
          v36 = v37 & 0xFFFFFFEF;
        }
        else
        {
          *(_QWORD *)&v71[4] = 0i64;
        }
        v40 = v36 | 8;
        v41 = Co_Self();
        if ( !InGameStore_StartAsyncTask(controllerIndexa, v41, INGAMESTORE_TASK_GET_CATALOG_ITEM_DETAILS, (winrt::Windows::Foundation::IAsyncInfo)&v71[4]) )
        {
          v42 = InGameStore_Error(controllerIndexa, INGAMESTORE_ERROR_XB3_GET_CATALOG_ITEM_DETAILS, "task_failed");
          v43 = v72.m_ptr;
          if ( v72.m_ptr )
          {
            v72.m_ptr = NULL;
            v43->Release(v43);
          }
          if ( Myfirst )
          {
            v44 = &Myfirst->m_handle.m_value;
            if ( Myfirst != Mylast )
            {
              do
              {
                if ( *v44 )
                {
                  WindowsDeleteString_0(*v44);
                  *v44 = NULL;
                }
                ++v44;
              }
              while ( v44 != (HSTRING *)Mylast );
            }
            v45 = 8 * (Myend - Myfirst);
            v46 = Myfirst;
            if ( v45 >= 0x1000 )
            {
              v45 += 39i64;
              Myfirst = (winrt::hstring *)Myfirst[-1].m_handle.m_value;
              if ( (unsigned __int64)((char *)v46 - (char *)Myfirst - 8) > 0x1F )
                _invalid_parameter_noinfo_noreturn();
            }
            operator delete(Myfirst, v45);
          }
          v47 = v29->__vftable;
          if ( v29->__vftable )
          {
            v29->__vftable = NULL;
            (*((void (__fastcall **)(IUnknown_vtbl *))v47->QueryInterface + 2))(v47);
          }
          return v42;
        }
        v48 = Co_Yield(1ui64) != 0;
        LODWORD(v73.m_ptr) = 0;
        if ( v72.m_ptr )
        {
          *(_DWORD *)&v71[8] = 0;
          *(_QWORD *)v71 = v40 | 0x40u;
          v49 = v72.m_ptr->QueryInterface(v72.m_ptr, &GUID_00000036_0000_0000_c000_000000000046, (void **)&v71[4]);
          if ( v49 )
            winrt::impl::throw_hresult(v49);
          v40 &= ~0x40u;
          v50 = *(_QWORD *)&v71[4];
        }
        else
        {
          v50 = 0i64;
          *(_QWORD *)&v71[4] = 0i64;
        }
        v6 = v40 | 0x20;
        v51 = v6;
        v52 = (*(__int64 (__fastcall **)(__int64, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> *))(*(_QWORD *)v50 + 64i64))(v50, &v73);
        if ( v52 )
          winrt::impl::throw_hresult(v52);
        v53 = *(_QWORD *)&v71[4];
        if ( *(_QWORD *)&v71[4] )
        {
          *(_QWORD *)&v71[4] = 0i64;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16i64))(v53);
        }
        if ( LODWORD(v73.m_ptr) != -2089484281 )
        {
          if ( !v48 )
          {
            v54 = winrt::Windows::Foundation::impl_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>>>::ErrorCode((winrt::Windows::Foundation::impl_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> > > *)&v72);
            v55 = InGameStore_Error(controllerIndexa, INGAMESTORE_ERROR_XB3_GET_CATALOG_ITEM_DETAILS, "task_failed 0x%08x", v54);
            v56 = v72.m_ptr;
            if ( v72.m_ptr )
            {
              v72.m_ptr = NULL;
              v56->Release(v56);
            }
            if ( Myfirst )
            {
              v57 = &Myfirst->m_handle.m_value;
              if ( Myfirst != Mylast )
              {
                do
                {
                  if ( *v57 )
                  {
                    WindowsDeleteString_0(*v57);
                    *v57 = NULL;
                  }
                  ++v57;
                }
                while ( v57 != (HSTRING *)Mylast );
              }
              v58 = 8 * (Myend - Myfirst);
              v59 = Myfirst;
              if ( v58 >= 0x1000 )
              {
                v58 += 39i64;
                Myfirst = (winrt::hstring *)Myfirst[-1].m_handle.m_value;
                if ( (unsigned __int64)((char *)v59 - (char *)Myfirst - 8) > 0x1F )
                  _invalid_parameter_noinfo_noreturn();
              }
              operator delete(Myfirst, v58);
            }
            v60 = m_ptr->__vftable;
            if ( m_ptr->__vftable )
            {
              m_ptr->__vftable = NULL;
              (*((void (__fastcall **)(IUnknown_vtbl *))v60->QueryInterface + 2))(v60);
            }
            return v55;
          }
          v73.m_ptr = NULL;
          v61 = ((__int64 (__fastcall *)(IUnknown *, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> *))v72.m_ptr->__vftable[2].Release)(v72.m_ptr, &v73);
          if ( v61 )
            winrt::impl::throw_hresult(v61);
          v62 = v79;
          v63 = v79->_Mypair._Myval2._Mylast;
          if ( v79->_Mypair._Myval2._Myend == v63 )
          {
            std::vector<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>>::_Emplace_reallocate<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> const &>(v79, v63, &v73);
            v64 = v73.m_ptr;
          }
          else
          {
            v63->m_ptr = v73.m_ptr;
            v64 = v73.m_ptr;
            if ( v73.m_ptr )
            {
              v73.m_ptr->AddRef(v73.m_ptr);
              v64 = v73.m_ptr;
            }
            ++v62->_Mypair._Myval2._Mylast;
          }
          v6 = v51 & 0xFFFFFF7F;
          if ( v64 )
          {
            v73.m_ptr = NULL;
            v64->Release(v64);
          }
        }
        v65 = &Myfirst->m_handle.m_value;
        if ( Myfirst != Mylast )
        {
          do
          {
            if ( *v65 )
            {
              WindowsDeleteString_0(*v65);
              *v65 = NULL;
            }
            ++v65;
          }
          while ( v65 != (HSTRING *)Mylast );
        }
        Mylast = Myfirst;
        v80._Mypair._Myval2._Mylast = Myfirst;
        v66 = v72.m_ptr;
        if ( v72.m_ptr )
        {
          v72.m_ptr = NULL;
          v66->Release(v66);
        }
        v14 = Myfirst;
        v23 = v75;
      }
      v13 = v23 + 1;
      v15 = v14;
      Catalog = v83;
    }
    if ( Myfirst )
    {
      v67 = &Myfirst->m_handle.m_value;
      if ( Myfirst != v15 )
      {
        do
        {
          if ( *v67 )
          {
            WindowsDeleteString_0(*v67);
            *v67 = NULL;
          }
          ++v67;
        }
        while ( v67 != (HSTRING *)v15 );
      }
      v68 = 8 * (Myend - Myfirst);
      v69 = Myfirst;
      if ( v68 >= 0x1000 )
      {
        v68 += 39i64;
        Myfirst = (winrt::hstring *)Myfirst[-1].m_handle.m_value;
        if ( (unsigned __int64)((char *)v69 - (char *)Myfirst - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(Myfirst, v68);
    }
    v70 = m_ptr->__vftable;
    if ( m_ptr->__vftable )
    {
      m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v70->QueryInterface + 2))(v70);
    }
    return 1;
  }
  else
  {
    v8 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_GET_CATALOG_ITEM_DETAILS, "no_catalog");
    v9 = xb3Context.m_ptr->__vftable;
    if ( xb3Context.m_ptr->__vftable )
    {
      xb3Context.m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v9->QueryInterface + 2))(v9);
    }
    return v8;
  }
}

/*
==============
InGameStore_CoGetInventoryItems
==============
*/
char InGameStore_CoGetInventoryItems(const int controllerIndex, const winrt::Microsoft::Xbox::Services::XboxLiveContext xb3Context, const winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType type, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *const inventoryItemsResult)
{
  bool v8; 
  bool v9; 
  IUnknown_vtbl *v10; 
  InGameStoreTaskID v12; 
  IUnknown *m_ptr; 
  HRESULT v14; 
  IUnknown *v15; 
  HRESULT v16; 
  unsigned __int64 v17; 
  bool v18; 
  IUnknown *v19; 
  IUnknown_vtbl *v20; 
  bool v21; 
  IUnknown *v22; 
  IUnknown_vtbl *v23; 
  HRESULT v24; 
  IUnknown *v25; 
  IUnknown *v26; 
  IUnknown *v27; 
  IUnknown_vtbl *v28; 
  winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> result; 
  IUnknown *v30; 
  winrt::Windows::Foundation::IAsyncInfo asyncInfo; 
  __int64 v32; 
  winrt::Windows::Foundation::IAsyncInfo *p_asyncInfo; 

  v32 = -2i64;
  v8 = 0;
  switch ( type )
  {
    case SaudiArabia:
      v12 = INGAMESTORE_TASK_GET_INVENTORY_ITEMS_GAME_V2;
      v8 = 1;
      break;
    case China:
      v12 = INGAMESTORE_TASK_GET_INVENTORY_ITEMS_GAME_CONTENT;
      break;
    case End:
      v12 = INGAMESTORE_TASK_GET_INVENTORY_ITEMS_GAME_CONSUMABLE;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_xb3.cpp", 67, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType %d", type) )
        __debugbreak();
      v9 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_GET_INVENTORY_ITEMS, "unhandled_type %d", (unsigned int)type);
      v10 = xb3Context.m_ptr->__vftable;
      if ( xb3Context.m_ptr->__vftable )
      {
        xb3Context.m_ptr->__vftable = NULL;
        (*((void (__fastcall **)(IUnknown_vtbl *))v10->QueryInterface + 2))(v10);
      }
      return v9;
  }
  v30 = NULL;
  m_ptr = xb3Context.m_ptr;
  if ( xb3Context.m_ptr == (IUnknown *)-8i64 )
    m_ptr = NULL;
  v14 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, IUnknown **))m_ptr->QueryInterface + 25))(m_ptr->__vftable, &v30);
  if ( v14 )
    winrt::impl::throw_hresult(v14);
  winrt::Microsoft::Xbox::Services::Marketplace::impl___IInventoryServicePublicNonVirtuals<winrt::Microsoft::Xbox::Services::Marketplace::__IInventoryServicePublicNonVirtuals>::GetInventoryItemsAsync((winrt::Microsoft::Xbox::Services::Marketplace::impl___IInventoryServicePublicNonVirtuals<winrt::Microsoft::Xbox::Services::Marketplace::__IInventoryServicePublicNonVirtuals> *)&asyncInfo, &result, type, 1, v8);
  v15 = v30;
  if ( v30 )
  {
    v30 = NULL;
    v15->Release(v15);
  }
  p_asyncInfo = &asyncInfo;
  if ( result.m_ptr )
  {
    asyncInfo.m_ptr = NULL;
    v16 = result.m_ptr->QueryInterface(result.m_ptr, &GUID_00000036_0000_0000_c000_000000000046, (void **)&asyncInfo);
    if ( v16 )
      winrt::impl::throw_hresult(v16);
  }
  else
  {
    asyncInfo.m_ptr = NULL;
  }
  v17 = Co_Self();
  if ( InGameStore_StartAsyncTask(controllerIndex, v17, v12, (winrt::Windows::Foundation::IAsyncInfo)&asyncInfo) )
  {
    if ( Co_Yield(1ui64) )
    {
      v30 = NULL;
      v24 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))result.m_ptr->__vftable[2].Release)(result.m_ptr, &v30);
      if ( v24 )
        winrt::impl::throw_hresult(v24);
      if ( inventoryItemsResult == (winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *const)&v30 )
      {
        v26 = v30;
      }
      else
      {
        v25 = inventoryItemsResult->m_ptr;
        if ( inventoryItemsResult->m_ptr )
        {
          inventoryItemsResult->m_ptr = NULL;
          v25->Release(v25);
        }
        inventoryItemsResult->m_ptr = v30;
        v26 = NULL;
      }
      if ( v26 )
      {
        v30 = NULL;
        v26->Release(v26);
      }
      v27 = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr = NULL;
        v27->Release(v27);
      }
      v28 = xb3Context.m_ptr->__vftable;
      if ( xb3Context.m_ptr->__vftable )
      {
        xb3Context.m_ptr->__vftable = NULL;
        (*((void (__fastcall **)(IUnknown_vtbl *))v28->QueryInterface + 2))(v28);
      }
      return 1;
    }
    else
    {
      v21 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_GET_INVENTORY_ITEMS, "task_failed");
      v22 = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr = NULL;
        v22->Release(v22);
      }
      v23 = xb3Context.m_ptr->__vftable;
      if ( xb3Context.m_ptr->__vftable )
      {
        xb3Context.m_ptr->__vftable = NULL;
        (*((void (__fastcall **)(IUnknown_vtbl *))v23->QueryInterface + 2))(v23);
      }
      return v21;
    }
  }
  else
  {
    v18 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_GET_INVENTORY_ITEMS, "task_failed");
    v19 = result.m_ptr;
    if ( result.m_ptr )
    {
      result.m_ptr = NULL;
      v19->Release(v19);
    }
    v20 = xb3Context.m_ptr->__vftable;
    if ( xb3Context.m_ptr->__vftable )
    {
      xb3Context.m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v20->QueryInterface + 2))(v20);
    }
    return v18;
  }
}

/*
==============
InGameStore_CoPlatformDeleteContent
==============
*/
char InGameStore_CoPlatformDeleteContent(const InGameStoreProduct *const product)
{
  return 1;
}

/*
==============
InGameStore_CoPlatformDownloadProduct
==============
*/
char InGameStore_CoPlatformDownloadProduct(const int controllerIndex, const InGameStoreProduct *const product)
{
  bool v4; 
  IUnknown *m_ptr; 
  __int64 v7; 
  HRESULT String_0; 
  IUnknown *v9; 
  winrt::Windows::Foundation::IAsyncInfo *v11; 
  unsigned __int64 v12; 
  bool v13; 
  IUnknown *v14; 
  IUnknown *v15; 
  IUnknown *v16; 
  bool v17; 
  IUnknown *v18; 
  IUnknown *v19; 
  winrt::Windows::Xbox::System::User result; 
  winrt::Windows::Foundation::IUnknown right; 
  winrt::Windows::Foundation::IAsyncAction v22; 
  int v23; 
  void *p_right; 
  __int64 v25; 
  winrt::hstring_view v26; 
  wchar_t WideCharStr[4]; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int16 v36; 

  v25 = -2i64;
  v23 = controllerIndex;
  InGameStore_GetUser(&result, controllerIndex);
  right.m_ptr = NULL;
  if ( winrt::Windows::Foundation::operator==(&result, &right) )
  {
    v4 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_SHOW_DETAILS, "no_user");
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      result.m_ptr = NULL;
      m_ptr->Release(m_ptr);
    }
    return v4;
  }
  else
  {
    *(_QWORD *)WideCharStr = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    v34 = 0i64;
    v35 = 0i64;
    v36 = 0;
    v7 = -1i64;
    MultiByteToWideChar(0xFDE9u, 0, product->skuId, -1, WideCharStr, 37);
    do
      ++v7;
    while ( WideCharStr[v7] );
    right.m_ptr = NULL;
    String_0 = WindowsCreateString_0(WideCharStr, v7, (HSTRING *)&right);
    if ( String_0 )
      winrt::impl::throw_hresult(String_0);
    v9 = right.m_ptr;
    p_right = right.m_ptr;
    v26.m_handle = (HSTRING__ *)right.m_ptr;
    __asm
    {
      vmovups ymm0, [rsp+108h+var_98]
      vmovups [rsp+108h+var_98], ymm0
    }
    winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowDetailsAsync(&v22, &result, &v26);
    if ( v9 )
      WindowsDeleteString_0((HSTRING)v9);
    p_right = &right;
    v11 = winrt::impl::require_one<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::operator winrt::Windows::Foundation::IAsyncInfo((winrt::impl::require_one<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo> *)&v23, (winrt::Windows::Foundation::IAsyncInfo *)&right);
    v12 = Co_Self();
    if ( InGameStore_StartAsyncTask(controllerIndex, v12, INGAMESTORE_TASK_SHOW_DETAILS, (winrt::Windows::Foundation::IAsyncInfo)v11) )
    {
      v16 = v22.m_ptr;
      if ( v22.m_ptr )
      {
        v22.m_ptr = NULL;
        v16->Release(v16);
      }
      if ( Co_Yield(1ui64) )
      {
        v19 = result.m_ptr;
        if ( result.m_ptr )
        {
          result.m_ptr = NULL;
          v19->Release(v19);
        }
        return 1;
      }
      else
      {
        v17 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_SHOW_DETAILS, "task_failed");
        v18 = result.m_ptr;
        if ( result.m_ptr )
        {
          result.m_ptr = NULL;
          v18->Release(v18);
        }
        return v17;
      }
    }
    else
    {
      v13 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_SHOW_DETAILS, "task_failed");
      v14 = v22.m_ptr;
      if ( v22.m_ptr )
      {
        v22.m_ptr = NULL;
        v14->Release(v14);
      }
      v15 = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr = NULL;
        v15->Release(v15);
      }
      return v13;
    }
  }
}

/*
==============
InGameStore_CoPlatformEnumerateContent
==============
*/
unsigned __int64 InGameStore_CoPlatformEnumerateContent()
{
  IUnknown *m_ptr; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *Mylast; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *Myfirst; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage v4; 
  unsigned __int64 v5; 
  InGameStoreUserContext *UserContext; 
  IUnknown *Catalog; 
  int i; 
  __int64 v9; 
  IUnknown *v10; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v11; 
  int v12; 
  IUnknown *v13; 
  HRESULT v14; 
  const wchar_t *StringRawBuffer_0; 
  __int64 v16; 
  __int64 v17; 
  char *v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v23; 
  int v24; 
  HRESULT v25; 
  char v26; 
  char v27[3]; 
  unsigned int v28; 
  winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageManager result; 
  int v30; 
  HSTRING string; 
  winrt::Windows::Foundation::IUnknown right; 
  IUnknown *v33; 
  __int64 v34; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v35; 
  __int64 v36; 
  __int64 v37; 
  char MultiByteStr[8]; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  char v43; 

  v37 = -2i64;
  v28 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)s_enumeratePending, 0, 0) )
    return 1i64;
  right.m_ptr = NULL;
  if ( winrt::Windows::Foundation::operator==(&s_downloadableContentPackageManager, &right) )
  {
    winrt::activate_instance<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageManager,winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageManager>(&result);
    m_ptr = s_downloadableContentPackageManager.m_ptr;
    if ( s_downloadableContentPackageManager.m_ptr )
    {
      s_downloadableContentPackageManager.m_ptr = NULL;
      m_ptr->Release(m_ptr);
    }
    s_downloadableContentPackageManager.m_ptr = result.m_ptr;
    result.m_ptr = NULL;
    s_enumerateStart = CreateEventA(NULL, 0, 0, "InGameStore Enumerate Start");
    s_enumerateThread = CreateThread(NULL, 0i64, InGameStore_EnumerateContentThread, NULL, 4u, NULL);
    ResumeThread(s_enumerateThread);
  }
  Mylast = s_enumeratedPackages._Mypair._Myval2._Mylast;
  Myfirst = s_enumeratedPackages._Mypair._Myval2._Myfirst;
  if ( s_enumeratedPackages._Mypair._Myval2._Myfirst != s_enumeratedPackages._Mypair._Myval2._Mylast )
  {
    do
    {
      v4.m_ptr = Myfirst->m_ptr;
      if ( Myfirst->m_ptr )
      {
        Myfirst->m_ptr = NULL;
        ((void (__fastcall *)(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage))v4.m_ptr->Release)(v4);
      }
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
    Myfirst = s_enumeratedPackages._Mypair._Myval2._Myfirst;
  }
  s_enumeratedPackages._Mypair._Myval2._Mylast = Myfirst;
  _InterlockedExchange((volatile __int32 *)s_enumeratePending, 1);
  SetEvent(s_enumerateStart);
  while ( _InterlockedCompareExchange((volatile signed __int32 *)s_enumeratePending, 0, 0) )
  {
    v5 = Co_Self();
    Co_Schedule(v5, 1ui64);
    if ( !Co_Yield(1ui64) )
      return 0i64;
  }
  UserContext = InGameStore_GetUserContext(-1);
  if ( UserContext )
  {
    if ( UserContext->haveCatalog )
    {
      Catalog = (IUnknown *)InGameStore_GetCatalog(-1);
      result.m_ptr = Catalog;
      if ( Catalog )
      {
        for ( i = 0; ; i = v30 + 1 )
        {
          while ( 1 )
          {
            v30 = i;
            if ( i >= SLODWORD(Catalog[32281].__vftable) )
              return 1i64;
            v9 = (__int64)&Catalog[527 * i];
            v34 = v9;
            v36 = v9;
            if ( !*(_BYTE *)(v9 + 5328) && !*(_BYTE *)(v9 + 5336) )
              break;
LABEL_48:
            i = v30 + 1;
          }
          if ( *(_DWORD *)(v9 + 5332) )
            *(_DWORD *)(v9 + 5332) = 1;
          v10 = (IUnknown *)s_enumeratedPackages._Mypair._Myval2._Myfirst;
          v11 = s_enumeratedPackages._Mypair._Myval2._Mylast;
          v35 = s_enumeratedPackages._Mypair._Myval2._Mylast;
LABEL_25:
          right.m_ptr = v10;
          if ( v10 == (IUnknown *)v11 )
          {
LABEL_47:
            Catalog = result.m_ptr;
            goto LABEL_48;
          }
          *(_QWORD *)MultiByteStr = 0i64;
          v39 = 0i64;
          v40 = 0i64;
          v41 = 0i64;
          v42 = 0;
          v43 = 0;
          string = NULL;
          v12 = v28 | 1;
          v28 |= 1u;
          v13 = v10;
          if ( v10 == (IUnknown *)-8i64 )
            v13 = NULL;
          v33 = v13;
          v14 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, HSTRING *))v13->QueryInterface + 8))(v13->__vftable, &string);
          if ( v14 )
            winrt::impl::throw_hresult(v14);
          StringRawBuffer_0 = WindowsGetStringRawBuffer_0(string, NULL);
          WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 37, NULL, NULL);
          v28 = v12 & 0xFFFFFFFE;
          if ( string )
          {
            WindowsDeleteString_0(string);
            string = NULL;
          }
          v16 = *(_QWORD *)(v9 + 5400);
          v17 = 0x7FFFFFFFi64;
          v18 = MultiByteStr;
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v19 = v16 - (_QWORD)MultiByteStr;
          do
          {
            v20 = (unsigned __int8)v18[v19];
            v21 = (unsigned __int8)*v18++;
            if ( !v17-- )
              break;
            if ( v20 != v21 )
            {
              v23 = v20 + 32;
              if ( (unsigned int)(v20 - 65) > 0x19 )
                v23 = v20;
              v20 = v23;
              v24 = v21 + 32;
              if ( (unsigned int)(v21 - 65) > 0x19 )
                v24 = v21;
              if ( v20 != v24 )
              {
                ++v10;
                goto LABEL_25;
              }
            }
          }
          while ( v20 );
          v27[0] = 0;
          v26 = 0;
          v25 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, char *, char *))v33->QueryInterface + 19))(v33->__vftable, v27, &v26);
          if ( v25 )
            winrt::impl::throw_hresult(v25);
          if ( v26 && !v27[0] )
          {
            *(_DWORD *)(v9 + 5332) = 4;
            goto LABEL_47;
          }
          *(_DWORD *)(v34 + 5332) = 0;
          Catalog = result.m_ptr;
        }
      }
    }
  }
  return 0i64;
}

/*
==============
InGameStore_CoPlatformFetchProducts
==============
*/
bool InGameStore_CoPlatformFetchProducts(const int controllerIndex)
{
  InGameStoreCatalog *Catalog; 
  InGameStoreCatalog *v4; 
  int v6; 
  bool *p_disabled; 
  bool v8; 
  IUnknown *m_ptr; 
  void (__fastcall *const **v12)(); 
  __int64 v13; 
  IUnknown *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  bool v19; 
  _QWORD *v20; 
  IUnknown **v21; 
  IUnknown **i; 
  IUnknown *v23; 
  IUnknown *v24; 
  IUnknown *v25; 
  IUnknown *v26; 
  char *v27; 
  char *v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  char *v31; 
  IUnknown *v33; 
  IUnknown *v34; 
  winrt::Windows::Foundation::IUnknown right; 
  winrt::Microsoft::Xbox::Services::XboxLiveContext v36; 
  winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult v37; 
  winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult v38; 
  winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult inventoryItems; 
  winrt::Windows::Xbox::System::User result; 
  __int128 v41; 
  _BYTE ptr[24]; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  unsigned __int64 handle; 
  unsigned __int64 v46[3]; 
  std::function<unsigned __int64 __cdecl(void)> v47; 
  void (__fastcall *const *_Where)(); 
  void (__fastcall *const **p_Where)(); 
  _BYTE *v51; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 

  v46[2] = -2i64;
  Catalog = InGameStore_GetCatalog(controllerIndex);
  v4 = Catalog;
  if ( !Catalog )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_PRODUCTS, "no_catalog");
  v6 = 0;
  if ( Catalog->productCount > 0 )
  {
    p_disabled = &Catalog->products[0].disabled;
    do
    {
      if ( *(_DWORD *)(p_disabled + 63) == 1 )
        *p_disabled = 1;
      ++v6;
      p_disabled += 4216;
    }
    while ( v6 < v4->productCount );
  }
  InGameStore_GetUser(&result, controllerIndex);
  right.m_ptr = NULL;
  if ( winrt::Windows::Foundation::operator==(&result, &right) )
  {
    v8 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_PRODUCTS, "no_user");
  }
  else
  {
    winrt::Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext(&v36, &result);
    *(_QWORD *)ptr = 0i64;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+190h+ptr+8], xmm0
    }
    inventoryItems.m_ptr = NULL;
    v38.m_ptr = NULL;
    v37.m_ptr = NULL;
    m_ptr = v36.m_ptr;
    right.m_ptr = v36.m_ptr;
    if ( v36.m_ptr )
    {
      v36.m_ptr->AddRef(v36.m_ptr);
      m_ptr = right.m_ptr;
    }
    v46[1] = (unsigned __int64)&right;
    v51 = ptr;
    v52 = (unsigned __int64)m_ptr;
    if ( m_ptr )
      m_ptr->AddRef(m_ptr);
    LODWORD(v53) = controllerIndex;
    *(_QWORD *)&v41 = InGameStore_CoGetCatalogItemDetails;
    *((_QWORD *)&v41 + 1) = &v51;
    _Where = std::_Func_impl_no_alloc__lambda_654db2aa44bd066b669c867d59e344be__unsigned___int64_::_vftable_;
    __asm
    {
      vmovups xmm0, [rsp+190h+var_130]
      vmovups [rbp+90h+var_88], xmm0
    }
    p_Where = &_Where;
    *(_QWORD *)&v41 = &v47;
    v47._Mystorage._Ptrs[7] = NULL;
    v47._Mystorage._Ptrs[7] = (std::_Func_base<unsigned __int64> *)((__int64 (__fastcall *)(void (__fastcall *const **)(), std::function<unsigned __int64 __cdecl(void)> *))std::_Func_impl_no_alloc__lambda_654db2aa44bd066b669c867d59e344be__unsigned___int64_::_vftable_[0])(&_Where, &v47);
    Co_RunInternal(v46, 0x8000, &v47);
    if ( p_Where )
    {
      v12 = &_Where;
      LOBYTE(v12) = p_Where != &_Where;
      (*((void (__fastcall **)(void (__fastcall *const **)(), void (__fastcall *const **)()))*p_Where + 4))(p_Where, v12);
      p_Where = NULL;
    }
    v13 = v52;
    if ( v52 )
    {
      v52 = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
    }
    v14 = right.m_ptr;
    if ( right.m_ptr )
    {
      right.m_ptr = NULL;
      v14->Release(v14);
    }
    right.m_ptr = v36.m_ptr;
    if ( v36.m_ptr )
      v36.m_ptr->AddRef(v36.m_ptr);
    v15 = 4i64;
    Co_Run<32768,bool (*)(int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *),int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *>(&handle, (bool (__fastcall *)(int, winrt::Microsoft::Xbox::Services::XboxLiveContext, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *))InGameStore_CoGetInventoryItems, controllerIndex, (winrt::Microsoft::Xbox::Services::XboxLiveContext)&right, China, &inventoryItems);
    right.m_ptr = v36.m_ptr;
    if ( v36.m_ptr )
      v36.m_ptr->AddRef(v36.m_ptr);
    Co_Run<32768,bool (*)(int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *),int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *>(&v44, (bool (__fastcall *)(int, winrt::Microsoft::Xbox::Services::XboxLiveContext, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *))InGameStore_CoGetInventoryItems, controllerIndex, (winrt::Microsoft::Xbox::Services::XboxLiveContext)&right, SaudiArabia, &v38);
    right.m_ptr = v36.m_ptr;
    if ( v36.m_ptr )
      v36.m_ptr->AddRef(v36.m_ptr);
    Co_Run<32768,bool (*)(int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *),int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *>(&v43, (bool (__fastcall *)(int, winrt::Microsoft::Xbox::Services::XboxLiveContext, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *))InGameStore_CoGetInventoryItems, controllerIndex, (winrt::Microsoft::Xbox::Services::XboxLiveContext)&right, End, &v37);
    v16 = v43;
    v17 = v44;
    v18 = handle;
    v51 = (_BYTE *)Co_Await(v46[0]);
    v52 = Co_Await(v18);
    v53 = Co_Await(v17);
    v54 = Co_Await(v16);
    v19 = 1;
    v20 = &v51;
    do
    {
      v19 = v19 && *v20++;
      --v15;
    }
    while ( v15 );
    if ( v19 )
    {
      v21 = *(IUnknown ***)ptr;
      for ( i = *(IUnknown ***)&ptr[8]; v21 != i; ++v21 )
      {
        v23 = *v21;
        *(_QWORD *)&v41 = v23;
        if ( v23 )
          v23->AddRef(v23);
        right.m_ptr = v23;
        if ( v23 )
          v23->AddRef(v23);
        InGameStore_ProcessCatalogItemDetails(controllerIndex, (const winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>)&right);
        if ( v23 )
          v23->Release(v23);
      }
      InGameStore_ProcessInventoryItems(controllerIndex, &inventoryItems);
      InGameStore_ProcessInventoryItems(controllerIndex, &v38);
      InGameStore_ProcessInventoryItems(controllerIndex, &v37);
      v8 = 1;
    }
    else
    {
      v8 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_PRODUCTS, "tasks_failed");
    }
    v24 = v37.m_ptr;
    if ( v37.m_ptr )
    {
      v37.m_ptr = NULL;
      v24->Release(v24);
    }
    v25 = v38.m_ptr;
    if ( v38.m_ptr )
    {
      v38.m_ptr = NULL;
      v25->Release(v25);
    }
    v26 = inventoryItems.m_ptr;
    if ( inventoryItems.m_ptr )
    {
      inventoryItems.m_ptr = NULL;
      v26->Release(v26);
    }
    v27 = *(char **)ptr;
    if ( *(_QWORD *)ptr )
    {
      v28 = *(char **)&ptr[8];
      if ( *(_QWORD *)ptr != *(_QWORD *)&ptr[8] )
      {
        do
        {
          v29 = *(_QWORD *)v27;
          if ( *(_QWORD *)v27 )
          {
            *(_QWORD *)v27 = 0i64;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
          }
          v27 += 8;
        }
        while ( v27 != v28 );
        v27 = *(char **)ptr;
      }
      v30 = 8 * ((__int64)(*(_QWORD *)&ptr[16] - (_QWORD)v27) >> 3);
      v31 = v27;
      if ( v30 >= 0x1000 )
      {
        v30 += 39i64;
        v27 = (char *)*((_QWORD *)v27 - 1);
        if ( (unsigned __int64)(v31 - v27 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v27, v30);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+190h+ptr], xmm0
      }
      *(_QWORD *)&ptr[16] = 0i64;
    }
    v33 = v36.m_ptr;
    if ( v36.m_ptr )
    {
      v36.m_ptr = NULL;
      v33->Release(v33);
    }
  }
  v34 = result.m_ptr;
  if ( result.m_ptr )
  {
    result.m_ptr = NULL;
    v34->Release(v34);
  }
  return v8;
}

/*
==============
InGameStore_CoPlatformFetchProductsOwnership
==============
*/
_BOOL8 InGameStore_CoPlatformFetchProductsOwnership(const int controllerIndex)
{
  bool v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  bool v5; 
  winrt::Windows::Foundation::IUnknown *p_right; 
  IUnknown *m_ptr; 
  IUnknown *v8; 
  IUnknown *v9; 
  IUnknown *v10; 
  winrt::Windows::Xbox::System::User result; 
  winrt::Windows::Foundation::IUnknown right; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 handle[2]; 
  winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult v17; 
  winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult inventoryItems; 
  winrt::Microsoft::Xbox::Services::XboxLiveContext v19; 

  handle[1] = -2i64;
  InGameStore_GetUser(&result, controllerIndex);
  right.m_ptr = NULL;
  if ( winrt::Windows::Foundation::operator==(&result, &right) )
  {
    v2 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_PRODUCTS_OWNERSHIP, "no_user");
  }
  else
  {
    winrt::Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext(&v19, &result);
    inventoryItems.m_ptr = NULL;
    v17.m_ptr = NULL;
    right.m_ptr = v19.m_ptr;
    if ( v19.m_ptr )
      v19.m_ptr->AddRef(v19.m_ptr);
    Co_Run<32768,bool (*)(int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *),int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *>(handle, (bool (__fastcall *)(int, winrt::Microsoft::Xbox::Services::XboxLiveContext, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *))InGameStore_CoGetInventoryItems, controllerIndex, (winrt::Microsoft::Xbox::Services::XboxLiveContext)&right, China, &inventoryItems);
    right.m_ptr = v19.m_ptr;
    if ( v19.m_ptr )
      v19.m_ptr->AddRef(v19.m_ptr);
    v3 = 2i64;
    Co_Run<32768,bool (*)(int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *),int,winrt::Microsoft::Xbox::Services::XboxLiveContext,enum winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType,winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *>(&v15, (bool (__fastcall *)(int, winrt::Microsoft::Xbox::Services::XboxLiveContext, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *))InGameStore_CoGetInventoryItems, controllerIndex, (winrt::Microsoft::Xbox::Services::XboxLiveContext)&right, SaudiArabia, &v17);
    v4 = v15;
    right.m_ptr = (IUnknown *)Co_Await(handle[0]);
    v14 = Co_Await(v4);
    v5 = 1;
    p_right = &right;
    do
    {
      v5 = v5 && p_right->m_ptr;
      ++p_right;
      --v3;
    }
    while ( v3 );
    if ( v5 )
    {
      InGameStore_ProcessInventoryItems(controllerIndex, &inventoryItems);
      InGameStore_ProcessInventoryItems(controllerIndex, &v17);
      InGameStore_PrintProducts(controllerIndex);
      v2 = 1;
    }
    else
    {
      v2 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_PRODUCTS_OWNERSHIP, "tasks_failed");
    }
    m_ptr = v17.m_ptr;
    if ( v17.m_ptr )
    {
      v17.m_ptr = NULL;
      m_ptr->Release(m_ptr);
    }
    v8 = inventoryItems.m_ptr;
    if ( inventoryItems.m_ptr )
    {
      inventoryItems.m_ptr = NULL;
      v8->Release(v8);
    }
    v9 = v19.m_ptr;
    if ( v19.m_ptr )
    {
      v19.m_ptr = NULL;
      v9->Release(v9);
    }
  }
  v10 = result.m_ptr;
  if ( result.m_ptr )
  {
    result.m_ptr = NULL;
    v10->Release(v10);
  }
  return v2;
}

/*
==============
InGameStore_CoPlatformPurchaseProduct
==============
*/
char InGameStore_CoPlatformPurchaseProduct(const int controllerIndex, const InGameStoreProduct *const product, InGameStorePurchaseType purchaseType, bool *const purchased, bool *const refresh)
{
  bool v8; 
  IUnknown *m_ptr; 
  __int64 v11; 
  HRESULT String_0; 
  IUnknown *v13; 
  winrt::Windows::Foundation::IAsyncInfo *v15; 
  unsigned __int64 v16; 
  bool v17; 
  IUnknown *v18; 
  IUnknown *v19; 
  unsigned __int64 v20; 
  bool v21; 
  IUnknown *v22; 
  bool v23; 
  IUnknown *v24; 
  IUnknown *v25; 
  winrt::Windows::Xbox::System::User result; 
  winrt::Windows::Foundation::IUnknown right; 
  winrt::Windows::Foundation::IAsyncAction v28; 
  int v29; 
  void *p_right; 
  __int64 v31; 
  winrt::hstring_view v32; 
  wchar_t WideCharStr[4096]; 

  v31 = -2i64;
  v29 = controllerIndex;
  *purchased = 0;
  *refresh = 0;
  InGameStore_GetUser(&result, controllerIndex);
  right.m_ptr = NULL;
  if ( winrt::Windows::Foundation::operator==(&result, &right) )
  {
    v8 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_SHOW_PURCHASE, "no_user");
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      result.m_ptr = NULL;
      m_ptr->Release(m_ptr);
    }
    return v8;
  }
  else
  {
    memset_0(WideCharStr, 0, sizeof(WideCharStr));
    MultiByteToWideChar(0xFDE9u, 0, product->signedOffer, 4096, WideCharStr, 4096);
    v11 = -1i64;
    do
      ++v11;
    while ( WideCharStr[v11] );
    right.m_ptr = NULL;
    String_0 = WindowsCreateString_0(WideCharStr, v11, (HSTRING *)&right);
    if ( String_0 )
      winrt::impl::throw_hresult(String_0);
    v13 = right.m_ptr;
    p_right = right.m_ptr;
    v32.m_handle = (HSTRING__ *)right.m_ptr;
    __asm
    {
      vmovups ymm0, [rsp+20C8h+var_2058]
      vmovups [rsp+20C8h+var_2058], ymm0
    }
    winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowPurchaseAsync(&v28, &result, &v32);
    if ( v13 )
      WindowsDeleteString_0((HSTRING)v13);
    p_right = &right;
    v15 = winrt::impl::require_one<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::operator winrt::Windows::Foundation::IAsyncInfo((winrt::impl::require_one<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo> *)&v29, (winrt::Windows::Foundation::IAsyncInfo *)&right);
    v16 = Co_Self();
    if ( InGameStore_StartAsyncTask(controllerIndex, v16, INGAMESTORE_TASK_SHOW_PURCHASE, (winrt::Windows::Foundation::IAsyncInfo)v15) )
    {
      v20 = Co_Yield(1ui64);
      v21 = v20 != 0;
      if ( v20 && winrt::Windows::Foundation::impl_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction>::Status((winrt::Windows::Foundation::impl_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction> *)&v29) == Completed )
      {
        *purchased = 1;
      }
      else if ( winrt::Windows::Foundation::impl_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction>::Status((winrt::Windows::Foundation::impl_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction> *)&v29) == Canceled )
      {
        *purchased = 0;
        v21 = 1;
      }
      v22 = v28.m_ptr;
      if ( v28.m_ptr )
      {
        v28.m_ptr = NULL;
        v22->Release(v22);
      }
      if ( v21 )
      {
        *refresh = *purchased;
        v25 = result.m_ptr;
        if ( result.m_ptr )
        {
          result.m_ptr = NULL;
          v25->Release(v25);
        }
        return 1;
      }
      else
      {
        v23 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_SHOW_PURCHASE, "task_failed");
        v24 = result.m_ptr;
        if ( result.m_ptr )
        {
          result.m_ptr = NULL;
          v24->Release(v24);
        }
        return v23;
      }
    }
    else
    {
      v17 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_XB3_SHOW_PURCHASE, "task_failed");
      v18 = v28.m_ptr;
      if ( v28.m_ptr )
      {
        v28.m_ptr = NULL;
        v18->Release(v18);
      }
      v19 = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr = NULL;
        v19->Release(v19);
      }
      return v17;
    }
  }
}

/*
==============
InGameStore_CoPlatformShowEmptyStoreDialog
==============
*/
char InGameStore_CoPlatformShowEmptyStoreDialog(const int controllerIndex)
{
  return 1;
}

/*
==============
InGameStore_EnumerateContentThread
==============
*/
void __noreturn InGameStore_EnumerateContentThread(void *__formal)
{
  unsigned int v1; 
  unsigned int v2; 
  HRESULT v3; 
  int v4; 
  HRESULT v5; 
  __int64 v6; 
  unsigned int v7; 
  HRESULT v8; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *Myfirst; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *Mylast; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v11; 
  HRESULT v12; 
  int v13; 
  HRESULT v14; 
  PCWSTR StringRawBuffer_0; 
  const wchar_t *v16; 
  PCWSTR v17; 
  PCWSTR v18; 
  const wchar_t *v19; 
  PCWSTR v20; 
  size_t v21; 
  bool v22; 
  IUnknown *m_ptr; 
  IUnknown *v24; 
  __int64 v25; 
  UINT32 v26; 
  winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage v27; 
  HSTRING v28; 
  HSTRING string; 
  __int64 v30[2]; 
  unsigned int v31; 
  int v32; 
  UINT32 length; 

  v30[1] = -2i64;
  v1 = 0;
  while ( 1 )
  {
    WaitForSingleObject(s_enumerateStart, 0xFFFFFFFF);
    v30[0] = 0i64;
    v2 = v1 | 1;
    v31 = v2;
    v3 = s_downloadableContentPackageManager.m_ptr->__vftable[2].QueryInterface(s_downloadableContentPackageManager.m_ptr, (const _GUID *)3, (void **)v30);
    if ( v3 )
      winrt::impl::throw_hresult(v3);
    v4 = 0;
    v32 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30[0] + 56i64))(v30[0], &v32);
    if ( v5 )
      winrt::impl::throw_hresult(v5);
    if ( v32 )
    {
      v6 = 0i64;
      do
      {
        v7 = v2;
        v27.m_ptr = NULL;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *))(*(_QWORD *)v30[0] + 48i64))(v30[0], v6, &v27);
        if ( v8 )
          winrt::impl::throw_hresult(v8);
        v2 = v2 & 0xFFFFFFF9 | 2;
        v31 = v7 & 0xFFFFFFF9 | 2;
        Myfirst = s_enumeratedPackages._Mypair._Myval2._Myfirst;
        Mylast = s_enumeratedPackages._Mypair._Myval2._Mylast;
        if ( s_enumeratedPackages._Mypair._Myval2._Myfirst != s_enumeratedPackages._Mypair._Myval2._Mylast )
        {
          do
          {
            v11 = Myfirst + 1;
            string = NULL;
            if ( Myfirst == (winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)-8i64 )
              Myfirst = NULL;
            v12 = ((__int64 (__fastcall *)(IUnknown *, HSTRING *))Myfirst->m_ptr->__vftable[2].AddRef)(Myfirst->m_ptr, &string);
            if ( v12 )
              winrt::impl::throw_hresult(v12);
            v28 = NULL;
            v13 = v2 | 0x18;
            v14 = ((__int64 (__fastcall *)(IUnknown *, HSTRING *))v27.m_ptr->__vftable[2].AddRef)(v27.m_ptr, &v28);
            if ( v14 )
              winrt::impl::throw_hresult(v14);
            length = 0;
            StringRawBuffer_0 = WindowsGetStringRawBuffer_0(string, &length);
            v16 = &StringRawBuffer_0[length];
            v17 = WindowsGetStringRawBuffer_0(string, NULL);
            v26 = 0;
            v18 = WindowsGetStringRawBuffer_0(v28, &v26);
            v19 = &v18[v26];
            v20 = WindowsGetStringRawBuffer_0(v28, NULL);
            v21 = (char *)v19 - (char *)v20;
            v22 = ((v21 ^ ((char *)v16 - (char *)v17)) & 0xFFFFFFFFFFFFFFFEui64) == 0 && memcmp_0(v20, v17, v21) == 0;
            if ( v28 )
            {
              WindowsDeleteString_0(v28);
              v28 = NULL;
            }
            v2 = v13 & 0xFFFFFFE7;
            v31 = v2;
            if ( string )
            {
              WindowsDeleteString_0(string);
              string = NULL;
            }
            if ( v22 )
              goto LABEL_27;
            Myfirst = v11;
          }
          while ( v11 != Mylast );
          Mylast = s_enumeratedPackages._Mypair._Myval2._Mylast;
        }
        if ( s_enumeratedPackages._Mypair._Myval2._Myend == Mylast )
        {
          std::vector<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::_Emplace_reallocate<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const &>(&s_enumeratedPackages, Mylast, &v27);
        }
        else
        {
          m_ptr = v27.m_ptr;
          Mylast->m_ptr = v27.m_ptr;
          if ( m_ptr )
            m_ptr->AddRef(m_ptr);
          ++s_enumeratedPackages._Mypair._Myval2._Mylast;
        }
LABEL_27:
        v24 = v27.m_ptr;
        if ( v27.m_ptr )
        {
          v27.m_ptr = NULL;
          v24->Release(v24);
        }
        v6 = (unsigned int)++v4;
      }
      while ( v4 != v32 );
    }
    _InterlockedExchange((volatile __int32 *)s_enumeratePending, 0);
    v1 = v31 & 0xFFFFFFFE;
    v25 = v30[0];
    if ( v30[0] )
    {
      v30[0] = 0i64;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 16i64))(v25, v6);
    }
  }
}

/*
==============
InGameStore_PlatformInit
==============
*/
void InGameStore_PlatformInit(void)
{
  ;
}

/*
==============
InGameStore_PlatformShutdown
==============
*/
void InGameStore_PlatformShutdown(void)
{
  ;
}

/*
==============
InGameStore_ProcessCatalogItemDetails
==============
*/
void InGameStore_ProcessCatalogItemDetails(const int controllerIndex, const winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails> catalogItemDetails)
{
  IUnknown *m_ptr; 
  unsigned int v4; 
  InGameStoreCatalog *Catalog; 
  IUnknown_vtbl *v6; 
  IUnknown *v7; 
  IUnknown_vtbl *v8; 
  int v9; 
  char *lpMultiByteStr; 
  __int64 v11; 
  int v12; 
  HRESULT v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  HRESULT v17; 
  unsigned int v18; 
  HRESULT v19; 
  const wchar_t *StringRawBuffer_0; 
  __int64 v21; 
  __int64 v22; 
  char *v23; 
  __int64 v24; 
  char v25; 
  char v26; 
  winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemAvailability> *v28; 
  HRESULT v29; 
  char v30; 
  IUnknown *v31; 
  __int64 v32; 
  int v33; 
  HRESULT v34; 
  int v35; 
  HRESULT v36; 
  int v37; 
  HRESULT v38; 
  const wchar_t *v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int v42; 
  HSTRING v43; 
  int v44; 
  HRESULT v45; 
  int v46; 
  HRESULT v47; 
  int v48; 
  HRESULT v49; 
  const wchar_t *v50; 
  unsigned int v51; 
  __int64 v52; 
  HSTRING v53; 
  __int64 v54; 
  IUnknown *v55; 
  IUnknown_vtbl *v56; 
  int v57; 
  HSTRING string; 
  __int64 v59; 
  int v60; 
  winrt::Windows::Xbox::System::User result; 
  HSTRING v62; 
  __int64 v63; 
  HSTRING v64; 
  __int64 v65; 
  InGameStoreCatalog *v66; 
  winrt::Windows::Foundation::IUnknown right; 
  IUnknown *v68; 
  __int64 v69; 
  IUnknown *v70; 
  char MultiByteStr[8]; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  int v75; 
  char v76; 

  v69 = -2i64;
  m_ptr = catalogItemDetails.m_ptr;
  v68 = catalogItemDetails.m_ptr;
  v70 = catalogItemDetails.m_ptr;
  v4 = 0;
  v57 = 0;
  Catalog = InGameStore_GetCatalog(controllerIndex);
  v66 = Catalog;
  if ( Catalog )
  {
    InGameStore_GetUser(&result, controllerIndex);
    right.m_ptr = NULL;
    if ( winrt::Windows::Foundation::operator==(&result, &right) )
    {
      v7 = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr = NULL;
        v7->Release(v7);
      }
      v8 = m_ptr->__vftable;
      if ( m_ptr->__vftable )
      {
        m_ptr->__vftable = NULL;
        (*((void (__fastcall **)(IUnknown_vtbl *))v8->QueryInterface + 2))(v8);
      }
    }
    else
    {
      v9 = 0;
      v60 = 0;
      if ( Catalog->productCount > 0 )
      {
        lpMultiByteStr = Catalog->products[0].signedOffer;
        v11 = (__int64)v66;
        do
        {
          if ( *((_DWORD *)lpMultiByteStr - 4) == 1 )
          {
            v12 = 0;
            v57 = 0;
            v13 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, int *))m_ptr->QueryInterface + 7))(m_ptr->__vftable, &v57);
            if ( v13 )
              winrt::impl::throw_hresult(v13);
            v14 = v57;
            if ( v57 )
            {
              v15 = 0i64;
              while ( 1 )
              {
                v59 = 0i64;
                v16 = v4 | 4;
                v57 = v16;
                v17 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, __int64, __int64 *))m_ptr->QueryInterface + 6))(m_ptr->__vftable, v15, &v59);
                if ( v17 )
                  winrt::impl::throw_hresult(v17);
                *(_QWORD *)MultiByteStr = 0i64;
                v72 = 0i64;
                v73 = 0i64;
                v74 = 0i64;
                v75 = 0;
                v76 = 0;
                string = NULL;
                v18 = v16 & 0xFFFFFFF1 | 0xA;
                v57 = v18;
                v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v59 + 104i64))(v59, &string);
                if ( v19 )
                  winrt::impl::throw_hresult(v19);
                StringRawBuffer_0 = WindowsGetStringRawBuffer_0(string, NULL);
                WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 37, NULL, NULL);
                v4 = v18 & 0xFFFFFFF7;
                if ( string )
                {
                  WindowsDeleteString_0(string);
                  string = NULL;
                }
                v21 = *((_QWORD *)lpMultiByteStr - 1);
                v22 = 0x7FFFFFFFi64;
                v23 = MultiByteStr;
                if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                v24 = v21 - (_QWORD)MultiByteStr;
                do
                {
                  v25 = v23[v24];
                  v26 = *v23++;
                  if ( !v22-- )
                    break;
                  if ( v25 != v26 )
                    goto LABEL_31;
                }
                while ( v25 );
                v28 = winrt::Microsoft::Xbox::Services::Marketplace::impl___ICatalogItemDetailsPublicNonVirtuals<winrt::Microsoft::Xbox::Services::Marketplace::__ICatalogItemDetailsPublicNonVirtuals>::Availabilities((winrt::Microsoft::Xbox::Services::Marketplace::impl___ICatalogItemDetailsPublicNonVirtuals<winrt::Microsoft::Xbox::Services::Marketplace::__ICatalogItemDetailsPublicNonVirtuals> *)&v60, (winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemAvailability> *)&right);
                v4 |= 1u;
                v57 = v4;
                LODWORD(string) = 0;
                v29 = ((__int64 (__fastcall *)(IUnknown *, HSTRING *))v28->m_ptr->__vftable[2].AddRef)(v28->m_ptr, &string);
                if ( v29 )
                  winrt::impl::throw_hresult(v29);
                if ( (_DWORD)string )
                {
                  v30 = 1;
                  goto LABEL_32;
                }
LABEL_31:
                v30 = 0;
LABEL_32:
                if ( (v4 & 1) != 0 )
                {
                  v4 &= ~1u;
                  v31 = right.m_ptr;
                  if ( right.m_ptr )
                  {
                    right.m_ptr = NULL;
                    v31->Release(v31);
                  }
                }
                if ( v30 )
                  break;
                v32 = v59;
                if ( v59 )
                {
                  v59 = 0i64;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16i64))(v32);
                }
                v15 = (unsigned int)++v12;
                m_ptr = v68;
                if ( v12 == v14 )
                  goto LABEL_61;
              }
              string = NULL;
              v33 = v4 | 0x20;
              v57 = v33;
              v34 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v59 + 144i64))(v59, &string);
              if ( v34 )
                winrt::impl::throw_hresult(v34);
              v63 = 0i64;
              v35 = v33 | 0x40;
              v57 = v35;
              v36 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)string + 48i64))(string, 0i64, &v63);
              if ( v36 )
                winrt::impl::throw_hresult(v36);
              v62 = NULL;
              v37 = v35 | 0x80;
              v57 = v37;
              v38 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v63 + 152i64))(v63, &v62);
              if ( v38 )
                winrt::impl::throw_hresult(v38);
              v39 = WindowsGetStringRawBuffer_0(v62, NULL);
              WideCharToMultiByte(0xFDE9u, 0, v39, -1, lpMultiByteStr, 4096, NULL, NULL);
              if ( v62 )
              {
                WindowsDeleteString_0(v62);
                v62 = NULL;
              }
              v40 = v37 & 0xFFFFFF3F;
              v57 = v40;
              v41 = v63;
              if ( v63 )
              {
                v63 = 0i64;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16i64))(v41);
              }
              v42 = v40 & 0xFFFFFFDF;
              v43 = string;
              if ( string )
              {
                string = NULL;
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16i64))(v43);
              }
              string = NULL;
              v44 = v42 | 0x100;
              v57 = v44;
              v45 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v59 + 144i64))(v59, &string);
              if ( v45 )
                winrt::impl::throw_hresult(v45);
              v65 = 0i64;
              v46 = v44 | 0x200;
              v57 = v46;
              v47 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)string + 48i64))(string, 0i64, &v65);
              if ( v47 )
                winrt::impl::throw_hresult(v47);
              v64 = NULL;
              v48 = v46 | 0x400;
              v57 = v48;
              v49 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v65 + 88i64))(v65, &v64);
              if ( v49 )
                winrt::impl::throw_hresult(v49);
              v50 = WindowsGetStringRawBuffer_0(v64, NULL);
              WideCharToMultiByte(0xFDE9u, 0, v50, -1, lpMultiByteStr - 70, 32, NULL, NULL);
              if ( v64 )
              {
                WindowsDeleteString_0(v64);
                v64 = NULL;
              }
              v51 = v48 & 0xFFFFF9FF;
              v57 = v51;
              v52 = v65;
              if ( v65 )
              {
                v65 = 0i64;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16i64))(v52);
              }
              v4 = v51 & 0xFFFFFEFF;
              v53 = string;
              if ( string )
              {
                string = NULL;
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v53 + 16i64))(v53);
              }
              *(lpMultiByteStr - 79) = 0;
              v54 = v59;
              if ( v59 )
              {
                v59 = 0i64;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16i64))(v54);
              }
              m_ptr = v68;
LABEL_61:
              v9 = v60;
            }
            v11 = (__int64)v66;
          }
          *((_DWORD *)lpMultiByteStr - 19) = 0;
          v60 = ++v9;
          lpMultiByteStr += 4216;
        }
        while ( v9 < *(_DWORD *)(v11 + 258248) );
      }
      v55 = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr = NULL;
        v55->Release(v55);
      }
      v56 = m_ptr->__vftable;
      if ( m_ptr->__vftable )
      {
        m_ptr->__vftable = NULL;
        (*((void (__fastcall **)(IUnknown_vtbl *))v56->QueryInterface + 2))(v56);
      }
    }
  }
  else
  {
    v6 = m_ptr->__vftable;
    if ( m_ptr->__vftable )
    {
      m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v6->QueryInterface + 2))(v6);
    }
  }
}

/*
==============
InGameStore_ProcessInventoryItems
==============
*/
void InGameStore_ProcessInventoryItems(const int controllerIndex, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *const inventoryItems)
{
  InGameStoreCatalog *Catalog; 
  int v5; 
  int *p_productCount; 
  unsigned int v7; 
  int v8; 
  HRESULT v9; 
  int v10; 
  HRESULT v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  HRESULT v15; 
  unsigned int v16; 
  HRESULT v17; 
  const wchar_t *StringRawBuffer_0; 
  const char *skuId; 
  __int64 v20; 
  char *v21; 
  signed __int64 v22; 
  char v23; 
  char v24; 
  HRESULT v26; 
  bool v27; 
  HSTRING v28; 
  HSTRING v29; 
  __int64 v30; 
  IUnknown *m_ptr; 
  HSTRING string; 
  unsigned int v33; 
  HSTRING v34; 
  int v35; 
  __int64 v36; 
  winrt::Windows::Xbox::System::User result; 
  winrt::Windows::Foundation::IUnknown right; 
  winrt::Windows::Xbox::System::User v39; 
  int *v40; 
  __int64 v41; 
  char MultiByteStr[8]; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  char v47; 

  v41 = -2i64;
  v33 = 0;
  Catalog = InGameStore_GetCatalog(controllerIndex);
  if ( Catalog )
  {
    InGameStore_GetUser(&result, controllerIndex);
    right.m_ptr = NULL;
    if ( !winrt::Windows::Foundation::operator==(&result, &right) )
    {
      v5 = 0;
      v35 = 0;
      p_productCount = &Catalog->productCount;
      v40 = &Catalog->productCount;
      if ( Catalog->productCount > 0 )
      {
        if ( inventoryItems == (winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *const)-8i64 )
          inventoryItems = NULL;
        right.m_ptr = (IUnknown *)inventoryItems;
        v7 = 0;
        do
        {
          v36 = 0i64;
          v8 = v7 | 1;
          v33 = v8;
          v9 = ((__int64 (__fastcall *)(IUnknown *, __int64 *))inventoryItems->m_ptr->__vftable[2].QueryInterface)(inventoryItems->m_ptr, &v36);
          if ( v9 )
            winrt::impl::throw_hresult(v9);
          v10 = 0;
          LODWORD(string) = 0;
          v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v36 + 56i64))(v36, &string);
          if ( v11 )
            winrt::impl::throw_hresult(v11);
          v12 = (int)string;
          if ( (_DWORD)string )
          {
            v13 = 0i64;
LABEL_11:
            v34 = NULL;
            v14 = v8 | 4;
            v33 = v14;
            v15 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v36 + 48i64))(v36, v13, &v34);
            if ( v15 )
              winrt::impl::throw_hresult(v15);
            *(_QWORD *)MultiByteStr = 0i64;
            v43 = 0i64;
            v44 = 0i64;
            v45 = 0i64;
            v46 = 0;
            v47 = 0;
            string = NULL;
            v16 = v14 & 0xFFFFFFF1 | 0xA;
            v33 = v16;
            v17 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v34 + 72i64))(v34, &string);
            if ( v17 )
              winrt::impl::throw_hresult(v17);
            StringRawBuffer_0 = WindowsGetStringRawBuffer_0(string, NULL);
            WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 37, NULL, NULL);
            v8 = v16 & 0xFFFFFFF7;
            v33 = v8;
            if ( string )
            {
              WindowsDeleteString_0(string);
              string = NULL;
            }
            skuId = Catalog->products[0].skuId;
            v20 = 0x7FFFFFFFi64;
            v21 = MultiByteStr;
            if ( !skuId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v22 = skuId - MultiByteStr;
            do
            {
              v23 = v21[v22];
              v24 = *v21++;
              if ( !v20-- )
                break;
              if ( v23 != v24 )
              {
                v29 = v34;
                if ( v34 )
                {
                  v34 = NULL;
                  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16i64))(v29);
                }
                v13 = (unsigned int)++v10;
                if ( v10 == v12 )
                {
                  v5 = v35;
                  p_productCount = v40;
                  inventoryItems = (winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *const)right.m_ptr;
                  goto LABEL_37;
                }
                goto LABEL_11;
              }
            }
            while ( v23 );
            LODWORD(string) = 0;
            v26 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v34 + 64i64))(v34, &string);
            if ( v26 )
              winrt::impl::throw_hresult(v26);
            v27 = (_DWORD)string == 5;
            Catalog->products[0].isConsumable = (_DWORD)string == 5;
            if ( !v27 )
            {
              string = v34;
              if ( v34 )
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v34 + 8i64))(v34);
              v39.m_ptr = result.m_ptr;
              if ( result.m_ptr )
                result.m_ptr->AddRef(result.m_ptr);
              if ( InGameStore_UserOwnsInventoryItem((const winrt::Windows::Xbox::System::User)&v39, (const winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem)&string) )
                Catalog->products[0].status = INGAMESTORE_PRODUCT_STATUS_INSTALLED;
            }
            v28 = v34;
            if ( v34 )
            {
              v34 = NULL;
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v28 + 16i64))(v28);
            }
            v5 = v35;
            p_productCount = v40;
            inventoryItems = (winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult *const)right.m_ptr;
          }
LABEL_37:
          v7 = v8 & 0xFFFFFFFE;
          v30 = v36;
          if ( v36 )
          {
            v36 = 0i64;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16i64))(v30);
          }
          v35 = ++v5;
          Catalog = (InGameStoreCatalog *)((char *)Catalog + 4216);
        }
        while ( v5 < *p_productCount );
      }
    }
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      result.m_ptr = NULL;
      m_ptr->Release(m_ptr);
    }
  }
}

/*
==============
InGameStore_ShowStoreIcon
==============
*/
char InGameStore_ShowStoreIcon(bool show, InGameStoreStoreIconPosition position)
{
  return 1;
}

/*
==============
InGameStore_UserOwnsInventoryItem
==============
*/
char InGameStore_UserOwnsInventoryItem(const winrt::Windows::Xbox::System::User user, const winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem item)
{
  IUnknown *m_ptr; 
  HRESULT v5; 
  const wchar_t *StringRawBuffer_0; 
  IUnknown *v7; 
  HRESULT v8; 
  HRESULT v9; 
  const wchar_t *v10; 
  HSTRING v11; 
  HRESULT v12; 
  const wchar_t *v13; 
  IUnknown_vtbl *v14; 
  IUnknown_vtbl *v15; 
  IUnknown_vtbl *v17; 
  IUnknown_vtbl *v18; 
  HSTRING string; 
  __int64 v20; 
  HSTRING v21[4]; 
  char MultiByteStr[48]; 
  char s0[272]; 

  v21[1] = (HSTRING)-2i64;
  v21[2] = (HSTRING)user.m_ptr;
  v21[3] = (HSTRING)item.m_ptr;
  string = NULL;
  LODWORD(v20) = 1;
  m_ptr = user.m_ptr;
  if ( user.m_ptr == (IUnknown *)-8i64 )
    m_ptr = NULL;
  v5 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, HSTRING *))m_ptr->QueryInterface + 15))(m_ptr->__vftable, &string);
  if ( v5 )
    winrt::impl::throw_hresult(v5);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(string, NULL);
  WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 33, NULL, NULL);
  if ( string )
    WindowsDeleteString_0(string);
  string = NULL;
  LODWORD(v20) = 2;
  v7 = item.m_ptr;
  if ( item.m_ptr == (IUnknown *)-8i64 )
    v7 = NULL;
  v8 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, HSTRING *))v7->QueryInterface + 6))(v7->__vftable, &string);
  if ( v8 )
    winrt::impl::throw_hresult(v8);
  v21[0] = NULL;
  LODWORD(v20) = 6;
  v9 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)string + 48i64))(string, v21);
  if ( v9 )
    winrt::impl::throw_hresult(v9);
  v10 = WindowsGetStringRawBuffer_0(v21[0], NULL);
  WideCharToMultiByte(0xFDE9u, 0, v10, -1, s0, 260, NULL, NULL);
  if ( v21[0] )
  {
    WindowsDeleteString_0(v21[0]);
    v21[0] = NULL;
  }
  v11 = string;
  if ( string )
  {
    string = NULL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16i64))(v11);
  }
  if ( I_strstr(s0, MultiByteStr) )
  {
    v17 = user.m_ptr->__vftable;
    if ( user.m_ptr->__vftable )
    {
      user.m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v17->QueryInterface + 2))(v17);
    }
    v18 = item.m_ptr->__vftable;
    if ( item.m_ptr->__vftable )
    {
      item.m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v18->QueryInterface + 2))(v18);
    }
    return 1;
  }
  else
  {
    string = NULL;
    LODWORD(v20) = 8;
    v12 = (*((__int64 (__fastcall **)(IUnknown_vtbl *, HSTRING *))v7->QueryInterface + 9))(v7->__vftable, &string);
    if ( v12 )
      winrt::impl::throw_hresult(v12);
    v13 = WindowsGetStringRawBuffer_0(string, NULL);
    InGameStore_PrintInfo("Ownership of InventoryItem %S ignored, URL does not contain user's own xuid '%s'\n", v13, MultiByteStr);
    if ( string )
      WindowsDeleteString_0(string);
    v14 = user.m_ptr->__vftable;
    if ( user.m_ptr->__vftable )
    {
      user.m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v14->QueryInterface + 2))(v14);
    }
    v15 = item.m_ptr->__vftable;
    if ( item.m_ptr->__vftable )
    {
      item.m_ptr->__vftable = NULL;
      (*((void (__fastcall **)(IUnknown_vtbl *))v15->QueryInterface + 2))(v15);
    }
    return 0;
  }
}

