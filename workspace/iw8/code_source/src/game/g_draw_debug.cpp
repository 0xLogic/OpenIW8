/*
==============
G_DrawDebug_PlayerVignettePrint_Linkto
==============
*/

void __fastcall G_DrawDebug_PlayerVignettePrint_Linkto(gentity_s *playerEnt, tmat43_t<vec3_t> *parentAxis)
{
  ?G_DrawDebug_PlayerVignettePrint_Linkto@@YAXPEAUgentity_s@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(playerEnt, parentAxis);
}

/*
==============
G_DrawDebug_PlayerVignettePrint
==============
*/

void __fastcall G_DrawDebug_PlayerVignettePrint(gentity_s *playerEnt, const char *uniqueString, unsigned int flags)
{
  ?G_DrawDebug_PlayerVignettePrint@@YAXPEAUgentity_s@@PEBDI@Z(playerEnt, uniqueString, flags);
}

/*
==============
G_DrawDebug_PlayerVignettePrint
==============
*/
void G_DrawDebug_PlayerVignettePrint(gentity_s *playerEnt, const char *uniqueString, unsigned int flags)
{
  unsigned int v4; 
  const playerState_s *EntityPlayerStateConst; 
  EntityTagInfo *tagInfo; 
  const char *tagName; 
  bool linked; 
  const char *modelName; 
  const playerState_s *v11; 
  gentity_s *parent; 
  scr_string_t name; 
  XModel *Model; 
  vec3_t linkTagOrigin; 
  vec3_t angles; 
  tmat43_t<vec3_t> parentAxis; 

  v4 = flags;
  if ( BG_DrawDebug_PlayerVignetteActive(flags) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
    tagInfo = playerEnt->tagInfo;
    tagName = "notag";
    linked = 0;
    modelName = "nomodel";
    v11 = EntityPlayerStateConst;
    angles.v[0] = 0.0;
    angles.v[1] = 0.0;
    angles.v[2] = 0.0;
    linkTagOrigin.v[0] = 0.0;
    linkTagOrigin.v[1] = 0.0;
    linkTagOrigin.v[2] = 0.0;
    if ( tagInfo )
    {
      parent = tagInfo->parent;
      if ( tagInfo->parent )
      {
        name = tagInfo->name;
        if ( name )
          tagName = SL_ConvertToString(name);
        Model = G_Utils_GetModel(parent->model);
        if ( Model )
          modelName = Model->name;
        G_CalcTagParentAxis(playerEnt, &parentAxis);
        AxisToAngles((const tmat33_t<vec3_t> *)&parentAxis, &angles);
        linkTagOrigin = parentAxis.m[3];
        linked = 1;
      }
    }
    if ( (v4 & 4) != 0 && COERCE_FLOAT(LODWORD(v11->linkAngles.v[2]) & _xmm) > 0.001 )
    {
      v4 |= 2u;
      uniqueString = "unlinking player with linked roll value";
    }
    BG_DrawDebug_PlayerVignettePrint(v11, 0, uniqueString, v4, linked, level.time, modelName, tagName, &linkTagOrigin, &angles);
  }
}

/*
==============
G_DrawDebug_PlayerVignettePrint_Linkto
==============
*/
void G_DrawDebug_PlayerVignettePrint_Linkto(gentity_s *playerEnt, tmat43_t<vec3_t> *parentAxis)
{
  EntityTagInfo *tagInfo; 
  const playerState_s *EntityPlayerStateConst; 
  double v6; 
  int v7; 
  double v8; 
  const playerState_s *v9; 
  EntityTagInfo *v10; 
  const char *tagName; 
  bool v12; 
  const char *modelName; 
  const playerState_s *v14; 
  gentity_s *parent; 
  scr_string_t name; 
  XModel *Model; 
  vec3_t linkTagOrigin; 
  vec3_t linkTagAngles; 
  vec3_t angles; 
  tmat43_t<vec3_t> parentAxisa; 

  if ( BG_DrawDebug_PlayerVignetteActive(0) )
  {
    tagInfo = playerEnt->tagInfo;
    if ( tagInfo )
    {
      if ( !tagInfo->blendToParent )
      {
        AxisToAngles((const tmat33_t<vec3_t> *)parentAxis, &angles);
        EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
        if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_draw_debug.cpp", 88, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v6 = AngleDelta(EntityPlayerStateConst->viewangles.v[0], angles.v[0]);
        v7 = LODWORD(v6);
        v8 = AngleDelta(EntityPlayerStateConst->viewangles.v[1], angles.v[1]);
        if ( (COERCE_FLOAT(v7 & _xmm) > 0.001 || COERCE_FLOAT(LODWORD(v8) & _xmm) > 0.001) && BG_DrawDebug_PlayerVignetteActive(2) )
        {
          v9 = G_GetEntityPlayerStateConst(playerEnt);
          v10 = playerEnt->tagInfo;
          tagName = "notag";
          v12 = 0;
          modelName = "nomodel";
          v14 = v9;
          linkTagAngles.v[0] = 0.0;
          linkTagAngles.v[1] = 0.0;
          linkTagAngles.v[2] = 0.0;
          linkTagOrigin.v[0] = 0.0;
          linkTagOrigin.v[1] = 0.0;
          linkTagOrigin.v[2] = 0.0;
          if ( v10 )
          {
            parent = v10->parent;
            if ( v10->parent )
            {
              name = v10->name;
              if ( name )
                tagName = SL_ConvertToString(name);
              Model = G_Utils_GetModel(parent->model);
              if ( Model )
                modelName = Model->name;
              G_CalcTagParentAxis(playerEnt, &parentAxisa);
              AxisToAngles((const tmat33_t<vec3_t> *)&parentAxisa, &linkTagAngles);
              linkTagOrigin = parentAxisa.m[3];
              v12 = 1;
            }
          }
          BG_DrawDebug_PlayerVignettePrint(v14, 0, "View angles do not match link bone", 2u, v12, level.time, modelName, tagName, &linkTagOrigin, &linkTagAngles);
        }
      }
    }
  }
}

