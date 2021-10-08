/*
==============
indyfs_dir_delete
==============
*/

int __fastcall indyfs_dir_delete(const char *dirname)
{
  return ?indyfs_dir_delete@@YAHPEBD@Z(dirname);
}

/*
==============
indyfs_dir_chdir
==============
*/

int __fastcall indyfs_dir_chdir(const char *dirname)
{
  return ?indyfs_dir_chdir@@YAHPEBD@Z(dirname);
}

/*
==============
indyfs_dir_exists
==============
*/

bool __fastcall indyfs_dir_exists(const char *dirname)
{
  return ?indyfs_dir_exists@@YA_NPEBD@Z(dirname);
}

/*
==============
indyfs_dir_copy_tree
==============
*/

int __fastcall indyfs_dir_copy_tree(const char *src, const char *dst)
{
  return ?indyfs_dir_copy_tree@@YAHPEBD0@Z(src, dst);
}

/*
==============
indyfs_dir_mkdir
==============
*/

int __fastcall indyfs_dir_mkdir(const char *dirname)
{
  return ?indyfs_dir_mkdir@@YAHPEBD@Z(dirname);
}

/*
==============
indyfs_dir_mkdir_recursive
==============
*/

int __fastcall indyfs_dir_mkdir_recursive(const char *dirname)
{
  return ?indyfs_dir_mkdir_recursive@@YAHPEBD@Z(dirname);
}

/*
==============
indyfs_dir_delete_recursive
==============
*/

int __fastcall indyfs_dir_delete_recursive(const char *dirname)
{
  return ?indyfs_dir_delete_recursive@@YAHPEBD@Z(dirname);
}

/*
==============
indyfs_dir_walk
==============
*/

int __fastcall indyfs_dir_walk(const char *name, int (__fastcall *cb)(void *, const char *, bool), void *userData, bool folderCallbackBeforeContents)
{
  return ?indyfs_dir_walk@@YAHPEBDP6AHPEAX0_N@Z12@Z(name, cb, userData, folderCallbackBeforeContents);
}

/*
==============
dir_copy_cb
==============
*/
DWORD dir_copy_cb(void *userData, const char *fromPath, bool isFile)
{
  DWORD result; 
  char dest[272]; 

  indyfs_strlcpy(dest, *(const char **)userData, 0x104ui64);
  indyfs_strlcpy(&dest[*((_QWORD *)userData + 1)], &fromPath[*((_QWORD *)userData + 2)], 260i64 - *((_QWORD *)userData + 1));
  if ( isFile )
    return indyfs_file_copy(fromPath, dest);
  if ( CreateDirectoryA(dest, NULL) )
    return 0;
  result = GetLastError();
  if ( !result || result == 183 )
    return 0;
  return result;
}

/*
==============
dir_delete_cb
==============
*/
DWORD dir_delete_cb(void *userData, const char *path, bool isFile)
{
  if ( isFile )
    return indyfs_file_delete(path);
  if ( RemoveDirectoryA(path) )
    return 0;
  return GetLastError();
}

/*
==============
indyfs_dir_chdir
==============
*/
DWORD indyfs_dir_chdir(const char *dirname)
{
  if ( SetCurrentDirectoryA(dirname) )
    return 0;
  else
    return GetLastError();
}

/*
==============
indyfs_dir_copy_tree
==============
*/
int indyfs_dir_copy_tree(const char *src, const char *dst)
{
  __int64 v2; 
  __int64 v3; 
  __int64 userData[5]; 

  v2 = -1i64;
  userData[0] = (__int64)dst;
  v3 = -1i64;
  do
    ++v3;
  while ( dst[v3] );
  userData[1] = v3;
  do
    ++v2;
  while ( src[v2] );
  userData[2] = v2;
  return indyfs_dir_walk(src, (int (__fastcall *)(void *, const char *, bool))dir_copy_cb, userData, 1);
}

/*
==============
indyfs_dir_delete
==============
*/
DWORD indyfs_dir_delete(const char *dirname)
{
  if ( RemoveDirectoryA(dirname) )
    return 0;
  else
    return GetLastError();
}

/*
==============
indyfs_dir_delete_recursive
==============
*/
int indyfs_dir_delete_recursive(const char *dirname)
{
  return indyfs_dir_walk(dirname, (int (__fastcall *)(void *, const char *, bool))dir_delete_cb, NULL, 0);
}

/*
==============
indyfs_dir_exists
==============
*/
bool indyfs_dir_exists(const char *dirname)
{
  struct _stat64i32 v2; 

  memset(&v2, 0, sizeof(v2));
  return !_stat64i32(dirname, &v2) && (v2.st_mode & 0x4000) != 0;
}

/*
==============
indyfs_dir_mkdir
==============
*/
DWORD indyfs_dir_mkdir(const char *dirname)
{
  if ( CreateDirectoryA(dirname, NULL) )
    return 0;
  else
    return GetLastError();
}

/*
==============
indyfs_dir_mkdir_recursive
==============
*/
DWORD indyfs_dir_mkdir_recursive(const char *dirname)
{
  char *v2; 
  char *v3; 
  char *i; 
  DWORD LastError; 
  DWORD v6; 
  char resolved; 
  char v8; 
  char v9; 
  char v10; 

  if ( !indyfs_path_canonical(dirname, &resolved) )
    return -1;
  if ( resolved == 47 )
  {
    v2 = &v9;
    if ( v8 != 47 )
      v2 = &v8;
  }
  else
  {
    if ( (unsigned __int8)(resolved - 65) > 0x19u && (unsigned __int8)(resolved - 97) > 0x19u || v8 != 58 || v9 != 47 )
    {
      indyfs_log_message(Error, "indyfs_dir_mkdir_recursive - Couldn't find the location of the root slash - %s", &resolved);
      return -1;
    }
    v2 = &v10;
  }
  v3 = v2 + 1;
  for ( i = &resolved + strnlen(&resolved, 0x104ui64); v3 < i; ++v3 )
  {
    if ( *v3 == 47 )
    {
      *v3 = 0;
      if ( !CreateDirectoryA(&resolved, NULL) )
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError )
        {
          if ( LastError != 183 )
          {
            indyfs_log_message(Error, "indyfs_dir_mkdir_recursive - Failed to create directory `%s`", &resolved);
            return v6;
          }
        }
      }
      *v3 = 47;
    }
  }
  if ( CreateDirectoryA(&resolved, NULL) )
    return 0;
  else
    return GetLastError();
}

/*
==============
indyfs_dir_walk
==============
*/
__int64 indyfs_dir_walk(const char *name, int (*cb)(void *, const char *, bool), void *userData, bool folderCallbackBeforeContents)
{
  DWORD FileAttributesA; 
  DWORD LastError; 
  __int64 result; 
  HANDLE FirstFileA; 
  DWORD v12; 
  _BOOL8 v13; 
  int v14; 
  unsigned int v15; 
  DWORD v16; 
  _WIN32_FIND_DATAA FindFileData; 
  char _Buffer[259]; 
  char v19; 

  j_snprintf(_Buffer, 0x104ui64, "%s/*", name);
  v19 = 0;
  FileAttributesA = GetFileAttributesA(name);
  if ( FileAttributesA == -1 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Failed to get attributes for directory in walk of %s due to error %u", _Buffer, LastError);
    return 0xFFFFFFFFi64;
  }
  if ( (FileAttributesA & 0x10) == 0 )
  {
    indyfs_log_message(Error, "Failed to walk %s as it is not a directory", _Buffer);
    return 0xFFFFFFFFi64;
  }
  if ( !folderCallbackBeforeContents || (result = ((__int64 (__fastcall *)(void *, const char *, _QWORD))cb)(userData, name, 0i64), !(_DWORD)result) )
  {
    FirstFileA = FindFirstFileA(_Buffer, &FindFileData);
    if ( FirstFileA == (HANDLE)-1i64 )
    {
      v12 = GetLastError();
      indyfs_log_message(Error, "Failed to open directory in walk of %s due to error %u", _Buffer, v12);
      return 0xFFFFFFFFi64;
    }
    while ( 1 )
    {
      if ( (FindFileData.cFileName[0] != asc_143D6343C[0] || FindFileData.cFileName[1] != asc_143D6343C[1]) && (FindFileData.cFileName[0] != asc_144164040[0] || FindFileData.cFileName[1] != asc_144164040[1] || FindFileData.cFileName[2] != asc_144164040[2]) )
      {
        j_snprintf(_Buffer, 0x104ui64, "%s/%s", name, FindFileData.cFileName);
        v19 = 0;
        if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
        {
          v14 = indyfs_dir_walk(_Buffer, cb, userData, folderCallbackBeforeContents);
        }
        else
        {
          LOBYTE(v13) = 1;
          v14 = cb(userData, _Buffer, v13);
        }
        v15 = v14;
        if ( v14 )
          break;
      }
      if ( !FindNextFileA(FirstFileA, &FindFileData) )
      {
        if ( FindClose(FirstFileA) )
        {
          if ( folderCallbackBeforeContents )
            return 0i64;
          else
            return ((__int64 (__fastcall *)(void *, const char *, _QWORD))cb)(userData, name, 0i64);
        }
LABEL_24:
        v16 = GetLastError();
        indyfs_log_message(Error, "Failed to close file handle in walk of %s due to error %u", name, v16);
        return 0xFFFFFFFFi64;
      }
    }
    if ( FindClose(FirstFileA) )
      return v15;
    goto LABEL_24;
  }
  return result;
}

