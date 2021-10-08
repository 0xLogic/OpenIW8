/*
==============
SvSnapshotFrameBuffers::SaveDemoState
==============
*/

void __fastcall SvSnapshotFrameBuffers::SaveDemoState(SvSnapshotFrameBuffers *this, sysFileHandle_t fileDemo)
{
  ?SaveDemoState@SvSnapshotFrameBuffers@@QEBAXUsysFileHandle_t@@@Z(this, fileDemo);
}

/*
==============
SvSnapshotFrameBuffers::LoadDemoState
==============
*/

void __fastcall SvSnapshotFrameBuffers::LoadDemoState(SvSnapshotFrameBuffers *this, sysFileHandle_t fileDemo)
{
  ?LoadDemoState@SvSnapshotFrameBuffers@@QEAAXUsysFileHandle_t@@@Z(this, fileDemo);
}

/*
==============
SV_SnapshotMP_SaveDemoState
==============
*/

void __fastcall SV_SnapshotMP_SaveDemoState(sysFileHandle_t fileDemo)
{
  ?SV_SnapshotMP_SaveDemoState@@YAXUsysFileHandle_t@@@Z(fileDemo);
}

/*
==============
SV_SnapshotMP_LoadDemoState
==============
*/

void __fastcall SV_SnapshotMP_LoadDemoState(sysFileHandle_t fileDemo)
{
  ?SV_SnapshotMP_LoadDemoState@@YAXUsysFileHandle_t@@@Z(fileDemo);
}

/*
==============
SvSnapshotFrameBuffers::LoadDemoState
==============
*/
void SvSnapshotFrameBuffers::LoadDemoState(SvSnapshotFrameBuffers *this, sysFileHandle_t fileDemo)
{
  unsigned int *snapBufferSizes; 
  signed __int64 v3; 
  SvSnapshotFrameBuffers *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int ptr; 

  snapBufferSizes = g_svSnapshotData.snapBufferSizes;
  v3 = (char *)this - (char *)g_svSnapshotData.snapBufferSizes;
  v5 = this;
  v6 = 10i64;
  do
  {
    FS_FileRead(&ptr, 4ui64, fileDemo);
    if ( ptr != *(unsigned int *)((char *)snapBufferSizes + v3 + 80) )
    {
      LODWORD(v8) = *(unsigned int *)((char *)snapBufferSizes + v3 + 80);
      LODWORD(v7) = ptr;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_demo_mp.cpp", 36, ASSERT_TYPE_ASSERT, "( count ) == ( m_numBufferEntries[entryTypeIndex] )", "count == m_numBufferEntries[entryTypeIndex]\n\t%i, %i", v7, v8) )
        __debugbreak();
    }
    if ( !*snapBufferSizes )
    {
      LODWORD(v7) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_demo_mp.cpp", 37, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.snapBufferSizes[entryTypeIndex] ) != ( 0 )", "g_svSnapshotData.snapBufferSizes[entryTypeIndex] != 0\n\t%i, %i", v7, 0i64) )
        __debugbreak();
    }
    SV_DemoMP_Read(v5->m_bufferData[0], *snapBufferSizes * *(unsigned int *)((char *)snapBufferSizes + v3 + 80), fileDemo);
    ++snapBufferSizes;
    v5 = (SvSnapshotFrameBuffers *)((char *)v5 + 8);
    --v6;
  }
  while ( v6 );
}

/*
==============
SV_SnapshotMP_LoadDemoState
==============
*/
void SV_SnapshotMP_LoadDemoState(sysFileHandle_t fileDemo)
{
  ;
}

/*
==============
SV_SnapshotMP_SaveDemoState
==============
*/
void SV_SnapshotMP_SaveDemoState(sysFileHandle_t fileDemo)
{
  ;
}

/*
==============
SvSnapshotFrameBuffers::SaveDemoState
==============
*/
void SvSnapshotFrameBuffers::SaveDemoState(SvSnapshotFrameBuffers *this, sysFileHandle_t fileDemo)
{
  unsigned int *snapBufferSizes; 
  signed __int64 v3; 
  SvSnapshotFrameBuffers *v5; 
  __int64 v6; 
  __int64 v7; 
  int ptr; 

  snapBufferSizes = g_svSnapshotData.snapBufferSizes;
  v3 = (char *)this - (char *)g_svSnapshotData.snapBufferSizes;
  v5 = this;
  v6 = 10i64;
  do
  {
    ptr = *(unsigned int *)((char *)snapBufferSizes + v3 + 80);
    FS_FileWrite(&ptr, 4ui64, fileDemo);
    if ( !*snapBufferSizes )
    {
      LODWORD(v7) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_demo_mp.cpp", 22, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.snapBufferSizes[entryTypeIndex] ) != ( 0 )", "g_svSnapshotData.snapBufferSizes[entryTypeIndex] != 0\n\t%i, %i", v7, 0i64) )
        __debugbreak();
    }
    SV_DemoMP_Write(v5->m_bufferData[0], *(unsigned int *)((char *)snapBufferSizes + v3 + 80) * *snapBufferSizes, fileDemo);
    ++snapBufferSizes;
    v5 = (SvSnapshotFrameBuffers *)((char *)v5 + 8);
    --v6;
  }
  while ( v6 );
}

