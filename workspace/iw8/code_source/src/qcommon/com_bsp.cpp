/*
==============
Com_CanPrimaryLightAffectPoint
==============
*/

bool __fastcall Com_CanPrimaryLightAffectPoint(const ComPrimaryLight *light, const vec3_t *point)
{
  return ?Com_CanPrimaryLightAffectPoint@@YA_NPEBUComPrimaryLight@@AEBTvec3_t@@@Z(light, point);
}

/*
==============
Com_UnloadWorld
==============
*/

void __fastcall Com_UnloadWorld(ComWorld *curComWorld)
{
  ?Com_UnloadWorld@@YAXPEAUComWorld@@@Z(curComWorld);
}

/*
==============
Com_GetUsedTechniques
==============
*/

int __fastcall Com_GetUsedTechniques(int *usedTechniques)
{
  return ?Com_GetUsedTechniques@@YAHPEAH@Z(usedTechniques);
}

/*
==============
Com_GetUmbraGateIndex
==============
*/

bool __fastcall Com_GetUmbraGateIndex(const char *name, unsigned int *gateIndexOut)
{
  return ?Com_GetUmbraGateIndex@@YA_NPEBDAEAI@Z(name, gateIndexOut);
}

/*
==============
Com_FindClosestPrimaryLight
==============
*/

unsigned int __fastcall Com_FindClosestPrimaryLight(const vec3_t *origin)
{
  return ?Com_FindClosestPrimaryLight@@YAIAEBTvec3_t@@@Z(origin);
}

/*
==============
Com_CanPrimaryLightAffectPoint
==============
*/
bool Com_CanPrimaryLightAffectPoint(const ComPrimaryLight *light, const vec3_t *point)
{
  unsigned __int8 type; 
  bool v10; 
  bool v11; 
  bool result; 
  __int64 v52; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  _RBX = light;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
  }
  if ( !light && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 28, ASSERT_TYPE_ASSERT, "(light)", (const char *)&queryFormat, "light") )
    __debugbreak();
  type = _RBX->type;
  v10 = type == 2;
  if ( (unsigned __int8)(type - 2) > 1u )
  {
    LODWORD(v52) = type;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 29, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v52);
    v10 = 0;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+44h]
    vsubss  xmm5, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+48h]
    vsubss  xmm8, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+4Ch]
    vsubss  xmm9, xmm0, dword ptr [rdi+8]
    vmovss  xmm7, dword ptr [rbx+50h]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm2, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm10, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm7
    vcomiss xmm10, xmm1
    vmovaps [rsp+88h+var_18], xmm6
  }
  if ( !v10 )
    goto LABEL_16;
  if ( _RBX->type == 3 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+6Ch]
    vxorps  xmm0, xmm4, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm6, dword ptr [rbx+8Ch]
    vcomiss xmm6, xmm0
  }
  if ( _RBX->type <= 3u )
    goto LABEL_15;
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rbx+30h]
    vmulss  xmm0, xmm5, dword ptr [rbx+2Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+34h]
    vmovss  xmm9, cs:__real@3f800000
    vucomiss xmm6, xmm9
    vaddss  xmm5, xmm2, xmm1
    vxorps  xmm8, xmm8, xmm8
  }
  if ( _RBX->type == 3 )
    goto LABEL_13;
  __asm
  {
    vmulss  xmm0, xmm4, xmm4
    vsubss  xmm2, xmm9, xmm0
    vmulss  xmm1, xmm6, xmm6
    vsubss  xmm0, xmm9, xmm1
    vmulss  xmm1, xmm2, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm3, xmm4, xmm6
    vsubss  xmm4, xmm3, xmm2
    vcomiss xmm4, xmm8
  }
  if ( _RBX->type > 3u )
  {
LABEL_13:
    __asm { vcomiss xmm5, xmm8 }
    if ( _RBX->type > 3u )
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm5, xmm5
        vcomiss xmm2, xmm1
      }
      if ( _RBX->type >= 3u )
      {
LABEL_15:
        result = 1;
        goto LABEL_17;
      }
    }
LABEL_16:
    result = 0;
    goto LABEL_17;
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm4
    vcomiss xmm0, xmm5
  }
  result = _RBX->type >= 3u;
LABEL_17:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
  return result;
}

/*
==============
Com_FindClosestPrimaryLight
==============
*/
__int64 Com_FindClosestPrimaryLight(const vec3_t *origin)
{
  unsigned int v1; 
  unsigned int v3; 
  int v4; 

  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 67, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  v1 = 0;
  __asm { vmovss  xmm5, cs:__real@7f7fffff }
  v3 = 1;
  if ( comWorld.primaryLightCount > 1 )
  {
    if ( comWorld.primaryLightCount - 1 >= 4 )
    {
      v4 = 3;
      _RAX = (char *)&comWorld.primaryLights[1].origin.z;
      do
      {
        if ( *(_RAX - 75) != 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax-8]
            vsubss  xmm3, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [rax-4]
            vsubss  xmm2, xmm1, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rax]
            vsubss  xmm4, xmm0, dword ptr [rbx+8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm5
          }
          if ( !*(_RAX - 75) )
          {
            __asm { vmovaps xmm5, xmm1 }
            v1 = v3;
          }
        }
        if ( _RAX[85] != 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+98h]
            vsubss  xmm3, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [rax+9Ch]
            vsubss  xmm2, xmm1, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rax+0A0h]
            vsubss  xmm4, xmm0, dword ptr [rbx+8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm5
          }
          if ( !_RAX[85] )
          {
            __asm { vmovaps xmm5, xmm1 }
            v1 = v4 - 1;
          }
        }
        if ( _RAX[245] != 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+138h]
            vsubss  xmm3, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [rax+13Ch]
            vsubss  xmm2, xmm1, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rax+140h]
            vsubss  xmm4, xmm0, dword ptr [rbx+8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm5
          }
          if ( !_RAX[245] )
          {
            __asm { vmovaps xmm5, xmm1 }
            v1 = v4;
          }
        }
        if ( _RAX[405] != 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+1D8h]
            vsubss  xmm3, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [rax+1DCh]
            vsubss  xmm2, xmm1, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rax+1E0h]
            vsubss  xmm4, xmm0, dword ptr [rbx+8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm5
          }
          if ( !_RAX[405] )
          {
            __asm { vmovaps xmm5, xmm1 }
            v1 = v4 + 1;
          }
        }
        _RAX += 640;
        v3 += 4;
        v4 += 4;
      }
      while ( v3 < comWorld.primaryLightCount - 3 );
    }
    if ( v3 < comWorld.primaryLightCount )
    {
      _R8 = &comWorld.primaryLights[v3].origin.v[2];
      do
      {
        if ( *((_BYTE *)_R8 - 75) != 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r8-8]
            vsubss  xmm3, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [r8-4]
            vsubss  xmm2, xmm1, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [r8]
            vsubss  xmm4, xmm0, dword ptr [rbx+8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm5
          }
          if ( !*((_BYTE *)_R8 - 75) )
          {
            __asm { vmovaps xmm5, xmm1 }
            v1 = v3;
          }
        }
        _R8 += 40;
        ++v3;
      }
      while ( v3 < comWorld.primaryLightCount );
    }
  }
  return v1;
}

/*
==============
Com_GetUmbraGateIndex
==============
*/
char Com_GetUmbraGateIndex(const char *name, unsigned int *gateIndexOut)
{
  __int64 i; 
  __int64 v5; 
  const char *v6; 
  const char *v7; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 119, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 120, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < comWorld.numUmbraGates; i = (unsigned int)(i + 1) )
  {
    if ( !comWorld.umbraGateNames[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 124, ASSERT_TYPE_ASSERT, "(comWorld.umbraGateNames[gateIndex])", (const char *)&queryFormat, "comWorld.umbraGateNames[gateIndex]") )
      __debugbreak();
    v5 = 0x7FFFFFFFi64;
    v6 = name;
    v7 = comWorld.umbraGateNames[i];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = v7 - name;
    while ( 1 )
    {
      v9 = v6[v8];
      v10 = v5;
      v11 = *v6++;
      --v5;
      if ( !v10 )
      {
LABEL_21:
        *gateIndexOut = i;
        return 1;
      }
      if ( v9 != v11 )
        break;
      if ( !v9 )
        goto LABEL_21;
    }
  }
  return 0;
}

/*
==============
Com_GetUsedTechniques
==============
*/
__int64 Com_GetUsedTechniques(int *usedTechniques)
{
  int *v19; 

  __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
  _EDX = 0;
  _R9 = usedTechniques + 8;
  _ER8 = 8;
  do
  {
    _EAX = _ER8 - 4;
    __asm
    {
      vmovd   xmm0, edx
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [r9-20h], xmm1
      vmovd   xmm0, eax
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [r9-10h], xmm1
      vmovd   xmm0, r8d
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [r9], xmm1
    }
    _EAX = _ER8 + 4;
    _EDX += 16;
    __asm
    {
      vmovd   xmm0, eax
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    _ER8 += 16;
    __asm { vmovdqu xmmword ptr [r9+10h], xmm1 }
    _R9 += 16;
  }
  while ( _ER8 < 200 );
  if ( _EDX < 195 )
  {
    v19 = &usedTechniques[_EDX];
    do
      *v19++ = _EDX++;
    while ( _EDX < 195 );
  }
  return 195i64;
}

/*
==============
Com_UnloadWorld
==============
*/
void Com_UnloadWorld(ComWorld *curComWorld)
{
  if ( curComWorld->isInUse )
  {
    curComWorld->isInUse = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 93, ASSERT_TYPE_ASSERT, "(curComWorld->isInUse)", (const char *)&queryFormat, "curComWorld->isInUse") )
      __debugbreak();
    curComWorld->isInUse = 0;
  }
}

