/*
==============
SND_ChecksumToString
==============
*/

void __fastcall SND_ChecksumToString(const unsigned __int8 *checksum, char *string)
{
  ?SND_ChecksumToString@@YAXPEBEPEAD@Z(checksum, string);
}

/*
==============
SND_AssetBankValidateHeader
==============
*/

bool __fastcall SND_AssetBankValidateHeader(const char *filename, const SndAssetBankHeader *header, __int64 size, const unsigned __int8 *checksum)
{
  return ?SND_AssetBankValidateHeader@@YA_NPEBDPEBUSndAssetBankHeader@@_JPEBE@Z(filename, header, size, checksum);
}

/*
==============
SND_AssetBankHeaderSwap
==============
*/

void __fastcall SND_AssetBankHeaderSwap(const SndAssetBankHeader *header)
{
  ?SND_AssetBankHeaderSwap@@YAXPEBUSndAssetBankHeader@@@Z(header);
}

/*
==============
SND_AssetBankEntrySwap
==============
*/

void __fastcall SND_AssetBankEntrySwap(SndAssetBankEntry *entry)
{
  ?SND_AssetBankEntrySwap@@YAXPEAUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_EntryCompare
==============
*/

int __fastcall SND_EntryCompare(const void *va, const void *vb)
{
  return ?SND_EntryCompare@@YAHPEBX0@Z(va, vb);
}

/*
==============
SND_AssetBankGetFrameCount
==============
*/

unsigned int __fastcall SND_AssetBankGetFrameCount(const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankGetFrameCount@@YAIPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_AssetBankGetFormat
==============
*/

unsigned int __fastcall SND_AssetBankGetFormat(const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankGetFormat@@YAIPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_AssetBankGetLengthMs
==============
*/

unsigned int __fastcall SND_AssetBankGetLengthMs(const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankGetLengthMs@@YAIPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_AssetBankValidateEntry
==============
*/

bool __fastcall SND_AssetBankValidateEntry(const char *name, __int64 fileSize, const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankValidateEntry@@YA_NPEBD_JPEBUSndAssetBankEntry@@@Z(name, fileSize, entry);
}

/*
==============
SND_AssetBankGetChannelCount
==============
*/

unsigned int __fastcall SND_AssetBankGetChannelCount(const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankGetChannelCount@@YAIPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_AssetBankGetLooping
==============
*/

bool __fastcall SND_AssetBankGetLooping(const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankGetLooping@@YA_NPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_AssetBankGetFrameRate
==============
*/

unsigned int __fastcall SND_AssetBankGetFrameRate(const SndAssetBankEntry *entry)
{
  return ?SND_AssetBankGetFrameRate@@YAIPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_AssetBankEntrySwap
==============
*/
void SND_AssetBankEntrySwap(SndAssetBankEntry *entry)
{
  ;
}

/*
==============
SND_AssetBankGetChannelCount
==============
*/
__int64 SND_AssetBankGetChannelCount(const SndAssetBankEntry *entry)
{
  return entry->channelCount;
}

/*
==============
SND_AssetBankGetFormat
==============
*/
__int64 SND_AssetBankGetFormat(const SndAssetBankEntry *entry)
{
  return entry->format;
}

/*
==============
SND_AssetBankGetFrameCount
==============
*/
__int64 SND_AssetBankGetFrameCount(const SndAssetBankEntry *entry)
{
  return entry->frameCount;
}

/*
==============
SND_AssetBankGetFrameRate
==============
*/
__int64 SND_AssetBankGetFrameRate(const SndAssetBankEntry *entry)
{
  return (unsigned int)entry->frameRate;
}

/*
==============
SND_AssetBankGetLengthMs
==============
*/
unsigned __int64 SND_AssetBankGetLengthMs(const SndAssetBankEntry *entry)
{
  if ( !entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_asset_bank.cpp", 230, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  return 1000 * (unsigned __int64)entry->frameCount / (unsigned int)entry->frameRate;
}

/*
==============
SND_AssetBankGetLooping
==============
*/
bool SND_AssetBankGetLooping(const SndAssetBankEntry *entry)
{
  return entry->looping != 0;
}

/*
==============
SND_AssetBankHeaderSwap
==============
*/
void SND_AssetBankHeaderSwap(const SndAssetBankHeader *header)
{
  ;
}

/*
==============
SND_AssetBankValidateEntry
==============
*/
char SND_AssetBankValidateEntry(const char *name, __int64 fileSize, const SndAssetBankEntry *entry)
{
  if ( !entry->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_asset_bank.cpp", 146, ASSERT_TYPE_ASSERT, "(entry->id)", (const char *)&queryFormat, "entry->id") )
    __debugbreak();
  if ( !entry->offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_asset_bank.cpp", 147, ASSERT_TYPE_ASSERT, "(entry->offset)", (const char *)&queryFormat, "entry->offset") )
    __debugbreak();
  if ( !(entry->hybridPcmSize + entry->size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_asset_bank.cpp", 148, ASSERT_TYPE_ASSERT, "(entry->size+entry->hybridPcmSize > 0)", (const char *)&queryFormat, "entry->size+entry->hybridPcmSize > 0") )
    __debugbreak();
  if ( entry->size >= fileSize || entry->seekTableSize >= fileSize || entry->hybridPcmSize >= fileSize )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had an invalid entry size.\n", name);
  }
  else
  {
    if ( (signed __int64)entry->offset < fileSize )
      return 1;
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had an invalid entry offset.\n", name);
  }
  return 0;
}

/*
==============
SND_AssetBankValidateHeader
==============
*/
char SND_AssetBankValidateHeader(const char *filename, const SndAssetBankHeader *header, __int64 size, const unsigned __int8 *checksum)
{
  __int64 version; 
  __int64 buildVersion; 
  __int64 entrySize; 
  __int64 entryOffset; 
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  bool v17; 
  bool v18; 
  bool v19; 
  __int64 v20; 
  char v21; 
  bool v22; 
  char v23; 
  char v24; 
  char v25; 
  char v26; 
  char v27; 
  char v28; 
  char v29; 
  char v30; 
  char v31; 
  char v32; 
  char v33; 
  char v34; 
  char v35; 
  char v36; 
  __int64 i; 
  const char *v38; 
  const char *v39; 
  unsigned __int8 *checksumChecksum; 
  char dest[40]; 

  if ( header->magic == -559038737 )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' was written incompletely.\n", filename);
    return 0;
  }
  if ( header->magic != 592991538 )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had bad magic (corrupt).\n", filename);
    return 0;
  }
  version = header->version;
  if ( (_DWORD)version != 10 )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had bad version %d should be %d.\n", filename, version, 10);
    return 0;
  }
  buildVersion = header->buildVersion;
  if ( (_DWORD)buildVersion != 16 )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had bad build version %d should be %d.\n", filename, buildVersion, 16);
    return 0;
  }
  entrySize = header->entrySize;
  if ( (_DWORD)entrySize != 44 )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had bad entry size. Actual bank size - %d, expected bank size - %d\n", filename, entrySize, 44);
    return 0;
  }
  if ( !size )
    goto LABEL_20;
  if ( header->fileSize != size )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' was truncated.\n", filename);
    return 0;
  }
  if ( header->entryCount )
  {
    entryOffset = header->entryOffset;
    if ( entryOffset > size || !entryOffset )
    {
      Com_PrintError(9, "ERROR: Sound asset bank '%s' had invalid layout offset. ofs %d siz %d\n", filename, (unsigned int)entryOffset, size);
      return 0;
    }
  }
  if ( header->checksumOffset > size )
  {
    Com_PrintError(9, "ERROR: Sound asset bank '%s' had invalid checksum offset.\n", filename);
    return 0;
  }
  else
  {
LABEL_20:
    if ( header->assetSectionSize <= (unsigned __int64)(size - 688) )
    {
      if ( !checksum )
        return 1;
      checksumChecksum = header->checksumChecksum;
      v11 = 0;
      if ( checksum[1] == header->checksumChecksum[1] )
        v11 = *checksum == header->checksumChecksum[0];
      v12 = 0;
      if ( checksum[2] == header->checksumChecksum[2] )
        v12 = v11;
      v13 = v12;
      v14 = 0;
      v15 = 0;
      if ( checksum[3] == header->checksumChecksum[3] )
        v14 = v13;
      v16 = v14;
      v17 = 0;
      if ( checksum[4] == header->checksumChecksum[4] )
        v15 = v16;
      v18 = v15;
      v19 = 0;
      if ( checksum[5] == header->checksumChecksum[5] )
        v17 = v18;
      if ( checksum[6] == header->checksumChecksum[6] )
        v19 = v17;
      v20 = 0i64;
      v21 = 0;
      v22 = v19;
      v23 = 0;
      if ( checksum[7] == header->checksumChecksum[7] )
        v21 = v22;
      v24 = v21;
      v25 = 0;
      if ( checksum[8] == header->checksumChecksum[8] )
        v23 = v24;
      v26 = v23;
      v27 = 0;
      if ( checksum[9] == header->checksumChecksum[9] )
        v25 = v26;
      v28 = v25;
      v29 = 0;
      if ( checksum[10] == header->checksumChecksum[10] )
        v27 = v28;
      v30 = v27;
      v31 = 0;
      if ( checksum[11] == header->checksumChecksum[11] )
        v29 = v30;
      v32 = v29;
      v33 = 0;
      if ( checksum[12] == header->checksumChecksum[12] )
        v31 = v32;
      if ( checksum[13] == header->checksumChecksum[13] )
        v33 = v31;
      v34 = 0;
      v35 = v33;
      v36 = 0;
      if ( checksum[14] == header->checksumChecksum[14] )
        v34 = v35;
      if ( checksum[15] == header->checksumChecksum[15] )
        v36 = v34;
      if ( v36 )
      {
        return 1;
      }
      else
      {
        Com_PrintError(9, "ERROR: Sound asset bank '%s' did not match link time checksum.\n", filename);
        dest[0] = 0;
        for ( i = 0i64; i < 16; ++i )
        {
          v38 = j_va("%02x", checksum[i]);
          I_strcat(dest, 0x21ui64, v38);
        }
        Com_PrintError(9, "ERROR:   link checksum: %s\n", dest);
        dest[0] = 0;
        do
        {
          v39 = j_va("%02x", checksumChecksum[v20]);
          I_strcat(dest, 0x21ui64, v39);
          ++v20;
        }
        while ( v20 < 16 );
        Com_PrintError(9, "ERROR:   game checksum: %s\n", dest);
        return 0;
      }
    }
    else
    {
      Com_PrintError(9, "ERROR: Sound asset bank '%s' had invalid asset section size.\n", filename);
      return 0;
    }
  }
}

/*
==============
SND_ChecksumToString
==============
*/
void SND_ChecksumToString(const unsigned __int8 *checksum, char *string)
{
  __int64 i; 
  const char *v5; 

  *string = 0;
  for ( i = 0i64; i < 16; ++i )
  {
    v5 = j_va("%02x", checksum[i]);
    I_strcat(string, 0x21ui64, v5);
  }
}

/*
==============
SND_EntryCompare
==============
*/
__int64 SND_EntryCompare(const void *va, const void *vb)
{
  if ( *(_DWORD *)va <= *(_DWORD *)vb )
    return (unsigned int)-(*(_DWORD *)va < *(_DWORD *)vb);
  else
    return 1i64;
}

