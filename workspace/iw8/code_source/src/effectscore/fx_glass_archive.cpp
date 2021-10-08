/*
==============
Glass_Save
==============
*/

void __fastcall Glass_Save(MemoryFile *memFile)
{
  ?Glass_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Glass_Restore
==============
*/

void __fastcall Glass_Restore(MemoryFile *memFile)
{
  ?Glass_Restore@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Glass_Archive
==============
*/

void __fastcall Glass_Archive(MemoryFile *memFile)
{
  ?Glass_Archive@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Glass_Archive
==============
*/
void Glass_Archive(MemoryFile *memFile)
{
  unsigned int pieceWordCount; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int p; 

  if ( MemFile_IsWriting(memFile) )
  {
    if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 84, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
      __debugbreak();
    LOBYTE(p) = 103;
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = 103;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( fxWorld.glassSys.initPieceCount )
    {
      Glass_CompactData(&fxWorld.glassSys);
      p = fxWorld.glassSys.geoDataCount;
      MemFile_WriteData(memFile, 4ui64, &p);
      if ( fxWorld.glassSys.geoDataCount )
        MemFile_WriteData(memFile, 4i64 * fxWorld.glassSys.geoDataCount, fxWorld.glassSys.geoData);
      p = fxWorld.glassSys.activePieceCount;
      MemFile_WriteData(memFile, 4ui64, &p);
      pieceWordCount = fxWorld.glassSys.pieceWordCount;
      v3 = 0;
      if ( fxWorld.glassSys.pieceWordCount )
      {
        v4 = 0i64;
        do
        {
          v5 = fxWorld.glassSys.isInUse[v4];
          while ( v5 )
          {
            v6 = __lzcnt(v5);
            if ( v6 >= 0x20 )
            {
              LODWORD(v8) = 32;
              LODWORD(v7) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v7, v8) )
                __debugbreak();
            }
            v5 &= ~(0x80000000 >> v6);
            Glass_WriteActivePiece(&fxWorld.glassSys, memFile, v6 | (32 * v3));
          }
          ++v3;
          ++v4;
        }
        while ( v3 < pieceWordCount );
      }
    }
  }
  else
  {
    Glass_Restore(memFile);
  }
}

/*
==============
Glass_Restore
==============
*/
void Glass_Restore(MemoryFile *memFile)
{
  MemoryFile *v13; 
  FxGlassPieceDynamics *pieceDynamics; 
  FxGlassPieceState *pieceStates; 
  FxGlassPiecePlace *piecePlaces; 
  char v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned __int64 v22; 
  FxGlassPieceState *v23; 
  FxGlassPieceDynamics *v24; 
  int v25; 
  unsigned int physicsInstance; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int physicsDetailInstance; 
  const HavokPhysicsWorld *v29; 
  signed int v30; 
  MemoryFile *v31; 
  unsigned int v32; 
  hknpBodyId v33; 
  unsigned int v34; 
  unsigned int m_serialAndIndex; 
  int v36; 
  hknpWorld *world; 
  char *fmt; 
  __int64 activate; 
  __int64 v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int p; 
  int v114; 
  int v115; 
  unsigned int v116; 
  int v122; 
  unsigned int v123; 
  MemoryFile *memFilea; 
  __int64 v125; 
  hknpBodyId result; 
  hknpBodyId v127; 
  unsigned __int64 v128; 
  __int64 v129; 
  hkVector4f hkPosition; 
  hkVector4f v131; 
  int v132[4]; 
  int v133[4]; 
  hkQuaternionf hkOrientation; 
  hkQuaternionf v135; 
  char v136; 
  void *retaddr; 

  _RAX = &retaddr;
  v129 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v13 = memFile;
  memFilea = memFile;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Glass_Restore");
  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 120, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  MemFile_ReadData(v13, 1ui64, (char *)&p + 1);
  MemFile_ReadData(v13, 1ui64, &p);
  if ( (_WORD)p != 26471 )
  {
    LODWORD(activate) = (unsigned __int8)p;
    LODWORD(fmt) = BYTE1(p);
    Com_PrintError(14, "Glass_Restore() expected 0x%x and 0x%x to guarantee beginning of glass section, but found 0x%x and 0x%x instead.\n", 103i64, 103i64, fmt, activate);
    Sys_Error((const ObfuscateErrorText)&stru_143FEFB68);
  }
  if ( fxWorld.glassSys.initPieceCount )
  {
    Glass_FreeSystemPieces(&fxWorld.glassSys);
    if ( fxWorld.glassSys.activePieceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 136, ASSERT_TYPE_ASSERT, "(glassSys->activePieceCount == 0)", (const char *)&queryFormat, "glassSys->activePieceCount == 0") )
      __debugbreak();
    if ( !fxWorld.glassSys.pieceDynamics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 140, ASSERT_TYPE_ASSERT, "(glassSys->pieceDynamics)", (const char *)&queryFormat, "glassSys->pieceDynamics") )
      __debugbreak();
    if ( !fxWorld.glassSys.pieceStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 141, ASSERT_TYPE_ASSERT, "(glassSys->pieceStates)", (const char *)&queryFormat, "glassSys->pieceStates") )
      __debugbreak();
    if ( !fxWorld.glassSys.piecePlaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 142, ASSERT_TYPE_ASSERT, "(glassSys->piecePlaces)", (const char *)&queryFormat, "glassSys->piecePlaces") )
      __debugbreak();
    pieceDynamics = fxWorld.glassSys.pieceDynamics;
    *(_QWORD *)fxWorld.glassSys.pieceDynamics = 0xCFCFCFCFCFCFCFCFui64;
    memset(&pieceDynamics->physicsDetailInstance, 207, 32);
    pieceStates = fxWorld.glassSys.pieceStates;
    fxWorld.glassSys.pieceStates->texCoordOrigin = (vec2_t)0xCFCFCFCFCFCFCFCFui64;
    memset(&pieceStates->supportMask, 207, 24);
    piecePlaces = fxWorld.glassSys.piecePlaces;
    *(_QWORD *)fxWorld.glassSys.piecePlaces->frame.quat.v = 0xCFCFCFCFCFCFCFCFui64;
    memset(&piecePlaces->nextFree + 2, 207, 24);
    MemFile_ReadData(v13, 4ui64, &v116);
    fxWorld.glassSys.geoDataCount = v116;
    if ( v116 )
      MemFile_ReadData(v13, 4i64 * v116, fxWorld.glassSys.geoData);
    v17 = 0;
    MemFile_ReadData(v13, 4ui64, &v116);
    v18 = v116;
    if ( v116 > fxWorld.glassSys.pieceLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 159, ASSERT_TYPE_ASSERT, "( activeCount ) <= ( glassSys->pieceLimit )", "%s <= %s\n\t%i, %i", "activeCount", "glassSys->pieceLimit", v116, fxWorld.glassSys.pieceLimit) )
      __debugbreak();
    v19 = 0;
    v123 = 0;
    if ( v18 )
    {
      v20 = 0i64;
      v125 = 0i64;
      __asm { vmovss  xmm9, cs:__real@3d000000 }
      do
      {
        v22 = v19;
        v128 = v19;
        v23 = &fxWorld.glassSys.pieceStates[v20];
        v24 = &fxWorld.glassSys.pieceDynamics[v20];
        MemFile_ReadData(v13, 0x20ui64, &fxWorld.glassSys.piecePlaces[v19]);
        MemFile_ReadData(v13, 0x20ui64, v23);
        MemFile_ReadData(v13, 0x28ui64, v24);
        fxWorld.glassSys.halfThickness[v20] = fxWorld.glassGlob.defs[v23->defIndex].halfThickness;
        if ( v24->physicsInstance == -1 )
        {
          Glass_LinkPiece_Static(&fxWorld.glassSys, v19);
        }
        else
        {
          *(_QWORD *)&v24->physicsInstance = -1i64;
          v24->pendingCreation = 1;
          Glass_CreatePhysics(&fxWorld.glassSys, v19, 1, 1);
          MemFile_ReadData(v13, 4ui64, &v122);
          v25 = v122;
          physicsInstance = v24->physicsInstance;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( physicsInstance == -1 )
          {
            LODWORD(v98) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated )
          {
            LODWORD(v98) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
              __debugbreak();
          }
          if ( physicsInstance == -1 )
          {
            LODWORD(v98) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v98) )
              __debugbreak();
          }
          ConstWorld = HavokPhysics_GetConstWorld(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
          if ( !ConstWorld->world )
          {
            LODWORD(v98) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v98) )
              __debugbreak();
          }
          if ( v25 != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, physicsInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 187, ASSERT_TYPE_ASSERT, "(numBodies == (int)Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ))", (const char *)&queryFormat, "numBodies == (int)Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance )") )
            __debugbreak();
          physicsDetailInstance = v24->physicsDetailInstance;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( physicsDetailInstance == -1 )
          {
            LODWORD(v98) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated )
          {
            LODWORD(v98) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
              __debugbreak();
          }
          if ( physicsDetailInstance == -1 )
          {
            LODWORD(v98) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v98) )
              __debugbreak();
          }
          v29 = HavokPhysics_GetConstWorld(PHYSICS_WORLD_ID_CLIENT0_DETAIL);
          if ( !v29->world )
          {
            LODWORD(v98) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v98) )
              __debugbreak();
          }
          if ( v25 != HavokPhysicsInstanceManager_GetBodyCount(&v29->instanceManager, physicsDetailInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 188, ASSERT_TYPE_ASSERT, "(numBodies == (int)Physics_GetNumRigidBodys( detailWorldId, pieceDynamics->physicsDetailInstance ))", (const char *)&queryFormat, "numBodies == (int)Physics_GetNumRigidBodys( detailWorldId, pieceDynamics->physicsDetailInstance )") )
            __debugbreak();
          LOBYTE(p) = (v25 > 0) | v17;
          v30 = 0;
          if ( v25 > 0 )
          {
            v31 = memFilea;
            do
            {
              v32 = v24->physicsInstance;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v32 == -1 )
              {
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated )
              {
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
                  __debugbreak();
              }
              v33.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v32, v30)->m_serialAndIndex;
              v34 = v24->physicsDetailInstance;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v34 == -1 )
              {
                LODWORD(v98) = 4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated )
              {
                LODWORD(v98) = 4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v127, PHYSICS_WORLD_ID_CLIENT0_DETAIL, v34, v30)->m_serialAndIndex;
              v36 = v33.m_serialAndIndex & 0xFFFFFF;
              if ( (v33.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 195, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
                __debugbreak();
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 196, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( detailBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( detailBodyId )") )
                __debugbreak();
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovaps xmm10, xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovaps xmm11, xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovaps xmm12, xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovaps xmm13, xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovaps xmm14, xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovaps xmm15, xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm
              {
                vmovaps xmm6, xmm0
                vmovss  [rsp+1E0h+var_174], xmm0
              }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovss  [rsp+1E0h+var_188], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovss  [rsp+1E0h+var_170], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovss  [rsp+1E0h+var_17C], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovss  [rsp+1E0h+var_184], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovss  [rsp+1E0h+var_16C], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v31);
              __asm { vmovss  [rsp+1E0h+var_178], xmm0 }
              MemFile_ReadData(v31, 1ui64, (char *)&p + 1);
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v36 == 0xFFFFFF )
              {
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
                  __debugbreak();
              }
              __asm { vmovss  [rsp+1E0h+var_190], xmm10 }
              if ( (v99 & 0x7F800000) == 2139095040 )
                goto LABEL_160;
              __asm { vmovss  [rsp+1E0h+var_190], xmm11 }
              if ( (v100 & 0x7F800000) == 2139095040 )
                goto LABEL_160;
              __asm { vmovss  [rsp+1E0h+var_190], xmm12 }
              if ( (v101 & 0x7F800000) == 2139095040 )
              {
LABEL_160:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
                  __debugbreak();
              }
              __asm { vmovss  [rsp+1E0h+var_190], xmm13 }
              if ( (v102 & 0x7F800000) == 2139095040 )
                goto LABEL_161;
              __asm { vmovss  [rsp+1E0h+var_190], xmm14 }
              if ( (v103 & 0x7F800000) == 2139095040 )
                goto LABEL_161;
              __asm { vmovss  [rsp+1E0h+var_190], xmm15 }
              if ( (v104 & 0x7F800000) == 2139095040 )
                goto LABEL_161;
              __asm { vmovss  [rsp+1E0h+var_190], xmm6 }
              if ( (v105 & 0x7F800000) == 2139095040 )
              {
LABEL_161:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
                  __debugbreak();
              }
              __asm
              {
                vmulss  xmm7, xmm10, xmm9
                vmovss  dword ptr [rbp+0E0h+hkPosition.m_quad], xmm7
                vmulss  xmm8, xmm11, xmm9
                vmovss  dword ptr [rbp+0E0h+hkPosition.m_quad+4], xmm8
                vmulss  xmm9, xmm12, xmm9
                vmovss  dword ptr [rbp+0E0h+hkPosition.m_quad+8], xmm9
                vxorps  xmm0, xmm0, xmm0
                vmovss  dword ptr [rbp+0E0h+hkPosition.m_quad+0Ch], xmm0
                vmovaps xmm6, xmm13
                vinsertps xmm6, xmm6, xmm14, 10h
                vinsertps xmm6, xmm6, xmm15, 20h ; ' '
                vinsertps xmm6, xmm6, [rsp+1E0h+var_174], 30h
                vdpps   xmm0, xmm6, xmm6, 0FFh
                vmovups xmmword ptr [rbp+0E0h+hkOrientation.m_vec.m_quad], xmm0
                vrsqrtps xmm1, xmm0
                vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
                vmulps  xmm0, xmm0, xmm1
                vmulps  xmm1, xmm0, xmm1
                vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
                vsubps  xmm1, xmm0, xmm1
                vmulps  xmm2, xmm1, xmm2
                vmulps  xmm0, xmm6, xmm2
                vmovups xmmword ptr [rbp+0E0h+hkOrientation.m_vec.m_quad], xmm0
              }
              HavokPhysics_WarpRigidBodyTo(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v33, &hkPosition, &hkOrientation, 0, 0);
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
              {
                LODWORD(v98) = 4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
                  __debugbreak();
              }
              __asm { vmovss  [rsp+1E0h+var_190], xmm10 }
              if ( (v106 & 0x7F800000) == 2139095040 )
                goto LABEL_162;
              __asm { vmovss  [rsp+1E0h+var_190], xmm11 }
              if ( (v107 & 0x7F800000) == 2139095040 )
                goto LABEL_162;
              __asm { vmovss  [rsp+1E0h+var_190], xmm12 }
              if ( (v108 & 0x7F800000) == 2139095040 )
              {
LABEL_162:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
                  __debugbreak();
              }
              __asm { vmovss  [rsp+1E0h+var_190], xmm13 }
              if ( (v109 & 0x7F800000) == 2139095040 )
                goto LABEL_163;
              __asm { vmovss  [rsp+1E0h+var_190], xmm14 }
              if ( (v110 & 0x7F800000) == 2139095040 )
                goto LABEL_163;
              __asm { vmovss  [rsp+1E0h+var_190], xmm15 }
              if ( (v111 & 0x7F800000) == 2139095040 )
                goto LABEL_163;
              __asm
              {
                vmovss  xmm0, [rsp+1E0h+var_174]
                vmovss  [rsp+1E0h+var_190], xmm0
              }
              if ( (v112 & 0x7F800000) == 2139095040 )
              {
LABEL_163:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
                  __debugbreak();
              }
              __asm
              {
                vmovss  dword ptr [rbp+0E0h+var_120.m_quad], xmm7
                vmovss  dword ptr [rbp+0E0h+var_120.m_quad+4], xmm8
                vmovss  dword ptr [rbp+0E0h+var_120.m_quad+8], xmm9
                vxorps  xmm12, xmm12, xmm12
                vmovss  dword ptr [rbp+0E0h+var_120.m_quad+0Ch], xmm12
                vdpps   xmm1, xmm6, xmm6, 0FFh
                vmovups xmmword ptr [rbp+0E0h+var_E0.m_vec.m_quad], xmm1
                vrsqrtps xmm2, xmm1
                vmulps  xmm3, xmm2, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
                vmulps  xmm1, xmm2, xmm1
                vmulps  xmm2, xmm1, xmm2
                vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
                vsubps  xmm1, xmm0, xmm2
                vmulps  xmm2, xmm1, xmm3
                vmulps  xmm0, xmm6, xmm2
                vmovups xmmword ptr [rbp+0E0h+var_E0.m_vec.m_quad], xmm0
              }
              HavokPhysics_WarpRigidBodyTo(PHYSICS_WORLD_ID_CLIENT0_DETAIL, (const hknpBodyId)m_serialAndIndex, &v131, &v135, 0, 0);
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v36 == 0xFFFFFF )
              {
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm6, [rsp+1E0h+var_188]
                vmovss  [rsp+1E0h+var_188], xmm6
                vmovss  xmm7, [rsp+1E0h+var_170]
                vmovss  xmm8, [rsp+1E0h+var_17C]
              }
              if ( (v114 & 0x7F800000) == 2139095040 )
                goto LABEL_164;
              __asm { vmovss  [rsp+1E0h+var_188], xmm7 }
              if ( (v114 & 0x7F800000) == 2139095040 )
                goto LABEL_164;
              __asm { vmovss  [rsp+1E0h+var_188], xmm8 }
              if ( (v114 & 0x7F800000) == 2139095040 )
              {
LABEL_164:
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v98) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm9, [rsp+1E0h+var_184]
                vmovss  [rsp+1E0h+var_184], xmm9
                vmovss  xmm10, [rsp+1E0h+var_16C]
                vmovss  xmm11, [rsp+1E0h+var_178]
              }
              if ( (v115 & 0x7F800000) == 2139095040 )
                goto LABEL_165;
              __asm { vmovss  [rsp+1E0h+var_184], xmm10 }
              if ( (v115 & 0x7F800000) == 2139095040 )
                goto LABEL_165;
              __asm { vmovss  [rsp+1E0h+var_184], xmm11 }
              if ( (v115 & 0x7F800000) == 2139095040 )
              {
LABEL_165:
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", v98) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm2, cs:__real@3d000000
                vmulss  xmm0, xmm6, xmm2
                vmovss  [rbp+0E0h+var_100], xmm0
                vmulss  xmm1, xmm7, xmm2
                vmovss  [rbp+0E0h+var_FC], xmm1
                vmulss  xmm0, xmm8, xmm2
                vmovss  [rbp+0E0h+var_F8], xmm0
                vmovss  [rbp+0E0h+var_F4], xmm12
                vmovss  [rbp+0E0h+var_110], xmm9
                vmovss  [rbp+0E0h+var_10C], xmm10
                vmovss  [rbp+0E0h+var_108], xmm11
                vmovss  [rbp+0E0h+var_104], xmm12
              }
              if ( v36 == 0xFFFFFF )
              {
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v98) )
                  __debugbreak();
              }
              world = HavokPhysics_GetMutableWorld(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE)->world;
              if ( !world )
              {
                LODWORD(v98) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", v98) )
                  __debugbreak();
              }
              ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, v33.m_serialAndIndex, v133, v132, 0);
              if ( BYTE1(p) )
                Physics_ActivateBody(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v33.m_serialAndIndex);
              ++v30;
              __asm { vmovss  xmm9, cs:__real@3d000000 }
            }
            while ( v30 < v122 );
            v19 = v123;
            v22 = v128;
          }
          Glass_LinkPiece_Dynamic(&fxWorld.glassSys, v19);
          v13 = memFilea;
          v20 = v125;
          v17 = p;
        }
        fxWorld.glassSys.isInUse[v22 >> 5] |= 0x80000000 >> (v19++ & 0x1F);
        v123 = v19;
        v125 = ++v20;
        v18 = v116;
      }
      while ( v19 < v116 );
      if ( v17 )
      {
        Physics_UpdateBroadphase(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, 1);
        Physics_UpdateBroadphase(PHYSICS_WORLD_ID_CLIENT0_DETAIL, 1);
      }
    }
    for ( ; v19 < fxWorld.glassSys.pieceLimit - 1; ++v19 )
      fxWorld.glassSys.piecePlaces[v19].nextFree = v19 + 1;
    fxWorld.glassSys.piecePlaces[v19].nextFree = 0xFFFF;
    fxWorld.glassSys.activePieceCount = v18;
    fxWorld.glassSys.firstFreePiece = v18;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
Glass_Save
==============
*/
void Glass_Save(MemoryFile *memFile)
{
  unsigned int pieceWordCount; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int p; 

  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 84, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  LOBYTE(p) = 103;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = 103;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( fxWorld.glassSys.initPieceCount )
  {
    Glass_CompactData(&fxWorld.glassSys);
    p = fxWorld.glassSys.geoDataCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( fxWorld.glassSys.geoDataCount )
      MemFile_WriteData(memFile, 4i64 * fxWorld.glassSys.geoDataCount, fxWorld.glassSys.geoData);
    p = fxWorld.glassSys.activePieceCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    pieceWordCount = fxWorld.glassSys.pieceWordCount;
    v3 = 0;
    if ( fxWorld.glassSys.pieceWordCount )
    {
      v4 = 0i64;
      do
      {
        v5 = fxWorld.glassSys.isInUse[v4];
        while ( v5 )
        {
          v6 = __lzcnt(v5);
          if ( v6 >= 0x20 )
          {
            LODWORD(v8) = 32;
            LODWORD(v7) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          v5 &= ~(0x80000000 >> v6);
          Glass_WriteActivePiece(&fxWorld.glassSys, memFile, v6 | (32 * v3));
        }
        ++v3;
        ++v4;
      }
      while ( v3 < pieceWordCount );
    }
  }
}

/*
==============
Glass_WriteActivePiece
==============
*/
void Glass_WriteActivePiece(FxGlassSystem *glassSys, MemoryFile *memFile, unsigned int pieceIndex)
{
  __int64 v5; 
  FxGlassPieceDynamics *v6; 
  FxGlassPieceState *v7; 
  unsigned int physicsInstance; 
  signed int m_serialAndIndex; 
  signed int v10; 
  unsigned int v12; 
  hknpBodyId v13; 
  bool IsRigidBodyActive; 
  __int64 v22; 
  char v23[8]; 
  hknpBodyId p; 
  int v25[4]; 
  int v26[4]; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec3_t position; 
  vec4_t orientation; 

  v5 = pieceIndex;
  v6 = &glassSys->pieceDynamics[pieceIndex];
  v7 = &glassSys->pieceStates[v5];
  MemFile_WriteData(memFile, 0x20ui64, &glassSys->piecePlaces[v5]);
  MemFile_WriteData(memFile, 0x20ui64, v7);
  MemFile_WriteData(memFile, 0x28ui64, v6);
  physicsInstance = v6->physicsInstance;
  if ( physicsInstance != -1 )
  {
    p.m_serialAndIndex = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance);
    m_serialAndIndex = p.m_serialAndIndex;
    MemFile_WriteData(memFile, 4ui64, &p);
    v10 = 0;
    if ( m_serialAndIndex > 0 )
    {
      __asm
      {
        vmovaps [rsp+100h+var_40], xmm6
        vmovss  xmm6, cs:__real@42000000
      }
      do
      {
        v12 = v6->physicsInstance;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v12 == -1 )
        {
          LODWORD(v22) = 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v22) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated )
        {
          LODWORD(v22) = 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
            __debugbreak();
        }
        v13.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&p, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v12, v10)->m_serialAndIndex;
        if ( (v13.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 54, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v13.m_serialAndIndex, &position, &orientation);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (v13.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v22) = 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v22) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyLinAngVel(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v13, &linVel, &angVel);
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rbp+57h+linVel.m_quad+4]
          vmulss  xmm1, xmm6, dword ptr [rbp+57h+linVel.m_quad]
          vmulss  xmm2, xmm6, dword ptr [rbp+57h+linVel.m_quad+8]
          vmovss  [rbp+57h+var_AC], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+angVel.m_quad]
          vmovss  [rbp+57h+var_A0], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+angVel.m_quad+8]
          vmovss  [rbp+57h+var_B0], xmm1
          vmovss  xmm1, dword ptr [rbp+57h+angVel.m_quad+4]
          vmovss  [rbp+57h+var_98], xmm0
          vmovss  [rbp+57h+var_A8], xmm2
          vmovss  [rbp+57h+var_9C], xmm1
        }
        IsRigidBodyActive = Physics_IsRigidBodyActive(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v13.m_serialAndIndex);
        MemFile_WriteData(memFile, 0xCui64, &position);
        MemFile_WriteData(memFile, 0x10ui64, &orientation);
        MemFile_WriteData(memFile, 0xCui64, v25);
        MemFile_WriteData(memFile, 0xCui64, v26);
        v23[0] = IsRigidBodyActive;
        MemFile_WriteData(memFile, 1ui64, v23);
        ++v10;
      }
      while ( v10 < m_serialAndIndex );
      __asm { vmovaps xmm6, [rsp+100h+var_40] }
    }
  }
}

