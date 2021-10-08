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

void __fastcall VelocityObstacle3Manager::AddObstacle(gentity_s *entity, double radius)
{
  ntl::internal::list_node_base *mp_next; 
  __int64 v4; 
  unsigned __int64 v6; 
  ntl::internal::list_node<VelocityObstacle3> *v9; 
  __int16 v10; 
  ntl::internal::list_node_base *i; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  v4 = 0i64;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v6 = 0i64;
  __asm { vmovaps xmm6, xmm1 }
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v6;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    if ( v6 >= 0xBF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 54, ASSERT_TYPE_ASSERT, "(obstacles.size() < ( 64 + (1 << 7) )-1)", (const char *)&queryFormat, "obstacles.size() < MAX_TOTAL_VELOCITY_OBSTACLES-1") )
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
  _RBX = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  v9 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
  v9->mp_prev = NULL;
  v9->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v9);
  v10 = EntHandle::entnum((EntHandle *)((char *)&_RBX[7].mp_next + 6));
  Com_Printf(18, "VO3Manager setting ent on enthandle 0x%x\n", (unsigned int)v10);
  for ( i = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; ++v4 )
    i = i->mp_next;
  Com_Printf(18, "Sizeof List: %zu size() : %zu\n", 0x3618ui64, v4);
  EntHandle::setEnt((EntHandle *)((char *)&_RBX[7].mp_next + 6), entity);
  BYTE4(_RBX[7].mp_next) = 0;
  __asm
  {
    vmovss  dword ptr [rbx+34h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&_RBX[2]);
}

/*
==============
VelocityObstacle3Manager::AddReciprocalObstacle
==============
*/

ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *__fastcall VelocityObstacle3Manager::AddReciprocalObstacle(gentity_s *entity, double radius)
{
  ntl::internal::list_node_base *mp_next; 
  unsigned __int64 v4; 
  ntl::internal::list_node<VelocityObstacle3> *v8; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *result; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  v4 = 0i64;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v4;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    if ( v4 >= 0xBF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 66, ASSERT_TYPE_ASSERT, "(obstacles.size() < ( 64 + (1 << 7) )-1)", (const char *)&queryFormat, "obstacles.size() < MAX_TOTAL_VELOCITY_OBSTACLES-1") )
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
  _RBX = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  v8 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
  v8->mp_prev = NULL;
  v8->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v8);
  EntHandle::setEnt((EntHandle *)((char *)&_RBX[7].mp_next + 6), entity);
  __asm { vmovss  dword ptr [rbx+34h], xmm6 }
  G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&_RBX[2]);
  result = _RBX + 2;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  BYTE4(_RBX[7].mp_next) = 1;
  return result;
}

/*
==============
VelocityObstacle3Manager::CalculateAllSafeVelocities
==============
*/

void __fastcall VelocityObstacle3Manager::CalculateAllSafeVelocities(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  signed __int64 v4; 
  void *v15; 
  unsigned __int64 v16; 
  ntl::internal::list_node_base *mp_next; 
  unsigned __int16 mp_next_high; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  ntl::internal::list_node<VelocityObstacle3> *v22; 
  const dvar_t *v23; 
  unsigned __int64 i; 
  ntl::internal::list_node_base *v40; 
  const dvar_t *v98; 
  int integer; 
  int v100; 
  __int64 v101; 
  __int64 v102; 
  char v119; 
  char v120; 
  __int64 duration; 
  __int64 v133; 
  vec3_t desiredOrigin; 
  vec3_t center; 
  ntl::fixed_vector<VelocityObstacle3Cone,192,0> obstacleCones; 
  char v148; 

  v15 = alloca(v4);
  __asm
  {
    vmovaps [rsp+1970h+var_30], xmm6
    vmovaps [rsp+1970h+var_40], xmm7
    vmovaps [rsp+1970h+var_50], xmm8
    vmovaps [rsp+1970h+var_60], xmm9
    vmovaps [rsp+1970h+var_70], xmm10
    vmovaps [rsp+1970h+var_80], xmm11
    vmovaps [rsp+1970h+var_90], xmm12
    vmovaps [rsp+1970h+var_A0], xmm13
    vmovaps [rsp+1970h+var_B0], xmm14
    vmovaps [rsp+1970h+var_C0], xmm15
  }
  v16 = 0i64;
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
        goto LABEL_117;
      v19 = mp_next_high;
      v20 = mp_next_high - 1;
      if ( v20 >= 0x800 )
      {
        LODWORD(v133) = 2048;
        LODWORD(duration) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v133) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v21 = v19 - 1;
      if ( g_entities[v21].r.isInUse != g_entityIsInUse[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v21] )
      {
        LODWORD(v133) = HIWORD(mp_next[3].mp_next) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v133) )
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
LABEL_117:
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        EntHandle::setEnt((EntHandle *)((char *)&mp_next[3].mp_next + 6), NULL);
        v22 = (ntl::internal::list_node<VelocityObstacle3> *)mp_next;
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::remove(&VelocityObstacle3Manager::obstacles.m_listHead, v22);
        v22->mp_prev = (ntl::internal::list_node_base *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
        VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v22;
      }
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    v16 = 0i64;
  }
  v23 = DVARBOOL_ai_showRepulsors3d;
  if ( !DVARBOOL_ai_showRepulsors3d && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors3d") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    for ( _RBX = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; _RBX != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; _RBX = _RBX->mp_next )
    {
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      __asm { vmovss  xmm1, dword ptr [rbx+34h]; radius }
      G_DebugSphere((const vec3_t *)&_RBX[1], *(float *)&_XMM1, &colorRed, 1, 1);
    }
  }
  if ( obstacleCones.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 252, ASSERT_TYPE_ASSERT, "(obstacleCones.size() == 0)", (const char *)&queryFormat, "obstacleCones.size() == 0") )
    __debugbreak();
  _RDI = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm15, cs:__real@3f800000
      vmovss  xmm13, cs:__real@3dcccccd
    }
    do
    {
      if ( !_RDI )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        __asm { vxorps  xmm3, xmm3, xmm3 }
      }
      _RSI = (unsigned __int64)&_RDI[1];
      if ( BYTE4(_RDI[3].mp_next) )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+38h]
          vucomiss xmm2, xmm3
        }
        if ( BYTE4(_RDI[3].mp_next) )
        {
          __asm
          {
            vmulss  xmm0, xmm2, dword ptr [rdi+1Ch]
            vaddss  xmm1, xmm0, dword ptr [rsi]
            vmovss  dword ptr [rsp+1970h+desiredOrigin], xmm1
            vmulss  xmm0, xmm2, dword ptr [rdi+20h]
            vaddss  xmm1, xmm0, dword ptr [rdi+14h]
            vmovss  dword ptr [rsp+1970h+desiredOrigin+4], xmm1
            vmulss  xmm0, xmm2, dword ptr [rdi+24h]
            vaddss  xmm1, xmm0, dword ptr [rdi+18h]
            vmovss  dword ptr [rsp+1970h+desiredOrigin+8], xmm1
            vmulss  xmm14, xmm2, cs:__real@3fc00000
          }
          for ( i = 0i64; i < obstacleCones.m_size; ++i )
          {
            if ( i >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
          }
          obstacleCones.m_size = 0i64;
          v40 = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
          if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
          {
            do
            {
              if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              _RAX = v40 + 1;
              if ( (ntl::internal::list_node_base *)_RSI != &v40[1] )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+34h]
                  vaddss  xmm12, xmm0, dword ptr [rax+24h]
                  vmulss  xmm1, xmm12, cs:__real@3fea4d66
                  vmaxss  xmm5, xmm1, xmm14
                  vmovss  xmm9, dword ptr [rsi]
                  vmovss  xmm0, dword ptr [rax]
                  vsubss  xmm6, xmm0, xmm9
                  vmovss  xmm10, dword ptr [rdi+14h]
                  vmovss  xmm1, dword ptr [rax+4]
                  vsubss  xmm7, xmm1, xmm10
                  vmovss  xmm11, dword ptr [rdi+18h]
                  vmovss  xmm0, dword ptr [rax+8]
                  vsubss  xmm8, xmm0, xmm11
                  vmulss  xmm2, xmm7, xmm7
                  vmulss  xmm1, xmm6, xmm6
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm8, xmm8
                  vaddss  xmm4, xmm3, xmm0
                  vmulss  xmm1, xmm5, xmm5
                  vcomiss xmm4, xmm1
                }
                if ( _RSI <= (unsigned __int64)&v40[1] )
                {
                  __asm { vcomiss xmm4, cs:__real@3a83126f }
                  if ( _RSI >= (unsigned __int64)&v40[1] )
                  {
                    __asm
                    {
                      vsqrtss xmm3, xmm4, xmm4
                      vcmpless xmm0, xmm3, cs:__real@80000000
                      vblendvps xmm1, xmm3, xmm15, xmm0
                      vdivss  xmm2, xmm15, xmm1
                      vmulss  xmm0, xmm6, xmm2
                      vmovss  dword ptr [rsp+1970h+var_1910+0Ch], xmm0
                      vmulss  xmm1, xmm7, xmm2
                      vmovss  dword ptr [rsp+1970h+var_1910+10h], xmm1
                      vmulss  xmm0, xmm8, xmm2
                      vmovss  dword ptr [rsp+1970h+var_1910+14h], xmm0
                      vmovss  dword ptr [rsp+1970h+var_1910+1Ch], xmm5
                      vmulss  xmm0, xmm12, xmm12
                      vaddss  xmm1, xmm0, xmm4
                      vsqrtss xmm2, xmm1, xmm1
                      vdivss  xmm3, xmm3, xmm2
                      vmovss  dword ptr [rsp+1970h+var_1910+18h], xmm3
                    }
                    if ( BYTE4(v40[3].mp_next) )
                    {
                      __asm
                      {
                        vmovss  xmm7, cs:__real@3f000000
                        vmulss  xmm2, xmm7, dword ptr [rax+28h]
                        vmulss  xmm1, xmm2, dword ptr [rax+0Ch]
                        vaddss  xmm4, xmm1, xmm9
                        vmulss  xmm0, xmm2, dword ptr [rax+10h]
                        vaddss  xmm5, xmm0, xmm10
                        vmulss  xmm1, xmm2, dword ptr [rax+14h]
                        vaddss  xmm6, xmm1, xmm11
                        vmulss  xmm3, xmm7, dword ptr [rdi+38h]
                        vmulss  xmm1, xmm3, dword ptr [rdi+1Ch]
                        vaddss  xmm2, xmm1, xmm4
                        vmovss  dword ptr [rsp+1970h+var_1910], xmm2
                        vmulss  xmm0, xmm3, dword ptr [rdi+20h]
                        vaddss  xmm1, xmm0, xmm5
                        vmovss  dword ptr [rsp+1970h+var_1910+4], xmm1
                        vmulss  xmm0, xmm3, dword ptr [rdi+24h]
                        vaddss  xmm1, xmm0, xmm6
                      }
                    }
                    else
                    {
                      __asm
                      {
                        vmovss  xmm2, dword ptr [rax+28h]
                        vmulss  xmm0, xmm2, dword ptr [rax+0Ch]
                        vaddss  xmm1, xmm0, xmm9
                        vmovss  dword ptr [rsp+1970h+var_1910], xmm1
                        vmulss  xmm0, xmm2, dword ptr [rax+10h]
                        vaddss  xmm1, xmm0, xmm10
                        vmovss  dword ptr [rsp+1970h+var_1910+4], xmm1
                        vmulss  xmm0, xmm2, dword ptr [rax+14h]
                        vaddss  xmm1, xmm0, xmm11
                      }
                    }
                    __asm { vmovss  dword ptr [rsp+1970h+var_1910+8], xmm1 }
                    if ( obstacleCones.m_size >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
                      __debugbreak();
                    _RAX = 32 * obstacleCones.m_size;
                    __asm
                    {
                      vmovups ymm0, [rsp+1970h+var_1910]
                      vmovups ymmword ptr [rbp+rax+1870h+obstacleCones.baseclass_0.m_data.m_buffer], ymm0
                    }
                    ++obstacleCones.m_size;
                  }
                }
              }
              if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v40 = v40->mp_next;
            }
            while ( v40 != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
            v16 = 0i64;
          }
          if ( !CalculateSafeVelocity(&obstacleCones, &desiredOrigin, &desiredOrigin) )
            Com_Printf(18, "Warning!  RVO3 avoidance resolution failed.\n");
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1970h+desiredOrigin]
            vsubss  xmm1, xmm0, dword ptr [rsi]
            vmovss  dword ptr [rdi+28h], xmm1
            vmovss  xmm2, dword ptr [rsp+1970h+desiredOrigin+4]
            vsubss  xmm0, xmm2, dword ptr [rdi+14h]
            vmovss  dword ptr [rdi+2Ch], xmm0
            vmovss  xmm1, dword ptr [rsp+1970h+desiredOrigin+8]
            vsubss  xmm2, xmm1, dword ptr [rdi+18h]
            vmovss  dword ptr [rdi+30h], xmm2
          }
          v98 = DVARINT_ai_showAvoidance3dOnEnt;
          if ( !DVARINT_ai_showAvoidance3dOnEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showAvoidance3dOnEnt") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v98);
          integer = v98->current.integer;
          v100 = HIWORD(_RDI[3].mp_next);
          if ( (unsigned int)(v100 - 1) >= 0x7FF )
          {
            LODWORD(v133) = 2047;
            LODWORD(duration) = v100 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", duration, v133) )
              __debugbreak();
          }
          v101 = HIWORD(_RDI[3].mp_next);
          if ( (unsigned int)(v101 - 1) >= 0x800 )
          {
            LODWORD(v133) = 2048;
            LODWORD(duration) = v101 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v133) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v102 = v101 - 1;
          if ( g_entities[v102].r.isInUse != g_entityIsInUse[v102] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v102] )
          {
            LODWORD(v133) = HIWORD(_RDI[3].mp_next) - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v133) )
              __debugbreak();
          }
          if ( integer == (__int16)(HIWORD(_RDI[3].mp_next) - 1) && &obstacleCones != (ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)((char *)&obstacleCones + 32 * obstacleCones.m_size) )
          {
            _RBX = &obstacleCones.m_data.m_buffer[20];
            do
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+8]
                vdivss  xmm0, xmm1, dword ptr [rbx+4]
                vmulss  xmm2, xmm0, xmm0
                vmulss  xmm1, xmm1, xmm1
                vsubss  xmm2, xmm2, xmm1
                vsqrtss xmm7, xmm2, xmm2
                vmovaps xmm6, xmm13
              }
              do
              {
                __asm
                {
                  vmulss  xmm2, xmm6, dword ptr [rbx+8]
                  vmulss  xmm0, xmm2, dword ptr [r8]
                  vaddss  xmm1, xmm0, dword ptr [rbx-14h]
                  vmovss  dword ptr [rbp+1870h+center], xmm1
                  vmulss  xmm0, xmm2, dword ptr [rbx-4]
                  vaddss  xmm1, xmm0, dword ptr [rbx-10h]
                  vmovss  dword ptr [rbp+1870h+center+4], xmm1
                  vmulss  xmm0, xmm2, dword ptr [rbx]
                  vaddss  xmm1, xmm0, dword ptr [rbx-0Ch]
                  vmovss  dword ptr [rbp+1870h+center+8], xmm1
                  vmulss  xmm1, xmm6, xmm7; radius
                }
                G_DebugCircleEx(&center, *(float *)&_XMM1, (const vec3_t *)(_RBX - 8), &colorGreenFaded, 1, 1);
                __asm
                {
                  vaddss  xmm6, xmm6, xmm13
                  vcomiss xmm6, xmm15
                }
              }
              while ( v119 | v120 );
              _RBX += 32;
            }
            while ( _RBX - 20 != (char *)&obstacleCones + 32 * obstacleCones.m_size );
          }
        }
        else
        {
          _RDI[2].mp_next = NULL;
          LODWORD(_RDI[3].mp_prev) = 0;
        }
      }
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      _RDI = _RDI->mp_next;
      __asm { vxorps  xmm3, xmm3, xmm3 }
    }
    while ( _RDI != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
  }
  if ( obstacleCones.m_size )
  {
    do
    {
      if ( v16 >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v16;
    }
    while ( v16 < obstacleCones.m_size );
  }
  _R11 = &v148;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CalculateSafeVelocity
==============
*/
bool CalculateSafeVelocity(const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *obstacleCones, const vec3_t *desiredOrigin, vec3_t *outSafeOrigin)
{
  vec3_t *point; 
  const vec3_t *v16; 
  bool result; 
  vec3_t v103; 
  char v107; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps [rsp+108h+var_B8], xmm15
  }
  point = outSafeOrigin;
  *outSafeOrigin = *desiredOrigin;
  v16 = (const vec3_t *)obstacleCones;
  if ( obstacleCones == (const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)((char *)obstacleCones + 32 * obstacleCones->m_size) )
  {
LABEL_11:
    result = 1;
    goto LABEL_12;
  }
  _RSI = &obstacleCones->m_data.m_buffer[20];
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+8]; coneHeight
      vmovss  xmm2, dword ptr [rsi+4]; cosHalfFov
    }
    if ( PointInsideCone(v16, (const vec3_t *)(_RSI - 8), *(float *)&_XMM2, *(float *)&_XMM3, point) )
      break;
LABEL_10:
    v16 = (const vec3_t *)((char *)v16 + 32);
    _RSI += 32;
    if ( v16 == (const vec3_t *)((char *)obstacleCones + 32 * obstacleCones->m_size) )
      goto LABEL_11;
  }
  __asm
  {
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm13, xmm1, dword ptr [rsi-10h]
    vmulss  xmm1, xmm13, dword ptr [rsi-4]
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm14, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm12, xmm0, dword ptr [rsi-0Ch]
    vmulss  xmm0, xmm14, dword ptr [rsi-8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+4]; X
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm8, xmm3, dword ptr [rsi-8]
    vmulss  xmm10, xmm3, dword ptr [rsi-4]
    vmulss  xmm11, xmm3, dword ptr [rsi]
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm5, xmm14, xmm8
    vmulss  xmm1, xmm8, xmm8
    vsubss  xmm6, xmm13, xmm10
    vmulss  xmm2, xmm10, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm11, xmm11
    vaddss  xmm3, xmm3, xmm2
    vsqrtss xmm1, xmm3, xmm3
    vmulss  xmm9, xmm0, xmm1
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vsubss  xmm7, xmm12, xmm11
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm8, xmm1, xmm8
    vmulss  xmm2, xmm6, xmm4
    vmulss  xmm0, xmm2, xmm9
    vaddss  xmm5, xmm0, xmm10
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm6, xmm2, xmm11
    vmulss  xmm3, xmm5, xmm5
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm4, xmm1, xmm8
    vmulss  xmm5, xmm1, xmm5
    vmulss  xmm6, xmm1, xmm6
    vmulss  xmm1, xmm14, xmm4
    vmulss  xmm0, xmm13, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm3, xmm4
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm3, xmm5
    vaddss  xmm4, xmm1, dword ptr [rsi-10h]
    vmulss  xmm0, xmm3, xmm6
    vaddss  xmm1, xmm0, dword ptr [rsi-0Ch]
    vmovss  dword ptr [rsp+108h+var_D8+8], xmm1
    vmovss  dword ptr [rsp+108h+var_D8], xmm2
    vmovss  dword ptr [rsp+108h+var_D8+4], xmm4
  }
  if ( obstacleCones == (const ntl::fixed_vector<VelocityObstacle3Cone,192,0> *)v16 )
  {
LABEL_9:
    __asm
    {
      vmovss  dword ptr [r14], xmm2
      vmovss  dword ptr [r14+4], xmm4
      vmovss  dword ptr [r14+8], xmm1
    }
    goto LABEL_10;
  }
  _RBX = &obstacleCones->m_data.m_buffer[24];
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+4]; coneHeight
      vmovss  xmm2, dword ptr [rbx]; cosHalfFov
    }
    if ( PointInsideCone((const vec3_t *)_RBX - 2, (const vec3_t *)_RBX - 1, *(float *)&_XMM2, *(float *)&_XMM3, &v103) )
      break;
    _RBX += 32;
    if ( _RBX - 24 == (char *)v16 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+108h+var_D8+8]
        vmovss  xmm4, dword ptr [rsp+108h+var_D8+4]
        vmovss  xmm2, dword ptr [rsp+108h+var_D8]
      }
      goto LABEL_9;
    }
  }
  result = 0;
LABEL_12:
  _R11 = &v107;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+108h+var_A8]
    vmovaps xmm15, [rsp+108h+var_B8]
  }
  return result;
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
  __int64 v26; 
  __int64 v27; 
  int v28; 

  number = obstacle->ent.number;
  _RBX = obstacle;
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
    LODWORD(v27) = _RBX->ent.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v27) )
      __debugbreak();
  }
  if ( !_RBX->ent.number )
  {
LABEL_29:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 26, ASSERT_TYPE_ASSERT, "(obstacle->ent.isDefined())", (const char *)&queryFormat, "obstacle->ent.isDefined()") )
      __debugbreak();
  }
  v6 = EntHandle::ent(&_RBX->ent);
  _RBX->origin = v6->r.currentOrigin;
  eType = v6->s.eType;
  if ( eType == 6 )
  {
    _RBX->velocityDir.v[0] = v6->s.lerp.pos.trDelta.v[0];
    _RBX->velocityDir.v[1] = v6->s.lerp.pos.trDelta.v[1];
    v9 = v6->s.lerp.pos.trDelta.v[2];
    goto LABEL_23;
  }
  if ( (_WORD)eType == 14 )
  {
    vehicle = v6->vehicle;
    _RBX->velocityDir.v[0] = vehicle->phys.vel.v[0];
    _RBX->velocityDir.v[1] = vehicle->phys.vel.v[1];
    v9 = vehicle->phys.vel.v[2];
LABEL_23:
    _RBX->velocityDir.v[2] = v9;
    goto LABEL_24;
  }
  LODWORD(v26) = v6->s.eType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 44, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "UpdateObstacleFromEntity failed: Invalid obstacle entity type %i", v26) )
    __debugbreak();
LABEL_24:
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm3, dword ptr [rbx+14h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm5, xmm2, xmm2
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm0, xmm5, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+10h]
    vmovss  dword ptr [rbx+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+14h]
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  [rsp+48h+arg_0], xmm5
    vmovss  dword ptr [rbx+28h], xmm5
  }
  if ( (v28 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 49, ASSERT_TYPE_SANITY, "( !IS_NAN( obstacle->speed ) )", (const char *)&queryFormat, "!IS_NAN( obstacle->speed )") )
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
  __int64 v3; 
  ntl::internal::list_node<VelocityObstacle3> *mp_next; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int p; 
  unsigned int v10; 

  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p )
  {
    v3 = p;
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
      _RSI = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
      mp_next = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
      VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
      mp_next->mp_prev = NULL;
      mp_next->mp_next = NULL;
      ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, mp_next);
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+10h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+14h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+18h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+34h], xmm0 }
      MemFile_ReadData(memFile, 1ui64, &p);
      BYTE4(_RSI[7].mp_next) = p;
      MemFile_ReadData(memFile, 4ui64, &v10);
      v6 = v10;
      if ( v10 != 2047 )
      {
        if ( v10 >= 0x800 )
        {
          LODWORD(v8) = 2048;
          LODWORD(v7) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[(int)v6].r.isInUse != g_entityIsInUse[(int)v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[(int)v6] )
        {
          LODWORD(v8) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 375, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( entNum ) ) )", "%s\n\t( entNum ) = %i", "( G_IsEntityInUse( entNum ) )", v8) )
            __debugbreak();
        }
        EntHandle::setEnt((EntHandle *)((char *)&_RSI[7].mp_next + 6), &g_entities[v6]);
      }
      --v3;
    }
    while ( v3 );
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
  unsigned __int16 mp_next_high; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int p; 

  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  for ( i = 0; mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; ++i )
    mp_next = mp_next->mp_next;
  p = i;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( _RBX = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; _RBX != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; _RBX = _RBX->mp_next )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    MemFile_WriteData(memFile, 0xCui64, &_RBX[1]);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    __asm { vmovss  xmm1, dword ptr [rbx+34h]; value }
    MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    LOBYTE(p) = BYTE4(_RBX[3].mp_next);
    MemFile_WriteData(memFile, 1ui64, &p);
    mp_next_high = HIWORD(_RBX[3].mp_next);
    if ( !mp_next_high )
      goto LABEL_43;
    v7 = mp_next_high;
    v8 = mp_next_high - 1;
    if ( v8 >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v9 = v7 - 1;
    if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v9] )
    {
      LODWORD(v14) = HIWORD(_RBX[3].mp_next) - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v14) )
        __debugbreak();
    }
    if ( HIWORD(_RBX[3].mp_next) )
    {
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v10 = HIWORD(_RBX[3].mp_next);
      if ( (unsigned int)(v10 - 1) >= 0x7FF )
      {
        LODWORD(v14) = 2047;
        LODWORD(v13) = v10 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v11 = HIWORD(_RBX[3].mp_next);
      if ( (unsigned int)(v11 - 1) >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = v11 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v12 = v11 - 1;
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v12] )
      {
        LODWORD(v14) = HIWORD(_RBX[3].mp_next) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v14) )
          __debugbreak();
      }
      p = (__int16)(HIWORD(_RBX[3].mp_next) - 1);
    }
    else
    {
LABEL_43:
      p = 2047;
    }
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
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
  ntl::internal::list_node_base *mp_next; 
  __int64 v8; 
  unsigned __int64 v9; 
  ntl::internal::list_node<VelocityObstacle3> *v12; 
  __int16 v13; 
  ntl::internal::list_node_base *i; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( Scr_GetNumParam(scrContext) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 399, ASSERT_TYPE_ASSERT, "(Scr_GetNumParam( scrContext ) == 1)", (const char *)&queryFormat, "Scr_GetNumParam( scrContext ) == 1") )
    __debugbreak();
  Entity = GetEntity(entref);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  mp_next = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next;
  v8 = 0i64;
  v9 = 0i64;
  __asm { vmovaps xmm6, xmm0 }
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3> > *)VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next != &VelocityObstacle3Manager::obstacles.m_listHead )
  {
    do
    {
      mp_next = mp_next->mp_next;
      ++v9;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead );
    if ( v9 >= 0xBF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_rvo3.cpp", 54, ASSERT_TYPE_ASSERT, "(obstacles.size() < ( 64 + (1 << 7) )-1)", (const char *)&queryFormat, "obstacles.size() < MAX_TOTAL_VELOCITY_OBSTACLES-1") )
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
  _RBX = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  v12 = (ntl::internal::list_node<VelocityObstacle3> *)VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next;
  VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next = VelocityObstacle3Manager::obstacles.m_freelist.m_head.mp_next->mp_next;
  v12->mp_prev = NULL;
  v12->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<VelocityObstacle3>>::insert_before(&VelocityObstacle3Manager::obstacles.m_listHead, (ntl::internal::list_node<VelocityObstacle3> *)&VelocityObstacle3Manager::obstacles.m_listHead, v12);
  v13 = EntHandle::entnum((EntHandle *)((char *)&_RBX[7].mp_next + 6));
  Com_Printf(18, "VO3Manager setting ent on enthandle 0x%x\n", (unsigned int)v13);
  for ( i = VelocityObstacle3Manager::obstacles.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&VelocityObstacle3Manager::obstacles.m_listHead; ++v8 )
    i = i->mp_next;
  Com_Printf(18, "Sizeof List: %zu size() : %zu\n", 0x3618ui64, v8);
  EntHandle::setEnt((EntHandle *)((char *)&_RBX[7].mp_next + 6), Entity);
  BYTE4(_RBX[7].mp_next) = 0;
  __asm { vmovss  dword ptr [rbx+34h], xmm6 }
  G_Rvo3_UpdateObstacleFromEntity((VelocityObstacle3 *)&_RBX[2]);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
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

