/*
==============
BB_Copy
==============
*/
void BB_Copy(bb_msg_t *msg, const void *_data, unsigned __int64 len)
{
  unsigned __int64 cursize; 
  int v7; 
  unsigned __int8 *data; 
  __int64 v9; 

  if ( !msg->pppHashTable )
  {
    if ( msg->overflow || (cursize = msg->cursize, cursize + len > msg->maxsize) )
    {
      msg->overflow = 1;
    }
    else
    {
      if ( cursize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)cursize, "unsigned", msg->cursize) )
        __debugbreak();
      v7 = 0;
      if ( len )
      {
        data = msg->data;
        do
        {
          v9 = (unsigned int)(cursize + v7++);
          data[v9] = *(_BYTE *)_data;
          _data = (char *)_data + 1;
        }
        while ( v7 < len );
      }
      msg->cursize += len;
    }
  }
}

/*
==============
BB_WriteVarUInt32
==============
*/
void BB_WriteVarUInt32(bb_msg_t *msg, unsigned int c)
{
  unsigned int v2; 
  unsigned __int64 v4; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 
  char v8; 
  unsigned int v9; 
  char _data[3]; 
  char v11; 
  char v12; 

  v2 = __lzcnt(c);
  if ( v2 < 0x19 )
  {
    v5 = c >> 7;
    if ( v2 < 0x12 )
    {
      v6 = v5 | 0x80;
      v7 = c >> 14;
      if ( v2 < 0xB )
      {
        v8 = v7 | 0x80;
        v9 = c >> 21;
        if ( v2 < 4 )
        {
          v11 = v9 | 0x80;
          v4 = 5i64;
          v12 = c >> 28;
        }
        else
        {
          v11 = v9 & 0x7F;
          v4 = 4i64;
        }
      }
      else
      {
        v8 = v7 & 0x7F;
        v4 = 3i64;
      }
      _data[2] = v8;
    }
    else
    {
      v6 = v5 & 0x7F;
      v4 = 2i64;
    }
    _data[1] = v6;
    _data[0] = c | 0x80;
  }
  else
  {
    v4 = 1i64;
    _data[0] = c & 0x7F;
  }
  BB_Copy(msg, _data, v4);
}

/*
==============
BB_WriteVarUInt64
==============
*/
void BB_WriteVarUInt64(bb_msg_t *msg, unsigned __int64 c)
{
  unsigned int v2; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  char v12; 
  unsigned __int64 v13; 
  char _data; 
  char v15; 
  char v16; 
  char v17; 
  char v18; 
  char v19; 
  char v20; 
  char v21; 
  char v22; 
  bool v23; 

  v2 = __lzcnt(c);
  if ( msg->overflow || msg->cursize + 10 > msg->maxsize )
  {
    msg->overflow = 1;
  }
  else if ( v2 < 0x39 )
  {
    v5 = c >> 7;
    _data = c | 0x80;
    if ( v2 < 0x32 )
    {
      v6 = c >> 14;
      v15 = v5 | 0x80;
      if ( v2 < 0x2B )
      {
        v7 = c >> 21;
        v16 = v6 | 0x80;
        if ( v2 < 0x24 )
        {
          v8 = c >> 28;
          v17 = v7 | 0x80;
          if ( v2 < 0x1D )
          {
            v18 = v8 | 0x80;
            v9 = c >> 35;
            if ( v2 < 0x16 )
            {
              v19 = v9 | 0x80;
              v10 = c >> 42;
              if ( v2 < 0xF )
              {
                v20 = v10 | 0x80;
                v11 = c >> 49;
                if ( v2 < 8 )
                {
                  v21 = v11 | 0x80;
                  if ( v2 )
                  {
                    v12 = HIBYTE(c) & 0x7F;
                    v13 = 9i64;
                  }
                  else
                  {
                    v12 = HIBYTE(c) | 0x80;
                    v13 = 10i64;
                    v23 = (c & 0x8000000000000000ui64) != 0i64;
                  }
                  v22 = v12;
                  BB_Copy(msg, &_data, v13);
                }
                else
                {
                  v21 = v11 & 0x7F;
                  BB_Copy(msg, &_data, 8ui64);
                }
              }
              else
              {
                v20 = v10 & 0x7F;
                BB_Copy(msg, &_data, 7ui64);
              }
            }
            else
            {
              v19 = v9 & 0x7F;
              BB_Copy(msg, &_data, 6ui64);
            }
          }
          else
          {
            v18 = v8 & 0x7F;
            BB_Copy(msg, &_data, 5ui64);
          }
        }
        else
        {
          v17 = v7 & 0x7F;
          BB_Copy(msg, &_data, 4ui64);
        }
      }
      else
      {
        v16 = v6 & 0x7F;
        BB_Copy(msg, &_data, 3ui64);
      }
    }
    else
    {
      v15 = v5 & 0x7F;
      BB_Copy(msg, &_data, 2ui64);
    }
  }
  else
  {
    _data = c & 0x7F;
    BB_Copy(msg, &_data, 1ui64);
  }
}

/*
==============
BB_WriteFloat16
==============
*/
void BB_WriteFloat16(bb_msg_t *msg, float f)
{
  unsigned __int64 cursize; 
  unsigned int v4; 
  unsigned __int8 *v5; 
  unsigned int i; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  float v10; 

  v10 = f;
  if ( !msg->pppHashTable )
  {
    if ( msg->overflow || (cursize = msg->cursize, cursize + 4 > msg->maxsize) )
    {
      msg->overflow = 1;
    }
    else
    {
      v4 = truncate_cast<unsigned int,unsigned __int64>(cursize);
      v5 = (unsigned __int8 *)&v10 + 1;
      for ( i = 0; i < 4; i += 4 )
      {
        v7 = *(v5 - 1);
        v8 = *v5;
        v5 += 4;
        msg->data[i + v4] = v7;
        msg->data[v4 + 1 + i] = v8;
        msg->data[v4 + 2 + i] = *(v5 - 3);
        v9 = v4 + i + 3;
        msg->data[v9] = *(v5 - 2);
      }
      msg->cursize += 4i64;
    }
  }
}

/*
==============
BB_WriteFloat32
==============
*/
void BB_WriteFloat32(bb_msg_t *msg, float f)
{
  unsigned __int64 cursize; 
  unsigned int v4; 
  unsigned __int8 *v5; 
  unsigned int i; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  float v10; 

  v10 = f;
  if ( !msg->pppHashTable )
  {
    if ( msg->overflow || (cursize = msg->cursize, cursize + 4 > msg->maxsize) )
    {
      msg->overflow = 1;
    }
    else
    {
      v4 = truncate_cast<unsigned int,unsigned __int64>(cursize);
      v5 = (unsigned __int8 *)&v10 + 1;
      for ( i = 0; i < 4; i += 4 )
      {
        v7 = *(v5 - 1);
        v8 = *v5;
        v5 += 4;
        msg->data[i + v4] = v7;
        msg->data[v4 + 1 + i] = v8;
        msg->data[v4 + 2 + i] = *(v5 - 3);
        v9 = v4 + i + 3;
        msg->data[v9] = *(v5 - 2);
      }
      msg->cursize += 4i64;
    }
  }
}

/*
==============
BB_WriteInt16
==============
*/
void BB_WriteInt16(bb_msg_t *msg, int c)
{
  bool v2; 
  unsigned __int64 cursize; 
  unsigned int v5; 
  unsigned __int8 *v6; 
  unsigned int i; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  __int16 v11; 

  v2 = msg->pppHashTable == NULL;
  v11 = c;
  if ( v2 )
  {
    if ( msg->overflow || (cursize = msg->cursize, cursize + 2 > msg->maxsize) )
    {
      msg->overflow = 1;
    }
    else
    {
      v5 = truncate_cast<unsigned int,unsigned __int64>(cursize);
      v6 = (unsigned __int8 *)&v11 + 1;
      for ( i = 0; i < 2; i += 2 )
      {
        v8 = *(v6 - 1);
        v9 = *v6;
        v6 += 2;
        msg->data[i + v5] = v8;
        v10 = v5 + i + 1;
        msg->data[v10] = v9;
      }
      msg->cursize += 2i64;
    }
  }
}

/*
==============
BB_WriteInt32
==============
*/
void BB_WriteInt32(bb_msg_t *msg, int c)
{
  unsigned __int64 cursize; 
  unsigned int v4; 
  unsigned __int8 *v5; 
  unsigned int i; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  int v10; 

  v10 = c;
  if ( !msg->pppHashTable )
  {
    if ( msg->overflow || (cursize = msg->cursize, cursize + 4 > msg->maxsize) )
    {
      msg->overflow = 1;
    }
    else
    {
      v4 = truncate_cast<unsigned int,unsigned __int64>(cursize);
      v5 = (unsigned __int8 *)&v10 + 1;
      for ( i = 0; i < 4; i += 4 )
      {
        v7 = *(v5 - 1);
        v8 = *v5;
        v5 += 4;
        msg->data[i + v4] = v7;
        msg->data[v4 + 1 + i] = v8;
        msg->data[v4 + 2 + i] = *(v5 - 3);
        v9 = v4 + i + 3;
        msg->data[v9] = *(v5 - 2);
      }
      msg->cursize += 4i64;
    }
  }
}

/*
==============
BB_WriteInt8
==============
*/
void BB_WriteInt8(bb_msg_t *msg, int c)
{
  bool v2; 
  unsigned __int64 cursize; 
  unsigned int v5; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  char v10; 

  v2 = msg->pppHashTable == NULL;
  v10 = c;
  if ( v2 )
  {
    if ( msg->overflow || (cursize = msg->cursize, cursize + 1 > msg->maxsize) )
    {
      msg->overflow = 1;
    }
    else
    {
      v5 = truncate_cast<unsigned int,unsigned __int64>(cursize);
      v6 = 0;
      v7 = (unsigned __int8 *)&v10;
      do
      {
        v8 = *v7;
        v9 = v6 + v5;
        ++v7;
        ++v6;
        msg->data[v9] = v8;
      }
      while ( !v6 );
      ++msg->cursize;
    }
  }
}

