/*
==============
G_LightSampler_Read
==============
*/

void __fastcall G_LightSampler_Read(MemoryFile *memFile)
{
  ?G_LightSampler_Read@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_LightSampler_Init
==============
*/

void G_LightSampler_Init(void)
{
  ?G_LightSampler_Init@@YAXXZ();
}

/*
==============
G_LightSampler_Write
==============
*/

void __fastcall G_LightSampler_Write(MemoryFile *memFile)
{
  ?G_LightSampler_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_LightSampler_GetNormalized
==============
*/

double __fastcall G_LightSampler_GetNormalized(int clientNum)
{
  double result; 

  *(float *)&result = ?G_LightSampler_GetNormalized@@YAMH@Z(clientNum);
  return result;
}

/*
==============
G_LightSampler_ProcessResults
==============
*/

void G_LightSampler_ProcessResults(void)
{
  ?G_LightSampler_ProcessResults@@YAXXZ();
}

/*
==============
G_LightSampler_GetNormalized
==============
*/
float G_LightSampler_GetNormalized(int clientNum)
{
  __int64 v1; 
  int v4; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= 0x18 )
  {
    v4 = 24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_light_sampler.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 24 )", "clientNum doesn't index LIGHT_SAMPLE_MAX_CLIENTS\n\t%i not in [0, %i)", clientNum, v4) )
      __debugbreak();
  }
  return (float)s_LightingSamples[v1].value * 0.14285715;
}

/*
==============
G_LightSampler_Init
==============
*/
void G_LightSampler_Init(void)
{
  *(_QWORD *)&s_LightingSamples[0].bValid = 0i64;
  qword_1491B6148 = 0i64;
  qword_1491B6150 = 0i64;
  qword_1491B6158 = 0i64;
  qword_1491B6160 = 0i64;
  qword_1491B6168 = 0i64;
}

/*
==============
G_LightSampler_ProcessResults
==============
*/
void G_LightSampler_ProcessResults(void)
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  SvClient *CommonClient; 
  __int64 v4; 
  __int64 v5; 

  if ( BG_LightSampler_ActiveGameModeSupportsLightSampling() )
  {
    if ( level.maxclients <= 24 )
    {
      v0 = 0;
      if ( level.maxclients > 0 )
      {
        v1 = 0i64;
        v2 = 0i64;
        do
        {
          if ( v0 >= 0x800 )
          {
            LODWORD(v5) = 2048;
            LODWORD(v4) = v0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v1].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v2] )
          {
            if ( v0 >= 0x18 )
            {
              LODWORD(v5) = 24;
              LODWORD(v4) = v0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_light_sampler.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 24 )", "clientNum doesn't index LIGHT_SAMPLE_MAX_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
                __debugbreak();
            }
            CommonClient = SvClient::GetCommonClient(v0);
            if ( CommonClient->lastUsercmd.lightSample.bValid )
              s_LightingSamples[v0] = CommonClient->lastUsercmd.lightSample;
            else
              s_LightingSamples[v2].bValid = 0;
          }
          ++v0;
          ++v2;
          ++v1;
        }
        while ( (int)v0 < level.maxclients );
      }
    }
    else
    {
      Com_PrintWarning(15, "G_LightSampler_ProcessResults: Too many clients (%i) to support light sampling (limit %i)\n", (unsigned int)level.maxclients, 24i64);
      *(_QWORD *)&s_LightingSamples[0].bValid = 0i64;
      qword_1491B6148 = 0i64;
      qword_1491B6150 = 0i64;
      qword_1491B6158 = 0i64;
      qword_1491B6160 = 0i64;
      qword_1491B6168 = 0i64;
    }
  }
}

/*
==============
G_LightSampler_Read
==============
*/
void G_LightSampler_Read(MemoryFile *memFile)
{
  unsigned __int8 *p_value; 
  __int64 v3; 
  char v4; 
  char p; 
  unsigned __int8 v6; 

  p_value = &s_LightingSamples[0].value;
  v3 = 24i64;
  do
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    v4 = p;
    *(p_value - 1) = p;
    if ( v4 )
    {
      MemFile_ReadData(memFile, 1ui64, &v6);
      *p_value = v6;
    }
    p_value += 2;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_LightSampler_Write
==============
*/
void G_LightSampler_Write(MemoryFile *memFile)
{
  LightSample *v2; 
  char p; 

  v2 = s_LightingSamples;
  do
  {
    p = v2->bValid;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( v2->bValid )
    {
      p = v2->value;
      MemFile_WriteData(memFile, 1ui64, &p);
    }
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_281 );
}

