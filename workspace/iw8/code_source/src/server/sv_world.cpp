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
  signed __int64 v2; 
  LerpEntityState *p_lerp; 
  vec3_t *p_currentAngles; 
  unsigned int v5; 
  bool v6; 
  int v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = gEnt - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    v23 = 2048;
    LODWORD(v21) = gEnt - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v23) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v22) = 2048;
    LODWORD(v21) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_world.cpp", 43, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( gEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( gEnt ) )") )
    __debugbreak();
  p_lerp = &gEnt->s.lerp;
  if ( gEnt->r.modelType == 5 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&p_lerp->eFlags, ACTIVE, 1u);
  else
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&p_lerp->eFlags, ACTIVE, 1u);
  if ( ((LODWORD(gEnt->r.currentAngles.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(gEnt->r.currentAngles.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(gEnt->r.currentAngles.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_world.cpp", 62, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] )") )
    __debugbreak();
  if ( ((LODWORD(gEnt->r.currentOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(gEnt->r.currentOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(gEnt->r.currentOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_world.cpp", 63, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    p_currentAngles = &gEnt->r.currentAngles;
    v5 = 0;
    v6 = 1;
    _XMM8 = 0i64;
    do
    {
      if ( !v6 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      __asm { vroundss xmm0, xmm8, xmm2, 1 }
      v9 = (int)*(float *)&_XMM0;
      if ( v5 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( (float)((float)((float)v9 - p_currentAngles->v[0]) * (float)((float)v9 - p_currentAngles->v[0])) < 0.0000010000001 )
      {
        if ( v5 >= 3 )
        {
          LODWORD(v22) = 3;
          LODWORD(v21) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        p_currentAngles->v[0] = (float)v9;
      }
      ++v5;
      p_currentAngles = (vec3_t *)((char *)p_currentAngles + 4);
      v6 = v5 < 3;
    }
    while ( (int)v5 < 3 );
  }
  if ( gEnt->r.modelType )
  {
    if ( gEnt->r.currentAngles.v[0] != 0.0 || gEnt->r.currentAngles.v[2] != 0.0 )
    {
      v17 = COERCE_FLOAT(LODWORD(gEnt->r.box.midPoint.v[0]) & _xmm) + gEnt->r.box.halfSize.v[0];
      v18 = COERCE_FLOAT(LODWORD(gEnt->r.box.midPoint.v[1]) & _xmm) + gEnt->r.box.halfSize.v[1];
      v19 = COERCE_FLOAT(LODWORD(gEnt->r.box.midPoint.v[2]) & _xmm) + gEnt->r.box.halfSize.v[2];
      gEnt->r.absBox.midPoint.v[0] = gEnt->r.currentOrigin.v[0];
      gEnt->r.absBox.midPoint.v[1] = gEnt->r.currentOrigin.v[1];
      gEnt->r.absBox.midPoint.v[2] = gEnt->r.currentOrigin.v[2];
      v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
      gEnt->r.absBox.halfSize.v[0] = v20;
      gEnt->r.absBox.halfSize.v[1] = v20;
      gEnt->r.absBox.halfSize.v[2] = v20;
      goto LABEL_55;
    }
    v11 = gEnt->r.box.midPoint.v[0];
    if ( gEnt->r.currentAngles.v[1] != 0.0 )
    {
      v12 = gEnt->r.currentOrigin.v[0];
      v13 = COERCE_FLOAT(LODWORD(gEnt->r.box.midPoint.v[1]) & _xmm) + gEnt->r.box.halfSize.v[1];
      v14 = gEnt->r.box.halfSize.v[2];
      v15 = gEnt->r.currentOrigin.v[1];
      v16 = fsqrt((float)(v13 * v13) + (float)((float)(COERCE_FLOAT(LODWORD(v11) & _xmm) + gEnt->r.box.halfSize.v[0]) * (float)(COERCE_FLOAT(LODWORD(v11) & _xmm) + gEnt->r.box.halfSize.v[0])));
      gEnt->r.absBox.midPoint.v[2] = gEnt->r.box.midPoint.v[2] + gEnt->r.currentOrigin.v[2];
      gEnt->r.absBox.midPoint.v[1] = v15;
      gEnt->r.absBox.midPoint.v[0] = v12;
      gEnt->r.absBox.halfSize.v[0] = v16;
      gEnt->r.absBox.halfSize.v[1] = v16;
      gEnt->r.absBox.halfSize.v[2] = v14;
      goto LABEL_55;
    }
    v10 = v11 + gEnt->r.currentOrigin.v[0];
  }
  else
  {
    v10 = gEnt->r.currentOrigin.v[0] + gEnt->r.box.midPoint.v[0];
  }
  gEnt->r.absBox.midPoint.v[0] = v10;
  gEnt->r.absBox.midPoint.v[1] = gEnt->r.box.midPoint.v[1] + gEnt->r.currentOrigin.v[1];
  gEnt->r.absBox.midPoint.v[2] = gEnt->r.box.midPoint.v[2] + gEnt->r.currentOrigin.v[2];
  gEnt->r.absBox.halfSize.v[0] = gEnt->r.box.halfSize.v[0];
  gEnt->r.absBox.halfSize.v[1] = gEnt->r.box.halfSize.v[1];
  gEnt->r.absBox.halfSize.v[2] = gEnt->r.box.halfSize.v[2];
LABEL_55:
  gEnt->r.absBox.halfSize.v[0] = gEnt->r.absBox.halfSize.v[0] + 1.0;
  gEnt->r.absBox.halfSize.v[1] = gEnt->r.absBox.halfSize.v[1] + 1.0;
  gEnt->r.absBox.halfSize.v[2] = gEnt->r.absBox.halfSize.v[2] + 1.0;
  gEnt->r.isLinked = 1;
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

