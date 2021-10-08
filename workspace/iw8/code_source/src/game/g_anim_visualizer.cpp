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
    _RBP = &s_AnimVyzScenes[v4];
    if ( _RBP )
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
      _RBP->looping = v9;
      _RBP->moving = v11;
      __asm { vmovss  dword ptr [rbp+20h], xmm1 }
      _RBP->noteTrackPlayback = v13;
      _RBP->playbackState = v3;
      if ( v15 )
      {
        _RBP->playbackSpeed = 1.0;
        v17 = "NSRPLOQMNR";
        if ( v3 != 1 )
          v17 = "QLSLNROSO";
        Dvar_SetCommandByName(v17, _RBP->sceneName, 0);
      }
      __asm { vmovss  xmm1, dword ptr [rbp+14h]; currentTime }
      AnimVisualizer_UpdateScene(_RBP, *(float *)&_XMM1, 1);
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
    if ( v7 )
    {
      if ( s_AnimVyzPlaybackLocation != Server )
        goto LABEL_9;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm1, xmm0
      }
      if ( s_AnimVyzPlaybackLocation == Server )
LABEL_9:
        AnimVisualizer_SetPlaybackPosition(v7, *(float *)&_XMM1, 0);
    }
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
  int v11; 
  const char *v12; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  unsigned int v16; 
  AnimVyzScene *i; 
  __int64 v18; 
  AnimVyzScene *v19; 
  AnimVyzScene *v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  const char *v26; 
  int v27; 
  __int64 v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  __int64 v32; 
  unsigned int v33; 
  unsigned int v34; 
  int v35; 
  signed int v36; 
  XAnim_s *AnimsWithParameters; 
  XAnim_s *v38; 
  int v40; 
  unsigned __int64 linkPointer; 
  __int64 v42; 
  int v44; 
  AnimVyzAnimation *v45; 
  unsigned int v49; 
  __int64 v50; 
  int v51; 
  const char *v52; 
  unsigned int v53; 
  AnimVyzAnimation *next; 
  const char *v56; 
  const char *v57; 
  const char *v59; 
  const char *v61; 
  const char *v63; 
  const char *v65; 
  unsigned int v67; 
  unsigned int v69; 
  unsigned int v70; 
  bool v71; 
  bool v72; 
  char v73; 
  const char *v74; 
  _DWORD *p_treeIndex; 
  __int64 v76; 
  bool v78; 
  const XAnimParts *Parts; 
  scr_string_t String; 
  int maxBindings; 
  XAnimSyncGroupID Alloca; 
  XAnimSyncGroupID Allocb; 
  XAnimSyncGroupID Alloc; 
  XAnimNodeTypeID outNodeTypeID[4]; 
  unsigned int animIndex; 
  int v108; 
  int v109; 
  scr_anim_t animationIndex; 
  __int64 v111; 
  unsigned int v112; 
  __int64 v113; 
  XAnimEntry *v114; 
  __int64 v115; 
  AnimVyzScene *scene; 
  float v1[4]; 
  vec3_t trans; 
  vec4_t rot; 

  if ( Cmd_Argc() >= 3 )
  {
    v11 = Cmd_Argc() - 3;
    if ( v11 == 6 * (v11 / 6) && s_AnimVyzPlaybackLocation != Server )
    {
      v12 = Cmd_Argv(1);
      v13 = I_atoui(v12);
      v14 = Cmd_Argv(2);
      v15 = I_atoui(v14);
      v16 = 0;
      for ( i = s_AnimVyzScenes; i->sceneInstanceId != v13; ++i )
      {
        if ( ++v16 >= 0x10 )
          return;
      }
      v18 = v16;
      v72 = &s_AnimVyzScenes[v18] == NULL;
      v19 = &s_AnimVyzScenes[v18];
      scene = v19;
      if ( !v72 )
      {
        _R14 = v19->modelList;
        if ( _R14 )
        {
          while ( _R14->modelInstanceId != v15 )
          {
            _R14 = _R14->next;
            if ( !_R14 )
              return;
          }
          if ( _R14->clientModelIndex != -1 )
          {
            _R14->currentAnimation[0] = NULL;
            _R14->currentAnimation[1] = NULL;
            AnimVisualizer_DestroyAnimations(_R14);
            AnimVisualizer_UpdateSceneDuration(v21);
            v22 = (Cmd_Argc() - 3) / 6;
            v112 = v22;
            if ( v22 )
            {
              v23 = 0;
              v111 = 0i64;
              v24 = 0;
              if ( v22 > 0 )
              {
                v25 = 3;
                while ( 1 )
                {
                  v26 = Cmd_Argv(v25 + 5);
                  v27 = I_atoui(v26);
                  v28 = v27;
                  if ( v27 < 2 )
                  {
                    v29 = Cmd_Argv(v25);
                    if ( (_DWORD)v28 == 1 )
                    {
                      if ( !DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v29, 0).physicsLibrary )
                      {
                        v30 = Cmd_Argv(v25);
                        Com_PrintWarning(1, "Facial Animation \"%s\" cannot be found\n", v30);
                        return;
                      }
                    }
                    else if ( !XAnimFindData(v29) )
                    {
                      v31 = Cmd_Argv(v25);
                      Com_PrintWarning(1, "Animation \"%s\" cannot be found\n", v31);
                      return;
                    }
                    ++*((_DWORD *)&v111 + v28);
                  }
                  ++v24;
                  v25 += 6;
                  if ( v24 >= v22 )
                  {
                    v23 = v111;
                    break;
                  }
                }
              }
              if ( v22 <= s_AnimVyzAnimationPoolFreeCount )
              {
                v32 = s_UniqueNameCounter;
                __asm
                {
                  vmovaps [rsp+188h+var_38], xmm6
                  vmovaps [rsp+188h+var_48], xmm7
                  vmovaps [rsp+188h+var_58], xmm8
                  vmovaps [rsp+188h+var_68], xmm9
                  vmovaps [rsp+188h+var_78], xmm10
                  vmovaps [rsp+188h+var_88], xmm11
                  vmovaps [rsp+188h+var_98], xmm12
                  vmovaps [rsp+188h+var_A8], xmm13
                  vmovaps [rsp+188h+var_B8], xmm14
                  vmovaps [rsp+188h+var_C8], xmm15
                }
                _R14->cinematicAnimations = 0;
                _R14->totalAnimationDuration = 0.0;
                Com_sprintf(_R14->animDebugName, 0x40ui64, "YanimVyz%d", v32);
                v33 = v23 + 3;
                ++s_UniqueNameCounter;
                v34 = 11 * v23;
                outNodeTypeID[0] = XANIM_NODE_TYPE_INVALID;
                v35 = 2 * HIDWORD(v111);
                v36 = v34 + 3;
                animIndex = v34 + 3;
                XAnimAcquireMemoryLocks();
                AnimsWithParameters = XAnimCreateAnimsWithParameters(_R14->animDebugName, XANIM_SUBTREE_DEFAULT, v34 + v35 + 3, v35, v35, 0, AnimVisualizer_AllocXAnim);
                LOBYTE(Alloca) = 4;
                v38 = AnimsWithParameters;
                XAnimBlend(AnimsWithParameters, 0, "root", 1u, (v35 > 0) + 1, 0, Alloca, 1);
                LOBYTE(Allocb) = 4;
                XAnimBlend(v38, 1u, "xanims", 3u, v34, 0, Allocb, 1);
                if ( v35 > 0 )
                {
                  LOBYTE(Alloc) = 4;
                  XAnimBlend(v38, 2u, "faces", v36, v35, 0, Alloc, 1);
                  XAnimFindNodeTypeByName(scr_const.xanimMayhemLink, outNodeTypeID);
                }
                __asm { vmovss  xmm15, cs:__real@3f800000 }
                v40 = 0;
                linkPointer = v36;
                v42 = 0i64;
                v109 = 0;
                animationIndex = (scr_anim_t)v36;
                v113 = 0i64;
                __asm { vxorps  xmm9, xmm9, xmm9 }
                do
                {
                  v108 = 0;
                  v44 = 0;
                  v45 = NULL;
                  __asm
                  {
                    vmovss  [rsp+188h+v1], xmm9
                    vmovss  [rsp+188h+var_FC], xmm9
                    vmovss  [rsp+188h+var_F8], xmm9
                    vmovaps xmm8, xmm9
                    vmovaps xmm13, xmm9
                    vmovaps xmm11, xmm9
                  }
                  if ( v22 > 0 )
                  {
                    v49 = 3;
                    v50 = v112;
                    v51 = 4;
                    v115 = v112;
                    v114 = &v38->entries[linkPointer];
                    do
                    {
                      v52 = Cmd_Argv(v51 + 4);
                      v53 = I_atoui(v52);
                      v40 = v109;
                      if ( v53 == v109 )
                      {
                        _RDI = s_AnimationPoolHead;
                        if ( s_AnimationPoolHead )
                        {
                          next = s_AnimationPoolHead->next;
                          --s_AnimVyzAnimationPoolFreeCount;
                          s_AnimationPoolHead = next;
                        }
                        _RDI->next = NULL;
                        if ( v45 )
                          v45->next = _RDI;
                        else
                          _R14->animationList[v113] = _RDI;
                        v56 = Cmd_Argv(v51 - 1);
                        _RDI->name = SL_GetString(v56, 0);
                        v57 = Cmd_Argv(v51);
                        _XMM0_8 = atof(v57);
                        __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
                        v59 = Cmd_Argv(v51 + 1);
                        _XMM0_8 = atof(v59);
                        __asm { vcvtsd2ss xmm14, xmm0, xmm0 }
                        v61 = Cmd_Argv(v51 + 2);
                        _XMM0_8 = atof(v61);
                        __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
                        v63 = Cmd_Argv(v51 + 3);
                        _XMM0_8 = atof(v63);
                        __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
                        if ( v113 == 1 )
                        {
                          v65 = Cmd_Argv(v51 - 1);
                          _RAX.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v65, 1).physicsLibrary;
                          v67 = animIndex;
                          _RDI->deltaAnimationTreeIndex = animIndex;
                          __asm { vmovss  xmm6, dword ptr [rax+48h] }
                          v69 = v67 + 1;
                          LOBYTE(Alloc) = 4;
                          XAnimBlend(v38, v67, "facial", v67 + 1, 1u, 0x40u, Alloc, 1);
                          v70 = animIndex;
                          v114->nodeType = outNodeTypeID[0];
                          XAnimBindStringToNodeParameter(v38, v70, scr_const.xanimMayhemName, _RDI->name);
                          XAnimBindStringToNodeParameter(v38, animIndex, scr_const.xanimMayhemAttachBone, scr_const.j_spine4);
                          XAnimCreate(v38, v69, "void", 1);
                          animIndex += 2;
                          *(_QWORD *)&animationIndex += 2i64;
                          v71 = __CFADD__(v114, 32i64);
                          v72 = &v114[2] == NULL;
                          v73 = __CFADD__(v114, 32i64) || v72;
                          v114 += 2;
                        }
                        else
                        {
                          v71 = 0;
                          v72 = !_R14->isSiege;
                          v73 = v72;
                          if ( _R14->isSiege )
                          {
                            __asm { vmovaps xmm6, xmm15 }
                          }
                          else
                          {
                            v74 = Cmd_Argv(v51 - 1);
                            XAnimCreate(v38, v49, v74, 1);
                            _RDI->deltaAnimationTreeIndex = v49;
                            p_treeIndex = &_RDI->additiveAnimations[0].treeIndex;
                            v76 = 5i64;
                            do
                            {
                              LOBYTE(Alloc) = 4;
                              *((_BYTE *)p_treeIndex - 4) = 0;
                              *p_treeIndex = v33;
                              XAnimBlend(v38, v33, "additive", v33 + 1, 1u, 0x10u, Alloc, 1);
                              v33 += 2;
                              p_treeIndex += 4;
                              --v76;
                            }
                            while ( v76 );
                            _XMM0_8 = XAnimGetLength(v38, v49);
                            __asm
                            {
                              vmovss  [rsp+188h+maxBindings], xmm9
                              vmovaps xmm6, xmm0
                            }
                            XAnimGetAbsDelta(v38, v49, &rot, &trans, *(float *)&maxBindings);
                            __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
                            v78 = VecNCompareCustomEpsilon(trans.v, v1, *(float *)&_XMM2, 3);
                            v44 = v108;
                            v71 = 0;
                            v72 = !v78;
                            v73 = !v78;
                            if ( !v78 )
                              _R14->cinematicAnimations = 1;
                          }
                        }
                        __asm { vucomiss xmm8, xmm7 }
                        if ( !v72 )
                        {
                          v73 = v71 | (++v44 == 0);
                          v108 = v44;
                          __asm { vmovaps xmm11, xmm9 }
                        }
                        __asm
                        {
                          vcmpneqss xmm0, xmm8, xmm7
                          vblendvps xmm0, xmm8, xmm7, xmm0
                          vmovss  dword ptr [rsp+188h+var_130], xmm0
                          vcmpneqss xmm0, xmm8, xmm7
                          vblendvps xmm0, xmm13, xmm7, xmm0
                          vsubss  xmm3, xmm0, xmm11
                          vsubss  xmm2, xmm6, xmm12
                          vdivss  xmm0, xmm12, xmm6
                          vsubss  xmm1, xmm2, xmm10
                          vaddss  xmm13, xmm3, xmm2
                          vmovss  dword ptr [rdi+0Ch], xmm0
                          vmovss  dword ptr [rdi+4], xmm3
                          vmovss  dword ptr [rdi+10h], xmm14
                          vmovss  dword ptr [rdi+8], xmm1
                          vmovss  dword ptr [rdi+14h], xmm10
                          vmovss  dword ptr [rdi+18h], xmm12
                          vmovss  dword ptr [rdi+1Ch], xmm6
                        }
                        _RDI->shotNumber = v44;
                        __asm { vcomiss xmm13, dword ptr [r14+0E4h] }
                        if ( !v73 )
                          __asm { vmovss  dword ptr [r14+0E4h], xmm13 }
                        __asm { vmovss  xmm8, dword ptr [rsp+188h+var_130] }
                        v40 = v109;
                        v45 = _RDI;
                        v50 = v115;
                        ++v49;
                        __asm { vmovaps xmm11, xmm10 }
                      }
                      v51 += 6;
                      v115 = --v50;
                    }
                    while ( v50 );
                    v42 = v113;
                    v22 = v112;
                    linkPointer = animationIndex.linkPointer;
                  }
                  ++v40;
                  ++v42;
                  v109 = v40;
                  v113 = v42;
                }
                while ( v42 < 2 );
                XAnimSetupBindingIndexes(v38);
                animationIndex.index = 3;
                *(_DWORD *)((char *)&animationIndex.linkPointer + 2) = 0;
                HIWORD(animationIndex.linkPointer) = 0;
                Parts = XAnimGetParts(v38, 3u);
                String = SL_GetString(_R14->animDebugName, 0);
                CG_ClientModel_SetAnimation(LOCAL_CLIENT_0, _R14->clientModelIndex, String, v38, Parts, animationIndex);
                AnimVisualizer_UpdateSceneDuration(scene);
                __asm { vmovss  xmm1, dword ptr [rcx+14h]; time }
                AnimVisualizer_SetPlaybackPosition(_RCX, *(float *)&_XMM1, 1);
                XanimReleaseMemoryLocks();
                __asm
                {
                  vmovaps xmm15, [rsp+188h+var_C8]
                  vmovaps xmm14, [rsp+188h+var_B8]
                  vmovaps xmm13, [rsp+188h+var_A8]
                  vmovaps xmm12, [rsp+188h+var_98]
                  vmovaps xmm11, [rsp+188h+var_88]
                  vmovaps xmm10, [rsp+188h+var_78]
                  vmovaps xmm9, [rsp+188h+var_68]
                  vmovaps xmm8, [rsp+188h+var_58]
                  vmovaps xmm7, [rsp+188h+var_48]
                  vmovaps xmm6, [rsp+188h+var_38]
                }
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
  int v9; 
  int v11; 
  __int64 v12; 
  const char *v13; 
  AnimVyzCameraAnimation *next; 
  XAssetHeader v16; 
  const char *v17; 

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
      _RBX = v7->modelList;
      if ( _RBX )
      {
        while ( _RBX->modelInstanceId != v4 )
        {
          _RBX = _RBX->next;
          if ( !_RBX )
            return;
        }
        if ( _RBX->clientModelIndex != -1 )
        {
          AnimVisualizer_DestroyCameraAnimations(_RBX);
          AnimVisualizer_UpdateSceneDuration(v7);
          v9 = (Cmd_Argc() - 3) / 2;
          if ( v9 )
          {
            if ( v9 <= s_CameraAnimationPoolFreeCount )
            {
              _RBP = NULL;
              if ( v9 > 0 )
              {
                v11 = 4;
                v12 = (unsigned int)v9;
                do
                {
                  v13 = Cmd_Argv(v11 - 1);
                  _RDI = (XAssetHeader *)s_CameraAnimationPoolHead;
                  if ( s_CameraAnimationPoolHead )
                  {
                    next = s_CameraAnimationPoolHead->next;
                    --s_CameraAnimationPoolFreeCount;
                    s_CameraAnimationPoolHead = next;
                  }
                  _RDI[2].physicsLibrary = NULL;
                  if ( _RBP )
                    _RBP[2].physicsLibrary = (PhysicsLibrary *)_RDI;
                  else
                    _RBX->cameraAnimationList = (AnimVyzCameraAnimation *)_RDI;
                  v16.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XCAM, v13, 0).physicsLibrary;
                  if ( v16.physicsLibrary )
                  {
                    _RDI->physicsLibrary = v16.physicsLibrary;
                    v17 = Cmd_Argv(v11);
                    _XMM0_8 = atof(v17);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  dword ptr [rdi+8], xmm1
                    }
                    _RBP = _RDI;
                    __asm
                    {
                      vxorps  xmm1, xmm1, xmm1
                      vxorps  xmm0, xmm0, xmm0
                      vcvtsi2ss xmm0, xmm0, dword ptr [r14+20h]
                      vcvtsi2ss xmm1, xmm1, ecx
                      vdivss  xmm1, xmm1, xmm0
                      vmovss  dword ptr [rdi+0Ch], xmm1
                    }
                  }
                  v11 += 2;
                  --v12;
                }
                while ( v12 );
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+0Ch]
                vaddss  xmm1, xmm0, dword ptr [rbp+8]
                vmovss  dword ptr [rbx+100h], xmm1
              }
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
          _R15 = &v7->alignmentValues[0].startTime;
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
            Core_strcpy((char *)_R15 - 128, 0x40ui64, v12);
            Core_strcpy((char *)_R15 - 64, 0x40ui64, v13);
            v16 = Cmd_Argv(v10 + 1);
            _XMM0_8 = atof(v16);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15], xmm1
            }
            v18 = Cmd_Argv(v10 + 2);
            _XMM0_8 = atof(v18);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+4], xmm1
            }
            v20 = Cmd_Argv(v10 + 3);
            _XMM0_8 = atof(v20);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+8], xmm1
            }
            v22 = Cmd_Argv(v10 + 4);
            _XMM0_8 = atof(v22);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+0Ch], xmm1
            }
            v24 = Cmd_Argv(v10 + 5);
            _XMM0_8 = atof(v24);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+10h], xmm1
            }
            v26 = Cmd_Argv(v10 + 6);
            _XMM0_8 = atof(v26);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+14h], xmm1
            }
            v28 = Cmd_Argv(v10 + 7);
            _XMM0_8 = atof(v28);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+18h], xmm1
            }
            v30 = Cmd_Argv(v10 + 8);
            _XMM0_8 = atof(v30);
            ++v4;
            v10 += 10;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+1Ch], xmm1
            }
            _R15 += 40;
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
  const char *v2; 
  unsigned int v3; 
  int v4; 
  AnimVyzScene *i; 
  const char *v7; 
  const char *v8; 

  if ( Cmd_Argc() == 4 )
  {
    v2 = Cmd_Argv(1);
    v3 = I_atoui(v2);
    v4 = 0;
    for ( i = s_AnimVyzScenes; i->sceneInstanceId != v3; ++i )
    {
      if ( (unsigned int)++v4 >= 0x10 )
        return;
    }
    _RDI = &s_AnimVyzScenes[v4];
    if ( _RDI )
    {
      __asm { vmovaps [rsp+38h+var_18], xmm6 }
      v7 = Cmd_Argv(2);
      v8 = Cmd_Argv(3);
      _XMM0_8 = atof(v8);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      Core_strcpy(_RDI->sceneName, 0x40ui64, v7);
      __asm
      {
        vmovss  dword ptr [rdi+10h], xmm6
        vmovaps xmm6, [rsp+38h+var_18]
      }
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
    _RDI = &s_AnimVyzScenes[v6];
    if ( _RDI )
    {
      _RBX = _RDI->modelList;
      if ( _RBX )
      {
        while ( _RBX->modelInstanceId != v4 )
        {
          _RBX = _RBX->next;
          if ( !_RBX )
            return;
        }
        if ( _RBX->clientModelIndex != -1 )
        {
          v9 = Cmd_Argv(3);
          _XMM0_8 = atof(v9);
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+11Ch], xmm1
          }
          v11 = Cmd_Argv(4);
          _XMM0_8 = atof(v11);
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+120h], xmm1
          }
          v13 = Cmd_Argv(5);
          _XMM0_8 = atof(v13);
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+124h], xmm1
          }
          v15 = Cmd_Argv(6);
          _XMM0_8 = atof(v15);
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+128h], xmm1
          }
          v17 = Cmd_Argv(7);
          _XMM0_8 = atof(v17);
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+12Ch], xmm1
          }
          v19 = Cmd_Argv(8);
          _XMM0_8 = atof(v19);
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+130h], xmm1
            vmovss  xmm1, dword ptr [rdi+14h]; time
          }
          AnimVisualizer_SetPlaybackPosition(_RDI, *(float *)&_XMM1, 1);
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
    _R15 = &s_AnimVyzScenes[v5];
    if ( _R15 )
    {
      modelList = _R15->modelList;
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
          __asm { vmovss  xmm1, dword ptr [r15+14h]; time }
          AnimVisualizer_SetPlaybackPosition(_R15, *(float *)&_XMM1, 1);
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
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  cs:s_AnimVyzDVRRecordStartTime, xmm1
    }
    v4 = Cmd_Argv(3);
    _XMM0_8 = atof(v4);
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  cs:s_AnimVyzDVRRecordEndTime, xmm1
    }
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
          _R15 = v12->notifyInfo;
          v21 = 5;
          v22 = v19;
          do
          {
            v23 = Cmd_Argv(v21);
            _XMM0_8 = atof(v23);
            v24 = v21 + 1;
            v21 += 2;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r15+4], xmm1
            }
            v26 = Cmd_Argv(v24);
            _R15->name = SL_GetLowercaseString(v26, 0);
            ++_R15;
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
  AnimVyzModel *modelList; 
  unsigned int clientModelIndex; 
  AnimVyzAnimation *v11; 
  int v12; 
  const DObj *DObj; 
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
      _R13 = &s_AnimVyzScenes[v7];
      if ( _R13 )
      {
        modelList = _R13->modelList;
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
                _R14 = &v11->additiveAnimations[0].treeIndex;
                v15 = 5i64;
                do
                {
                  v16 = v12;
                  v17 = v12 + 1;
                  v18 = Cmd_Argv(v16);
                  v19 = v18;
                  if ( asc_143D6868C[0] != *v18 || asc_143D6868C[1] != v18[1] )
                  {
                    v20 = *_R14;
                    *((_BYTE *)_R14 - 4) = 1;
                    Tree = DObjGetTree(DObj);
                    XAnimCreate(Tree->anims, v20 + 1, v19, 1);
                  }
                  v22 = Cmd_Argv(v17);
                  _XMM0_8 = atof(v22);
                  v23 = v17 + 1;
                  v12 = v17 + 2;
                  __asm
                  {
                    vcvtsd2ss xmm1, xmm0, xmm0
                    vmovss  dword ptr [r14+4], xmm1
                  }
                  v25 = Cmd_Argv(v23);
                  _XMM0_8 = atof(v25);
                  __asm
                  {
                    vcvtsd2ss xmm1, xmm0, xmm0
                    vmovss  dword ptr [r14+8], xmm1
                  }
                  _R14 += 4;
                  --v15;
                }
                while ( v15 );
              }
              __asm { vmovss  xmm1, dword ptr [r13+14h]; time }
              AnimVisualizer_SetPlaybackPosition(_R13, *(float *)&_XMM1, 1);
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
  const char *v9; 
  int v10; 
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
    _RSI = &s_AnimVyzScenes[v6];
    if ( _RSI )
    {
      _RBX = _RSI->modelList;
      if ( _RBX )
      {
        while ( _RBX->modelInstanceId != v4 )
        {
          _RBX = _RBX->next;
          if ( !_RBX )
            return;
        }
        if ( _RBX->clientModelIndex != -1 )
        {
          v9 = Cmd_Argv(3);
          _XMM0_8 = atof(v9);
          v10 = 4;
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rbx+17Ch], xmm1
          }
          _RBX = _RBX->additiveAnimationWeights;
          v13 = 5i64;
          do
          {
            v14 = Cmd_Argv(v10);
            _XMM0_8 = atof(v14);
            ++v10;
            ++_RBX;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [rbx-4], xmm1
            }
            --v13;
          }
          while ( v13 );
          __asm { vmovss  xmm1, dword ptr [rsi+14h]; time }
          AnimVisualizer_SetPlaybackPosition(_RSI, *(float *)&_XMM1, 1);
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
  float v28; 
  float v33; 
  float v50; 
  float v52; 
  float v1[4]; 

  __asm
  {
    vmovaps [rsp+70h+var_10], xmm6
    vmovss  xmm0, dword ptr [r8]
    vaddss  xmm1, xmm0, dword ptr [rcx+38h]
  }
  _RBX = positionOut;
  _R14 = modelInstance;
  _RDI = anglesOut;
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [rcx+3Ch]
    vaddss  xmm1, xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [rcx+40h]
    vaddss  xmm1, xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  xmm0, dword ptr [rcx+44h]
    vaddss  xmm1, xmm0, dword ptr [r9]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm0, dword ptr [rcx+48h]
    vaddss  xmm1, xmm0, dword ptr [r9+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vaddss  xmm1, xmm0, dword ptr [r9+8]
    vmovss  dword ptr [rbp+var_50], xmm2
    vmovss  dword ptr [rbp+var_50+4], xmm2
    vmovss  [rbp+var_48], xmm2
    vmovss  dword ptr [rbp+var_40], xmm2
    vmovss  dword ptr [rbp+var_40+4], xmm2
    vmovss  [rbp+var_38], xmm2
    vmovss  [rbp+v1], xmm2
    vmovss  [rbp+var_2C], xmm2
    vmovss  [rbp+var_28], xmm2
  }
  _R15 = scene;
  __asm
  {
    vmovaps xmm2, xmm6; epsilon
    vmovss  dword ptr [rdi+8], xmm1
  }
  if ( VecNCompareCustomEpsilon(scene->shotDisplacementPosition.v, v1, *(float *)&_XMM2, 3) )
  {
    if ( !_R14 )
      goto LABEL_6;
    __asm { vmovaps xmm2, xmm6; epsilon }
    if ( VecNCompareCustomEpsilon(_R14->displacementPosition.v, v1, *(float *)&_XMM2, 3) )
    {
LABEL_6:
      __asm { vmovaps xmm2, xmm6; epsilon }
      if ( VecNCompareCustomEpsilon(_R15->sceneDisplacementPosition.v, v1, *(float *)&_XMM2, 3) )
        goto LABEL_9;
      __asm { vmovsd  xmm0, qword ptr [r15+0A5Ch] }
      v28 = _R15->sceneDisplacementPosition.v[2];
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr [r14+11Ch] }
      v28 = _R14->displacementPosition.v[2];
    }
  }
  else
  {
    __asm { vmovsd  xmm0, qword ptr [r15+0A74h] }
    v28 = _R15->shotDisplacementPosition.v[2];
  }
  __asm { vmovsd  [rbp+var_50], xmm0 }
  v50 = v28;
LABEL_9:
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( !VecNCompareCustomEpsilon(_R15->shotDisplacementAngles.v, v1, *(float *)&_XMM2, 3) )
  {
    __asm { vmovsd  xmm0, qword ptr [r15+0A80h] }
    v33 = _R15->shotDisplacementAngles.v[2];
LABEL_16:
    __asm { vmovsd  [rbp+var_40], xmm0 }
    v52 = v33;
    goto LABEL_17;
  }
  if ( _R14 )
  {
    __asm { vmovaps xmm2, xmm6; epsilon }
    if ( !VecNCompareCustomEpsilon(_R14->displacementAngles.v, v1, *(float *)&_XMM2, 3) )
    {
      __asm { vmovsd  xmm0, qword ptr [r14+128h] }
      v33 = _R14->displacementAngles.v[2];
      goto LABEL_16;
    }
  }
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( !VecNCompareCustomEpsilon(_R15->sceneDisplacementAngles.v, v1, *(float *)&_XMM2, 3) )
  {
    __asm { vmovsd  xmm0, qword ptr [r15+0A68h] }
    v33 = _R15->sceneDisplacementAngles.v[2];
    goto LABEL_16;
  }
LABEL_17:
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+var_50]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbp+var_50+4]
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm1, [rbp+var_48]
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rbp+var_40]
    vmovss  dword ptr [rbx+8], xmm2
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rbp+var_40+4]
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm1, [rbp+var_38]
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  dword ptr [rdi+4], xmm0
    vmovaps xmm6, [rsp+70h+var_10]
  }
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

float __fastcall AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly(int entityIndex, double deltaTime)
{
  AnimVyzScene *SceneFromEntityIndex; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  SceneFromEntityIndex = AnimVisualizer_FindSceneFromEntityIndex(entityIndex);
  if ( SceneFromEntityIndex )
  {
    if ( SceneFromEntityIndex->playbackState == Playing )
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax+20h]
        vmovaps xmm6, [rsp+38h+var_18]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovaps xmm6, [rsp+38h+var_18]
      }
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  return *(float *)&_XMM0;
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

void __fastcall AnimVisualizer_Initialize(__int64 a1, double _XMM1_8)
{
  AnimVyzCommand *v4; 
  cmd_function_s *p_cmd_function; 
  __int64 v6; 
  AnimVyzAnimation *v7; 
  __int64 v8; 
  AnimVyzAnimation **p_next; 
  AnimVyzCameraAnimation **v10; 
  int v11; 
  __int64 v12; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v4 = s_Commands;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  p_cmd_function = &s_Commands[0].cmd_function;
  v6 = 25i64;
  do
  {
    Cmd_AddCommandInternal(v4->commandString, v4->commandHandler, p_cmd_function);
    p_cmd_function = (cmd_function_s *)((char *)p_cmd_function + 56);
    ++v4;
    --v6;
  }
  while ( v6 );
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
  v7 = &s_AnimVyzAnimationPool[1];
  s_AnimVyzAnimationPoolFreeCount = 256;
  s_AnimVyzModelPool[40].next = &s_AnimVyzModelPool[41];
  s_AnimVyzModelPool[63].next = NULL;
  s_AnimVyzModelPool[41].next = &s_AnimVyzModelPool[42];
  v8 = 255i64;
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
    *p_next = v7;
    p_next += 16;
    ++v7;
    --v8;
  }
  while ( v8 );
  s_AnimVyzAnimationPool[255].next = NULL;
  s_CameraAnimationPoolHead = s_CameraAnimationPool;
  v10 = &s_CameraAnimationPool[0].next;
  s_CameraAnimationPoolFreeCount = 128;
  v11 = 1;
  do
  {
    v12 = v11++;
    *v10 = &s_CameraAnimationPool[v12];
    v10 += 3;
  }
  while ( (__int64)v10 < (__int64)&s_CameraAnimationPool[127].next );
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
  __asm
  {
    vmovss  xmm7, cs:__real@47c35000
    vmovss  xmm6, cs:__real@c7c35000
  }
  s_AnimVyzAlignTagDVar = Dvar_RegisterString("NNTPLTSSMN", (const char *)&queryFormat.fmt + 3, 0x100u, "YanimVyz alignment tag");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  s_AnimVyzAlignPositionXDVar = Dvar_RegisterFloat("SMNOPRPON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x100u, "YanimVyz alignment position x");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  s_AnimVyzAlignPositionYDVar = Dvar_RegisterFloat("NKOPSKPOKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x100u, "YanimVyz alignment position y");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm7, cs:__real@43b40000
    vmovss  xmm6, cs:__real@c3b40000
  }
  s_AnimVyzAlignPositionZDVar = Dvar_RegisterFloat("TRNLSPTRN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x100u, "YanimVyz alignment position z");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  s_AnimVyzAlignAngleXDVar = Dvar_RegisterFloat("NPLPTKSMRP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x100u, "YanimVyz alignment angle x");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  s_AnimVyzAlignAngleYDVar = Dvar_RegisterFloat("LOONMSSSOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x100u, "YanimVyz alignment angle y");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  s_AnimVyzAlignAngleZDVar = Dvar_RegisterFloat("NQQPQNQRKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x100u, "YanimVyz alignment angle z");
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
  bool i; 
  AnimVyzModel *modelList; 
  AnimVyzModel *v16; 
  AnimVyzModel *v18; 
  bool v20; 
  char v30; 
  __int64 v31; 

  looping = scene->looping;
  playbackState = scene->playbackState;
  _RSI = scene;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps [rsp+78h+var_48], xmm8
  }
  scene->looping = 0;
  scene->playbackState = Playing;
  __asm { vmovss  xmm8, dword ptr [rcx+20h] }
  scene->playbackSpeed = 1.0;
  __asm { vmovaps xmm7, xmm1 }
  i = !forcePlayFromStart;
  if ( forcePlayFromStart )
  {
    modelList = scene->modelList;
    scene->currentTime = 0.0;
    for ( i = modelList == NULL; modelList; i = modelList == NULL )
    {
      modelList->currentAnimation[0] = NULL;
      modelList = modelList->next;
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm7, xmm0
  }
  _RDI = &scene->currentTime;
  if ( i )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vcomiss xmm7, xmm1
  }
  if ( i )
  {
LABEL_18:
    v16 = scene->modelList;
    *_RDI = 0.0;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( v16 )
    {
      do
      {
        v16->currentAnimation[0] = NULL;
        v16 = v16->next;
      }
      while ( v16 );
      __asm { vmovss  xmm1, dword ptr [rdi] }
    }
  }
  __asm { vminss  xmm6, xmm7, cs:__real@3c23d70a }
  v18 = scene->modelList;
  if ( v18 )
  {
    do
    {
      if ( v18->clientModelIndex != -1 )
      {
        __asm { vmovss  xmm1, dword ptr [rdi]; currentTime }
        AnimVisualizer_UpdateAnimationState(v18, *(float *)&_XMM1, 0);
        if ( CG_ClientModel_GetDObj(LOCAL_CLIENT_0, v18->clientModelIndex) )
        {
          __asm { vmovaps xmm2, xmm6 }
          DObjUpdateClientInfo((DObj *)&v31, *(float *)&_XMM1, v20, 0);
        }
      }
      v18 = v18->next;
    }
    while ( v18 );
    __asm { vmovss  xmm1, dword ptr [rdi] }
  }
  __asm
  {
    vaddss  xmm1, xmm1, xmm6
    vcomiss xmm1, xmm7
    vmovss  dword ptr [rdi], xmm1
  }
  _RSI->looping = looping;
  _RSI->playbackState = playbackState;
  __asm
  {
    vmovss  dword ptr [rsi+20h], xmm8
    vmovaps xmm6, [rsp+78h+var_28]
  }
  _R11 = &v30;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  AnimVisualizer_UpdateScene(_RSI, *(float *)&_XMM1, 1);
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

void __fastcall AnimVisualizer_Update(double deltaTimeSeconds)
{
  __int64 v4; 
  __int64 v8; 
  AnimVyzScene *v9; 
  __int64 p_playbackState; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( s_AnimVyzReady )
  {
    _RBX = &s_AnimVyzScenes[0].playbackState;
    v4 = 16i64;
    do
    {
      if ( *((_DWORD *)_RBX - 6) )
      {
        __asm { vmovss  xmm1, dword ptr [rbx-4] }
        if ( *_RBX == Playing )
        {
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [rbx+8]
            vaddss  xmm2, xmm6, dword ptr [rbx+0A78h]
            vmovss  dword ptr [rbx+0A78h], xmm2
            vaddss  xmm1, xmm1, xmm0; currentTime
          }
        }
        AnimVisualizer_UpdateScene((AnimVyzScene *)(_RBX - 6), *(float *)&_XMM1, 0);
        AnimVisualizer_UpdateSceneAlignment((AnimVyzScene *)(_RBX - 6));
      }
      _RBX += 694;
      --v4;
    }
    while ( v4 );
    AnimVisualizer_UpdateCameraState();
    if ( !s_AnimVyzDVRRecordEnabled || !s_AnimVyzActiveSceneInstanceId )
      goto LABEL_20;
    v8 = 0i64;
    v9 = s_AnimVyzScenes;
    while ( v9->sceneInstanceId != s_AnimVyzActiveSceneInstanceId )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v9;
      if ( (unsigned int)v8 >= 0x10 )
      {
        _RDX = 20i64;
        p_playbackState = 24i64;
        goto LABEL_15;
      }
    }
    _RDX = (__int64)&s_AnimVyzScenes[v8].currentTime;
    p_playbackState = (__int64)&s_AnimVyzScenes[v8].playbackState;
    if ( *(_DWORD *)p_playbackState != 1 )
      goto LABEL_20;
    __asm
    {
      vmovss  xmm1, dword ptr [rdx]
      vmovss  xmm0, cs:s_AnimVyzDVRRecordStartTime
      vcomiss xmm0, xmm1
    }
    if ( *(_DWORD *)p_playbackState > 1u )
      goto LABEL_20;
LABEL_15:
    __asm { vcomiss xmm1, cs:s_AnimVyzDVRRecordEndTime }
    if ( !*(_DWORD *)p_playbackState )
    {
      if ( !s_AnimVyzDVRRecordActive )
      {
        s_AnimVyzDVRRecordActive = 1;
        __asm { vmovaps xmm6, [rsp+38h+var_18] }
        return;
      }
    }
    else
    {
LABEL_20:
      s_AnimVyzDVRRecordActive = 0;
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
AnimVisualizer_UpdateAnimationState
==============
*/

void __fastcall AnimVisualizer_UpdateAnimationState(AnimVyzModel *modelInstance, double currentTime, bool reset)
{
  AnimVyzAnimation *v12; 
  char tree; 
  bool v16; 
  bool v20; 
  AnimVyzAnimation *v23; 
  const XModel *v24; 
  int clientModelIndex; 
  const XModel **v26; 
  int v27; 
  XModel **v28; 
  scr_string_t *v29; 
  char v30; 
  char v31; 
  const DObj *DObj; 
  bool v33; 
  unsigned int deltaAnimationTreeIndex; 
  XAnimTree *v40; 
  unsigned int v43; 
  XAnimTree *v44; 
  bool v45; 
  int v47; 
  const DObj *v49; 
  __int64 i; 
  unsigned int v58; 
  XAnimTree *v59; 
  __int64 v62; 
  __int64 v63; 
  int treeIndex; 
  float time; 
  float timea; 
  float timeb; 
  float timec; 
  float timed; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  DObj obj; 
  int v85; 
  int v86; 
  char v93; 

  __asm { vmovaps [rsp+318h+var_78], xmm9 }
  _RDI = modelInstance->animationList[0];
  _R13 = NULL;
  v12 = NULL;
  tree = reset;
  LOBYTE(obj.tree) = reset;
  __asm { vmovaps xmm9, xmm1 }
  v16 = _RDI == NULL;
  if ( _RDI )
  {
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vcomiss xmm0, xmm9
      }
      if ( v16 )
      {
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [rdi+8]
          vcomiss xmm0, xmm9
        }
        if ( !v16 )
          break;
      }
      _RDI = _RDI->next;
      v16 = _RDI == NULL;
      if ( !_RDI )
        goto LABEL_7;
    }
    _R13 = _RDI;
  }
LABEL_7:
  _RAX = modelInstance->animationList[1];
  v20 = _RAX == NULL;
  if ( _RAX )
  {
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+4]
        vcomiss xmm0, xmm9
      }
      if ( v20 )
      {
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [rax+8]
          vcomiss xmm0, xmm9
        }
        if ( !v20 )
          break;
      }
      _RAX = _RAX->next;
      v20 = _RAX == NULL;
      if ( !_RAX )
        goto LABEL_13;
    }
    v12 = _RAX;
  }
LABEL_13:
  v23 = modelInstance->currentAnimation[1];
  *(_QWORD *)&obj.duplicateParts = v23;
  if ( (v12 == NULL) == modelInstance->headOn )
  {
    v30 = 0;
  }
  else
  {
    v24 = modelInstance->models[0];
    clientModelIndex = modelInstance->clientModelIndex;
    modelInstance->headOn = v12 == NULL;
    CG_ClientModel_SetModel(LOCAL_CLIENT_0, clientModelIndex, v24);
    v26 = (const XModel **)&modelInstance->models[1];
    v27 = 1;
    if ( modelInstance->models[1] )
    {
      v28 = &modelInstance->models[1];
      v29 = &modelInstance->attachNames[1];
      do
      {
        if ( modelInstance->headOn || modelInstance->headIdx != v27 )
          CG_ClientModel_AddModel(LOCAL_CLIENT_0, modelInstance->clientModelIndex, *v26, *v29);
        ++v28;
        ++v27;
        ++v29;
        v26 = (const XModel **)v28;
      }
      while ( *v28 );
      v23 = *(AnimVyzAnimation **)&obj.duplicateParts;
      tree = (char)obj.tree;
    }
    v30 = 1;
  }
  v31 = 1;
  if ( !v30 )
    v31 = tree;
  DObj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, modelInstance->clientModelIndex);
  if ( DObj )
  {
    __asm
    {
      vmovaps [rsp+318h+var_48], xmm6
      vmovaps [rsp+318h+var_58], xmm7
      vmovaps [rsp+318h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    if ( modelInstance->currentAnimation[0] != _R13 || v31 )
    {
      v16 = !modelInstance->isSiege;
      modelInstance->currentAnimation[0] = _R13;
      if ( v16 && _R13 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r13+10h]
          vmovss  [rsp+318h+var_2E8], xmm8
          vmovss  [rsp+318h+var_2F0], xmm0
          vmovss  [rsp+318h+time], xmm8
        }
        XAnimSetGoalWeightKnob(DObj, 0, XANIM_SUBTREE_DEFAULT, _R13->deltaAnimationTreeIndex, time, v78, v81, (scr_string_t)0, 0, LINEAR);
        __asm
        {
          vsubss  xmm0, xmm9, dword ptr [r13+4]
          vdivss  xmm1, xmm0, dword ptr [r13+8]
          vaddss  xmm6, xmm1, dword ptr [r13+0Ch]
        }
        deltaAnimationTreeIndex = _R13->deltaAnimationTreeIndex;
        v40 = DObjGetTree(DObj);
        __asm { vmovss  [rsp+318h+time], xmm6 }
        XAnimSetTime(v40, 0, XANIM_SUBTREE_DEFAULT, deltaAnimationTreeIndex, timea);
      }
      __asm { vxorps  xmm2, xmm2, xmm2 }
      DObjUpdateClientInfo(&obj, *(float *)&currentTime, v33, 0);
    }
    if ( modelInstance->isSiege && modelInstance->currentAnimation[0] )
    {
      __asm
      {
        vsubss  xmm0, xmm9, dword ptr [rdi+4]
        vdivss  xmm6, xmm0, dword ptr [rdi+1Ch]
      }
      v43 = _RDI->deltaAnimationTreeIndex;
      v44 = DObjGetTree(DObj);
      __asm { vmovss  [rsp+318h+time], xmm6 }
      XAnimSetTime(v44, 0, XANIM_SUBTREE_DEFAULT, v43, timeb);
      __asm { vxorps  xmm2, xmm2, xmm2 }
      DObjUpdateClientInfo(&obj, *(float *)&currentTime, v45, 0);
    }
    if ( modelInstance->currentAnimation[1] != v12 || v31 )
    {
      if ( v23 )
      {
        __asm
        {
          vmovss  [rsp+318h+var_2E8], xmm8
          vmovss  [rsp+318h+var_2F0], xmm7
          vmovss  [rsp+318h+time], xmm7
        }
        XAnimSetCompleteGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, v23->deltaAnimationTreeIndex, timec, v79, v82, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      if ( v12 )
      {
        __asm
        {
          vmovss  [rsp+318h+var_2E8], xmm8
          vmovss  [rsp+318h+var_2F0], xmm7
          vmovss  [rsp+318h+time], xmm8
        }
        XAnimSetCompleteGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, v12->deltaAnimationTreeIndex, timed, v80, v83, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      __asm { vxorps  xmm2, xmm2, xmm2 }
      DObjUpdateClientInfo(&obj, *(float *)&currentTime, v33, 0);
      modelInstance->currentAnimation[1] = v12;
    }
    v47 = modelInstance->clientModelIndex;
    _RBP = modelInstance->animationList[0];
    obj.skel.partBits.control.array[6] = 0;
    obj.hidePartBits.array[1] = 0;
    obj.modelHasBadRootBoneMeld.array[2] = 0;
    v85 = 0;
    v86 = 0;
    v49 = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, v47);
    if ( v49 && _RBP )
    {
      __asm
      {
        vmovaps [rsp+318h+var_88], xmm10
        vmovaps [rsp+318h+var_98], xmm11
        vmovsd  xmm11, cs:__real@3fa0e5604189374c
      }
      do
      {
        for ( i = 0i64; i < 5; ++i )
        {
          _RSI = 2 * i;
          if ( _RBP->additiveAnimations[i].inUse )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+rsi*8+2Ch]
              vmovss  xmm0, dword ptr [rbp+8]
              vaddss  xmm6, xmm1, dword ptr [rbp+4]
              vsubss  xmm1, xmm0, xmm1
              vmovaps xmm8, xmm7
            }
            if ( i == 4 )
            {
              v58 = _RBP->additiveAnimations[4].treeIndex + 1;
              v59 = DObjGetTree(v49);
              *(double *)&_XMM0 = XAnimGetLength(v59->anims, v58);
              __asm
              {
                vmulss  xmm1, xmm0, dword ptr [rbp+rsi*8+30h]; duration
                vmovaps xmm8, xmm0
              }
            }
            __asm
            {
              vcomiss xmm1, xmm7
              vmovaps xmm10, xmm7
            }
            v62 = (int)obj.skel.partBits.control.array[25 * i + 6];
            if ( (int)v62 >= 8 )
            {
              Com_PrintWarning(1, "Animation Visualizer max additive animations exceeded\n");
            }
            else
            {
              v63 = 3 * v62;
              treeIndex = _RBP->additiveAnimations[i].treeIndex;
              _RDX = 100 * i + 4 * v63;
              __asm { vmovss  [rsp+rdx+318h+obj.ignoreCollision.baseclass_0.array], xmm10 }
              *(_DWORD *)(&obj.numBones + _RDX) = treeIndex;
              *((_BYTE *)&obj.ignoreCollision.array[1] + _RDX) = 0;
              ++obj.skel.partBits.control.array[25 * i + 6];
            }
          }
        }
        _RBP = _RBP->next;
      }
      while ( _RBP );
      __asm
      {
        vmovaps xmm11, [rsp+318h+var_98]
        vmovaps xmm10, [rsp+318h+var_88]
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+318h+var_58]
      vmovaps xmm6, [rsp+318h+var_48]
      vmovaps xmm8, [rsp+318h+var_68]
    }
  }
  _R11 = &v93;
  __asm { vmovaps xmm9, xmmword ptr [r11-40h] }
}

/*
==============
AnimVisualizer_UpdateCameraState
==============
*/

void __fastcall AnimVisualizer_UpdateCameraState(double _XMM0_8)
{
  const XCam *cameraIndex; 
  __int64 v5; 
  AnimVyzScene *v6; 
  AnimVyzCamera::CameraType type; 
  char v8; 
  bool v9; 
  gentity_s *v10; 
  cg_t *LocalClientGlobals; 
  gclient_s *client; 
  cg_t *v13; 
  AnimVyzModel *model; 
  const DObj *DObj; 
  const cpose_t *Pose; 
  const cpose_t *v18; 
  float v19; 
  gclient_s *v21; 
  gclient_s *v24; 
  cg_t *v26; 
  cg_t *v27; 
  bool v30; 
  XCamData *p_xCam; 
  gclient_s *v37; 
  vec3_t in1; 
  vec3_t angles; 
  vec4_t origin; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v44; 
  tmat43_t<vec3_t> out; 

  cameraIndex = NULL;
  _RBX = NULL;
  if ( s_AnimVyzActiveSceneInstanceId )
  {
    v5 = 0i64;
    v6 = s_AnimVyzScenes;
    while ( v6->sceneInstanceId != s_AnimVyzActiveSceneInstanceId )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v6;
      if ( (unsigned int)v5 >= 0x10 )
        goto LABEL_7;
    }
    _RBX = &s_AnimVyzScenes[v5];
  }
LABEL_7:
  type = s_AnimVyzCameraState.type;
  v8 = 0;
  if ( _RBX )
  {
    if ( _RBX->cameraState.type != s_AnimVyzCameraState.type )
    {
LABEL_12:
      v8 = 1;
      goto LABEL_13;
    }
    v9 = _RBX->cameraState.model == s_AnimVyzCameraState.model;
  }
  else
  {
    v9 = s_AnimVyzCameraState.type == None;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_13:
  v10 = g_entities;
  if ( v8 )
  {
    if ( s_AnimVyzCameraState.type )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      if ( s_AnimVyzCameraState.type == 2 )
      {
        LocalClientGlobals->radiantCamInUse = 0;
        if ( v10 )
        {
          client = v10->client;
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
    if ( _RBX && _RBX->cameraState.type )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+28h]
        vmovups xmmword ptr cs:s_AnimVyzCameraState.type, xmm0
      }
      type = s_AnimVyzCameraState.type;
    }
  }
  if ( type == 2 )
  {
    v13 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    model = s_AnimVyzCameraState.model;
    _RBX = v13;
    DObj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, s_AnimVyzCameraState.model->clientModelIndex);
    Pose = CG_ClientModel_GetPose(LOCAL_CLIENT_0, model->clientModelIndex);
    v18 = Pose;
    if ( DObj && Pose )
    {
      if ( CG_DObjGetWorldTagMatrix(Pose, DObj, scr_const.tag_camera, &outTagMat, (vec3_t *)&origin) )
      {
        AxisToAngles(&outTagMat, &_RBX->radiantCameraAngles);
        v19 = origin.v[2];
        _RBX->radiantCamInUse = 1;
        _RBX->radiantCamReceived = 1;
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+140h+origin]
          vmovsd  qword ptr [rbx+18048h], xmm0
        }
        _RBX->radiantCameraOrigin.v[2] = v19;
        if ( v10 )
        {
          v21 = v10->client;
          if ( v21 )
            v21->flags |= 2u;
        }
      }
      else if ( CG_DObjGetWorldTagMatrix(v18, DObj, scr_const.j_head, &outTagMat, (vec3_t *)&origin) )
      {
        if ( model->currentAnimation[0] )
        {
          __asm
          {
            vmovss  xmm3, cs:__real@3f800000; scale
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rsp+140h+angles], xmm0
            vmovss  dword ptr [rsp+140h+angles+4], xmm0
            vmovss  dword ptr [rsp+140h+angles+8], xmm0
            vmovss  dword ptr [rsp+140h+in1], xmm0
            vmovss  dword ptr [rsp+140h+in1+4], xmm0
            vmovss  dword ptr [rsp+140h+in1+8], xmm0
          }
          MatrixSet43(&out, (const vec3_t *)&origin, &outTagMat, *(float *)&_XMM3);
          MatrixTransformVector43(&in1, &out, &_RBX->radiantCameraOrigin);
          AnglesToAxis(&angles, &axis);
          MatrixMultiply(&axis, &outTagMat, &v44);
          AxisToAngles(&v44, &_RBX->radiantCameraAngles);
          _RBX->radiantCamInUse = 1;
          _RBX->radiantCamReceived = 1;
          if ( v10 )
          {
            v24 = v10->client;
            if ( v24 )
              v24->flags |= 2u;
          }
        }
      }
    }
    return;
  }
  if ( type != 1 )
    return;
  __asm
  {
    vmovaps [rsp+140h+var_20], xmm6
    vmovss  xmm6, dword ptr [rbx+14h]
    vmovaps [rsp+140h+var_30], xmm7
  }
  v26 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v27 = v26;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  _RDX = s_AnimVyzCameraState.model->cameraAnimationList;
  v30 = _RDX == NULL;
  if ( !_RDX )
    goto LABEL_42;
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+8]
      vcomiss xmm0, xmm6
    }
    if ( !v30 )
      goto LABEL_45;
    __asm { vaddss  xmm1, xmm0, dword ptr [rdx+0Ch] }
    if ( !_RDX->next )
      break;
    __asm { vcomiss xmm1, xmm6 }
    if ( _RDX->next )
      goto LABEL_41;
LABEL_45:
    _RDX = _RDX->next;
    v30 = _RDX == NULL;
    if ( !_RDX )
      goto LABEL_42;
  }
  __asm { vcomiss xmm1, xmm6 }
LABEL_41:
  cameraIndex = _RDX->cameraIndex;
  __asm { vsubss  xmm7, xmm6, xmm0 }
LABEL_42:
  __asm { vmovaps xmm6, [rsp+140h+var_20] }
  p_xCam = &v26->xCam;
  if ( cameraIndex )
  {
    if ( XCamData::GetActiveXCam(p_xCam) != cameraIndex )
      XCamData::Init(&v27->xCam, cameraIndex);
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@447a0000
      vcvttss2si eax, xmm0
    }
    XCamData::SetStartTime(&v27->xCam, v27->time - _EAX);
    AnimVisualizer_ApplySceneAlignment(_RBX, NULL, &vec3_origin, &vec3_origin, &in1, &angles);
    AnglesToQuat(&angles, &origin);
    XCamData::SetSceneTransform(&v27->xCam, &in1, &origin);
    if ( v10 )
    {
      v37 = v10->client;
      if ( v37 )
        v37->flags |= 2u;
    }
  }
  else
  {
    XCamData::Clear(p_xCam);
  }
  __asm { vmovaps xmm7, [rsp+140h+var_30] }
}

/*
==============
AnimVisualizer_UpdatePositionAndAngles
==============
*/
void AnimVisualizer_UpdatePositionAndAngles(AnimVyzScene *scene, AnimVyzModel *modelInstance)
{
  vec3_t *p_initialPosition; 
  const DObj *v15; 
  bool v20; 
  int v22; 
  unsigned int v38; 
  const XAnim_s *Anims; 
  unsigned int deltaAnimationTreeIndex; 
  XAnimTree *Tree; 
  unsigned int v48; 
  XAnimTree *v49; 
  char v58; 
  float positionOut; 
  float positionOuta; 
  float positionOutb; 
  DObj *obj; 
  vec3_t origin; 
  vec3_t angles; 
  vec4_t to; 
  vec3_t in1; 
  vec3_t v114; 
  float v116; 
  vec3_t trans; 
  vec4_t rot; 
  vec4_t quat; 
  vec3_t v120; 
  vec4_t v121; 
  vec4_t from; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> v127; 
  tmat33_t<vec3_t> v128; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> v130; 

  p_initialPosition = &modelInstance->initialPosition;
  _R14 = scene;
  AnimVisualizer_ApplySceneAlignment(scene, modelInstance, &modelInstance->initialPosition, &modelInstance->initialAngles, &origin, &angles);
  obj = CG_ClientModel_GetDObj(LOCAL_CLIENT_0, modelInstance->clientModelIndex);
  v15 = obj;
  if ( obj )
  {
    v20 = !_R14->moving;
    __asm { vmovaps [rsp+330h+var_40], xmm6 }
    if ( !v20 )
    {
      _RDI = modelInstance->animationList[0];
      if ( _RDI )
      {
        if ( !modelInstance->isSiege )
        {
          if ( modelInstance->cinematicAnimations )
          {
            if ( modelInstance->currentAnimation[0] )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r14+14h]
                vsubss  xmm1, xmm0, dword ptr [rax+4]
                vdivss  xmm6, xmm1, dword ptr [rax+8]
                vcomiss xmm6, cs:__real@3f800000
              }
            }
            goto LABEL_27;
          }
          v20 = 1;
          _RAX = NULL;
          __asm { vmovaps [rsp+330h+var_50], xmm7 }
          v22 = 0;
          __asm
          {
            vmovaps [rsp+330h+var_60], xmm8
            vmovaps [rsp+330h+var_B0], xmm13
            vmovaps [rsp+330h+var_C0], xmm14
            vmovaps [rsp+330h+var_D0], xmm15
            vmovaps [rsp+330h+var_70], xmm9
            vxorps  xmm7, xmm7, xmm7
            vmovaps [rsp+330h+var_80], xmm10
            vmovaps [rsp+330h+var_90], xmm11
            vmovaps [rsp+330h+var_A0], xmm12
            vmovss  dword ptr [rsp+330h+var_2B8], xmm7
            vmovss  dword ptr [rsp+330h+var_2B8+4], xmm7
            vmovss  dword ptr [rbp+230h+var_2B8+8], xmm7
            vxorps  xmm8, xmm8, xmm8
            vxorps  xmm13, xmm13, xmm13
            vxorps  xmm14, xmm14, xmm14
            vxorps  xmm15, xmm15, xmm15
          }
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r14+14h]
              vcomiss xmm8, xmm0
            }
            if ( !v20 )
              break;
            __asm
            {
              vmovss  xmm10, dword ptr [rdi+18h]
              vmovss  xmm2, dword ptr [rdi+1Ch]
              vsubss  xmm6, xmm2, xmm10
              vmovaps xmm11, xmm7
              vmovaps xmm1, xmm7
            }
            if ( _RDI->next )
              __asm { vmovss  xmm1, dword ptr [rdi+14h] }
            if ( _RAX )
              __asm { vmovss  xmm11, dword ptr [rax+10h] }
            __asm
            {
              vucomiss xmm10, xmm7
              vsubss  xmm12, xmm6, xmm1
              vsubss  xmm0, xmm0, xmm8
              vminss  xmm9, xmm0, xmm12
            }
            if ( _RAX )
            {
              __asm { vmovss  xmm0, cs:__real@3f800000 }
              deltaAnimationTreeIndex = _RDI->deltaAnimationTreeIndex;
              __asm { vdivss  xmm6, xmm0, xmm2 }
              Tree = DObjGetTree(v15);
              __asm
              {
                vaddss  xmm0, xmm9, xmm10
                vmulss  xmm1, xmm0, xmm6
                vminss  xmm2, xmm1, cs:__real@3f800000
                vmovss  dword ptr [rsp+330h+positionOut], xmm2
              }
              XAnimGetAbsDelta(Tree->anims, deltaAnimationTreeIndex, &v121, &v120, positionOuta);
              v48 = _RDI->deltaAnimationTreeIndex;
              v49 = DObjGetTree(obj);
              __asm
              {
                vmulss  xmm0, xmm6, xmm10
                vmovss  dword ptr [rsp+330h+positionOut], xmm0
              }
              XAnimGetAbsDelta(v49->anims, v48, &quat, &in1, positionOutb);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+330h+in1]
                vmovss  xmm2, dword ptr [rsp+330h+in1+4]
                vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
                vxorps  xmm1, xmm0, xmm10
                vxorps  xmm0, xmm2, xmm10
                vmovss  dword ptr [rsp+330h+in1], xmm1
                vmovss  xmm1, dword ptr [rsp+330h+in1+8]
                vxorps  xmm2, xmm1, xmm10
                vmovss  dword ptr [rsp+330h+in1+8], xmm2
                vmovss  dword ptr [rsp+330h+in1+4], xmm0
              }
              QuatToAxis(&quat, &out);
              MatrixInverse(&out, &axis);
              AxisToQuat(&axis, &quat);
              AnglesAndOriginToMatrix43((const vec3_t *)&v121, &v120, &in2);
              MatrixTransformVector43(&in1, &in2, &trans);
              QuatToAxis(&quat, &v128);
              MatrixMultiply(&v128, (const tmat33_t<vec3_t> *)&in2, &mat);
              AxisToQuat(&mat, &rot);
            }
            else
            {
              if ( _RDI->shotNumber != v22 )
              {
                AnimVisualizer_ApplySceneAlignment(_R14, modelInstance, p_initialPosition, &modelInstance->initialAngles, &origin, &angles);
                ++v22;
              }
              v38 = _RDI->deltaAnimationTreeIndex;
              Anims = CG_ClientModel_GetAnims(LOCAL_CLIENT_0, modelInstance->clientModelIndex);
              __asm
              {
                vdivss  xmm0, xmm9, xmm6
                vmovss  dword ptr [rsp+330h+positionOut], xmm0
              }
              XAnimGetAbsDelta(Anims, v38, &rot, &trans, positionOut);
            }
            AnglesAndOriginToMatrix43(&angles, &origin, &v127);
            MatrixTransformVector43(&trans, &v127, &origin);
            QuatToAxis(&rot, &v130);
            MatrixMultiply(&v130, (const tmat33_t<vec3_t> *)&v127, (tmat33_t<vec3_t> *)&result);
            AxisToAngles((const tmat33_t<vec3_t> *)&result, &angles);
            __asm { vcomiss xmm9, xmm11 }
            if ( v58 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+330h+origin]
                vsubss  xmm1, xmm0, xmm13
                vmovss  xmm0, dword ptr [rsp+330h+origin+4]
                vdivss  xmm6, xmm9, xmm11
                vmulss  xmm2, xmm1, xmm6
                vsubss  xmm1, xmm0, xmm14
                vmovss  xmm0, dword ptr [rsp+330h+origin+8]
                vaddss  xmm3, xmm2, xmm13
                vmovss  dword ptr [rsp+330h+origin], xmm3
                vmulss  xmm3, xmm1, xmm6
                vaddss  xmm4, xmm3, xmm14
                vsubss  xmm1, xmm0, xmm15
                vmulss  xmm3, xmm1, xmm6
                vmovss  dword ptr [rsp+330h+origin+4], xmm4
                vaddss  xmm4, xmm3, xmm15
                vmovss  dword ptr [rsp+330h+origin+8], xmm4
              }
              AnglesToQuat(&v114, &from);
              AnglesToQuat(&angles, &to);
              __asm { vmovaps xmm2, xmm6; frac }
              QuatSlerp(&from, &to, *(float *)&_XMM2, &to);
              __asm
              {
                vmovss  xmm4, dword ptr [rsp+330h+to+4]
                vmovss  xmm5, dword ptr [rsp+330h+to]
                vmovss  xmm6, dword ptr [rsp+330h+to+8]
                vmovss  xmm9, dword ptr [rsp+330h+to+0Ch]
                vmulss  xmm1, xmm4, xmm4
                vmulss  xmm0, xmm5, xmm5
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm6, xmm6
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm9, xmm9
                vaddss  xmm1, xmm3, xmm0
                vsqrtss xmm2, xmm1, xmm1
                vucomiss xmm2, xmm7
              }
              if ( !v20 )
              {
                __asm
                {
                  vmovss  xmm0, cs:__real@3f800000
                  vdivss  xmm2, xmm0, xmm2
                  vmulss  xmm0, xmm5, xmm2
                  vmulss  xmm1, xmm4, xmm2
                  vmovss  dword ptr [rsp+330h+to], xmm0
                  vmovss  dword ptr [rsp+330h+to+4], xmm1
                  vmulss  xmm0, xmm6, xmm2
                  vmulss  xmm1, xmm9, xmm2
                  vmovss  dword ptr [rsp+330h+to+8], xmm0
                  vmovss  dword ptr [rsp+330h+to+0Ch], xmm1
                }
              }
              UnitQuatToAngles(&to, &angles);
            }
            __asm { vmovsd  xmm0, qword ptr [rsp+330h+angles] }
            v114.v[2] = angles.v[2];
            __asm
            {
              vmovsd  qword ptr [rsp+330h+var_2B8], xmm0
              vmovsd  xmm0, qword ptr [rsp+330h+origin]
            }
            v116 = origin.v[2];
            _RAX = _RDI;
            _RDI = _RDI->next;
            __asm
            {
              vmovsd  [rbp+230h+var_2A8], xmm0
              vaddss  xmm8, xmm8, xmm12
            }
            v20 = _RDI == NULL;
            if ( !_RDI )
              break;
            __asm
            {
              vmovss  xmm15, [rbp+230h+var_2A0]
              vmovss  xmm14, dword ptr [rbp+230h+var_2A8+4]
              vmovss  xmm13, dword ptr [rbp+230h+var_2A8]
            }
            v15 = obj;
            p_initialPosition = &modelInstance->initialPosition;
          }
          __asm
          {
            vmovaps xmm9, [rsp+330h+var_70]
            vmovaps xmm10, [rsp+330h+var_80]
            vmovaps xmm12, [rsp+330h+var_A0]
            vmovaps xmm11, [rsp+330h+var_90]
            vmovaps xmm13, [rsp+330h+var_B0]
            vmovaps xmm8, [rsp+330h+var_60]
            vmovaps xmm7, [rsp+330h+var_50]
            vmovaps xmm14, [rsp+330h+var_C0]
            vmovaps xmm15, [rsp+330h+var_D0]
          }
        }
      }
    }
    CG_ClientModel_SetOrigin(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &origin);
    CG_ClientModel_SetAngles(LOCAL_CLIENT_0, modelInstance->clientModelIndex, &angles);
LABEL_27:
    __asm { vmovaps xmm6, [rsp+330h+var_40] }
  }
}

/*
==============
AnimVisualizer_UpdateScene
==============
*/

void __fastcall AnimVisualizer_UpdateScene(AnimVyzScene *scene, double currentTime, bool forceHostSend)
{
  char v7; 
  AnimVyzModel *modelList; 
  bool i; 
  AnimVyzModel *v11; 
  __int64 sceneInstanceId; 
  const char *v17; 
  __int64 v19; 
  double v20; 
  char dest[512]; 

  __asm { vmovaps [rsp+258h+var_18], xmm6 }
  _RDI = scene;
  __asm { vmovaps xmm6, xmm1 }
  if ( forceHostSend )
    scene->sendPeriod = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+10h]
    vcomiss xmm1, xmm0
  }
  v7 = 1;
  if ( _RDI->looping )
  {
    modelList = _RDI->modelList;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    for ( ; modelList; modelList = modelList->next )
      modelList->currentAnimation[0] = NULL;
  }
  else
  {
    __asm { vmovaps xmm6, xmm0 }
    _RDI->playbackState = Stopped;
    v7 = 0;
    _RDI->sendPeriod = 0.0;
  }
  __asm { vmovss  dword ptr [rdi+14h], xmm6 }
  i = v7 == 0;
  if ( v7 )
  {
    v11 = _RDI->modelList;
    for ( i = v11 == NULL; v11; i = v11 == NULL )
    {
      if ( v11->clientModelIndex != -1 )
      {
        __asm { vmovaps xmm1, xmm6; currentTime }
        AnimVisualizer_UpdateAnimationState(v11, *(double *)&_XMM1, 0);
        AnimVisualizer_UpdatePositionAndAngles(_RDI, v11);
      }
      v11 = v11->next;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0A8Ch]
    vcomiss xmm0, dword ptr [rdi+0A90h]
    vmovaps xmm6, [rsp+258h+var_18]
  }
  if ( i )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+14h] }
    sceneInstanceId = _RDI->sceneInstanceId;
    v17 = "playing";
    if ( _RDI->playbackState != Playing )
      v17 = "stopped";
    *(_QWORD *)&_RDI->sendPeriod = 1023969417i64;
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+258h+var_230], xmm0
    }
    Com_sprintf(dest, 0x200ui64, "animvyz_playbackstate %u %s %f", sceneInstanceId, v17, v20);
    v19 = -1i64;
    do
      i = dest[++v19] == 0;
    while ( !i );
    Com_DevhostSendMessage(5, 5u, v19 + 1, dest);
  }
}

/*
==============
AnimVisualizer_UpdateSceneAlignment
==============
*/
void AnimVisualizer_UpdateSceneAlignment(AnimVyzScene *scene)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  int alignmentValueCount; 
  int v11; 
  char v13; 
  int v14; 
  bool v18; 
  char v23; 

  _RBX = scene;
  if ( s_AnimVyzActiveAlignementRequestSceneInstanceId == scene->sceneInstanceId )
  {
    v3 = s_AnimVyzRequestDVar;
    if ( !s_AnimVyzRequestDVar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      return;
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(s_AnimVyzAlignPositionXDVar);
    v4 = s_AnimVyzAlignPositionYDVar;
    __asm { vmovss  dword ptr [rbx+38h], xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(v4);
    v5 = s_AnimVyzAlignPositionZDVar;
    __asm { vmovss  dword ptr [rbx+3Ch], xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(v5);
    v6 = s_AnimVyzAlignAngleXDVar;
    __asm { vmovss  dword ptr [rbx+40h], xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(v6);
    v7 = s_AnimVyzAlignAngleYDVar;
    __asm { vmovss  dword ptr [rbx+44h], xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(v7);
    v8 = s_AnimVyzAlignAngleZDVar;
    __asm { vmovss  dword ptr [rbx+48h], xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(v8);
    __asm
    {
      vmovss  dword ptr [rbx+4Ch], xmm0
      vmovss  xmm1, dword ptr [rbx+14h]; currentTime
    }
    s_AnimVyzActiveAlignementRequestSceneInstanceId = 0;
    _RBX->pendingAlignmentRequest = 0;
    AnimVisualizer_UpdateScene(_RBX, *(double *)&_XMM1, 1);
  }
  alignmentValueCount = _RBX->alignmentValueCount;
  v11 = -1;
  if ( alignmentValueCount )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+0D0h]
    }
    v13 = _RBX->alignmentValues[0].target[0];
    v14 = 1;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+0E4h]
      vmovsd  qword ptr [rbx+0A68h], xmm0
    }
    _RBX->sceneDisplacementAngles.v[2] = _RBX->alignmentValues[0].deltaAngles.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+0D8h]
      vmovsd  qword ptr [rbx+0A5Ch], xmm0
    }
    _RBX->sceneDisplacementPosition.v[2] = _RBX->alignmentValues[0].deltaPosition.v[2];
    v11 = (v13 != 0) - 1;
    __asm { vmovss  xmm1, dword ptr [rbx+14h] }
    if ( alignmentValueCount > 1 )
    {
      v18 = __CFSHL__(5i64, 5);
      _RDX = &_RBX->alignmentValues[1].duration;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdx-4]
          vcomiss xmm0, xmm1
        }
        if ( v18 )
        {
          __asm
          {
            vaddss  xmm0, xmm0, dword ptr [rdx]
            vcomiss xmm0, xmm1
          }
          if ( !v18 )
            break;
        }
        ++v14;
        _RDX += 40;
        v18 = v14 <= (unsigned int)alignmentValueCount;
        if ( v14 >= alignmentValueCount )
          goto LABEL_19;
      }
      __asm { vmovsd  xmm0, qword ptr [rdx+10h] }
      v23 = *((_BYTE *)_RDX - 132);
      __asm { vmovsd  qword ptr [rbx+0A80h], xmm0 }
      _RBX->shotDisplacementAngles.v[2] = _RDX[6];
      __asm
      {
        vmovsd  xmm0, qword ptr [rdx+4]
        vmovsd  qword ptr [rbx+0A74h], xmm0
      }
      if ( !v23 )
        v14 = v11;
      _RBX->shotDisplacementPosition.v[2] = _RDX[3];
      v11 = v14;
    }
  }
LABEL_19:
  if ( v11 != _RBX->currentAlignmentIndex )
  {
    _RBX->currentAlignmentIndex = v11;
    if ( v11 == -1 )
    {
      *(_QWORD *)_RBX->position.v = 0i64;
      *(_QWORD *)&_RBX->position.z = 0i64;
      *(_QWORD *)&_RBX->angles.y = 0i64;
      __asm { vmovss  xmm1, dword ptr [rbx+14h]; currentTime }
      _RBX->pendingAlignmentRequest = 0;
      AnimVisualizer_UpdateScene(_RBX, *(double *)&_XMM1, 1);
    }
    else
    {
      _RBX->pendingAlignmentRequest = 1;
    }
  }
  if ( _RBX->pendingAlignmentRequest && !s_AnimVyzActiveAlignementRequestSceneInstanceId )
  {
    s_AnimVyzActiveAlignementRequestSceneInstanceId = _RBX->sceneInstanceId;
    Dvar_SetString_Internal(s_AnimVyzAlignTargetDVar, _RBX->alignmentValues[_RBX->currentAlignmentIndex].target);
    Dvar_SetString_Internal(s_AnimVyzAlignTagDVar, _RBX->alignmentValues[_RBX->currentAlignmentIndex].tag);
    Dvar_SetInt_Internal(s_AnimVyzRequestDVar, 1);
  }
}

/*
==============
AnimVisualizer_UpdateSceneDuration
==============
*/

void __fastcall AnimVisualizer_UpdateSceneDuration(AnimVyzScene *scene, __int64 a2, double _XMM2_8)
{
  _RAX = scene->modelList;
  __asm { vxorps  xmm2, xmm2, xmm2 }
  while ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+100h]
      vmaxss  xmm1, xmm0, dword ptr [rax+0E4h]
    }
    _RAX = _RAX->next;
    __asm { vmaxss  xmm2, xmm1, xmm2 }
  }
  __asm { vmovss  dword ptr [rcx+10h], xmm2 }
}

