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
  __int128 v1; 
  MemoryFile *v2; 
  FxGlassPieceDynamics *pieceDynamics; 
  FxGlassPieceState *pieceStates; 
  FxGlassPiecePlace *piecePlaces; 
  char v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  float v10; 
  unsigned __int64 v11; 
  FxGlassPieceState *v12; 
  FxGlassPieceDynamics *v13; 
  int v14; 
  unsigned int physicsInstance; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int physicsDetailInstance; 
  const HavokPhysicsWorld *v18; 
  signed int v19; 
  MemoryFile *v20; 
  unsigned int v21; 
  hknpBodyId v22; 
  unsigned int v23; 
  unsigned int m_serialAndIndex; 
  int v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  double Float; 
  int v31; 
  double v32; 
  int v33; 
  double v34; 
  int v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  float v50; 
  float v51; 
  __int128 v52; 
  int v53; 
  int v54; 
  int v55; 
  hknpWorld *world; 
  char *fmt; 
  __int64 activate; 
  __int64 v59; 
  int p; 
  float v61; 
  int v62; 
  unsigned int v63; 
  unsigned int v64; 
  int v65; 
  int v66; 
  float v67; 
  int v68; 
  int v69; 
  unsigned int v70; 
  MemoryFile *memFilea; 
  __int64 v72; 
  hknpBodyId result; 
  hknpBodyId v74; 
  unsigned __int64 v75; 
  __int64 v76; 
  hkVector4f hkPosition; 
  hkVector4f v78; 
  int v79[4]; 
  int v80[4]; 
  hkQuaternionf hkOrientation; 
  hkQuaternionf v82; 

  v76 = -2i64;
  v2 = memFile;
  memFilea = memFile;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Glass_Restore");
  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 120, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  MemFile_ReadData(v2, 1ui64, (char *)&p + 1);
  MemFile_ReadData(v2, 1ui64, &p);
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
    MemFile_ReadData(v2, 4ui64, &v63);
    fxWorld.glassSys.geoDataCount = v63;
    if ( v63 )
      MemFile_ReadData(v2, 4i64 * v63, fxWorld.glassSys.geoData);
    v6 = 0;
    MemFile_ReadData(v2, 4ui64, &v63);
    v7 = v63;
    if ( v63 > fxWorld.glassSys.pieceLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 159, ASSERT_TYPE_ASSERT, "( activeCount ) <= ( glassSys->pieceLimit )", "%s <= %s\n\t%i, %i", "activeCount", "glassSys->pieceLimit", v63, fxWorld.glassSys.pieceLimit) )
      __debugbreak();
    v8 = 0;
    v70 = 0;
    if ( v7 )
    {
      v9 = 0i64;
      v72 = 0i64;
      v10 = FLOAT_0_03125;
      do
      {
        v11 = v8;
        v75 = v8;
        v12 = &fxWorld.glassSys.pieceStates[v9];
        v13 = &fxWorld.glassSys.pieceDynamics[v9];
        MemFile_ReadData(v2, 0x20ui64, &fxWorld.glassSys.piecePlaces[v8]);
        MemFile_ReadData(v2, 0x20ui64, v12);
        MemFile_ReadData(v2, 0x28ui64, v13);
        fxWorld.glassSys.halfThickness[v9] = fxWorld.glassGlob.defs[v12->defIndex].halfThickness;
        if ( v13->physicsInstance == -1 )
        {
          Glass_LinkPiece_Static(&fxWorld.glassSys, v8);
        }
        else
        {
          *(_QWORD *)&v13->physicsInstance = -1i64;
          v13->pendingCreation = 1;
          Glass_CreatePhysics(&fxWorld.glassSys, v8, 1, 1);
          MemFile_ReadData(v2, 4ui64, &v69);
          v14 = v69;
          physicsInstance = v13->physicsInstance;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( physicsInstance == -1 )
          {
            LODWORD(v59) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v59) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated )
          {
            LODWORD(v59) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v59) )
              __debugbreak();
          }
          if ( physicsInstance == -1 )
          {
            LODWORD(v59) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v59) )
              __debugbreak();
          }
          ConstWorld = HavokPhysics_GetConstWorld(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
          if ( !ConstWorld->world )
          {
            LODWORD(v59) = 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v59) )
              __debugbreak();
          }
          if ( v14 != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, physicsInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 187, ASSERT_TYPE_ASSERT, "(numBodies == (int)Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ))", (const char *)&queryFormat, "numBodies == (int)Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance )") )
            __debugbreak();
          physicsDetailInstance = v13->physicsDetailInstance;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( physicsDetailInstance == -1 )
          {
            LODWORD(v59) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v59) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated )
          {
            LODWORD(v59) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v59) )
              __debugbreak();
          }
          if ( physicsDetailInstance == -1 )
          {
            LODWORD(v59) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v59) )
              __debugbreak();
          }
          v18 = HavokPhysics_GetConstWorld(PHYSICS_WORLD_ID_CLIENT0_DETAIL);
          if ( !v18->world )
          {
            LODWORD(v59) = 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v59) )
              __debugbreak();
          }
          if ( v14 != HavokPhysicsInstanceManager_GetBodyCount(&v18->instanceManager, physicsDetailInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 188, ASSERT_TYPE_ASSERT, "(numBodies == (int)Physics_GetNumRigidBodys( detailWorldId, pieceDynamics->physicsDetailInstance ))", (const char *)&queryFormat, "numBodies == (int)Physics_GetNumRigidBodys( detailWorldId, pieceDynamics->physicsDetailInstance )") )
            __debugbreak();
          LOBYTE(p) = (v14 > 0) | v6;
          v19 = 0;
          if ( v14 > 0 )
          {
            v20 = memFilea;
            do
            {
              v21 = v13->physicsInstance;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v21 == -1 )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v59) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v59) )
                  __debugbreak();
              }
              v22.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v21, v19)->m_serialAndIndex;
              v23 = v13->physicsDetailInstance;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v23 == -1 )
              {
                LODWORD(v59) = 4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v59) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated )
              {
                LODWORD(v59) = 4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v59) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v74, PHYSICS_WORLD_ID_CLIENT0_DETAIL, v23, v19)->m_serialAndIndex;
              v25 = v22.m_serialAndIndex & 0xFFFFFF;
              if ( (v22.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 195, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
                __debugbreak();
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 196, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( detailBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( detailBodyId )") )
                __debugbreak();
              *(double *)&v1 = MemFile_ReadFloat(v20);
              v26 = *(float *)&v1;
              *(double *)&v1 = MemFile_ReadFloat(v20);
              v27 = *(float *)&v1;
              *(double *)&v1 = MemFile_ReadFloat(v20);
              v28 = *(float *)&v1;
              *(double *)&v1 = MemFile_ReadFloat(v20);
              v29 = v1;
              Float = MemFile_ReadFloat(v20);
              v31 = LODWORD(Float);
              v32 = MemFile_ReadFloat(v20);
              v33 = LODWORD(v32);
              v34 = MemFile_ReadFloat(v20);
              v35 = LODWORD(v34);
              v66 = SLODWORD(v34);
              v36 = MemFile_ReadFloat(v20);
              v61 = *(float *)&v36;
              v37 = MemFile_ReadFloat(v20);
              v67 = *(float *)&v37;
              v38 = MemFile_ReadFloat(v20);
              v64 = LODWORD(v38);
              v39 = MemFile_ReadFloat(v20);
              v62 = SLODWORD(v39);
              v40 = MemFile_ReadFloat(v20);
              v68 = SLODWORD(v40);
              v41 = MemFile_ReadFloat(v20);
              v65 = SLODWORD(v41);
              MemFile_ReadData(v20, 1ui64, (char *)&p + 1);
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v25 == 0xFFFFFF )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v59) )
                  __debugbreak();
              }
              if ( ((LODWORD(v26) & 0x7F800000) == 2139095040 || (LODWORD(v27) & 0x7F800000) == 2139095040 || (LODWORD(v28) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
                __debugbreak();
              if ( ((v29 & 0x7F800000) == 2139095040 || (v31 & 0x7F800000) == 2139095040 || (v33 & 0x7F800000) == 2139095040 || (v35 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
                __debugbreak();
              hkPosition.m_quad.m128_f32[0] = v26 * v10;
              hkPosition.m_quad.m128_f32[1] = v27 * v10;
              hkPosition.m_quad.m128_f32[2] = v28 * v10;
              hkPosition.m_quad.m128_f32[3] = 0.0;
              _XMM6 = v29;
              __asm
              {
                vinsertps xmm6, xmm6, xmm14, 10h
                vinsertps xmm6, xmm6, xmm15, 20h ; ' '
                vinsertps xmm6, xmm6, [rsp+1E0h+var_174], 30h
                vdpps   xmm0, xmm6, xmm6, 0FFh
                vrsqrtps xmm1, xmm0
              }
              hkOrientation.m_vec.m_quad = _mm128_mul_ps(_XMM6, _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM1), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)));
              HavokPhysics_WarpRigidBodyTo(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v22, &hkPosition, &hkOrientation, 0, 0);
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
              {
                LODWORD(v59) = 4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v59) )
                  __debugbreak();
              }
              if ( ((LODWORD(v26) & 0x7F800000) == 2139095040 || (LODWORD(v27) & 0x7F800000) == 2139095040 || (LODWORD(v28) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
                __debugbreak();
              if ( ((v29 & 0x7F800000) == 2139095040 || (v31 & 0x7F800000) == 2139095040 || (v33 & 0x7F800000) == 2139095040 || (v66 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
                __debugbreak();
              v78.m_quad.m128_f32[0] = v26 * v10;
              v78.m_quad.m128_f32[1] = v27 * v10;
              v78.m_quad.m128_f32[2] = v28 * v10;
              v78.m_quad.m128_f32[3] = 0.0;
              __asm
              {
                vdpps   xmm1, xmm6, xmm6, 0FFh
                vrsqrtps xmm2, xmm1
              }
              v82.m_vec.m_quad = _mm128_mul_ps(_XMM6, _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM2, _XMM1), _XMM2)), _mm128_mul_ps(_XMM2, *(__m128 *)hkMath::hkSse_floatHalf)));
              HavokPhysics_WarpRigidBodyTo(PHYSICS_WORLD_ID_CLIENT0_DETAIL, (const hknpBodyId)m_serialAndIndex, &v78, &v82, 0, 0);
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( v25 == 0xFFFFFF )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v59) )
                  __debugbreak();
              }
              v50 = v61;
              v51 = v67;
              v52 = v64;
              if ( (LODWORD(v61) & 0x7F800000) == 2139095040 || (v61 = v67, (LODWORD(v67) & 0x7F800000) == 2139095040) || (v61 = *(float *)&v64, (v64 & 0x7F800000) == 2139095040) )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v59) )
                  __debugbreak();
              }
              v53 = v62;
              v54 = v68;
              v55 = v65;
              if ( (v62 & 0x7F800000) == 2139095040 || (v62 = v68, (v68 & 0x7F800000) == 2139095040) || (v62 = v65, (v65 & 0x7F800000) == 2139095040) )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", v59) )
                  __debugbreak();
              }
              *(float *)v80 = v50 * 0.03125;
              *(float *)&v80[1] = v51 * 0.03125;
              *((_QWORD *)&v1 + 1) = *((_QWORD *)&v52 + 1);
              *(float *)&v80[2] = *(float *)&v52 * 0.03125;
              *(float *)&v80[3] = 0.0;
              v79[0] = v53;
              v79[1] = v54;
              v79[2] = v55;
              *(float *)&v79[3] = 0.0;
              if ( v25 == 0xFFFFFF )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v59) )
                  __debugbreak();
              }
              world = HavokPhysics_GetMutableWorld(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE)->world;
              if ( !world )
              {
                LODWORD(v59) = 3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", v59) )
                  __debugbreak();
              }
              ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, v22.m_serialAndIndex, v80, v79, 0);
              if ( BYTE1(p) )
                Physics_ActivateBody(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v22.m_serialAndIndex);
              ++v19;
              v10 = FLOAT_0_03125;
            }
            while ( v19 < v69 );
            v8 = v70;
            v11 = v75;
          }
          Glass_LinkPiece_Dynamic(&fxWorld.glassSys, v8);
          v2 = memFilea;
          v9 = v72;
          v6 = p;
        }
        fxWorld.glassSys.isInUse[v11 >> 5] |= 0x80000000 >> (v8++ & 0x1F);
        v70 = v8;
        v72 = ++v9;
        v7 = v63;
      }
      while ( v8 < v63 );
      if ( v6 )
      {
        Physics_UpdateBroadphase(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, 1);
        Physics_UpdateBroadphase(PHYSICS_WORLD_ID_CLIENT0_DETAIL, 1);
      }
    }
    for ( ; v8 < fxWorld.glassSys.pieceLimit - 1; ++v8 )
      fxWorld.glassSys.piecePlaces[v8].nextFree = v8 + 1;
    fxWorld.glassSys.piecePlaces[v8].nextFree = 0xFFFF;
    fxWorld.glassSys.activePieceCount = v7;
    fxWorld.glassSys.firstFreePiece = v7;
  }
  Sys_ProfEndNamedEvent();
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
  __int64 v4; 
  FxGlassPieceDynamics *v5; 
  FxGlassPieceState *v6; 
  unsigned int physicsInstance; 
  signed int m_serialAndIndex; 
  signed int i; 
  unsigned int v10; 
  hknpBodyId v11; 
  bool IsRigidBodyActive; 
  __int64 v13; 
  char v14[8]; 
  hknpBodyId p; 
  int v16[4]; 
  int v17[4]; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec3_t position; 
  vec4_t orientation; 

  v4 = pieceIndex;
  v5 = &glassSys->pieceDynamics[pieceIndex];
  v6 = &glassSys->pieceStates[v4];
  MemFile_WriteData(memFile, 0x20ui64, &glassSys->piecePlaces[v4]);
  MemFile_WriteData(memFile, 0x20ui64, v6);
  MemFile_WriteData(memFile, 0x28ui64, v5);
  physicsInstance = v5->physicsInstance;
  if ( physicsInstance != -1 )
  {
    p.m_serialAndIndex = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance);
    m_serialAndIndex = p.m_serialAndIndex;
    MemFile_WriteData(memFile, 4ui64, &p);
    for ( i = 0; i < m_serialAndIndex; ++i )
    {
      v10 = v5->physicsInstance;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v10 == -1 )
      {
        LODWORD(v13) = 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v13) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated )
      {
        LODWORD(v13) = 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v13) )
          __debugbreak();
      }
      v11.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&p, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v10, i)->m_serialAndIndex;
      if ( (v11.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_archive.cpp", 54, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v11.m_serialAndIndex, &position, &orientation);
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (v11.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v13) = 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v13) )
          __debugbreak();
      }
      HavokPhysics_GetRigidBodyLinAngVel(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v11, &linVel, &angVel);
      *(float *)&v16[1] = 32.0 * linVel.m_quad.m128_f32[1];
      v17[0] = angVel.m_quad.m128_i32[0];
      *(float *)v16 = 32.0 * linVel.m_quad.m128_f32[0];
      v17[2] = angVel.m_quad.m128_i32[2];
      *(float *)&v16[2] = 32.0 * linVel.m_quad.m128_f32[2];
      v17[1] = angVel.m_quad.m128_i32[1];
      IsRigidBodyActive = Physics_IsRigidBodyActive(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v11.m_serialAndIndex);
      MemFile_WriteData(memFile, 0xCui64, &position);
      MemFile_WriteData(memFile, 0x10ui64, &orientation);
      MemFile_WriteData(memFile, 0xCui64, v16);
      MemFile_WriteData(memFile, 0xCui64, v17);
      v14[0] = IsRigidBodyActive;
      MemFile_WriteData(memFile, 1ui64, v14);
    }
  }
}

