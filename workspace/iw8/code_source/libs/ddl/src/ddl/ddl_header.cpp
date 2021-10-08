/*
==============
DDL::DDL_Header_GetDecorationName
==============
*/

const char *__fastcall DDL::DDL_Header_GetDecorationName(const DDL::DDL_DECORATION decoration)
{
  return ?DDL_Header_GetDecorationName@DDL@@YAPEBDW4DDL_DECORATION@1@@Z(decoration);
}

/*
==============
DDL::DDL_Header_GetBitSize
==============
*/

int __fastcall DDL::DDL_Header_GetBitSize(const DDLDef *ddlDef)
{
  return ?DDL_Header_GetBitSize@DDL@@YAHPEBUDDLDef@@@Z(ddlDef);
}

/*
==============
DDL::DDL_Header_Init
==============
*/

bool __fastcall DDL::DDL_Header_Init(const DDLDef *ddlDef, const DDLContext *ddlContext)
{
  return ?DDL_Header_Init@DDL@@YA_NPEBUDDLDef@@PEBUDDLContext@@@Z(ddlDef, ddlContext);
}

/*
==============
DDL::DDL_Header_Get
==============
*/

const DDLHeader *__fastcall DDL::DDL_Header_Get(const DDLHeader *result, const void *buff, bool isMinimal)
{
  return ?DDL_Header_Get@DDL@@YA?BUDDLHeader@@PEBX_N@Z(result, buff, isMinimal);
}

/*
==============
DDL::DDL_Header_FlagGet
==============
*/

bool __fastcall DDL::DDL_Header_FlagGet(const DDLContext *ddlContext, DDLFlag flag)
{
  return ?DDL_Header_FlagGet@DDL@@YA_NPEBUDDLContext@@W4DDLFlag@@@Z(ddlContext, flag);
}

/*
==============
DDL::DDL_Header_Write
==============
*/

void __fastcall DDL::DDL_Header_Write(_iobuf *fp, const DDLDef *ddlDef)
{
  ?DDL_Header_Write@DDL@@YAXPEAU_iobuf@@PEBUDDLDef@@@Z(fp, ddlDef);
}

/*
==============
DDL::DDL_Header_GetDecorationMask
==============
*/

unsigned __int8 __fastcall DDL::DDL_Header_GetDecorationMask(const DDL::DDL_DECORATION decoration)
{
  return ?DDL_Header_GetDecorationMask@DDL@@YAEW4DDL_DECORATION@1@@Z(decoration);
}

/*
==============
DDL::DDL_Header_IsDataChecksumValid
==============
*/

bool __fastcall DDL::DDL_Header_IsDataChecksumValid(const void *buff, const DDLDef *def)
{
  return ?DDL_Header_IsDataChecksumValid@DDL@@YA_NPEBXPEBUDDLDef@@@Z(buff, def);
}

/*
==============
DDL::DDL_Header_FlagSet
==============
*/

bool __fastcall DDL::DDL_Header_FlagSet(const DDLContext *ddlContext, const DDLFlag flag, const bool state)
{
  return ?DDL_Header_FlagSet@DDL@@YA_NPEBUDDLContext@@W4DDLFlag@@_N@Z(ddlContext, flag, state);
}

/*
==============
DDL::DDL_Header_UpdateDataChecksum
==============
*/

int __fastcall DDL::DDL_Header_UpdateDataChecksum(const DDLContext *ddlContext)
{
  return ?DDL_Header_UpdateDataChecksum@DDL@@YAHPEBUDDLContext@@@Z(ddlContext);
}

/*
==============
DDL::DDL_Header_FlagGet
==============
*/
bool DDL::DDL_Header_FlagGet(const DDLContext *ddlContext, DDLFlag flag)
{
  const DDLDef *def; 

  return ddlContext && (def = ddlContext->def) != NULL && !def->minimalHeader && ((unsigned __int8)DDL::GetHeaderComponent(ddlContext->buff, 0, DDL_HEADER_FLAGS) & (unsigned __int8)(1 << flag)) != 0;
}

/*
==============
DDL::DDL_Header_FlagSet
==============
*/
char DDL::DDL_Header_FlagSet(const DDLContext *ddlContext, const DDLFlag flag, const bool state)
{
  const DDLDef *def; 
  bool v7; 
  unsigned __int8 HeaderComponent; 
  bool v9; 
  int v10; 

  if ( ddlContext )
  {
    def = ddlContext->def;
    if ( def )
    {
      if ( !def->minimalHeader )
      {
        v7 = 0;
        HeaderComponent = DDL::GetHeaderComponent(ddlContext->buff, 0, DDL_HEADER_FLAGS);
        v9 = DDL::DDL_Header_FlagGet(ddlContext, flag);
        if ( state )
        {
          if ( !v9 )
          {
            v10 = HeaderComponent | (1 << flag);
            return DDL::SetHeaderComponent(ddlContext, DDL_HEADER_FLAGS, (unsigned __int8)v10, v7);
          }
        }
        else if ( v9 )
        {
          v10 = HeaderComponent & ~(1 << flag);
          v7 = flag == DDL_FLAG_DIRTY;
          return DDL::SetHeaderComponent(ddlContext, DDL_HEADER_FLAGS, (unsigned __int8)v10, v7);
        }
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
DDL::DDL_Header_Get
==============
*/
const DDLHeader *DDL::DDL_Header_Get(const DDLHeader *result, const void *buff, bool isMinimal)
{
  unsigned __int8 v6; 
  int v7; 
  DDL::DDLHeaderComponentInfo *v8; 
  unsigned int v9; 
  unsigned __int16 HeaderBits; 
  int v11; 
  DDL::DDLHeaderComponentInfo *v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  int v15; 
  DDL::DDLHeaderComponentInfo *v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  int v19; 
  DDL::DDLHeaderComponentInfo *v20; 
  unsigned int v21; 
  unsigned __int16 v22; 
  int v23; 
  DDL::DDLHeaderComponentInfo *v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  DDL::DDLHeaderComponentInfo *v28; 
  unsigned int v29; 
  unsigned int v30; 
  int v31; 
  DDL::DDLHeaderComponentInfo *v32; 
  unsigned int v33; 

  *(_QWORD *)&result->isMinimal = 0i64;
  result->guid = 0i64;
  *(_QWORD *)&result->version = 0i64;
  *(_QWORD *)&result->checksum = 0i64;
  if ( !buff )
    return result;
  v6 = 0;
  v7 = 0;
  result->isMinimal = isMinimal;
  v8 = DDL::s_ddlHeaderInfo;
  v9 = 0;
  while ( 1 )
  {
    if ( isMinimal && !v8->inMinimalHeader )
      goto LABEL_7;
    if ( v8->component == DDL_HEADER_MAGIC )
      break;
    v7 += v8->bitSize;
LABEL_7:
    ++v9;
    ++v8;
    if ( v9 >= 7 )
    {
      HeaderBits = 0;
      goto LABEL_10;
    }
  }
  HeaderBits = DDL::DDL_Buffer_ReadHeaderBits(buff, v7, DDL::s_ddlHeaderInfo[v9].bitSize);
LABEL_10:
  result->magic = HeaderBits;
  v11 = 0;
  v12 = DDL::s_ddlHeaderInfo;
  v13 = 0;
  while ( 2 )
  {
    if ( isMinimal && !v12->inMinimalHeader )
    {
LABEL_15:
      ++v13;
      ++v12;
      if ( v13 >= 7 )
      {
        v14 = 0;
        goto LABEL_18;
      }
      continue;
    }
    break;
  }
  if ( v12->component != DDL_HEADER_BUILD_ID )
  {
    v11 += v12->bitSize;
    goto LABEL_15;
  }
  v14 = DDL::DDL_Buffer_ReadHeaderBits(buff, v11, DDL::s_ddlHeaderInfo[v13].bitSize);
LABEL_18:
  result->buildId = v14;
  v15 = 0;
  v16 = DDL::s_ddlHeaderInfo;
  v17 = 0;
  while ( 2 )
  {
    if ( isMinimal && !v16->inMinimalHeader )
    {
LABEL_23:
      ++v17;
      ++v16;
      if ( v17 >= 7 )
      {
        v18 = 0i64;
        goto LABEL_26;
      }
      continue;
    }
    break;
  }
  if ( v16->component != DDL_HEADER_GUID )
  {
    v15 += v16->bitSize;
    goto LABEL_23;
  }
  v18 = DDL::DDL_Buffer_ReadHeaderBits(buff, v15, DDL::s_ddlHeaderInfo[v17].bitSize);
LABEL_26:
  result->guid = v18;
  v19 = 0;
  v20 = DDL::s_ddlHeaderInfo;
  v21 = 0;
  while ( 2 )
  {
    if ( isMinimal && !v20->inMinimalHeader )
    {
LABEL_31:
      ++v21;
      ++v20;
      if ( v21 >= 7 )
      {
        v22 = 0;
        goto LABEL_34;
      }
      continue;
    }
    break;
  }
  if ( v20->component != DDL_HEADER_VERSION )
  {
    v19 += v20->bitSize;
    goto LABEL_31;
  }
  v22 = DDL::DDL_Buffer_ReadHeaderBits(buff, v19, DDL::s_ddlHeaderInfo[v21].bitSize);
LABEL_34:
  result->version = v22;
  v23 = 0;
  v24 = DDL::s_ddlHeaderInfo;
  v25 = 0;
  while ( 2 )
  {
    if ( isMinimal && !v24->inMinimalHeader )
    {
LABEL_39:
      ++v25;
      ++v24;
      if ( v25 >= 7 )
      {
        v26 = 0;
        goto LABEL_42;
      }
      continue;
    }
    break;
  }
  if ( v24->component != DDL_HEADER_RESERVED )
  {
    v23 += v24->bitSize;
    goto LABEL_39;
  }
  v26 = DDL::DDL_Buffer_ReadHeaderBits(buff, v23, DDL::s_ddlHeaderInfo[v25].bitSize);
LABEL_42:
  result->reserved = v26;
  v27 = 0;
  v28 = DDL::s_ddlHeaderInfo;
  v29 = 0;
  while ( 2 )
  {
    if ( isMinimal && !v28->inMinimalHeader )
    {
LABEL_47:
      ++v29;
      ++v28;
      if ( v29 >= 7 )
      {
        v30 = 0;
        goto LABEL_50;
      }
      continue;
    }
    break;
  }
  if ( v28->component != DDL_HEADER_CHECKSUM )
  {
    v27 += v28->bitSize;
    goto LABEL_47;
  }
  v30 = DDL::DDL_Buffer_ReadHeaderBits(buff, v27, DDL::s_ddlHeaderInfo[v29].bitSize);
LABEL_50:
  result->checksum = v30;
  v31 = 0;
  v32 = DDL::s_ddlHeaderInfo;
  v33 = 0;
  while ( 2 )
  {
    if ( isMinimal && !v32->inMinimalHeader )
    {
LABEL_55:
      ++v33;
      ++v32;
      if ( v33 >= 7 )
        goto LABEL_58;
      continue;
    }
    break;
  }
  if ( v32->component != DDL_HEADER_FLAGS )
  {
    v31 += v32->bitSize;
    goto LABEL_55;
  }
  v6 = DDL::DDL_Buffer_ReadHeaderBits(buff, v31, DDL::s_ddlHeaderInfo[v33].bitSize);
LABEL_58:
  result->flags = v6;
  return result;
}

/*
==============
DDL::DDL_Header_GetBitSize
==============
*/
__int64 DDL::DDL_Header_GetBitSize(const DDLDef *ddlDef)
{
  bool minimalHeader; 
  __int64 result; 

  minimalHeader = ddlDef->minimalHeader;
  result = 0i64;
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[0].inMinimalHeader )
    result = (unsigned int)DDL::s_ddlHeaderInfo[0].bitSize;
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[1].inMinimalHeader )
    result = (unsigned int)(DDL::s_ddlHeaderInfo[1].bitSize + result);
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[2].inMinimalHeader )
    result = (unsigned int)(DDL::s_ddlHeaderInfo[2].bitSize + result);
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[3].inMinimalHeader )
    result = (unsigned int)(DDL::s_ddlHeaderInfo[3].bitSize + result);
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[4].inMinimalHeader )
    result = (unsigned int)(DDL::s_ddlHeaderInfo[4].bitSize + result);
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[5].inMinimalHeader )
    result = (unsigned int)(DDL::s_ddlHeaderInfo[5].bitSize + result);
  if ( !minimalHeader || DDL::s_ddlHeaderInfo[6].inMinimalHeader )
    return (unsigned int)(DDL::s_ddlHeaderInfo[6].bitSize + result);
  return result;
}

/*
==============
DDL::DDL_Header_GetDecorationMask
==============
*/
__int64 DDL::DDL_Header_GetDecorationMask(const DDL::DDL_DECORATION decoration)
{
  return DDL::s_ddlDecorationMapping[decoration].mask;
}

/*
==============
DDL::DDL_Header_GetDecorationName
==============
*/
const char *DDL::DDL_Header_GetDecorationName(const DDL::DDL_DECORATION decoration)
{
  return DDL::s_ddlDecorationMapping[decoration].name;
}

/*
==============
DDL::DDL_Header_Init
==============
*/
bool DDL::DDL_Header_Init(const DDLDef *ddlDef, const DDLContext *ddlContext)
{
  size_t headerByteSize; 
  unsigned int v6; 

  headerByteSize = ddlDef->headerByteSize;
  if ( (int)headerByteSize > ddlContext->len )
    return 0;
  memset_0(ddlContext->buff, 0, headerByteSize);
  if ( ddlContext->def->minimalHeader )
    return DDL::SetHeaderComponent(ddlContext, DDL_HEADER_VERSION, ddlDef->version, 0);
  DDL::SetHeaderComponent(ddlContext, DDL_HEADER_FLAGS, 0i64, 0);
  DDL::SetHeaderComponent(ddlContext, DDL_HEADER_MAGIC, 0x7376ui64, 0);
  DDL::SetHeaderComponent(ddlContext, DDL_HEADER_BUILD_ID, 7ui64, 0);
  DDL::SetHeaderComponent(ddlContext, DDL_HEADER_VERSION, ddlDef->version, 0);
  DDL::SetHeaderComponent(ddlContext, DDL_HEADER_RESERVED, 0i64, 0);
  DDL::SetHeaderComponent(ddlContext, DDL_HEADER_GUID, ddlDef->guid, 0);
  v6 = DDL::DDL_BlockChecksum32((char *)ddlContext->buff + ddlContext->def->headerByteSize, ddlContext->def->byteSize - ddlContext->def->headerByteSize, 0);
  if ( !DDL::SetHeaderComponent(ddlContext, DDL_HEADER_CHECKSUM, v6, 0) )
    v6 = 0;
  return v6 != 0;
}

/*
==============
DDL::DDL_Header_IsDataChecksumValid
==============
*/
bool DDL::DDL_Header_IsDataChecksumValid(const void *buff, const DDLDef *def)
{
  unsigned int v4; 
  DDL::DDLHeaderComponentInfo *v5; 
  int HeaderBits; 
  int v7; 
  unsigned int v8; 

  v4 = DDL::DDL_BlockChecksum32((char *)buff + def->headerByteSize, def->byteSize - def->headerByteSize, 0);
  v5 = DDL::s_ddlHeaderInfo;
  HeaderBits = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( def->minimalHeader && !v5->inMinimalHeader )
      goto LABEL_6;
    if ( v5->component == DDL_HEADER_CHECKSUM )
      break;
    v7 += v5->bitSize;
LABEL_6:
    ++v8;
    ++v5;
    if ( v8 >= 7 )
      return v4 == HeaderBits;
  }
  HeaderBits = DDL::DDL_Buffer_ReadHeaderBits(buff, v7, DDL::s_ddlHeaderInfo[v8].bitSize);
  return v4 == HeaderBits;
}

/*
==============
DDL::DDL_Header_UpdateDataChecksum
==============
*/
__int64 DDL::DDL_Header_UpdateDataChecksum(const DDLContext *ddlContext)
{
  unsigned int v2; 

  v2 = DDL::DDL_BlockChecksum32((char *)ddlContext->buff + ddlContext->def->headerByteSize, ddlContext->def->byteSize - ddlContext->def->headerByteSize, 0);
  if ( !DDL::SetHeaderComponent(ddlContext, DDL_HEADER_CHECKSUM, v2, 0) )
    return 0;
  return v2;
}

/*
==============
DDL::DDL_Header_Write
==============
*/
void DDL::DDL_Header_Write(_iobuf *fp, const DDLDef *ddlDef)
{
  int *p_bitSize; 
  unsigned int v5; 
  __int64 v6; 
  int v7; 
  const char *v8; 
  __int64 v9; 

  if ( fp )
  {
    p_bitSize = &DDL::s_ddlHeaderInfo[0].bitSize;
    v5 = 0;
    v6 = 7i64;
    do
    {
      if ( !ddlDef->minimalHeader || *((_BYTE *)p_bitSize + 4) )
      {
        v7 = *p_bitSize;
        v8 = DDL::DDL_va("(HEADER) %s", *((const char **)p_bitSize - 1));
        LODWORD(v9) = v7;
        j_fprintf(fp, "%8d,%12d,%5s,%-80s,%12s,%12d\n", v5, (unsigned int)((int)v5 / 8), (const char *)&queryFormat.fmt + 3, v8, (const char *)&queryFormat.fmt + 3, v9);
        v5 += *p_bitSize;
      }
      p_bitSize += 6;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
DDL::GetHeaderComponent
==============
*/
unsigned __int64 DDL::GetHeaderComponent(const void *buff, const bool isMinimal, DDL::DDLHeaderComponent component)
{
  int v4; 
  int v5; 
  DDL::DDLHeaderComponentInfo *i; 

  v4 = 0;
  v5 = 0;
  for ( i = DDL::s_ddlHeaderInfo; ; ++i )
  {
    if ( isMinimal && !i->inMinimalHeader )
      goto LABEL_6;
    if ( i->component == component )
      break;
    v4 += i->bitSize;
LABEL_6:
    if ( (unsigned int)++v5 >= 7 )
      return 0i64;
  }
  return DDL::DDL_Buffer_ReadHeaderBits(buff, v4, DDL::s_ddlHeaderInfo[v5].bitSize);
}

/*
==============
DDL::SetHeaderComponent
==============
*/
bool DDL::SetHeaderComponent(const DDLContext *context, const DDL::DDLHeaderComponent component, const unsigned __int64 val, bool skipDirty)
{
  int v4; 
  int v6; 
  DDL::DDLHeaderComponentInfo *i; 
  __int64 v9; 
  int bitSize; 

  v4 = 0;
  v6 = 0;
  for ( i = DDL::s_ddlHeaderInfo; ; ++i )
  {
    if ( context->def->minimalHeader && !i->inMinimalHeader )
      goto LABEL_6;
    if ( i->component == component )
      break;
    v4 += i->bitSize;
LABEL_6:
    if ( (unsigned int)++v6 >= 7 )
      return 0;
  }
  v9 = -1i64;
  bitSize = DDL::s_ddlHeaderInfo[v6].bitSize;
  if ( bitSize < 64 )
    v9 = (1i64 << bitSize) - 1;
  if ( val != (val & v9) )
    return 0;
  return DDL::DDL_Buffer_WriteHeaderBits(context, v4, val, bitSize, skipDirty);
}

