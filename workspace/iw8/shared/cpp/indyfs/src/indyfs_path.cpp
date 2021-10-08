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
  unsigned __int64 v6; 
  const char *v7; 
  char v8; 
  char *v9; 
  const char *v10; 
  __int64 v11; 
  char v12; 
  unsigned __int64 v14; 
  bool v16; 
  unsigned __int64 v17; 
  char v18; 
  size_t v19; 
  size_t v20; 
  unsigned __int64 v21; 
  char v22; 
  char v23; 
  char v24; 
  char v25; 
  char v26; 
  unsigned __int64 v27; 
  char v40; 
  char dest[2]; 

  v6 = indyfs_path_volumename_len(path);
  v7 = &path[v6];
  v8 = path[v6];
  if ( !v8 )
  {
    v9 = resolved;
    v10 = path;
    v11 = 259i64;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == 92 )
        v12 = 47;
      *v9 = v12;
      if ( !*v10 )
        break;
      ++v10;
      ++v9;
      if ( !--v11 )
      {
        *v9 = 0;
        while ( *v10++ )
          ;
        break;
      }
    }
    v14 = v10 - path;
    if ( v14 < 0x104 )
    {
      if ( v6 > 1 && path[1] != 58 )
        return resolved;
      if ( v14 + 1 < 0x104 )
      {
        *(_WORD *)&resolved[v14] = 46;
        return resolved;
      }
    }
    goto LABEL_75;
  }
  v16 = v8 == 47 || v8 == 92;
  v17 = -1i64;
  do
    ++v17;
  while ( v7[v17] );
  if ( indyfs_strlcpy(dest, v7, 0x104ui64) >= 0x104 )
    goto LABEL_75;
  v18 = dest[0];
  v19 = v16;
  if ( v16 )
    v18 = 47;
  v20 = v16;
  dest[0] = v18;
  if ( v16 < v17 )
  {
    v21 = v16;
    do
    {
      v22 = v7[v21];
      if ( v22 == 47 || v22 == 92 )
      {
        ++v21;
      }
      else
      {
        if ( v22 != 46 )
          goto LABEL_48;
        if ( v21 + 1 == v17 || (v23 = v7[v21 + 1], v23 == 47) || v23 == 92 )
        {
          ++v21;
        }
        else
        {
          if ( v23 != 46 || v21 + 2 != v17 && (v24 = v7[v21 + 2], v24 != 47) && v24 != 92 )
          {
LABEL_48:
            if ( v16 )
            {
              if ( v20 == 1 )
                goto LABEL_53;
LABEL_52:
              dest[v20++] = 47;
            }
            else if ( v20 )
            {
              goto LABEL_52;
            }
LABEL_53:
            if ( v21 >= v17 )
              break;
            while ( 1 )
            {
              v26 = v7[v21];
              if ( v26 == 47 || v26 == 92 )
                goto LABEL_59;
              dest[v20] = v26;
              ++v21;
              ++v20;
              if ( v21 >= v17 )
                goto LABEL_60;
            }
          }
          v21 += 2i64;
          if ( v20 <= v19 )
          {
            if ( !v16 )
            {
              if ( v20 )
                dest[v20++] = 47;
              *(_WORD *)&dest[v20] = 11822;
              v20 += 2i64;
              v19 = v20;
            }
          }
          else if ( --v20 > v19 )
          {
            do
            {
              v25 = dest[v20];
              if ( v25 == 47 )
                break;
              if ( v25 == 92 )
                break;
              --v20;
            }
            while ( v20 > v19 );
          }
        }
      }
LABEL_59:
      ;
    }
    while ( v21 < v17 );
  }
LABEL_60:
  if ( !v20 )
  {
    dest[0] = 46;
    v20 = 1i64;
  }
  if ( v20 + v6 >= 0x104 )
  {
LABEL_75:
    indyfs_log_message(Error, "indyfs_path_clean - Input path is too long - %s", path);
    return 0i64;
  }
  v27 = 0i64;
  if ( v6 )
  {
    if ( v6 >= 0x10 && (resolved > &path[v6 - 1] || &resolved[v6 - 1] < path) )
    {
      __asm
      {
        vmovaps [rsp+188h+var_38], xmm6
        vmovaps [rsp+188h+var_48], xmm7
        vmovdqu xmm6, cs:__xmm@5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c
        vmovdqu xmm7, cs:__xmm@2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f
      }
      _RAX = resolved;
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
        v27 += 16i64;
        __asm { vmovdqu xmmword ptr [rax], xmm1 }
        _RAX += 16;
      }
      while ( v27 < (v6 & 0xFFFFFFFFFFFFFFF0ui64) );
      __asm
      {
        vmovaps xmm7, [rsp+188h+var_48]
        vmovaps xmm6, [rsp+188h+var_38]
      }
    }
    for ( ; v27 < v6; ++v27 )
    {
      v40 = path[v27];
      if ( v40 == 92 )
        v40 = 47;
      resolved[v27] = v40;
    }
  }
  memcpy_0(&resolved[v6], dest, v20);
  resolved[v20 + v6] = 0;
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
  __int64 v6; 
  __int64 v7; 
  __int64 i; 
  char v9; 
  size_t v10; 
  __int64 v11; 
  char *result; 
  __int64 v13; 
  char v24; 
  __int64 v27; 
  char v38; 
  char resolved[272]; 
  char patha[272]; 

  v6 = indyfs_path_volumename_len(path);
  v7 = -1i64;
  do
    ++v7;
  while ( path[v7] );
  for ( i = v7 - 1; i >= v6; --i )
  {
    v9 = path[i];
    if ( v9 == 47 )
      break;
    if ( v9 == 92 )
      break;
  }
  v10 = i - v6 + 1;
  memcpy_0(patha, &path[v6], v10);
  if ( v10 >= 0x104 )
  {
    j___report_rangecheckfailure(v11);
    JUMPOUT(0x143886378i64);
  }
  patha[v10] = 0;
  if ( !indyfs_path_clean(patha, resolved) )
  {
    indyfs_log_message(Error, "indyfs_path_parent - Failed to clean parent of path - %s", path);
    return 0i64;
  }
  __asm
  {
    vmovaps [rsp+288h+var_28], xmm6
    vmovaps [rsp+288h+var_38], xmm7
  }
  if ( resolved[0] != 46 || resolved[1] || v6 <= 2 )
  {
    v27 = 0i64;
    if ( v6 > 0 )
    {
      if ( (unsigned __int64)v6 >= 0x10 && (parent > &path[v6 - 1] || &parent[v6 - 1] < path) )
      {
        __asm
        {
          vmovdqu xmm6, cs:__xmm@5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c
          vmovdqu xmm7, cs:__xmm@2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f
        }
        _RAX = parent;
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
          v27 += 16i64;
          __asm { vmovdqu xmmword ptr [rax], xmm1 }
          _RAX += 16;
        }
        while ( v27 < v6 - v6 % 16 );
      }
      for ( ; v27 < v6; ++v27 )
      {
        v38 = path[v27];
        if ( v38 == 92 )
          v38 = 47;
        parent[v27] = v38;
      }
    }
    if ( indyfs_strlcpy(&parent[v6], resolved, 0x104ui64) >= 0x104 )
    {
      indyfs_log_message(Error, "indyfs_path_parent - Input path is too long - %s", path);
      result = NULL;
      goto LABEL_24;
    }
  }
  else
  {
    v13 = 0i64;
    if ( (unsigned __int64)v6 >= 0x10 && (parent > &path[v6 - 1] || &parent[v6 - 1] < path) )
    {
      __asm
      {
        vmovdqu xmm6, cs:__xmm@5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c
        vmovdqu xmm7, cs:__xmm@2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f2f
      }
      _RAX = parent;
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
        v13 += 16i64;
        __asm { vmovdqu xmmword ptr [rax], xmm1 }
        _RAX += 16;
      }
      while ( v13 < v6 - v6 % 16 );
    }
    for ( ; v13 < v6; ++v13 )
    {
      v24 = path[v13];
      if ( v24 == 92 )
        v24 = 47;
      parent[v13] = v24;
    }
    parent[v6] = 0;
  }
  result = parent;
LABEL_24:
  __asm
  {
    vmovaps xmm6, [rsp+288h+var_28]
    vmovaps xmm7, [rsp+288h+var_38]
  }
  return result;
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

