/*
==============
indyfs_path_to_win
==============
*/

const char *__fastcall indyfs_path_to_win(char *buffer)
{
  return ?indyfs_path_to_win@@YAPEBDPEAD@Z(buffer);
}

/*
==============
indyfs_path_cwd
==============
*/

const char *__fastcall indyfs_path_cwd(char *buffer, unsigned __int64 len)
{
  return ?indyfs_path_cwd@@YAPEBDPEAD_K@Z(buffer, len);
}

/*
==============
indyfs_path_clean
==============
*/

const char *__fastcall indyfs_path_clean(const char *path, char *resolved)
{
  return ?indyfs_path_clean@@YAPEBDPEBDQEAD@Z(path, resolved);
}

/*
==============
indyfs_path_to_unix
==============
*/

const char *__fastcall indyfs_path_to_unix(char *buffer)
{
  return ?indyfs_path_to_unix@@YAPEBDPEAD@Z(buffer);
}

/*
==============
indyfs_path_is_absolute
==============
*/

bool __fastcall indyfs_path_is_absolute(const char *path)
{
  return ?indyfs_path_is_absolute@@YA_NPEBD@Z(path);
}

/*
==============
indyfs_path_parent
==============
*/

const char *__fastcall indyfs_path_parent(const char *path, char *parent)
{
  return ?indyfs_path_parent@@YAPEBDPEBDQEAD@Z(path, parent);
}

/*
==============
indyfs_path_canonical
==============
*/

const char *__fastcall indyfs_path_canonical(const char *path, char *resolved)
{
  return ?indyfs_path_canonical@@YAPEBDPEBDQEAD@Z(path, resolved);
}

/*
==============
indyfs_path_canonical
==============
*/
const char *indyfs_path_canonical(const char *path, char *resolved)
{
  char *v3; 
  char v4; 
  char v5; 
  const char *v7; 
  char Buffer[272]; 

  v3 = resolved;
  v4 = *path;
  if ( v4 == 47 || v4 == 92 || ((unsigned __int8)(v4 - 65) <= 0x19u || (unsigned __int8)(v4 - 97) <= 0x19u) && path[1] == 58 && ((v5 = path[2], v5 == 47) || v5 == 92) )
  {
    v7 = path;
  }
  else
  {
    if ( !GetCurrentDirectoryA(0x104u, Buffer) )
    {
      indyfs_log_message(Error, "indyfs_path_canonical - Failed to get CWD");
      return 0i64;
    }
    if ( indyfs_strlcat(Buffer, "/", 0x104ui64) >= 0x104 || indyfs_strlcat(Buffer, path, 0x104ui64) >= 0x104 )
    {
      indyfs_log_message(Error, "indyfs_path_canonical - Input path plus cwd is too long - %s", path);
      return 0i64;
    }
    resolved = v3;
    v7 = Buffer;
  }
  return indyfs_path_clean(v7, resolved);
}

/*
==============
indyfs_path_clean
==============
*/
char *indyfs_path_clean(const char *path, char *resolved)
{
  unsigned __int64 v4; 
  const char *v5; 
  char v6; 
  char *v7; 
  const char *v8; 
  __int64 v9; 
  char v10; 
  unsigned __int64 v12; 
  bool v14; 
  unsigned __int64 v15; 
  char v16; 
  size_t v17; 
  size_t v18; 
  unsigned __int64 v19; 
  char v20; 
  char v21; 
  char v22; 
  char v23; 
  char v24; 
  unsigned __int64 v25; 
  char *v28; 
  char v36; 
  char dest[2]; 

  v4 = indyfs_path_volumename_len(path);
  v5 = &path[v4];
  v6 = path[v4];
  if ( !v6 )
  {
    v7 = resolved;
    v8 = path;
    v9 = 259i64;
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 == 92 )
        v10 = 47;
      *v7 = v10;
      if ( !*v8 )
        break;
      ++v8;
      ++v7;
      if ( !--v9 )
      {
        *v7 = 0;
        while ( *v8++ )
          ;
        break;
      }
    }
    v12 = v8 - path;
    if ( v12 < 0x104 )
    {
      if ( v4 > 1 && path[1] != 58 )
        return resolved;
      if ( v12 + 1 < 0x104 )
      {
        *(_WORD *)&resolved[v12] = 46;
        return resolved;
      }
    }
    goto LABEL_74;
  }
  v14 = v6 == 47 || v6 == 92;
  v15 = -1i64;
  do
    ++v15;
  while ( v5[v15] );
  if ( indyfs_strlcpy(dest, v5, 0x104ui64) >= 0x104 )
    goto LABEL_74;
  v16 = dest[0];
  v17 = v14;
  if ( v14 )
    v16 = 47;
  v18 = v14;
  dest[0] = v16;
  if ( v14 < v15 )
  {
    v19 = v14;
    do
    {
      v20 = v5[v19];
      if ( v20 == 47 || v20 == 92 )
      {
        ++v19;
      }
      else
      {
        if ( v20 != 46 )
          goto LABEL_48;
        if ( v19 + 1 == v15 || (v21 = v5[v19 + 1], v21 == 47) || v21 == 92 )
        {
          ++v19;
        }
        else
        {
          if ( v21 != 46 || v19 + 2 != v15 && (v22 = v5[v19 + 2], v22 != 47) && v22 != 92 )
          {
LABEL_48:
            if ( v14 )
            {
              if ( v18 == 1 )
                goto LABEL_53;
LABEL_52:
              dest[v18++] = 47;
            }
            else if ( v18 )
            {
              goto LABEL_52;
            }
LABEL_53:
            if ( v19 >= v15 )
              break;
            while ( 1 )
            {
              v24 = v5[v19];
              if ( v24 == 47 || v24 == 92 )
                goto LABEL_59;
              dest[v18] = v24;
              ++v19;
              ++v18;
              if ( v19 >= v15 )
                goto LABEL_60;
            }
          }
          v19 += 2i64;
          if ( v18 <= v17 )
          {
            if ( !v14 )
            {
              if ( v18 )
                dest[v18++] = 47;
              *(_WORD *)&dest[v18] = 11822;
              v18 += 2i64;
              v17 = v18;
            }
          }
          else if ( --v18 > v17 )
          {
            do
            {
              v23 = dest[v18];
              if ( v23 == 47 )
                break;
              if ( v23 == 92 )
                break;
              --v18;
            }
            while ( v18 > v17 );
          }
        }
      }
LABEL_59:
      ;
    }
    while ( v19 < v15 );
  }
LABEL_60:
  if ( !v18 )
  {
    dest[0] = 46;
    v18 = 1i64;
  }
  if ( v18 + v4 >= 0x104 )
  {
LABEL_74:
    indyfs_log_message(Error, "indyfs_path_clean - Input path is too long - %s", path);
    return 0i64;
  }
  v25 = 0i64;
  if ( v4 )
  {
    if ( v4 >= 0x10 && (resolved > &path[v4 - 1] || &resolved[v4 - 1] < path) )
    {
      _XMM6 = _xmm;
      _XMM7 = _xmm;
      v28 = resolved;
      do
      {
        __asm
        {
          vpcmpeqb xmm4, xmm6, xmmword ptr [r8+rax]
          vpandn  xmm1, xmm4, xmmword ptr [rax]
          vpandn  xmm0, xmm4, xmmword ptr [r8+rax]
          vpand   xmm2, xmm7, xmm4
          vpor    xmm2, xmm2, xmm1
          vpand   xmm3, xmm2, xmm4
          vpor    xmm1, xmm3, xmm0
        }
        v25 += 16i64;
        *(_OWORD *)v28 = _XMM1;
        v28 += 16;
      }
      while ( v25 < (v4 & 0xFFFFFFFFFFFFFFF0ui64) );
    }
    for ( ; v25 < v4; ++v25 )
    {
      v36 = path[v25];
      if ( v36 == 92 )
        v36 = 47;
      resolved[v25] = v36;
    }
  }
  memcpy_0(&resolved[v4], dest, v18);
  resolved[v18 + v4] = 0;
  return resolved;
}

/*
==============
indyfs_path_cwd
==============
*/
char *indyfs_path_cwd(char *buffer, unsigned __int64 len)
{
  char *v2; 

  v2 = buffer;
  if ( !GetCurrentDirectoryA(len, buffer) )
    return 0i64;
  return v2;
}

/*
==============
indyfs_path_is_absolute
==============
*/
bool indyfs_path_is_absolute(const char *path)
{
  char v1; 
  char v2; 
  bool result; 

  v1 = *path;
  result = 1;
  if ( *path != 47 && v1 != 92 )
  {
    if ( (unsigned __int8)(v1 - 65) > 0x19u && (unsigned __int8)(v1 - 97) > 0x19u )
      return 0;
    if ( path[1] != 58 )
      return 0;
    v2 = path[2];
    if ( v2 != 47 && v2 != 92 )
      return 0;
  }
  return result;
}

/*
==============
indyfs_path_parent
==============
*/
char *indyfs_path_parent(const char *path, char *parent)
{
  __int64 v4; 
  __int64 v5; 
  __int64 i; 
  char v7; 
  size_t v8; 
  __int64 v9; 
  __int64 v11; 
  char *v13; 
  char v21; 
  __int64 v22; 
  char *v24; 
  char v32; 
  char resolved[272]; 
  char patha[272]; 

  v4 = indyfs_path_volumename_len(path);
  v5 = -1i64;
  do
    ++v5;
  while ( path[v5] );
  for ( i = v5 - 1; i >= v4; --i )
  {
    v7 = path[i];
    if ( v7 == 47 )
      break;
    if ( v7 == 92 )
      break;
  }
  v8 = i - v4 + 1;
  memcpy_0(patha, &path[v4], v8);
  if ( v8 >= 0x104 )
  {
    j___report_rangecheckfailure(v9);
    JUMPOUT(0x143886378i64);
  }
  patha[v8] = 0;
  if ( !indyfs_path_clean(patha, resolved) )
  {
    indyfs_log_message(Error, "indyfs_path_parent - Failed to clean parent of path - %s", path);
    return 0i64;
  }
  if ( resolved[0] != 46 || resolved[1] || v4 <= 2 )
  {
    v22 = 0i64;
    if ( v4 > 0 )
    {
      if ( (unsigned __int64)v4 >= 0x10 && (parent > &path[v4 - 1] || &parent[v4 - 1] < path) )
      {
        _XMM6 = _xmm;
        v24 = parent;
        do
        {
          __asm
          {
            vpcmpeqb xmm4, xmm6, xmmword ptr [rax+r8]
            vpandn  xmm2, xmm4, xmmword ptr [rax]
            vpandn  xmm0, xmm4, xmmword ptr [rax+r8]
            vpand   xmm1, xmm4, xmm7
            vpor    xmm2, xmm2, xmm1
            vpand   xmm3, xmm2, xmm4
            vpor    xmm1, xmm3, xmm0
          }
          v22 += 16i64;
          *(_OWORD *)v24 = _XMM1;
          v24 += 16;
        }
        while ( v22 < v4 - v4 % 16 );
      }
      for ( ; v22 < v4; ++v22 )
      {
        v32 = path[v22];
        if ( v32 == 92 )
          v32 = 47;
        parent[v22] = v32;
      }
    }
    if ( indyfs_strlcpy(&parent[v4], resolved, 0x104ui64) >= 0x104 )
    {
      indyfs_log_message(Error, "indyfs_path_parent - Input path is too long - %s", path);
      return 0i64;
    }
  }
  else
  {
    v11 = 0i64;
    if ( (unsigned __int64)v4 >= 0x10 && (parent > &path[v4 - 1] || &parent[v4 - 1] < path) )
    {
      _XMM6 = _xmm;
      v13 = parent;
      do
      {
        __asm
        {
          vpcmpeqb xmm4, xmm6, xmmword ptr [r8+rax]
          vpandn  xmm1, xmm4, xmmword ptr [rax]
          vpandn  xmm0, xmm4, xmmword ptr [r8+rax]
          vpand   xmm2, xmm4, xmm7
          vpor    xmm2, xmm2, xmm1
          vpand   xmm3, xmm2, xmm4
          vpor    xmm1, xmm3, xmm0
        }
        v11 += 16i64;
        *(_OWORD *)v13 = _XMM1;
        v13 += 16;
      }
      while ( v11 < v4 - v4 % 16 );
    }
    for ( ; v11 < v4; ++v11 )
    {
      v21 = path[v11];
      if ( v21 == 92 )
        v21 = 47;
      parent[v11] = v21;
    }
    parent[v4] = 0;
  }
  return parent;
}

/*
==============
indyfs_path_to_unix
==============
*/
char *indyfs_path_to_unix(char *buffer)
{
  char v1; 
  char *result; 

  v1 = *buffer;
  result = buffer;
  if ( *buffer )
  {
    do
    {
      if ( v1 == 92 )
        *result = 47;
      v1 = *++result;
    }
    while ( v1 );
    return buffer;
  }
  return result;
}

/*
==============
indyfs_path_to_win
==============
*/
char *indyfs_path_to_win(char *buffer)
{
  char v1; 
  char *result; 

  v1 = *buffer;
  result = buffer;
  if ( *buffer )
  {
    do
    {
      if ( v1 == 47 )
        *result = 92;
      v1 = *++result;
    }
    while ( v1 );
    return buffer;
  }
  return result;
}

/*
==============
indyfs_path_volumename_len
==============
*/
unsigned __int64 indyfs_path_volumename_len(const char *path)
{
  unsigned __int64 v2; 
  char v3; 
  char v4; 
  unsigned __int64 result; 
  char v6; 
  unsigned __int64 i; 
  char v8; 
  char v9; 
  char v10; 

  v2 = -1i64;
  do
    ++v2;
  while ( path[v2] );
  if ( v2 >= 2 )
  {
    v3 = path[1];
    v4 = *path;
    if ( v3 == 58 && ((unsigned __int8)(v4 - 97) <= 0x19u || (unsigned __int8)(v4 - 65) <= 0x19u) )
      return 2i64;
    if ( v2 >= 5 && (v4 == 47 || v4 == 92) && (v3 == 47 || v3 == 92) )
    {
      v6 = path[2];
      if ( v6 != 47 && v6 != 92 && v6 != 46 )
      {
        for ( i = 3i64; i < v2 - 1; ++i )
        {
          v8 = path[i];
          if ( v8 == 47 || v8 == 92 )
          {
            v9 = path[i + 1];
            result = i + 1;
            if ( v9 == 47 || v9 == 92 || v9 == 46 )
              return 0i64;
            for ( ; result < v2; ++result )
            {
              v10 = path[result];
              if ( v10 == 47 )
                break;
              if ( v10 == 92 )
                break;
            }
            return result;
          }
        }
      }
    }
  }
  return 0i64;
}

