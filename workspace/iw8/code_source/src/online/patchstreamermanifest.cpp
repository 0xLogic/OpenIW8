/*
==============
ProcessManifestBuffer
==============
*/

bool __fastcall ProcessManifestBuffer(unsigned __int8 *rawManifestBuffer, psSignedManifestData_t *outManifestData)
{
  return ?ProcessManifestBuffer@@YA_NPEAEPEAUpsSignedManifestData_t@@@Z(rawManifestBuffer, outManifestData);
}

/*
==============
ProcessManifestBuffer
==============
*/
__int64 ProcessManifestBuffer(unsigned __int8 *rawManifestBuffer, psSignedManifestData_t *outManifestData)
{
  unsigned int v4; 
  bool UInt32; 
  Online_ErrorReporting *InstancePtr; 
  Online_Error_CAT_PATCHER_t v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  char *v12; 
  __int64 v13; 
  char v14; 
  bool v15; 
  bool v16; 
  bool v17; 
  bool v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v27; 
  Online_PatchStreamer *v28; 
  const char *v29; 
  unsigned __int8 v30; 
  Online_PatchStreamer *Instance; 
  const char *v32; 
  Online_PatchStreamer *v33; 
  const char *v34; 
  char *fmt; 
  unsigned int value; 
  bdJSONDeserializer v38; 
  bdJSONDeserializer v39; 
  __int64 v40; 
  char inHexString[8]; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  char v49; 
  char _Buffer[8]; 
  __int64 v51; 
  char v52[112]; 
  char v53[256]; 
  char v54[528]; 

  v40 = -2i64;
  if ( !rawManifestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\patchstreamermanifest.cpp", 102, ASSERT_TYPE_ASSERT, "(rawManifestBuffer)", (const char *)&queryFormat, "rawManifestBuffer") )
    __debugbreak();
  if ( !outManifestData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\patchstreamermanifest.cpp", 103, ASSERT_TYPE_ASSERT, "(outManifestData)", (const char *)&queryFormat, "outManifestData") )
    __debugbreak();
  *(_QWORD *)_Buffer = 0i64;
  v51 = 0i64;
  memset_0(v53, 0, sizeof(v53));
  v4 = 0;
  value = 0;
  *(_QWORD *)inHexString = 0i64;
  v42 = 0i64;
  v43 = 0i64;
  v44 = 0i64;
  v45 = 0i64;
  v46 = 0i64;
  v47 = 0i64;
  v48 = 0i64;
  v49 = 0;
  memset_0(v54, 0, 0x201ui64);
  memset_0(v52, 0, 0x61ui64);
  bdJSONDeserializer::bdJSONDeserializer(&v39, (const char *)rawManifestBuffer);
  bdJSONDeserializer::bdJSONDeserializer(&v38);
  if ( !v39.m_parsed || !bdJSONDeserializer::isObject(&v39) )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v7 = 0x80000000;
    goto LABEL_109;
  }
  memset_0(outManifestData, 0, sizeof(psSignedManifestData_t));
  UInt32 = bdJSONDeserializer::getUInt32(&v39, "count", &outManifestData->data.fileCount);
  if ( outManifestData->data.fileCount > 0x800 )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v7 = 128;
    goto LABEL_109;
  }
  v8 = UInt32 && bdJSONDeserializer::getUInt32(&v39, "manifestver", &value);
  outManifestData->data.manifestVersion = value;
  v9 = v8 && bdJSONDeserializer::getUInt32(&v39, "dataverff", &value);
  outManifestData->data.dataVersionFF = value;
  v10 = v9 && bdJSONDeserializer::getUInt32(&v39, "purgeCache", &value);
  outManifestData->data.purgeCache = value;
  if ( outManifestData->data.fileCount )
  {
    do
    {
      LODWORD(fmt) = v4;
      j_sprintf_s(_Buffer, 0x10ui64, "%s%d", "entry", fmt);
      v11 = v10 && bdJSONDeserializer::getObject(&v39, _Buffer, &v38) && bdJSONDeserializer::getString(&v38, (const char *const)&stru_143C9A1A4, v53, 0x100u);
      v12 = v53;
      v13 = v4;
      do
      {
        v14 = *v12;
        v12[(_QWORD)outManifestData + 440i64 * v4 - (_QWORD)v53] = *v12;
        ++v12;
      }
      while ( v14 );
      v15 = v11 && bdJSONDeserializer::getUInt32(&v38, "mode", &value);
      outManifestData->data.files[v13].gameMode[0] = value;
      v16 = v15 && bdJSONDeserializer::getUInt32(&v38, "version", &value);
      outManifestData->data.files[v13].fileVersion = value;
      v17 = v16 && bdJSONDeserializer::getUInt32(&v38, "sizeRaw", &value);
      outManifestData->data.files[v13].fileSizeRaw = value;
      v18 = v17 && bdJSONDeserializer::getUInt32(&v38, "sizeEnc", &value);
      outManifestData->data.files[v13].fileSizeEncrypted = value;
      v19 = v18 && bdJSONDeserializer::getUInt32(&v38, "sizeCmp", &value);
      outManifestData->data.files[v13].fileSizeCompressed = value;
      v20 = v19 && bdJSONDeserializer::getUInt32(&v38, "packOffset", &value);
      outManifestData->data.files[v13].packOffset = value;
      v21 = v20 && bdJSONDeserializer::getUInt32(&v38, "packSize", &value);
      outManifestData->data.files[v13].packSize = value;
      v22 = v21 && bdJSONDeserializer::getUInt32(&v38, "restart", &value);
      outManifestData->data.files[v13].forceRestart = value;
      v23 = v22 && bdJSONDeserializer::getUInt32(&v38, "minTU", &value);
      outManifestData->data.files[v13].minTUVersion = value;
      v24 = v23 && bdJSONDeserializer::getUInt32(&v38, "isDormant", &value);
      outManifestData->data.files[v13].isDormant = value;
      v25 = v24 && bdJSONDeserializer::getString(&v38, "rawHash", inHexString, 0x41u);
      if ( inHexString[0] )
      {
        if ( !v25 )
          goto LABEL_81;
        v25 = HexStringToByteBuffer(inHexString, 65, outManifestData->data.files[v13].rawHash.hashBytes, 32);
      }
      if ( v25 && bdJSONDeserializer::getString(&v38, "encHash", inHexString, 0x41u) )
      {
        v26 = 1;
        goto LABEL_82;
      }
LABEL_81:
      v26 = 0;
LABEL_82:
      if ( inHexString[0] )
      {
        if ( !v26 )
          goto LABEL_88;
        v26 = HexStringToByteBuffer(inHexString, 65, outManifestData->data.files[v13].encryptedHash.hashBytes, 32);
      }
      if ( v26 && bdJSONDeserializer::getString(&v38, "zipHash", inHexString, 0x41u) )
      {
        v27 = 1;
        goto LABEL_89;
      }
LABEL_88:
      v27 = 0;
LABEL_89:
      if ( inHexString[0] )
      {
        if ( !v27 )
          goto LABEL_95;
        v27 = HexStringToByteBuffer(inHexString, 65, outManifestData->data.files[v13].compressedHash.hashBytes, 32);
      }
      if ( v27 && bdJSONDeserializer::getString(&v38, "key", v52, 0x61u) )
      {
        v10 = 1;
        goto LABEL_96;
      }
LABEL_95:
      v10 = 0;
LABEL_96:
      if ( v52[0] )
      {
        if ( !v10 || !HexStringToByteBuffer(v52, 97, outManifestData->data.files[v13].encryptionKey.keyBytes, 48) )
        {
LABEL_106:
          Instance = Online_PatchStreamer::GetInstance();
          v32 = j_va("ProcessManifestBuffer: Invalid file entry at index %d \n", v4);
          OnlineSystem::DebugLog(Instance, v32);
          InstancePtr = Online_ErrorReporting::GetInstancePtr();
          v7 = MOVEMENT;
          goto LABEL_109;
        }
        v10 = 1;
      }
      else if ( !v10 )
      {
        goto LABEL_106;
      }
      v28 = Online_PatchStreamer::GetInstance();
      v29 = j_va("ProcessManifestBuffer: %d. %s \n", v4, v53);
      OnlineSystem::DebugLog(v28, v29);
      ++v4;
    }
    while ( v4 < outManifestData->data.fileCount );
  }
  if ( !v10 || !bdJSONDeserializer::getString(&v39, "signature", v54, 0x201u) || !HexStringToByteBuffer(v54, 513, outManifestData->signature.signatureBytes, 256) )
  {
    v33 = Online_PatchStreamer::GetInstance();
    v34 = j_va("ProcessManifestBuffer: Invalid Json object!. \n");
    OnlineSystem::DebugLog(v33, v34);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v7 = MOVEMENT;
LABEL_109:
    Online_ErrorReporting::ReportError(InstancePtr, v7, NULL);
    v30 = 0;
    goto LABEL_110;
  }
  v30 = 1;
LABEL_110:
  bdJSONDeserializer::~bdJSONDeserializer(&v38);
  bdJSONDeserializer::~bdJSONDeserializer(&v39);
  return v30;
}

