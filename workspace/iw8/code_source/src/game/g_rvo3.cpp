/*
==============
VelocityObstacle3Manager::Shutdown
==============
*/

void VelocityObstacle3Manager::Shutdown(void)
{
  ?Shutdown@VelocityObstacle3Manager@@SAXXZ();
}

/*
==============
VelocityObstacle3Manager::AddReciprocalObstacle
==============
*/

VelocityObstacle3 *__fastcall VelocityObstacle3Manager::AddReciprocalObstacle(gentity_s *entity, float radius)
{
  return ?AddReciprocalObstacle@VelocityObstacle3Manager@@SAPEAUVelocityObstacle3@@PEAUgentity_s@@M@Z(entity, radius);
}

/*
==============
VelocityObstacle3Manager::Save
==============
*/

void __fastcall VelocityObstacle3Manager::Save(MemoryFile *memFile)
{
  ?Save@VelocityObstacle3Manager@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
VelocityObstacle3Manager::CalculateAllSafeVelocities
==============
*/

void VelocityObstacle3Manager::CalculateAllSafeVelocities(void)
{
  ?CalculateAllSafeVelocities@VelocityObstacle3Manager@@SAXXZ();
}

/*
==============
VelocityObstacle3Manager::RemoveObstacle
==============
*/

void __fastcall VelocityObstacle3Manager::RemoveObstacle(const gentity_s *entity)
{
  ?RemoveObstacle@VelocityObstacle3Manager@@SAXPEBUgentity_s@@@Z(entity);
}

/*
==============
VelocityObstacle3Manager::IsObstacle
==============
*/

bool __fastcall VelocityObstacle3Manager::IsObstacle(const gentity_s *entity)
{
  return ?IsObstacle@VelocityObstacle3Manager@@SA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
Scr_RemoveVelocityObstacle3d
==============
*/

void __fastcall Scr_RemoveVelocityObstacle3d(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_RemoveVelocityObstacle3d@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
VelocityObstacle3Manager::GetReciprocalObstacle
==============
*/

VelocityObstacle3 *__fastcall VelocityObstacle3Manager::GetReciprocalObstacle(gentity_s *entity)
{
  return ?GetReciprocalObstacle@VelocityObstacle3Manager@@SAPEAUVelocityObstacle3@@PEAUgentity_s@@@Z(entity);
}

/*
==============
Scr_MakeVelocityObstacle3d
==============
*/

void __fastcall Scr_MakeVelocityObstacle3d(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_MakeVelocityObstacle3d@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
VelocityObstacle3Manager::Load
==============
*/

void __fastcall VelocityObstacle3Manager::Load(MemoryFile *memFile)
{
  ?Load@VelocityObstacle3Manager@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
VelocityObstacle3Manager::AddObstacle
==============
*/

void __fastcall VelocityObstacle3Manager::AddObstacle(gentity_s *entity, float radius)
{
  ?AddObstacle@VelocityObstacle3Manager@@SAXPEAUgentity_s@@M@Z(entity, radius);
}

/*
==============
VelocityObstacle3Manager::AddObstacle
==============
*/
void VelocityObstacle3Manager::AddObstacle(gentity_s *entity, float radius)
{
  ntl::internal::list_node_base *mp_next; 
  __int64 v3; 
  unsigned __int64 v5; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v6; 
  ntl::internal::list_node<VelocityObstacle3> *v7; 
  __int16 v8; 
  ntl::internal::list_node_base *i; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  v3 = 0i64;
  v5 = 0i64;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v5;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    if ( v5 >= 0xBF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 54, ASSERT_TYPE_ASSERT, "(obstacles.size() < ( 64 + (1 << 7) )-1)", (const char *)&queryFormat, "obstacles.size() < MAX_TOTAL_VELOCITY_OBSTACLES-1") )
      __debugbreak();
  }
  if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<72> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next == &VelocityObstacle3Manager::obstacles.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, 0xC0ui64) )
    __debugbreak();
  v6 = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  v7 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
  v7->mp_prev = NULL;
  v7->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v7);
  v8 = EntHandle::entnum((EntHandle *)((char *)&v6[7].mp_next + 6));
  Com_Printf(18, "VO3Manager setting ent on enthandle 0x%x\n", (unsigned int)v8);
  for ( i = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; ++v3 )
    i = i->mp_next;
  Com_Printf(18, "Sizeof List: %zu size() : %zu\n", 0x3618ui64, v3);
  EntHandle::setEnt((EntHandle *)((char *)&v6[7].mp_next + 6), entity);
  BYTE4(v6[7].mp_next) = 0;
  *((float *)&v6[6].mp_next + 1) = radius;
  G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&v6[2]);
}

/*
==============
VelocityObstacle3Manager::AddReciprocalObstacle
==============
*/
ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *VelocityObstacle3Manager::AddReciprocalObstacle(gentity_s *entity, float radius)
{
  ntl::internal::list_node_base *mp_next; 
  unsigned __int64 v3; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v5; 
  ntl::internal::list_node<VelocityObstacle3> *v6; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *result; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  v3 = 0i64;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v3;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    if ( v3 >= 0xBF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 66, ASSERT_TYPE_ASSERT, "(obstacles.size() < ( 64 + (1 << 7) )-1)", (const char *)&queryFormat, "obstacles.size() < MAX_TOTAL_VELOCITY_OBSTACLES-1") )
      __debugbreak();
  }
  if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<72> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next == &VelocityObstacle3Manager::obstacles.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, 0xC0ui64) )
    __debugbreak();
  v5 = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  v6 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
  v6->mp_prev = NULL;
  v6->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v6);
  EntHandle::setEnt((EntHandle *)((char *)&v5[7].mp_next + 6), entity);
  *((float *)&v5[6].mp_next + 1) = radius;
  G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&v5[2]);
  result = v5 + 2;
  BYTE4(v5[7].mp_next) = 1;
  return result;
}

/*
==============
VelocityObstacle3Manager::CalculateAllSafeVelocities
==============
*/
void VelocityObstacle3Manager::CalculateAllSafeVelocities()
{
  signed __int64 v0; 
  void *v1; 
  unsigned __int64 v2; 
  ntl::internal::list_node_base *mp_next; 
  unsigned __int16 mp_next_high; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  ntl::internal::list_node<VelocityObstacle3> *v8; 
  const dvar_t *v9; 
  ntl::internal::list_node_base *i; 
  ntl::internal::list_node_base *j; 
  float *v12; 
  float v13; 
  unsigned __int64 k; 
  ntl::internal::list_node_base *v15; 
  float v16; 
  __int128 mp_prev_high; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  int integer; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  float *v42; 
  float v43; 
  __int128 v44; 
  float v45; 
  __int128 v46; 
  __int64 duration; 
  __int64 v48; 
  vec3_t desiredOrigin; 
  __m256i v50; 
  vec3_t center; 
  ntl::fixed_vector<VelocityObstacle3Cone,192,0> obstacleCones; 

  v1 = alloca(v0);
  v2 = 0i64;
  obstacleCones.m_size = 0i64;
  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next_high = HIWORD(mp_next[3].mp_next);
      if ( !mp_next_high )
        goto LABEL_114;
      v5 = mp_next_high;
      v6 = mp_next_high - 1;
      if ( v6 >= 0x800 )
      {
        LODWORD(v48) = 2048;
        LODWORD(duration) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v48) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v7 = v5 - 1;
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v7] )
      {
        LODWORD(v48) = HIWORD(mp_next[3].mp_next) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v48) )
          __debugbreak();
      }
      if ( HIWORD(mp_next[3].mp_next) )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( !BYTE4(mp_next[3].mp_next) )
          G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&mp_next[1]);
        mp_next = mp_next->mp_next;
      }
      else
      {
LABEL_114:
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        EntHandle::setEnt((EntHandle *)((char *)&mp_next[3].mp_next + 6), NULL);
        v8 = (ntl::internal::list_node<VelocityObstacle3> *)mp_next;
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::remove(&VelocityObstacle3Manager::obstacles.m_listHead, v8);
        v8->mp_prev = (ntl::internal::list_node_base *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
        VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8;
      }
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    v2 = 0i64;
  }
  v9 = DVARBOOL_ai_showRepulsors3d;
  if ( !DVARBOOL_ai_showRepulsors3d && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors3d") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    for ( i = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; i = i->mp_next )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      G_DebugSphere((const vec3_t *)&i[1], *((float *)&i[3].mp_prev + 1), &colorRed, 1, 1);
    }
  }
  if ( obstacleCones.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 252, ASSERT_TYPE_ASSERT, "(obstacleCones.size() == 0)", (const char *)&queryFormat, "obstacleCones.size() == 0") )
    __debugbreak();
  for ( j = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; j != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; j = j->mp_next )
  {
    if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v12 = (float *)&j[1];
    if ( BYTE4(j[3].mp_next) )
    {
      v13 = *(float *)&j[3].mp_next;
      if ( v13 == 0.0 )
      {
        j[2].mp_next = NULL;
        LODWORD(j[3].mp_prev) = 0;
      }
      else
      {
        desiredOrigin.v[0] = (float)(v13 * *((float *)&j[1].mp_next + 1)) + *v12;
        desiredOrigin.v[1] = (float)(v13 * *(float *)&j[2].mp_prev) + *((float *)&j[1].mp_prev + 1);
        desiredOrigin.v[2] = (float)(v13 * *((float *)&j[2].mp_prev + 1)) + *(float *)&j[1].mp_next;
        for ( k = 0i64; k < obstacleCones.m_size; ++k )
        {
          if ( k >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        obstacleCones.m_size = 0i64;
        v15 = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
        if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
        {
          do
          {
            if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( v12 != (float *)&v15[1] )
            {
              mp_prev_high = HIDWORD(j[3].mp_prev);
              v16 = *((float *)&j[3].mp_prev + 1) + *((float *)&v15[3].mp_prev + 1);
              *(float *)&mp_prev_high = v16 * 1.830487;
              _XMM1 = mp_prev_high;
              __asm { vmaxss  xmm5, xmm1, xmm14 }
              v20 = *v12;
              v21 = *(float *)&v15[1].mp_prev - *v12;
              v22 = *((float *)&j[1].mp_prev + 1);
              v27 = HIDWORD(v15[1].mp_prev);
              v23 = *((float *)&v15[1].mp_prev + 1) - v22;
              v24 = *(float *)&j[1].mp_next;
              v25 = *(float *)&v15[1].mp_next - v24;
              *(float *)&v27 = (float)((float)(v23 * v23) + (float)(v21 * v21)) + (float)(v25 * v25);
              v26 = *(float *)&v27;
              if ( *(float *)&v27 <= (float)(*(float *)&_XMM5 * *(float *)&_XMM5) && *(float *)&v27 >= 0.001 )
              {
                *(float *)&v27 = fsqrt(*(float *)&v27);
                _XMM3 = v27;
                __asm
                {
                  vcmpless xmm0, xmm3, cs:__real@80000000
                  vblendvps xmm1, xmm3, xmm15, xmm0
                }
                *(float *)&v50.m256i_i32[3] = v21 * (float)(1.0 / *(float *)&_XMM1);
                *(float *)&v50.m256i_i32[4] = v23 * (float)(1.0 / *(float *)&_XMM1);
                *(float *)&v50.m256i_i32[5] = v25 * (float)(1.0 / *(float *)&_XMM1);
                v50.m256i_i32[7] = _XMM5;
                *(float *)&v50.m256i_i32[6] = *(float *)&v27 / fsqrt((float)(v16 * v16) + v26);
                if ( BYTE4(v15[3].mp_next) )
                {
                  v33 = 0.5 * *(float *)&v15[3].mp_next;
                  v34 = (float)(v33 * *(float *)&v15[2].mp_prev) + v22;
                  v35 = (float)(v33 * *((float *)&v15[2].mp_prev + 1)) + v24;
                  v36 = 0.5 * *(float *)&j[3].mp_next;
                  *(float *)v50.m256i_i32 = (float)(v36 * *((float *)&j[1].mp_next + 1)) + (float)((float)(v33 * *((float *)&v15[1].mp_next + 1)) + v20);
                  *(float *)&v50.m256i_i32[1] = (float)(v36 * *(float *)&j[2].mp_prev) + v34;
                  v32 = (float)(v36 * *((float *)&j[2].mp_prev + 1)) + v35;
                }
                else
                {
                  v31 = *(float *)&v15[3].mp_next;
                  *(float *)v50.m256i_i32 = (float)(v31 * *((float *)&v15[1].mp_next + 1)) + v20;
                  *(float *)&v50.m256i_i32[1] = (float)(v31 * *(float *)&v15[2].mp_prev) + v22;
                  v32 = (float)(v31 * *((float *)&v15[2].mp_prev + 1)) + v24;
                }
                *(float *)&v50.m256i_i32[2] = v32;
                if ( obstacleCones.m_size >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
                  __debugbreak();
                *(__m256i *)&obstacleCones.m_data.m_buffer[32 * obstacleCones.m_size++] = v50;
              }
            }
            if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            v15 = v15->mp_next;
          }
          while ( v15 != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
          v2 = 0i64;
        }
        if ( !CalculateSafeVelocity(&obstacleCones, &desiredOrigin, &desiredOrigin) )
          Com_Printf(18, "Warning!  RVO3 avoidance resolution failed.\n");
        *(float *)&j[2].mp_next = desiredOrigin.v[0] - *v12;
        *((float *)&j[2].mp_next + 1) = desiredOrigin.v[1] - *((float *)&j[1].mp_prev + 1);
        *(float *)&j[3].mp_prev = desiredOrigin.v[2] - *(float *)&j[1].mp_next;
        v37 = DVARINT_ai_showAvoidance3dOnEnt;
        if ( !DVARINT_ai_showAvoidance3dOnEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showAvoidance3dOnEnt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v37);
        integer = v37->current.integer;
        v39 = HIWORD(j[3].mp_next);
        if ( (unsigned int)(v39 - 1) >= 0x7FF )
        {
          LODWORD(v48) = 2047;
          LODWORD(duration) = v39 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", duration, v48) )
            __debugbreak();
        }
        v40 = HIWORD(j[3].mp_next);
        if ( (unsigned int)(v40 - 1) >= 0x800 )
        {
          LODWORD(v48) = 2048;
          LODWORD(duration) = v40 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v48) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v41 = v40 - 1;
        if ( g_entities[v41].r.isInUse != g_entityIsInUse[v41] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v41] )
        {
          LODWORD(v48) = HIWORD(j[3].mp_next) - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v48) )
            __debugbreak();
        }
        if ( integer == (__int16)(HIWORD(j[3].mp_next) - 1) && &obstacleCones != (ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)((char *)&obstacleCones + 32 * obstacleCones.m_size) )
        {
          v42 = (float *)&obstacleCones.m_data.m_buffer[20];
          do
          {
            v43 = fsqrt((float)((float)(v42[2] / v42[1]) * (float)(v42[2] / v42[1])) - (float)(v42[2] * v42[2]));
            v44 = LODWORD(FLOAT_0_1);
            do
            {
              v45 = *(float *)&v44 * v42[2];
              center.v[0] = (float)(v45 * *(v42 - 2)) + *(v42 - 5);
              center.v[1] = (float)(v45 * *(v42 - 1)) + *(v42 - 4);
              center.v[2] = (float)(v45 * *v42) + *(v42 - 3);
              G_DebugCircleEx(&center, *(float *)&v44 * v43, (const vec3_t *)(v42 - 2), &colorGreenFaded, 1, 1);
              v46 = v44;
              *(float *)&v46 = *(float *)&v44 + 0.1;
              v44 = v46;
            }
            while ( *(float *)&v46 <= 1.0 );
            v42 += 8;
          }
          while ( v42 - 5 != (float *)((char *)&obstacleCones + 32 * obstacleCones.m_size) );
        }
      }
    }
    if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
  }
  if ( obstacleCones.m_size )
  {
    do
    {
      if ( v2 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v2;
    }
    while ( v2 < obstacleCones.m_size );
  }
}

/*
==============
CalculateSafeVelocity
==============
*/
char CalculateSafeVelocity(const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *obstacleCones, const vec3_t *desiredOrigin, vec3_t *outSafeOrigin)
{
  const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *v5; 
  float *i; 
  float v7; 
  __int128 v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float *v32; 
  vec3_t v34; 

  *outSafeOrigin = *desiredOrigin;
  v5 = obstacleCones;
  if ( obstacleCones == (const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)((char *)obstacleCones + 32 * obstacleCones->m_size) )
    return 1;
  for ( i = (float *)&obstacleCones->m_data.m_buffer[20]; !PointInsideCone((const vec3_t *)v5, (const vec3_t *)(i - 2), i[1], i[2], outSafeOrigin); i += 8 )
  {
LABEL_10:
    v5 = (const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)((char *)v5 + 32);
    if ( v5 == (const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)((char *)obstacleCones + 32 * obstacleCones->m_size) )
      return 1;
  }
  v8 = LODWORD(outSafeOrigin->v[1]);
  v7 = outSafeOrigin->v[1] - *(i - 4);
  v9 = outSafeOrigin->v[0] - *(float *)v5->m_data.m_buffer;
  v10 = outSafeOrigin->v[2] - *(i - 3);
  v11 = (float)((float)(v7 * *(i - 1)) + (float)(v9 * *(i - 2))) + (float)(v10 * *i);
  v12 = v11 * *(i - 2);
  v13 = v11 * *(i - 1);
  v14 = v11 * *i;
  v15 = acosf_0(i[1]);
  *(float *)&v8 = v7 - v13;
  v16 = v8;
  v17 = tanf_0(v15) * fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)((float)(v9 - v12) * (float)(v9 - v12))) + (float)((float)(v10 - v14) * (float)(v10 - v14)));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v21 = (float)((float)((float)(v9 - v12) * (float)(1.0 / *(float *)&_XMM0)) * v17) + v12;
  v22 = v16;
  v23 = (float)((float)(*(float *)&v16 * (float)(1.0 / *(float *)&_XMM0)) * v17) + v13;
  *(float *)&v16 = (float)((float)((float)(v10 - v14) * (float)(1.0 / *(float *)&_XMM0)) * v17) + v14;
  *(float *)&v22 = fsqrt((float)((float)(v23 * v23) + (float)(v21 * v21)) + (float)(*(float *)&v16 * *(float *)&v16));
  _XMM3 = v22;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v27 = (float)(1.0 / *(float *)&_XMM0) * v21;
  v28 = (float)(1.0 / *(float *)&_XMM0) * v23;
  *(float *)&v16 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v16;
  *(float *)&_XMM3 = (float)((float)(v9 * v27) + (float)(v7 * v28)) + (float)(v10 * *(float *)&v16);
  v29 = (float)(*(float *)&_XMM3 * v27) + *(float *)v5->m_data.m_buffer;
  v30 = (float)(*(float *)&_XMM3 * v28) + *(i - 4);
  v31 = (float)(*(float *)&_XMM3 * *(float *)&v16) + *(i - 3);
  v34.v[2] = v31;
  v34.v[0] = v29;
  v34.v[1] = v30;
  if ( obstacleCones == v5 )
  {
LABEL_9:
    outSafeOrigin->v[0] = v29;
    outSafeOrigin->v[1] = v30;
    outSafeOrigin->v[2] = v31;
    goto LABEL_10;
  }
  v32 = (float *)&obstacleCones->m_data.m_buffer[24];
  while ( !PointInsideCone((const vec3_t *)v32 - 2, (const vec3_t *)v32 - 1, *v32, v32[1], &v34) )
  {
    v32 += 8;
    if ( v32 - 6 == (float *)v5 )
    {
      v31 = v34.v[2];
      v30 = v34.v[1];
      v29 = v34.v[0];
      goto LABEL_9;
    }
  }
  return 0;
}

/*
==============
G_Rvo3_UpdateObstacleFromEntity
==============
*/
void G_Rvo3_UpdateObstacleFromEntity(VelocityObstacle3 *obstacle)
{
  unsigned __int16 number; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  gentity_s *v6; 
  int eType; 
  Vehicle *vehicle; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  __int64 v15; 
  __int64 v16; 

  number = obstacle->ent.number;
  if ( !number )
    goto LABEL_29;
  v3 = number;
  v4 = number - 1;
  if ( v4 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = v3 - 1;
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] )
  {
    LODWORD(v16) = obstacle->ent.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v16) )
      __debugbreak();
  }
  if ( !obstacle->ent.number )
  {
LABEL_29:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 26, ASSERT_TYPE_ASSERT, "(obstacle->ent.isDefined())", (const char *)&queryFormat, "obstacle->ent.isDefined()") )
      __debugbreak();
  }
  v6 = EntHandle::ent(&obstacle->ent);
  obstacle->origin = v6->r.currentOrigin;
  eType = v6->s.eType;
  if ( eType == 6 )
  {
    obstacle->velocityDir.v[0] = v6->s.lerp.pos.trDelta.v[0];
    obstacle->velocityDir.v[1] = v6->s.lerp.pos.trDelta.v[1];
    v9 = v6->s.lerp.pos.trDelta.v[2];
    goto LABEL_23;
  }
  if ( (_WORD)eType == 14 )
  {
    vehicle = v6->vehicle;
    obstacle->velocityDir.v[0] = vehicle->phys.vel.v[0];
    obstacle->velocityDir.v[1] = vehicle->phys.vel.v[1];
    v9 = vehicle->phys.vel.v[2];
LABEL_23:
    obstacle->velocityDir.v[2] = v9;
    goto LABEL_24;
  }
  LODWORD(v15) = v6->s.eType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 44, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "UpdateObstacleFromEntity failed: Invalid obstacle entity type %i", v15) )
    __debugbreak();
LABEL_24:
  v10 = LODWORD(obstacle->velocityDir.v[0]);
  v11 = v10;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(obstacle->velocityDir.v[1] * obstacle->velocityDir.v[1])) + (float)(obstacle->velocityDir.v[2] * obstacle->velocityDir.v[2]));
  _XMM5 = v11;
  __asm
  {
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm0, xmm5, xmm1, xmm0
  }
  obstacle->velocityDir.v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  obstacle->velocityDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * obstacle->velocityDir.v[1];
  obstacle->velocityDir.v[2] = (float)(1.0 / *(float *)&_XMM0) * obstacle->velocityDir.v[2];
  obstacle->speed = *(float *)&v11;
  if ( (v11 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 49, ASSERT_TYPE_SANITY, "( !IS_NAN( obstacle->speed ) )", (const char *)&queryFormat, "!IS_NAN( obstacle->speed )") )
    __debugbreak();
}

/*
==============
VelocityObstacle3Manager::GetReciprocalObstacle
==============
*/
ntl::internal::list_node_base *VelocityObstacle3Manager::GetReciprocalObstacle(gentity_s *entity)
{
  ntl::internal::list_node_base *mp_next; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 77, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next == &VelocityObstacle3Manager::obstacles.m_listHead )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity does not have a reciprocal obstacle.") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( EntHandle::isDefined((EntHandle *)((char *)&mp_next[3].mp_next + 6)) && EntHandle::ent((EntHandle *)((char *)&mp_next[3].mp_next + 6)) == entity )
        break;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead )
        goto LABEL_14;
    }
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    return mp_next + 1;
  }
}

/*
==============
VelocityObstacle3Manager::IsObstacle
==============
*/
char VelocityObstacle3Manager::IsObstacle(const gentity_s *entity)
{
  ntl::internal::list_node_base *mp_next; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 94, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next == &VelocityObstacle3Manager::obstacles.m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( EntHandle::isDefined((EntHandle *)((char *)&mp_next[3].mp_next + 6)) && EntHandle::ent((EntHandle *)((char *)&mp_next[3].mp_next + 6)) == entity )
      break;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead )
      return 0;
  }
  return 1;
}

/*
==============
VelocityObstacle3Manager::Load
==============
*/
void VelocityObstacle3Manager::Load(MemoryFile *memFile)
{
  __int64 v2; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_node<VelocityObstacle3> *v4; 
  double Float; 
  double v6; 
  double v7; 
  double v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int p; 
  unsigned int v13; 

  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p )
  {
    v2 = p;
    do
    {
      if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<72> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next == &VelocityObstacle3Manager::obstacles.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, 0xC0ui64) )
        __debugbreak();
      mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
      v4 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
      VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
      v4->mp_prev = NULL;
      v4->mp_next = NULL;
      ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v4);
      Float = MemFile_ReadFloat(memFile);
      *(float *)&mp_next[2].mp_next = *(float *)&Float;
      v6 = MemFile_ReadFloat(memFile);
      *((float *)&mp_next[2].mp_next + 1) = *(float *)&v6;
      v7 = MemFile_ReadFloat(memFile);
      *(float *)&mp_next[3].mp_next = *(float *)&v7;
      v8 = MemFile_ReadFloat(memFile);
      *((float *)&mp_next[6].mp_next + 1) = *(float *)&v8;
      MemFile_ReadData(memFile, 1ui64, &p);
      BYTE4(mp_next[7].mp_next) = p;
      MemFile_ReadData(memFile, 4ui64, &v13);
      v9 = v13;
      if ( v13 != 2047 )
      {
        if ( v13 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[(int)v9].r.isInUse != g_entityIsInUse[(int)v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[(int)v9] )
        {
          LODWORD(v11) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 375, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( entNum ) ) )", "%s\n\t( entNum ) = %i", "( G_IsEntityInUse( entNum ) )", v11) )
            __debugbreak();
        }
        EntHandle::setEnt((EntHandle *)((char *)&mp_next[7].mp_next + 6), &g_entities[v9]);
      }
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
VelocityObstacle3Manager::RemoveObstacle
==============
*/
void VelocityObstacle3Manager::RemoveObstacle(const gentity_s *entity)
{
  ntl::internal::list_node_base *mp_next; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next == &VelocityObstacle3Manager::obstacles.m_listHead )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not find obstacle to remove!") )
      __debugbreak();
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( EntHandle::isDefined((EntHandle *)((char *)&mp_next[3].mp_next + 6)) && EntHandle::ent((EntHandle *)((char *)&mp_next[3].mp_next + 6)) == entity )
        break;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead )
        goto LABEL_11;
    }
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    EntHandle::setEnt((EntHandle *)((char *)&mp_next[3].mp_next + 6), NULL);
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::remove(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)mp_next);
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    mp_next->mp_prev = (ntl::internal::list_node_base *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
    VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
  }
}

/*
==============
VelocityObstacle3Manager::Save
==============
*/
void VelocityObstacle3Manager::Save(MemoryFile *memFile)
{
  ntl::internal::list_node_base *mp_next; 
  int i; 
  ntl::internal::list_node_base *j; 
  unsigned __int16 mp_next_high; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  int p; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  for ( i = 0; mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; ++i )
    mp_next = mp_next->mp_next;
  p = i;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( j = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; j != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; j = j->mp_next )
  {
    if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    MemFile_WriteData(memFile, 0xCui64, &j[1]);
    if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    MemFile_WriteFloat(memFile, *((float *)&j[3].mp_prev + 1));
    LOBYTE(p) = BYTE4(j[3].mp_next);
    MemFile_WriteData(memFile, 1ui64, &p);
    mp_next_high = HIWORD(j[3].mp_next);
    if ( !mp_next_high )
      goto LABEL_43;
    v6 = mp_next_high;
    v7 = mp_next_high - 1;
    if ( v7 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v8 = v6 - 1;
    if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v8] )
    {
      LODWORD(v13) = HIWORD(j[3].mp_next) - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v13) )
        __debugbreak();
    }
    if ( HIWORD(j[3].mp_next) )
    {
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v9 = HIWORD(j[3].mp_next);
      if ( (unsigned int)(v9 - 1) >= 0x7FF )
      {
        LODWORD(v13) = 2047;
        LODWORD(v12) = v9 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v10 = HIWORD(j[3].mp_next);
      if ( (unsigned int)(v10 - 1) >= 0x800 )
      {
        LODWORD(v13) = 2048;
        LODWORD(v12) = v10 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v11 = v10 - 1;
      if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v11] )
      {
        LODWORD(v13) = HIWORD(j[3].mp_next) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v13) )
          __debugbreak();
      }
      p = (__int16)(HIWORD(j[3].mp_next) - 1);
    }
    else
    {
LABEL_43:
      p = 2047;
    }
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
  }
}

/*
==============
Scr_MakeVelocityObstacle3d
==============
*/
void Scr_MakeVelocityObstacle3d(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  double Float; 
  ntl::internal::list_node_base *mp_next; 
  __int64 v7; 
  unsigned __int64 v8; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v9; 
  ntl::internal::list_node<VelocityObstacle3> *v10; 
  __int16 v11; 
  ntl::internal::list_node_base *i; 

  if ( Scr_GetNumParam(scrContext) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 399, ASSERT_TYPE_ASSERT, "(Scr_GetNumParam( scrContext ) == 1)", (const char *)&queryFormat, "Scr_GetNumParam( scrContext ) == 1") )
    __debugbreak();
  Entity = GetEntity(entref);
  Float = Scr_GetFloat(scrContext, 0);
  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  v7 = 0i64;
  v8 = 0i64;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v8;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    if ( v8 >= 0xBF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 54, ASSERT_TYPE_ASSERT, "(obstacles.size() < ( 64 + (1 << 7) )-1)", (const char *)&queryFormat, "obstacles.size() < MAX_TOTAL_VELOCITY_OBSTACLES-1") )
      __debugbreak();
  }
  if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<72> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next == &VelocityObstacle3Manager::obstacles.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, 0xC0ui64) )
    __debugbreak();
  v9 = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  v10 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
  v10->mp_prev = NULL;
  v10->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v10);
  v11 = EntHandle::entnum((EntHandle *)((char *)&v9[7].mp_next + 6));
  Com_Printf(18, "VO3Manager setting ent on enthandle 0x%x\n", (unsigned int)v11);
  for ( i = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; ++v7 )
    i = i->mp_next;
  Com_Printf(18, "Sizeof List: %zu size() : %zu\n", 0x3618ui64, v7);
  EntHandle::setEnt((EntHandle *)((char *)&v9[7].mp_next + 6), Entity);
  BYTE4(v9[7].mp_next) = 0;
  *((float *)&v9[6].mp_next + 1) = *(float *)&Float;
  G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&v9[2]);
  Scr_AddBool(scrContext, 1);
}

/*
==============
Scr_RemoveVelocityObstacle3d
==============
*/
void Scr_RemoveVelocityObstacle3d(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 

  Entity = GetEntity(entref);
  VelocityObstacle3Manager::RemoveObstacle(Entity);
  Scr_AddBool(scrContext, 1);
}

/*
==============
VelocityObstacle3Manager::Shutdown
==============
*/
void VelocityObstacle3Manager::Shutdown(void)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v1; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v2; 
  ntl::fixed_list<VelocityObstacle3,192,0> *v3; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      EntHandle::setEnt((EntHandle *)((char *)&mp_next[3].mp_next + 6), NULL);
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    v1 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
    {
      v2 = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
      do
      {
        v3 = (ntl::fixed_list<VelocityObstacle3,192,0> *)v1[1].mp_next;
        v1->mp_next = v2;
        v2 = v1;
        VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = v1;
        v1 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v3;
      }
      while ( v3 != (ntl::fixed_list<VelocityObstacle3,192,0> *)&VelocityObstacle3Manager::obstacles.m_listHead );
    }
  }
  VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next = &VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel;
  VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_prev = &VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel;
}

