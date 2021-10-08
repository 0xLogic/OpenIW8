/*
==============
Preload_CM_ClientModel
==============
*/

void __fastcall Preload_CM_ClientModel(const DBStreamStart streamStart)
{
  ?Preload_CM_ClientModel@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Preload_CM_ClientModelStream
==============
*/

void __fastcall Preload_CM_ClientModelStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_CM_ClientModelStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Postload_CM_ClientModelStream
==============
*/

void __fastcall Postload_CM_ClientModelStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_CM_ClientModelStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPostload_CM_ClientModel
==============
*/

CM_ClientModel *__fastcall AllocPostload_CM_ClientModel()
{
  return ?AllocPostload_CM_ClientModel@@YAPEAUCM_ClientModel@@XZ();
}

/*
==============
Load_ProcessStructLayout_CM_ClientModel
==============
*/

void Load_ProcessStructLayout_CM_ClientModel(void)
{
  ?Load_ProcessStructLayout_CM_ClientModel@@YAXXZ();
}

/*
==============
Mark_CM_ClientModel
==============
*/

int __fastcall Mark_CM_ClientModel()
{
  return ?Mark_CM_ClientModel@@YAHXZ();
}

/*
==============
AllocLoad_CM_ClientModel
==============
*/

CM_ClientModel *__fastcall AllocLoad_CM_ClientModel()
{
  return ?AllocLoad_CM_ClientModel@@YAPEAUCM_ClientModel@@XZ();
}

/*
==============
Mark_CM_ClientModelArray
==============
*/

int __fastcall Mark_CM_ClientModelArray(const unsigned __int64 count)
{
  return ?Mark_CM_ClientModelArray@@YAH_K@Z(count);
}

/*
==============
Postload_CM_ClientModel
==============
*/

void __fastcall Postload_CM_ClientModel(const DBStreamStart streamStart)
{
  ?Postload_CM_ClientModel@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Load_CM_ClientModel
==============
*/

void __fastcall Load_CM_ClientModel(const DBStreamStart streamStart)
{
  ?Load_CM_ClientModel@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Preload_CM_ClientModelArray
==============
*/

void __fastcall Preload_CM_ClientModelArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_CM_ClientModelArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Postload_CM_ClientModelArray
==============
*/

void __fastcall Postload_CM_ClientModelArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_CM_ClientModelArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPreload_CM_ClientModel
==============
*/

CM_ClientModel *__fastcall AllocPreload_CM_ClientModel()
{
  return ?AllocPreload_CM_ClientModel@@YAPEAUCM_ClientModel@@XZ();
}

/*
==============
Load_CM_ClientModelStream
==============
*/

void __fastcall Load_CM_ClientModelStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_CM_ClientModelStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Load_CM_ClientModelArray
==============
*/

void __fastcall Load_CM_ClientModelArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_CM_ClientModelArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocLoad_CM_ClientModel
==============
*/
CM_ClientModel *AllocLoad_CM_ClientModel()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (CM_ClientModel *)g_streamPosGlob.pos;
}

/*
==============
AllocPostload_CM_ClientModel
==============
*/
CM_ClientModel *AllocPostload_CM_ClientModel()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (CM_ClientModel *)g_streamPosGlob.pos;
}

/*
==============
AllocPreload_CM_ClientModel
==============
*/
CM_ClientModel *AllocPreload_CM_ClientModel()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (CM_ClientModel *)g_streamPosGlob.pos;
}

/*
==============
Load_CM_ClientModel
==============
*/
void Load_CM_ClientModel(const DBStreamStart streamStart)
{
  XModel **v1; 
  scr_string_t *v2; 
  XAnimParts **v3; 
  scr_string_t *v4; 

  Load_Stream(streamStart, varCM_ClientModel, 0x38ui64);
  v1 = varXModelPtr;
  varXModelPtr = (XModel **)&varCM_ClientModel->model;
  Load_XModelPtr(NotAtStart);
  varXModelPtr = v1;
  v2 = varscr_string_t;
  varscr_string_t = &varCM_ClientModel->animationTreeName;
  Load_scr_string_t(NotAtStart);
  varscr_string_t = v2;
  v3 = varXAnimPartsPtr;
  varXAnimPartsPtr = &varCM_ClientModel->animation;
  Load_XAnimPartsPtr(NotAtStart);
  varXAnimPartsPtr = v3;
  v4 = varscr_string_t;
  varscr_string_t = &varCM_ClientModel->name;
  Load_scr_string_t(NotAtStart);
  varscr_string_t = v4;
}

/*
==============
Load_CM_ClientModelArray
==============
*/
void Load_CM_ClientModelArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  CM_ClientModel *i; 
  XModel **v4; 
  scr_string_t *v5; 
  XAnimParts **v6; 
  scr_string_t *v7; 

  v2 = count;
  Load_Stream(streamStart, varCM_ClientModel, 56 * count);
  for ( i = varCM_ClientModel; v2; --v2 )
  {
    varCM_ClientModel = i;
    Load_Stream(NotAtStart, i, 0x38ui64);
    v4 = varXModelPtr;
    varXModelPtr = (XModel **)&varCM_ClientModel->model;
    Load_XModelPtr(NotAtStart);
    varXModelPtr = v4;
    v5 = varscr_string_t;
    varscr_string_t = &varCM_ClientModel->animationTreeName;
    Load_scr_string_t(NotAtStart);
    varscr_string_t = v5;
    v6 = varXAnimPartsPtr;
    varXAnimPartsPtr = &varCM_ClientModel->animation;
    Load_XAnimPartsPtr(NotAtStart);
    varXAnimPartsPtr = v6;
    v7 = varscr_string_t;
    varscr_string_t = &varCM_ClientModel->name;
    Load_scr_string_t(NotAtStart);
    ++i;
    varscr_string_t = v7;
  }
}

/*
==============
Load_CM_ClientModelStream
==============
*/
void Load_CM_ClientModelStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 
  XModel **v4; 
  scr_string_t *v5; 
  XAnimParts **v6; 
  scr_string_t *v7; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_cm_clientmodel_db.h", 419, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varCM_ClientModel;
    do
    {
      Load_Stream(AtStart, pos, 0x38ui64);
      v4 = varXModelPtr;
      varXModelPtr = (XModel **)&varCM_ClientModel->model;
      Load_XModelPtr(NotAtStart);
      varXModelPtr = v4;
      v5 = varscr_string_t;
      varscr_string_t = &varCM_ClientModel->animationTreeName;
      Load_scr_string_t(NotAtStart);
      varscr_string_t = v5;
      v6 = varXAnimPartsPtr;
      varXAnimPartsPtr = &varCM_ClientModel->animation;
      Load_XAnimPartsPtr(NotAtStart);
      varXAnimPartsPtr = v6;
      v7 = varscr_string_t;
      varscr_string_t = &varCM_ClientModel->name;
      Load_scr_string_t(NotAtStart);
      pos = g_streamPosGlob.pos;
      varCM_ClientModel = (CM_ClientModel *)g_streamPosGlob.pos;
      varscr_string_t = v7;
      --count;
    }
    while ( count );
  }
}

/*
==============
Load_ProcessStructLayout_CM_ClientModel
==============
*/
void Load_ProcessStructLayout_CM_ClientModel(void)
{
  if ( Load_RegisterStructSize("CM_ClientModel", 0xE3182875, 0x38ui64, 8ui64) )
  {
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "vec3_t", 0x375A0610u, "spawnOrigin", 0x23420BDBu, 0i64, 0xCui64, 0i64, 0, 0);
    Load_ProcessStructLayout_vec3_t();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "vec3_t", 0x375A0610u, "spawnAngles", 0x43643D55u, 0xCui64, 0xCui64, 0i64, 0, 0);
    Load_ProcessStructLayout_vec3_t();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "XModelPtr", 0xC52046E3, "model", 0xEC5C307F, 0x18ui64, 8ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_XModelPtr();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "scr_string_t", 0x3FD8616Du, "animationTreeName", 0xC3E457C3, 0x20ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_scr_string_t();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "XAnimPartsPtr", 0x5DBC1B5Bu, "animation", 0x4578D4DAu, 0x28ui64, 8ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_XAnimPartsPtr();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "scr_string_t", 0x3FD8616Du, (const char *)&stru_143C9A1A4, 0x58737A51u, 0x30ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_scr_string_t();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "bool", 0x1F095080u, "noPhysics", 0xC1CB0174, 0x34ui64, 1ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_bool();
    Load_RegisterStructMemberSize("CM_ClientModel", 0xE3182875, "bool", 0x1F095080u, "noCloth", 0xA0313CCB, 0x35ui64, 1ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_bool();
  }
}

/*
==============
Mark_CM_ClientModel
==============
*/
_BOOL8 Mark_CM_ClientModel()
{
  XModel **v0; 
  int v1; 
  scr_string_t *v2; 
  int v3; 
  XAnimParts **v4; 
  int v5; 
  scr_string_t *v6; 
  int v7; 

  v0 = marXModelPtr;
  marXModelPtr = (XModel **)&marCM_ClientModel->model;
  v1 = Mark_XModelPtr();
  marXModelPtr = v0;
  if ( !v1 )
    return 0i64;
  v2 = marscr_string_t;
  marscr_string_t = &marCM_ClientModel->animationTreeName;
  v3 = Mark_scr_string_t();
  marscr_string_t = v2;
  if ( !v3 )
    return 0i64;
  v4 = marXAnimPartsPtr;
  marXAnimPartsPtr = &marCM_ClientModel->animation;
  v5 = Mark_XAnimPartsPtr();
  marXAnimPartsPtr = v4;
  if ( !v5 )
    return 0i64;
  v6 = marscr_string_t;
  marscr_string_t = &marCM_ClientModel->name;
  v7 = Mark_scr_string_t();
  marscr_string_t = v6;
  return v7 != 0;
}

/*
==============
Mark_CM_ClientModelArray
==============
*/
__int64 Mark_CM_ClientModelArray(const unsigned __int64 count)
{
  CM_ClientModel *v1; 
  __int64 v2; 
  XModel **v4; 
  int v5; 
  scr_string_t *v6; 
  int v7; 
  XAnimParts **v8; 
  int v9; 
  scr_string_t *v10; 
  int v11; 

  v1 = marCM_ClientModel;
  v2 = 0i64;
  if ( !count )
    return 1i64;
  while ( 1 )
  {
    v4 = marXModelPtr;
    marXModelPtr = (XModel **)&v1->model;
    marCM_ClientModel = v1;
    v5 = Mark_XModelPtr();
    marXModelPtr = v4;
    if ( !v5 )
      break;
    v6 = marscr_string_t;
    marscr_string_t = &marCM_ClientModel->animationTreeName;
    v7 = Mark_scr_string_t();
    marscr_string_t = v6;
    if ( !v7 )
      break;
    v8 = marXAnimPartsPtr;
    marXAnimPartsPtr = &marCM_ClientModel->animation;
    v9 = Mark_XAnimPartsPtr();
    marXAnimPartsPtr = v8;
    if ( !v9 )
      break;
    v10 = marscr_string_t;
    marscr_string_t = &marCM_ClientModel->name;
    v11 = Mark_scr_string_t();
    marscr_string_t = v10;
    if ( !v11 )
      break;
    ++v1;
    if ( ++v2 >= count )
      return 1i64;
  }
  return 0i64;
}

/*
==============
Postload_CM_ClientModel
==============
*/
void Postload_CM_ClientModel(const DBStreamStart streamStart)
{
  XModel **v2; 
  scr_string_t *v3; 
  XAnimParts **v4; 
  scr_string_t *v5; 

  if ( streamStart != (varCM_ClientModel != (CM_ClientModel *)g_streamPosGlob.pos) )
    DB_PatchMem_ValidatePostloadStream(streamStart, varCM_ClientModel, 0x38ui64);
  if ( streamStart != NotAtStart )
    DB_IncStreamPos(0x38ui64);
  v2 = varXModelPtr;
  varXModelPtr = (XModel **)&varCM_ClientModel->model;
  Postload_XModelPtr(NotAtStart);
  varXModelPtr = v2;
  v3 = varscr_string_t;
  varscr_string_t = &varCM_ClientModel->animationTreeName;
  Postload_scr_string_t(NotAtStart);
  varscr_string_t = v3;
  v4 = varXAnimPartsPtr;
  varXAnimPartsPtr = &varCM_ClientModel->animation;
  Postload_XAnimPartsPtr(NotAtStart);
  varXAnimPartsPtr = v4;
  v5 = varscr_string_t;
  varscr_string_t = &varCM_ClientModel->name;
  Postload_scr_string_t(NotAtStart);
  varscr_string_t = v5;
}

/*
==============
Postload_CM_ClientModelArray
==============
*/
void Postload_CM_ClientModelArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  CM_ClientModel *i; 

  v2 = count;
  Postload_Stream_1(streamStart, varCM_ClientModel, 56 * count);
  for ( i = varCM_ClientModel; v2; --v2 )
  {
    varCM_ClientModel = i;
    Postload_CM_ClientModel(NotAtStart);
    ++i;
  }
}

/*
==============
Postload_CM_ClientModelStream
==============
*/
void Postload_CM_ClientModelStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *v3; 
  unsigned __int8 *pos; 
  XModel **v5; 
  scr_string_t *v6; 
  XAnimParts **v7; 
  scr_string_t *v8; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_cm_clientmodel_db.h", 657, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    v3 = (unsigned __int8 *)varCM_ClientModel;
    pos = g_streamPosGlob.pos;
    do
    {
      if ( v3 != pos )
      {
        DB_PatchMem_ValidatePostloadStream(AtStart, v3, 0x38ui64);
        pos = g_streamPosGlob.pos;
      }
      if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
        __debugbreak();
      DB_CheckCanIncStreamPos(0x38ui64);
      v5 = varXModelPtr;
      g_streamPosGlob.pos += 56;
      varXModelPtr = (XModel **)&varCM_ClientModel->model;
      Postload_XModelPtr(NotAtStart);
      varXModelPtr = v5;
      v6 = varscr_string_t;
      varscr_string_t = &varCM_ClientModel->animationTreeName;
      Postload_scr_string_t(NotAtStart);
      varscr_string_t = v6;
      v7 = varXAnimPartsPtr;
      varXAnimPartsPtr = &varCM_ClientModel->animation;
      Postload_XAnimPartsPtr(NotAtStart);
      varXAnimPartsPtr = v7;
      v8 = varscr_string_t;
      varscr_string_t = &varCM_ClientModel->name;
      Postload_scr_string_t(NotAtStart);
      pos = g_streamPosGlob.pos;
      varCM_ClientModel = (CM_ClientModel *)g_streamPosGlob.pos;
      v3 = g_streamPosGlob.pos;
      varscr_string_t = v8;
      --count;
    }
    while ( count );
  }
}

/*
==============
Preload_CM_ClientModel
==============
*/
void Preload_CM_ClientModel(const DBStreamStart streamStart)
{
  XModel **v1; 
  scr_string_t *v2; 
  XAnimParts **v3; 
  scr_string_t *v4; 

  Load_Stream(streamStart, varCM_ClientModel, 0x38ui64);
  v1 = varXModelPtr;
  varXModelPtr = (XModel **)&varCM_ClientModel->model;
  Preload_XModelPtr(NotAtStart);
  varXModelPtr = v1;
  v2 = varscr_string_t;
  varscr_string_t = &varCM_ClientModel->animationTreeName;
  Preload_scr_string_t(NotAtStart);
  varscr_string_t = v2;
  v3 = varXAnimPartsPtr;
  varXAnimPartsPtr = &varCM_ClientModel->animation;
  Preload_XAnimPartsPtr(NotAtStart);
  varXAnimPartsPtr = v3;
  v4 = varscr_string_t;
  varscr_string_t = &varCM_ClientModel->name;
  Preload_scr_string_t(NotAtStart);
  varscr_string_t = v4;
}

/*
==============
Preload_CM_ClientModelArray
==============
*/
void Preload_CM_ClientModelArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  CM_ClientModel *i; 
  XModel **v4; 
  scr_string_t *v5; 
  XAnimParts **v6; 
  scr_string_t *v7; 

  v2 = count;
  Load_Stream(streamStart, varCM_ClientModel, 56 * count);
  for ( i = varCM_ClientModel; v2; --v2 )
  {
    varCM_ClientModel = i;
    Load_Stream(NotAtStart, i, 0x38ui64);
    v4 = varXModelPtr;
    varXModelPtr = (XModel **)&varCM_ClientModel->model;
    Preload_XModelPtr(NotAtStart);
    varXModelPtr = v4;
    v5 = varscr_string_t;
    varscr_string_t = &varCM_ClientModel->animationTreeName;
    Preload_scr_string_t(NotAtStart);
    varscr_string_t = v5;
    v6 = varXAnimPartsPtr;
    varXAnimPartsPtr = &varCM_ClientModel->animation;
    Preload_XAnimPartsPtr(NotAtStart);
    varXAnimPartsPtr = v6;
    v7 = varscr_string_t;
    varscr_string_t = &varCM_ClientModel->name;
    Preload_scr_string_t(NotAtStart);
    ++i;
    varscr_string_t = v7;
  }
}

/*
==============
Preload_CM_ClientModelStream
==============
*/
void Preload_CM_ClientModelStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 
  XModel **v4; 
  scr_string_t *v5; 
  XAnimParts **v6; 
  scr_string_t *v7; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_cm_clientmodel_db.h", 894, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varCM_ClientModel;
    do
    {
      Load_Stream(AtStart, pos, 0x38ui64);
      v4 = varXModelPtr;
      varXModelPtr = (XModel **)&varCM_ClientModel->model;
      Preload_XModelPtr(NotAtStart);
      varXModelPtr = v4;
      v5 = varscr_string_t;
      varscr_string_t = &varCM_ClientModel->animationTreeName;
      Preload_scr_string_t(NotAtStart);
      varscr_string_t = v5;
      v6 = varXAnimPartsPtr;
      varXAnimPartsPtr = &varCM_ClientModel->animation;
      Preload_XAnimPartsPtr(NotAtStart);
      varXAnimPartsPtr = v6;
      v7 = varscr_string_t;
      varscr_string_t = &varCM_ClientModel->name;
      Preload_scr_string_t(NotAtStart);
      pos = g_streamPosGlob.pos;
      varCM_ClientModel = (CM_ClientModel *)g_streamPosGlob.pos;
      varscr_string_t = v7;
      --count;
    }
    while ( count );
  }
}

