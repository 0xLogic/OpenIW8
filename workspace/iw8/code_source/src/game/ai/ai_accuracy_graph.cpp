/*
==============
AI_CopyAccuGraphBuf
==============
*/

void __fastcall AI_CopyAccuGraphBuf(WeaponCompleteDef *from, WeaponCompleteDef *to)
{
  ?AI_CopyAccuGraphBuf@@YAXPEAUWeaponCompleteDef@@0@Z(from, to);
}

/*
==============
AI_ShutdownWeaponAccuracyGraph
==============
*/

void AI_ShutdownWeaponAccuracyGraph(void)
{
  ?AI_ShutdownWeaponAccuracyGraph@@YAXXZ();
}

/*
==============
AI_InitWeaponAccuracyGraphForWeapon
==============
*/

void __fastcall AI_InitWeaponAccuracyGraphForWeapon(const Weapon *weapon)
{
  ?AI_InitWeaponAccuracyGraphForWeapon@@YAXAEBUWeapon@@@Z(weapon);
}

/*
==============
AI_AccuracyGraphSaveToFile
==============
*/
void AI_AccuracyGraphSaveToFile(const DevGraph *graph, const WeaponDef *weaponDef, WeapAccuracyType accuracyType)
{
  __int64 v3; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  fileHandle_t *v9; 
  unsigned __int16 *knotCount; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  const char *v14; 
  char *fmt; 
  fileHandle_t dest[32]; 
  char buffer[512]; 

  v3 = accuracyType;
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 94, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !weaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 95, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  v6 = 0i64;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      Com_sprintf((char *)dest, 0x100ui64, "accuracy\\aivsplayer\\%s", weaponDef->accuracyGraphName[1]);
      v8 = 1i64;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 70, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "inconceivable") )
        __debugbreak();
      v8 = v3;
    }
  }
  else
  {
    Com_sprintf((char *)dest, 0x100ui64, "accuracy\\aivsai\\%s", weaponDef->accuracyGraphName[0]);
    v8 = 0i64;
  }
  v9 = FS_FOpenTextFileWrite(dest, v7);
  if ( v9 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(18, "Could not save accuracy file [%s].\n", weaponDef->accuracyGraphName[v8]);
  }
  else
  {
    if ( !graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 111, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
      __debugbreak();
    knotCount = graph->knotCount;
    v11 = *knotCount;
    LODWORD(fmt) = *knotCount;
    Com_sprintf(buffer, 0x200ui64, "%s%d\n", "WEAPONACCUFILE\n\n", fmt);
    v12 = -1i64;
    do
      ++v12;
    while ( buffer[v12] );
    FS_Write(buffer, v12, (fileHandle_t)v9);
    if ( v11 )
    {
      do
      {
        Com_sprintf(buffer, 0x200ui64, "%.4f %.4f\n", graph->knots[v6].v[0], graph->knots[v6].v[1]);
        v13 = -1i64;
        do
          ++v13;
        while ( buffer[v13] );
        FS_Write(buffer, v13, (fileHandle_t)v9);
        ++v6;
      }
      while ( v6 < v11 );
    }
    FS_FCloseFile((fileHandle_t)v9);
    v14 = Sys_DefaultInstallPath();
    Com_Printf(18, "^7Successfully saved accuracy file [%s\\%s].\n", v14, (const char *)dest);
  }
}

/*
==============
AI_AccuracyGraphTextCallback
==============
*/
void AI_AccuracyGraphTextCallback(const DevGraph *graph, const float inputX, const float inputY, char *text, const int textLength)
{
  Com_sprintf(text, textLength, "Distance: %.2f, Accuracy: %.4f", (float)(inputX * 4000.0), inputY);
}

/*
==============
AI_AiVsAiAccuracyGraphEventCallback
==============
*/
void AI_AiVsAiAccuracyGraphEventCallback(const DevGraph *graph, DevEventType event, LocalClientNum_t unusedLocalClientNum)
{
  AI_CommonAccuracyGraphEventCallback(graph, event, WEAP_ACCURACY_AI_VS_AI);
}

/*
==============
AI_AiVsPlayerAccuracyGraphEventCallback
==============
*/
void AI_AiVsPlayerAccuracyGraphEventCallback(const DevGraph *graph, DevEventType event, LocalClientNum_t unusedLocalClientNum)
{
  AI_CommonAccuracyGraphEventCallback(graph, event, WEAP_ACCURACY_AI_VS_PLAYER);
}

/*
==============
AI_CommonAccuracyGraphEventCallback
==============
*/
void AI_CommonAccuracyGraphEventCallback(const DevGraph *graph, DevEventType event, WeapAccuracyType accuracyType)
{
  void *data; 
  unsigned __int16 v7; 
  __int64 v8; 
  int v9; 
  const char *WeaponName; 
  int v11; 
  __int64 v12; 
  char *v13; 
  __int64 v15; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 
  Weapon r_weapon; 
  char v20[48]; 
  char output[1024]; 
  char dest[16384]; 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 141, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  data = graph->data;
  memset(&r_weapon, 0, 48);
  *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  v7 = truncate_cast<unsigned short,unsigned __int64>((unsigned __int64)data);
  r_weapon.weaponIdx = v7;
  LOWORD(v8) = v7;
  if ( v7 >= 0x226u )
  {
    LODWORD(v18) = 550;
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
    LOWORD(v8) = r_weapon.weaponIdx;
  }
  if ( (unsigned __int16)v8 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v18) = bg_lastParsedWeaponIndex;
    LODWORD(v17) = (unsigned __int16)v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v17, v18) )
      __debugbreak();
  }
  v8 = (unsigned __int16)v8;
  if ( !bg_weaponDefs[(unsigned __int16)v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( event == EVENT_ACCEPT )
  {
    memset_0(dest, 0, sizeof(dest));
    v9 = *graph->knotCount;
    WeaponName = BG_GetWeaponName(&r_weapon, output, 0x400u);
    LODWORD(fmt) = v9;
    Com_sprintf(dest, 0x4000ui64, "Weapon: %s\nKnot Count: %d\n", WeaponName, fmt);
    v11 = 0;
    if ( *graph->knotCount )
    {
      v12 = 0i64;
      do
      {
        Com_sprintf(v20, 0x24ui64, "%.4f %.4f\n", graph->knots[v12].v[0], graph->knots[v12].v[1]);
        v13 = (char *)&v15 + 1199;
        while ( *++v13 != 0 )
          ;
        strcpy(v13, v20);
        ++v11;
        ++v12;
      }
      while ( v11 < *graph->knotCount );
    }
    Com_Printf(18, "^6%s", dest);
  }
  else if ( event == EVENT_SAVE )
  {
    AI_AccuracyGraphSaveToFile(graph, bg_weaponDefs[v8], accuracyType);
  }
}

/*
==============
AI_CopyAccuGraphBuf
==============
*/
void AI_CopyAccuGraphBuf(WeaponCompleteDef *from, WeaponCompleteDef *to)
{
  WeaponDef *weapDef; 
  unsigned int v5; 
  vec2_t **accuracyGraphKnots; 
  __int64 v7; 
  char *v8; 
  unsigned __int16 *originalAccuracyGraphKnotCount; 
  char *v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  signed __int64 v17; 

  weapDef = to->weapDef;
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 271, ASSERT_TYPE_ASSERT, "(toDef)", (const char *)&queryFormat, "toDef") )
    __debugbreak();
  v5 = 1;
  if ( BG_GetNumWeapons() > 1 )
  {
    while ( 1 )
    {
      if ( v5 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v5, "unsigned", v5) )
        __debugbreak();
      if ( (unsigned __int16)v5 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v15) = bg_lastParsedWeaponIndex;
        LODWORD(v14) = (unsigned __int16)v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v14, v15) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[(unsigned __int16)v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      if ( bg_weaponCompleteDefs[(unsigned __int16)v5] == from )
        break;
      if ( ++v5 >= BG_GetNumWeapons() )
        return;
    }
    accuracyGraphKnots = to->accuracyGraphKnots;
    v7 = 0i64;
    v17 = (char *)weapDef - (char *)to;
    v8 = (char *)((char *)from - (char *)weapDef);
    originalAccuracyGraphKnotCount = weapDef->originalAccuracyGraphKnotCount;
    v10 = (char *)((char *)to - (char *)weapDef);
    do
    {
      if ( *(unsigned __int16 *)((char *)originalAccuracyGraphKnotCount + (_QWORD)v8 - 2588) && *(_WORD *)&v10[(_QWORD)originalAccuracyGraphKnotCount - 2588] )
      {
        v11 = g_accuracyBufferIndex & 1;
        if ( v5 >= 0x226 )
        {
          LODWORD(v15) = 550;
          LODWORD(v14) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( ( sizeof( *array_counter( g_accuGraphBuf[ bufferIndex ] ) ) + 0 ) )", "weapIndex doesn't index ARRAY_COUNT( g_accuGraphBuf[ bufferIndex ] )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v12 = v5 + 550i64 * v11;
        memcpy_0((char *)g_accuGraphBuf + 128 * (v7 + 2 * v12), *(vec2_t **)((char *)accuracyGraphKnots + v17 + 2568), 8i64 * *originalAccuracyGraphKnotCount);
        if ( v5 >= 0x226 )
        {
          LODWORD(v15) = 550;
          LODWORD(v14) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( ( sizeof( *array_counter( g_accuGraphTime[ bufferIndex ] ) ) + 0 ) )", "weapIndex doesn't index ARRAY_COUNT( g_accuGraphTime[ bufferIndex ] )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( g_accuGraphTime[0][v12] != g_accuracyBufferIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 292, ASSERT_TYPE_ASSERT, "(g_accuGraphTime[ bufferIndex ][ weapIndex ] == g_accuracyBufferIndex)", (const char *)&queryFormat, "g_accuGraphTime[ bufferIndex ][ weapIndex ] == g_accuracyBufferIndex") )
          __debugbreak();
        if ( v5 >= 0x226 )
        {
          LODWORD(v15) = 550;
          LODWORD(v14) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 294, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( ( sizeof( *array_counter( g_accuGraphWeapon[ bufferIndex ] ) ) + 0 ) )", "weapIndex doesn't index ARRAY_COUNT( g_accuGraphWeapon[ bufferIndex ] )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( g_accuGraphWeapon[0][v12] != from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 295, ASSERT_TYPE_ASSERT, "(g_accuGraphWeapon[ bufferIndex ][ weapIndex ] == from)", (const char *)&queryFormat, "g_accuGraphWeapon[ bufferIndex ][ weapIndex ] == from") )
          __debugbreak();
        *accuracyGraphKnots = g_accuGraphBuf[0][0].accuracyGraphKnots[v7 + 2 * v12];
        v13 = *originalAccuracyGraphKnotCount;
        *(_WORD *)&v10[(_QWORD)originalAccuracyGraphKnotCount - 2588] = v13;
        if ( 1.0 != (*accuracyGraphKnots)[v13 - 1].v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 300, ASSERT_TYPE_SANITY, "( to->accuracyGraphKnots[ accuracyType ][ to->accuracyGraphKnotCount[ accuracyType ] - 1 ][ 0 ] == 1.0f )", (const char *)&queryFormat, "to->accuracyGraphKnots[ accuracyType ][ to->accuracyGraphKnotCount[ accuracyType ] - 1 ][ 0 ] == 1.0f") )
          __debugbreak();
      }
      v7 = (unsigned int)(v7 + 1);
      ++originalAccuracyGraphKnotCount;
      ++accuracyGraphKnots;
    }
    while ( (unsigned int)v7 < 2 );
  }
}

/*
==============
AI_InitWeaponAccuracyGraphForWeapon
==============
*/
void AI_InitWeaponAccuracyGraphForWeapon(const Weapon *weapon)
{
  DevGraph *inited; 
  const char *WeaponName; 
  DevGraph *v4; 
  const char *v5; 
  char dest[256]; 
  char output[1024]; 

  if ( !BG_WeaponDef(weapon, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 331, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  inited = AI_InitWeaponAccuracyGraphForWeaponType(weapon, WEAP_ACCURACY_AI_VS_AI, AI_AiVsAiAccuracyGraphEventCallback);
  if ( inited )
  {
    WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
    Com_sprintf(dest, 0x100ui64, "AI/AI Vs. AI Accuracy/%.25s", WeaponName);
    DevGui_AddGraph(dest, inited);
  }
  v4 = AI_InitWeaponAccuracyGraphForWeaponType(weapon, WEAP_ACCURACY_AI_VS_PLAYER, AI_AiVsPlayerAccuracyGraphEventCallback);
  if ( v4 )
  {
    v5 = BG_GetWeaponName(weapon, output, 0x400u);
    Com_sprintf(dest, 0x100ui64, "AI/AI Vs. Player Accuracy/%.25s", v5);
    DevGui_AddGraph(dest, v4);
  }
}

/*
==============
AI_InitWeaponAccuracyGraphForWeaponType
==============
*/
DevGraph *AI_InitWeaponAccuracyGraphForWeaponType(const Weapon *weapon, WeapAccuracyType accuracyType, void (*eventCallback)(const DevGraph *, DevEventType, LocalClientNum_t))
{
  __int64 v3; 
  const WeaponDef *v6; 
  const WeaponCompleteDef *v7; 
  const WeaponCompleteDef *v8; 
  __int64 v9; 
  DevGraph *result; 
  vec2_t *v11; 
  vec2_t *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int16 *v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  int v23; 

  v3 = accuracyType;
  v6 = BG_WeaponDef(weapon, 0);
  v7 = BG_WeaponCompleteDef(weapon, 0);
  v8 = v7;
  v9 = v3;
  if ( !v7->accuracyGraphKnotCount[v3] )
    return 0i64;
  v11 = v6->originalAccuracyGraphKnots[v3];
  v12 = v7->accuracyGraphKnots[v3];
  if ( v11 != v12 )
  {
    v13 = ((_BYTE)g_accuracyBufferIndex - 1) & 1;
    v14 = (char *)&v12[-17600 * v13] - (char *)g_accuGraphBuf;
    if ( v14 < 0x22600 )
    {
      v15 = (unsigned int)v14 >> 8;
      if ( v15 >= 0x226 )
      {
        v21 = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 222, ASSERT_TYPE_ASSERT, "( ( oldWeaponIndex < ( sizeof( *array_counter( g_accuGraphBuf[ prevBufferIndex ] ) ) + 0 ) ) )", "( oldWeaponIndex ) = %i", v21) )
          __debugbreak();
      }
      if ( g_accuGraphTime[v13][v15] == g_accuracyBufferIndex - 1 && g_accuGraphWeapon[v13][v15] == v8 )
        v11 = v8->accuracyGraphKnots[v9];
    }
  }
  v16 = g_accuracyBufferIndex & 1;
  if ( weapon->weaponIdx >= 0x226u )
  {
    v23 = 550;
    LODWORD(v20) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( ( sizeof( *array_counter( g_accuGraphBuf[ bufferIndex ] ) ) + 0 ) )", "weapon.weaponIdx doesn't index ARRAY_COUNT( g_accuGraphBuf[ bufferIndex ] )\n\t%i not in [0, %i)", v20, v23) )
      __debugbreak();
  }
  v17 = &v8->accuracyGraphKnotCount[v9];
  v18 = v16;
  memcpy_0((char *)g_accuGraphBuf + 128 * (v9 + 2 * (v18 * 550 + weapon->weaponIdx)), v11, 8i64 * *v17);
  if ( weapon->weaponIdx >= 0x226u )
  {
    LODWORD(v22) = 550;
    LODWORD(v20) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( ( sizeof( *array_counter( g_accuGraphTime[ bufferIndex ] ) ) + 0 ) )", "weapon.weaponIdx doesn't index ARRAY_COUNT( g_accuGraphTime[ bufferIndex ] )\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  g_accuGraphTime[v18][weapon->weaponIdx] = g_accuracyBufferIndex;
  if ( weapon->weaponIdx >= 0x226u )
  {
    LODWORD(v22) = 550;
    LODWORD(v20) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( ( sizeof( *array_counter( g_accuGraphWeapon[ bufferIndex ] ) ) + 0 ) )", "weapon.weaponIdx doesn't index ARRAY_COUNT( g_accuGraphWeapon[ bufferIndex ] )\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  g_accuGraphWeapon[v18][weapon->weaponIdx] = v8;
  v8->accuracyGraphKnots[v9] = g_accuGraphBuf[0][0].accuracyGraphKnots[v9 + 2 * (v18 * 550 + weapon->weaponIdx)];
  v19 = s_accuracyGraphCount;
  if ( s_accuracyGraphCount >= 0x226 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_accuracy_graph.cpp", 244, ASSERT_TYPE_ASSERT, "(s_accuracyGraphCount < ( sizeof( *array_counter( g_accuracyGraphs ) ) + 0 ))", (const char *)&queryFormat, "s_accuracyGraphCount < ARRAY_COUNT( g_accuracyGraphs )") )
      __debugbreak();
    v19 = s_accuracyGraphCount;
  }
  result = &g_accuracyGraphs[v19];
  s_accuracyGraphCount = v19 + 1;
  result->knotCountMax = 16;
  result->knots = v8->accuracyGraphKnots[v9];
  result->textCallback = AI_AccuracyGraphTextCallback;
  result->knotCount = v17;
  result->eventCallback = eventCallback;
  result->data = (void *)weapon->weaponIdx;
  return result;
}

/*
==============
AI_ShutdownWeaponAccuracyGraph
==============
*/
void AI_ShutdownWeaponAccuracyGraph(void)
{
  unsigned int v0; 
  __int64 v1; 
  void *data; 
  const char *WeaponName; 
  const char *v4; 
  Weapon r_weapon; 
  char dest[256]; 
  char output[1024]; 

  memset(&r_weapon, 0, 48);
  v0 = 0;
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  for ( *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21]; v0 < s_accuracyGraphCount; ++v0 )
  {
    v1 = v0;
    data = g_accuracyGraphs[v1].data;
    if ( (unsigned __int64)data > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)data, "unsigned", g_accuracyGraphs[v1].data) )
      __debugbreak();
    r_weapon.weaponIdx = (unsigned __int16)data;
    WeaponName = BG_GetWeaponName(&r_weapon, output, 0x400u);
    Com_sprintf(dest, 0x100ui64, "AI/AI Vs. AI Accuracy/%s", WeaponName);
    DevGui_RemoveMenu(dest);
    v4 = BG_GetWeaponName(&r_weapon, output, 0x400u);
    Com_sprintf(dest, 0x100ui64, "AI/AI Vs. Player Accuracy/%s", v4);
    DevGui_RemoveMenu(dest);
  }
  s_accuracyGraphCount = 0;
  memset_0(g_accuracyGraphs, 0, sizeof(g_accuracyGraphs));
  memset_0(g_accuGraphBuf, 0, sizeof(g_accuGraphBuf));
  memset_0(g_accuGraphTime, 0, sizeof(g_accuGraphTime));
  memset_0(g_accuGraphWeapon, 0, sizeof(g_accuGraphWeapon));
  g_accuracyBufferIndex = 0;
}

