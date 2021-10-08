/*
==============
BG_Pose_SetPlayerIKBoneTags
==============
*/

void __fastcall BG_Pose_SetPlayerIKBoneTags(const DObj *obj, const CEntPlayerInfo *player, DObjPartBits *partBits, bool doLeft, bool doRight)
{
  ?BG_Pose_SetPlayerIKBoneTags@@YAXPEBUDObj@@PEBUCEntPlayerInfo@@PEAUDObjPartBits@@_N3@Z(obj, player, partBits, doLeft, doRight);
}

/*
==============
BG_Pose_DoDogControllers
==============
*/

void __fastcall BG_Pose_DoDogControllers(const CEntPlayerInfo *player, const DObj *obj, DObjPartBits *partBits)
{
  ?BG_Pose_DoDogControllers@@YAXPEBUCEntPlayerInfo@@PEBUDObj@@PEAUDObjPartBits@@@Z(player, obj, partBits);
}

/*
==============
BG_Pose_DoPlayerControllers
==============
*/

void __fastcall BG_Pose_DoPlayerControllers(const CEntPlayerInfo *player, const DObj *obj, DObjPartBits *partBits)
{
  ?BG_Pose_DoPlayerControllers@@YAXPEBUCEntPlayerInfo@@PEBUDObj@@PEAUDObjPartBits@@@Z(player, obj, partBits);
}

/*
==============
BG_Pose_DoDogControllers
==============
*/
void BG_Pose_DoDogControllers(const CEntPlayerInfo *player, const DObj *obj, DObjPartBits *partBits)
{
  DObjAnimMat *RotTransArray; 
  vec3_t trans; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 71, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 72, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  _RDI = player->control;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 75, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    if ( DObjSetRotTransIndex(obj, partBits, 0) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+68h+trans], xmm0
        vmovss  dword ptr [rsp+68h+trans+4], xmm0
        vmovss  dword ptr [rsp+68h+trans+8], xmm0
        vmovss  xmm0, dword ptr [rdi+30h]
        vmulss  xmm0, xmm0, cs:__real@3c0efa35; radians
      }
      RotTransArray->quat.v[0] = 0.0;
      RotTransArray->quat.v[2] = 0.0;
      FastSinCos(*(const float *)&_XMM0, &RotTransArray->quat.v[1], &RotTransArray->quat.v[3]);
      DObjSetTrans(RotTransArray, &trans);
    }
  }
}

/*
==============
BG_Pose_DoPlayerControllers
==============
*/
void BG_Pose_DoPlayerControllers(const CEntPlayerInfo *player, const DObj *obj, DObjPartBits *partBits)
{
  unsigned __int8 *tag; 
  const vec3_t *v9; 
  __int64 v10; 
  unsigned __int8 v12; 
  char v13; 
  char v14; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 32, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 33, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  _RBX = player->control;
  if ( !player->control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 36, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  tag = player->tag;
  v9 = (const vec3_t *)_RBX;
  v10 = 4i64;
  do
  {
    if ( *tag == 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 40, ASSERT_TYPE_ASSERT, "(player->tag[i] != 254)", (const char *)&queryFormat, "player->tag[i] != UNDEFINED_BONEINDEX") )
      __debugbreak();
    DObjSetControlTagAngles(obj, partBits, *tag++, v9++);
    --v10;
  }
  while ( v10 );
  DObjSetLocalTag(obj, partBits, 0, &_RBX->tag_origin_offset, &_RBX->tag_origin_angles);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v12 = player->IKHandBone[1];
  if ( v12 == 0xFE )
  {
    v13 = 0;
  }
  else
  {
    __asm { vucomiss xmm0, dword ptr [rbx+54h] }
    v13 = 1;
  }
  if ( player->IKHandBone[0] == 0xFE )
    goto LABEL_23;
  __asm { vucomiss xmm0, dword ptr [rbx+48h] }
  if ( player->IKHandBone[0] != 0xFE )
    goto LABEL_22;
  __asm { vucomiss xmm0, dword ptr [rbx+4Ch] }
  if ( player->IKHandBone[0] != 0xFE )
    goto LABEL_22;
  __asm { vucomiss xmm0, dword ptr [rbx+50h] }
  if ( player->IKHandBone[0] == 0xFE )
LABEL_23:
    v14 = 0;
  else
LABEL_22:
    v14 = 1;
  if ( v13 )
    bitarray_base<bitarray<256>>::setBit(partBits, v12);
  if ( v14 )
  {
    bitarray_base<bitarray<256>>::setBit(partBits, player->IKHandBone[0]);
  }
  else if ( !v13 )
  {
    return;
  }
  DObjCompleteHierarchyBits(obj, partBits);
  if ( v13 )
    DObjSetLocalTag(obj, partBits, player->IKHandBone[1], &_RBX->hand_ik_local_pos[1], &_RBX->hand_ik_local_ang[1]);
  if ( v14 )
    DObjSetLocalTag(obj, partBits, player->IKHandBone[0], _RBX->hand_ik_local_pos, _RBX->hand_ik_local_ang);
}

/*
==============
BG_Pose_SetPlayerIKBoneTags
==============
*/
void BG_Pose_SetPlayerIKBoneTags(const DObj *obj, const CEntPlayerInfo *player, DObjPartBits *partBits, bool doLeft, bool doRight)
{
  if ( doRight )
    bitarray_base<bitarray<256>>::setBit(partBits, player->IKHandBone[1]);
  if ( doLeft )
  {
    bitarray_base<bitarray<256>>::setBit(partBits, player->IKHandBone[0]);
  }
  else if ( !doRight )
  {
    return;
  }
  DObjCompleteHierarchyBits(obj, partBits);
}

