/*
==============
MSG_GetNetFieldListForListSet
==============
*/

const NetFieldList *__fastcall MSG_GetNetFieldListForListSet(const NetFieldListSet_ID listSetID, const NetFieldList_ID listID)
{
  return ?MSG_GetNetFieldListForListSet@@YAPEBUNetFieldList@@W4NetFieldListSet_ID@@W4NetFieldList_ID@@@Z(listSetID, listID);
}

/*
==============
MSG_GetNetFieldListsNameForListSet
==============
*/

const char *__fastcall MSG_GetNetFieldListsNameForListSet(const NetFieldListSet_ID listSetID)
{
  return ?MSG_GetNetFieldListsNameForListSet@@YAPEBDW4NetFieldListSet_ID@@@Z(listSetID);
}

/*
==============
MSG_ComputeNetfieldListsHash
==============
*/

unsigned int __fastcall MSG_ComputeNetfieldListsHash()
{
  return ?MSG_ComputeNetfieldListsHash@@YAIXZ();
}

/*
==============
MSG_ComputeNetfieldListsHash
==============
*/
__int64 MSG_ComputeNetfieldListsHash()
{
  int v0; 
  const NetFieldList **p_array; 
  unsigned int v2; 
  int v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned int *p_count; 
  unsigned int *v15; 
  unsigned int v16; 
  char v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned __int8 *v23; 
  int v24; 
  int v25; 
  char v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  char v41; 
  int v42; 
  int v43; 
  int v44; 
  char v45; 
  int v46; 
  int v47; 
  int v48; 
  char v49; 
  int v50; 
  int v51; 
  unsigned int v53; 

  LOBYTE(v0) = 0;
  p_array = &s_netFieldListsForListSets[0].array;
  v2 = 0;
  v53 = 0;
  v3 = 0;
  do
  {
    v4 = *((_DWORD *)p_array + 2);
    v5 = v4;
    if ( v3 )
      v4 = __ROL4__(v4, v0);
    v6 = (__int64)*(p_array - 1);
    v2 ^= v4;
    v0 = ((_BYTE)v3 + (_BYTE)v4) & 0x1F;
    s_netfieldListsBits = v0;
    v7 = 0i64;
    s_netfieldListsHash = v2;
    v8 = -1i64;
    do
      ++v8;
    while ( *(_BYTE *)(v6 + v8) );
    v9 = (int)v8;
    v3 = v0;
    v10 = v2;
    if ( (int)v8 > 0 )
    {
      v11 = v0;
      do
      {
        v12 = *(char *)(v7 + v6);
        if ( v11 )
          v12 = __ROL4__(v12, v0);
        v2 ^= v12;
        LOBYTE(v0) = (v11 + v12) & 0x1F;
        s_netfieldListsHash = v2;
        ++v7;
        s_netfieldListsBits = (unsigned __int8)v0;
        v10 = v2;
        v3 = (unsigned __int8)v0;
        v11 = (unsigned __int8)v0;
      }
      while ( v7 < v9 );
    }
    if ( (_DWORD)v5 )
    {
      v13 = v5;
      p_count = &(*p_array)->count;
      v15 = p_count;
      do
      {
        v16 = v15[1];
        if ( v3 )
          v16 = __ROL4__(v16, v0);
        v17 = v3 + v16;
        v18 = v16 ^ v10;
        v19 = *v15;
        v20 = v17 & 0x1F;
        if ( v20 )
          v19 = __ROL4__(v19, v20);
        v21 = *p_count;
        v2 = v19 ^ v18;
        s_netfieldListsHash = v2;
        v0 = ((_BYTE)v19 + (_BYTE)v20) & 0x1F;
        v10 = v2;
        s_netfieldListsBits = v0;
        v3 = v0;
        if ( v21 )
        {
          v22 = v21;
          v23 = (unsigned __int8 *)(*((_QWORD *)v15 - 1) + 14i64);
          do
          {
            v24 = *((__int16 *)v23 - 1);
            if ( v3 )
              v24 = __ROL4__(v24, v0);
            v25 = v24 ^ v2;
            v26 = v3 + v24;
            v27 = *v23;
            v28 = v26 & 0x1F;
            if ( v28 )
              v27 = __ROL4__(v27, v28);
            v29 = *(_QWORD *)(v23 - 14);
            v30 = v27 ^ v25;
            v31 = ((_BYTE)v27 + (_BYTE)v28) & 0x1F;
            v32 = 0i64;
            v33 = v30;
            v34 = -1i64;
            do
              ++v34;
            while ( *(_BYTE *)(v29 + v34) );
            v35 = (int)v34;
            v36 = v31;
            if ( (int)v34 > 0 )
            {
              v37 = v31;
              do
              {
                v38 = *(char *)(v32 + v29);
                if ( v37 )
                  v38 = __ROL4__(v38, v31);
                LOBYTE(v31) = (v37 + v38) & 0x1F;
                v30 = v38 ^ v33;
                ++v32;
                v33 ^= v38;
                v36 = (unsigned __int8)v31;
                v37 = (unsigned __int8)v31;
              }
              while ( v32 < v35 );
            }
            v39 = *(_DWORD *)(v23 + 2);
            if ( v36 )
              v39 = __ROL4__(v39, v31);
            v40 = v39 ^ v30;
            v41 = v36 + v39;
            v42 = *(_DWORD *)(v23 + 6);
            v43 = v41 & 0x1F;
            if ( v43 )
              v42 = __ROL4__(v42, v43);
            v44 = v42 ^ v40;
            v45 = v42 + v43;
            v46 = *((unsigned __int16 *)v23 - 2);
            v47 = v45 & 0x1F;
            if ( v47 )
              v46 = __ROL4__(v46, v47);
            v48 = v46 ^ v44;
            v49 = v46 + v47;
            v50 = *((__int16 *)v23 - 3);
            v51 = v49 & 0x1F;
            if ( v51 )
              v50 = __ROL4__(v50, v51);
            v2 = v50 ^ v48;
            v0 = ((_BYTE)v50 + (_BYTE)v51) & 0x1F;
            v23 += 24;
            v3 = v0;
            --v22;
          }
          while ( v22 );
          s_netfieldListsHash = v2;
          v10 = v2;
          s_netfieldListsBits = v0;
        }
        v15 += 6;
        p_count += 6;
        --v13;
      }
      while ( v13 );
    }
    p_array += 4;
    ++v53;
  }
  while ( v53 < 2 );
  return v2;
}

/*
==============
MSG_GetNetFieldListForListSet
==============
*/
const NetFieldList *MSG_GetNetFieldListForListSet(const NetFieldListSet_ID listSetID, const NetFieldList_ID listID)
{
  const NetFieldLists *NetFieldListsForListSet; 
  __int64 v5; 
  unsigned int count; 
  const NetFieldList *array; 
  const NetFieldList *result; 
  __int64 v9; 

  if ( listID <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp_netfields_gen.cpp", 4932, ASSERT_TYPE_ASSERT, "(listID > 0)", (const char *)&queryFormat, "listID > 0") )
    __debugbreak();
  NetFieldListsForListSet = MSG_GetNetFieldListsForListSet(listSetID);
  v5 = 0i64;
  count = NetFieldListsForListSet->count;
  if ( count )
  {
    array = NetFieldListsForListSet->array;
    while ( 1 )
    {
      result = &array[v5];
      if ( result->listId == listID )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= count )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v9) = listID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp_netfields_gen.cpp", 4944, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown netfield list %d\n", v9) )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
MSG_GetNetFieldListsForListSet
==============
*/
const NetFieldLists *MSG_GetNetFieldListsForListSet(const NetFieldListSet_ID listSetID)
{
  int v1; 
  const NetFieldLists *i; 
  __int64 v5; 
  int v6; 

  v1 = 0;
  for ( i = s_netFieldListsForListSets; i->listSetID != listSetID; ++i )
  {
    if ( (unsigned int)++v1 >= 2 )
    {
      v1 = -1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp_netfields_gen.cpp", 4917, ASSERT_TYPE_ASSERT, "( index != -1 )", "unknown netfield list set (%i)\n", listSetID) )
        __debugbreak();
      v6 = 2;
      LODWORD(v5) = -1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp_netfields_gen.cpp", 4918, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_netFieldListsForListSets ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_netFieldListsForListSets )\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
      return &s_netFieldListsForListSets[v1];
    }
  }
  return &s_netFieldListsForListSets[v1];
}

/*
==============
MSG_GetNetFieldListsNameForListSet
==============
*/
const char *MSG_GetNetFieldListsNameForListSet(const NetFieldListSet_ID listSetID)
{
  return MSG_GetNetFieldListsForListSet(listSetID)->listSetName;
}

