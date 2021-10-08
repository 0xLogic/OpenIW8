/*
==============
SV_UnlinkEntity
==============
*/

void __fastcall SV_UnlinkEntity(gentity_s *gEnt)
{
  ?SV_UnlinkEntity@@YAXPEAUgentity_s@@@Z(gEnt);
}

/*
==============
SV_LinkEntity
==============
*/

void __fastcall SV_LinkEntity(gentity_s *gEnt)
{
  ?SV_LinkEntity@@YAXPEAUgentity_s@@@Z(gEnt);
}

/*
==============
SV_LinkEntity
==============
*/
void SV_LinkEntity(gentity_s *gEnt)
{
  __int64 v6; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  unsigned int v13; 
  bool v15; 
  bool v21; 
  bool v22; 
  float v37; 
  __int64 v71; 
  __int64 v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 

  _RBX = gEnt;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = _RBX - g_entities;
  if ( (unsigned int)v6 >= 0x800 )
  {
    v73 = 2048;
    LODWORD(v71) = _RBX - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v71, v73) )
      __debugbreak();
  }
  v6 = (__int16)v6;
  if ( (unsigned int)(__int16)v6 >= 0x800 )
  {
    LODWORD(v72) = 2048;
    LODWORD(v71) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v71, v72) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_world.cpp", 43, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( gEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( gEnt ) )") )
    __debugbreak();
  p_eFlags = &_RBX->s.lerp.eFlags;
  if ( _RBX->r.modelType == 5 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 1u);
  else
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 1u);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v74 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+140h]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+144h]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v76 & 0x7F800000) == 2139095040 )
  {
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_world.cpp", 62, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v77 & 0x7F800000) == 2139095040 )
    goto LABEL_60;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v78 & 0x7F800000) == 2139095040 )
    goto LABEL_60;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v79 & 0x7F800000) == 2139095040 )
  {
LABEL_60:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_world.cpp", 63, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    _RSI = &_RBX->r.currentAngles;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
    }
    v13 = 0;
    __asm
    {
      vmovss  xmm7, cs:__real@358637be
      vmovaps [rsp+0A8h+var_48], xmm8
    }
    v15 = 1;
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm9
      vmovss  xmm9, cs:__real@3f000000
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      if ( !v15 )
      {
        LODWORD(v72) = 3;
        LODWORD(v71) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v72) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm2, xmm9, dword ptr [rsi]
        vroundss xmm0, xmm8, xmm2, 1
        vcvttss2si ebp, xmm0
      }
      v21 = v13 < 3;
      if ( v13 >= 3 )
      {
        LODWORD(v72) = 3;
        LODWORD(v71) = v13;
        v22 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v72);
        v21 = 0;
        if ( v22 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, ebp
        vsubss  xmm0, xmm6, dword ptr [rsi]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm1, xmm7
      }
      if ( v21 )
      {
        if ( v13 >= 3 )
        {
          LODWORD(v72) = 3;
          LODWORD(v71) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v72) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi], xmm6 }
      }
      ++v13;
      _RSI = (vec3_t *)((char *)_RSI + 4);
      v15 = v13 < 3;
    }
    while ( (int)v13 < 3 );
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_58]
      vmovaps xmm8, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
    }
  }
  if ( _RBX->r.modelType )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+13Ch]
    }
    if ( _RBX->r.modelType )
      goto LABEL_55;
    __asm { vucomiss xmm0, dword ptr [rbx+144h] }
    if ( _RBX->r.modelType )
    {
LABEL_55:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+100h]
        vmovss  xmm1, dword ptr [rbx+108h]
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm0, xmm0, xmm3
        vaddss  xmm5, xmm0, dword ptr [rbx+10Ch]
        vmovss  xmm0, dword ptr [rbx+104h]
        vandps  xmm0, xmm0, xmm3
        vaddss  xmm2, xmm0, dword ptr [rbx+110h]
        vandps  xmm1, xmm1, xmm3
        vaddss  xmm4, xmm1, dword ptr [rbx+114h]
      }
      _RBX->r.absBox.midPoint.v[0] = _RBX->r.currentOrigin.v[0];
      _RBX->r.absBox.midPoint.v[1] = _RBX->r.currentOrigin.v[1];
      _RBX->r.absBox.midPoint.v[2] = _RBX->r.currentOrigin.v[2];
      __asm
      {
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vmovss  dword ptr [rbx+124h], xmm0
        vmovss  dword ptr [rbx+128h], xmm0
        vmovss  dword ptr [rbx+12Ch], xmm0
      }
      goto LABEL_56;
    }
    __asm
    {
      vucomiss xmm0, dword ptr [rbx+140h]
      vmovss  xmm0, dword ptr [rbx+100h]
    }
    if ( _RBX->r.modelType )
    {
      v37 = _RBX->r.currentOrigin.v[0];
      __asm
      {
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vaddss  xmm3, xmm0, dword ptr [rbx+10Ch]
        vmovss  xmm0, dword ptr [rbx+104h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vaddss  xmm0, xmm0, dword ptr [rbx+110h]
        vmulss  xmm2, xmm0, xmm0
        vmovss  xmm0, dword ptr [rbx+108h]
        vmulss  xmm1, xmm3, xmm3
        vmovss  xmm3, dword ptr [rbx+114h]
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, dword ptr [rbx+134h]
        vsqrtss xmm4, xmm2, xmm2
        vaddss  xmm2, xmm0, dword ptr [rbx+138h]
        vmovss  dword ptr [rbx+120h], xmm2
        vmovss  dword ptr [rbx+11Ch], xmm1
      }
      _RBX->r.absBox.midPoint.v[0] = v37;
      __asm
      {
        vmovss  dword ptr [rbx+124h], xmm4
        vmovss  dword ptr [rbx+128h], xmm4
        vmovss  dword ptr [rbx+12Ch], xmm3
      }
      goto LABEL_56;
    }
    __asm { vaddss  xmm1, xmm0, dword ptr [rbx+130h] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vaddss  xmm1, xmm0, dword ptr [rbx+100h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+118h], xmm1
    vmovss  xmm2, dword ptr [rbx+104h]
    vaddss  xmm0, xmm2, dword ptr [rbx+134h]
    vmovss  dword ptr [rbx+11Ch], xmm0
    vmovss  xmm1, dword ptr [rbx+108h]
    vaddss  xmm2, xmm1, dword ptr [rbx+138h]
    vmovss  dword ptr [rbx+120h], xmm2
  }
  _RBX->r.absBox.halfSize.v[0] = _RBX->r.box.halfSize.v[0];
  _RBX->r.absBox.halfSize.v[1] = _RBX->r.box.halfSize.v[1];
  _RBX->r.absBox.halfSize.v[2] = _RBX->r.box.halfSize.v[2];
LABEL_56:
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vaddss  xmm0, xmm2, dword ptr [rbx+124h]
    vmovss  dword ptr [rbx+124h], xmm0
    vaddss  xmm0, xmm2, dword ptr [rbx+128h]
    vmovss  dword ptr [rbx+128h], xmm0
    vaddss  xmm0, xmm2, dword ptr [rbx+12Ch]
    vmovss  dword ptr [rbx+12Ch], xmm0
  }
  _RBX->r.isLinked = 1;
}

/*
==============
SV_UnlinkEntity
==============
*/
void SV_UnlinkEntity(gentity_s *gEnt)
{
  gEnt->r.isLinked = 0;
}

