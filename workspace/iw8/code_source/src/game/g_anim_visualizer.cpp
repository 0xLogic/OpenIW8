/*
==============
AnimVisualizer_SetPlaybackPosition
==============
*/

void __fastcall AnimVisualizer_SetPlaybackPosition(AnimVyzScene *scene, float time, bool forcePlayFromStart)
{
  ?AnimVisualizer_SetPlaybackPosition@@YAXPEAUAnimVyzScene@@M_N@Z(scene, time, forcePlayFromStart);
}

/*
==============
AnimVisualizer_MyChangesSaveAndShutdown
==============
*/

void AnimVisualizer_MyChangesSaveAndShutdown(void)
{
  ?AnimVisualizer_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
AnimVisualizer_Initialize
==============
*/

void AnimVisualizer_Initialize(void)
{
  ?AnimVisualizer_Initialize@@YAXXZ();
}

/*
==============
AnimVisualizer_Terminate
==============
*/

void AnimVisualizer_Terminate(void)
{
  ?AnimVisualizer_Terminate@@YAXXZ();
}

/*
==============
AnimVisualizer_MyChangesInitAndLoad
==============
*/

void AnimVisualizer_MyChangesInitAndLoad(void)
{
  ?AnimVisualizer_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
AnimVisualizer_ResetForUnload
==============
*/

void AnimVisualizer_ResetForUnload(void)
{
  ?AnimVisualizer_ResetForUnload@@YAXXZ();
}

/*
==============
AnimVisualizer_Update
==============
*/

void __fastcall AnimVisualizer_Update(float deltaTimeSeconds)
{
  ?AnimVisualizer_Update@@YAXM@Z(deltaTimeSeconds);
}

/*
==============
AnimVisualizer_HandlesRagdollNote
==============
*/

bool __fastcall AnimVisualizer_HandlesRagdollNote(int entityIndex)
{
  return ?AnimVisualizer_HandlesRagdollNote@@YA_NH@Z(entityIndex);
}

/*
==============
AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly
==============
*/

double __fastcall AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly(int entityIndex, float deltaTime)
{
  double result; 

  *(float *)&result = ?AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly@@YAMHM@Z(entityIndex, deltaTime);
  return result;
}

/*
==============
AnimVisualizer_UpdateSceneAlignment
==============
*/

void __fastcall AnimVisualizer_UpdateSceneAlignment(AnimVyzScene *scene)
{
  ?AnimVisualizer_UpdateSceneAlignment@@YAXPEAUAnimVyzScene@@@Z(scene);
}

/*
==============
AnimVisualizer_ProcessClientNote
==============
*/

void __fastcall AnimVisualizer_ProcessClientNote(LocalClientNum_t localClientNum, int entityIndex, const XAnimNotifyInfo *notifyInfo)
{
  ?AnimVisualizer_ProcessClientNote@@YAXW4LocalClientNum_t@@HPEBUXAnimNotifyInfo@@@Z(localClientNum, entityIndex, notifyInfo);
}

/*
==============
AnimVisualizer_CmdReset
==============
*/
void AnimVisualizer_CmdReset()
{
  const char *v0; 
  int v1; 
  __int64 v2; 
  char dest[512]; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    if ( I_strcmp(v0, "ping") )
    {
      v1 = I_strcmp(v0, "client");
      AnimVisualizer_Reset((PlaybackLocation)(v1 != 0));
      s_AnimVyzReady = 1;
    }
    else if ( !s_AnimVyzReady )
    {
      return;
    }
    Com_sprintf(dest, 0x200ui64, "%s %s", s_RspReset, s_RspResetPlatform);
    v2 = -1i64;
    while ( dest[++v2] != 0 )
      ;
    Com_DevhostSendMessage(5, 5u, v2 + 1, dest);
  }
}

/*
==============
AnimVisualizer_CmdCheckAsset
==============
*/
void AnimVisualizer_CmdCheckAsset()
{
  const char *v0; 
  unsigned int v1; 
  const char *v2; 
  const char *v3; 
  XAssetType XAssetTypeFromTypeName; 
  int v5; 
  const char *v6; 
  __int64 v7; 
  char destBuffer[256]; 
  char dest[512]; 

  if ( Cmd_Argc() == 4 )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui(v0);
    v2 = Cmd_Argv(2);
    v3 = Cmd_Argv(3);
    DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, v3);
    if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
      __debugbreak();
    XAssetTypeFromTypeName = DB_GetXAssetTypeFromTypeName(v2);
    v5 = DB_XAssetExists(XAssetTypeFromTypeName, destBuffer);
    v6 = "doesntExist";
    if ( v5 )
      v6 = "exists";
    Com_sprintf(dest, 0x200ui64, "animvyz_checkassetresult %u %s", v1, v6);
    v7 = -1i64;
    while ( dest[++v7] != 0 )
      ;
    Com_DevhostSendMessage(5, 5u, v7 + 1, dest);
  }
}

/*
==============
AnimVisualizer_CmdSetPlaybackControls
==============
*/

void __fastcall AnimVisualizer_CmdSetPlaybackControls(double _XMM0_8)
{
  const char *v1; 
  unsigned int v2; 
  int v3; 
  int v4; 
  AnimVyzScene *i; 
  AnimVyzScene *v6; 
  const char *v7; 
  const char *v8; 
  bool v9; 
  const char *v10; 
  bool v11; 
  const char *v12; 
  bool v13; 
  const char *v14; 
  bool v15; 
  const char *v17; 

  if ( Cmd_Argc() == 7 )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = 0;
    v4 = 0;
    for ( i = s_AnimVyzScenes; i->sceneInstanceId != v2; ++i )
    {
      if ( (unsigned int)++v4 >= 0x10 )
        return;
    }
    v6 = &s_AnimVyzScenes[v4];
    if ( v6 )
    {
      v7 = Cmd_Argv(2);
      if ( !I_strcmp(v7, "playing") )
        v3 = 1;
      v8 = Cmd_Argv(3);
      v9 = I_strcmp(v8, "loop") == 0;
      v10 = Cmd_Argv(4);
      v11 = I_strcmp(v10, "move") == 0;
      v12 = Cmd_Argv(5);
      v13 = I_strcmp(v12, "notes") == 0;
      v14 = Cmd_Argv(6);
      _XMM0_8 = atof(v14);
      v15 = s_AnimVyzPlaybackLocation == Server;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      v6->looping = v9;
      v6->moving = v11;
      v6->playbackSpeed = *(float *)&_XMM1;
      v6->noteTrackPlayback = v13;
      v6->playbackState = v3;
      if ( v15 )
      {
        v6->playbackSpeed = 1.0;
        v17 = "NSRPLOQMNR";
        if ( v3 != 1 )
          v17 = "QLSLNROSO";
        Dvar_SetCommandByName(v17, v6->sceneName, 0);
      }
      AnimVisualizer_UpdateScene(v6, v6->currentTime, 1);
    }
  }
}

/*
==============
AnimVisualizer_CmdSetPlaybackPosition
==============
*/

void __fastcall AnimVisualizer_CmdSetPlaybackPosition(double _XMM0_8)
{
  const char *v1; 
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  AnimVyzScene *v5; 
  AnimVyzScene *v7; 

  if ( Cmd_Argc() == 3 )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = Cmd_Argv(2);
    _XMM0_8 = atof(v3);
    v4 = 0;
    v5 = s_AnimVyzScenes;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0; time }
    while ( v5->sceneInstanceId != v2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= 0x10 )
        return;
    }
    v7 = &s_AnimVyzScenes[v4];
    if ( v7 && (s_AnimVyzPlaybackLocation != Server || *(float *)&_XMM1 == 0.0) )
      AnimVisualizer_SetPlaybackPosition(v7, *(float *)&_XMM1, 0);
  }
}

/*
==============
AnimVisualizer_CmdCreateScene
==============
*/
void AnimVisualizer_CmdCreateScene()
{
  const char *v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  AnimVyzScene *v4; 
  __int64 v5; 
  AnimVyzScene *v6; 
  AnimVyzScene *v7; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui(v0);
    v2 = 0;
    v3 = v1;
    v4 = s_AnimVyzScenes;
    while ( v4->sceneInstanceId != v1 )
    {
      ++v2;
      ++v4;
      if ( v2 >= 0x10 )
        goto LABEL_9;
    }
    if ( &s_AnimVyzScenes[v2] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_anim_visualizer.cpp", 2104, ASSERT_TYPE_ASSERT, "(scene == nullptr)", (const char *)&queryFormat, "scene == nullptr") )
        __debugbreak();
    }
LABEL_9:
    v5 = 0i64;
    v6 = s_AnimVyzScenes;
    while ( v6->sceneInstanceId )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v6;
      if ( (unsigned int)v5 >= 0x10 )
        goto LABEL_14;
    }
    v7 = &s_AnimVyzScenes[v5];
    if ( !v7 )
    {
LABEL_14:
      Com_PrintWarning(1, "Animation Visualizer in-game active scene limit has been exceeded\n");
      return;
    }
    v7->sceneInstanceId = v3;
    v7->modelList = NULL;
    *(_QWORD *)&v7->sceneDuration = 0i64;
    v7->playbackState = Stopped;
    *(_WORD *)&v7->looping = 0;
    *(_QWORD *)&v7->sendPeriod = 0i64;
    v7->playbackSpeed = 1.0;
    *(_QWORD *)v7->position.v = 0i64;
    *(_QWORD *)&v7->position.z = 0i64;
    *(_QWORD *)&v7->angles.y = 0i64;
    v7->pendingAlignmentRequest = 0;
    v7->alignmentValueCount = 0;
    v7->currentAlignmentIndex = -1;
    *(_QWORD *)v7->sceneDisplacementPosition.v = 0i64;
    *(_QWORD *)&v7->sceneDisplacementPosition.z = 0i64;
    *(_QWORD *)&v7->sceneDisplacementAngles.y = 0i64;
    *(_QWORD *)v7->shotDisplacementPosition.v = 0i64;
    *(_QWORD *)&v7->shotDisplacementPosition.z = 0i64;
    *(_QWORD *)&v7->shotDisplacementAngles.y = 0i64;
    v7->cameraState.type = None;
    v7->cameraState.model = NULL;
  }
}

/*
==============
AnimVisualizer_CmdDestroyScene
==============
*/
char AnimVisualizer_CmdDestroyScene()
{
  int v0; 
  const char *v1; 
  int v2; 
  AnimVyzScene *i; 
  AnimVyzScene *v4; 

  v0 = Cmd_Argc();
  if ( v0 == 2 )
  {
    v1 = Cmd_Argv(1);
    v0 = I_atoui(v1);
    v2 = 0;
    for ( i = s_AnimVyzScenes; i->sceneInstanceId != v0; ++i )
    {
      if ( (unsigned int)++v2 >= 0x10 )
        return v0;
    }
    LOBYTE(v0) = v2;
    v4 = &s_AnimVyzScenes[v2];
    if ( v4 )
    {
      if ( v4->modelList )
      {
        LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_anim_visualizer.cpp", 2154, ASSERT_TYPE_ASSERT, "(scene->modelList == nullptr)", (const char *)&queryFormat, "scene->modelList == nullptr");
        if ( (_BYTE)v0 )
          __debugbreak();
      }
      v4->sceneInstanceId = 0;
    }
  }
  return v0;
}

/*
==============
AnimVisualizer_CmdCreateModel
==============
*/
void AnimVisualizer_CmdCreateModel()
{
  const char *v0; 
  unsigned int v1; 
  const char *v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  char **v7; 
  AnimVyzScene *v8; 
  __int64 v9; 
  AnimVyzScene *v10; 
  AnimVyzModel *v11; 
  char *subModels[10]; 

  if ( Cmd_Argc() >= 6 && s_AnimVyzPlaybackLocation != Server )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui(v0);
    v2 = Cmd_Argv(2);
    v3 = I_atoui(v2);
    v4 = Cmd_Argv(3);
    v5 = Cmd_Argv(4);
    v6 = 0;
    memset(subModels, 0, 72);
    if ( Cmd_Argc() - 6 > 0 )
    {
      v7 = subModels;
      do
      {
        *v7++ = (char *)Cmd_Argv(v6 + 6);
        ++v6;
      }
      while ( v6 < Cmd_Argc() - 6 );
    }
    v8 = s_AnimVyzScenes;
    v9 = 0i64;
    while ( v8->sceneInstanceId != v1 )
    {
      v9 = (unsigned int)(v9 + 1);
      ++v8;
      if ( (unsigned int)v9 >= 0x10 )
        return;
    }
    v10 = &s_AnimVyzScenes[v9];
    if ( v10 )
    {
      v11 = s_ModelPoolHead;
      if ( s_ModelPoolHead )
      {
        s_ModelPoolHead = s_ModelPoolHead->next;
        *(_QWORD *)v11->attachNames = 0i64;
        *(_QWORD *)&v11->attachNames[2] = 0i64;
        *(_QWORD *)&v11->attachNames[4] = 0i64;
        *(_QWORD *)&v11->attachNames[6] = 0i64;
        v11->models[0] = NULL;
        v11->modelInstanceId = v3;
        v11->next = v10->modelList;
        v10->modelList = v11;
        AnimVisualizer_CreateEntity(v11, v4, v5, (const char **)subModels);
      }
      else
      {
        Com_PrintWarning(1, "Animation Visualizer in-game active model limit has been exceeded\n");
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdDestroyModel
==============
*/
void AnimVisualizer_CmdDestroyModel()
{
  const char *v0; 
  unsigned int v1; 
  const char *v2; 
  unsigned int v3; 
  int v4; 
  AnimVyzScene *i; 
  AnimVyzScene *v6; 
  AnimVyzModel *modelList; 
  AnimVyzModel *v8; 
  AnimVyzModel **p_next; 
  AnimVyzModel *j; 

  if ( Cmd_Argc() == 3 && s_AnimVyzPlaybackLocation != Server )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui(v0);
    v2 = Cmd_Argv(2);
    v3 = I_atoui(v2);
    v4 = 0;
    for ( i = s_AnimVyzScenes; i->sceneInstanceId != v1; ++i )
    {
      if ( (unsigned int)++v4 >= 0x10 )
        return;
    }
    v6 = &s_AnimVyzScenes[v4];
    if ( v6 )
    {
      modelList = v6->modelList;
      if ( modelList )
      {
        while ( modelList->modelInstanceId != v3 )
        {
          modelList = modelList->next;
          if ( !modelList )
            return;
        }
        if ( v6->cameraState.type && v6->cameraState.model == modelList )
        {
          v6->cameraState.type = None;
          v6->cameraState.model = NULL;
        }
        AnimVisualizer_DestroyEntity(modelList);
        for ( j = *p_next; j != v8; j = j->next )
          p_next = &j->next;
        *p_next = v8->next;
        AnimVisualizer_FreeModel(v8);
        AnimVisualizer_SetClientViz();
        AnimVisualizer_UpdateSceneDuration(v6);
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetAnimations
==============
*/

void __fastcall AnimVisualizer_CmdSetAnimations(double _XMM0_8)
{
  int er8_2; 
  const char *v2; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 
  unsigned int v6; 
  AnimVyzScene *i; 
  __int64 v8; 
  bool v9; 
  AnimVyzScene *v10; 
  AnimVyzModel *modelList; 
  AnimVyzScene *v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  int maxBindings; 
  signed int v27; 
  XAnim_s *AnimsWithParameters; 
  XAnim_s *v29; 
  int v30; 
  unsigned __int64 linkPointer; 
  __int64 v32; 
  int v33; 
  AnimVyzAnimation *v34; 
  float v37; 
  unsigned int v38; 
  __int64 v39; 
  int v40; 
  const char *v41; 
  unsigned int v42; 
  AnimVyzAnimation *v43; 
  AnimVyzAnimation *next; 
  const char *v45; 
  const char *v46; 
  const char *v48; 
  const char *v50; 
  const char *v52; 
  const char *v54; 
  XAssetHeader v55; 
  unsigned int v56; 
  float v57; 
  unsigned int v58; 
  unsigned int v59; 
  const char *v60; 
  _DWORD *p_treeIndex; 
  __int64 v62; 
  double Length; 
  bool v64; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 
  const XAnimParts *Parts; 
  scr_string_t String; 
  AnimVyzScene *v75; 
  XAnimSyncGroupID Alloca; 
  XAnimSyncGroupID Allocb; 
  XAnimSyncGroupID Alloc; 
  XAnimNodeTypeID outNodeTypeID[4]; 
  unsigned int animIndex; 
  int v81; 
  int v82; 
  scr_anim_t animationIndex; 
  __int64 v84; 
  unsigned int v85; 
  __int64 v86; 
  XAnimEntry *v87; 
  __int64 v88; 
  AnimVyzScene *scene; 
  float v1[4]; 
  vec3_t trans; 
  vec4_t rot; 

  if ( Cmd_Argc() >= 3 )
  {
    er8_2 = Cmd_Argc() - 3;
    if ( er8_2 == 6 * (er8_2 / 6) && s_AnimVyzPlaybackLocation != Server )
    {
      v2 = Cmd_Argv(1);
      v3 = I_atoui(v2);
      v4 = Cmd_Argv(2);
      v5 = I_atoui(v4);
      v6 = 0;
      for ( i = s_AnimVyzScenes; i->sceneInstanceId != v3; ++i )
      {
        if ( ++v6 >= 0x10 )
          return;
      }
      v8 = v6;
      v9 = &s_AnimVyzScenes[v8] == NULL;
      v10 = &s_AnimVyzScenes[v8];
      scene = v10;
      if ( !v9 )
      {
        modelList = v10->modelList;
        if ( modelList )
        {
          while ( modelList->modelInstanceId != v5 )
          {
            modelList = modelList->next;
            if ( !modelList )
              return;
          }
          if ( modelList->clientModelIndex != -1 )
          {
            modelList->currentAnimation[0] = NULL;
            modelList->currentAnimation[1] = NULL;
            AnimVisualizer_DestroyAnimations(modelList);
            AnimVisualizer_UpdateSceneDuration(v12);
            v13 = (Cmd_Argc() - 3) / 6;
            v85 = v13;
            if ( v13 )
            {
              v14 = 0;
              v84 = 0i64;
              v15 = 0;
              if ( v13 > 0 )
              {
                v16 = 3;
                while ( 1 )
                {
                  v17 = Cmd_Argv(v16 + 5);
                  v18 = I_atoui(v17);
                  v19 = v18;
                  if ( v18 < 2 )
                  {
                    v20 = Cmd_Argv(v16);
                    if ( (_DWORD)v19 == 1 )
                    {
                      if ( !DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v20, 0).physicsLibrary )
                      {
                        v21 = Cmd_Argv(v16);
                        Com_PrintWarning(1, "Facial Animation \"%s\" cannot be found\n", v21);
                        return;
                      }
                    }
                    else if ( !XAnimFindData(v20) )
                    {
                      v22 = Cmd_Argv(v16);
                      Com_PrintWarning(1, "Animation \"%s\" cannot be found\n", v22);
                      return;
                    }
                    ++*((_DWORD *)&v84 + v19);
                  }
                  ++v15;
                  v16 += 6;
                  if ( v15 >= v13 )
                  {
                    v14 = v84;
                    break;
                  }
                }
              }
              if ( v13 <= s_AnimVyzAnimationPoolFreeCount )
              {
                v23 = s_UniqueNameCounter;
                modelList->cinematicAnimations = 0;
                modelList->totalAnimationDuration = 0.0;
                Com_sprintf(modelList->animDebugName, 0x40ui64, "YanimVyz%d", v23);
                v24 = v14 + 3;
                ++s_UniqueNameCounter;
                v25 = 11 * v14;
                outNodeTypeID[0] = XANIM_NODE_TYPE_INVALID;
                maxBindings = 2 * HIDWORD(v84);
                v27 = v25 + 3;
                animIndex = v25 + 3;
                XAnimAcquireMemoryLocks();
                AnimsWithParameters = XAnimCreateAnimsWithParameters(modelList->animDebugName, XANIM_SUBTREE_DEFAULT, v25 + maxBindings + 3, maxBindings, maxBindings, 0, AnimVisualizer_AllocXAnim);
                LOBYTE(Alloca) = 4;
                v29 = AnimsWithParameters;
                XAnimBlend(AnimsWithParameters, 0, "root", 1u, (maxBindings > 0) + 1, 0, Alloca, 1);
                LOBYTE(Allocb) = 4;
                XAnimBlend(v29, 1u, "xanims", 3u, v25, 0, Allocb, 1);
                if ( maxBindings > 0 )
                {
                  LOBYTE(Alloc) = 4;
                  XAnimBlend(v29, 2u, "faces", v27, maxBindings, 0, Alloc, 1);
                  XAnimFindNodeTypeByName(scr_const.xanimMayhemLink, outNodeTypeID);
                }
                v30 = 0;
                linkPointer = v27;
                v32 = 0i64;
                v82 = 0;
                animationIndex = (scr_anim_t)v27;
                v86 = 0i64;
                do
                {
                  v81 = 0;
                  v33 = 0;
                  v34 = NULL;
                  v1[0] = 0.0;
                  v1[1] = 0.0;
                  v1[2] = 0.0;
                  _XMM8 = 0i64;
                  _XMM13 = 0i64;
                  v37 = 0.0;
                  if ( v13 > 0 )
                  {
                    v38 = 3;
                    v39 = v85;
                    v40 = 4;
                    v88 = v85;
                    v87 = &v29->entries[linkPointer];
                    do
                    {
                      v41 = Cmd_Argv(v40 + 4);
                      v42 = I_atoui(v41);
                      v30 = v82;
                      if ( v42 == v82 )
                      {
                        v43 = s_AnimationPoolHead;
                        if ( s_AnimationPoolHead )
                        {
                          next = s_AnimationPoolHead->next;
                          --s_AnimVyzAnimationPoolFreeCount;
                          s_AnimationPoolHead = next;
                        }
                        v43->next = NULL;
                        if ( v34 )
                          v34->next = v43;
                        else
                          modelList->animationList[v86] = v43;
                        v45 = Cmd_Argv(v40 - 1);
                        v43->name = SL_GetString(v45, 0);
                        v46 = Cmd_Argv(v40);
                        _XMM0_8 = atof(v46);
                        __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
                        v48 = Cmd_Argv(v40 + 1);
                        _XMM0_8 = atof(v48);
                        __asm { vcvtsd2ss xmm14, xmm0, xmm0 }
                        v50 = Cmd_Argv(v40 + 2);
                        _XMM0_8 = atof(v50);
                        __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
                        v52 = Cmd_Argv(v40 + 3);
                        _XMM0_8 = atof(v52);
                        __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
                        if ( v86 == 1 )
                        {
                          v54 = Cmd_Argv(v40 - 1);
                          v55.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v54, 1).physicsLibrary;
                          v56 = animIndex;
                          v43->deltaAnimationTreeIndex = animIndex;
                          v57 = *(float *)&v55.physicsLibrary[3].name;
                          v58 = v56 + 1;
                          LOBYTE(Alloc) = 4;
                          XAnimBlend(v29, v56, "facial", v56 + 1, 1u, 0x40u, Alloc, 1);
                          v59 = animIndex;
                          v87->nodeType = outNodeTypeID[0];
                          XAnimBindStringToNodeParameter(v29, v59, scr_const.xanimMayhemName, v43->name);
                          XAnimBindStringToNodeParameter(v29, animIndex, scr_const.xanimMayhemAttachBone, scr_const.j_spine4);
                          XAnimCreate(v29, v58, "void", 1);
                          animIndex += 2;
                          *(_QWORD *)&animationIndex += 2i64;
                          v87 += 2;
                        }
                        else if ( modelList->isSiege )
                        {
                          v57 = FLOAT_1_0;
                        }
                        else
                        {
                          v60 = Cmd_Argv(v40 - 1);
                          XAnimCreate(v29, v38, v60, 1);
                          v43->deltaAnimationTreeIndex = v38;
                          p_treeIndex = &v43->additiveAnimations[0].treeIndex;
                          v62 = 5i64;
                          do
                          {
                            LOBYTE(Alloc) = 4;
                            *((_BYTE *)p_treeIndex - 4) = 0;
                            *p_treeIndex = v24;
                            XAnimBlend(v29, v24, "additive", v24 + 1, 1u, 0x10u, Alloc, 1);
                            v24 += 2;
                            p_treeIndex += 4;
                            --v62;
                          }
                          while ( v62 );
                          Length = XAnimGetLength(v29, v38);
                          v57 = *(float *)&Length;
                          XAnimGetAbsDelta(v29, v38, &rot, &trans, 0.0);
                          v64 = VecNCompareCustomEpsilon(trans.v, v1, 0.001, 3);
                          v33 = v81;
                          if ( !v64 )
                            modelList->cinematicAnimations = 1;
                        }
                        if ( *(float *)&_XMM8 != *(float *)&_XMM7 )
                        {
                          v81 = ++v33;
                          v37 = 0.0;
                        }
                        __asm
                        {
                          vcmpneqss xmm0, xmm8, xmm7
                          vblendvps xmm0, xmm8, xmm7, xmm0
                        }
                        *(float *)&v84 = *(float *)&_XMM0;
                        __asm
                        {
                          vcmpneqss xmm0, xmm8, xmm7
                          vblendvps xmm0, xmm13, xmm7, xmm0
                        }
                        v70 = _XMM0;
                        *(float *)&v70 = *(float *)&_XMM0 - v37;
                        v69 = v70;
                        v71 = _XMM12;
                        *(float *)&v71 = *(float *)&_XMM12 / v57;
                        *(_OWORD *)&_XMM0_8 = v71;
                        v72 = v69;
                        *(float *)&v72 = *(float *)&v69 + (float)(v57 - *(float *)&_XMM12);
                        _XMM13 = v72;
                        v43->startTimeRatio = *(float *)&_XMM0_8;
                        v43->startTime = *(float *)&v69;
                        v43->blendInTime = *(float *)&_XMM14;
                        v43->duration = (float)(v57 - *(float *)&_XMM12) - *(float *)&_XMM10;
                        v43->blendOutTime = *(float *)&_XMM10;
                        v43->startTrimTime = *(float *)&_XMM12;
                        v43->animationDuration = v57;
                        v43->shotNumber = v33;
                        if ( *(float *)&v72 > modelList->totalAnimationDuration )
                          modelList->totalAnimationDuration = *(float *)&v72;
                        _XMM8 = (unsigned int)v84;
                        v30 = v82;
                        v34 = v43;
                        v39 = v88;
                        ++v38;
                        v37 = *(float *)&_XMM10;
                      }
                      v40 += 6;
                      v88 = --v39;
                    }
                    while ( v39 );
                    v32 = v86;
                    v13 = v85;
                    linkPointer = animationIndex.linkPointer;
                  }
                  ++v30;
                  ++v32;
                  v82 = v30;
                  v86 = v32;
                }
                while ( v32 < 2 );
                XAnimSetupBindingIndexes(v29);
                animationIndex.index = 3;
                *(_DWORD *)((char *)&animationIndex.linkPointer + 2) = 0;
                HIWORD(animationIndex.linkPointer) = 0;
                Parts = XAnimGetParts(v29, 3u);
                String = SL_GetString(modelList->animDebugName, 0);
                CG_ClientModel_SetAnimation(LOCAL_CLIENT_0, modelList->clientModelIndex, String, v29, Parts, animationIndex);
                AnimVisualizer_UpdateSceneDuration(scene);
                AnimVisualizer_SetPlaybackPosition(v75, v75->currentTime, 1);
                XanimReleaseMemoryLocks();
              }
              else
              {
                Com_PrintWarning(1, "Animation limit exceeded\n");
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetCameraAnimations
==============
*/

void __fastcall AnimVisualizer_CmdSetCameraAnimations(double _XMM0_8)
{
  const char *v1; 
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  int v5; 
  AnimVyzScene *i; 
  AnimVyzScene *v7; 
  AnimVyzModel *modelList; 
  int v9; 
  AnimVyzCameraAnimation *v10; 
  int v11; 
  __int64 v12; 
  const char *v13; 
  AnimVyzCameraAnimation *v14; 
  AnimVyzCameraAnimation *next; 
  XAssetHeader v16; 
  XAssetHeader v17; 
  const char *v18; 

  if ( Cmd_Argc() >= 3 && (((unsigned __int8)Cmd_Argc() - 1) & 1) == 0 && s_AnimVyzPlaybackLocation != Server )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = Cmd_Argv(2);
    v4 = I_atoui(v3);
    v5 = 0;
    for ( i = s_AnimVyzScenes; i->sceneInstanceId != v2; ++i )
    {
      if ( (unsigned int)++v5 >= 0x10 )
        return;
    }
    v7 = &s_AnimVyzScenes[v5];
    if ( v7 )
    {
      modelList = v7->modelList;
      if ( modelList )
      {
        while ( modelList->modelInstanceId != v4 )
        {
          modelList = modelList->next;
          if ( !modelList )
            return;
        }
        if ( modelList->clientModelIndex != -1 )
        {
          AnimVisualizer_DestroyCameraAnimations(modelList);
          AnimVisualizer_UpdateSceneDuration(v7);
          v9 = (Cmd_Argc() - 3) / 2;
          if ( v9 )
          {
            if ( v9 <= s_CameraAnimationPoolFreeCount )
            {
              v10 = NULL;
              if ( v9 > 0 )
              {
                v11 = 4;
                v12 = (unsigned int)v9;
                do
                {
                  v13 = Cmd_Argv(v11 - 1);
                  v14 = s_CameraAnimationPoolHead;
                  if ( s_CameraAnimationPoolHead )
                  {
                    next = s_CameraAnimationPoolHead->next;
                    --s_CameraAnimationPoolFreeCount;
                    s_CameraAnimationPoolHead = next;
                  }
                  v14->next = NULL;
                  if ( v10 )
                    v10->next = v14;
                  else
                    modelList->cameraAnimationList = v14;
                  v16.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XCAM, v13, 0).physicsLibrary;
                  v17.physicsLibrary = v16.physicsLibrary;
                  if ( v16.physicsLibrary )
                  {
                    v14->cameraIndex = v16.xcam;
                    v18 = Cmd_Argv(v11);
                    _XMM0_8 = atof(v18);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    v14->startTime = *(float *)&_XMM1;
                    v10 = v14;
                    *(&_XMM0_8 + 1) = 0.0;
                    v14->duration = (float)(HIDWORD(v17.physicsLibrary[1].name) - 1) / (float)*(int *)&v17.physicsLibrary[1].isMaterialList;
                  }
                  v11 += 2;
                  --v12;
                }
                while ( v12 );
              }
              modelList->totalCameraAnimationDuration = v10->duration + v10->startTime;
              AnimVisualizer_UpdateSceneDuration(v7);
            }
            else
            {
              Com_PrintWarning(1, "CameraAnimation limit exceeded\n");
            }
          }
        }
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetActiveScene
==============
*/
int AnimVisualizer_CmdSetActiveScene()
{
  int result; 
  const char *v1; 

  result = Cmd_Argc();
  if ( result == 2 )
  {
    v1 = Cmd_Argv(1);
    s_AnimVyzActiveSceneInstanceId = I_atoui(v1);
    return AnimVisualizer_SetClientViz();
  }
  return result;
}

/*
==============
AnimVisualizer_CmdSetSceneCamera
==============
*/
int AnimVisualizer_CmdSetSceneCamera()
{
  int result; 
  const char *v1; 
  int v2; 
  AnimVyzScene *i; 
  AnimVyzScene *v4; 
  const char *v5; 
  const char *v6; 
  AnimVyzModel *v7; 
  const char *v8; 
  AnimVyzModel *modelList; 

  result = Cmd_Argc();
  if ( result >= 3 )
  {
    result = Cmd_Argc();
    if ( result <= 4 && s_AnimVyzPlaybackLocation != Server )
    {
      v1 = Cmd_Argv(1);
      result = I_atoui(v1);
      v2 = 0;
      for ( i = s_AnimVyzScenes; i->sceneInstanceId != result; ++i )
      {
        if ( (unsigned int)++v2 >= 0x10 )
          return result;
      }
      result = v2;
      v4 = &s_AnimVyzScenes[v2];
      if ( v4 )
      {
        v4->cameraState.type = None;
        v4->cameraState.model = NULL;
        v5 = Cmd_Argv(2);
        if ( I_strcmp(v5, "animated") )
        {
          result = I_strcmp(v5, "firstperson");
          if ( !result )
          {
            v8 = Cmd_Argv(3);
            result = I_atoui(v8);
            modelList = v4->modelList;
            if ( modelList )
            {
              while ( modelList->modelInstanceId != result )
              {
                modelList = modelList->next;
                if ( !modelList )
                  return result;
              }
              if ( modelList->clientModelIndex != -1 )
              {
                v4->cameraState.type = 2;
                v4->cameraState.model = modelList;
              }
            }
          }
        }
        else
        {
          v6 = Cmd_Argv(3);
          result = I_atoui(v6);
          v7 = v4->modelList;
          if ( v7 )
          {
            while ( v7->modelInstanceId != result )
            {
              v7 = v7->next;
              if ( !v7 )
                return result;
            }
            if ( v7->clientModelIndex != -1 )
            {
              v4->cameraState.type = 1;
              v4->cameraState.model = v7;
            }
          }
        }
      }
    }
  }
  return result;
}

/*
==============
AnimVisualizer_CmdSetSceneAlignment
==============
*/

void __fastcall AnimVisualizer_CmdSetSceneAlignment(double _XMM0_8)
{
  int v1; 
  const char *v2; 
  unsigned int v3; 
  int v4; 
  __int64 v5; 
  AnimVyzScene *i; 
  AnimVyzScene *v7; 
  int v8; 
  int v9; 
  int v10; 
  float *p_startTime; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v18; 
  const char *v20; 
  const char *v22; 
  const char *v24; 
  const char *v26; 
  const char *v28; 
  const char *v30; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_Argc() - 2;
    if ( v1 == 10 * (v1 / 10) && s_AnimVyzPlaybackLocation != Server )
    {
      v2 = Cmd_Argv(1);
      v3 = I_atoui(v2);
      v4 = 0;
      v5 = 0i64;
      for ( i = s_AnimVyzScenes; i->sceneInstanceId != v3; ++i )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= 0x10 )
          return;
      }
      v7 = &s_AnimVyzScenes[v5];
      if ( v7 )
      {
        v8 = (Cmd_Argc() - 2) / 10;
        v9 = 16;
        if ( v8 < 16 )
          v9 = v8;
        v7->alignmentValueCount = v9;
        if ( v9 > 0 )
        {
          v10 = 3;
          p_startTime = &v7->alignmentValues[0].startTime;
          do
          {
            v12 = (char *)&queryFormat.fmt + 3;
            v13 = (char *)&queryFormat.fmt + 3;
            v14 = Cmd_Argv(v10 - 1);
            if ( I_strcmp(v14, ":") )
              v12 = Cmd_Argv(v10 - 1) + 1;
            v15 = Cmd_Argv(v10);
            if ( !I_strcmp(v15, ":") )
              v13 = Cmd_Argv(v10) + 1;
            Core_strcpy((char *)p_startTime - 128, 0x40ui64, v12);
            Core_strcpy((char *)p_startTime - 64, 0x40ui64, v13);
            v16 = Cmd_Argv(v10 + 1);
            _XMM0_8 = atof(v16);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            *p_startTime = *(float *)&_XMM1;
            v18 = Cmd_Argv(v10 + 2);
            _XMM0_8 = atof(v18);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[1] = *(float *)&_XMM1;
            v20 = Cmd_Argv(v10 + 3);
            _XMM0_8 = atof(v20);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[2] = *(float *)&_XMM1;
            v22 = Cmd_Argv(v10 + 4);
            _XMM0_8 = atof(v22);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[3] = *(float *)&_XMM1;
            v24 = Cmd_Argv(v10 + 5);
            _XMM0_8 = atof(v24);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[4] = *(float *)&_XMM1;
            v26 = Cmd_Argv(v10 + 6);
            _XMM0_8 = atof(v26);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[5] = *(float *)&_XMM1;
            v28 = Cmd_Argv(v10 + 7);
            _XMM0_8 = atof(v28);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[6] = *(float *)&_XMM1;
            v30 = Cmd_Argv(v10 + 8);
            _XMM0_8 = atof(v30);
            ++v4;
            v10 += 10;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            p_startTime[7] = *(float *)&_XMM1;
            p_startTime += 40;
          }
          while ( v4 < v7->alignmentValueCount );
        }
        v7->currentAlignmentIndex = -1;
        AnimVisualizer_UpdateSceneAlignment(v7);
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetSceneInfo
==============
*/

void __fastcall AnimVisualizer_CmdSetSceneInfo(double _XMM0_8)
{
  const char *v1; 
  unsigned int v2; 
  int v3; 
  AnimVyzScene *i; 
  AnimVyzScene *v5; 
  const char *v6; 
  const char *v7; 

  if ( Cmd_Argc() == 4 )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = 0;
    for ( i = s_AnimVyzScenes; i->sceneInstanceId != v2; ++i )
    {
      if ( (unsigned int)++v3 >= 0x10 )
        return;
    }
    v5 = &s_AnimVyzScenes[v3];
    if ( v5 )
    {
      v6 = Cmd_Argv(2);
      v7 = Cmd_Argv(3);
      _XMM0_8 = atof(v7);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      Core_strcpy(v5->sceneName, 0x40ui64, v6);
      v5->sceneDuration = *(float *)&_XMM6;
    }
  }
}

/*
==============
AnimVisualizer_CmdSetCameraAlignmentEnable
==============
*/
int AnimVisualizer_CmdSetCameraAlignmentEnable()
{
  int result; 
  const char *v1; 

  result = Cmd_Argc();
  if ( result == 2 )
  {
    v1 = Cmd_Argv(1);
    result = I_strcmp(v1, "enable");
    s_AnimVyzCameraAlignmentEnable = result == 0;
  }
  return result;
}

/*
==============
AnimVisualizer_CmdSetObjectDisplacement
==============
*/

void __fastcall AnimVisualizer_CmdSetObjectDisplacement(double _XMM0_8)
{
  const char *v1; 
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  AnimVyzScene *v5; 
  unsigned int v6; 
  AnimVyzScene *v7; 
  AnimVyzModel *modelList; 
  const char *v9; 
  const char *v11; 
  const char *v13; 
  const char *v15; 
  const char *v17; 
  const char *v19; 

  if ( Cmd_Argc() == 9 && s_AnimVyzPlaybackLocation != Server )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = Cmd_Argv(2);
    v4 = I_atoui(v3);
    v5 = s_AnimVyzScenes;
    v6 = 0;
    while ( v5->sceneInstanceId != v2 )
    {
      ++v6;
      ++v5;
      if ( v6 >= 0x10 )
        return;
    }
    v7 = &s_AnimVyzScenes[v6];
    if ( v7 )
    {
      modelList = v7->modelList;
      if ( modelList )
      {
        while ( modelList->modelInstanceId != v4 )
        {
          modelList = modelList->next;
          if ( !modelList )
            return;
        }
        if ( modelList->clientModelIndex != -1 )
        {
          v9 = Cmd_Argv(3);
          _XMM0_8 = atof(v9);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->displacementPosition.v[0] = *(float *)&_XMM1;
          v11 = Cmd_Argv(4);
          _XMM0_8 = atof(v11);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->displacementPosition.v[1] = *(float *)&_XMM1;
          v13 = Cmd_Argv(5);
          _XMM0_8 = atof(v13);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->displacementPosition.v[2] = *(float *)&_XMM1;
          v15 = Cmd_Argv(6);
          _XMM0_8 = atof(v15);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->displacementAngles.v[0] = *(float *)&_XMM1;
          v17 = Cmd_Argv(7);
          _XMM0_8 = atof(v17);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->displacementAngles.v[1] = *(float *)&_XMM1;
          v19 = Cmd_Argv(8);
          _XMM0_8 = atof(v19);
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->displacementAngles.v[2] = *(float *)&_XMM1;
          AnimVisualizer_SetPlaybackPosition(v7, v7->currentTime, 1);
        }
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetDisplayModelTags
==============
*/
int AnimVisualizer_CmdSetDisplayModelTags()
{
  AnimVyzScene *v0; 
  const char *v1; 
  unsigned int v2; 
  const char *v3; 
  int v4; 
  AnimVyzScene *v5; 
  unsigned int v6; 
  char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  const char *v11; 

  LODWORD(v0) = Cmd_Argc();
  if ( (int)v0 >= 3 && s_AnimVyzPlaybackLocation != Server )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = Cmd_Argv(2);
    LODWORD(v0) = I_atoui(v3);
    v4 = (int)v0;
    v5 = s_AnimVyzScenes;
    v6 = 0;
    while ( v5->sceneInstanceId != v2 )
    {
      ++v6;
      ++v5;
      if ( v6 >= 0x10 )
        return (int)v0;
    }
    v0 = &s_AnimVyzScenes[v6];
    if ( v0 )
    {
      v0 = (AnimVyzScene *)v0->modelList;
      if ( v0 )
      {
        while ( v0->sceneInstanceId != v4 )
        {
          v0 = (AnimVyzScene *)v0->modelList;
          if ( !v0 )
            return (int)v0;
        }
        if ( LODWORD(v0->sceneDuration) != -1 )
        {
          v7 = &v0->alignmentValues[1].tag[12];
          *(_QWORD *)&v0->alignmentValues[1].tag[12] = 0i64;
          *(_QWORD *)&v0->alignmentValues[1].tag[20] = 0i64;
          *(_QWORD *)&v0->alignmentValues[1].tag[28] = 0i64;
          *(_QWORD *)&v0->alignmentValues[1].tag[36] = 0i64;
          *(_QWORD *)&v0->alignmentValues[1].tag[44] = 0i64;
          *(_DWORD *)&v0->alignmentValues[1].tag[52] = 0;
          LODWORD(v0) = Cmd_Argc() - 3;
          v8 = 10;
          if ( (int)v0 < 10 )
            v8 = (int)v0;
          v9 = v8;
          if ( v8 > 0 )
          {
            v10 = 3;
            do
            {
              v11 = Cmd_Argv(v10);
              LODWORD(v0) = SL_GetLowercaseString(v11, 0);
              ++v10;
              *(_DWORD *)v7 = (_DWORD)v0;
              v7 += 4;
              --v9;
            }
            while ( v9 );
          }
        }
      }
    }
  }
  return (int)v0;
}

/*
==============
AnimVisualizer_CmdSetAttachedObjects
==============
*/
void AnimVisualizer_CmdSetAttachedObjects()
{
  const char *v0; 
  unsigned int v1; 
  const char *v2; 
  unsigned int v3; 
  AnimVyzScene *v4; 
  unsigned int v5; 
  AnimVyzScene *v6; 
  AnimVyzModel *modelList; 
  int v8; 
  const XModel **models; 
  XModel **v10; 
  scr_string_t *attachNames; 
  int v12; 
  __int64 v13; 
  XAssetHeader *v14; 
  scr_string_t *v15; 
  const char *v16; 
  XAssetHeader v17; 
  const char *v18; 
  __int64 v19; 
  const XModel **v20; 
  __int64 v21; 
  scr_string_t *v22; 

  if ( Cmd_Argc() >= 3 && (((unsigned __int8)Cmd_Argc() - 1) & 1) == 0 && s_AnimVyzPlaybackLocation != Server )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui(v0);
    v2 = Cmd_Argv(2);
    v3 = I_atoui(v2);
    v4 = s_AnimVyzScenes;
    v5 = 0;
    while ( v4->sceneInstanceId != v1 )
    {
      ++v5;
      ++v4;
      if ( v5 >= 0x10 )
        return;
    }
    v6 = &s_AnimVyzScenes[v5];
    if ( v6 )
    {
      modelList = v6->modelList;
      if ( modelList )
      {
        while ( modelList->modelInstanceId != v3 )
        {
          modelList = modelList->next;
          if ( !modelList )
            return;
        }
        if ( modelList->clientModelIndex != -1 )
        {
          v8 = 0;
          models = (const XModel **)modelList->models;
          if ( modelList->models[0] )
          {
            v10 = modelList->models;
            attachNames = modelList->attachNames;
            do
            {
              if ( *attachNames )
                break;
              ++v10;
              ++v8;
              ++attachNames;
            }
            while ( *v10 );
          }
          v12 = 3;
          if ( Cmd_Argc() > 3 )
          {
            v13 = v8;
            v14 = (XAssetHeader *)&modelList->models[v8];
            v15 = &modelList->attachNames[v8];
            do
            {
              if ( v13 < 8 )
              {
                v16 = Cmd_Argv(v12 + 1);
                v17.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v16, 0).physicsLibrary;
                if ( v17.physicsLibrary )
                {
                  v18 = Cmd_Argv(v12);
                  *v15 = SL_GetString(v18, 0);
                  ++v8;
                  ++v15;
                  v14->physicsLibrary = v17.physicsLibrary;
                  ++v13;
                  ++v14;
                }
              }
              v12 += 2;
            }
            while ( v12 < Cmd_Argc() );
            models = (const XModel **)modelList->models;
          }
          v19 = v8;
          modelList->models[v8] = NULL;
          if ( v8 )
          {
            CG_ClientModel_SetModel(LOCAL_CLIENT_0, modelList->clientModelIndex, *models);
            if ( v8 > 1i64 )
            {
              v20 = (const XModel **)&modelList->models[1];
              v21 = v19 - 1;
              v22 = &modelList->attachNames[1];
              do
              {
                CG_ClientModel_AddModel(LOCAL_CLIENT_0, modelList->clientModelIndex, *v20++, *v22++);
                --v21;
              }
              while ( v21 );
            }
          }
          AnimVisualizer_SetPlaybackPosition(v6, v6->currentTime, 1);
        }
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetDvrRecordParams
==============
*/

void __fastcall AnimVisualizer_CmdSetDvrRecordParams(double _XMM0_8)
{
  const char *v1; 
  const char *v2; 
  const char *v4; 

  if ( Cmd_Argc() == 4 )
  {
    v1 = Cmd_Argv(1);
    s_AnimVyzDVRRecordEnabled = I_strcmp(v1, "enable") == 0;
    v2 = Cmd_Argv(2);
    _XMM0_8 = atof(v2);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    s_AnimVyzDVRRecordStartTime = *(float *)&_XMM1;
    v4 = Cmd_Argv(3);
    _XMM0_8 = atof(v4);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    s_AnimVyzDVRRecordEndTime = *(float *)&_XMM1;
  }
}

/*
==============
AnimVisualizer_CmdSetModelsVisibleAlways
==============
*/
int AnimVisualizer_CmdSetModelsVisibleAlways()
{
  int result; 
  const char *v1; 

  result = Cmd_Argc();
  if ( result == 2 )
  {
    v1 = Cmd_Argv(1);
    result = I_strcmp(v1, "enable");
    s_AnimVyzModelsAlwaysVisible = result == 0;
  }
  return result;
}

/*
==============
AnimVisualizer_CmdSetDisplayDebugInfo
==============
*/
int AnimVisualizer_CmdSetDisplayDebugInfo()
{
  int result; 
  const char *v1; 

  result = Cmd_Argc();
  if ( result == 2 )
  {
    v1 = Cmd_Argv(1);
    result = I_strcmp(v1, "enable");
    s_AnimVyzDisplayDebugInfo = result == 0;
  }
  return result;
}

/*
==============
AnimVisualizer_CmdOverrideNotetrack
==============
*/

void __fastcall AnimVisualizer_CmdOverrideNotetrack(double _XMM0_8, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; 
  AnimVyzNoteTrackOverride *v8; 
  XAnimParts *Data; 
  const char *v10; 
  bool *p_inUse; 
  AnimVyzNoteTrackOverride *v12; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  const char *v16; 
  unsigned int v17; 
  const char *v18; 
  unsigned int v19; 
  XAnimNotifyInfo *notifyInfo; 
  int v21; 
  __int64 v22; 
  const char *v23; 
  int v24; 
  const char *v26; 

  if ( Cmd_Argc() < 5 )
    return;
  v7 = Cmd_Argc() - 5;
  if ( v7 != 5 * (v7 / 5) )
    return;
  v8 = (AnimVyzNoteTrackOverride *)Cmd_Argv(1);
  Data = XAnimFindData(v8->animationName);
  if ( !Data )
  {
    v10 = Cmd_Argv(1);
    Com_PrintWarning(1, "Animation %s not found", v10);
    return;
  }
  p_inUse = &s_AnimVyzNoteTrackOverrides[0].inUse;
  v12 = NULL;
  v13 = 0;
  while ( 1 )
  {
    if ( !*p_inUse )
    {
      if ( !v12 )
        v12 = &s_AnimVyzNoteTrackOverrides[v13];
      goto LABEL_10;
    }
    if ( &s_AnimVyzNoteTrackOverrides[v13] == v8 )
      break;
LABEL_10:
    ++v13;
    p_inUse += 2344;
    if ( v13 >= 0x10 )
      goto LABEL_13;
  }
  v12 = &s_AnimVyzNoteTrackOverrides[v13];
LABEL_13:
  if ( v12 )
  {
    if ( v12->inUse )
    {
      v12->inUse = 0;
      if ( Data == v12->originalParts )
      {
        Data->notify = v12->originalNotify;
        Data->notifyCount = v12->originalNotifyCount;
      }
    }
    v14 = Cmd_Argv(2);
    v15 = I_atoui(v14);
    v16 = Cmd_Argv(3);
    v17 = I_atoui(v16);
    v18 = Cmd_Argv(4);
    v19 = v15 + I_atoui(v18) + v17;
    if ( v19 )
    {
      if ( v19 <= 0x100 )
      {
        if ( 5 * v19 == Cmd_Argc() - 5 )
        {
          v12->inUse = 1;
          strncpy(v12->animationName, v8->animationName, 0x100ui64);
          v12->originalParts = Data;
          notifyInfo = v12->notifyInfo;
          v21 = 5;
          v22 = v19;
          do
          {
            v23 = Cmd_Argv(v21);
            _XMM0_8 = atof(v23);
            v24 = v21 + 1;
            v21 += 2;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            notifyInfo->time = *(float *)&_XMM1;
            v26 = Cmd_Argv(v24);
            notifyInfo->name = SL_GetLowercaseString(v26, 0);
            ++notifyInfo;
            --v22;
          }
          while ( v22 );
          v12->originalNotify = Data->notify;
          v12->originalNotifyCount = Data->notifyCount;
          Data->notify = v12->notifyInfo;
          Data->notifyCount = v15;
        }
        else
        {
          Com_PrintWarning(1, "Invalid animation note track override command");
        }
      }
      else
      {
        Com_PrintWarning(1, "Maximum number of animation note overrides has been exceeded");
      }
    }
  }
  else
  {
    Com_PrintWarning(1, "Maximum number of animation note track overrides has been exceeded", p_inUse, s_AnimVyzNoteTrackOverrides, a5, a6, a7);
  }
}

/*
==============
AnimVisualizer_CmdSetAdditiveAnimations
==============
*/

void __fastcall AnimVisualizer_CmdSetAdditiveAnimations(double _XMM0_8)
{
  int v1; 
  const char *v2; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 
  AnimVyzScene *v6; 
  unsigned int v7; 
  AnimVyzScene *v8; 
  AnimVyzModel *modelList; 
  unsigned int clientModelIndex; 
  AnimVyzAnimation *v11; 
  int v12; 
  const DObj *DObj; 
  int *p_treeIndex; 
  __int64 v15; 
  int v16; 
  int v17; 
  const char *v18; 
  const char *v19; 
  int v20; 
  XAnimTree *Tree; 
  const char *v22; 
  int v23; 
  const char *v25; 

  if ( Cmd_Argc() >= 3 )
  {
    v1 = Cmd_Argc() - 3;
    if ( v1 == 15 * (v1 / 15) && s_AnimVyzPlaybackLocation != Server )
    {
      v2 = Cmd_Argv(1);
      v3 = I_atoui(v2);
      v4 = Cmd_Argv(2);
      v5 = I_atoui(v4);
      v6 = s_AnimVyzScenes;
      v7 = 0;
      while ( v6->sceneInstanceId != v3 )
      {
        ++v7;
        ++v6;
        if ( v7 >= 0x10 )
          return;
      }
      v8 = &s_AnimVyzScenes[v7];
      if ( v8 )
      {
        modelList = v8->modelList;
        if ( modelList )
        {
          while ( modelList->modelInstanceId != v5 )
          {
            modelList = modelList->next;
            if ( !modelList )
              return;
          }
          clientModelIndex = modelList->clientModelIndex;
          if ( clientModelIndex != -1 )
          {
            v11 = modelList->animationList[0];
            v12 = 3;
            DObj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, clientModelIndex);
            if ( DObj )
            {
              for ( ; v11; v11 = v11->next )
              {
                p_treeIndex = &v11->additiveAnimations[0].treeIndex;
                v15 = 5i64;
                do
                {
                  v16 = v12;
                  v17 = v12 + 1;
                  v18 = Cmd_Argv(v16);
                  v19 = v18;
                  if ( asc_143D6868C[0] != *v18 || asc_143D6868C[1] != v18[1] )
                  {
                    v20 = *p_treeIndex;
                    *((_BYTE *)p_treeIndex - 4) = 1;
                    Tree = DObjGetTree(DObj);
                    XAnimCreate(Tree->anims, v20 + 1, v19, 1);
                  }
                  v22 = Cmd_Argv(v17);
                  _XMM0_8 = atof(v22);
                  v23 = v17 + 1;
                  v12 = v17 + 2;
                  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                  p_treeIndex[1] = _XMM1;
                  v25 = Cmd_Argv(v23);
                  _XMM0_8 = atof(v25);
                  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                  p_treeIndex[2] = _XMM1;
                  p_treeIndex += 4;
                  --v15;
                }
                while ( v15 );
              }
              AnimVisualizer_SetPlaybackPosition(v8, v8->currentTime, 1);
            }
          }
        }
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdSetAdditiveAnimationWeights
==============
*/

void __fastcall AnimVisualizer_CmdSetAdditiveAnimationWeights(double _XMM0_8)
{
  const char *v1; 
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  AnimVyzScene *v5; 
  unsigned int v6; 
  AnimVyzScene *v7; 
  AnimVyzModel *modelList; 
  const char *v9; 
  int v10; 
  float *additiveAnimationWeights; 
  __int64 v13; 
  const char *v14; 

  if ( Cmd_Argc() == 9 && s_AnimVyzPlaybackLocation != Server )
  {
    v1 = Cmd_Argv(1);
    v2 = I_atoui(v1);
    v3 = Cmd_Argv(2);
    v4 = I_atoui(v3);
    v5 = s_AnimVyzScenes;
    v6 = 0;
    while ( v5->sceneInstanceId != v2 )
    {
      ++v6;
      ++v5;
      if ( v6 >= 0x10 )
        return;
    }
    v7 = &s_AnimVyzScenes[v6];
    if ( v7 )
    {
      modelList = v7->modelList;
      if ( modelList )
      {
        while ( modelList->modelInstanceId != v4 )
        {
          modelList = modelList->next;
          if ( !modelList )
            return;
        }
        if ( modelList->clientModelIndex != -1 )
        {
          v9 = Cmd_Argv(3);
          _XMM0_8 = atof(v9);
          v10 = 4;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          modelList->additiveAnimationBlendRate = *(float *)&_XMM1;
          additiveAnimationWeights = modelList->additiveAnimationWeights;
          v13 = 5i64;
          do
          {
            v14 = Cmd_Argv(v10);
            _XMM0_8 = atof(v14);
            ++v10;
            ++additiveAnimationWeights;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            *(additiveAnimationWeights - 1) = *(float *)&_XMM1;
            --v13;
          }
          while ( v13 );
          AnimVisualizer_SetPlaybackPosition(v7, v7->currentTime, 1);
        }
      }
    }
  }
}

/*
==============
AnimVisualizer_CmdLoadMyChanges
==============
*/
void AnimVisualizer_CmdLoadMyChanges()
{
  int v0; 
  int v1; 
  scrContext_t *v2; 

  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v0 = strlen_noncrt("loadzone mychanges");
  v1 = v0;
  if ( s_cmd_textArray[0].cmdsize + v0 < s_cmd_textArray[0].maxsize )
  {
    memcpy_noncrt(&s_cmd_textArray[0].data[s_cmd_textArray[0].cmdsize], "loadzone mychanges", v0 + 1);
    s_cmd_textArray[0].cmdsize += v1;
    v2 = ScriptContext_Server();
    Scr_MonitorCommand(v2, "loadzone mychanges");
  }
  else
  {
    Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "loadzone mychanges");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
AnimVisualizer_AllocXAnim
==============
*/
char *AnimVisualizer_AllocXAnim(unsigned __int64 size)
{
  char *result; 

  result = (char *)MT_Alloc((int)size + 4i64, 9);
  if ( result )
  {
    *(_QWORD *)result = size;
    result += 8;
  }
  return result;
}

/*
==============
AnimVisualizer_ApplySceneAlignment
==============
*/
void AnimVisualizer_ApplySceneAlignment(AnimVyzScene *scene, const AnimVyzModel *modelInstance, const vec3_t *positionIn, const vec3_t *anglesIn, vec3_t *positionOut, vec3_t *anglesOut)
{
  float v7; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  float v1[4]; 

  positionOut->v[0] = positionIn->v[0] + scene->position.v[0];
  positionOut->v[1] = scene->position.v[1] + positionIn->v[1];
  positionOut->v[2] = scene->position.v[2] + positionIn->v[2];
  anglesOut->v[0] = scene->angles.v[0] + anglesIn->v[0];
  anglesOut->v[1] = scene->angles.v[1] + anglesIn->v[1];
  v7 = scene->angles.v[2] + anglesIn->v[2];
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  anglesOut->v[2] = v7;
  if ( VecNCompareCustomEpsilon(scene->shotDisplacementPosition.v, v1, 0.001, 3) )
  {
    if ( !modelInstance || VecNCompareCustomEpsilon(modelInstance->displacementPosition.v, v1, 0.001, 3) )
    {
      if ( VecNCompareCustomEpsilon(scene->sceneDisplacementPosition.v, v1, 0.001, 3) )
        goto LABEL_9;
      v9 = *(double *)scene->sceneDisplacementPosition.v;
      v10 = scene->sceneDisplacementPosition.v[2];
    }
    else
    {
      v9 = *(double *)modelInstance->displacementPosition.v;
      v10 = modelInstance->displacementPosition.v[2];
    }
  }
  else
  {
    v9 = *(double *)scene->shotDisplacementPosition.v;
    v10 = scene->shotDisplacementPosition.v[2];
  }
  v16 = v9;
  v17 = v10;
LABEL_9:
  if ( !VecNCompareCustomEpsilon(scene->shotDisplacementAngles.v, v1, 0.001, 3) )
  {
    v11 = *(double *)scene->shotDisplacementAngles.v;
    v12 = scene->shotDisplacementAngles.v[2];
LABEL_16:
    v18 = v11;
    v19 = v12;
    goto LABEL_17;
  }
  if ( modelInstance && !VecNCompareCustomEpsilon(modelInstance->displacementAngles.v, v1, 0.001, 3) )
  {
    v11 = *(double *)modelInstance->displacementAngles.v;
    v12 = modelInstance->displacementAngles.v[2];
    goto LABEL_16;
  }
  if ( !VecNCompareCustomEpsilon(scene->sceneDisplacementAngles.v, v1, 0.001, 3) )
  {
    v11 = *(double *)scene->sceneDisplacementAngles.v;
    v12 = scene->sceneDisplacementAngles.v[2];
    goto LABEL_16;
  }
LABEL_17:
  v13 = *((float *)&v16 + 1) + positionOut->v[1];
  positionOut->v[0] = *(float *)&v16 + positionOut->v[0];
  v14 = v17 + positionOut->v[2];
  positionOut->v[1] = v13;
  positionOut->v[2] = v14;
  v15 = *((float *)&v18 + 1) + anglesOut->v[1];
  anglesOut->v[0] = *(float *)&v18 + anglesOut->v[0];
  anglesOut->v[2] = v19 + anglesOut->v[2];
  anglesOut->v[1] = v15;
}

/*
==============
AnimVisualizer_CreateEntity
==============
*/
void AnimVisualizer_CreateEntity(AnimVyzModel *modelInstance, const char *modelType, const char *modelName, const char **subModels)
{
  XAssetHeader v8; 
  int v9; 
  const char *v10; 
  signed __int64 v11; 
  unsigned int v12; 
  const XModel **v13; 
  __int64 v14; 
  scr_string_t *v15; 

  modelInstance->clientModelIndex = -1;
  modelInstance->models[0] = NULL;
  modelInstance->weaponDef = NULL;
  modelInstance->headOn = 1;
  modelInstance->headIdx = 1;
  modelInstance->animationList[0] = NULL;
  modelInstance->currentAnimation[0] = NULL;
  modelInstance->animationList[1] = NULL;
  modelInstance->currentAnimation[1] = NULL;
  modelInstance->totalAnimationDuration = 0.0;
  modelInstance->cameraAnimationList = NULL;
  modelInstance->totalCameraAnimationDuration = 0.0;
  modelInstance->debugDrawTags[0] = 0;
  modelInstance->isSiege = 0;
  *(_OWORD *)modelInstance->displacementPosition.v = 0ui64;
  *(_QWORD *)&modelInstance->displacementAngles.y = 0i64;
  *(_QWORD *)modelInstance->additiveAnimationWeights = 0i64;
  *(_QWORD *)&modelInstance->additiveAnimationWeights[2] = 0i64;
  *(_QWORD *)&modelInstance->additiveAnimationWeights[4] = 0i64;
  if ( DB_XAssetExists(ASSET_TYPE_XMODEL, modelName) )
  {
    v8.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, modelName, 0).physicsLibrary;
    modelInstance->attachNames[0] = 0;
    v9 = 1;
    modelInstance->models[0] = v8.model;
    v10 = *subModels;
    if ( *subModels )
    {
      v11 = (char *)modelInstance - (char *)subModels;
      do
      {
        *(const char **)((char *)subModels++ + v11 + 32) = (const char *)DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v10, 0).physicsLibrary;
        v10 = *subModels;
        ++v9;
      }
      while ( *subModels );
    }
    modelInstance->models[v9] = NULL;
    if ( v9 )
    {
      modelInstance->isSiege = 0;
      v12 = CG_AllocFreeModelIndex(LOCAL_CLIENT_0);
      modelInstance->clientModelIndex = v12;
      CG_ClientModel_SetModifiable(LOCAL_CLIENT_0, v12, 1);
      CG_ClientModel_SetModel(LOCAL_CLIENT_0, modelInstance->clientModelIndex, modelInstance->models[0]);
      if ( v9 > 1i64 )
      {
        v13 = (const XModel **)&modelInstance->models[1];
        v14 = v9 - 1i64;
        v15 = &modelInstance->attachNames[1];
        do
        {
          CG_ClientModel_AddModel(LOCAL_CLIENT_0, modelInstance->clientModelIndex, *v13++, *v15++);
          --v14;
        }
        while ( v14 );
      }
      CG_ClientModel_SetNoPhysics(LOCAL_CLIENT_0, modelInstance->clientModelIndex, 1);
      CG_ClientModel_SetNoCloth(LOCAL_CLIENT_0, modelInstance->clientModelIndex, 1);
      *(_QWORD *)modelInstance->initialPosition.v = 0i64;
      *(_QWORD *)&modelInstance->initialPosition.z = 0i64;
      *(_QWORD *)&modelInstance->initialAngles.y = 0i64;
      CG_ClientModel_SetOrigin(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &modelInstance->initialPosition);
      CG_ClientModel_SetAngles(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &modelInstance->initialAngles);
      CG_ClientModel_SetPrevPose(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &modelInstance->initialPosition, &modelInstance->initialAngles);
      AnimVisualizer_SetClientViz();
    }
    else
    {
      Com_PrintWarning(1, "Could not load Model name %s : type %s\n", modelName, modelType);
    }
  }
  else
  {
    Com_PrintWarning(1, "Model name %s : type %s is not loaded\n", modelName, modelType);
  }
}

/*
==============
AnimVisualizer_DestroyAnimations
==============
*/
void AnimVisualizer_DestroyAnimations(AnimVyzModel *modelInstance)
{
  int v1; 
  AnimVyzAnimation *v2; 
  AnimVyzAnimation *v3; 

  v1 = s_AnimVyzAnimationPoolFreeCount;
  if ( modelInstance->animationList[0] )
  {
    do
    {
      v2 = modelInstance->animationList[0];
      ++v1;
      modelInstance->animationList[0] = v2->next;
      v2->next = s_AnimationPoolHead;
      s_AnimationPoolHead = v2;
    }
    while ( modelInstance->animationList[0] );
    s_AnimVyzAnimationPoolFreeCount = v1;
  }
  modelInstance->totalAnimationDuration = 0.0;
  v3 = modelInstance->animationList[1];
  if ( v3 )
  {
    do
    {
      ++v1;
      modelInstance->animationList[1] = v3->next;
      v3->next = s_AnimationPoolHead;
      s_AnimationPoolHead = v3;
      v3 = modelInstance->animationList[1];
    }
    while ( v3 );
    s_AnimVyzAnimationPoolFreeCount = v1;
  }
  modelInstance->totalAnimationDuration = 0.0;
}

/*
==============
AnimVisualizer_DestroyCameraAnimations
==============
*/
void AnimVisualizer_DestroyCameraAnimations(AnimVyzModel *modelInstance)
{
  int v1; 
  AnimVyzCameraAnimation *cameraAnimationList; 

  if ( modelInstance->cameraAnimationList )
  {
    v1 = s_CameraAnimationPoolFreeCount;
    do
    {
      cameraAnimationList = modelInstance->cameraAnimationList;
      ++v1;
      modelInstance->cameraAnimationList = cameraAnimationList->next;
      cameraAnimationList->next = s_CameraAnimationPoolHead;
      s_CameraAnimationPoolHead = cameraAnimationList;
    }
    while ( modelInstance->cameraAnimationList );
    s_CameraAnimationPoolFreeCount = v1;
    modelInstance->totalCameraAnimationDuration = 0.0;
  }
}

/*
==============
AnimVisualizer_DestroyEntity
==============
*/
void AnimVisualizer_DestroyEntity(AnimVyzModel *modelInstance)
{
  int v1; 
  AnimVyzCameraAnimation *cameraAnimationList; 

  if ( modelInstance->clientModelIndex != -1 )
  {
    if ( modelInstance->cameraAnimationList )
    {
      v1 = s_CameraAnimationPoolFreeCount;
      do
      {
        cameraAnimationList = modelInstance->cameraAnimationList;
        ++v1;
        modelInstance->cameraAnimationList = cameraAnimationList->next;
        cameraAnimationList->next = s_CameraAnimationPoolHead;
        s_CameraAnimationPoolHead = cameraAnimationList;
      }
      while ( modelInstance->cameraAnimationList );
      s_CameraAnimationPoolFreeCount = v1;
      modelInstance->totalCameraAnimationDuration = 0.0;
    }
    AnimVisualizer_DestroyAnimations(modelInstance);
  }
}

/*
==============
AnimVisualizer_FindSceneFromEntityIndex
==============
*/
AnimVyzScene *AnimVisualizer_FindSceneFromEntityIndex(int entnum)
{
  AnimVyzScene *v2; 
  unsigned int v3; 
  AnimVyzModel *modelList; 
  unsigned int clientModelIndex; 
  DObj *DObj; 

  v2 = s_AnimVyzScenes;
  v3 = 0;
  while ( 1 )
  {
    if ( v2->sceneInstanceId )
    {
      modelList = v2->modelList;
      if ( modelList )
        break;
    }
LABEL_8:
    ++v3;
    ++v2;
    if ( v3 >= 0x10 )
      return 0i64;
  }
  while ( 1 )
  {
    clientModelIndex = modelList->clientModelIndex;
    if ( clientModelIndex != -1 )
    {
      DObj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, clientModelIndex);
      if ( DObj )
      {
        if ( DObj->entnum == entnum )
          return v2;
      }
    }
    modelList = modelList->next;
    if ( !modelList )
      goto LABEL_8;
  }
}

/*
==============
AnimVisualizer_FreeModel
==============
*/
void AnimVisualizer_FreeModel(AnimVyzModel *model)
{
  if ( model->attachNames[0] )
    model->attachNames[0] = 0;
  if ( model->attachNames[1] )
    model->attachNames[1] = 0;
  if ( model->attachNames[2] )
    model->attachNames[2] = 0;
  if ( model->attachNames[3] )
    model->attachNames[3] = 0;
  if ( model->attachNames[4] )
    model->attachNames[4] = 0;
  if ( model->attachNames[5] )
    model->attachNames[5] = 0;
  if ( model->attachNames[6] )
    model->attachNames[6] = 0;
  if ( model->attachNames[7] )
    model->attachNames[7] = 0;
  model->next = s_ModelPoolHead;
  s_ModelPoolHead = model;
}

/*
==============
AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly
==============
*/
float AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly(int entityIndex, float deltaTime)
{
  AnimVyzScene *SceneFromEntityIndex; 

  SceneFromEntityIndex = AnimVisualizer_FindSceneFromEntityIndex(entityIndex);
  if ( !SceneFromEntityIndex )
    return deltaTime;
  if ( SceneFromEntityIndex->playbackState == Playing )
    return deltaTime * SceneFromEntityIndex->playbackSpeed;
  return 0.0;
}

/*
==============
AnimVisualizer_HandlesRagdollNote
==============
*/
bool AnimVisualizer_HandlesRagdollNote(int entityIndex)
{
  int v1; 
  AnimVyzScene *i; 
  AnimVyzModel *modelList; 

  v1 = 0;
  for ( i = s_AnimVyzScenes; ; ++i )
  {
    if ( i->sceneInstanceId )
    {
      modelList = i->modelList;
      if ( modelList )
        break;
    }
LABEL_6:
    if ( (unsigned int)++v1 >= 0x10 )
    {
      modelList = NULL;
      return modelList != NULL;
    }
  }
  while ( modelList->clientModelIndex != entityIndex )
  {
    modelList = modelList->next;
    if ( !modelList )
      goto LABEL_6;
  }
  return modelList != NULL;
}

/*
==============
AnimVisualizer_Initialize
==============
*/
void AnimVisualizer_Initialize(void)
{
  AnimVyzCommand *v0; 
  cmd_function_s *p_cmd_function; 
  __int64 v2; 
  AnimVyzAnimation *v3; 
  __int64 v4; 
  AnimVyzAnimation **p_next; 
  AnimVyzCameraAnimation **v6; 
  int v7; 
  __int64 v8; 

  v0 = s_Commands;
  p_cmd_function = &s_Commands[0].cmd_function;
  v2 = 25i64;
  do
  {
    Cmd_AddCommandInternal(v0->commandString, v0->commandHandler, p_cmd_function);
    p_cmd_function = (cmd_function_s *)((char *)p_cmd_function + 56);
    ++v0;
    --v2;
  }
  while ( v2 );
  s_ModelPoolHead = s_AnimVyzModelPool;
  s_AnimVyzModelPool[0].next = &s_AnimVyzModelPool[1];
  s_AnimVyzModelPool[1].next = &s_AnimVyzModelPool[2];
  s_AnimVyzModelPool[2].next = &s_AnimVyzModelPool[3];
  s_AnimVyzModelPool[3].next = &s_AnimVyzModelPool[4];
  s_AnimVyzModelPool[4].next = &s_AnimVyzModelPool[5];
  s_AnimVyzModelPool[5].next = &s_AnimVyzModelPool[6];
  s_AnimVyzModelPool[6].next = &s_AnimVyzModelPool[7];
  s_AnimVyzModelPool[7].next = &s_AnimVyzModelPool[8];
  s_AnimVyzModelPool[8].next = &s_AnimVyzModelPool[9];
  s_AnimVyzModelPool[9].next = &s_AnimVyzModelPool[10];
  s_AnimVyzModelPool[10].next = &s_AnimVyzModelPool[11];
  s_AnimVyzModelPool[11].next = &s_AnimVyzModelPool[12];
  s_AnimVyzModelPool[12].next = &s_AnimVyzModelPool[13];
  s_AnimVyzModelPool[13].next = &s_AnimVyzModelPool[14];
  s_AnimVyzModelPool[14].next = &s_AnimVyzModelPool[15];
  s_AnimVyzModelPool[15].next = &s_AnimVyzModelPool[16];
  s_AnimVyzModelPool[16].next = &s_AnimVyzModelPool[17];
  s_AnimVyzModelPool[17].next = &s_AnimVyzModelPool[18];
  s_AnimVyzModelPool[18].next = &s_AnimVyzModelPool[19];
  s_AnimVyzModelPool[19].next = &s_AnimVyzModelPool[20];
  s_AnimVyzModelPool[20].next = &s_AnimVyzModelPool[21];
  s_AnimVyzModelPool[21].next = &s_AnimVyzModelPool[22];
  s_AnimVyzModelPool[22].next = &s_AnimVyzModelPool[23];
  s_AnimVyzModelPool[23].next = &s_AnimVyzModelPool[24];
  s_AnimVyzModelPool[24].next = &s_AnimVyzModelPool[25];
  s_AnimVyzModelPool[25].next = &s_AnimVyzModelPool[26];
  s_AnimVyzModelPool[26].next = &s_AnimVyzModelPool[27];
  s_AnimVyzModelPool[27].next = &s_AnimVyzModelPool[28];
  s_AnimVyzModelPool[28].next = &s_AnimVyzModelPool[29];
  s_AnimVyzModelPool[29].next = &s_AnimVyzModelPool[30];
  s_AnimVyzModelPool[30].next = &s_AnimVyzModelPool[31];
  s_AnimVyzModelPool[31].next = &s_AnimVyzModelPool[32];
  s_AnimVyzModelPool[32].next = &s_AnimVyzModelPool[33];
  s_AnimVyzModelPool[33].next = &s_AnimVyzModelPool[34];
  s_AnimVyzModelPool[34].next = &s_AnimVyzModelPool[35];
  s_AnimVyzModelPool[35].next = &s_AnimVyzModelPool[36];
  s_AnimVyzModelPool[36].next = &s_AnimVyzModelPool[37];
  s_AnimVyzModelPool[37].next = &s_AnimVyzModelPool[38];
  s_AnimVyzModelPool[38].next = &s_AnimVyzModelPool[39];
  s_AnimVyzModelPool[39].next = &s_AnimVyzModelPool[40];
  v3 = &s_AnimVyzAnimationPool[1];
  s_AnimVyzAnimationPoolFreeCount = 256;
  s_AnimVyzModelPool[40].next = &s_AnimVyzModelPool[41];
  s_AnimVyzModelPool[63].next = NULL;
  s_AnimVyzModelPool[41].next = &s_AnimVyzModelPool[42];
  v4 = 255i64;
  s_AnimVyzModelPool[42].next = &s_AnimVyzModelPool[43];
  s_AnimVyzModelPool[43].next = &s_AnimVyzModelPool[44];
  s_AnimVyzModelPool[44].next = &s_AnimVyzModelPool[45];
  s_AnimVyzModelPool[45].next = &s_AnimVyzModelPool[46];
  s_AnimVyzModelPool[46].next = &s_AnimVyzModelPool[47];
  s_AnimVyzModelPool[47].next = &s_AnimVyzModelPool[48];
  s_AnimVyzModelPool[48].next = &s_AnimVyzModelPool[49];
  s_AnimVyzModelPool[49].next = &s_AnimVyzModelPool[50];
  s_AnimVyzModelPool[50].next = &s_AnimVyzModelPool[51];
  s_AnimVyzModelPool[51].next = &s_AnimVyzModelPool[52];
  s_AnimVyzModelPool[52].next = &s_AnimVyzModelPool[53];
  s_AnimVyzModelPool[53].next = &s_AnimVyzModelPool[54];
  s_AnimVyzModelPool[54].next = &s_AnimVyzModelPool[55];
  s_AnimVyzModelPool[55].next = &s_AnimVyzModelPool[56];
  s_AnimVyzModelPool[56].next = &s_AnimVyzModelPool[57];
  s_AnimVyzModelPool[57].next = &s_AnimVyzModelPool[58];
  s_AnimVyzModelPool[58].next = &s_AnimVyzModelPool[59];
  s_AnimVyzModelPool[59].next = &s_AnimVyzModelPool[60];
  s_AnimVyzModelPool[60].next = &s_AnimVyzModelPool[61];
  s_AnimVyzModelPool[61].next = &s_AnimVyzModelPool[62];
  s_AnimVyzModelPool[62].next = &s_AnimVyzModelPool[63];
  s_AnimationPoolHead = s_AnimVyzAnimationPool;
  p_next = &s_AnimVyzAnimationPool[0].next;
  do
  {
    *p_next = v3;
    p_next += 16;
    ++v3;
    --v4;
  }
  while ( v4 );
  s_AnimVyzAnimationPool[255].next = NULL;
  s_CameraAnimationPoolHead = s_CameraAnimationPool;
  v6 = &s_CameraAnimationPool[0].next;
  s_CameraAnimationPoolFreeCount = 128;
  v7 = 1;
  do
  {
    v8 = v7++;
    *v6 = &s_CameraAnimationPool[v8];
    v6 += 3;
  }
  while ( (__int64)v6 < (__int64)&s_CameraAnimationPool[127].next );
  s_CameraAnimationPool[127].next = NULL;
  s_AnimVyzCameraState.type = None;
  s_AnimVyzCameraState.model = NULL;
  s_AnimVyzNoteTrackOverrides[0].inUse = 0;
  s_AnimVyzNoteTrackOverrides[1].inUse = 0;
  s_AnimVyzNoteTrackOverrides[2].inUse = 0;
  s_AnimVyzNoteTrackOverrides[3].inUse = 0;
  s_AnimVyzNoteTrackOverrides[4].inUse = 0;
  s_AnimVyzNoteTrackOverrides[5].inUse = 0;
  s_AnimVyzNoteTrackOverrides[6].inUse = 0;
  s_AnimVyzNoteTrackOverrides[7].inUse = 0;
  s_AnimVyzNoteTrackOverrides[8].inUse = 0;
  s_AnimVyzNoteTrackOverrides[9].inUse = 0;
  s_AnimVyzNoteTrackOverrides[10].inUse = 0;
  s_AnimVyzNoteTrackOverrides[11].inUse = 0;
  s_AnimVyzNoteTrackOverrides[12].inUse = 0;
  s_AnimVyzNoteTrackOverrides[13].inUse = 0;
  s_AnimVyzNoteTrackOverrides[14].inUse = 0;
  s_AnimVyzNoteTrackOverrides[15].inUse = 0;
  s_AnimVyzRequestDVar = Dvar_RegisterInt("NMMKOOSRMO", 0, 0, 1, 0x100u, "YanimVyz alignment request");
  s_AnimVyzAlignTargetDVar = Dvar_RegisterString("OMLKNQQMPQ", (const char *)&queryFormat.fmt + 3, 0x100u, "YanimVyz alignment target");
  s_AnimVyzAlignTagDVar = Dvar_RegisterString("NNTPLTSSMN", (const char *)&queryFormat.fmt + 3, 0x100u, "YanimVyz alignment tag");
  s_AnimVyzAlignPositionXDVar = Dvar_RegisterFloat("SMNOPRPON", 0.0, -100000.0, 100000.0, 0x100u, "YanimVyz alignment position x");
  s_AnimVyzAlignPositionYDVar = Dvar_RegisterFloat("NKOPSKPOKQ", 0.0, -100000.0, 100000.0, 0x100u, "YanimVyz alignment position y");
  s_AnimVyzAlignPositionZDVar = Dvar_RegisterFloat("TRNLSPTRN", 0.0, -100000.0, 100000.0, 0x100u, "YanimVyz alignment position z");
  s_AnimVyzAlignAngleXDVar = Dvar_RegisterFloat("NPLPTKSMRP", 0.0, -360.0, 360.0, 0x100u, "YanimVyz alignment angle x");
  s_AnimVyzAlignAngleYDVar = Dvar_RegisterFloat("LOONMSSSOM", 0.0, -360.0, 360.0, 0x100u, "YanimVyz alignment angle y");
  s_AnimVyzAlignAngleZDVar = Dvar_RegisterFloat("NQQPQNQRKP", 0.0, -360.0, 360.0, 0x100u, "YanimVyz alignment angle z");
}

/*
==============
AnimVisualizer_MyChangesInitAndLoad
==============
*/
void AnimVisualizer_MyChangesInitAndLoad(void)
{
  ;
}

/*
==============
AnimVisualizer_MyChangesSaveAndShutdown
==============
*/
void AnimVisualizer_MyChangesSaveAndShutdown(void)
{
  __int64 v0; 

  if ( s_AnimVyzReady )
  {
    s_AnimVyzReady = 0;
    AnimVisualizer_Reset(s_AnimVyzPlaybackLocation);
    v0 = -1i64;
    while ( s_RspGameReset[++v0] != 0 )
      ;
    Com_DevhostSendMessage(5, 5u, v0 + 1, s_RspGameReset);
  }
  AnimVisualizer_UpdateCameraState();
}

/*
==============
AnimVisualizer_ProcessClientNote
==============
*/
void AnimVisualizer_ProcessClientNote(LocalClientNum_t localClientNum, int entityIndex, const XAnimNotifyInfo *notifyInfo)
{
  AnimVisualizer_FindSceneFromEntityIndex(entityIndex);
}

/*
==============
AnimVisualizer_Reset
==============
*/
void AnimVisualizer_Reset(PlaybackLocation playbackLocation)
{
  __int64 v1; 
  __int64 v2; 
  AnimVyzModel **p_modelList; 
  AnimVyzModel *v4; 
  int v5; 
  AnimVyzCameraAnimation *cameraAnimationList; 
  bool *p_inUse; 
  XAnimParts *Data; 

  v1 = 16i64;
  s_AnimVyzPlaybackLocation = playbackLocation;
  v2 = 16i64;
  p_modelList = &s_AnimVyzScenes[0].modelList;
  do
  {
    if ( *((_DWORD *)p_modelList - 2) )
    {
      v4 = *p_modelList;
      *((_DWORD *)p_modelList - 2) = 0;
      if ( v4 )
      {
        v5 = s_CameraAnimationPoolFreeCount;
        do
        {
          *p_modelList = v4->next;
          if ( v4->clientModelIndex != -1 )
          {
            if ( v4->cameraAnimationList )
            {
              do
              {
                cameraAnimationList = v4->cameraAnimationList;
                ++v5;
                v4->cameraAnimationList = cameraAnimationList->next;
                cameraAnimationList->next = s_CameraAnimationPoolHead;
                s_CameraAnimationPoolHead = cameraAnimationList;
              }
              while ( v4->cameraAnimationList );
              s_CameraAnimationPoolFreeCount = v5;
              v4->totalCameraAnimationDuration = 0.0;
            }
            AnimVisualizer_DestroyAnimations(v4);
          }
          if ( v4->attachNames[0] )
            v4->attachNames[0] = 0;
          if ( v4->attachNames[1] )
            v4->attachNames[1] = 0;
          if ( v4->attachNames[2] )
            v4->attachNames[2] = 0;
          if ( v4->attachNames[3] )
            v4->attachNames[3] = 0;
          if ( v4->attachNames[4] )
            v4->attachNames[4] = 0;
          if ( v4->attachNames[5] )
            v4->attachNames[5] = 0;
          if ( v4->attachNames[6] )
            v4->attachNames[6] = 0;
          if ( v4->attachNames[7] )
            v4->attachNames[7] = 0;
          v4->next = s_ModelPoolHead;
          s_ModelPoolHead = v4;
          v4 = *p_modelList;
        }
        while ( *p_modelList );
      }
      AnimVisualizer_SetClientViz();
    }
    p_modelList += 347;
    --v2;
  }
  while ( v2 );
  s_AnimVyzActiveSceneInstanceId = 0;
  p_inUse = &s_AnimVyzNoteTrackOverrides[0].inUse;
  do
  {
    if ( *p_inUse )
    {
      Data = XAnimFindData((const char *)p_inUse - 2340);
      *p_inUse = 0;
      if ( Data == *(XAnimParts **)(p_inUse - 36) )
      {
        Data->notify = *(XAnimNotifyInfo **)(p_inUse - 28);
        Data->notifyCount = *(p_inUse - 4);
      }
    }
    p_inUse += 2344;
    --v1;
  }
  while ( v1 );
}

/*
==============
AnimVisualizer_ResetForUnload
==============
*/
void AnimVisualizer_ResetForUnload(void)
{
  __int64 v0; 

  if ( s_AnimVyzReady )
  {
    s_AnimVyzReady = 0;
    AnimVisualizer_Reset(s_AnimVyzPlaybackLocation);
    v0 = -1i64;
    while ( s_RspGameReset[++v0] != 0 )
      ;
    Com_DevhostSendMessage(5, 5u, v0 + 1, s_RspGameReset);
  }
}

/*
==============
AnimVisualizer_SetClientViz
==============
*/
void AnimVisualizer_SetClientViz()
{
  unsigned int v0; 
  __int64 v1; 
  AnimVyzScene *v2; 
  AnimVyzScene *v3; 
  AnimVyzModel *modelList; 
  unsigned int *v5; 
  unsigned int clientModelIndex; 
  unsigned int clientModelIndices[64]; 

  v0 = 0;
  if ( s_AnimVyzActiveSceneInstanceId )
  {
    v1 = 0i64;
    v2 = s_AnimVyzScenes;
    while ( v2->sceneInstanceId != s_AnimVyzActiveSceneInstanceId )
    {
      v1 = (unsigned int)(v1 + 1);
      ++v2;
      if ( (unsigned int)v1 >= 0x10 )
        goto LABEL_12;
    }
    v3 = &s_AnimVyzScenes[v1];
    if ( v3 )
    {
      modelList = v3->modelList;
      if ( modelList )
      {
        v5 = clientModelIndices;
        do
        {
          clientModelIndex = modelList->clientModelIndex;
          if ( clientModelIndex != -1 )
          {
            ++v0;
            *v5++ = clientModelIndex;
          }
          modelList = modelList->next;
        }
        while ( modelList );
      }
    }
  }
LABEL_12:
  CG_ClientModel_SetRequiredModifiables(LOCAL_CLIENT_0, clientModelIndices, v0);
}

/*
==============
AnimVisualizer_SetPlaybackPosition
==============
*/

void __fastcall AnimVisualizer_SetPlaybackPosition(AnimVyzScene *scene, double time, bool forcePlayFromStart)
{
  bool looping; 
  AnimVyzScene::PlaybackState playbackState; 
  float playbackSpeed; 
  AnimVyzModel *modelList; 
  float *p_currentTime; 
  __int128 v10; 
  AnimVyzModel *v11; 
  AnimVyzModel *v13; 
  float v14; 
  bool v15; 
  __int128 v16; 
  __int64 v17; 

  looping = scene->looping;
  playbackState = scene->playbackState;
  scene->looping = 0;
  scene->playbackState = Playing;
  playbackSpeed = scene->playbackSpeed;
  scene->playbackSpeed = 1.0;
  _XMM7 = *(_OWORD *)&time;
  if ( forcePlayFromStart )
  {
    modelList = scene->modelList;
    for ( scene->currentTime = 0.0; modelList; modelList = modelList->next )
      modelList->currentAnimation[0] = NULL;
  }
  p_currentTime = &scene->currentTime;
  if ( *(float *)&time == 0.0 || (v10 = *(unsigned int *)p_currentTime, *(float *)&_XMM7 <= *(float *)&v10) )
  {
    v11 = scene->modelList;
    *p_currentTime = 0.0;
    v10 = 0i64;
    if ( v11 )
    {
      do
      {
        v11->currentAnimation[0] = NULL;
        v11 = v11->next;
      }
      while ( v11 );
      v10 = *(unsigned int *)p_currentTime;
    }
  }
  __asm { vminss  xmm6, xmm7, cs:__real@3c23d70a }
  do
  {
    v13 = scene->modelList;
    if ( v13 )
    {
      do
      {
        if ( v13->clientModelIndex != -1 )
        {
          v14 = *p_currentTime;
          AnimVisualizer_UpdateAnimationState(v13, *p_currentTime, 0);
          if ( CG_ClientModel_GetDObj(LOCAL_CLIENT_0, v13->clientModelIndex) )
            DObjUpdateClientInfo((DObj *)&v17, v14, v15, 0);
        }
        v13 = v13->next;
      }
      while ( v13 );
      v10 = *(unsigned int *)p_currentTime;
    }
    v16 = v10;
    *(float *)&v16 = *(float *)&v10 + *(float *)&_XMM6;
    v10 = v16;
    *p_currentTime = *(float *)&v16;
  }
  while ( *(float *)&v16 < *(float *)&_XMM7 );
  scene->looping = looping;
  scene->playbackState = playbackState;
  scene->playbackSpeed = playbackSpeed;
  AnimVisualizer_UpdateScene(scene, *(float *)&v16, 1);
}

/*
==============
AnimVisualizer_Terminate
==============
*/
void AnimVisualizer_Terminate(void)
{
  __int64 v0; 
  AnimVyzCommand *v2; 
  __int64 v3; 

  if ( s_AnimVyzReady )
  {
    s_AnimVyzReady = 0;
    AnimVisualizer_Reset(s_AnimVyzPlaybackLocation);
    v0 = -1i64;
    while ( s_RspGameReset[++v0] != 0 )
      ;
    Com_DevhostSendMessage(5, 5u, v0 + 1, s_RspGameReset);
  }
  v2 = s_Commands;
  v3 = 25i64;
  do
  {
    Cmd_RemoveCommand(v2->commandString);
    ++v2;
    --v3;
  }
  while ( v3 );
}

/*
==============
AnimVisualizer_Update
==============
*/
void AnimVisualizer_Update(float deltaTimeSeconds)
{
  AnimVyzScene::PlaybackState *p_playbackState; 
  __int64 v3; 
  float v4; 
  float v5; 
  __int64 v6; 
  AnimVyzScene *v7; 
  __int64 p_currentTime; 
  __int64 v9; 

  if ( s_AnimVyzReady )
  {
    p_playbackState = &s_AnimVyzScenes[0].playbackState;
    v3 = 16i64;
    do
    {
      if ( *((_DWORD *)p_playbackState - 6) )
      {
        v4 = *((float *)p_playbackState - 1);
        if ( *p_playbackState == Playing )
        {
          v5 = deltaTimeSeconds * *((float *)p_playbackState + 2);
          *((float *)p_playbackState + 670) = deltaTimeSeconds + *((float *)p_playbackState + 670);
          v4 = v4 + v5;
        }
        AnimVisualizer_UpdateScene((AnimVyzScene *)(p_playbackState - 6), v4, 0);
        AnimVisualizer_UpdateSceneAlignment((AnimVyzScene *)(p_playbackState - 6));
      }
      p_playbackState += 694;
      --v3;
    }
    while ( v3 );
    AnimVisualizer_UpdateCameraState();
    if ( !s_AnimVyzDVRRecordEnabled || !s_AnimVyzActiveSceneInstanceId )
      goto LABEL_20;
    v6 = 0i64;
    v7 = s_AnimVyzScenes;
    while ( v7->sceneInstanceId != s_AnimVyzActiveSceneInstanceId )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v7;
      if ( (unsigned int)v6 >= 0x10 )
      {
        p_currentTime = 20i64;
        v9 = 24i64;
        goto LABEL_15;
      }
    }
    p_currentTime = (__int64)&s_AnimVyzScenes[v6].currentTime;
    v9 = (__int64)&s_AnimVyzScenes[v6].playbackState;
LABEL_15:
    if ( *(_DWORD *)v9 == 1 && s_AnimVyzDVRRecordStartTime <= *(float *)p_currentTime && *(float *)p_currentTime < s_AnimVyzDVRRecordEndTime )
    {
      if ( !s_AnimVyzDVRRecordActive )
        s_AnimVyzDVRRecordActive = 1;
    }
    else
    {
LABEL_20:
      s_AnimVyzDVRRecordActive = 0;
    }
  }
}

/*
==============
AnimVisualizer_UpdateAnimationState
==============
*/
void AnimVisualizer_UpdateAnimationState(AnimVyzModel *modelInstance, float currentTime, bool reset)
{
  AnimVyzAnimation *v3; 
  AnimVyzAnimation *v4; 
  AnimVyzAnimation *v5; 
  char tree; 
  float v8; 
  float startTime; 
  AnimVyzAnimation *v10; 
  float v11; 
  AnimVyzAnimation *v12; 
  const XModel *v13; 
  int clientModelIndex; 
  const XModel **v15; 
  int v16; 
  XModel **v17; 
  scr_string_t *v18; 
  char v19; 
  char v20; 
  const DObj *DObj; 
  bool v22; 
  bool v23; 
  float time; 
  unsigned int deltaAnimationTreeIndex; 
  XAnimTree *v26; 
  float v27; 
  unsigned int v28; 
  XAnimTree *v29; 
  bool v30; 
  int v31; 
  AnimVyzAnimation *v32; 
  const DObj *v33; 
  __int64 i; 
  float bias; 
  float v36; 
  float v37; 
  float v38; 
  unsigned int v39; 
  XAnimTree *v40; 
  double Length; 
  bool v42; 
  float v43; 
  __int64 v44; 
  __int64 v45; 
  int treeIndex; 
  __int64 v47; 
  DObj obj; 
  int v49; 
  int v50; 

  v3 = modelInstance->animationList[0];
  v4 = NULL;
  v5 = NULL;
  tree = reset;
  LOBYTE(obj.tree) = reset;
  v8 = currentTime;
  if ( v3 )
  {
    while ( 1 )
    {
      startTime = v3->startTime;
      if ( startTime <= currentTime && (float)(startTime + v3->duration) > currentTime )
        break;
      v3 = v3->next;
      if ( !v3 )
        goto LABEL_7;
    }
    v4 = v3;
  }
LABEL_7:
  v10 = modelInstance->animationList[1];
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = v10->startTime;
      if ( v11 <= currentTime && (float)(v11 + v10->duration) > currentTime )
        break;
      v10 = v10->next;
      if ( !v10 )
        goto LABEL_13;
    }
    v5 = v10;
  }
LABEL_13:
  v12 = modelInstance->currentAnimation[1];
  *(_QWORD *)&obj.duplicateParts = v12;
  if ( (v5 == NULL) == modelInstance->headOn )
  {
    v19 = 0;
  }
  else
  {
    v13 = modelInstance->models[0];
    clientModelIndex = modelInstance->clientModelIndex;
    modelInstance->headOn = v5 == NULL;
    CG_ClientModel_SetModel(LOCAL_CLIENT_0, clientModelIndex, v13);
    v15 = (const XModel **)&modelInstance->models[1];
    v16 = 1;
    if ( modelInstance->models[1] )
    {
      v17 = &modelInstance->models[1];
      v18 = &modelInstance->attachNames[1];
      do
      {
        if ( modelInstance->headOn || modelInstance->headIdx != v16 )
          CG_ClientModel_AddModel(LOCAL_CLIENT_0, modelInstance->clientModelIndex, *v15, *v18);
        ++v17;
        ++v16;
        ++v18;
        v15 = (const XModel **)v17;
      }
      while ( *v17 );
      v12 = *(AnimVyzAnimation **)&obj.duplicateParts;
      tree = (char)obj.tree;
    }
    v19 = 1;
  }
  v20 = 1;
  if ( !v19 )
    v20 = tree;
  DObj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, modelInstance->clientModelIndex);
  if ( DObj )
  {
    if ( modelInstance->currentAnimation[0] != v4 || v20 )
    {
      v23 = !modelInstance->isSiege;
      modelInstance->currentAnimation[0] = v4;
      if ( v23 && v4 )
      {
        XAnimSetGoalWeightKnob(DObj, 0, XANIM_SUBTREE_DEFAULT, v4->deltaAnimationTreeIndex, 1.0, v4->blendInTime, 1.0, (scr_string_t)0, 0, LINEAR);
        currentTime = (float)(currentTime - v4->startTime) / v4->duration;
        time = currentTime + v4->startTimeRatio;
        deltaAnimationTreeIndex = v4->deltaAnimationTreeIndex;
        v26 = DObjGetTree(DObj);
        XAnimSetTime(v26, 0, XANIM_SUBTREE_DEFAULT, deltaAnimationTreeIndex, time);
      }
      DObjUpdateClientInfo(&obj, currentTime, v22, 0);
    }
    if ( modelInstance->isSiege && modelInstance->currentAnimation[0] )
    {
      v27 = (float)(v8 - v3->startTime) / v3->animationDuration;
      v28 = v3->deltaAnimationTreeIndex;
      v29 = DObjGetTree(DObj);
      XAnimSetTime(v29, 0, XANIM_SUBTREE_DEFAULT, v28, v27);
      DObjUpdateClientInfo(&obj, currentTime, v30, 0);
    }
    if ( modelInstance->currentAnimation[1] != v5 || v20 )
    {
      if ( v12 )
        XAnimSetCompleteGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, v12->deltaAnimationTreeIndex, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
      if ( v5 )
        XAnimSetCompleteGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, v5->deltaAnimationTreeIndex, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
      DObjUpdateClientInfo(&obj, currentTime, v22, 0);
      modelInstance->currentAnimation[1] = v5;
    }
    v31 = modelInstance->clientModelIndex;
    v32 = modelInstance->animationList[0];
    obj.skel.partBits.control.array[6] = 0;
    obj.hidePartBits.array[1] = 0;
    obj.modelHasBadRootBoneMeld.array[2] = 0;
    v49 = 0;
    v50 = 0;
    v33 = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, v31);
    if ( v33 && v32 )
    {
      do
      {
        for ( i = 0i64; i < 5; ++i )
        {
          if ( v32->additiveAnimations[i].inUse )
          {
            bias = v32->additiveAnimations[i].bias;
            v36 = bias + v32->startTime;
            v37 = v32->duration - bias;
            v38 = 0.0;
            if ( i == 4 )
            {
              v39 = v32->additiveAnimations[4].treeIndex + 1;
              v40 = DObjGetTree(v33);
              Length = XAnimGetLength(v40->anims, v39);
              v37 = *(float *)&Length * v32->additiveAnimations[4].loopFactor;
              v38 = *(float *)&Length;
            }
            v42 = 0;
            v43 = 0.0;
            if ( v37 > 0.0 && v36 >= 0.0 && v36 <= v8 && (float)(v37 + v36) > v8 )
            {
              v43 = lambda_1ac17ad0f998f08f1d8f3f8382fc4590_::_lambda_invoker_cdecl_(v8 - v36, v37, modelInstance->additiveAnimationWeights[i], modelInstance->additiveAnimationBlendRate);
              if ( v38 != 0.0 )
                v42 = fmodf_0(v8 - v36, v38) < 0.033;
            }
            v44 = (int)obj.skel.partBits.control.array[25 * i + 6];
            if ( (int)v44 >= 8 )
            {
              Com_PrintWarning(1, "Animation Visualizer max additive animations exceeded\n");
            }
            else
            {
              v45 = 3 * v44;
              treeIndex = v32->additiveAnimations[i].treeIndex;
              v47 = 100 * i + 4 * v45;
              *(float *)((char *)obj.ignoreCollision.array + v47) = v43;
              *(_DWORD *)(&obj.numBones + v47) = treeIndex;
              *((_BYTE *)&obj.ignoreCollision.array[1] + v47) = v42;
              ++obj.skel.partBits.control.array[25 * i + 6];
            }
          }
        }
        v32 = v32->next;
      }
      while ( v32 );
    }
  }
}

/*
==============
AnimVisualizer_UpdateCameraState
==============
*/
void AnimVisualizer_UpdateCameraState()
{
  const XCam *cameraIndex; 
  AnimVyzScene *v1; 
  __int64 v2; 
  AnimVyzScene *v3; 
  AnimVyzCamera::CameraType type; 
  char v5; 
  bool v6; 
  gentity_s *v7; 
  cg_t *LocalClientGlobals; 
  gclient_s *client; 
  cg_t *v10; 
  AnimVyzModel *model; 
  cg_t *v12; 
  const DObj *DObj; 
  const cpose_t *Pose; 
  const cpose_t *v15; 
  float v16; 
  gclient_s *v17; 
  gclient_s *v18; 
  float currentTime; 
  cg_t *v20; 
  cg_t *v21; 
  float v22; 
  AnimVyzCameraAnimation *i; 
  float startTime; 
  float v25; 
  XCamData *p_xCam; 
  gclient_s *v27; 
  vec3_t in1; 
  vec3_t angles; 
  vec4_t origin; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v33; 
  tmat43_t<vec3_t> out; 

  cameraIndex = NULL;
  v1 = NULL;
  if ( s_AnimVyzActiveSceneInstanceId )
  {
    v2 = 0i64;
    v3 = s_AnimVyzScenes;
    while ( v3->sceneInstanceId != s_AnimVyzActiveSceneInstanceId )
    {
      v2 = (unsigned int)(v2 + 1);
      ++v3;
      if ( (unsigned int)v2 >= 0x10 )
        goto LABEL_7;
    }
    v1 = &s_AnimVyzScenes[v2];
  }
LABEL_7:
  type = s_AnimVyzCameraState.type;
  v5 = 0;
  if ( !v1 )
  {
    v6 = s_AnimVyzCameraState.type == None;
    goto LABEL_11;
  }
  if ( v1->cameraState.type == s_AnimVyzCameraState.type )
  {
    v6 = v1->cameraState.model == s_AnimVyzCameraState.model;
LABEL_11:
    if ( v6 )
      goto LABEL_13;
  }
  v5 = 1;
LABEL_13:
  v7 = g_entities;
  if ( v5 )
  {
    if ( s_AnimVyzCameraState.type )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      if ( s_AnimVyzCameraState.type == 2 )
      {
        LocalClientGlobals->radiantCamInUse = 0;
        if ( v7 )
        {
          client = v7->client;
          if ( client )
            client->flags &= ~2u;
        }
      }
      else
      {
        XCamData::Init(&LocalClientGlobals->xCam, NULL);
      }
      type = None;
      s_AnimVyzCameraState.model = NULL;
      s_AnimVyzCameraState.type = None;
    }
    if ( v1 && v1->cameraState.type )
    {
      s_AnimVyzCameraState = v1->cameraState;
      type = s_AnimVyzCameraState.type;
    }
  }
  if ( type == 2 )
  {
    v10 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    model = s_AnimVyzCameraState.model;
    v12 = v10;
    DObj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, s_AnimVyzCameraState.model->clientModelIndex);
    Pose = CG_ClientModel_GetPose(LOCAL_CLIENT_0, model->clientModelIndex);
    v15 = Pose;
    if ( DObj && Pose )
    {
      if ( CG_DObjGetWorldTagMatrix(Pose, DObj, scr_const.tag_camera, &outTagMat, (vec3_t *)&origin) )
      {
        AxisToAngles(&outTagMat, &v12->radiantCameraAngles);
        v16 = origin.v[2];
        v12->radiantCamInUse = 1;
        v12->radiantCamReceived = 1;
        *(double *)v12->radiantCameraOrigin.v = *(double *)origin.v;
        v12->radiantCameraOrigin.v[2] = v16;
        if ( v7 )
        {
          v17 = v7->client;
          if ( v17 )
            v17->flags |= 2u;
        }
      }
      else if ( CG_DObjGetWorldTagMatrix(v15, DObj, scr_const.j_head, &outTagMat, (vec3_t *)&origin) )
      {
        if ( model->currentAnimation[0] )
        {
          angles.v[0] = 0.0;
          angles.v[1] = 0.0;
          angles.v[2] = 0.0;
          in1.v[0] = 0.0;
          in1.v[1] = 0.0;
          in1.v[2] = 0.0;
          MatrixSet43(&out, (const vec3_t *)&origin, &outTagMat, 1.0);
          MatrixTransformVector43(&in1, &out, &v12->radiantCameraOrigin);
          AnglesToAxis(&angles, &axis);
          MatrixMultiply(&axis, &outTagMat, &v33);
          AxisToAngles(&v33, &v12->radiantCameraAngles);
          v12->radiantCamInUse = 1;
          v12->radiantCamReceived = 1;
          if ( v7 )
          {
            v18 = v7->client;
            if ( v18 )
              v18->flags |= 2u;
          }
        }
      }
    }
  }
  else if ( type == 1 )
  {
    currentTime = v1->currentTime;
    v20 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v21 = v20;
    v22 = 0.0;
    for ( i = s_AnimVyzCameraState.model->cameraAnimationList; i; i = i->next )
    {
      startTime = i->startTime;
      if ( startTime <= currentTime )
      {
        v25 = startTime + i->duration;
        if ( i->next )
        {
          if ( v25 > currentTime )
          {
LABEL_41:
            cameraIndex = i->cameraIndex;
            v22 = currentTime - startTime;
            break;
          }
        }
        else if ( v25 >= currentTime )
        {
          goto LABEL_41;
        }
      }
    }
    p_xCam = &v20->xCam;
    if ( cameraIndex )
    {
      if ( XCamData::GetActiveXCam(p_xCam) != cameraIndex )
        XCamData::Init(&v21->xCam, cameraIndex);
      XCamData::SetStartTime(&v21->xCam, v21->time - (int)(float)(v22 * 1000.0));
      AnimVisualizer_ApplySceneAlignment(v1, NULL, &vec3_origin, &vec3_origin, &in1, &angles);
      AnglesToQuat(&angles, &origin);
      XCamData::SetSceneTransform(&v21->xCam, &in1, &origin);
      if ( v7 )
      {
        v27 = v7->client;
        if ( v27 )
          v27->flags |= 2u;
      }
    }
    else
    {
      XCamData::Clear(p_xCam);
    }
  }
}

/*
==============
AnimVisualizer_UpdatePositionAndAngles
==============
*/
void AnimVisualizer_UpdatePositionAndAngles(AnimVyzScene *scene, AnimVyzModel *modelInstance)
{
  vec3_t *p_initialPosition; 
  const DObj *v5; 
  AnimVyzAnimation *v6; 
  AnimVyzAnimation *v7; 
  float v8; 
  unsigned int v9; 
  XAnimTree *v10; 
  AnimVyzAnimation *v11; 
  int v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  float currentTime; 
  float startTrimTime; 
  float animationDuration; 
  float blendInTime; 
  float blendOutTime; 
  float v22; 
  __int128 currentTime_low; 
  unsigned int deltaAnimationTreeIndex; 
  const XAnim_s *Anims; 
  unsigned int v28; 
  float v29; 
  XAnimTree *Tree; 
  __int128 v31; 
  unsigned int v34; 
  XAnimTree *v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  DObj *obj; 
  vec3_t origin; 
  vec3_t angles; 
  vec4_t to; 
  vec3_t in1; 
  vec3_t v44; 
  __int64 v45; 
  float v46; 
  vec3_t trans; 
  vec4_t rot; 
  vec4_t quat; 
  vec3_t v50; 
  vec4_t v51; 
  vec4_t from; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> v57; 
  tmat33_t<vec3_t> v58; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> v60; 

  p_initialPosition = &modelInstance->initialPosition;
  AnimVisualizer_ApplySceneAlignment(scene, modelInstance, &modelInstance->initialPosition, &modelInstance->initialAngles, &origin, &angles);
  obj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, modelInstance->clientModelIndex);
  v5 = obj;
  if ( obj )
  {
    if ( !scene->moving )
      goto LABEL_26;
    v6 = modelInstance->animationList[0];
    if ( !v6 || modelInstance->isSiege )
      goto LABEL_26;
    if ( !modelInstance->cinematicAnimations )
    {
      v11 = NULL;
      v12 = 0;
      v44.v[0] = 0.0;
      v44.v[1] = 0.0;
      v44.v[2] = 0.0;
      v13 = 0i64;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      while ( 1 )
      {
        currentTime = scene->currentTime;
        if ( *(float *)&v13 > currentTime )
          break;
        startTrimTime = v6->startTrimTime;
        animationDuration = v6->animationDuration;
        blendInTime = 0.0;
        blendOutTime = 0.0;
        if ( v6->next )
          blendOutTime = v6->blendOutTime;
        if ( v11 )
          blendInTime = v11->blendInTime;
        v22 = (float)(animationDuration - startTrimTime) - blendOutTime;
        currentTime_low = LODWORD(scene->currentTime);
        *(float *)&currentTime_low = currentTime - *(float *)&v13;
        _XMM0 = currentTime_low;
        __asm { vminss  xmm9, xmm0, xmm12 }
        if ( startTrimTime == 0.0 )
        {
          if ( v6->shotNumber != v12 )
          {
            AnimVisualizer_ApplySceneAlignment(scene, modelInstance, p_initialPosition, &modelInstance->initialAngles, &origin, &angles);
            ++v12;
          }
          deltaAnimationTreeIndex = v6->deltaAnimationTreeIndex;
          Anims = CG_ClientModel_GetAnims(LOCAL_CLIENT_0, modelInstance->clientModelIndex);
          XAnimGetAbsDelta(Anims, deltaAnimationTreeIndex, &rot, &trans, *(float *)&_XMM9 / (float)(animationDuration - startTrimTime));
        }
        else
        {
          v28 = v6->deltaAnimationTreeIndex;
          v29 = 1.0 / animationDuration;
          Tree = DObjGetTree(v5);
          v31 = _XMM9;
          *(float *)&v31 = (float)(*(float *)&_XMM9 + startTrimTime) * (float)(1.0 / animationDuration);
          _XMM1 = v31;
          __asm { vminss  xmm2, xmm1, cs:__real@3f800000 }
          XAnimGetAbsDelta(Tree->anims, v28, &v51, &v50, *(float *)&_XMM2);
          v34 = v6->deltaAnimationTreeIndex;
          v35 = DObjGetTree(obj);
          XAnimGetAbsDelta(v35->anims, v34, &quat, &in1, v29 * startTrimTime);
          LODWORD(in1.v[0]) ^= _xmm;
          LODWORD(in1.v[2]) ^= _xmm;
          LODWORD(in1.v[1]) ^= _xmm;
          QuatToAxis(&quat, &out);
          MatrixInverse(&out, &axis);
          AxisToQuat(&axis, &quat);
          AnglesAndOriginToMatrix43((const vec3_t *)&v51, &v50, &in2);
          MatrixTransformVector43(&in1, &in2, &trans);
          QuatToAxis(&quat, &v58);
          MatrixMultiply(&v58, (const tmat33_t<vec3_t> *)&in2, &mat);
          AxisToQuat(&mat, &rot);
        }
        AnglesAndOriginToMatrix43(&angles, &origin, &v57);
        MatrixTransformVector43(&trans, &v57, &origin);
        QuatToAxis(&rot, &v60);
        MatrixMultiply(&v60, (const tmat33_t<vec3_t> *)&v57, (tmat33_t<vec3_t> *)&result);
        AxisToAngles((const tmat33_t<vec3_t> *)&result, &angles);
        if ( *(float *)&_XMM9 < blendInTime )
        {
          origin.v[0] = (float)((float)(origin.v[0] - v14) * (float)(*(float *)&_XMM9 / blendInTime)) + v14;
          origin.v[1] = (float)((float)(origin.v[1] - v15) * (float)(*(float *)&_XMM9 / blendInTime)) + v15;
          origin.v[2] = (float)((float)(origin.v[2] - v16) * (float)(*(float *)&_XMM9 / blendInTime)) + v16;
          AnglesToQuat(&v44, &from);
          AnglesToQuat(&angles, &to);
          QuatSlerp(&from, &to, *(float *)&_XMM9 / blendInTime, &to);
          v36 = fsqrt((float)((float)((float)(to.v[1] * to.v[1]) + (float)(to.v[0] * to.v[0])) + (float)(to.v[2] * to.v[2])) + (float)(to.v[3] * to.v[3]));
          if ( v36 != 0.0 )
          {
            v37 = 1.0 / v36;
            to.v[0] = to.v[0] * v37;
            to.v[1] = to.v[1] * v37;
            to.v[2] = to.v[2] * v37;
            to.v[3] = to.v[3] * v37;
          }
          UnitQuatToAngles(&to, &angles);
        }
        v44 = angles;
        v46 = origin.v[2];
        v11 = v6;
        v6 = v6->next;
        v45 = *(__int64 *)origin.v;
        v38 = v13;
        *(float *)&v38 = *(float *)&v13 + v22;
        v13 = v38;
        if ( !v6 )
          break;
        v16 = v46;
        v15 = *((float *)&v45 + 1);
        v14 = *(float *)&v45;
        v5 = obj;
        p_initialPosition = &modelInstance->initialPosition;
      }
      goto LABEL_26;
    }
    v7 = modelInstance->currentAnimation[0];
    if ( v7 )
    {
      v8 = (float)(scene->currentTime - v7->startTime) / v7->duration;
      if ( v8 < 1.0 )
      {
        v9 = v7->deltaAnimationTreeIndex;
        v10 = DObjGetTree(obj);
        XAnimGetAbsDelta(v10->anims, v9, &rot, &trans, v8);
        AnglesAndOriginToMatrix43(&angles, &origin, &result);
        MatrixTransformVector43(&trans, &result, &origin);
        QuatToAxis(&rot, &axis);
        MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&result, &out);
        AxisToAngles(&out, &angles);
LABEL_26:
        CG_ClientModel_SetOrigin(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &origin);
        CG_ClientModel_SetAngles(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &angles);
      }
    }
  }
}

/*
==============
AnimVisualizer_UpdateScene
==============
*/
void AnimVisualizer_UpdateScene(AnimVyzScene *scene, float currentTime, bool forceHostSend)
{
  __int128 v3; 
  float i; 
  float sceneDuration; 
  char v7; 
  AnimVyzModel *modelList; 
  AnimVyzModel *j; 
  float v10; 
  __int64 sceneInstanceId; 
  const char *v12; 
  __int64 v13; 
  char dest[512]; 
  __int128 v16; 

  v16 = v3;
  i = currentTime;
  if ( forceHostSend )
    scene->sendPeriod = 0.0;
  sceneDuration = scene->sceneDuration;
  v7 = 1;
  if ( currentTime >= sceneDuration )
  {
    if ( scene->looping )
    {
      modelList = scene->modelList;
      for ( i = 0.0; modelList; modelList = modelList->next )
        modelList->currentAnimation[0] = NULL;
    }
    else
    {
      i = sceneDuration;
      scene->playbackState = Stopped;
      v7 = 0;
      scene->sendPeriod = 0.0;
    }
  }
  scene->currentTime = i;
  if ( v7 )
  {
    for ( j = scene->modelList; j; j = j->next )
    {
      if ( j->clientModelIndex != -1 )
      {
        AnimVisualizer_UpdateAnimationState(j, i, 0);
        AnimVisualizer_UpdatePositionAndAngles(scene, j);
      }
    }
  }
  if ( scene->sendPeriod <= scene->sendTime )
  {
    v10 = scene->currentTime;
    sceneInstanceId = scene->sceneInstanceId;
    v12 = "playing";
    if ( scene->playbackState != Playing )
      v12 = "stopped";
    *(_QWORD *)&scene->sendPeriod = 1023969417i64;
    Com_sprintf(dest, 0x200ui64, "animvyz_playbackstate %u %s %f", sceneInstanceId, v12, v10);
    v13 = -1i64;
    while ( dest[++v13] != 0 )
      ;
    Com_DevhostSendMessage(5, 5u, v13 + 1, dest);
  }
}

/*
==============
AnimVisualizer_UpdateSceneAlignment
==============
*/
void AnimVisualizer_UpdateSceneAlignment(AnimVyzScene *scene)
{
  const dvar_t *v2; 
  double Float_Internal; 
  const dvar_t *v4; 
  double v5; 
  const dvar_t *v6; 
  double v7; 
  const dvar_t *v8; 
  double v9; 
  const dvar_t *v10; 
  double v11; 
  const dvar_t *v12; 
  double v13; 
  float currentTime; 
  int alignmentValueCount; 
  int v16; 
  int v17; 
  char v18; 
  float v19; 
  float *p_duration; 
  float v21; 
  char v22; 
  float v23; 

  if ( s_AnimVyzActiveAlignementRequestSceneInstanceId == scene->sceneInstanceId )
  {
    v2 = s_AnimVyzRequestDVar;
    if ( !s_AnimVyzRequestDVar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      return;
    Float_Internal = Dvar_GetFloat_Internal(s_AnimVyzAlignPositionXDVar);
    v4 = s_AnimVyzAlignPositionYDVar;
    scene->position.v[0] = *(float *)&Float_Internal;
    v5 = Dvar_GetFloat_Internal(v4);
    v6 = s_AnimVyzAlignPositionZDVar;
    scene->position.v[1] = *(float *)&v5;
    v7 = Dvar_GetFloat_Internal(v6);
    v8 = s_AnimVyzAlignAngleXDVar;
    scene->position.v[2] = *(float *)&v7;
    v9 = Dvar_GetFloat_Internal(v8);
    v10 = s_AnimVyzAlignAngleYDVar;
    scene->angles.v[0] = *(float *)&v9;
    v11 = Dvar_GetFloat_Internal(v10);
    v12 = s_AnimVyzAlignAngleZDVar;
    scene->angles.v[1] = *(float *)&v11;
    v13 = Dvar_GetFloat_Internal(v12);
    scene->angles.v[2] = *(float *)&v13;
    currentTime = scene->currentTime;
    s_AnimVyzActiveAlignementRequestSceneInstanceId = 0;
    scene->pendingAlignmentRequest = 0;
    AnimVisualizer_UpdateScene(scene, currentTime, 1);
  }
  alignmentValueCount = scene->alignmentValueCount;
  v16 = -1;
  if ( alignmentValueCount )
  {
    v17 = 0;
    if ( scene->alignmentValues[0].startTime < 0.0 )
    {
      v18 = scene->alignmentValues[0].target[0];
      v17 = 1;
      *(double *)scene->sceneDisplacementAngles.v = *(double *)scene->alignmentValues[0].deltaAngles.v;
      scene->sceneDisplacementAngles.v[2] = scene->alignmentValues[0].deltaAngles.v[2];
      *(double *)scene->sceneDisplacementPosition.v = *(double *)scene->alignmentValues[0].deltaPosition.v;
      scene->sceneDisplacementPosition.v[2] = scene->alignmentValues[0].deltaPosition.v[2];
      v16 = (v18 != 0) - 1;
    }
    v19 = scene->currentTime;
    if ( v17 < alignmentValueCount )
    {
      p_duration = &scene->alignmentValues[v17].duration;
      while ( 1 )
      {
        v21 = *(p_duration - 1);
        if ( v21 <= v19 && (float)(v21 + *p_duration) > v19 )
          break;
        ++v17;
        p_duration += 40;
        if ( v17 >= alignmentValueCount )
          goto LABEL_19;
      }
      v22 = *((_BYTE *)p_duration - 132);
      *(double *)scene->shotDisplacementAngles.v = *((double *)p_duration + 2);
      scene->shotDisplacementAngles.v[2] = p_duration[6];
      *(double *)scene->shotDisplacementPosition.v = *(double *)(p_duration + 1);
      if ( !v22 )
        v17 = v16;
      scene->shotDisplacementPosition.v[2] = p_duration[3];
      v16 = v17;
    }
  }
LABEL_19:
  if ( v16 != scene->currentAlignmentIndex )
  {
    scene->currentAlignmentIndex = v16;
    if ( v16 == -1 )
    {
      *(_QWORD *)scene->position.v = 0i64;
      *(_QWORD *)&scene->position.z = 0i64;
      *(_QWORD *)&scene->angles.y = 0i64;
      v23 = scene->currentTime;
      scene->pendingAlignmentRequest = 0;
      AnimVisualizer_UpdateScene(scene, v23, 1);
    }
    else
    {
      scene->pendingAlignmentRequest = 1;
    }
  }
  if ( scene->pendingAlignmentRequest && !s_AnimVyzActiveAlignementRequestSceneInstanceId )
  {
    s_AnimVyzActiveAlignementRequestSceneInstanceId = scene->sceneInstanceId;
    Dvar_SetString_Internal(s_AnimVyzAlignTargetDVar, scene->alignmentValues[scene->currentAlignmentIndex].target);
    Dvar_SetString_Internal(s_AnimVyzAlignTagDVar, scene->alignmentValues[scene->currentAlignmentIndex].tag);
    Dvar_SetInt_Internal(s_AnimVyzRequestDVar, 1);
  }
}

/*
==============
AnimVisualizer_UpdateSceneDuration
==============
*/
void AnimVisualizer_UpdateSceneDuration(AnimVyzScene *scene)
{
  AnimVyzModel *modelList; 

  modelList = scene->modelList;
  LODWORD(_XMM2) = 0;
  while ( modelList )
  {
    _XMM0 = LODWORD(modelList->totalCameraAnimationDuration);
    __asm { vmaxss  xmm1, xmm0, dword ptr [rax+0E4h] }
    modelList = modelList->next;
    __asm { vmaxss  xmm2, xmm1, xmm2 }
  }
  scene->sceneDuration = *(float *)&_XMM2;
}

