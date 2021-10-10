/*
==============
system_alloc
==============
*/
void *system_alloc(void *allocator_data, unsigned __int64 size)
{
  return malloc(size);
}

/*
==============
system_free
==============
*/
void system_free(void *allocator_data, void *data)
{
  free(data);
}

/*
==============
field_is_zeroish
==============
*/
_BOOL8 field_is_zeroish(const ProtobufCFieldDescriptor *field, const void *member)
{
  _BOOL8 result; 

  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_SINT32:
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_UINT32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_BOOL:
    case PROTOBUF_C_TYPE_ENUM:
      result = *(_DWORD *)member == 0;
      break;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_SINT64:
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_UINT64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_BYTES:
    case PROTOBUF_C_TYPE_MESSAGE:
      result = *(_QWORD *)member == 0i64;
      break;
    case PROTOBUF_C_TYPE_FLOAT:
      if ( *(float *)member == 0.0 )
        goto LABEL_11;
      result = 0i64;
      break;
    case PROTOBUF_C_TYPE_DOUBLE:
      __asm { vxorpd  xmm0, xmm0, xmm0; jumptable 00000001435570FB case 11 }
      if ( *(double *)&_XMM0 == *(double *)member )
        goto LABEL_11;
      result = 0i64;
      break;
    case PROTOBUF_C_TYPE_STRING:
      if ( !*(_QWORD *)member || !**(_BYTE **)member )
        goto LABEL_11;
      result = 0i64;
      break;
    default:
LABEL_11:
      result = 1i64;
      break;
  }
  return result;
}

/*
==============
get_packed_payload_length
==============
*/
unsigned __int64 get_packed_payload_length(const ProtobufCFieldDescriptor *field, unsigned int count, const void *array)
{
  unsigned int v3; 
  unsigned __int64 result; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 

  v3 = 0;
  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      if ( count )
      {
        v5 = count;
        do
        {
          v6 = *(_DWORD *)array;
          if ( *(int *)array >= 0 )
          {
            if ( v6 >= 128 )
            {
              if ( v6 >= 0x4000 )
              {
                if ( v6 >= 0x200000 )
                  v7 = (v6 >= 0x10000000) + 4;
                else
                  v7 = 3;
              }
              else
              {
                v7 = 2;
              }
            }
            else
            {
              v7 = 1;
            }
          }
          else
          {
            v7 = 10;
          }
          v3 += v7;
          array = (char *)array + 4;
          --v5;
        }
        while ( v5 );
      }
      goto LABEL_16;
    case PROTOBUF_C_TYPE_SINT32:
      if ( !count )
        goto LABEL_16;
      do
      {
        v8 = sint32_size(*(_DWORD *)array);
        v10 = v8 + v9;
        array = (const void *)(v11 + 4);
      }
      while ( v12 != 1 );
      result = v10;
      break;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      return 4 * count;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      if ( !count )
        goto LABEL_16;
      do
      {
        v22 = uint64_size(*(_QWORD *)array);
        v24 = v22 + v23;
        array = (const void *)(v25 + 8);
      }
      while ( v26 != 1 );
      result = v24;
      break;
    case PROTOBUF_C_TYPE_SINT64:
      if ( !count )
        goto LABEL_16;
      do
      {
        v16 = ~(2i64 * *(_QWORD *)array);
        if ( *(__int64 *)array >= 0 )
          v16 = 2i64 * *(_QWORD *)array;
        v17 = uint64_size(v16);
        v19 = v17 + v18;
        array = (const void *)(v20 + 8);
      }
      while ( v21 != 1 );
      result = v19;
      break;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      return 8 * count;
    case PROTOBUF_C_TYPE_UINT32:
      if ( !count )
        goto LABEL_16;
      v13 = count;
      do
      {
        v14 = *(_DWORD *)array;
        if ( *(_DWORD *)array >= 0x80u )
        {
          if ( v14 >= 0x4000 )
          {
            if ( v14 >= 0x200000 )
              v15 = 5 - (v14 < 0x10000000);
            else
              v15 = 3;
          }
          else
          {
            v15 = 2;
          }
        }
        else
        {
          v15 = 1;
        }
        v3 += v15;
        array = (char *)array + 4;
        --v13;
      }
      while ( v13 );
      result = v3;
      break;
    case PROTOBUF_C_TYPE_BOOL:
      return count;
    default:
LABEL_16:
      result = v3;
      break;
  }
  return result;
}

/*
==============
int32_pack
==============
*/
unsigned __int64 int32_pack(int value, unsigned __int8 *out)
{
  if ( value >= 0 )
    return uint32_pack(value, out);
  *(_DWORD *)(out + 5) = -1;
  out[9] = 1;
  *out = value | 0x80;
  out[1] = (value >> 7) | 0x80;
  out[2] = (value >> 14) | 0x80;
  out[3] = (value >> 21) | 0x80;
  out[4] = (value >> 28) | 0x80;
  return 10i64;
}

/*
==============
int32_size
==============
*/
__int64 int32_size(int v)
{
  if ( v < 0 )
    return 10i64;
  if ( v < 128 )
    return 1i64;
  if ( v < 0x4000 )
    return 2i64;
  if ( v >= 0x200000 )
    return (v >= 0x10000000) + 4i64;
  return 3i64;
}

/*
==============
int_range_lookup
==============
*/
__int64 int_range_lookup(unsigned int n_ranges, const ProtobufCIntRange *ranges, int value)
{
  int v4; 
  __int64 v5; 
  int start_value; 
  unsigned int orig_index; 
  __int64 v8; 
  int v9; 
  unsigned int v10; 

  if ( n_ranges )
  {
    v4 = 0;
    while ( n_ranges > 1 )
    {
      v5 = (n_ranges >> 1) + v4;
      start_value = ranges[v5].start_value;
      if ( value >= start_value )
      {
        orig_index = ranges[(n_ranges >> 1) + v4].orig_index;
        v8 = (unsigned int)(v5 + 1);
        if ( value < (int)(start_value + ranges[v8].orig_index - orig_index) )
          return value + orig_index - start_value;
        n_ranges += v4 - v8;
        v4 = v8;
      }
      else
      {
        n_ranges >>= 1;
      }
    }
    if ( n_ranges )
    {
      v9 = ranges[v4].start_value;
      if ( v9 <= value )
      {
        v10 = ranges[v4].orig_index;
        if ( value < (int)(v9 + ranges[v4 + 1].orig_index - v10) )
          return value + v10 - v9;
      }
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
merge_messages
==============
*/
__int64 merge_messages(ProtobufCMessage *earlier_msg, ProtobufCMessage *latter_msg, ProtobufCAllocator *allocator)
{
  const ProtobufCMessageDescriptor *descriptor; 
  __int64 v4; 
  ProtobufCMessage *v7; 
  const ProtobufCFieldDescriptor *fields; 
  ProtobufCLabel label; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  _QWORD *v13; 
  __int64 v14; 
  const void **v15; 
  _QWORD *v16; 
  const void **v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  char *v21; 
  char *v22; 
  __int64 v23; 
  int *v24; 
  int *v25; 
  int v26; 
  __int64 v27; 
  char *v28; 
  __int64 v29; 
  char *v30; 
  bool v31; 
  __int64 v33; 
  __int64 v34; 
  size_t v35; 
  void *v36; 
  int v38; 
  const ProtobufCFieldDescriptor *v39; 

  descriptor = latter_msg->descriptor;
  v4 = 0i64;
  v38 = 0;
  v7 = earlier_msg;
  fields = latter_msg->descriptor->fields;
  v39 = fields;
  if ( descriptor->n_fields )
  {
    while ( 1 )
    {
      label = fields[v4].label;
      v10 = (__int64)&fields[v4];
      if ( label == PROTOBUF_C_LABEL_REPEATED )
      {
        v11 = *(unsigned int *)(v10 + 20);
        v12 = *(unsigned int *)(v10 + 24);
        v13 = (const ProtobufCMessageDescriptor **)((char *)&v7->descriptor + v11);
        v14 = *(__int64 *)((char *)&v7->descriptor + v11);
        v15 = (const void **)((char *)&v7->descriptor + v12);
        v16 = (const ProtobufCMessageDescriptor **)((char *)&latter_msg->descriptor + v11);
        v17 = (const void **)((char *)&latter_msg->descriptor + v12);
        if ( v14 )
        {
          if ( *v16 )
          {
            v20 = sizeof_elt_in_repeated_array((ProtobufCType)*(_DWORD *)(v10 + 16));
            v21 = (char *)allocator->alloc(allocator->allocator_data, v20 * (v19 + v18));
            v22 = v21;
            if ( !v21 )
              return 0i64;
            memcpy_0(v21, *v15, v20 * *v13);
            memcpy_0(&v22[v20 * *v13], *v17, *v16 * v20);
            if ( *v17 )
              ((void (__fastcall *)(void *))allocator->free)(allocator->allocator_data);
            if ( *v15 )
              ((void (__fastcall *)(void *))allocator->free)(allocator->allocator_data);
            LODWORD(v4) = v38;
            *v17 = v22;
            *v16 += *v13;
            *v13 = 0i64;
            *v15 = NULL;
          }
          else
          {
            *v16 = v14;
            *v17 = *v15;
            *v13 = 0i64;
            *v15 = NULL;
          }
        }
        goto LABEL_37;
      }
      if ( ((label - 1) & 0xFFFFFFFD) != 0 )
        goto LABEL_38;
      v23 = *(unsigned int *)(v10 + 20);
      v24 = (int *)((char *)v7 + v23);
      v25 = (int *)((char *)latter_msg + v23);
      if ( (*(_BYTE *)(v10 + 48) & 4) != 0 )
      {
        if ( *v25 )
          goto LABEL_38;
        v26 = int_range_lookup(descriptor->n_field_ranges, descriptor->field_ranges, *v24);
        if ( v26 < 0 )
          return 0i64;
        v10 = (__int64)&descriptor->fields[v26];
      }
      v27 = *(unsigned int *)(v10 + 24);
      v28 = (char *)v7 + v27;
      v29 = *(_QWORD *)(v10 + 40);
      v30 = (char *)latter_msg + v27;
      if ( *(_DWORD *)(v10 + 16) == 14 )
        break;
      if ( *(_DWORD *)(v10 + 16) == 15 )
      {
        v33 = *((_QWORD *)v28 + 1);
        v34 = *((_QWORD *)v30 + 1);
        if ( !v33 || v29 && v33 == *(_QWORD *)(v29 + 8) )
          goto LABEL_37;
        if ( !v34 )
          goto LABEL_35;
        if ( !v29 )
          goto LABEL_37;
        v31 = v34 == *(_QWORD *)(v29 + 8);
        goto LABEL_34;
      }
      if ( *(_DWORD *)(v10 + 16) != 16 )
      {
        if ( !*v24 )
          goto LABEL_37;
        v31 = *v25 == 0;
        goto LABEL_34;
      }
      if ( *(_QWORD *)v28 )
      {
        if ( *(_QWORD *)v30 )
        {
          if ( !merge_messages(*(ProtobufCMessage **)v28, *(ProtobufCMessage **)v30, allocator) )
            return 0i64;
          goto LABEL_37;
        }
LABEL_35:
        v35 = sizeof_elt_in_repeated_array((ProtobufCType)*(_DWORD *)(v10 + 16));
        memcpy_0(v36, v28, v35);
        memset_0(v28, 0, v35);
        if ( *(_DWORD *)(v10 + 20) )
        {
          *v25 = *v24;
          *v24 = 0;
        }
      }
LABEL_37:
      v7 = earlier_msg;
LABEL_38:
      descriptor = latter_msg->descriptor;
      v4 = (unsigned int)(v4 + 1);
      v38 = v4;
      if ( (unsigned int)v4 >= latter_msg->descriptor->n_fields )
        return 1i64;
      fields = v39;
    }
    if ( *(_QWORD *)v28 == v29 )
      goto LABEL_37;
    v31 = *(_QWORD *)v30 == v29;
LABEL_34:
    if ( v31 )
      goto LABEL_35;
    goto LABEL_37;
  }
  return 1i64;
}

/*
==============
pack_buffer_packed_payload
==============
*/
__int64 pack_buffer_packed_payload(const ProtobufCFieldDescriptor *field, unsigned int count, const void *array, ProtobufCBuffer *buffer)
{
  __int64 v4; 
  __int64 v5; 
  int v8; 
  unsigned int v9; 
  __int64 v11; 
  int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned __int8 v15; 
  char v16; 
  char v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned __int8 v23; 
  char v24; 
  char v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned __int8 v30; 
  char v31; 
  char v32; 
  unsigned __int64 v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned int v37; 
  unsigned __int8 v38; 
  char v39; 
  char v40; 
  __int64 v41; 
  unsigned int v42; 
  char v43; 
  unsigned int v44; 
  unsigned int v45; 
  char v46; 
  unsigned int v47; 
  __int64 v48; 
  unsigned __int8 v49; 
  __int64 v50; 
  __int64 v51; 
  unsigned __int64 v52; 
  __int64 v53; 
  unsigned __int8 out; 
  char v55; 
  char v56; 
  char v57; 
  char i; 
  int v59; 
  char v60; 

  v4 = 0i64;
  v5 = count;
  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      if ( count )
      {
        v11 = count;
        do
        {
          v12 = *(_DWORD *)array;
          if ( *(int *)array >= 0 )
          {
            v14 = 0;
            if ( (unsigned int)v12 >= 0x80 )
            {
              v14 = 1;
              v15 = v12 | 0x80;
              v12 = (unsigned int)v12 >> 7;
              out = v15;
              if ( (unsigned int)v12 >= 0x80 )
              {
                v14 = 2;
                v16 = v12 | 0x80;
                v12 = (unsigned int)v12 >> 7;
                v55 = v16;
                if ( (unsigned int)v12 >= 0x80 )
                {
                  v14 = 3;
                  v17 = v12 | 0x80;
                  v12 = (unsigned int)v12 >> 7;
                  v56 = v17;
                  if ( (unsigned int)v12 >= 0x80 )
                  {
                    v14 = 4;
                    v57 = v12 | 0x80;
                    v12 = (unsigned int)v12 >> 7;
                  }
                }
              }
            }
            v18 = v14;
            v13 = v14 + 1;
            *(&out + v18) = v12;
          }
          else
          {
            v59 = -1;
            v60 = 1;
            out = v12 | 0x80;
            v13 = 10i64;
            v55 = (v12 >> 7) | 0x80;
            v56 = (v12 >> 14) | 0x80;
            v57 = (v12 >> 21) | 0x80;
            i = (v12 >> 28) | 0x80;
          }
          v19 = (unsigned int)v13;
          buffer->append(buffer, v13, &out);
          v4 += v19;
          array = (char *)array + 4;
          --v11;
        }
        while ( v11 );
      }
      return v4;
    case PROTOBUF_C_TYPE_SINT32:
      if ( count )
      {
        v20 = count;
        do
        {
          v21 = ~(2 * *(_DWORD *)array);
          if ( *(int *)array >= 0 )
            v21 = 2 * *(_DWORD *)array;
          v22 = 0;
          if ( v21 >= 0x80 )
          {
            v22 = 1;
            v23 = v21 | 0x80;
            v21 >>= 7;
            out = v23;
            if ( v21 >= 0x80 )
            {
              v22 = 2;
              v24 = v21 | 0x80;
              v21 >>= 7;
              v55 = v24;
              if ( v21 >= 0x80 )
              {
                v22 = 3;
                v25 = v21 | 0x80;
                v21 >>= 7;
                v56 = v25;
                if ( v21 >= 0x80 )
                {
                  v22 = 4;
                  v57 = v21 | 0x80;
                  v21 >>= 7;
                }
              }
            }
          }
          *(&out + v22) = v21;
          v26 = v22 + 1;
          buffer->append(buffer, v26, &out);
          v4 += v26;
          array = (char *)array + 4;
          --v20;
        }
        while ( v20 );
      }
      return v4;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      v8 = 4;
      goto $no_packing_needed;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      if ( count )
      {
        v51 = count;
        do
        {
          v52 = (unsigned int)uint64_pack(*(_QWORD *)array, &out);
          buffer->append(buffer, v52, &out);
          v4 += v52;
          array = (char *)array + 8;
          --v51;
        }
        while ( v51 );
      }
      return v4;
    case PROTOBUF_C_TYPE_SINT64:
      if ( count )
      {
        v34 = count;
        do
        {
          v35 = ~(2i64 * *(_QWORD *)array);
          if ( *(__int64 *)array >= 0 )
            v35 = 2i64 * *(_QWORD *)array;
          v36 = HIDWORD(v35);
          if ( HIDWORD(v35) )
          {
            out = v35 | 0x80;
            v55 = ((unsigned int)v35 >> 7) | 0x80;
            v56 = ((unsigned int)v35 >> 14) | 0x80;
            v43 = ((unsigned int)v35 >> 21) | 0x80;
            v44 = (unsigned int)v35 >> 28;
            v57 = v43;
            if ( (unsigned int)v36 >= 8 )
            {
              v45 = 5;
              v46 = v36 | 0xF8;
              v47 = (unsigned int)v36 >> 3;
              for ( i = v44 | (16 * v46); v47 >= 0x80; *(&out + v48) = v49 )
              {
                v48 = v45;
                v49 = v47 | 0x80;
                v47 >>= 7;
                ++v45;
              }
              *(&out + v45) = v47;
              v42 = v45 + 1;
            }
            else
            {
              v42 = 5;
              i = v44 | (16 * v36);
            }
          }
          else
          {
            v37 = 0;
            if ( (unsigned int)v35 >= 0x80 )
            {
              v37 = 1;
              v38 = v35 | 0x80;
              LODWORD(v35) = (unsigned int)v35 >> 7;
              out = v38;
              if ( (unsigned int)v35 >= 0x80 )
              {
                v37 = 2;
                v39 = v35 | 0x80;
                LODWORD(v35) = (unsigned int)v35 >> 7;
                v55 = v39;
                if ( (unsigned int)v35 >= 0x80 )
                {
                  v37 = 3;
                  v40 = v35 | 0x80;
                  LODWORD(v35) = (unsigned int)v35 >> 7;
                  v56 = v40;
                  if ( (unsigned int)v35 >= 0x80 )
                  {
                    v37 = 4;
                    v57 = v35 | 0x80;
                    LODWORD(v35) = (unsigned int)v35 >> 7;
                  }
                }
              }
            }
            v41 = v37;
            v42 = v37 + 1;
            *(&out + v41) = v35;
          }
          v50 = v42;
          buffer->append(buffer, v42, &out);
          v4 += v50;
          array = (char *)array + 8;
          --v34;
        }
        while ( v34 );
      }
      return v4;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      v8 = 8;
$no_packing_needed:
      v9 = v8 * count;
      ((void (__fastcall *)(ProtobufCBuffer *, _QWORD))buffer->append)(buffer, v8 * count);
      return v9;
    case PROTOBUF_C_TYPE_UINT32:
      if ( count )
      {
        v27 = count;
        do
        {
          v28 = *(_DWORD *)array;
          v29 = 0;
          if ( *(_DWORD *)array >= 0x80u )
          {
            v29 = 1;
            v30 = v28 | 0x80;
            v28 >>= 7;
            out = v30;
            if ( v28 >= 0x80 )
            {
              v29 = 2;
              v31 = v28 | 0x80;
              v28 >>= 7;
              v55 = v31;
              if ( v28 >= 0x80 )
              {
                v29 = 3;
                v32 = v28 | 0x80;
                v28 >>= 7;
                v56 = v32;
                if ( v28 >= 0x80 )
                {
                  v29 = 4;
                  v57 = v28 | 0x80;
                  v28 >>= 7;
                }
              }
            }
          }
          *(&out + v29) = v28;
          v33 = v29 + 1;
          buffer->append(buffer, v33, &out);
          v4 += v33;
          array = (char *)array + 4;
          --v27;
        }
        while ( v27 );
      }
      return v4;
    case PROTOBUF_C_TYPE_BOOL:
      if ( count )
      {
        v53 = count;
        do
        {
          out = *(_DWORD *)array != 0;
          buffer->append(buffer, 1i64, &out);
          array = (char *)array + 4;
          --v53;
        }
        while ( v53 );
      }
      return v5;
    default:
      return v4;
  }
}

/*
==============
parse_int32
==============
*/
__int64 parse_int32(unsigned int len, const unsigned __int8 *data)
{
  unsigned int v2; 

  v2 = *data & 0x7F;
  if ( len <= 1 )
    return v2;
  v2 |= (data[1] & 0x7F) << 7;
  if ( len <= 2 )
    return v2;
  v2 |= (data[2] & 0x7F) << 14;
  if ( len <= 3 )
    return v2;
  v2 |= (data[3] & 0x7F) << 21;
  if ( len <= 4 )
    return v2;
  else
    return v2 | (data[4] << 28);
}

/*
==============
parse_member
==============
*/
int parse_member(_ScannedMember *scanned_member, ProtobufCMessage *message, ProtobufCAllocator *allocator)
{
  const ProtobufCFieldDescriptor *field; 
  __int64 n_unknown_fields; 
  ProtobufCMessageUnknownField *v8; 
  unsigned __int8 *v9; 
  ProtobufCLabel label; 
  ProtobufCMessage **v11; 
  __int32 v12; 
  __int32 v13; 
  __int64 quantifier_offset; 
  unsigned __int64 v15; 
  ProtobufCAllocator *v16; 
  __int64 v17; 
  int v18; 
  const ProtobufCMessageDescriptor *descriptor; 
  int v20; 
  size_t v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  ProtobufCMessage *v26; 
  ProtobufCMessage *v27; 
  __int64 v28; 
  bool v29; 
  __int64 v30; 

  field = scanned_member->field;
  if ( !field )
  {
    n_unknown_fields = message->n_unknown_fields;
    v8 = &message->unknown_fields[n_unknown_fields];
    message->n_unknown_fields = n_unknown_fields + 1;
    v8->tag = scanned_member->tag;
    v8->wire_type = scanned_member->wire_type;
    v8->len = scanned_member->len;
    v9 = (unsigned __int8 *)allocator->alloc(allocator->allocator_data, scanned_member->len);
    v8->data = v9;
    if ( v9 )
    {
      memcpy_0(v9, scanned_member->data, v8->len);
      LODWORD(v9) = 1;
    }
    return (int)v9;
  }
  label = field->label;
  v11 = (ProtobufCMessage **)((char *)message + field->offset);
  if ( label == PROTOBUF_C_LABEL_REQUIRED )
  {
    LODWORD(v9) = parse_required_member(scanned_member, (char *)message + field->offset, allocator, 1);
    return (int)v9;
  }
  v12 = label - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( scanned_member->wire_type == 2 && ((field->flags & 1) != 0 || (unsigned int)(field->type - 14) > 2) )
      {
        LODWORD(v9) = parse_packed_repeated_member(scanned_member, (char *)message + field->offset, message);
      }
      else
      {
        quantifier_offset = field->quantifier_offset;
        v15 = sizeof_elt_in_repeated_array(field->type);
        if ( parse_required_member(scanned_member, (char *)*v11 + v15 * *(unsigned __int64 *)((char *)&message->descriptor + quantifier_offset), v16, 0) )
        {
          ++*(const ProtobufCMessageDescriptor **)((char *)&message->descriptor + quantifier_offset);
          LODWORD(v9) = 1;
        }
        else
        {
          LODWORD(v9) = 0;
        }
      }
      return (int)v9;
    }
    if ( v13 != 1 )
    {
      LODWORD(v9) = 0;
      return (int)v9;
    }
  }
  if ( (field->flags & 4) != 0 )
  {
    v17 = field->quantifier_offset;
    v18 = *(_DWORD *)((char *)&message->descriptor + v17);
    if ( !v18 )
      goto LABEL_34;
    descriptor = message->descriptor;
    v20 = int_range_lookup(message->descriptor->n_field_ranges, message->descriptor->field_ranges, v18);
    if ( v20 < 0 )
    {
LABEL_19:
      LODWORD(v9) = 0;
      return (int)v9;
    }
    v21 = sizeof_elt_in_repeated_array(descriptor->fields[v20].type);
    v24 = v23 - 14;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          v26 = *v11;
          if ( *v11 )
          {
            if ( v26 != *(ProtobufCMessage **)(v22 + 40) )
              j_protobuf_c_message_free_unpacked(v26, allocator);
          }
        }
        goto LABEL_33;
      }
      v27 = v11[1];
      if ( !v27 )
        goto LABEL_33;
      v28 = *(_QWORD *)(v22 + 40);
      if ( !v28 )
      {
LABEL_32:
        ((void (__fastcall *)(void *))allocator->free)(allocator->allocator_data);
        goto LABEL_33;
      }
      v29 = v27 == *(ProtobufCMessage **)(v28 + 8);
    }
    else
    {
      if ( !*v11 )
        goto LABEL_33;
      v29 = *v11 == *(ProtobufCMessage **)(v22 + 40);
    }
    if ( !v29 )
      goto LABEL_32;
LABEL_33:
    memset_0(v11, 0, v21);
LABEL_34:
    if ( parse_required_member(scanned_member, v11, allocator, 1) )
    {
      *(_DWORD *)((char *)&message->descriptor + v17) = scanned_member->tag;
      LODWORD(v9) = 1;
      return (int)v9;
    }
    goto LABEL_19;
  }
  if ( parse_required_member(scanned_member, (char *)message + field->offset, allocator, 1) )
  {
    v30 = scanned_member->field->quantifier_offset;
    if ( (_DWORD)v30 )
      *(_DWORD *)((char *)&message->descriptor + v30) = 1;
    LODWORD(v9) = 1;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  return (int)v9;
}

/*
==============
parse_packed_repeated_member
==============
*/
__int64 parse_packed_repeated_member(_ScannedMember *scanned_member, void *member, ProtobufCMessage *message)
{
  const ProtobufCFieldDescriptor *field; 
  _QWORD *v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  char *v10; 
  unsigned __int64 v11; 
  _QWORD *v12; 
  _DWORD *v13; 
  int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  char *v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v22; 
  unsigned int v23; 
  char *v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  unsigned int v28; 
  unsigned int v29; 
  char *v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  unsigned int v34; 
  char *v35; 
  unsigned int v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  unsigned int v41; 
  char *v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned __int8 v46; 

  field = scanned_member->field;
  v4 = (const ProtobufCMessageDescriptor **)((char *)&message->descriptor + field->quantifier_offset);
  v5 = sizeof_elt_in_repeated_array(field->type);
  v7 = *(unsigned __int8 *)(v6 + 5);
  v8 = 0;
  v9 = 0i64;
  v10 = (char *)(v7 + *(_QWORD *)(v6 + 24));
  v11 = *(_QWORD *)(v6 + 16) - v7;
  v13 = (_DWORD *)(*v12 + v5 * *v4);
  switch ( v14 )
  {
    case 0:
    case 13:
      if ( !v11 )
        goto LABEL_21;
      while ( 1 )
      {
        v16 = v11;
        v17 = 0;
        if ( (unsigned int)v11 > 0xA )
          v16 = 10;
        if ( v16 )
        {
          v18 = v10;
          do
          {
            if ( *v18 >= 0 )
              break;
            ++v17;
            ++v18;
          }
          while ( v17 < v16 );
        }
        v19 = 0;
        if ( v17 != v16 )
          v19 = v17 + 1;
        if ( !v19 )
          return 0i64;
        v20 = *v10 & 0x7F;
        if ( v19 > 1 )
        {
          v20 |= (v10[1] & 0x7F) << 7;
          if ( v19 > 2 )
          {
            v20 |= (v10[2] & 0x7F) << 14;
            if ( v19 > 3 )
            {
              v20 |= (v10[3] & 0x7F) << 21;
              if ( v19 > 4 )
                v20 |= (unsigned __int8)v10[4] << 28;
            }
          }
        }
        v13[v9] = v20;
        v10 += v19;
        ++v9;
        v11 -= v19;
        if ( !v11 )
          goto LABEL_21;
      }
    case 1:
      if ( !v11 )
        goto LABEL_21;
      while ( 1 )
      {
        v22 = v11;
        v23 = 0;
        if ( (unsigned int)v11 > 0xA )
          v22 = 10;
        if ( v22 )
        {
          v24 = v10;
          do
          {
            if ( *v24 >= 0 )
              break;
            ++v23;
            ++v24;
          }
          while ( v23 < v22 );
        }
        v25 = 0;
        if ( v23 != v22 )
          v25 = v23 + 1;
        if ( !v25 )
          return 0i64;
        v26 = *v10 & 0x7F;
        if ( v25 > 1 )
        {
          v26 |= (v10[1] & 0x7F) << 7;
          if ( v25 > 2 )
          {
            v26 |= (v10[2] & 0x7F) << 14;
            if ( v25 > 3 )
            {
              v26 |= (v10[3] & 0x7F) << 21;
              if ( v25 > 4 )
                v26 |= (unsigned __int8)v10[4] << 28;
            }
          }
        }
        v27 = v26 >> 1;
        if ( (v26 & 1) != 0 )
          v27 = -1 - (v26 >> 1);
        v13[v9] = v27;
        v10 += v25;
        ++v9;
        v11 -= v25;
        if ( !v11 )
          goto LABEL_21;
      }
    case 2:
    case 7:
    case 10:
      v15 = v11 >> 2;
      goto $no_unpacking_needed;
    case 3:
    case 8:
      if ( !v11 )
        goto LABEL_21;
      while ( 1 )
      {
        v40 = v11;
        v41 = 0;
        if ( (unsigned int)v11 > 0xA )
          v40 = 10;
        if ( v40 )
        {
          v42 = v10;
          do
          {
            if ( *v42 >= 0 )
              break;
            ++v41;
            ++v42;
          }
          while ( v41 < v40 );
        }
        v43 = 0;
        if ( v41 != v40 )
          v43 = v41 + 1;
        if ( !v43 )
          return 0i64;
        *(_QWORD *)&v13[2 * v9++] = parse_uint64(v43, (const unsigned __int8 *)v10);
        v10 = (char *)(v43 + v44);
        v11 -= v43;
        if ( !v11 )
          goto LABEL_21;
      }
    case 4:
      if ( !v11 )
        goto LABEL_21;
      while ( 1 )
      {
        v33 = v11;
        v34 = 0;
        if ( (unsigned int)v11 > 0xA )
          v33 = 10;
        if ( v33 )
        {
          v35 = v10;
          do
          {
            if ( *v35 >= 0 )
              break;
            ++v34;
            ++v35;
          }
          while ( v34 < v33 );
        }
        v36 = 0;
        if ( v34 != v33 )
          v36 = v34 + 1;
        if ( !v36 )
          return 0i64;
        v37 = parse_uint64(v36, (const unsigned __int8 *)v10);
        v39 = v37 >> 1;
        if ( (v37 & 1) != 0 )
          v39 = -1i64 - (v37 >> 1);
        v10 = (char *)(v36 + v38);
        *(_QWORD *)&v13[2 * v9++] = v39;
        v11 -= v36;
        if ( !v11 )
          goto LABEL_21;
      }
    case 5:
    case 9:
    case 11:
      v15 = v11 >> 3;
$no_unpacking_needed:
      memcpy_0(v13, v10, v5 * v15);
      *v4 += v15;
      return 1i64;
    case 6:
      if ( !v11 )
        goto LABEL_21;
      while ( 1 )
      {
        v28 = v11;
        v29 = 0;
        if ( (unsigned int)v11 > 0xA )
          v28 = 10;
        if ( v28 )
        {
          v30 = v10;
          do
          {
            if ( *v30 >= 0 )
              break;
            ++v29;
            ++v30;
          }
          while ( v29 < v28 );
        }
        v31 = 0;
        if ( v29 != v28 )
          v31 = v29 + 1;
        if ( !v31 )
          return 0i64;
        v32 = *v10 & 0x7F;
        if ( v31 > 1 )
        {
          v32 |= (v10[1] & 0x7F) << 7;
          if ( v31 > 2 )
          {
            v32 |= (v10[2] & 0x7F) << 14;
            if ( v31 > 3 )
            {
              v32 |= (v10[3] & 0x7F) << 21;
              if ( v31 > 4 )
                v32 |= (unsigned __int8)v10[4] << 28;
            }
          }
        }
        v13[v9] = v32;
        v10 += v31;
        ++v9;
        v11 -= v31;
        if ( !v11 )
          goto LABEL_21;
      }
    case 12:
      v9 = *(_QWORD *)(v6 + 16) - v7;
      if ( !v11 )
        goto LABEL_21;
      v45 = 0i64;
      break;
    default:
      goto LABEL_21;
  }
  do
  {
    v46 = v10[v45];
    if ( v46 > 1u )
      return 0i64;
    ++v8;
    v13[v45] = v46;
    v45 = v8;
  }
  while ( v8 < v11 );
LABEL_21:
  *v4 += v9;
  return 1i64;
}

/*
==============
parse_required_member
==============
*/
_BOOL8 parse_required_member(_ScannedMember *scanned_member, void *member, ProtobufCAllocator *allocator, int maybe_clear)
{
  const ProtobufCFieldDescriptor *field; 
  unsigned int len; 
  const unsigned __int8 *data; 
  unsigned __int8 wire_type; 
  _BOOL8 result; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  bool v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  __int64 length_prefix_len; 
  unsigned int v22; 
  void *v23; 
  __int64 v24; 
  __int64 v25; 
  _QWORD *default_value; 
  __int64 v27; 
  void *v28; 
  int v29; 
  ProtobufCMessage *v30; 
  ProtobufCMessage *v31; 
  ProtobufCMessage *v32; 
  ProtobufCMessage *v33; 
  int v34; 

  field = scanned_member->field;
  len = scanned_member->len;
  data = scanned_member->data;
  wire_type = scanned_member->wire_type;
  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      if ( wire_type )
        return 0i64;
      *(_DWORD *)member = parse_int32(len, scanned_member->data);
      return 1i64;
    case PROTOBUF_C_TYPE_SINT32:
      if ( wire_type )
        return 0i64;
      v12 = parse_uint32(len, scanned_member->data);
      v13 = v12 >> 1;
      v14 = -1 - (v12 >> 1);
      v15 = (v12 & 1) == 0;
      result = 1i64;
      if ( !v15 )
        v13 = v14;
      *(_DWORD *)member = v13;
      return result;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      if ( wire_type != 5 )
        return 0i64;
      *(_DWORD *)member = *(_DWORD *)data;
      return 1i64;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      if ( wire_type )
        return 0i64;
      *(_QWORD *)member = parse_uint64(len, scanned_member->data);
      return 1i64;
    case PROTOBUF_C_TYPE_SINT64:
      if ( wire_type )
        return 0i64;
      v16 = parse_uint64(len, scanned_member->data);
      v17 = v16 >> 1;
      v18 = -1i64 - (v16 >> 1);
      v15 = (v16 & 1) == 0;
      result = 1i64;
      if ( !v15 )
        v17 = v18;
      *(_QWORD *)member = v17;
      return result;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      if ( wire_type != 1 )
        return 0i64;
      *(_QWORD *)member = *(_QWORD *)data;
      return 1i64;
    case PROTOBUF_C_TYPE_UINT32:
      if ( wire_type )
        return 0i64;
      *(_DWORD *)member = parse_uint32(len, scanned_member->data);
      return 1i64;
    case PROTOBUF_C_TYPE_BOOL:
      v19 = 0;
      v20 = 0;
      if ( !len )
        goto LABEL_26;
      break;
    case PROTOBUF_C_TYPE_STRING:
      length_prefix_len = scanned_member->length_prefix_len;
      if ( wire_type != 2 )
        return 0i64;
      if ( maybe_clear && *(_QWORD *)member && *(const void **)member != field->default_value )
        ((void (__fastcall *)(void *))allocator->free)(allocator->allocator_data);
      v22 = len - length_prefix_len;
      v23 = (void *)allocator->alloc(allocator->allocator_data, v22 + 1);
      *(_QWORD *)member = v23;
      if ( !v23 )
        return 0i64;
      memcpy_0(v23, &data[length_prefix_len], v22);
      *(_BYTE *)(v22 + *(_QWORD *)member) = 0;
      return 1i64;
    case PROTOBUF_C_TYPE_BYTES:
      v24 = scanned_member->length_prefix_len;
      if ( wire_type != 2 )
        return 0i64;
      if ( maybe_clear )
      {
        v25 = *((_QWORD *)member + 1);
        if ( v25 )
        {
          default_value = field->default_value;
          if ( !default_value || v25 != default_value[1] )
            ((void (__fastcall *)(void *))allocator->free)(allocator->allocator_data);
        }
      }
      v27 = len - (unsigned int)v24;
      if ( (_DWORD)v27 )
      {
        v28 = (void *)allocator->alloc(allocator->allocator_data, (unsigned int)v27);
        *((_QWORD *)member + 1) = v28;
        if ( v28 )
        {
          memcpy_0(v28, &data[v24], (unsigned int)v27);
          result = 1i64;
          *(_QWORD *)member = (unsigned int)v27;
        }
        else
        {
          return 0i64;
        }
      }
      else
      {
        *(_QWORD *)member = v27;
        *((_QWORD *)member + 1) = 0i64;
        return 1i64;
      }
      return result;
    case PROTOBUF_C_TYPE_MESSAGE:
      v29 = 1;
      if ( wire_type != 2 )
        return 0i64;
      v30 = (ProtobufCMessage *)field->default_value;
      v31 = j_protobuf_c_message_unpack((const ProtobufCMessageDescriptor *)field->descriptor, allocator, len - scanned_member->length_prefix_len, &data[scanned_member->length_prefix_len]);
      v32 = v31;
      if ( maybe_clear )
      {
        v33 = *(ProtobufCMessage **)member;
        if ( *(_QWORD *)member )
        {
          if ( v33 != v30 )
          {
            if ( v31 )
            {
              v34 = merge_messages(v33, v31, allocator);
              v33 = *(ProtobufCMessage **)member;
              v29 = v34;
            }
            j_protobuf_c_message_free_unpacked(v33, allocator);
          }
        }
      }
      *(_QWORD *)member = v32;
      return v32 && v29;
    default:
      return 0i64;
  }
  while ( (*data & 0x7F) == 0 )
  {
    ++v20;
    ++data;
    if ( v20 >= len )
    {
      *(_DWORD *)member = 0;
      return 1i64;
    }
  }
  v19 = 1;
LABEL_26:
  *(_DWORD *)member = v19;
  return 1i64;
}

/*
==============
parse_uint32
==============
*/
__int64 parse_uint32(unsigned int len, const unsigned __int8 *data)
{
  unsigned int v2; 

  v2 = *data & 0x7F;
  if ( len <= 1 )
    return v2;
  v2 |= (data[1] & 0x7F) << 7;
  if ( len <= 2 )
    return v2;
  v2 |= (data[2] & 0x7F) << 14;
  if ( len <= 3 )
    return v2;
  v2 |= (data[3] & 0x7F) << 21;
  if ( len <= 4 )
    return v2;
  else
    return v2 | (data[4] << 28);
}

/*
==============
parse_uint64
==============
*/
unsigned __int64 parse_uint64(unsigned int len, const unsigned __int8 *data)
{
  unsigned int v3; 
  int v5; 
  unsigned __int64 v6; 
  const unsigned __int8 *v7; 
  __int64 v8; 
  char v9; 
  unsigned __int64 v10; 

  if ( len >= 5 )
  {
    v5 = 28;
    v6 = *data & 0x7F | ((data[1] & 0x7F | ((data[2] & 0x7F | ((unsigned __int64)(data[3] & 0x7F) << 7)) << 7)) << 7);
    if ( len > 4 )
    {
      v7 = data + 4;
      v8 = len - 4;
      do
      {
        v9 = *v7++;
        v10 = (unsigned __int64)(v9 & 0x7F) << v5;
        v5 += 7;
        v6 |= v10;
        --v8;
      }
      while ( v8 );
    }
    return v6;
  }
  else
  {
    v3 = *data & 0x7F;
    if ( len > 1 )
    {
      v3 |= (data[1] & 0x7F) << 7;
      if ( len > 2 )
      {
        v3 |= (data[2] & 0x7F) << 14;
        if ( len > 3 )
          v3 |= (data[3] & 0x7F) << 21;
      }
    }
    return v3;
  }
}

/*
==============
prefixed_message_pack
==============
*/
size_t prefixed_message_pack(const ProtobufCMessage *message, unsigned __int8 *out)
{
  unsigned __int64 v4; 
  size_t v5; 
  __int64 v6; 

  if ( message )
  {
    v4 = j_protobuf_c_message_pack(message, out + 1);
    v5 = v4;
    if ( (unsigned int)v4 >= 0x80 )
    {
      if ( (unsigned int)v4 >= 0x4000 )
      {
        if ( (unsigned int)v4 >= 0x200000 )
          v6 = 5i64 - ((unsigned int)v4 < 0x10000000);
        else
          v6 = 3i64;
      }
      else
      {
        v6 = 2i64;
      }
      memmove_0(&out[v6], out + 1, v5);
    }
    return v5 + uint32_pack(v5, out);
  }
  else
  {
    *out = 0;
    return 1i64;
  }
}

/*
==============
protobuf_c_buffer_simple_append
==============
*/
void protobuf_c_buffer_simple_append(ProtobufCBuffer *buffer, unsigned __int64 len, const unsigned __int8 *data)
{
  void (__fastcall *append)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *); 
  void (__fastcall *v5)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *); 
  void (__fastcall *v8)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *); 
  unsigned __int64 v9; 
  void (__fastcall *v10)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *); 
  void (__fastcall *v11)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *); 

  append = buffer[1].append;
  v5 = (void (__fastcall *)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *))((char *)buffer[2].append + len);
  if ( (unsigned __int64)v5 <= (unsigned __int64)append )
  {
LABEL_12:
    memcpy_0((char *)buffer[2].append + (unsigned __int64)buffer[3].append, data, len);
    buffer[2].append = v5;
    return;
  }
  v8 = (void (__fastcall *)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *))&protobuf_c__allocator;
  v9 = 2i64 * (_QWORD)append;
  if ( buffer[5].append )
    v8 = buffer[5].append;
  for ( ; v9 < (unsigned __int64)v5; v9 *= 2i64 )
    ;
  v10 = (void (__fastcall *)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *))(*(__int64 (__fastcall **)(_QWORD, unsigned __int64))v8)(*((_QWORD *)v8 + 2), v9);
  v11 = v10;
  if ( v10 )
  {
    memcpy_0(v10, buffer[3].append, (size_t)buffer[2].append);
    if ( LODWORD(buffer[4].append) )
    {
      if ( buffer[3].append )
        (*((void (__fastcall **)(_QWORD))v8 + 1))(*((_QWORD *)v8 + 2));
    }
    else
    {
      LODWORD(buffer[4].append) = 1;
    }
    buffer[3].append = v11;
    buffer[1].append = (void (__fastcall *)(ProtobufCBuffer *, unsigned __int64, const unsigned __int8 *))v9;
    goto LABEL_12;
  }
}

/*
==============
protobuf_c_enum_descriptor_get_value
==============
*/
const ProtobufCEnumValue *protobuf_c_enum_descriptor_get_value(const ProtobufCEnumDescriptor *desc, int value)
{
  int v3; 

  v3 = int_range_lookup(desc->n_value_ranges, desc->value_ranges, value);
  if ( v3 >= 0 )
    return &desc->values[v3];
  else
    return 0i64;
}

/*
==============
protobuf_c_enum_descriptor_get_value_by_name
==============
*/
const ProtobufCEnumValue *protobuf_c_enum_descriptor_get_value_by_name(const ProtobufCEnumDescriptor *desc, const char *name)
{
  int v2; 
  const ProtobufCEnumValueIndex *values_by_name; 
  unsigned int n_value_names; 
  int v7; 
  const char *v8; 
  const char *v9; 
  unsigned __int8 v10; 
  int v11; 
  const char *v12; 
  const char *v13; 
  int v14; 
  int v15; 

  v2 = 0;
  if ( !desc )
    return 0i64;
  values_by_name = desc->values_by_name;
  if ( !values_by_name )
    return 0i64;
  n_value_names = desc->n_value_names;
  if ( n_value_names <= 1 )
  {
LABEL_14:
    if ( n_value_names )
    {
      v12 = values_by_name[v2].name;
      v13 = (const char *)(name - v12);
      do
      {
        v14 = (unsigned __int8)v13[(_QWORD)v12];
        v15 = *(unsigned __int8 *)v12 - v14;
        if ( v15 )
          break;
        ++v12;
      }
      while ( v14 );
      if ( !v15 )
        return &desc->values[values_by_name[v2].index];
    }
    return 0i64;
  }
  while ( 1 )
  {
    v7 = (n_value_names >> 1) + v2;
    v8 = values_by_name[v7].name;
    v9 = (const char *)(name - v8);
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 != v9[(_QWORD)v8] )
        break;
      ++v8;
      if ( !v10 )
      {
        v11 = 0;
        goto LABEL_9;
      }
    }
    v11 = v10 < (unsigned int)v9[(_QWORD)v8] ? -1 : 1;
LABEL_9:
    if ( !v11 )
      return &desc->values[values_by_name[(n_value_names >> 1) + v2].index];
    if ( v11 >= 0 )
    {
      n_value_names >>= 1;
    }
    else
    {
      n_value_names = n_value_names - (n_value_names >> 1) - 1;
      v2 = v7 + 1;
    }
    if ( n_value_names <= 1 )
      goto LABEL_14;
  }
}

/*
==============
protobuf_c_message_check
==============
*/
__int64 protobuf_c_message_check(const ProtobufCMessage *message)
{
  const ProtobufCMessageDescriptor *descriptor; 
  __int64 v3; 
  const ProtobufCFieldDescriptor *fields; 
  ProtobufCType type; 
  const ProtobufCFieldDescriptor *v6; 
  ProtobufCLabel label; 
  char *v8; 
  __int64 quantifier_offset; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  const ProtobufCMessage *v21; 
  bool v22; 

  if ( !message )
    return 0i64;
  descriptor = message->descriptor;
  if ( !message->descriptor || descriptor->magic != 682290937 )
    return 0i64;
  v3 = 0i64;
  if ( !descriptor->n_fields )
    return 1i64;
  while ( 1 )
  {
    fields = descriptor->fields;
    type = fields[v3].type;
    v6 = &fields[v3];
    label = v6->label;
    v8 = (char *)message + v6->offset;
    if ( label == PROTOBUF_C_LABEL_REPEATED )
      break;
    if ( type == PROTOBUF_C_TYPE_MESSAGE )
    {
      v21 = *(const ProtobufCMessage **)v8;
      if ( label == PROTOBUF_C_LABEL_REQUIRED || v21 )
      {
        v22 = j_protobuf_c_message_check(v21) == 0;
        goto LABEL_39;
      }
    }
    else if ( type == PROTOBUF_C_TYPE_STRING )
    {
      if ( label == PROTOBUF_C_LABEL_REQUIRED )
      {
        v22 = *(_QWORD *)v8 == 0i64;
        goto LABEL_39;
      }
    }
    else if ( type == PROTOBUF_C_TYPE_BYTES && (label == PROTOBUF_C_LABEL_REQUIRED || *(_DWORD *)((char *)&message->descriptor + v6->quantifier_offset) == 1) && *(_QWORD *)v8 )
    {
      v22 = *((_QWORD *)v8 + 1) == 0i64;
LABEL_39:
      if ( v22 )
        return 0i64;
    }
LABEL_40:
    descriptor = message->descriptor;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= message->descriptor->n_fields )
      return 1i64;
  }
  quantifier_offset = v6->quantifier_offset;
  v10 = *(unsigned __int64 *)((char *)&message->descriptor + quantifier_offset);
  if ( v10 && !*(_QWORD *)v8 )
    return 0i64;
  if ( type == PROTOBUF_C_TYPE_MESSAGE )
  {
    v11 = *(_QWORD *)v8;
    v12 = 0;
    if ( v10 )
    {
      v13 = 0i64;
      while ( j_protobuf_c_message_check(*(const ProtobufCMessage **)(v11 + 8 * v13)) )
      {
        v13 = ++v12;
        if ( (const ProtobufCMessageDescriptor *)v12 >= *(const ProtobufCMessageDescriptor **)((char *)&message->descriptor + quantifier_offset) )
          goto LABEL_40;
      }
      return 0i64;
    }
    goto LABEL_40;
  }
  if ( type == PROTOBUF_C_TYPE_STRING )
  {
    v14 = *(_QWORD *)v8;
    v15 = 0;
    if ( v10 )
    {
      v16 = 0i64;
      while ( *(_QWORD *)(v14 + 8 * v16) )
      {
        v16 = ++v15;
        if ( v15 >= v10 )
          goto LABEL_40;
      }
      return 0i64;
    }
    goto LABEL_40;
  }
  if ( type != PROTOBUF_C_TYPE_BYTES )
    goto LABEL_40;
  v17 = *(_QWORD *)v8;
  v18 = 0;
  if ( !v10 )
    goto LABEL_40;
  v19 = 0i64;
  while ( 1 )
  {
    v20 = 2 * v19;
    if ( *(_QWORD *)(v17 + 8 * v20) )
    {
      if ( !*(_QWORD *)(v17 + 8 * v20 + 8) )
        return 0i64;
    }
    v19 = ++v18;
    if ( v18 >= v10 )
      goto LABEL_40;
  }
}

/*
==============
protobuf_c_message_descriptor_get_field
==============
*/
const ProtobufCFieldDescriptor *protobuf_c_message_descriptor_get_field(const ProtobufCMessageDescriptor *desc, unsigned int value)
{
  int v3; 

  v3 = int_range_lookup(desc->n_field_ranges, desc->field_ranges, value);
  if ( v3 >= 0 )
    return &desc->fields[v3];
  else
    return 0i64;
}

/*
==============
protobuf_c_message_descriptor_get_field_by_name
==============
*/
const ProtobufCFieldDescriptor *protobuf_c_message_descriptor_get_field_by_name(const ProtobufCMessageDescriptor *desc, const char *name)
{
  __int64 v2; 
  const unsigned int *fields_sorted_by_name; 
  unsigned int n_fields; 
  const ProtobufCFieldDescriptor *v7; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  unsigned __int8 v11; 
  int v12; 
  const ProtobufCFieldDescriptor *fields; 
  const char *v14; 
  const ProtobufCFieldDescriptor *result; 
  const char *v16; 
  int v17; 
  int v18; 

  v2 = 0i64;
  if ( !desc )
    return 0i64;
  fields_sorted_by_name = desc->fields_sorted_by_name;
  if ( !fields_sorted_by_name )
    return 0i64;
  n_fields = desc->n_fields;
  if ( n_fields <= 1 )
  {
LABEL_15:
    if ( n_fields )
    {
      fields = desc->fields;
      v14 = fields[fields_sorted_by_name[v2]].name;
      result = &fields[fields_sorted_by_name[v2]];
      v16 = (const char *)(name - v14);
      do
      {
        v17 = (unsigned __int8)v16[(_QWORD)v14];
        v18 = *(unsigned __int8 *)v14 - v17;
        if ( v18 )
          break;
        ++v14;
      }
      while ( v17 );
      if ( !v18 )
        return result;
    }
    return 0i64;
  }
  v7 = desc->fields;
  while ( 1 )
  {
    v8 = (n_fields >> 1) + (unsigned int)v2;
    v9 = v7[fields_sorted_by_name[v8]].name;
    v10 = (const char *)(name - v9);
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 != v10[(_QWORD)v9] )
        break;
      ++v9;
      if ( !v11 )
      {
        v12 = 0;
        goto LABEL_10;
      }
    }
    v12 = v11 < (unsigned int)v10[(_QWORD)v9] ? -1 : 1;
LABEL_10:
    if ( !v12 )
      return &v7[fields_sorted_by_name[v8]];
    if ( v12 >= 0 )
    {
      n_fields >>= 1;
    }
    else
    {
      n_fields = n_fields - (n_fields >> 1) - 1;
      v2 = (unsigned int)(v8 + 1);
    }
    if ( n_fields <= 1 )
      goto LABEL_15;
  }
}

/*
==============
protobuf_c_message_free_unpacked
==============
*/
void protobuf_c_message_free_unpacked(ProtobufCMessage *message, ProtobufCAllocator *allocator)
{
  ProtobufCAllocator *v2; 
  unsigned int v3; 
  const ProtobufCMessageDescriptor *descriptor; 
  unsigned int i; 
  __int64 v7; 
  unsigned __int64 v8; 
  _QWORD *v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 
  void *v18; 
  bool v19; 
  __int64 v20; 
  ProtobufCMessage *v21; 

  if ( message )
  {
    v2 = &protobuf_c__allocator;
    if ( allocator )
      v2 = allocator;
    v3 = 0;
    descriptor = message->descriptor;
    message->descriptor = NULL;
    for ( i = 0; i < descriptor->n_fields; ++i )
    {
      v7 = (__int64)&descriptor->fields[i];
      if ( (*(_BYTE *)(v7 + 48) & 4) != 0 && *(_DWORD *)(v7 + 8) != *(_DWORD *)((char *)&message->descriptor + *(unsigned int *)(v7 + 20)) )
        continue;
      if ( *(_DWORD *)(v7 + 12) == 2 )
      {
        v8 = *(unsigned __int64 *)((char *)&message->descriptor + *(unsigned int *)(v7 + 20));
        v9 = *(const ProtobufCMessageDescriptor **)((char *)&message->descriptor + *(unsigned int *)(v7 + 24));
        if ( v9 )
        {
          v10 = *(_DWORD *)(v7 + 16);
          switch ( v10 )
          {
            case 14:
              v11 = 0;
              if ( v8 )
              {
                v12 = 0i64;
                do
                {
                  if ( v9[v12] )
                    ((void (__fastcall *)(void *))v2->free)(v2->allocator_data);
                  v12 = ++v11;
                }
                while ( v11 < v8 );
              }
              break;
            case 15:
              v13 = 0;
              if ( v8 )
              {
                v14 = 0i64;
                do
                {
                  if ( v9[2 * v14 + 1] )
                    ((void (__fastcall *)(void *))v2->free)(v2->allocator_data);
                  v14 = ++v13;
                }
                while ( v13 < v8 );
              }
              break;
            case 16:
              v15 = 0;
              if ( v8 )
              {
                v16 = 0i64;
                do
                {
                  j_protobuf_c_message_free_unpacked((ProtobufCMessage *)v9[v16], v2);
                  v16 = ++v15;
                }
                while ( v15 < v8 );
              }
              break;
          }
          v2->free(v2->allocator_data, v9);
        }
        continue;
      }
      v17 = *(_DWORD *)(v7 + 16);
      if ( v17 == 14 )
      {
        v18 = *(void **)((char *)&message->descriptor + *(unsigned int *)(v7 + 24));
        if ( !v18 )
          continue;
        v19 = v18 == *(void **)(v7 + 40);
      }
      else
      {
        if ( v17 != 15 )
        {
          if ( v17 == 16 )
          {
            v21 = *(ProtobufCMessage **)((char *)&message->descriptor + *(unsigned int *)(v7 + 24));
            if ( v21 )
            {
              if ( v21 != *(ProtobufCMessage **)(v7 + 40) )
                j_protobuf_c_message_free_unpacked(v21, v2);
            }
          }
          continue;
        }
        v18 = *(void **)((char *)&message->n_unknown_fields + *(unsigned int *)(v7 + 24));
        if ( !v18 )
          continue;
        v20 = *(_QWORD *)(v7 + 40);
        if ( !v20 )
          goto LABEL_36;
        v19 = *(_QWORD *)(v20 + 8) == (_QWORD)v18;
      }
      if ( !v19 )
LABEL_36:
        v2->free(v2->allocator_data, v18);
    }
    if ( message->n_unknown_fields )
    {
      do
      {
        if ( message->unknown_fields[v3].data )
          ((void (__fastcall *)(void *))v2->free)(v2->allocator_data);
        ++v3;
      }
      while ( v3 < message->n_unknown_fields );
    }
    if ( message->unknown_fields )
      ((void (__fastcall *)(void *))v2->free)(v2->allocator_data);
    v2->free(v2->allocator_data, message);
  }
}

/*
==============
protobuf_c_message_get_packed_size
==============
*/
__int64 protobuf_c_message_get_packed_size(const ProtobufCMessage *message)
{
  const ProtobufCMessageDescriptor *descriptor; 
  __int64 v2; 
  __int64 i; 
  __int64 v5; 
  int v6; 
  _QWORD *v7; 
  __int64 v8; 
  unsigned __int64 packed_size; 
  unsigned int n_unknown_fields; 
  ProtobufCMessageUnknownField *unknown_fields; 
  __int64 v12; 
  unsigned int tag; 
  __int64 v14; 
  unsigned __int64 len; 

  descriptor = message->descriptor;
  v2 = 0i64;
  for ( i = 0i64; (unsigned int)i < message->descriptor->n_fields; i = (unsigned int)(i + 1) )
  {
    v5 = (__int64)&descriptor->fields[i];
    v6 = *(_DWORD *)(v5 + 12);
    v7 = (const ProtobufCMessageDescriptor **)((char *)&message->descriptor + *(unsigned int *)(v5 + 24));
    v8 = *(unsigned int *)(v5 + 20);
    if ( !v6 )
      goto LABEL_18;
    if ( ((v6 - 1) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(v5 + 48) & 4) == 0 )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 3 )
        {
          packed_size = repeated_field_get_packed_size((const ProtobufCFieldDescriptor *)v5, *(unsigned __int64 *)((char *)&message->descriptor + v8), v7);
          goto LABEL_23;
        }
        if ( field_is_zeroish((const ProtobufCFieldDescriptor *)v5, v7) )
        {
          packed_size = 0i64;
          goto LABEL_23;
        }
LABEL_18:
        packed_size = required_field_get_packed_size((const ProtobufCFieldDescriptor *)v5, v7);
        goto LABEL_23;
      }
      if ( ((*(_DWORD *)(v5 + 16) - 14) & 0xFFFFFFFD) == 0 )
      {
        if ( *v7 && *v7 != *(_QWORD *)(v5 + 40) )
          goto LABEL_18;
LABEL_7:
        packed_size = 0i64;
        goto LABEL_23;
      }
      if ( *(_DWORD *)((char *)&message->descriptor + v8) )
        goto LABEL_18;
      packed_size = 0i64;
    }
    else
    {
      if ( *(_DWORD *)((char *)&message->descriptor + v8) != *(_DWORD *)(v5 + 8) )
        goto LABEL_7;
      if ( ((*(_DWORD *)(v5 + 16) - 14) & 0xFFFFFFFD) != 0 )
        goto LABEL_18;
      if ( !*v7 )
        goto LABEL_7;
      if ( *v7 != *(_QWORD *)(v5 + 40) )
        goto LABEL_18;
      packed_size = 0i64;
    }
LABEL_23:
    descriptor = message->descriptor;
    v2 += packed_size;
  }
  n_unknown_fields = message->n_unknown_fields;
  if ( n_unknown_fields )
  {
    unknown_fields = message->unknown_fields;
    v12 = n_unknown_fields;
    do
    {
      tag = unknown_fields->tag;
      if ( unknown_fields->tag >= 0x10 )
      {
        if ( tag >= 0x800 )
        {
          if ( tag >= 0x40000 )
            v14 = 5i64 - (tag < 0x2000000);
          else
            v14 = 3i64;
        }
        else
        {
          v14 = 2i64;
        }
      }
      else
      {
        v14 = 1i64;
      }
      len = unknown_fields->len;
      ++unknown_fields;
      v2 += v14 + len;
      --v12;
    }
    while ( v12 );
  }
  return v2;
}

/*
==============
protobuf_c_message_init
==============
*/
void protobuf_c_message_init(const ProtobufCMessageDescriptor *descriptor, void *message)
{
  descriptor->message_init((ProtobufCMessage *)message);
}

/*
==============
protobuf_c_message_pack
==============
*/
__int64 protobuf_c_message_pack(const ProtobufCMessage *message, unsigned __int8 *out)
{
  const ProtobufCMessageDescriptor *descriptor; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int i; 
  __int64 v8; 
  int v9; 
  _QWORD *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int8 *v13; 
  ProtobufCMessageUnknownField *v14; 
  __int64 tag; 
  unsigned __int64 v16; 
  _BYTE *v17; 
  unsigned __int64 v18; 

  descriptor = message->descriptor;
  v3 = 0;
  v4 = 0i64;
  for ( i = 0; i < message->descriptor->n_fields; ++i )
  {
    v8 = (__int64)&descriptor->fields[i];
    v9 = *(_DWORD *)(v8 + 12);
    v10 = (const ProtobufCMessageDescriptor **)((char *)&message->descriptor + *(unsigned int *)(v8 + 24));
    v11 = *(unsigned int *)(v8 + 20);
    if ( !v9 )
      goto LABEL_18;
    if ( ((v9 - 1) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(v8 + 48) & 4) == 0 )
    {
      if ( v9 != 1 )
      {
        if ( v9 != 3 )
        {
          v12 = repeated_field_pack((const ProtobufCFieldDescriptor *)v8, *(unsigned __int64 *)((char *)&message->descriptor + v11), v10, &out[v4]);
          goto LABEL_23;
        }
        if ( field_is_zeroish((const ProtobufCFieldDescriptor *)v8, v10) )
        {
          v12 = 0i64;
          goto LABEL_23;
        }
LABEL_18:
        v12 = required_field_pack((const ProtobufCFieldDescriptor *)v8, v10, &out[v4]);
        goto LABEL_23;
      }
      if ( ((*(_DWORD *)(v8 + 16) - 14) & 0xFFFFFFFD) == 0 )
      {
        if ( *v10 && *v10 != *(_QWORD *)(v8 + 40) )
          goto LABEL_18;
LABEL_7:
        v12 = 0i64;
        goto LABEL_23;
      }
      if ( *(_DWORD *)((char *)&message->descriptor + v11) )
        goto LABEL_18;
      v12 = 0i64;
    }
    else
    {
      if ( *(_DWORD *)((char *)&message->descriptor + v11) != *(_DWORD *)(v8 + 8) )
        goto LABEL_7;
      if ( ((*(_DWORD *)(v8 + 16) - 14) & 0xFFFFFFFD) != 0 )
        goto LABEL_18;
      if ( !*v10 )
        goto LABEL_7;
      if ( *v10 != *(_QWORD *)(v8 + 40) )
        goto LABEL_18;
      v12 = 0i64;
    }
LABEL_23:
    descriptor = message->descriptor;
    v4 += v12;
  }
  if ( message->n_unknown_fields )
  {
    do
    {
      v13 = &out[v4];
      v14 = &message->unknown_fields[v3];
      tag = v14->tag;
      if ( (unsigned int)tag >= 0x20000000 )
        v16 = uint64_pack(8 * tag, v13);
      else
        v16 = uint32_pack(8 * (int)tag, v13);
      v18 = v16;
      *v17 |= LOBYTE(v14->wire_type);
      memcpy_0(&v17[v16], v14->data, v14->len);
      ++v3;
      v4 += v18 + v14->len;
    }
    while ( v3 < message->n_unknown_fields );
  }
  return v4;
}

/*
==============
protobuf_c_message_pack_to_buffer
==============
*/
__int64 protobuf_c_message_pack_to_buffer(const ProtobufCMessage *message, ProtobufCBuffer *buffer)
{
  __int64 v2; 
  const ProtobufCMessageDescriptor *descriptor; 
  __int64 v5; 
  const ProtobufCMessage *i; 
  __int64 v7; 
  int v8; 
  const void **v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  char *v13; 
  __int64 v14; 
  unsigned int v15; 
  int v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  unsigned __int64 v20; 
  unsigned __int64 packed_payload_length; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  __int64 j; 
  ProtobufCMessageUnknownField *v27; 
  __int64 tag; 
  unsigned int v29; 
  unsigned int v30; 
  char v31; 
  char v32; 
  char v33; 
  unsigned __int64 v34; 
  char v35; 
  unsigned __int64 v36; 
  unsigned int v37; 
  char v38; 
  char v39; 
  char v40; 
  int v42; 
  __int64 v43[2]; 
  unsigned __int8 out[24]; 

  v2 = 0i64;
  v43[0] = (__int64)message;
  v42 = 0;
  descriptor = message->descriptor;
  v5 = 0i64;
  for ( i = message; (unsigned int)v2 < i->descriptor->n_fields; v42 = v2 )
  {
    v7 = (__int64)&descriptor->fields[v2];
    v8 = *(_DWORD *)(v7 + 12);
    v9 = (const void **)((char *)&i->descriptor + *(unsigned int *)(v7 + 24));
    v10 = *(unsigned int *)(v7 + 20);
    if ( !v8 )
      goto LABEL_18;
    if ( ((v8 - 1) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(v7 + 48) & 4) == 0 )
    {
      if ( v8 != 1 )
      {
        if ( v8 != 3 )
        {
          v12 = *(unsigned int *)((char *)&i->descriptor + v10);
          v13 = (char *)*v9;
          if ( (_DWORD)v12 )
          {
            if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
            {
              v14 = *(unsigned int *)(v7 + 8);
              if ( (unsigned int)v14 >= 0x20000000 )
              {
                v20 = uint64_pack(8 * v14, out);
              }
              else
              {
                v15 = 8 * v14;
                v16 = 0;
                if ( (unsigned int)(8 * v14) >= 0x80 )
                {
                  v16 = 1;
                  v17 = v15 | 0x80;
                  v15 >>= 7;
                  out[0] = v17;
                  if ( v15 >= 0x80 )
                  {
                    v16 = 2;
                    v18 = v15 | 0x80;
                    v15 >>= 7;
                    out[1] = v18;
                    if ( v15 >= 0x80 )
                    {
                      v16 = 3;
                      v19 = v15 | 0x80;
                      v15 >>= 7;
                      out[2] = v19;
                      if ( v15 >= 0x80 )
                      {
                        v16 = 4;
                        out[3] = v15 | 0x80;
                        v15 >>= 7;
                      }
                    }
                  }
                }
                v20 = (unsigned int)(v16 + 1);
                out[v16] = v15;
              }
              packed_payload_length = get_packed_payload_length((const ProtobufCFieldDescriptor *)v7, v12, v13);
              out[0] |= 2u;
              v22 = packed_payload_length;
              v23 = uint32_pack(packed_payload_length, &out[v20]) + v20;
              buffer->append(buffer, v23, out);
              pack_buffer_packed_payload((const ProtobufCFieldDescriptor *)v7, v12, v13, buffer);
              v11 = v22 + v23;
            }
            else
            {
              v24 = 0;
              v25 = sizeof_elt_in_repeated_array((ProtobufCType)*(_DWORD *)(v7 + 16));
              do
              {
                v24 += required_field_pack_to_buffer((const ProtobufCFieldDescriptor *)v7, v13, buffer);
                v13 += v25;
                --v12;
              }
              while ( v12 );
              v11 = v24;
            }
            i = (const ProtobufCMessage *)v43[0];
            LODWORD(v2) = v42;
            goto LABEL_38;
          }
LABEL_23:
          v11 = 0i64;
          goto LABEL_38;
        }
        if ( field_is_zeroish((const ProtobufCFieldDescriptor *)v7, v9) )
        {
          v11 = 0i64;
          goto LABEL_38;
        }
        goto LABEL_18;
      }
      if ( ((*(_DWORD *)(v7 + 16) - 14) & 0xFFFFFFFD) == 0 )
      {
        if ( !*v9 || *v9 == *(const void **)(v7 + 40) )
          goto LABEL_23;
LABEL_18:
        v11 = required_field_pack_to_buffer((const ProtobufCFieldDescriptor *)v7, v9, buffer);
        goto LABEL_38;
      }
      if ( *(_DWORD *)((char *)&i->descriptor + v10) )
        goto LABEL_18;
      v11 = 0i64;
    }
    else if ( *(_DWORD *)((char *)&i->descriptor + v10) == *(_DWORD *)(v7 + 8) )
    {
      if ( ((*(_DWORD *)(v7 + 16) - 14) & 0xFFFFFFFD) != 0 )
        goto LABEL_18;
      if ( !*v9 )
        goto LABEL_23;
      if ( *v9 != *(const void **)(v7 + 40) )
        goto LABEL_18;
      v11 = 0i64;
    }
    else
    {
      v11 = 0i64;
    }
LABEL_38:
    descriptor = i->descriptor;
    v2 = (unsigned int)(v2 + 1);
    v5 += v11;
  }
  for ( j = 0i64; (unsigned int)j < i->n_unknown_fields; v5 += v34 + v27->len )
  {
    v27 = &i->unknown_fields[j];
    tag = v27->tag;
    if ( (unsigned int)tag >= 0x20000000 )
    {
      v36 = 8 * tag;
      if ( HIDWORD(v36) )
      {
        v35 = v36 | 0x80;
        BYTE1(v43[0]) = ((unsigned int)v36 >> 7) | 0x80;
        v34 = 5i64;
        BYTE2(v43[0]) = ((unsigned int)v36 >> 14) | 0x80;
        BYTE3(v43[0]) = ((unsigned int)v36 >> 21) | 0x80;
        BYTE4(v43[0]) = (16 * BYTE4(v36)) | ((unsigned int)v36 >> 28);
      }
      else
      {
        v37 = 0;
        if ( (unsigned int)v36 >= 0x80 )
        {
          v37 = 1;
          v38 = v36 | 0x80;
          LODWORD(v36) = (unsigned int)v36 >> 7;
          LOBYTE(v43[0]) = v38;
          if ( (unsigned int)v36 >= 0x80 )
          {
            v37 = 2;
            v39 = v36 | 0x80;
            LODWORD(v36) = (unsigned int)v36 >> 7;
            BYTE1(v43[0]) = v39;
            if ( (unsigned int)v36 >= 0x80 )
            {
              v37 = 3;
              v40 = v36 | 0x80;
              LODWORD(v36) = (unsigned int)v36 >> 7;
              BYTE2(v43[0]) = v40;
              if ( (unsigned int)v36 >= 0x80 )
              {
                v37 = 4;
                BYTE3(v43[0]) = v36 | 0x80;
                LODWORD(v36) = (unsigned int)v36 >> 7;
              }
            }
          }
        }
        v34 = v37 + 1;
        *((_BYTE *)v43 + v37) = v36;
        v35 = v43[0];
      }
    }
    else
    {
      v29 = 8 * tag;
      v30 = 0;
      if ( (unsigned int)(8 * tag) >= 0x80 )
      {
        v30 = 1;
        v31 = v29 | 0x80;
        v29 >>= 7;
        LOBYTE(v43[0]) = v31;
        if ( v29 >= 0x80 )
        {
          v30 = 2;
          v32 = v29 | 0x80;
          v29 >>= 7;
          BYTE1(v43[0]) = v32;
          if ( v29 >= 0x80 )
          {
            v30 = 3;
            v33 = v29 | 0x80;
            v29 >>= 7;
            BYTE2(v43[0]) = v33;
            if ( v29 >= 0x80 )
            {
              v30 = 4;
              BYTE3(v43[0]) = v29 | 0x80;
              v29 >>= 7;
            }
          }
        }
      }
      v34 = v30 + 1;
      *((_BYTE *)v43 + v30) = v29;
      v35 = v43[0];
    }
    LOBYTE(v43[0]) = LOBYTE(v27->wire_type) | v35;
    buffer->append(buffer, v34, v43);
    buffer->append(buffer, v27->len, v27->data);
    j = (unsigned int)(j + 1);
  }
  return v5;
}

/*
==============
protobuf_c_message_unpack
==============
*/
ProtobufCMessage *protobuf_c_message_unpack(const ProtobufCMessageDescriptor *desc, ProtobufCAllocator *allocator, unsigned __int64 len, const unsigned __int8 *data)
{
  ProtobufCAllocator *v4; 
  unsigned int v6; 
  const unsigned __int8 *v7; 
  ProtobufCMessage *v9; 
  unsigned int v10; 
  unsigned int v11; 
  size_t v12; 
  char *v13; 
  ProtobufCMessage *v14; 
  void (__fastcall *message_init)(ProtobufCMessage *); 
  unsigned __int64 i; 
  __int64 v18; 
  const ProtobufCFieldDescriptor *v19; 
  _DWORD *default_value; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  int v24; 
  __int64 v25; 
  unsigned int v26; 
  char *v27; 
  char v28; 
  char v29; 
  const ProtobufCFieldDescriptor *v30; 
  int v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned int v34; 
  int v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  char *v40; 
  unsigned int v41; 
  __int64 v42; 
  __int64 v43; 
  _QWORD *v44; 
  unsigned __int64 v45; 
  char *v46; 
  char v47; 
  _DWORD *v48; 
  unsigned int n_fields; 
  unsigned int j; 
  const ProtobufCFieldDescriptor *v51; 
  ProtobufCLabel label; 
  __int64 v53; 
  __int64 quantifier_offset; 
  __int64 v55; 
  __int64 v56; 
  char *v57; 
  __int64 v58; 
  unsigned int v59; 
  bool v60; 
  __int64 *m; 
  unsigned int v62; 
  __int64 k; 
  const ProtobufCFieldDescriptor *v64; 
  __int64 v65; 
  const ProtobufCFieldDescriptor *v66; 
  __int64 v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  int v71; 
  char *v72; 
  unsigned int v73; 
  int v74; 
  const unsigned __int8 *v75; 
  __int64 v76; 
  __int64 v77; 
  const ProtobufCFieldDescriptor *fields; 
  __m256i v79; 
  __int64 v80[24]; 
  char v81; 
  char v82[16]; 

  v4 = &protobuf_c__allocator;
  fields = desc->fields;
  v75 = data;
  v69 = 0;
  v6 = 0;
  v70 = 0;
  if ( allocator )
    v4 = allocator;
  v77 = 0i64;
  v73 = 0;
  v7 = data;
  v71 = 0;
  v72 = v82;
  v9 = (ProtobufCMessage *)v4->alloc(v4->allocator_data, desc->sizeof_message);
  if ( !v9 )
    return 0i64;
  v10 = 1;
  v80[0] = (__int64)&v81;
  v11 = (desc->n_fields + 7) >> 3;
  v12 = v11;
  if ( v11 <= 0x10 )
  {
    v13 = v82;
  }
  else
  {
    v13 = (char *)v4->alloc(v4->allocator_data, v11);
    v72 = v13;
    if ( !v13 )
    {
      v14 = v9;
LABEL_7:
      v4->free(v4->allocator_data, v14);
      return 0i64;
    }
    v71 = 1;
  }
  memset_0(v13, 0, v12);
  message_init = desc->message_init;
  if ( message_init )
  {
    message_init(v9);
  }
  else
  {
    memset_0(v9, 0, desc->sizeof_message);
    v18 = 0i64;
    for ( v9->descriptor = desc; (unsigned int)v18 < desc->n_fields; v18 = (unsigned int)(v18 + 1) )
    {
      v19 = desc->fields;
      default_value = v19[v18].default_value;
      if ( default_value && v19[v18].label != PROTOBUF_C_LABEL_REPEATED )
      {
        i = (unsigned __int64)v9 + v19[v18].offset;
        switch ( v19[v18].type )
        {
          case PROTOBUF_C_TYPE_INT32:
          case PROTOBUF_C_TYPE_SINT32:
          case PROTOBUF_C_TYPE_SFIXED32:
          case PROTOBUF_C_TYPE_UINT32:
          case PROTOBUF_C_TYPE_FIXED32:
          case PROTOBUF_C_TYPE_FLOAT:
          case PROTOBUF_C_TYPE_BOOL:
          case PROTOBUF_C_TYPE_ENUM:
            *(_DWORD *)i = *default_value;
            break;
          case PROTOBUF_C_TYPE_INT64:
          case PROTOBUF_C_TYPE_SINT64:
          case PROTOBUF_C_TYPE_SFIXED64:
          case PROTOBUF_C_TYPE_UINT64:
          case PROTOBUF_C_TYPE_FIXED64:
          case PROTOBUF_C_TYPE_DOUBLE:
            *(_QWORD *)i = *(_QWORD *)default_value;
            break;
          case PROTOBUF_C_TYPE_STRING:
          case PROTOBUF_C_TYPE_MESSAGE:
            *(_QWORD *)i = default_value;
            break;
          case PROTOBUF_C_TYPE_BYTES:
            *(_OWORD *)i = *(_OWORD *)default_value;
            break;
          default:
            continue;
        }
      }
    }
  }
  if ( len )
  {
    while ( 1 )
    {
      v21 = len;
      v22 = 4i64;
      if ( len > 5 )
        v21 = 5;
      v23 = *v7;
      v24 = (v23 >> 3) & 0xF;
      v74 = *v7 & 7;
      if ( (v23 & 0x80u) != 0 )
      {
        v26 = 1;
        if ( v21 <= 1 )
          goto $error_cleanup_during_scan;
        v27 = (char *)(v7 + 1);
        while ( 1 )
        {
          v28 = *v27;
          i = v26 + 1;
          if ( *v27 >= 0 )
            break;
          v29 = v22;
          v22 = (unsigned int)(v22 + 7);
          ++v27;
          v24 |= (v28 & 0x7F) << v29;
          v26 = i;
          if ( (unsigned int)i >= v21 )
            goto $error_cleanup_during_scan;
        }
        v24 |= v7[v26] << v22;
        v25 = (unsigned int)i;
        if ( v26 == -1 )
        {
$error_cleanup_during_scan:
          ((void (__fastcall *)(void *, ProtobufCMessage *, unsigned __int64, __int64))v4->free)(v4->allocator_data, v9, i, v22);
          if ( v69 )
          {
            do
            {
              if ( v80[v10] )
                ((void (__fastcall *)(void *))v4->free)(v4->allocator_data);
              ++v10;
            }
            while ( v10 <= v69 );
          }
          if ( v71 && v72 )
            v4->free(v4->allocator_data, v72);
          return 0i64;
        }
      }
      else
      {
        v25 = 1i64;
      }
      if ( fields && fields->id == v24 )
      {
        i = v73;
        v30 = fields;
      }
      else
      {
        v31 = int_range_lookup(desc->n_field_ranges, desc->field_ranges, v24);
        if ( v31 < 0 )
        {
          v30 = NULL;
          ++v77;
          goto LABEL_48;
        }
        i = (unsigned int)v31;
        v73 = v31;
        v30 = &desc->fields[v31];
        fields = v30;
      }
      if ( v30 && v30->label == PROTOBUF_C_LABEL_REQUIRED )
        v72[(unsigned __int64)(unsigned int)i >> 3] |= 1 << (i & 7);
LABEL_48:
      v32 = len - v25;
      v22 = (__int64)&v75[v25];
      LOBYTE(v25) = 0;
      v76 = v22;
      v79.m256i_i32[0] = v24;
      v79.m256i_i8[4] = v74;
      v79.m256i_i64[1] = (__int64)v30;
      v79.m256i_i64[3] = v22;
      v79.m256i_i8[5] = 0;
      if ( !v74 )
      {
        v38 = 10;
        if ( v32 < 0xA )
          v38 = v32;
        v39 = 0;
        if ( v38 )
        {
          v40 = (char *)v22;
          do
          {
            if ( *v40 >= 0 )
              break;
            ++v39;
            ++v40;
          }
          while ( v39 < v38 );
        }
        if ( v39 == v38 )
          goto $error_cleanup_during_scan;
        v33 = v39 + 1;
        goto LABEL_73;
      }
      if ( v74 == 1 )
      {
        if ( v32 < 8 )
          goto $error_cleanup_during_scan;
        v33 = 8i64;
LABEL_73:
        v79.m256i_i64[2] = v33;
        goto LABEL_74;
      }
      if ( v74 != 2 )
      {
        if ( v74 != 5 || v32 < 4 )
          goto $error_cleanup_during_scan;
        v33 = 4i64;
        goto LABEL_73;
      }
      v34 = 5;
      if ( v32 < 5 )
        v34 = v32;
      v35 = 0;
      v36 = 0;
      for ( i = 0i64; (unsigned int)i < v34; ++v22 )
      {
        v37 = (*(_BYTE *)v22 & 0x7F) << v36;
        v36 += 7;
        v35 |= v37;
        if ( *(char *)v22 >= 0 )
          break;
        i = (unsigned int)(i + 1);
      }
      if ( (_DWORD)i == v34 )
        goto $error_cleanup_during_scan;
      LODWORD(v25) = i + 1;
      v33 = (unsigned int)(i + 1 + v35);
      if ( v33 > v32 )
        goto $error_cleanup_during_scan;
      v79.m256i_i64[2] = (unsigned int)(v25 + v35);
      if ( !((_DWORD)i + 1 + v35) )
        goto $error_cleanup_during_scan;
      v79.m256i_i8[5] = i + 1;
LABEL_74:
      v41 = v69;
      if ( v70 == 1 << (v69 + 4) )
      {
        v70 = 0;
        if ( v69 == 22 )
          goto $error_cleanup_during_scan;
        ++v69;
        v42 = ((__int64 (__fastcall *)(void *, __int64, unsigned __int64, __int64))v4->alloc)(v4->allocator_data, 32i64 << ((unsigned __int8)v41 + 5), i, v22);
        v41 = v69;
        v80[v69] = v42;
        if ( !v42 )
          goto $error_cleanup_during_scan;
      }
      v43 = 32i64 * v70++;
      *(__m256i *)(v80[v41] + v43) = v79;
      if ( v30 && v30->label == PROTOBUF_C_LABEL_REPEATED )
      {
        v44 = (const ProtobufCMessageDescriptor **)((char *)&v9->descriptor + v30->quantifier_offset);
        if ( v74 == 2 && ((v30->flags & 1) != 0 || (unsigned int)(v30->type - 14) > 2) )
        {
          i = (unsigned __int8)v25;
          v45 = v33 - (unsigned __int8)v25;
          v22 = 0x140000000ui64;
          switch ( v30->type )
          {
            case PROTOBUF_C_TYPE_INT32:
            case PROTOBUF_C_TYPE_SINT32:
            case PROTOBUF_C_TYPE_INT64:
            case PROTOBUF_C_TYPE_SINT64:
            case PROTOBUF_C_TYPE_UINT32:
            case PROTOBUF_C_TYPE_UINT64:
            case PROTOBUF_C_TYPE_ENUM:
              v46 = (char *)((unsigned __int8)v25 + v76);
              for ( i = 0i64; v45; --v45 )
              {
                v47 = *v46;
                v48 = (_DWORD *)(i + 1);
                ++v46;
                if ( v47 < 0 )
                  v48 = (_DWORD *)i;
                i = (unsigned __int64)v48;
              }
              v45 = i;
              goto LABEL_92;
            case PROTOBUF_C_TYPE_SFIXED32:
            case PROTOBUF_C_TYPE_FIXED32:
            case PROTOBUF_C_TYPE_FLOAT:
              if ( (v45 & 3) != 0 )
                goto $error_cleanup_during_scan;
              *v44 += v45 >> 2;
              break;
            case PROTOBUF_C_TYPE_SFIXED64:
            case PROTOBUF_C_TYPE_FIXED64:
            case PROTOBUF_C_TYPE_DOUBLE:
              if ( (v45 & 7) != 0 )
                goto $error_cleanup_during_scan;
              *v44 += v45 >> 3;
              break;
            case PROTOBUF_C_TYPE_BOOL:
LABEL_92:
              *v44 += v45;
              break;
            default:
              goto $error_cleanup_during_scan;
          }
        }
        else
        {
          ++*v44;
        }
      }
      v7 = (const unsigned __int8 *)(v33 + v76);
      v75 = (const unsigned __int8 *)(v33 + v76);
      len = v32 - v33;
      if ( !len )
      {
        v6 = v69;
        break;
      }
    }
  }
  n_fields = desc->n_fields;
  for ( j = 0; j < n_fields; ++j )
  {
    v51 = &desc->fields[j];
    label = v51->label;
    if ( label == PROTOBUF_C_LABEL_REPEATED )
    {
      switch ( v51->type )
      {
        case PROTOBUF_C_TYPE_INT32:
        case PROTOBUF_C_TYPE_SINT32:
        case PROTOBUF_C_TYPE_SFIXED32:
        case PROTOBUF_C_TYPE_UINT32:
        case PROTOBUF_C_TYPE_FIXED32:
        case PROTOBUF_C_TYPE_FLOAT:
        case PROTOBUF_C_TYPE_BOOL:
        case PROTOBUF_C_TYPE_ENUM:
          v53 = 4i64;
          break;
        case PROTOBUF_C_TYPE_INT64:
        case PROTOBUF_C_TYPE_SINT64:
        case PROTOBUF_C_TYPE_SFIXED64:
        case PROTOBUF_C_TYPE_UINT64:
        case PROTOBUF_C_TYPE_FIXED64:
        case PROTOBUF_C_TYPE_DOUBLE:
        case PROTOBUF_C_TYPE_STRING:
        case PROTOBUF_C_TYPE_MESSAGE:
          v53 = 8i64;
          break;
        case PROTOBUF_C_TYPE_BYTES:
          v53 = 16i64;
          break;
        default:
          v53 = 0i64;
          break;
      }
      quantifier_offset = v51->quantifier_offset;
      v55 = *(__int64 *)((char *)&v9->descriptor + quantifier_offset);
      if ( v55 )
      {
        *(const ProtobufCMessageDescriptor **)((char *)&v9->descriptor + quantifier_offset) = NULL;
        v56 = v4->alloc(v4->allocator_data, v53 * (unsigned int)v55);
        if ( !v56 )
        {
          for ( k = j + 1; (unsigned int)k < desc->n_fields; k = (unsigned int)(k + 1) )
          {
            v64 = desc->fields;
            if ( v64[k].label == PROTOBUF_C_LABEL_REPEATED )
              *(const ProtobufCMessageDescriptor **)((char *)&v9->descriptor + v64[k].quantifier_offset) = NULL;
          }
          goto LABEL_139;
        }
        *(const ProtobufCMessageDescriptor **)((char *)&v9->descriptor + v51->offset) = (const ProtobufCMessageDescriptor *)v56;
      }
    }
    else if ( label == PROTOBUF_C_LABEL_REQUIRED && !v51->default_value )
    {
      v57 = v72;
      if ( ((unsigned __int8)(1 << (j & 7)) & (unsigned __int8)v72[(unsigned __int64)j >> 3]) == 0 )
      {
        v65 = j + 1;
        if ( (unsigned int)v65 < n_fields )
        {
          do
          {
            v66 = desc->fields;
            if ( v66[v65].label == PROTOBUF_C_LABEL_REPEATED )
              *(const ProtobufCMessageDescriptor **)((char *)&v9->descriptor + v66[v65].quantifier_offset) = NULL;
            v65 = (unsigned int)(v65 + 1);
          }
          while ( (unsigned int)v65 < desc->n_fields );
        }
        goto $error_cleanup;
      }
    }
    n_fields = desc->n_fields;
  }
  if ( !v77 || (v58 = (__int64)v4->alloc(v4->allocator_data, 24 * v77), (v9->unknown_fields = (ProtobufCMessageUnknownField *)v58) != NULL) )
  {
    v59 = 0;
    v60 = v69 == 0;
    for ( m = v80; ; ++m )
    {
      v62 = v60 ? v70 : 1 << (v59 + 4);
      v67 = *m;
      v68 = 0;
      if ( v62 )
        break;
LABEL_129:
      v60 = ++v59 == v69;
      if ( v59 > v69 )
      {
        if ( v69 )
        {
          do
          {
            if ( v80[v10] )
              ((void (__fastcall *)(void *))v4->free)(v4->allocator_data);
            ++v10;
          }
          while ( v10 <= v69 );
        }
        if ( v71 )
        {
          if ( v72 )
            v4->free(v4->allocator_data, v72);
        }
        return v9;
      }
    }
    while ( parse_member((_ScannedMember *)(v67 + 32i64 * v68), v9, v4) )
    {
      if ( ++v68 >= v62 )
        goto LABEL_129;
    }
    v6 = v69;
  }
LABEL_139:
  v57 = v72;
$error_cleanup:
  j_protobuf_c_message_free_unpacked(v9, v4);
  if ( v6 )
  {
    do
    {
      if ( v80[v10] )
        ((void (__fastcall *)(void *))v4->free)(v4->allocator_data);
      ++v10;
    }
    while ( v10 <= v6 );
  }
  if ( v71 && v57 )
  {
    v14 = (ProtobufCMessage *)v57;
    goto LABEL_7;
  }
  return 0i64;
}

/*
==============
protobuf_c_service_descriptor_get_method_by_name
==============
*/
const ProtobufCMethodDescriptor *protobuf_c_service_descriptor_get_method_by_name(const ProtobufCServiceDescriptor *desc, const char *name)
{
  __int64 v2; 
  const unsigned int *method_indices_by_name; 
  unsigned int n_methods; 
  const ProtobufCMethodDescriptor *v7; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  unsigned __int8 v12; 
  int v13; 
  const ProtobufCMethodDescriptor *methods; 
  const char *v15; 
  const ProtobufCMethodDescriptor *result; 
  const char *v17; 
  int v18; 
  int v19; 

  v2 = 0i64;
  if ( !desc )
    return 0i64;
  method_indices_by_name = desc->method_indices_by_name;
  if ( !method_indices_by_name )
    return 0i64;
  n_methods = desc->n_methods;
  if ( n_methods <= 1 )
  {
LABEL_15:
    if ( n_methods )
    {
      methods = desc->methods;
      v15 = methods[method_indices_by_name[v2]].name;
      result = &methods[method_indices_by_name[v2]];
      v17 = (const char *)(name - v15);
      do
      {
        v18 = (unsigned __int8)v17[(_QWORD)v15];
        v19 = *(unsigned __int8 *)v15 - v18;
        if ( v19 )
          break;
        ++v15;
      }
      while ( v18 );
      if ( !v19 )
        return result;
    }
    return 0i64;
  }
  v7 = desc->methods;
  while ( 1 )
  {
    v8 = (n_methods >> 1) + (unsigned int)v2;
    v9 = method_indices_by_name[v8];
    v10 = v7[v9].name;
    v11 = (const char *)(name - v10);
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 != v11[(_QWORD)v10] )
        break;
      ++v10;
      if ( !v12 )
      {
        v13 = 0;
        goto LABEL_10;
      }
    }
    v13 = v12 < (unsigned int)v11[(_QWORD)v10] ? -1 : 1;
LABEL_10:
    if ( !v13 )
      return &v7[v9];
    if ( v13 >= 0 )
    {
      n_methods >>= 1;
    }
    else
    {
      n_methods = n_methods - (n_methods >> 1) - 1;
      v2 = (unsigned int)(v8 + 1);
    }
    if ( n_methods <= 1 )
      goto LABEL_15;
  }
}

/*
==============
protobuf_c_service_destroy
==============
*/
void protobuf_c_service_destroy(ProtobufCService *service)
{
  ((void (*)(void))service->destroy)();
}

/*
==============
protobuf_c_service_generated_init
==============
*/
void protobuf_c_service_generated_init(ProtobufCService *service, const ProtobufCServiceDescriptor *descriptor, void (*destroy)(ProtobufCService *))
{
  service->descriptor = descriptor;
  service->destroy = destroy;
  service->invoke = j_protobuf_c_service_invoke_internal;
  memset_0(&service[1], 0, 8i64 * descriptor->n_methods);
}

/*
==============
protobuf_c_service_invoke_internal
==============
*/
void protobuf_c_service_invoke_internal(ProtobufCService *service, unsigned int method_index, const ProtobufCMessage *input, void (*closure)(const ProtobufCMessage *, void *), void *closure_data)
{
  (*((void (__fastcall **)(ProtobufCService *, const ProtobufCMessage *, void (__fastcall *)(const ProtobufCMessage *, void *), void *))&service[1].descriptor + method_index))(service, input, closure, closure_data);
}

/*
==============
protobuf_c_version
==============
*/
const char *protobuf_c_version()
{
  return "1.3.1";
}

/*
==============
protobuf_c_version_number
==============
*/
__int64 protobuf_c_version_number()
{
  return 1003001i64;
}

/*
==============
repeated_field_get_packed_size
==============
*/
unsigned __int64 repeated_field_get_packed_size(const ProtobufCFieldDescriptor *field, unsigned __int64 count, const void *member)
{
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned int id; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 j; 
  int v12; 
  unsigned __int64 i; 
  int v14; 
  unsigned __int64 n; 
  int v16; 
  unsigned __int64 m; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  unsigned __int64 k; 
  int v22; 
  unsigned __int64 ii; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  int v28; 
  unsigned __int64 jj; 
  unsigned __int64 v30; 
  __int64 v31; 
  int v32; 
  unsigned int v33; 
  __int64 v34; 
  unsigned int packed_size; 
  unsigned __int64 v36; 
  __int64 v37; 

  v3 = *(_QWORD *)member;
  v4 = 0i64;
  if ( !count )
    return 0i64;
  id = field->id;
  v9 = 1i64;
  if ( id >= 0x10 )
  {
    if ( id >= 0x800 )
    {
      if ( id >= 0x40000 )
        v10 = 5i64 - (id < 0x2000000);
      else
        v10 = 3i64;
    }
    else
    {
      v10 = 2i64;
    }
  }
  else
  {
    v10 = 1i64;
  }
  if ( (field->flags & 1) == 0 )
    v10 *= count;
  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      for ( i = 0i64; i < count; i = (unsigned int)(v14 + 1) )
        v4 += int32_size(*(_DWORD *)(v3 + 4 * i));
      break;
    case PROTOBUF_C_TYPE_SINT32:
      for ( j = 0i64; j < count; j = (unsigned int)(v12 + 1) )
        v4 += sint32_size(*(_DWORD *)(v3 + 4 * j));
      break;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      v4 = 4 * count;
      break;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      for ( k = 0i64; k < count; k = (unsigned int)(v22 + 1) )
        v4 += uint64_size(*(_QWORD *)(v3 + 8 * k));
      break;
    case PROTOBUF_C_TYPE_SINT64:
      for ( m = 0i64; m < count; m = (unsigned int)(v20 + 1) )
      {
        v18 = *(_QWORD *)(v3 + 8 * m);
        v19 = ~(2 * v18);
        if ( v18 >= 0 )
          v19 = 2 * v18;
        v4 += uint64_size(v19);
      }
      break;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      v4 = 8 * count;
      break;
    case PROTOBUF_C_TYPE_UINT32:
      for ( n = 0i64; n < count; n = (unsigned int)(v16 + 1) )
        v4 += uint32_size(*(_DWORD *)(v3 + 4 * n));
      break;
    case PROTOBUF_C_TYPE_BOOL:
      v4 = count;
      break;
    case PROTOBUF_C_TYPE_STRING:
      for ( ii = 0i64; ii < count; ii = (unsigned int)(v28 + 1) )
      {
        v24 = *(_QWORD *)(v3 + 8 * ii);
        v25 = -1i64;
        do
          ++v25;
        while ( *(_BYTE *)(v24 + v25) );
        v26 = uint32_size(v25);
        v4 += v27 + v26;
      }
      break;
    case PROTOBUF_C_TYPE_BYTES:
      for ( jj = 0i64; jj < count; jj = (unsigned int)(v32 + 1) )
      {
        v30 = uint32_size(*(_QWORD *)(v3 + 16 * jj));
        v4 += v31 + v30;
      }
      break;
    case PROTOBUF_C_TYPE_MESSAGE:
      v33 = 0;
      v34 = 0i64;
      do
      {
        packed_size = j_protobuf_c_message_get_packed_size(*(const ProtobufCMessage **)(v3 + 8 * v34));
        v36 = uint32_size(packed_size);
        ++v33;
        v4 += v37 + v36;
        v34 = v33;
      }
      while ( v33 < count );
      break;
    default:
      break;
  }
  if ( (field->flags & 1) != 0 )
  {
    if ( (unsigned int)v4 >= 0x80 )
    {
      if ( (unsigned int)v4 >= 0x4000 )
      {
        if ( (unsigned int)v4 >= 0x200000 )
          v9 = 5i64 - ((unsigned int)v4 < 0x10000000);
        else
          v9 = 3i64;
      }
      else
      {
        v9 = 2i64;
      }
    }
    v10 += v9;
  }
  return v10 + v4;
}

/*
==============
repeated_field_pack
==============
*/
__int64 repeated_field_pack(const ProtobufCFieldDescriptor *field, unsigned __int64 count, const void *member, unsigned __int8 *out)
{
  char *v5; 
  __int64 id; 
  int v10; 
  int v11; 
  unsigned int type; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned __int8 *v20; 
  unsigned __int8 *v21; 
  int v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  unsigned int v43; 
  __int64 v44; 
  unsigned __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  __int64 v48; 
  unsigned int v49; 
  __int64 v50; 
  unsigned int v51; 
  unsigned int v52; 
  __int64 v53; 
  int v54; 
  int v55; 

  v5 = *(char **)member;
  if ( (field->flags & 1) != 0 )
  {
    if ( count )
    {
      id = field->id;
      if ( (unsigned int)id >= 0x20000000 )
        v10 = uint64_pack(8 * id, out);
      else
        v10 = uint32_pack(8 * (int)id, out);
      *out |= 2u;
      v11 = v10;
      type = field->type;
      v13 = v10;
      v55 = v10;
      v14 = 1;
      if ( type <= 0xA && (v15 = 1156, _bittest(&v15, type)) )
      {
        v16 = 4;
      }
      else if ( ((type - 5) & 0xFFFFFFF9) != 0 || (v16 = 8, type == 7) )
      {
        v16 = 1;
      }
      v17 = v16 * count;
      if ( (unsigned int)(v16 * count) >= 0x80 )
      {
        if ( v17 >= 0x4000 )
        {
          if ( v17 >= 0x200000 )
            v18 = 5 - (v17 < 0x10000000);
          else
            v18 = 3;
        }
        else
        {
          v18 = 2;
        }
      }
      else
      {
        v18 = 1;
      }
      v19 = v18 + v11;
      v54 = v18;
      v20 = &out[v19];
      v21 = v20;
      v22 = (_DWORD)out + v19;
      switch ( type )
      {
        case 0u:
        case 0xDu:
          v23 = 0;
          if ( count )
          {
            v24 = 0i64;
            do
            {
              v25 = int32_pack(*(_DWORD *)&v5[4 * v24], v21);
              v21 = (unsigned __int8 *)(v25 + v26);
              v24 = ++v23;
              v22 = (int)v21;
            }
            while ( v23 < count );
          }
          goto LABEL_51;
        case 1u:
          v27 = 0;
          if ( count )
          {
            v28 = 0i64;
            do
            {
              v29 = *(_DWORD *)&v5[4 * v28];
              v30 = ~(2 * v29);
              if ( v29 >= 0 )
                v30 = 2 * v29;
              v31 = uint32_pack(v30, v21);
              v21 = (unsigned __int8 *)(v31 + v32);
              v28 = ++v27;
              v22 = (int)v21;
            }
            while ( v27 < count );
          }
          goto LABEL_51;
        case 2u:
        case 7u:
        case 0xAu:
          memcpy_0(&out[v19], v5, (unsigned int)(4 * count));
          v22 = (_DWORD)v20 + 4 * count;
          goto LABEL_52;
        case 3u:
        case 8u:
          v43 = 0;
          if ( count )
          {
            v44 = 0i64;
            do
            {
              v45 = uint64_pack(*(_QWORD *)&v5[8 * v44], v21);
              v21 = (unsigned __int8 *)(v45 + v46);
              v44 = ++v43;
              v22 = (int)v21;
            }
            while ( v43 < count );
          }
          goto LABEL_51;
        case 4u:
          v33 = 0;
          if ( count )
          {
            v34 = 0i64;
            do
            {
              v35 = *(_QWORD *)&v5[8 * v34];
              v36 = ~(2 * v35);
              if ( v35 >= 0 )
                v36 = 2 * v35;
              v37 = uint64_pack(v36, v21);
              v21 = (unsigned __int8 *)(v37 + v38);
              v34 = ++v33;
              v22 = (int)v21;
            }
            while ( v33 < count );
          }
          goto LABEL_51;
        case 5u:
        case 9u:
        case 0xBu:
          memcpy_0(&out[v19], v5, (unsigned int)(8 * count));
          v22 = (_DWORD)v20 + 8 * count;
          goto LABEL_52;
        case 6u:
          v39 = 0;
          if ( count )
          {
            v40 = 0i64;
            do
            {
              v41 = uint32_pack(*(_DWORD *)&v5[4 * v40], v21);
              v21 = (unsigned __int8 *)(v41 + v42);
              v40 = ++v39;
              v22 = (int)v21;
            }
            while ( v39 < count );
          }
          goto LABEL_51;
        case 0xCu:
          v47 = 0;
          if ( count )
          {
            v48 = 0i64;
            do
            {
              ++v47;
              *v21++ = *(_DWORD *)&v5[4 * v48] != 0;
              v48 = v47;
            }
            while ( v47 < count );
            v22 = (int)v21;
          }
LABEL_51:
          v13 = v55;
LABEL_52:
          v18 = v54;
          break;
        default:
          break;
      }
      v49 = v22 - (_DWORD)out - v19;
      if ( v49 >= 0x80 )
      {
        if ( v49 >= 0x4000 )
        {
          if ( v49 >= 0x200000 )
            v14 = 5 - (v49 < 0x10000000);
          else
            v14 = 3;
        }
        else
        {
          v14 = 2;
        }
      }
      if ( v18 != v14 )
        memmove_0(v20 + 1, &out[v19++], v49);
      uint32_pack(v49, &out[v13]);
      return v49 + v19;
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    v50 = 0i64;
    v51 = sizeof_elt_in_repeated_array(field->type);
    v52 = 0;
    if ( count )
    {
      v53 = v51;
      do
      {
        ++v52;
        v50 += required_field_pack(field, v5, &out[v50]);
        v5 += v53;
      }
      while ( v52 < count );
    }
    return v50;
  }
}

/*
==============
required_field_get_packed_size
==============
*/
__int64 required_field_get_packed_size(const ProtobufCFieldDescriptor *field, const void *member)
{
  unsigned int id; 
  __int64 v3; 
  __int64 result; 
  bool v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned int packed_size; 
  unsigned __int64 v17; 
  __int64 v18; 

  id = field->id;
  if ( id >= 0x10 )
  {
    if ( id >= 0x800 )
    {
      if ( id >= 0x40000 )
        v3 = 5i64 - (id < 0x2000000);
      else
        v3 = 3i64;
    }
    else
    {
      v3 = 2i64;
    }
  }
  else
  {
    v3 = 1i64;
  }
  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      result = v3 + int32_size(*(_DWORD *)member);
      break;
    case PROTOBUF_C_TYPE_SINT32:
      result = v3 + sint32_size(*(_DWORD *)member);
      break;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      result = v3 + 4;
      break;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      result = v3 + uint64_size(*(_QWORD *)member);
      break;
    case PROTOBUF_C_TYPE_SINT64:
      v5 = *(__int64 *)member < 0;
      v6 = 2i64 * *(_QWORD *)member;
      v7 = ~v6;
      if ( !v5 )
        v7 = v6;
      result = v3 + uint64_size(v7);
      break;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      result = v3 + 8;
      break;
    case PROTOBUF_C_TYPE_UINT32:
      result = v3 + uint32_size(*(_DWORD *)member);
      break;
    case PROTOBUF_C_TYPE_BOOL:
      result = v3 + 1;
      break;
    case PROTOBUF_C_TYPE_STRING:
      v8 = *(_QWORD *)member;
      if ( !*(_QWORD *)member )
        goto LABEL_23;
      v9 = -1i64;
      do
        ++v9;
      while ( *(_BYTE *)(v8 + v9) );
      v10 = uint32_size(v9);
      result = v3 + v11 + v10;
      break;
    case PROTOBUF_C_TYPE_BYTES:
      v14 = uint32_size(*(_QWORD *)member);
      result = v3 + v15 + v14;
      break;
    case PROTOBUF_C_TYPE_MESSAGE:
      if ( *(_QWORD *)member )
      {
        packed_size = j_protobuf_c_message_get_packed_size(*(const ProtobufCMessage **)member);
        v17 = uint32_size(packed_size);
        result = v3 + v18 + v17;
      }
      else
      {
LABEL_23:
        v12 = uint32_size(0);
        result = v3 + v13 + v12;
      }
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
required_field_pack
==============
*/
unsigned __int64 required_field_pack(const ProtobufCFieldDescriptor *field, const void *member, unsigned __int8 *out)
{
  __int64 id; 
  unsigned __int64 v5; 
  _BYTE *v6; 
  int *v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 result; 
  __int64 v11; 
  unsigned __int8 *v12; 
  size_t v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  const void *v16; 
  size_t v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  id = field->id;
  if ( (unsigned int)id >= 0x20000000 )
    v5 = uint64_pack(8 * id, out);
  else
    v5 = uint32_pack(8 * (int)id, out);
  v8 = v5;
  switch ( field->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      result = v5 + int32_pack(*v7, &v6[v5]);
      break;
    case PROTOBUF_C_TYPE_SINT32:
      v9 = ~(2 * *v7);
      if ( *v7 >= 0 )
        v9 = 2 * *v7;
      result = v5 + uint32_pack(v9, &v6[v5]);
      break;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      *v6 |= 5u;
      *(_DWORD *)&v6[v5] = *v7;
      result = v5 + 4;
      break;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      result = v5 + uint64_pack(*(_QWORD *)v7, &v6[v5]);
      break;
    case PROTOBUF_C_TYPE_SINT64:
      v11 = ~(2i64 * *(_QWORD *)v7);
      if ( *(__int64 *)v7 >= 0 )
        v11 = 2i64 * *(_QWORD *)v7;
      result = v5 + uint64_pack(v11, &v6[v5]);
      break;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      *v6 |= 1u;
      *(_QWORD *)&v6[v5] = *(_QWORD *)v7;
      result = v5 + 8;
      break;
    case PROTOBUF_C_TYPE_UINT32:
      result = v5 + uint32_pack(*v7, &v6[v5]);
      break;
    case PROTOBUF_C_TYPE_BOOL:
      v6[v5] = *v7 != 0;
      result = v5 + 1;
      break;
    case PROTOBUF_C_TYPE_STRING:
      *v6 |= 2u;
      v12 = &v6[v5];
      if ( *(_QWORD *)v7 )
      {
        v13 = -1i64;
        do
          ++v13;
        while ( *(_BYTE *)(*(_QWORD *)v7 + v13) );
        v14 = uint32_pack(v13, v12);
        memcpy_0((void *)(v14 + v15), v16, v13);
        result = v8 + v14 + v13;
      }
      else
      {
        *v12 = 0;
        result = v5 + 1;
      }
      break;
    case PROTOBUF_C_TYPE_BYTES:
      *v6 |= 2u;
      v17 = *(_QWORD *)v7;
      v18 = uint32_pack(*(_QWORD *)v7, &v6[v5]);
      memcpy_0((void *)(v18 + v19), *(const void **)(v20 + 8), v17);
      result = v8 + v18 + v17;
      break;
    case PROTOBUF_C_TYPE_MESSAGE:
      *v6 |= 2u;
      result = v5 + prefixed_message_pack(*(const ProtobufCMessage **)v7, &v6[v5]);
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
required_field_pack_to_buffer
==============
*/
unsigned __int64 required_field_pack_to_buffer(const ProtobufCFieldDescriptor *field, const void *member, ProtobufCBuffer *buffer)
{
  __int64 id; 
  unsigned __int64 packed_size; 
  const ProtobufCFieldDescriptor *v7; 
  unsigned int v8; 
  int v9; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  unsigned __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  const unsigned __int8 *v17; 
  unsigned __int64 v18; 
  const ProtobufCMessage *v19; 
  unsigned __int8 out[8]; 

  id = field->id;
  packed_size = 0i64;
  v7 = field;
  if ( (unsigned int)id >= 0x20000000 )
  {
    v13 = uint64_pack(8 * id, out);
  }
  else
  {
    v8 = 8 * id;
    v9 = 0;
    if ( (unsigned int)(8 * id) >= 0x80 )
    {
      v9 = 1;
      v10 = v8 | 0x80;
      v8 >>= 7;
      out[0] = v10;
      if ( v8 >= 0x80 )
      {
        v9 = 2;
        v11 = v8 | 0x80;
        v8 >>= 7;
        out[1] = v11;
        if ( v8 >= 0x80 )
        {
          v9 = 3;
          v12 = v8 | 0x80;
          v8 >>= 7;
          out[2] = v12;
          if ( v8 >= 0x80 )
          {
            v9 = 4;
            out[3] = v8 | 0x80;
            v8 >>= 7;
          }
        }
      }
    }
    v13 = (unsigned int)(v9 + 1);
    out[v9] = v8;
  }
  switch ( v7->type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_ENUM:
      v13 += int32_pack(*(_DWORD *)member, &out[v13]);
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_SINT32:
      v14 = ~(2 * *(_DWORD *)member);
      if ( *(int *)member >= 0 )
        v14 = 2 * *(_DWORD *)member;
      v13 += uint32_pack(v14, &out[v13]);
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
      out[0] |= 5u;
      *(_DWORD *)&out[v13] = *(_DWORD *)member;
      v13 += 4i64;
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_UINT64:
      v13 += uint64_pack(*(_QWORD *)member, &out[v13]);
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_SINT64:
      v15 = ~(2i64 * *(_QWORD *)member);
      if ( *(__int64 *)member >= 0 )
        v15 = 2i64 * *(_QWORD *)member;
      v13 += uint64_pack(v15, &out[v13]);
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
      v16 = *(_QWORD *)member;
      out[0] |= 1u;
      *(_QWORD *)&out[v13] = v16;
      v13 += 8i64;
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_UINT32:
      v13 += uint32_pack(*(_DWORD *)member, &out[v13]);
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_BOOL:
      out[v13++] = *(_DWORD *)member != 0;
      buffer->append(buffer, v13, out);
      return v13;
    case PROTOBUF_C_TYPE_STRING:
      v17 = *(const unsigned __int8 **)member;
      if ( v17 )
      {
        packed_size = -1i64;
        do
          ++packed_size;
        while ( v17[packed_size] );
      }
      out[0] |= 2u;
      v18 = uint32_pack(packed_size, &out[v13]) + v13;
      buffer->append(buffer, v18, out);
      buffer->append(buffer, packed_size, v17);
      goto LABEL_30;
    case PROTOBUF_C_TYPE_BYTES:
      packed_size = *(_QWORD *)member;
      out[0] |= 2u;
      v18 = uint32_pack(packed_size, &out[v13]) + v13;
      buffer->append(buffer, v18, out);
      buffer->append(buffer, packed_size, *((_QWORD *)member + 1));
      goto LABEL_30;
    case PROTOBUF_C_TYPE_MESSAGE:
      v19 = *(const ProtobufCMessage **)member;
      out[0] |= 2u;
      if ( v19 )
        packed_size = j_protobuf_c_message_get_packed_size(v19);
      v18 = uint32_pack(packed_size, &out[v13]) + v13;
      buffer->append(buffer, v18, out);
      j_protobuf_c_message_pack_to_buffer(v19, buffer);
LABEL_30:
      v13 = packed_size + v18;
      break;
    default:
      return v13;
  }
  return v13;
}

/*
==============
sint32_size
==============
*/
__int64 sint32_size(int v)
{
  unsigned int v1; 

  v1 = ~(2 * v);
  if ( v >= 0 )
    v1 = 2 * v;
  if ( v1 < 0x80 )
    return 1i64;
  if ( v1 < 0x4000 )
    return 2i64;
  if ( v1 >= 0x200000 )
    return 5i64 - (v1 < 0x10000000);
  return 3i64;
}

/*
==============
sizeof_elt_in_repeated_array
==============
*/
unsigned __int64 sizeof_elt_in_repeated_array(ProtobufCType type)
{
  unsigned __int64 result; 

  switch ( type )
  {
    case PROTOBUF_C_TYPE_INT32:
    case PROTOBUF_C_TYPE_SINT32:
    case PROTOBUF_C_TYPE_SFIXED32:
    case PROTOBUF_C_TYPE_UINT32:
    case PROTOBUF_C_TYPE_FIXED32:
    case PROTOBUF_C_TYPE_FLOAT:
    case PROTOBUF_C_TYPE_BOOL:
    case PROTOBUF_C_TYPE_ENUM:
      result = 4i64;
      break;
    case PROTOBUF_C_TYPE_INT64:
    case PROTOBUF_C_TYPE_SINT64:
    case PROTOBUF_C_TYPE_SFIXED64:
    case PROTOBUF_C_TYPE_UINT64:
    case PROTOBUF_C_TYPE_FIXED64:
    case PROTOBUF_C_TYPE_DOUBLE:
    case PROTOBUF_C_TYPE_STRING:
    case PROTOBUF_C_TYPE_MESSAGE:
      result = 8i64;
      break;
    case PROTOBUF_C_TYPE_BYTES:
      result = 16i64;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
uint32_pack
==============
*/
unsigned __int64 uint32_pack(unsigned int value, unsigned __int8 *out)
{
  int v2; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 
  unsigned __int8 v5; 

  v2 = 0;
  if ( value >= 0x80 )
  {
    v2 = 1;
    v3 = value | 0x80;
    value >>= 7;
    *out = v3;
    if ( value >= 0x80 )
    {
      v2 = 2;
      v4 = value | 0x80;
      value >>= 7;
      out[1] = v4;
      if ( value >= 0x80 )
      {
        v2 = 3;
        v5 = value | 0x80;
        value >>= 7;
        out[2] = v5;
        if ( value >= 0x80 )
        {
          v2 = 4;
          out[3] = value | 0x80;
          value >>= 7;
        }
      }
    }
  }
  out[v2] = value;
  return (unsigned int)(v2 + 1);
}

/*
==============
uint32_size
==============
*/
__int64 uint32_size(unsigned int v)
{
  if ( v < 0x80 )
    return 1i64;
  if ( v < 0x4000 )
    return 2i64;
  if ( v >= 0x200000 )
    return 5i64 - (v < 0x10000000);
  return 3i64;
}

/*
==============
uint64_pack
==============
*/
unsigned __int64 uint64_pack(unsigned __int64 value, unsigned __int8 *out)
{
  unsigned int v3; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int8 v8; 

  if ( !HIDWORD(value) )
    return uint32_pack(value, out);
  *out = value | 0x80;
  out[1] = ((unsigned int)value >> 7) | 0x80;
  out[2] = ((unsigned int)value >> 14) | 0x80;
  v3 = (unsigned int)value >> 28;
  out[3] = ((unsigned int)value >> 21) | 0x80;
  if ( HIDWORD(value) >= 8 )
  {
    v5 = HIDWORD(value) >> 3;
    LOBYTE(value) = v3 | (16 * (BYTE4(value) | 0xF8));
    v6 = 5;
    for ( out[4] = value; v5 >= 0x80; out[v7] = v8 )
    {
      v7 = v6;
      v8 = v5 | 0x80;
      v5 >>= 7;
      ++v6;
    }
    out[v6] = v5;
    return v6 + 1;
  }
  else
  {
    out[4] = v3 | (16 * BYTE4(value));
    return 5i64;
  }
}

/*
==============
uint64_size
==============
*/
__int64 uint64_size(unsigned __int64 v)
{
  if ( HIDWORD(v) )
  {
    if ( HIDWORD(v) >= 8 )
    {
      if ( HIDWORD(v) >= 0x400 )
      {
        if ( HIDWORD(v) >= 0x20000 )
        {
          if ( HIDWORD(v) >= 0x1000000 )
            return 10i64 - (HIDWORD(v) < 0x80000000);
          else
            return 8i64;
        }
        else
        {
          return 7i64;
        }
      }
      else
      {
        return 6i64;
      }
    }
    else
    {
      return 5i64;
    }
  }
  else if ( (unsigned int)v >= 0x80 )
  {
    if ( (unsigned int)v >= 0x4000 )
    {
      if ( (unsigned int)v >= 0x200000 )
        return 5i64 - ((unsigned int)v < 0x10000000);
      else
        return 3i64;
    }
    else
    {
      return 2i64;
    }
  }
  else
  {
    return 1i64;
  }
}

