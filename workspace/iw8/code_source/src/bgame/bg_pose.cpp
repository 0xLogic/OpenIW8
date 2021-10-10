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
  clientControllers_t *control; 
  DObjAnimMat *RotTransArray; 
  float v8; 
  vec3_t trans; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 71, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 72, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  control = player->control;
  if ( !control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 75, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    if ( DObjSetRotTransIndex(obj, partBits, 0) )
    {
      trans.v[0] = 0.0;
      trans.v[1] = 0.0;
      trans.v[2] = 0.0;
      v8 = control->tag_origin_angles.v[0] * 0.0087266462;
      RotTransArray->quat.v[0] = 0.0;
      RotTransArray->quat.v[2] = 0.0;
      FastSinCos(v8, &RotTransArray->quat.v[1], &RotTransArray->quat.v[3]);
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
  const vec3_t *angles; 
  unsigned __int8 *tag; 
  const vec3_t *v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  bool v11; 
  bool v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 32, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 33, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  angles = player->control->angles;
  if ( !player->control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 36, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  tag = player->tag;
  v8 = angles;
  v9 = 4i64;
  do
  {
    if ( *tag == 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pose.cpp", 40, ASSERT_TYPE_ASSERT, "(player->tag[i] != 254)", (const char *)&queryFormat, "player->tag[i] != UNDEFINED_BONEINDEX") )
      __debugbreak();
    DObjSetControlTagAngles(obj, partBits, *tag++, v8++);
    --v9;
  }
  while ( v9 );
  DObjSetLocalTag(obj, partBits, 0, angles + 5, angles + 4);
  v10 = player->IKHandBone[1];
  v11 = v10 != 0xFE && (angles[7].v[0] != 0.0 || angles[7].v[1] != 0.0 || angles[7].v[2] != 0.0);
  v12 = player->IKHandBone[0] != 0xFE && (angles[6].v[0] != 0.0 || angles[6].v[1] != 0.0 || angles[6].v[2] != 0.0);
  if ( v11 )
    bitarray_base<bitarray<256>>::setBit(partBits, v10);
  if ( v12 )
  {
    bitarray_base<bitarray<256>>::setBit(partBits, player->IKHandBone[0]);
  }
  else if ( !v11 )
  {
    return;
  }
  DObjCompleteHierarchyBits(obj, partBits);
  if ( v11 )
    DObjSetLocalTag(obj, partBits, player->IKHandBone[1], angles + 7, angles + 9);
  if ( v12 )
    DObjSetLocalTag(obj, partBits, player->IKHandBone[0], angles + 6, angles + 8);
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

