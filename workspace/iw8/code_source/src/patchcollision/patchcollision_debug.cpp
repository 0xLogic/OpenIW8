/*
==============
PatchCollision_Debug_GetNameForShape
==============
*/

const char *__fastcall PatchCollision_Debug_GetNameForShape(const hknpShape *const shape)
{
  return ?PatchCollision_Debug_GetNameForShape@@YAPEBDQEBVhknpShape@@@Z(shape);
}

/*
==============
PatchCollision_Debug_Draw
==============
*/

void __fastcall PatchCollision_Debug_Draw(const ScreenPlacement *const scrPlace)
{
  ?PatchCollision_Debug_Draw@@YAXQEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
PatchCollision_Debug_Draw
==============
*/
void PatchCollision_Debug_Draw(const ScreenPlacement *const scrPlace)
{
  const dvar_t *v1; 
  float integer; 
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  float y; 
  float x; 

  v1 = DVARINT_patchCollision_debugDisplayOffsetX;
  if ( !DVARINT_patchCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = (float)v1->current.integer;
  v4 = DVARINT_patchCollision_debugDisplayOffsetY;
  x = integer + 8.0;
  if ( !DVARINT_patchCollision_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = (float)v4->current.integer;
  v6 = DVARBOOL_patchCollision_debugList;
  y = v5 + 8.0;
  if ( !DVARBOOL_patchCollision_debugList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    PatchCollision_Debug_Draw_List(scrPlace, &x, &y);
  v7 = DVARBOOL_patchCollision_debugDump;
  if ( !DVARBOOL_patchCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_patchCollision_debugDump, 0);
}

/*
==============
PatchCollision_Debug_DrawString
==============
*/

void __fastcall PatchCollision_Debug_DrawString(const ScreenPlacement *const scrPlace, double x, float y, const char *const string, const vec4_t *setColor)
{
  __int128 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 v10; 

  v6 = *(_OWORD *)&x;
  if ( y > 0.0 && y < 1080.0 )
    CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, 0, 1, 6.0, 0);
  v7 = DVARBOOL_patchCollision_debugDump;
  if ( !DVARBOOL_patchCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = DVARINT_patchCollision_debugDisplayOffsetX;
    if ( !DVARINT_patchCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = (float)v8->current.integer + 8.0;
    if ( *(float *)&x > v9 )
    {
      do
      {
        Com_Printf(14, " ");
        v10 = v6;
        *(float *)&v10 = *(float *)&v6 + -6.0;
        v6 = v10;
      }
      while ( *(float *)&v10 > v9 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
  }
}

/*
==============
PatchCollision_Debug_Draw_List
==============
*/
void PatchCollision_Debug_Draw_List(const ScreenPlacement *const scrPlace, float *const x, float *const y)
{
  const StringTable *StringTable; 
  const StringTable *v7; 
  int ColumnCount; 
  __int64 v9; 
  const char *v10; 
  int v12; 
  float v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  const char **physicsLibrary; 
  const char **v18; 
  const char *v24; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  char *v30; 
  char *v31; 
  char *v32; 
  char *v33; 
  char *v34; 
  char *v35; 
  const char *ColumnValueForRow; 
  __int64 v37; 
  int RowCount; 

  StringTable = PatchCollision_GetStringTable();
  v7 = StringTable;
  if ( StringTable )
  {
    RowCount = StringTable_GetRowCount(StringTable);
    if ( RowCount )
    {
      ColumnCount = StringTable_GetColumnCount(v7);
      v9 = ColumnCount;
      if ( (unsigned int)(ColumnCount - 8) <= 1 )
      {
        v10 = j_va("Patch Collision .csv has %i rows", (unsigned int)RowCount);
        PatchCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v10, &colorWhite);
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *y = *y + 6.0;
        v12 = 0;
        v13 = *x + 6.0;
        *x = v13;
        if ( RowCount > 0 )
        {
          v14 = v9;
          v37 = v9;
          do
          {
            ColumnValueForRow = StringTable_GetColumnValueForRow(v7, v12, 0);
            v15 = StringTable_GetColumnValueForRow(v7, v12, 1);
            v30 = (char *)StringTable_GetColumnValueForRow(v7, v12, 2);
            v31 = (char *)StringTable_GetColumnValueForRow(v7, v12, 3);
            v32 = (char *)StringTable_GetColumnValueForRow(v7, v12, 4);
            v33 = (char *)StringTable_GetColumnValueForRow(v7, v12, 5);
            v34 = (char *)StringTable_GetColumnValueForRow(v7, v12, 6);
            v35 = (char *)StringTable_GetColumnValueForRow(v7, v12, 7);
            if ( v14 == 9 )
              v16 = StringTable_GetColumnValueForRow(v7, v12, 8);
            else
              v16 = (char *)&queryFormat.fmt + 3;
            v29 = v16;
            physicsLibrary = (const char **)DB_FindXAssetHeader(ASSET_TYPE_PHYSICSASSET, ColumnValueForRow, 0).physicsLibrary;
            if ( *v15 )
              v18 = (const char **)DB_FindXAssetHeader(ASSET_TYPE_XMODEL_DETAIL_COLLISION, v15, 0).physicsLibrary;
            else
              v18 = NULL;
            *(double *)&_XMM0 = atof(v30);
            __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v31);
            __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v32);
            __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v33);
            __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v34);
            __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v35);
            v24 = "<Not Found>";
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM7 + 1);
            if ( v18 )
              v24 = (char *)&queryFormat.fmt + 3;
            if ( v18 )
              v15 = *v18;
            v26 = "<Not Found>";
            if ( physicsLibrary )
              v26 = (char *)&queryFormat.fmt + 3;
            if ( physicsLibrary )
              v27 = *physicsLibrary;
            else
              v27 = ColumnValueForRow;
            v28 = j_va("%i PhysicAsset:%s%s ColLod:%s%s Pos(%.2f,%.2f,%.2f) Rot(%.2f,%.2f,%.2f) %s", (unsigned int)v12, v27, v26, v15, v24, *(float *)&_XMM10, *(float *)&_XMM9, *(float *)&_XMM8, *(float *)&_XMM7, *(float *)&_XMM6, *(float *)&_XMM1, v29);
            PatchCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v28, &colorWhite);
            v14 = v37;
            ++v12;
            *y = *y + 6.0;
          }
          while ( v12 < RowCount );
          v13 = *x;
        }
        *x = v13 - 6.0;
      }
      else
      {
        PatchCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, "Patch Collision has an incorrect number of columns", &colorWhite);
        *y = *y + 6.0;
      }
    }
    else
    {
      PatchCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, "Patch Collision .csv has no rows", &colorWhite);
      *y = *y + 6.0;
    }
  }
  else
  {
    PatchCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, "No Patch Collision .csv found for this map", &colorWhite);
    *y = *y + 6.0;
  }
}

/*
==============
PatchCollision_Debug_GetNameForShape
==============
*/
const char *PatchCollision_Debug_GetNameForShape(const hknpShape *const shape)
{
  const char *NameForShape_Internal; 

  DB_LockTableForRead();
  NameForShape_Internal = PatchCollision_Debug_GetNameForShape_Internal(shape);
  DB_UnlockTableForRead();
  return NameForShape_Internal;
}

/*
==============
PatchCollision_Debug_GetNameForShape_Internal
==============
*/
const char *PatchCollision_Debug_GetNameForShape_Internal(const hknpShape *const shape)
{
  const StringTable *StringTable; 
  const StringTable *v3; 
  int RowCount; 
  int v5; 
  const char *ColumnValueForRow; 
  const PhysicsAsset *physicsAsset; 
  const XModelDetailCollision *v8; 
  int v9; 
  unsigned int PhysicsAssetBodyCount; 
  const hknpShape *PhysicsAssetShape; 
  int v12; 
  unsigned int DetailCollisionShapeCount; 
  const hknpShape *DetailCollisionShape; 
  const StringTable *v16; 
  const char *v17; 

  StringTable = PatchCollision_GetStringTable();
  v16 = StringTable;
  v3 = StringTable;
  if ( !StringTable )
    return 0i64;
  RowCount = StringTable_GetRowCount(StringTable);
  if ( !RowCount )
    return 0i64;
  if ( (unsigned int)(StringTable_GetColumnCount(v3) - 8) > 1 )
    return 0i64;
  v5 = 0;
  if ( RowCount <= 0 )
    return 0i64;
  while ( 1 )
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(v3, v5, 0);
    v17 = StringTable_GetColumnValueForRow(v3, v5, 1);
    physicsAsset = DB_FindXAssetHeader(ASSET_TYPE_PHYSICSASSET, ColumnValueForRow, 0).physicsAsset;
    v8 = *v17 ? (const XModelDetailCollision *)DB_FindXAssetHeader(ASSET_TYPE_XMODEL_DETAIL_COLLISION, v17, 0).physicsLibrary : 0i64;
    if ( physicsAsset )
    {
      if ( DB_IsXAssetTransientNonLocking(ASSET_TYPE_PHYSICSASSET, physicsAsset->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision_debug.cpp", 77, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name ))", (const char *)&queryFormat, "!DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name )") )
        __debugbreak();
      v9 = 0;
      PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
      if ( PhysicsAssetBodyCount )
        break;
    }
LABEL_16:
    if ( v8 )
    {
      v12 = 0;
      DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(v8);
      if ( DetailCollisionShapeCount )
      {
        do
        {
          DetailCollisionShape = Physics_GetDetailCollisionShape(v8, v12);
          if ( DetailCollisionShape == shape || Physics_IsChildOfShape(DetailCollisionShape, shape) )
            return v17;
        }
        while ( ++v12 < DetailCollisionShapeCount );
      }
    }
    if ( ++v5 >= RowCount )
      return 0i64;
    v3 = v16;
  }
  while ( 1 )
  {
    PhysicsAssetShape = Physics_GetPhysicsAssetShape(physicsAsset, v9);
    if ( PhysicsAssetShape == shape || Physics_IsChildOfShape(PhysicsAssetShape, shape) )
      return ColumnValueForRow;
    if ( ++v9 >= PhysicsAssetBodyCount )
      goto LABEL_16;
  }
}

