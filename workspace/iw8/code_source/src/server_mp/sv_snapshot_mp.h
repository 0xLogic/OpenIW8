/*
==============
SV_SnapshotMP_ShouldEntityGoToClient
==============
*/

bool __fastcall SV_SnapshotMP_ShouldEntityGoToClient(const unsigned int entIndex, const unsigned int *clientHiddenBits, const unsigned int characterIndex, const unsigned int controlClientIndex)
{
  return ?SV_SnapshotMP_ShouldEntityGoToClient@@YA_NIPEBIII@Z(entIndex, clientHiddenBits, characterIndex, controlClientIndex);
}

/*
==============
SV_SnapshotMP_GetPacketBackupCount
==============
*/

int __fastcall SV_SnapshotMP_GetPacketBackupCount()
{
  return ?SV_SnapshotMP_GetPacketBackupCount@@YAHXZ();
}

/*
==============
SV_SnapshotMP_GetPacketBackupCount
==============
*/
__int64 SV_SnapshotMP_GetPacketBackupCount()
{
  __int64 result; 

  result = (unsigned int)g_svSnapshotData.m_packetBackupCount;
  if ( g_svSnapshotData.m_packetBackupCount <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 665, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_packetBackupCount ) > ( 0 )", "g_svSnapshotData.m_packetBackupCount > 0\n\t%i, %i", g_svSnapshotData.m_packetBackupCount, 0i64) )
      __debugbreak();
    return (unsigned int)g_svSnapshotData.m_packetBackupCount;
  }
  return result;
}

/*
==============
SV_SnapshotMP_ShouldEntityGoToClient
==============
*/
bool SV_SnapshotMP_ShouldEntityGoToClient(const unsigned int entIndex, const unsigned int *clientHiddenBits, const unsigned int characterIndex, const unsigned int controlClientIndex)
{
  unsigned int v4; 
  unsigned __int64 v6; 
  __int64 v10; 
  __int64 v11; 

  v4 = SvClient::ms_clientCount;
  v6 = controlClientIndex;
  if ( characterIndex >= SvClient::ms_clientCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 680, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( SvClient::GetClientCount() )", "characterIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", characterIndex, SvClient::ms_clientCount) )
      __debugbreak();
    v4 = SvClient::ms_clientCount;
  }
  if ( (unsigned int)v6 >= v4 )
  {
    LODWORD(v11) = v4;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 681, ASSERT_TYPE_ASSERT, "(unsigned)( controlClientIndex ) < (unsigned)( SvClient::GetClientCount() )", "controlClientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( entIndex == characterIndex )
    return 0;
  if ( !clientHiddenBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 690, ASSERT_TYPE_ASSERT, "( clientHiddenBits != nullptr )", (const char *)&queryFormat, "clientHiddenBits != nullptr") )
    __debugbreak();
  return ((0x80000000 >> (v6 & 0x1F)) & clientHiddenBits[v6 >> 5]) == 0;
}

