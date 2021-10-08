/*
==============
RB_UpdateEntityDataBuffer
==============
*/

void __fastcall RB_UpdateEntityDataBuffer(const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_UpdateEntityDataBuffer@@YAXPEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(viewInfo, data);
}

/*
==============
R_ShutdownEntityDataBuffer
==============
*/

void R_ShutdownEntityDataBuffer(void)
{
  ?R_ShutdownEntityDataBuffer@@YAXXZ();
}

/*
==============
R_InitEntityDataBuffer
==============
*/

void R_InitEntityDataBuffer(void)
{
  ?R_InitEntityDataBuffer@@YAXXZ();
}

/*
==============
RB_UpdateEntityDataBuffer
==============
*/
void RB_UpdateEntityDataBuffer(const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_UpdateGfxWrappedBuffer(data->entityDataBuffer, data->packedEntityData, 184 * data->packedEntityCount);
}

/*
==============
R_InitEntityDataBuffer
==============
*/
void R_InitEntityDataBuffer(void)
{
  __int64 v0; 
  GfxWrappedBuffer *entityDataBuffer; 

  v0 = 2i64;
  entityDataBuffer = deviceGlobals.entityDataBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(entityDataBuffer++, GfxWrappedBuffer_Structured, 184, 0x180u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "entityDataBuffer");
    --v0;
  }
  while ( v0 );
}

/*
==============
R_ShutdownEntityDataBuffer
==============
*/
void R_ShutdownEntityDataBuffer(void)
{
  GfxWrappedBuffer *entityDataBuffer; 
  __int64 v1; 

  entityDataBuffer = deviceGlobals.entityDataBuffer;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(entityDataBuffer++);
    --v1;
  }
  while ( v1 );
}

