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
  const dvar_t *v2; 
  const dvar_t *v6; 
  const dvar_t *v10; 
  const dvar_t *v12; 
  float y; 
  float x; 

  v2 = DVARINT_patchCollision_debugDisplayOffsetX;
  if ( !DVARINT_patchCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v6 = DVARINT_patchCollision_debugDisplayOffsetY;
  __asm
  {
    vaddss  xmm0, xmm0, cs:__real@41000000
    vmovss  [rsp+58h+x], xmm0
  }
  if ( !DVARINT_patchCollision_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v10 = DVARBOOL_patchCollision_debugList;
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  [rsp+58h+y], xmm1
  }
  if ( !DVARBOOL_patchCollision_debugList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    PatchCollision_Debug_Draw_List(scrPlace, &x, &y);
  v12 = DVARBOOL_patchCollision_debugDump;
  if ( !DVARBOOL_patchCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_patchCollision_debugDump, 0);
}

/*
==============
PatchCollision_Debug_DrawString
==============
*/

void __fastcall PatchCollision_Debug_DrawString(const ScreenPlacement *const scrPlace, double x, double y, const char *const string)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  char v16; 
  char v17; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
    vcomiss xmm2, cs:__real@44870000
  }
  v11 = DVARBOOL_patchCollision_debugDump;
  if ( !DVARBOOL_patchCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DVARINT_patchCollision_debugDisplayOffsetX;
    __asm { vmovaps [rsp+88h+var_28], xmm7 }
    if ( !DVARINT_patchCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchCollision_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vaddss  xmm7, xmm0, cs:__real@41000000
      vcomiss xmm6, xmm7
    }
    if ( !(v16 | v17) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm8
        vmovss  xmm8, cs:__real@c0c00000
      }
      do
      {
        Com_Printf(14, " ");
        __asm
        {
          vaddss  xmm6, xmm6, xmm8
          vcomiss xmm6, xmm7
        }
      }
      while ( !(v16 | v17) );
      __asm { vmovaps xmm8, [rsp+88h+var_38] }
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
    __asm { vmovaps xmm7, [rsp+88h+var_28] }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
PatchCollision_Debug_Draw_List
==============
*/
void PatchCollision_Debug_Draw_List(const ScreenPlacement *const scrPlace, float *const x, float *const y)
{
  const StringTable *StringTable; 
  const StringTable *v13; 
  int ColumnCount; 
  __int64 v23; 
  const char *v28; 
  int v34; 
  __int64 v36; 
  const char *v37; 
  const char *v38; 
  const char **physicsLibrary; 
  const char **v40; 
  const char *v46; 
  const char *v53; 
  const char *v54; 
  const char *v55; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  const char *v72; 
  char *v73; 
  char *v74; 
  char *v75; 
  char *v76; 
  char *v77; 
  char *v78; 
  const char *ColumnValueForRow; 
  __int64 v80; 
  int RowCount; 

  _RBX = y;
  _R12 = x;
  StringTable = PatchCollision_GetStringTable();
  v13 = StringTable;
  if ( StringTable )
  {
    RowCount = StringTable_GetRowCount(StringTable);
    if ( RowCount )
    {
      ColumnCount = StringTable_GetColumnCount(v13);
      v23 = ColumnCount;
      if ( (unsigned int)(ColumnCount - 8) <= 1 )
      {
        __asm { vmovaps [rsp+158h+var_98], xmm11 }
        v28 = j_va("Patch Collision .csv has %i rows", (unsigned int)RowCount);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r12]; x
        }
        PatchCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v28);
        __asm
        {
          vmovss  xmm11, cs:__real@40c00000
          vaddss  xmm0, xmm11, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [r12]
        }
        v34 = 0;
        __asm
        {
          vaddss  xmm2, xmm1, xmm11
          vmovss  dword ptr [r12], xmm2
        }
        if ( RowCount > 0 )
        {
          v36 = v23;
          __asm
          {
            vmovaps [rsp+158h+var_48], xmm6
            vmovaps [rsp+158h+var_58], xmm7
            vmovaps [rsp+158h+var_68], xmm8
            vmovaps [rsp+158h+var_78], xmm9
            vmovaps [rsp+158h+var_88], xmm10
          }
          v80 = v23;
          do
          {
            ColumnValueForRow = StringTable_GetColumnValueForRow(v13, v34, 0);
            v37 = StringTable_GetColumnValueForRow(v13, v34, 1);
            v73 = (char *)StringTable_GetColumnValueForRow(v13, v34, 2);
            v74 = (char *)StringTable_GetColumnValueForRow(v13, v34, 3);
            v75 = (char *)StringTable_GetColumnValueForRow(v13, v34, 4);
            v76 = (char *)StringTable_GetColumnValueForRow(v13, v34, 5);
            v77 = (char *)StringTable_GetColumnValueForRow(v13, v34, 6);
            v78 = (char *)StringTable_GetColumnValueForRow(v13, v34, 7);
            if ( v36 == 9 )
              v38 = StringTable_GetColumnValueForRow(v13, v34, 8);
            else
              v38 = (char *)&queryFormat.fmt + 3;
            v72 = v38;
            physicsLibrary = (const char **)DB_FindXAssetHeader(ASSET_TYPE_PHYSICSASSET, ColumnValueForRow, 0).physicsLibrary;
            if ( *v37 )
              v40 = (const char **)DB_FindXAssetHeader(ASSET_TYPE_XMODEL_DETAIL_COLLISION, v37, 0).physicsLibrary;
            else
              v40 = NULL;
            *(double *)&_XMM0 = atof(v73);
            __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v74);
            __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v75);
            __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v76);
            __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v77);
            __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
            *(double *)&_XMM0 = atof(v78);
            v46 = "<Not Found>";
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vcvtss2sd xmm2, xmm1, xmm1
              vcvtss2sd xmm1, xmm8, xmm8
              vcvtss2sd xmm3, xmm6, xmm6
              vcvtss2sd xmm0, xmm7, xmm7
              vcvtss2sd xmm4, xmm9, xmm9
              vcvtss2sd xmm5, xmm10, xmm10
            }
            if ( v40 )
              v46 = (char *)&queryFormat.fmt + 3;
            if ( v40 )
              v37 = *v40;
            v53 = "<Not Found>";
            if ( physicsLibrary )
              v53 = (char *)&queryFormat.fmt + 3;
            if ( physicsLibrary )
              v54 = *physicsLibrary;
            else
              v54 = ColumnValueForRow;
            __asm
            {
              vmovsd  [rsp+158h+var_100], xmm2
              vmovsd  [rsp+158h+var_108], xmm3
              vmovsd  [rsp+158h+var_110], xmm0
              vmovsd  [rsp+158h+var_118], xmm1
              vmovsd  [rsp+158h+var_120], xmm4
              vmovsd  [rsp+158h+var_128], xmm5
            }
            v55 = j_va("%i PhysicAsset:%s%s ColLod:%s%s Pos(%.2f,%.2f,%.2f) Rot(%.2f,%.2f,%.2f) %s", (unsigned int)v34, v54, v53, v37, v46, v66, v67, v68, v69, v70, v71, v72);
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]; y
              vmovss  xmm1, dword ptr [r12]; x
            }
            PatchCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v55);
            __asm { vaddss  xmm1, xmm11, dword ptr [rbx] }
            v36 = v80;
            ++v34;
            __asm { vmovss  dword ptr [rbx], xmm1 }
          }
          while ( v34 < RowCount );
          __asm
          {
            vmovss  xmm2, dword ptr [r12]
            vmovaps xmm10, [rsp+158h+var_88]
            vmovaps xmm9, [rsp+158h+var_78]
            vmovaps xmm8, [rsp+158h+var_68]
            vmovaps xmm7, [rsp+158h+var_58]
            vmovaps xmm6, [rsp+158h+var_48]
          }
        }
        __asm
        {
          vsubss  xmm0, xmm2, xmm11
          vmovaps xmm11, [rsp+158h+var_98]
          vmovss  dword ptr [r12], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r12]; x
        }
        PatchCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, "Patch Collision has an incorrect number of columns");
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vaddss  xmm1, xmm0, cs:__real@40c00000
          vmovss  dword ptr [rbx], xmm1
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r12]; x
      }
      PatchCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, "Patch Collision .csv has no rows");
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vaddss  xmm1, xmm0, cs:__real@40c00000
        vmovss  dword ptr [rbx], xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    PatchCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, "No Patch Collision .csv found for this map");
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, cs:__real@40c00000
      vmovss  dword ptr [rbx], xmm1
    }
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

