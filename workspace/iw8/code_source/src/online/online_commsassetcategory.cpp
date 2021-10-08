/*
==============
CommsAssetCategory::ControllerFrame
==============
*/

void __fastcall CommsAssetCategory::ControllerFrame(CommsAssetCategory *this, const int controllerIndex)
{
  ?ControllerFrame@CommsAssetCategory@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
CommsAssetCategory::Reset
==============
*/

void __fastcall CommsAssetCategory::Reset(CommsAssetCategory *this)
{
  ?Reset@CommsAssetCategory@@QEAAXXZ(this);
}

/*
==============
CommsAssetCategory::AttemptCSVMapping
==============
*/

void __fastcall CommsAssetCategory::AttemptCSVMapping(CommsAssetCategory *this, const int controllerIndex)
{
  ?AttemptCSVMapping@CommsAssetCategory@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
CommsAssetCategory::Init
==============
*/

void __fastcall CommsAssetCategory::Init(CommsAssetCategory *this, const CommsAssetCategoryType categoryType)
{
  ?Init@CommsAssetCategory@@QEAAXW4CommsAssetCategoryType@@@Z(this, categoryType);
}

/*
==============
CommsAssetCategory::AttemptCSVMapping
==============
*/
void CommsAssetCategory::AttemptCSVMapping(CommsAssetCategory *this, const int controllerIndex)
{
  const char *m_mapingCSVfilename; 
  int v4; 
  StringTable *v5; 
  const char *ColumnValueForRow; 
  const char *v7; 
  __int64 v8; 
  StringTable *tablePtr; 

  this->m_mappingState = SAVING;
  m_mapingCSVfilename = this->m_mapingCSVfilename;
  v4 = 0;
  tablePtr = NULL;
  StringTable_GetAsset(m_mapingCSVfilename, (const StringTable **)&tablePtr);
  v5 = tablePtr;
  if ( tablePtr )
  {
    this->m_mappingState = AWAITING_COMMIT;
    if ( v5->rowCount > 0 )
    {
      while ( this->assetCount < 0x32 )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(v5, v4, 0);
        if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 82, ASSERT_TYPE_ASSERT, "(rawName)", (const char *)&queryFormat, "rawName") )
          __debugbreak();
        v7 = StringTable_GetColumnValueForRow(tablePtr, v4, 1);
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 85, ASSERT_TYPE_ASSERT, "(friendlyName)", (const char *)&queryFormat, "friendlyName") )
          __debugbreak();
        if ( ColumnValueForRow )
        {
          if ( v7 )
          {
            Core_strcpy(this->m_assets[(unsigned __int64)this->assetCount].rawName, 0x20ui64, ColumnValueForRow);
            Core_strcpy(this->m_assets[(unsigned __int64)this->assetCount].friendlyName, 0x20ui64, v7);
            ++this->assetCount;
          }
        }
        v5 = tablePtr;
        if ( ++v4 >= tablePtr->rowCount )
          return;
      }
      LODWORD(v8) = this->m_categoryType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many assets mapped for type %i\n", v8) )
        __debugbreak();
    }
  }
  else
  {
    this->m_mappingState = COMMITTED;
  }
}

/*
==============
CommsAssetCategory::ControllerFrame
==============
*/
void CommsAssetCategory::ControllerFrame(CommsAssetCategory *this, const int controllerIndex)
{
  const char *m_mapingCSVfilename; 
  int v4; 
  StringTable *v5; 
  const char *ColumnValueForRow; 
  const char *v7; 
  __int64 v8; 
  StringTable *tablePtr; 

  if ( this->m_mappingState == MEMCLEAR )
  {
    this->m_mappingState = SAVING;
    m_mapingCSVfilename = this->m_mapingCSVfilename;
    v4 = 0;
    tablePtr = NULL;
    StringTable_GetAsset(m_mapingCSVfilename, (const StringTable **)&tablePtr);
    v5 = tablePtr;
    if ( tablePtr )
    {
      this->m_mappingState = AWAITING_COMMIT;
      if ( v5->rowCount > 0 )
      {
        while ( this->assetCount < 0x32 )
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(v5, v4, 0);
          if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 82, ASSERT_TYPE_ASSERT, "(rawName)", (const char *)&queryFormat, "rawName") )
            __debugbreak();
          v7 = StringTable_GetColumnValueForRow(tablePtr, v4, 1);
          if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 85, ASSERT_TYPE_ASSERT, "(friendlyName)", (const char *)&queryFormat, "friendlyName") )
            __debugbreak();
          if ( ColumnValueForRow )
          {
            if ( v7 )
            {
              Core_strcpy(this->m_assets[(unsigned __int64)this->assetCount].rawName, 0x20ui64, ColumnValueForRow);
              Core_strcpy(this->m_assets[(unsigned __int64)this->assetCount].friendlyName, 0x20ui64, v7);
              ++this->assetCount;
            }
          }
          v5 = tablePtr;
          if ( ++v4 >= tablePtr->rowCount )
            return;
        }
        LODWORD(v8) = this->m_categoryType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many assets mapped for type %i\n", v8) )
          __debugbreak();
      }
    }
    else
    {
      this->m_mappingState = COMMITTED;
    }
  }
}

/*
==============
CommsAssetCategory::Init
==============
*/
void CommsAssetCategory::Init(CommsAssetCategory *this, const CommsAssetCategoryType categoryType)
{
  __int32 v2; 

  this->m_categoryType = categoryType;
  if ( categoryType )
  {
    v2 = categoryType - 1;
    if ( v2 )
    {
      if ( v2 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commsassetcategory.cpp", 39, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid category type") )
        __debugbreak();
    }
    else
    {
      this->m_mapingCSVfilename = "mp/igs_mapping.csv";
    }
  }
  else
  {
    this->m_mapingCSVfilename = "mp/motd_mapping.csv";
  }
}

/*
==============
CommsAssetCategory::Reset
==============
*/
void CommsAssetCategory::Reset(CommsAssetCategory *this)
{
  signed int i; 

  for ( i = 0; (unsigned int)i < 0x32; ++i )
  {
    Core_strcpy(this->m_assets[(__int64)i].rawName, 0x20ui64, (const char *)&queryFormat.fmt + 3);
    Core_strcpy(this->m_assets[(__int64)i].friendlyName, 0x20ui64, (const char *)&queryFormat.fmt + 3);
  }
}

