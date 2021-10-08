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
  unsigned int v5; 
  const playerState_s *EntityPlayerStateConst; 
  EntityTagInfo *tagInfo; 
  const char *tagName; 
  bool linked; 
  const char *modelName; 
  gentity_s *parent; 
  scr_string_t name; 
  XModel *Model; 
  vec3_t linkTagOrigin; 
  vec3_t angles; 
  tmat43_t<vec3_t> parentAxis; 

  v5 = flags;
  if ( BG_DrawDebug_PlayerVignetteActive(flags) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
    tagInfo = playerEnt->tagInfo;
    tagName = "notag";
    __asm { vxorps  xmm0, xmm0, xmm0 }
    linked = 0;
    modelName = "nomodel";
    _RBP = EntityPlayerStateConst;
    __asm
    {
      vmovss  dword ptr [rsp+0E8h+angles], xmm0
      vmovss  dword ptr [rsp+0E8h+angles+4], xmm0
      vmovss  dword ptr [rsp+0E8h+angles+8], xmm0
      vmovss  dword ptr [rsp+0E8h+var_98], xmm0
      vmovss  dword ptr [rsp+0E8h+var_98+4], xmm0
      vmovss  dword ptr [rsp+0E8h+var_98+8], xmm0
    }
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
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0E8h+parentAxis+24h]
          vmovss  xmm1, dword ptr [rsp+0E8h+parentAxis+28h]
          vmovss  dword ptr [rsp+0E8h+var_98], xmm0
          vmovss  xmm0, dword ptr [rsp+0E8h+parentAxis+2Ch]
          vmovss  dword ptr [rsp+0E8h+var_98+8], xmm0
          vmovss  dword ptr [rsp+0E8h+var_98+4], xmm1
        }
        linked = 1;
      }
    }
    if ( (v5 & 4) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+288h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( (v5 & 4) != 0 )
      {
        v5 |= 2u;
        uniqueString = "unlinking player with linked roll value";
      }
    }
    BG_DrawDebug_PlayerVignettePrint(_RBP, 0, uniqueString, v5, linked, level.time, modelName, tagName, &linkTagOrigin, &angles);
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
  char v11; 
  char v12; 
  const playerState_s *EntityPlayerStateConst; 
  EntityTagInfo *v19; 
  const char *tagName; 
  bool v22; 
  const char *modelName; 
  const playerState_s *v24; 
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
        __asm { vmovaps [rsp+0E8h+var_28], xmm6 }
        AxisToAngles((const tmat33_t<vec3_t> *)parentAxis, &angles);
        _RDI = G_GetEntityPlayerStateConst(playerEnt);
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_draw_debug.cpp", 88, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+0E8h+angles]; angle2
          vmovss  xmm0, dword ptr [rdi+1D8h]; angle1
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+0E8h+angles+4]; angle2
          vmovaps xmm6, xmm0
          vmovss  xmm0, dword ptr [rdi+1DCh]; angle1
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm2, cs:__real@3a83126f
          vandps  xmm6, xmm6, xmm1
          vcomiss xmm6, xmm2
          vmovaps xmm6, [rsp+0E8h+var_28]
        }
        if ( !(v11 | v12) )
          goto LABEL_20;
        __asm
        {
          vandps  xmm0, xmm0, xmm1
          vcomiss xmm0, xmm2
        }
        if ( !(v11 | v12) )
        {
LABEL_20:
          if ( BG_DrawDebug_PlayerVignetteActive(2) )
          {
            EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
            v19 = playerEnt->tagInfo;
            tagName = "notag";
            __asm { vxorps  xmm0, xmm0, xmm0 }
            v22 = 0;
            modelName = "nomodel";
            v24 = EntityPlayerStateConst;
            __asm
            {
              vmovss  dword ptr [rsp+0E8h+var_88], xmm0
              vmovss  dword ptr [rsp+0E8h+var_88+4], xmm0
              vmovss  dword ptr [rsp+0E8h+var_88+8], xmm0
              vmovss  dword ptr [rsp+0E8h+var_98], xmm0
              vmovss  dword ptr [rsp+0E8h+var_98+4], xmm0
              vmovss  dword ptr [rsp+0E8h+var_98+8], xmm0
            }
            if ( v19 )
            {
              parent = v19->parent;
              if ( v19->parent )
              {
                name = v19->name;
                if ( name )
                  tagName = SL_ConvertToString(name);
                Model = G_Utils_GetModel(parent->model);
                if ( Model )
                  modelName = Model->name;
                G_CalcTagParentAxis(playerEnt, &parentAxisa);
                AxisToAngles((const tmat33_t<vec3_t> *)&parentAxisa, &linkTagAngles);
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+0E8h+parentAxis+24h]
                  vmovss  xmm1, dword ptr [rsp+0E8h+parentAxis+28h]
                  vmovss  dword ptr [rsp+0E8h+var_98], xmm0
                  vmovss  xmm0, dword ptr [rsp+0E8h+parentAxis+2Ch]
                  vmovss  dword ptr [rsp+0E8h+var_98+8], xmm0
                  vmovss  dword ptr [rsp+0E8h+var_98+4], xmm1
                }
                v22 = 1;
              }
            }
            BG_DrawDebug_PlayerVignettePrint(v24, 0, "View angles do not match link bone", 2u, v22, level.time, modelName, tagName, &linkTagOrigin, &linkTagAngles);
          }
        }
      }
    }
  }
}

