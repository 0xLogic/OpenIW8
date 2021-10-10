/*
==============
MSG_ReadDeltaEntityLoD
==============
*/

void __fastcall MSG_ReadDeltaEntityLoD(msg_t *msg, const clientLoDInfo_t *fromLoD, clientLoDInfo_t *toLoD, const int clientIndex)
{
  ?MSG_ReadDeltaEntityLoD@@YAXPEAUmsg_t@@PEBUclientLoDInfo_t@@PEAU2@H@Z(msg, fromLoD, toLoD, clientIndex);
}

/*
==============
MSG_ReadDeltaEntity
==============
*/

int __fastcall MSG_ReadDeltaEntity(msg_t *msg, const int time, const entityState_t *from, entityState_t *to, const int number, const int fromBaseline, const bool archived, const bool readEntityLoDBit, NetFieldLoD *const outLoD)
{
  return ?MSG_ReadDeltaEntity@@YAHPEAUmsg_t@@HPEBUentityState_t@@PEAU2@HH_N3QEAW4NetFieldLoD@@@Z(msg, time, from, to, number, fromBaseline, archived, readEntityLoDBit, outLoD);
}

/*
==============
MSG_RunUnitTest
==============
*/

void MSG_RunUnitTest(void)
{
  ?MSG_RunUnitTest@@YAXXZ();
}

/*
==============
MSG_ReadDeltaClient
==============
*/

int __fastcall MSG_ReadDeltaClient(msg_t *msg, const int time, const clientState_t *from, clientState_t *to, int number, const unsigned int clientBits)
{
  return ?MSG_ReadDeltaClient@@YAHPEAUmsg_t@@HPEBUclientState_t@@PEAU2@HI@Z(msg, time, from, to, number, clientBits);
}

/*
==============
MSG_WriteBitsCompress
==============
*/

bool __fastcall MSG_WriteBitsCompress(const bool trainHuffman, const unsigned __int8 *from, unsigned __int8 *to, const int fromSize, const int toMaxSize, int *outCurSize)
{
  return ?MSG_WriteBitsCompress@@YA_N_NPEBEPEAEHHAEAH@Z(trainHuffman, from, to, fromSize, toMaxSize, outCurSize);
}

/*
==============
MSG_ReadDeltaOmnvars
==============
*/

void __fastcall MSG_ReadDeltaOmnvars(msg_t *msg, const int time, const OmnvarData *from, OmnvarData *to)
{
  ?MSG_ReadDeltaOmnvars@@YAXPEAUmsg_t@@HPEBUOmnvarData@@PEAU2@@Z(msg, time, from, to);
}

/*
==============
MSG_ReadWeaponMapEntry_Index
==============
*/

int __fastcall MSG_ReadWeaponMapEntry_Index(msg_t *msg)
{
  return ?MSG_ReadWeaponMapEntry_Index@@YAHPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_ReadDeltaArchivedEntity
==============
*/

void __fastcall MSG_ReadDeltaArchivedEntity(msg_t *msg, const int time, const entityState_t *from, entityState_t *to, const char *fromClientMask, char *toClientMask, const unsigned int clientMaskSize, int number)
{
  ?MSG_ReadDeltaArchivedEntity@@YAXPEAUmsg_t@@HPEBUentityState_t@@PEAU2@PEBDPEADIH@Z(msg, time, from, to, fromClientMask, toClientMask, clientMaskSize, number);
}

/*
==============
MSG_ClearLastReferencedEntity
==============
*/

void __fastcall MSG_ClearLastReferencedEntity(msg_t *msg)
{
  ?MSG_ClearLastReferencedEntity@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_ReadBitsCompress
==============
*/

bool __fastcall MSG_ReadBitsCompress(const unsigned __int8 *from, unsigned __int8 *to, const int fromSize, const int toMaxSize, int *outCurSize)
{
  return ?MSG_ReadBitsCompress@@YA_NPEBEPEAEHHAEAH@Z(from, to, fromSize, toMaxSize, outCurSize);
}

/*
==============
MSG_ReadDeltaAgent
==============
*/

int __fastcall MSG_ReadDeltaAgent(msg_t *msg, const int time, const agentState_s *from, agentState_s *to, int number, const unsigned int agentBits)
{
  return ?MSG_ReadDeltaAgent@@YAHPEAUmsg_t@@HPEBUagentState_s@@PEAU2@HI@Z(msg, time, from, to, number, agentBits);
}

/*
==============
MSG_WriteDeltaClientBitsKey
==============
*/

void __fastcall MSG_WriteDeltaClientBitsKey(msg_t *const msg, const int *const key, const void *const from, const void *const to)
{
  ?MSG_WriteDeltaClientBitsKey@@YAXQEAUmsg_t@@QEBHQEBX2@Z(msg, key, from, to);
}

/*
==============
MSG_PrintNetFieldValue
==============
*/

void __fastcall MSG_PrintNetFieldValue(const void *const netfieldBuffer, const NetField *field, char *string, unsigned __int64 stringSize)
{
  ?MSG_PrintNetFieldValue@@YAXQEBXPEBUNetField@@PEAD_K@Z(netfieldBuffer, field, string, stringSize);
}

/*
==============
MSG_ReadDeltaAngleShort
==============
*/

__int16 __fastcall MSG_ReadDeltaAngleShort(msg_t *msg, const __int16 from)
{
  return ?MSG_ReadDeltaAngleShort@@YAFPEAUmsg_t@@F@Z(msg, from);
}

/*
==============
MSG_ValuesAreEqualPost
==============
*/

bool __fastcall MSG_ValuesAreEqualPost(const void *first, const void *second, const int bits, const int size)
{
  return ?MSG_ValuesAreEqualPost@@YA_NPEBX0HH@Z(first, second, bits, size);
}

/*
==============
MSG_ReadDeltaClientBitsKey
==============
*/

void __fastcall MSG_ReadDeltaClientBitsKey(msg_t *const msg, const int *const key, const void *const from, void *const to)
{
  ?MSG_ReadDeltaClientBitsKey@@YAXQEAUmsg_t@@QEBHQEBXQEAX@Z(msg, key, from, to);
}

/*
==============
MSG_DumpNetFieldChanges_f
==============
*/

void __fastcall MSG_DumpNetFieldChanges_f()
{
  ?MSG_DumpNetFieldChanges_f@@YAXXZ();
}

/*
==============
MSG_ReadDeltaPlayerstate
==============
*/

void __fastcall MSG_ReadDeltaPlayerstate(msg_t *msg, const int time, const playerState_s *from, playerState_s *to, bool archived, bool *outRecvOriginAndVelocity, bool *outRecvVehicleState)
{
  ?MSG_ReadDeltaPlayerstate@@YAXPEAUmsg_t@@HPEBUplayerState_s@@PEAU2@_NPEA_N4@Z(msg, time, from, to, archived, outRecvOriginAndVelocity, outRecvVehicleState);
}

/*
==============
MSG_ReadDeltaUmbraGateState
==============
*/

bitarray<384> *__fastcall MSG_ReadDeltaUmbraGateState(bitarray<384> *result, msg_t *msg, const bitarray<384> *from)
{
  return ?MSG_ReadDeltaUmbraGateState@@YA?AV?$bitarray@$0BIA@@@PEAUmsg_t@@PEBV1@@Z(result, msg, from);
}

/*
==============
MSG_ReadDeltaArchivedWeaponMapEntry
==============
*/

void __fastcall MSG_ReadDeltaArchivedWeaponMapEntry(msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, WeaponMapEntry *to)
{
  ?MSG_ReadDeltaArchivedWeaponMapEntry@@YAXPEAUmsg_t@@HPEBUWeaponMapEntry@@PEAU2@@Z(msg, weaponMapIndex, from, to);
}

/*
==============
MSG_ReadDeltaPlayerstateOmnvars
==============
*/

void __fastcall MSG_ReadDeltaPlayerstateOmnvars(msg_t *msg, const int time, const OmnvarData *from, OmnvarData *to)
{
  ?MSG_ReadDeltaPlayerstateOmnvars@@YAXPEAUmsg_t@@HPEBUOmnvarData@@PEAU2@@Z(msg, time, from, to);
}

/*
==============
MSG_WriteDeltaUmbraGateState
==============
*/

void __fastcall MSG_WriteDeltaUmbraGateState(msg_t *msg, const bitarray<384> *from, const bitarray<384> *to)
{
  ?MSG_WriteDeltaUmbraGateState@@YAXPEAUmsg_t@@PEBV?$bitarray@$0BIA@@@1@Z(msg, from, to);
}

/*
==============
MSG_ResetEntityToLowLoD
==============
*/

void __fastcall MSG_ResetEntityToLowLoD(entityState_t *const entityState)
{
  ?MSG_ResetEntityToLowLoD@@YAXQEAUentityState_t@@@Z(entityState);
}

/*
==============
MSG_ReadDeltaMLGSpectatorInfo
==============
*/

bool __fastcall MSG_ReadDeltaMLGSpectatorInfo(msg_t *msg, const int time, const MLGSpectatorClientInfo *from, MLGSpectatorClientInfo *to, CgGlobalsMP *cGameGlob, int clientIdx)
{
  return ?MSG_ReadDeltaMLGSpectatorInfo@@YA_NPEAUmsg_t@@HPEBUMLGSpectatorClientInfo@@PEAU2@PEAVCgGlobalsMP@@H@Z(msg, time, from, to, cGameGlob, clientIdx);
}

/*
==============
MSG_InitializeNetfields
==============
*/

void __fastcall MSG_InitializeNetfields(const char *const gameType)
{
  ?MSG_InitializeNetfields@@YAXQEBD@Z(gameType);
}

/*
==============
MSG_ReadEntityIndex
==============
*/

int __fastcall MSG_ReadEntityIndex(msg_t *msg, int indexBits)
{
  return ?MSG_ReadEntityIndex@@YAHPEAUmsg_t@@H@Z(msg, indexBits);
}

/*
==============
MSG_ReadDeltaScoreboard
==============
*/

void __fastcall MSG_ReadDeltaScoreboard(msg_t *msg, const int time, const ScoreboardInfo *from, ScoreboardInfo *to, const int clientCount)
{
  ?MSG_ReadDeltaScoreboard@@YAXPEAUmsg_t@@HPEBUScoreboardInfo@@PEAU2@H@Z(msg, time, from, to, clientCount);
}

/*
==============
MSG_ReadDeltaWeaponMapEntry
==============
*/

bool __fastcall MSG_ReadDeltaWeaponMapEntry(msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, WeaponMapEntry *to)
{
  return ?MSG_ReadDeltaWeaponMapEntry@@YA_NPEAUmsg_t@@HPEBUWeaponMapEntry@@PEAU2@@Z(msg, weaponMapIndex, from, to);
}

/*
==============
MSG_ReadDeltaTime
==============
*/

int __fastcall MSG_ReadDeltaTime(msg_t *msg, int timeBase)
{
  return ?MSG_ReadDeltaTime@@YAHPEAUmsg_t@@H@Z(msg, timeBase);
}

/*
==============
MSG_CheckFields
==============
*/
void MSG_CheckFields()
{
  int v0; 
  char *v1; 
  unsigned int i; 
  const NetFieldList *NetFieldListForNetFieldType; 
  int v4; 
  int v5; 
  entityType_s v6; 
  const NetFieldList *StateFieldListForEntityType; 
  const NetField *v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned __int16 *p_offset; 
  int v13; 
  int v14; 
  const char *EntityTypeName; 
  int v16; 
  const char *v17; 
  int v18; 
  unsigned int v19; 
  __int64 v20; 
  const char *v21; 
  const char **p_name; 
  __int64 v23; 
  unsigned __int16 v24; 
  int v25; 
  __int64 v26; 
  unsigned __int16 *v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  char *v31; 
  const char *v32; 
  const char *v33; 
  unsigned int *v34; 
  const NetFieldList *v35; 
  __int64 v36; 
  char *fmt; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 
  int NetFieldsCountForEntityType; 
  __int64 count; 
  NetField *array; 
  const NetField *v46; 
  char Buf2[256]; 
  char Buf1; 
  char v49; 

  memset_0(&Buf1, 1, 0xF8ui64);
  v0 = 0;
  v1 = &v49;
  for ( i = 0; i < 2; i += 2 )
  {
    *(_WORD *)(v1 - 1) = 0;
    v1 += 2;
  }
  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_ENTITY_STATE);
  v4 = 0;
  v5 = 0;
  array = (NetField *)NetFieldListForNetFieldType->array;
  count = (int)NetFieldListForNetFieldType->count;
  do
  {
    v6 = (__int16)v5;
    if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v5, "signed", v5) )
      __debugbreak();
    StateFieldListForEntityType = MSG_GetStateFieldListForEntityType((const entityType_s)v5);
    v8 = StateFieldListForEntityType->array;
    v46 = StateFieldListForEntityType->array;
    if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v5, "signed", v5) )
      __debugbreak();
    NetFieldsCountForEntityType = MSG_GetNetFieldsCountForEntityType((const entityType_s)v5);
    v9 = NetFieldsCountForEntityType;
    if ( NetFieldsCountForEntityType > 68 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3658, ASSERT_TYPE_ASSERT, "(numFieldsForEType <= 68)", (const char *)&queryFormat, "numFieldsForEType <= ENTITY_STATE_ORDER_SIZE") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3659, ASSERT_TYPE_ASSERT, "(numFieldsForEType <= 68)", (const char *)&queryFormat, "numFieldsForEType <= MAX_ENTITY_STATE_FIELDS") )
        __debugbreak();
    }
    if ( NetFieldsCountForEntityType > v4 )
      v4 = NetFieldsCountForEntityType;
    v42 = v4;
    VerifyNetFields(StateFieldListForEntityType, NET_FIELD_TYPE_ENTITY_STATE);
    memset_0(Buf2, 0, 0xF8ui64);
    v41 = 0;
    v10 = -1;
    v40 = -1;
    v11 = 0;
    if ( NetFieldsCountForEntityType > 0 )
    {
      p_offset = &v8->offset;
      do
      {
        v13 = 0;
        if ( abs16(*(p_offset - 1)) )
        {
          LOWORD(v14) = *p_offset;
          do
          {
            if ( v13 + (unsigned int)(unsigned __int16)v14 >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3676, ASSERT_TYPE_ASSERT, "(( netField->offset + i ) < sizeof( eTypeBytesCoverage ))", (const char *)&queryFormat, "( netField->offset + i ) < sizeof( eTypeBytesCoverage )") )
              __debugbreak();
            if ( Buf2[v13 + *p_offset] )
            {
              if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v5, "signed", v5) )
                __debugbreak();
              EntityTypeName = BG_GetEntityTypeName((const entityType_s)v5);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3678, ASSERT_TYPE_ASSERT, "(!eTypeBytesCoverage[netField->offset + i])", "%s\n\tfields '%s' is overlapping with another field for eType %s\n", "!eTypeBytesCoverage[netField->offset + i]", *(const char **)(p_offset - 5), EntityTypeName) )
                __debugbreak();
            }
            v14 = *p_offset;
            v16 = v13 + v14;
            ++v13;
            Buf2[v16] = 1;
          }
          while ( v13 < abs16(*(p_offset - 1)) );
          v11 = v41;
          v10 = v40;
          v0 = 0;
          v9 = NetFieldsCountForEntityType;
        }
        if ( *((_BYTE *)p_offset + 4) == 1 )
        {
          v10 = v11;
          v40 = v11;
        }
        else if ( v10 != -1 )
        {
          if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v5, "signed", v5) )
            __debugbreak();
          v17 = BG_GetEntityTypeName((const entityType_s)v5);
          Com_PrintWarning(25, "Netfield '%s' for eType '%s' is positioned after a NEVER_CHANGES netfield. You should probably move it above or tag it as NEVER_CHANGES.\n", *(const char **)(p_offset - 5), v17);
        }
        ++v11;
        p_offset += 12;
        v41 = v11;
      }
      while ( v11 < v9 );
      v6 = (__int16)v5;
    }
    v18 = memcmp_0(&Buf1, Buf2, 0xF8ui64);
    if ( v18 )
    {
      v19 = 0;
      v20 = 0i64;
      do
      {
        LODWORD(v38) = (unsigned __int8)*(&Buf1 + v20);
        LODWORD(fmt) = v19;
        Com_Printf(25, "eTypeBytesCoverage[%d] %d | esBytesCoverage[%d] %d\n", v19++, (unsigned __int8)Buf2[v20++], fmt, v38);
      }
      while ( v19 < 0xF8 );
      if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", v6, "signed", v5) )
        __debugbreak();
      v21 = BG_GetEntityTypeName(v6);
      LODWORD(v39) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3700, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The netfields for etype '%s' don't fully cover the entityState_t struct (missing %i)\n", v21, v39) )
        __debugbreak();
    }
    if ( count > 0 )
    {
      p_name = &array->name;
      v23 = count;
      do
      {
        v24 = *((_WORD *)p_name + 5);
        v25 = 0;
        v26 = 0i64;
        if ( v9 > 0 )
        {
          v27 = &v46->offset;
          do
          {
            if ( *v27 == v24 )
              break;
            ++v25;
            ++v26;
            v27 += 12;
          }
          while ( v26 < v9 );
        }
        if ( v25 >= v9 )
        {
          v28 = abs16(*((_WORD *)p_name + 4));
          v29 = v28;
          if ( v28 > 0 )
          {
            v30 = 0i64;
            v31 = &Buf2[v24];
            while ( v31[v30] )
            {
              if ( ++v30 >= v29 )
                goto LABEL_69;
            }
            if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v5, "signed", v5) )
              __debugbreak();
            v32 = BG_GetEntityTypeName((const entityType_s)v5);
            Com_PrintError(25, "MSG_CheckFields: nothing is pointing to the field %s for eType %s\n", *p_name, v32);
            if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v5, "signed", v5) )
              __debugbreak();
            v33 = BG_GetEntityTypeName((const entityType_s)v5);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3723, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_CheckFields: nothing is pointing to the field %s for eType %s\n", *p_name, v33) )
              __debugbreak();
          }
        }
LABEL_69:
        p_name += 3;
        --v23;
      }
      while ( v23 );
    }
    v4 = v42;
    ++v5;
  }
  while ( v5 <= 29 );
  if ( v42 < 68 )
  {
    Com_Printf(25, "ENTITY_STATE_ORDER_SIZE could be reduced from %d to %d\n", 68i64, (unsigned int)v42);
    Com_Printf(25, "MAX_ENTITY_STATE_FIELDS could be reduced from %d to %d\n", 68i64, (unsigned int)v42);
  }
  v34 = s_netfieldTypeOrderSize;
  do
  {
    v35 = MSG_GetNetFieldListForNetFieldType((const netFieldTypes_t)v0);
    if ( v35->count > *v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3763, ASSERT_TYPE_ASSERT, "(netFieldList->count <= s_netfieldTypeOrderSize[fieldType])", (const char *)&queryFormat, "netFieldList->count <= s_netfieldTypeOrderSize[fieldType]") )
      __debugbreak();
    v36 = *v34;
    if ( v35->count < (unsigned int)v36 )
    {
      LODWORD(fmt) = v35->count;
      Com_Printf(25, "order size for fieldType %d could be reduced from %d to %d\n", (unsigned int)v0, v36, fmt);
    }
    VerifyNetFields(v35, (const netFieldTypes_t)v0++);
    ++v34;
  }
  while ( v0 < 11 );
}

/*
==============
MSG_ClearLastReferencedEntity
==============
*/
void MSG_ClearLastReferencedEntity(msg_t *msg)
{
  msg->lastEntityRef = -1;
}

/*
==============
MSG_CopyFieldOver
==============
*/
void MSG_CopyFieldOver(const NetField *stateFields, const void *from, void *to, const int fieldNum)
{
  __int64 v4; 
  __int64 offset; 
  const NetField *v6; 
  int bits; 
  char *v8; 
  char *v9; 
  __int16 size; 
  int v11; 
  unsigned int v12; 
  int v13; 
  __int64 Field; 

  v4 = fieldNum;
  offset = stateFields[v4].offset;
  v6 = &stateFields[v4];
  bits = v6->bits;
  v8 = (char *)from + offset;
  v9 = (char *)to + offset;
  size = v6->size;
  if ( bits == -94 )
  {
    if ( abs16(size) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2181, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( EntityEvent ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( EntityEvent )") )
      __debugbreak();
    *(double *)v9 = *(double *)v8;
  }
  else if ( bits == -65 )
  {
    if ( abs16(size) != 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2188, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( mat33_t ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( mat33_t )") )
      __debugbreak();
    *(__m256i *)v9 = *(__m256i *)v8;
    *((_DWORD *)v9 + 8) = *((_DWORD *)v8 + 8);
  }
  else
  {
    v11 = size;
    v12 = abs16(size);
    if ( bits == -45 )
    {
      if ( v12 != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2195, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( ClientBits ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( ClientBits )") )
        __debugbreak();
      *(_DWORD *)v9 = *(_DWORD *)v8;
      *((_DWORD *)v9 + 1) = *((_DWORD *)v8 + 1);
      *((_DWORD *)v9 + 2) = *((_DWORD *)v8 + 2);
      *((_DWORD *)v9 + 3) = *((_DWORD *)v8 + 3);
      *((_DWORD *)v9 + 4) = *((_DWORD *)v8 + 4);
      *((_DWORD *)v9 + 5) = *((_DWORD *)v8 + 5);
      *((_DWORD *)v9 + 6) = *((_DWORD *)v8 + 6);
    }
    else
    {
      if ( v12 > 8 || (v13 = 278, !_bittest(&v13, v12)) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2206, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 1 || abs( field->size ) == 2 || abs( field->size ) == 4 || abs( field->size ) == 8)", "%s\n\tnetfield %s (size %d) can not be copied with the default netfield copy case. Did you forget to handle the bit serialization %d with a special case?\n", "abs( field->size ) == 1 || abs( field->size ) == 2 || abs( field->size ) == 4 || abs( field->size ) == 8", v6->name, v11, bits) )
          __debugbreak();
      }
      Field = MSG_GetField(v8, v6->size);
      MSG_SetField(v9, v6->size, Field);
    }
  }
}

/*
==============
MSG_DeltaClientBitsUnitTest
==============
*/
char MSG_DeltaClientBitsUnitTest()
{
  unsigned int v0; 
  __int64 v1; 
  int v2; 
  unsigned int i; 
  int v4; 
  int j; 
  int k; 
  unsigned int v7; 
  __int64 v8; 
  int m; 
  __int64 v10; 
  bool v11; 
  int v12; 
  __int64 n; 
  __int64 v14; 
  char result; 
  __int64 v16; 
  __int64 v17; 
  int key; 
  msg_t buf; 
  __int64 to[3]; 
  int v21; 
  int v22[8]; 
  int v23[256]; 
  int buffer[256]; 
  unsigned __int8 data[2480]; 

  v0 = 0;
  key = Sys_Milliseconds();
  v1 = 0i64;
  v2 = key;
  do
  {
    v23[v1] = v2;
    v2 += 4;
    ++v1;
  }
  while ( v1 < 255 );
  memset(to, 0, sizeof(to));
  v21 = 0;
  for ( i = 0; ; i += 2 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)i >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
      break;
    if ( i >= 0xE0 )
    {
      LODWORD(v17) = 224;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
        __debugbreak();
    }
    *((_DWORD *)to + ((unsigned __int64)i >> 5)) |= 0x80000000 >> (i & 0x1F);
  }
  MSG_Init(&buf, data, 2474);
  MSG_WriteDeltaClientBitsKey(&buf, &key, NULL, to);
  v4 = key;
  for ( j = 0; j < 85; ++j )
  {
    if ( (j & 1) != 0 )
      MSG_WriteBit0(&buf);
    else
      MSG_WriteBit1(&buf);
  }
  MSG_WriteData(&buf, v23, 1024);
  for ( k = 0; k < 85; ++k )
  {
    if ( k == 3 * (k / 3u) )
      MSG_WriteBit1(&buf);
    else
      MSG_WriteBit0(&buf);
  }
  MSG_BeginReading(&buf);
  MSG_ReadDeltaClientBitsKey(&buf, &key, NULL, v22);
  v7 = 0;
  v8 = 0i64;
  while ( v22[v8] == *(_DWORD *)((char *)to + v8 * 4) )
  {
    ++v7;
    ++v8;
    if ( v7 >= 7 )
      goto LABEL_28;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(readBits.isEqual( sendBits ))", (const char *)&queryFormat, "readBits.isEqual( sendBits )") )
    __debugbreak();
LABEL_28:
  for ( m = 0; m < 85; ++m )
  {
    v10 = MSG_ReadBits(&buf, 1u);
    if ( (m & 1) != 0 )
    {
      if ( !v10 )
        continue;
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "(bitValue == 0)", (const char *)&queryFormat, "bitValue == 0");
    }
    else
    {
      if ( v10 == 1 )
        continue;
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1390, ASSERT_TYPE_ASSERT, "(bitValue == 1)", (const char *)&queryFormat, "bitValue == 1");
    }
    if ( v11 )
      __debugbreak();
  }
  MSG_ReadData(&buf, 1024, buffer, 1024);
  v12 = 0;
  for ( n = 0i64; n < 255; ++n )
  {
    if ( buffer[n] != v12 + v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(*dataPtr == key + x)", (const char *)&queryFormat, "*dataPtr == key + x") )
      __debugbreak();
    v12 += 4;
  }
  while ( 2 )
  {
    v14 = MSG_ReadBits(&buf, 1u);
    result = -85 * v0;
    if ( v0 == 3 * (v0 / 3) )
    {
      if ( v14 != 1 )
      {
        result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1412, ASSERT_TYPE_ASSERT, "(bitValue == 1)", (const char *)&queryFormat, "bitValue == 1");
        goto LABEL_47;
      }
    }
    else if ( v14 )
    {
      result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1408, ASSERT_TYPE_ASSERT, "(bitValue == 0)", (const char *)&queryFormat, "bitValue == 0");
LABEL_47:
      if ( result )
        __debugbreak();
    }
    if ( (int)++v0 < 85 )
      continue;
    return result;
  }
}

/*
==============
MSG_DumpNetFieldChanges_f
==============
*/
void MSG_DumpNetFieldChanges_f(void)
{
  __int64 v0; 
  __m256i *v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 i; 
  unsigned int v7; 
  netFieldOrderInfo_t *v8; 
  int j; 
  __int64 v10[10]; 
  __int64 v11[10]; 
  __m256i v12; 
  int v13; 
  int v14; 

  v13 = 8;
  v11[0] = (__int64)orderInfo.clientState;
  v14 = 55;
  v11[1] = (__int64)orderInfo.agentState;
  v11[2] = (__int64)orderInfo.playerState;
  v11[3] = (__int64)orderInfo.objective;
  v11[4] = (__int64)orderInfo.hudElem;
  v11[5] = (__int64)orderInfo.headIcon;
  v11[6] = (__int64)orderInfo.headIconExtendedData;
  v11[7] = (__int64)orderInfo.targetMarkers;
  v11[8] = (__int64)orderInfo.calloutMarkers;
  v11[9] = (__int64)orderInfo.mlgSpectator;
  v10[0] = (__int64)"Client State";
  v10[1] = (__int64)"Agent State";
  v10[2] = (__int64)"Player State";
  v10[3] = (__int64)"Objective";
  v10[4] = (__int64)"HUD Elem";
  v10[5] = (__int64)"Head Icon";
  v10[6] = (__int64)"Head Icon Extended";
  v10[7] = (__int64)"Target Markers";
  v10[8] = (__int64)"Callout Markers";
  v10[9] = (__int64)"MLG Spectator";
  v12 = _ymm;
  Com_Printf(0, "========================================\n");
  Com_Printf(0, "NetField changes. format: field# : #changes\n");
  v0 = 0i64;
  v1 = &v12;
  v2 = 10i64;
  do
  {
    Com_Printf(0, "========================================\n");
    Com_Printf(0, "    %s\n", (const char *)v10[v0]);
    Com_Printf(0, "--------------------\n");
    v3 = v1->m256i_i32[0];
    v4 = 0;
    v5 = v11[v0];
    for ( i = 0i64; i < v3; ++i )
      Com_Printf(0, "%3i : %8i\n", v4++, *(unsigned int *)(v5 + 4 * i));
    ++v0;
    v1 = (__m256i *)((char *)v1 + 4);
    --v2;
  }
  while ( v2 );
  v7 = 0;
  v8 = &orderInfo;
  do
  {
    Com_Printf(0, "========================================\n");
    Com_Printf(0, "    Entity State: Type %d\n", v7);
    Com_Printf(0, "--------------------\n");
    for ( j = 0; j < 68; ++j )
    {
      Com_Printf(0, "%3i : %8i\n", (unsigned int)j, (unsigned int)v8->entState[0][0]);
      v8 = (netFieldOrderInfo_t *)((char *)v8 + 4);
    }
    ++v7;
  }
  while ( v7 <= 0x1D );
  Com_Printf(0, "========================================\n");
  Com_Printf(0, "========================================\n");
}

/*
==============
MSG_InitializeNetfields
==============
*/
void MSG_InitializeNetfields(const char *const gameType)
{
  MSG_SetupNetFieldListsForGame(gameType);
  MSG_CheckFields();
}

/*
==============
MSG_PrintNetFieldValue
==============
*/
void MSG_PrintNetFieldValue(const void *const netfieldBuffer, const NetField *field, char *string, unsigned __int64 stringSize)
{
  int bits; 
  int v9; 
  unsigned int i; 
  const char *v11; 
  int size; 
  int v13; 
  int fmt; 
  int v15; 

  bits = (unsigned __int16)field->bits;
  switch ( (_WORD)bits )
  {
    case 0xFFA2:
      fmt = *((_DWORD *)netfieldBuffer + 1);
      Com_sprintf(string, stringSize, "%d %u", *(unsigned int *)netfieldBuffer, fmt);
      break;
    case 0xFF91:
$LN28_27:
      Com_sprintf(string, stringSize, "%u", *(unsigned int *)netfieldBuffer);
      break;
    case 0xFFBF:
      Com_sprintf(string, stringSize, "[%f,%f,%f],[%f,%f,%f],[%f,%f,%f]", *(float *)netfieldBuffer, *((float *)netfieldBuffer + 1), *((float *)netfieldBuffer + 2), *((float *)netfieldBuffer + 3), *((float *)netfieldBuffer + 4), *((float *)netfieldBuffer + 5), *((float *)netfieldBuffer + 6), *((float *)netfieldBuffer + 7), *((float *)netfieldBuffer + 8));
      break;
    case 0xFFD3:
      v9 = Com_sprintf(string, stringSize, "[", field);
      for ( i = 0; i < 7; ++i )
      {
        v11 = "%u";
        if ( i )
          v11 = ",%u";
        v9 += Com_sprintf(&string[v9], stringSize - v9, v11, *(unsigned int *)netfieldBuffer);
        netfieldBuffer = (char *)netfieldBuffer + 4;
      }
      Com_sprintf(&string[v9], stringSize - v9, "]");
      break;
    default:
      size = field->size;
      if ( abs16(field->size) == 4 && (!(_WORD)bits || (unsigned __int16)(bits + 106) <= 0x1Cu && (v13 = 530038791, _bittest(&v13, bits + 106)) || (unsigned __int16)(bits + 39) <= 2u) )
      {
        Com_sprintf(string, stringSize, "%g", *(float *)netfieldBuffer);
      }
      else
      {
        switch ( size )
        {
          case -8:
            Com_sprintf(string, stringSize, "%lld", *(_QWORD *)netfieldBuffer);
            break;
          case -4:
            Com_sprintf(string, stringSize, "%d", *(unsigned int *)netfieldBuffer);
            break;
          case -2:
            Com_sprintf(string, stringSize, "%hd", (unsigned int)*(__int16 *)netfieldBuffer);
            break;
          case -1:
            Com_sprintf(string, stringSize, "%hhd", (unsigned int)*(char *)netfieldBuffer);
            break;
          case 1:
            Com_sprintf(string, stringSize, "%hhu", *(unsigned __int8 *)netfieldBuffer);
            break;
          case 2:
            Com_sprintf(string, stringSize, "%hu", *(unsigned __int16 *)netfieldBuffer);
            break;
          case 4:
            goto $LN28_27;
          case 8:
            Com_sprintf(string, stringSize, "%llu", *(_QWORD *)netfieldBuffer);
            break;
          default:
            v15 = size;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported field size %d for %s\n", v15, field->name) )
              __debugbreak();
            break;
        }
      }
      break;
  }
}

/*
==============
MSG_ReadAnimData
==============
*/
__int64 MSG_ReadAnimData(msg_t *msg, const int *fromF, const NetField *field, int print)
{
  __int64 v8; 
  int v9; 
  unsigned int v10; 
  scr_string_t AnimsetNameByIndex; 
  scr_string_t v12; 
  bool v13; 
  unsigned int NumStates; 
  unsigned int MinBitCountForNum; 
  __int64 v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int NumEntriesForStateIndex; 
  unsigned int v21; 
  __int64 v22; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  scr_string_t StateNameFromIndex; 
  const char *v27; 
  const char *v28; 
  bool IsEnabled; 
  int Bit; 
  __int64 Bits; 
  int v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  char *fmt; 
  __int64 v47; 
  playerAnim_t v48; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 999, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !fromF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1000, ASSERT_TYPE_ASSERT, "( fromF )", (const char *)&queryFormat, "fromF") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  if ( MSG_ReadBit(msg) != 1 )
  {
    IsEnabled = PlayerASM_IsEnabled();
    Bit = MSG_ReadBit(msg);
    if ( IsEnabled )
    {
      if ( Bit == 1 )
      {
        Bits = MSG_ReadBits(msg, 2u);
        v33 = 2 * (truncate_cast<unsigned int,__int64>(Bits) & 3);
      }
      else
      {
        v33 = *fromF & 6;
      }
      v48 = (playerAnim_t)v33;
      if ( MSG_ReadBit(msg) == 1 )
      {
        v34 = MSG_ReadBits(msg, 0xEu);
        v35 = truncate_cast<unsigned int,__int64>(v34);
      }
      else
      {
        v35 = ((unsigned int)*fromF >> 3) & 0x1FFF | *((_WORD *)fromF + 1) & 0x2000;
      }
      playerAnim_t::SetPrimaryAnim(&v48, v35);
      if ( MSG_ReadBit(msg) == 1 )
      {
        v36 = MSG_ReadBits(msg, 0xEu);
        v37 = truncate_cast<unsigned int,__int64>(v36);
      }
      else
      {
        v37 = (*fromF & 0x1FFF0000 | ((unsigned int)*fromF >> 1) & 0x20000000) >> 16;
      }
      playerAnim_t::SetSecondaryAnim(&v48, v37);
      v10 = (unsigned int)v48;
      if ( !print )
        return v10;
      LODWORD(v47) = (*(_DWORD *)&v48 & 0x1FFF0000 | (*(unsigned int *)&v48 >> 1) & 0x20000000) >> 16;
      v38 = *(_BYTE *)&v48 & 1;
      LODWORD(fmt) = (*(_WORD *)&v48 & 0xFFF8 | (*(unsigned int *)&v48 >> 13) & 0x10000) >> 3;
    }
    else
    {
      if ( Bit == 1 )
      {
        v39 = MSG_ReadBits(msg, 2u);
        v40 = 2 * (truncate_cast<unsigned int,__int64>(v39) & 3);
      }
      else
      {
        v40 = *fromF & 6;
      }
      if ( MSG_ReadBit(msg) == 1 )
      {
        v41 = MSG_ReadBits(msg, 0xCu);
        v42 = (truncate_cast<unsigned int,__int64>(v41) & 0xFFF) << 13;
      }
      else
      {
        v42 = *fromF & 0x1FFE000;
      }
      v43 = v42 | v40;
      if ( MSG_ReadBit(msg) == 1 )
      {
        v44 = MSG_ReadBits(msg, 0xAu);
        v45 = 8 * (truncate_cast<unsigned int,__int64>(v44) & 0x3FF);
      }
      else
      {
        v45 = *fromF & 0x1FF8;
      }
      v10 = v43 | v45;
      if ( !print )
        return v10;
      LODWORD(v47) = (v10 >> 3) & 0x3FF;
      v38 = 0i64;
      LODWORD(fmt) = v10 >> 13;
    }
    Com_Printf(25, "%s:%d,%d,%d ", field->name, v38, fmt, v47);
    return v10;
  }
  if ( MSG_ReadBit(msg) == 1 )
  {
    v8 = MSG_ReadBits(msg, 6u);
    v9 = (truncate_cast<unsigned int,__int64>(v8) & 0x3F) << 18;
  }
  else
  {
    v9 = *fromF & 0xFC0000;
  }
  v10 = v9 | 1;
  AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(v10 >> 18);
  v12 = AnimsetNameByIndex;
  if ( AnimsetNameByIndex )
  {
    NumStates = BG_Animset_GetNumStates(AnimsetNameByIndex);
    if ( NumStates )
    {
      if ( MSG_ReadBit(msg) == 1 )
      {
        MinBitCountForNum = GetMinBitCountForNum(NumStates);
        v16 = MSG_ReadBits(msg, MinBitCountForNum);
        v17 = 2 * (truncate_cast<unsigned int,__int64>(v16) & 0x3FF);
      }
      else
      {
        v17 = *fromF & 0x7FE;
      }
      v18 = v10 | v17;
      v19 = (v18 >> 1) & 0x3FF;
      if ( v19 >= NumStates )
      {
        LODWORD(v47) = (v18 >> 1) & 0x3FF;
        v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1042, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "toValue->animState %i >= animClass->stateMachine->stateCount %i", v47, NumStates);
        goto LABEL_27;
      }
      NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(v12, v19);
      if ( MSG_ReadBit(msg) == 1 )
      {
        v21 = GetMinBitCountForNum(NumEntriesForStateIndex);
        v22 = MSG_ReadBits(msg, v21);
        v23 = (truncate_cast<unsigned int,__int64>(v22) & 0x7F) << 11;
      }
      else
      {
        v23 = *fromF & 0x3F800;
      }
      v10 = v18 | v23;
      v24 = v10;
      v25 = (v10 >> 11) & 0x7F;
      if ( v25 >= NumEntriesForStateIndex )
      {
        StateNameFromIndex = BG_Animset_GetStateNameFromIndex(v12, (v10 >> 1) & 0x3FF);
        v27 = SL_ConvertToString(StateNameFromIndex);
        v28 = SL_ConvertToString(v12);
        LODWORD(v47) = v25;
        v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1062, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "toValue->animEntry %i >= BG_Animset_GetNumEntriesForStateIndex() %i, animset %s state %s", v47, NumEntriesForStateIndex, v28, v27);
        goto LABEL_27;
      }
    }
    else
    {
      v24 = v10;
    }
    if ( print )
    {
      LODWORD(v47) = (v24 >> 1) & 0x3FF;
      LODWORD(fmt) = v24 >> 18;
      Com_Printf(25, "%s:%d,%d,%d,%d ", field->name, 1i64, fmt, v47, (v24 >> 11) & 0x7F);
    }
    return v10;
  }
  LODWORD(v47) = v10 >> 18;
  v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1022, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid animset at index %i", v47);
LABEL_27:
  if ( v13 )
    __debugbreak();
  MSG_Discard(msg);
  return 0i64;
}

/*
==============
MSG_ReadBitsCompress
==============
*/
char MSG_ReadBitsCompress(const unsigned __int8 *from, unsigned __int8 *to, const int fromSize, const int toMaxSize, int *outCurSize)
{
  int v8; 
  unsigned __int8 *outRecvByte; 
  signed __int64 v10; 
  int inOutOffset; 

  if ( fromSize > toMaxSize )
    return 0;
  v8 = 8 * fromSize;
  inOutOffset = 0;
  outRecvByte = to;
  if ( 8 * fromSize > 0 )
  {
    v10 = toMaxSize;
    while ( outRecvByte - to < v10 )
    {
      if ( !Huff_offsetReceive(g_huffReadData, from, fromSize, &inOutOffset, outRecvByte) )
      {
        if ( (unsigned int)(v8 - inOutOffset) >= 8 )
          return 0;
        goto LABEL_9;
      }
      ++outRecvByte;
      if ( inOutOffset >= v8 )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  if ( outRecvByte - to > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3945, ASSERT_TYPE_ASSERT, "( ( data - to ) <= 2147483647 )", (const char *)&queryFormat, "( data - to ) <= INT_MAX") )
    __debugbreak();
  *outCurSize = (_DWORD)outRecvByte - (_DWORD)to;
  return 1;
}

/*
==============
MSG_ReadDeltaAgent
==============
*/
int MSG_ReadDeltaAgent(msg_t *msg, const int time, const agentState_s *from, agentState_s *to, int number, const unsigned int agentBits)
{
  const NetFieldList *NetFieldListForNetFieldType; 
  int skippedFieldBits; 
  int numFields; 
  const NetField *stateFields; 
  char v15[256]; 

  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_AGENT_STATE);
  skippedFieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
  numFields = NetFieldListForNetFieldType->count;
  stateFields = NetFieldListForNetFieldType->array;
  if ( !from )
  {
    from = (const agentState_s *)v15;
    memset_0(v15, 0, 0xFCui64);
  }
  return MSG_ReadDeltaStruct(msg, time, from, to, number, numFields, agentBits, 2, stateFields, skippedFieldBits);
}

/*
==============
MSG_ReadDeltaAngle
==============
*/
float MSG_ReadDeltaAngle(msg_t *msg, const float oldFloat)
{
  __int16 v3; 
  int Bit; 
  int v5; 
  unsigned int MinBitCountForNum; 
  __int64 Bits; 
  int v8; 
  __int64 v9; 
  __int16 v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  __int64 v15; 

  v3 = 1;
  Bit = MSG_ReadBit(msg);
  v5 = MSG_ReadBit(msg);
  if ( Bit == 1 )
  {
    if ( v5 )
      v3 = -1;
    MinBitCountForNum = GetMinBitCountForNum(7u);
    Bits = MSG_ReadBits(msg, MinBitCountForNum);
    v8 = truncate_cast<int,__int64>(Bits);
    v9 = v8;
    if ( (unsigned int)v8 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 682, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 7 )", "index doesn't index COMMON_ANGLE_DELTA_ARRAYCOUNT\n\t%i not in [0, %i)", v8, 7) )
      __debugbreak();
    v10 = g_commonAngleDeltas[v9];
    if ( v10 )
      goto LABEL_17;
    v11 = "delta";
    v12 = 684;
    v13 = "(delta)";
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
      __debugbreak();
LABEL_17:
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    *(float *)&_XMM0 = (float)(__int16)((int)*(float *)&_XMM4 + v10 * v3) * 0.0054931641;
    return *(float *)&_XMM0;
  }
  if ( v5 )
  {
    if ( MSG_ReadBit(msg) )
      v3 = -1;
    v15 = MSG_ReadBits(msg, 0xCu);
    v10 = truncate_cast<short,__int64>(v15);
    if ( v10 )
      goto LABEL_17;
    v11 = "deltaAngle";
    v12 = 706;
    v13 = "(deltaAngle)";
    goto LABEL_15;
  }
  *(double *)&_XMM0 = MSG_ReadAngle16(msg);
  return *(float *)&_XMM0;
}

/*
==============
MSG_ReadDeltaAngleShort
==============
*/
int MSG_ReadDeltaAngleShort(msg_t *msg, const __int16 from)
{
  int Bit; 
  int Bits; 

  if ( MSG_ReadBit(msg) != 1 )
    return MSG_ReadShort(msg);
  Bit = MSG_ReadBit(msg);
  Bits = (__int16)MSG_ReadBits(msg, 0xCu);
  if ( Bit == 1 )
    return from - Bits;
  else
    return Bits + from;
}

/*
==============
MSG_ReadDeltaArchivedEntity
==============
*/
void MSG_ReadDeltaArchivedEntity(msg_t *msg, const int time, const entityState_t *from, entityState_t *to, const char *fromClientMask, char *toClientMask, const unsigned int clientMaskSize, int number)
{
  if ( from )
    SV_MsgMP_ValidateEntityState(from);
  if ( !MSG_ReadDeltaEntityStruct(msg, time, from, to, number, 1, 0, NULL) && to )
    SV_MsgMP_ValidateEntityState(to);
  if ( MSG_ReadBit(msg) )
    MSG_ReadData(msg, clientMaskSize, toClientMask, clientMaskSize);
  else
    memcpy_0(toClientMask, fromClientMask, clientMaskSize);
}

/*
==============
MSG_ReadDeltaArchivedWeaponMapEntry
==============
*/
void MSG_ReadDeltaArchivedWeaponMapEntry(msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, WeaponMapEntry *to)
{
  __int16 v8; 
  Weapon *v9; 
  __int128 v10; 
  double v11; 
  int v12; 
  Weapon result; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3511, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3512, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( from )
  {
    *(__m256i *)&to->index = *(__m256i *)&from->index;
    *(_OWORD *)&to->weapon.attachmentVariationIndices[3] = *(_OWORD *)&from->weapon.attachmentVariationIndices[3];
    *(double *)&to->weapon.attachmentVariationIndices[19] = *(double *)&from->weapon.attachmentVariationIndices[19];
    *(_DWORD *)&to->weapon.attachmentVariationIndices[27] = *(_DWORD *)&from->weapon.attachmentVariationIndices[27];
    v8 = *(_WORD *)&from->weapon.scopeVariation;
  }
  else
  {
    v8 = 0;
    *(_QWORD *)&to->index = 0i64;
    *(_QWORD *)&to->weapon.stickerIndices[2] = 0i64;
    *(_QWORD *)to->weapon.weaponAttachments = 0i64;
    *(_QWORD *)&to->weapon.weaponAttachments[8] = 0i64;
    *(_QWORD *)&to->weapon.attachmentVariationIndices[3] = 0i64;
    *(_QWORD *)&to->weapon.attachmentVariationIndices[11] = 0i64;
    *(_QWORD *)&to->weapon.attachmentVariationIndices[19] = 0i64;
    *(_DWORD *)&to->weapon.attachmentVariationIndices[27] = 0;
  }
  *(_WORD *)&to->weapon.scopeVariation = v8;
  if ( !MSG_ReadBit(msg) )
  {
    v9 = MSG_ReadWeapon(&result, msg);
    v10 = *(_OWORD *)&v9->attachmentVariationIndices[5];
    v11 = *(double *)&v9->attachmentVariationIndices[21];
    v12 = *(_DWORD *)&v9->weaponCamo;
    *(__m256i *)&to->weapon.weaponIdx = *(__m256i *)&v9->weaponIdx;
    *(_OWORD *)&to->weapon.attachmentVariationIndices[5] = v10;
    *(double *)&to->weapon.attachmentVariationIndices[21] = v11;
    *(_DWORD *)&to->weapon.weaponCamo = v12;
  }
  to->index = truncate_cast<unsigned short,int>(weaponMapIndex);
}

/*
==============
MSG_ReadDeltaClient
==============
*/
int MSG_ReadDeltaClient(msg_t *msg, const int time, const clientState_t *from, clientState_t *to, int number, const unsigned int clientBits)
{
  const NetFieldList *NetFieldListForNetFieldType; 
  int skippedFieldBits; 
  int numFields; 
  const NetField *stateFields; 
  char v15[416]; 

  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_FIRST);
  skippedFieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
  numFields = NetFieldListForNetFieldType->count;
  stateFields = NetFieldListForNetFieldType->array;
  if ( !from )
  {
    from = (const clientState_t *)v15;
    memset_0(v15, 0, 0x198ui64);
  }
  return MSG_ReadDeltaStruct(msg, time, from, to, number, numFields, clientBits, 4, stateFields, skippedFieldBits);
}

/*
==============
MSG_ReadDeltaClientBitsKey
==============
*/
void MSG_ReadDeltaClientBitsKey(msg_t *const msg, const int *const key, const void *const from, void *const to)
{
  unsigned int m_clientCount; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  bool v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  __int64 Bits; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  _DWORD *v21; 
  __int64 v22; 
  __int64 v23; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1273, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1274, ASSERT_TYPE_ASSERT, "(key != nullptr)", (const char *)&queryFormat, "key != nullptr") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1275, ASSERT_TYPE_ASSERT, "(to != nullptr)", (const char *)&queryFormat, "to != nullptr") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_clientCount = ComCharacterLimits::ms_gameData.m_clientCount;
  if ( ComCharacterLimits::ms_gameData.m_clientCount > 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1282, ASSERT_TYPE_ASSERT, "( clientBits ) <= ( ( sizeof( *array_counter( toClientBits->array ) ) + 0 ) * 32 )", "%s <= %s\n\t%i, %i", "clientBits", "ARRAY_COUNT( toClientBits->array ) * 32", ComCharacterLimits::ms_gameData.m_clientCount, 224) )
    __debugbreak();
  v8 = m_clientCount;
  v9 = m_clientCount & 0x1F;
  v10 = v8 >> 5;
  v11 = v10 < 7;
  if ( v10 > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1287, ASSERT_TYPE_ASSERT, "(totalFullWords <= ( sizeof( *array_counter( toClientBits->array ) ) + 0 ))", (const char *)&queryFormat, "totalFullWords <= ARRAY_COUNT( toClientBits->array )") )
      __debugbreak();
    v11 = v10 < 7;
  }
  if ( !v11 && v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1288, ASSERT_TYPE_ASSERT, "(( totalFullWords < ( sizeof( *array_counter( toClientBits->array ) ) + 0 ) ) || ( partialBits == 0 ))", (const char *)&queryFormat, "( totalFullWords < ARRAY_COUNT( toClientBits->array ) ) || ( partialBits == 0 )") )
    __debugbreak();
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v14 = 0i64;
    v12 = v13;
    do
      *((_DWORD *)to + v14++) = *key ^ MSG_ReadLong(msg);
    while ( v14 < v13 );
  }
  if ( v9 )
  {
    v15 = (1 << v9) - 1;
    v16 = v15 & *key;
    if ( v12 >= 7 )
    {
      LODWORD(v23) = 7;
      LODWORD(v22) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1306, ASSERT_TYPE_ASSERT, "(unsigned)( wordIndex ) < (unsigned)( ( sizeof( *array_counter( toClientBits->array ) ) + 0 ) )", "wordIndex doesn't index ARRAY_COUNT( toClientBits->array )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    Bits = MSG_ReadBits(msg, v9);
    v18 = truncate_cast<int,__int64>(Bits);
    v19 = (int)v12++;
    *((_DWORD *)to + v19) = (v15 & (v16 ^ v18)) << (32 - v9);
  }
  if ( v12 < 7 )
  {
    v20 = (int)(7 - v12);
    v21 = (char *)to + 4 * (int)v12;
    while ( v20 )
    {
      *v21++ = 0;
      --v20;
    }
  }
}

/*
==============
MSG_ReadDeltaEntity
==============
*/
int MSG_ReadDeltaEntity(msg_t *msg, const int time, const entityState_t *from, entityState_t *to, const int number, const int fromBaseline, const bool archived, const bool readEntityLoDBit, NetFieldLoD *const outLoD)
{
  int result; 

  if ( from && !fromBaseline )
    SV_MsgMP_ValidateEntityState(from);
  result = MSG_ReadDeltaEntityStruct(msg, time, from, to, number, archived, readEntityLoDBit, outLoD);
  if ( !result )
  {
    if ( to )
    {
      SV_MsgMP_ValidateEntityState(to);
      return 0;
    }
  }
  return result;
}

/*
==============
MSG_ReadDeltaEntityLoD
==============
*/
void MSG_ReadDeltaEntityLoD(msg_t *msg, const clientLoDInfo_t *fromLoD, clientLoDInfo_t *toLoD, const int clientIndex)
{
  clientLoDInfo_t *v8; 
  __int64 v9; 
  __int128 v10; 
  int v11; 
  EntityLoDs *p_clientEntityLoD; 
  __int64 v13; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2734, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !toLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2735, ASSERT_TYPE_ASSERT, "(toLoD != nullptr)", (const char *)&queryFormat, "toLoD != nullptr") )
    __debugbreak();
  toLoD->clientIndex = clientIndex;
  if ( fromLoD )
  {
    if ( fromLoD->clientIndex != clientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2738, ASSERT_TYPE_ASSERT, "((fromLoD == nullptr) || (fromLoD->clientIndex == clientIndex))", (const char *)&queryFormat, "(fromLoD == nullptr) || (fromLoD->clientIndex == clientIndex)") )
      __debugbreak();
    v8 = toLoD;
    v9 = 2i64;
    do
    {
      v8 = (clientLoDInfo_t *)((char *)v8 + 128);
      v10 = *(_OWORD *)&fromLoD->clientIndex;
      fromLoD = (const clientLoDInfo_t *)((char *)fromLoD + 128);
      *(_OWORD *)&v8[-1].clientEntityLoD.array[32] = v10;
      *(_OWORD *)&v8[-1].clientEntityLoD.array[36] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[36];
      *(_OWORD *)&v8[-1].clientEntityLoD.array[40] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[40];
      *(_OWORD *)&v8[-1].clientEntityLoD.array[44] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[44];
      *(_OWORD *)&v8[-1].clientEntityLoD.array[48] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[48];
      *(_OWORD *)&v8[-1].clientEntityLoD.array[52] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[52];
      *(_OWORD *)&v8[-1].clientEntityLoD.array[56] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[56];
      *(_OWORD *)&v8[-1].clientEntityLoD.array[60] = *(_OWORD *)&fromLoD[-1].clientEntityLoD.array[60];
      --v9;
    }
    while ( v9 );
    v11 = fromLoD->clientIndex;
    p_clientEntityLoD = &toLoD->clientEntityLoD;
    v8->clientIndex = v11;
  }
  else
  {
    *(_QWORD *)toLoD->clientEntityLoD.array = -1i64;
    p_clientEntityLoD = &toLoD->clientEntityLoD;
    *(_QWORD *)&toLoD->clientEntityLoD.array[2] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[4] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[6] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[8] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[10] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[12] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[14] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[16] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[18] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[20] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[22] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[24] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[26] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[28] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[30] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[32] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[34] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[36] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[38] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[40] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[42] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[44] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[46] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[48] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[50] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[52] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[54] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[56] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[58] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[60] = -1i64;
    *(_QWORD *)&toLoD->clientEntityLoD.array[62] = -1i64;
  }
  if ( MSG_ReadBit(msg) )
  {
    v13 = 64i64;
    do
    {
      if ( MSG_ReadBit(msg) )
        p_clientEntityLoD->array[0] = MSG_ReadLong(msg);
      p_clientEntityLoD = (EntityLoDs *)((char *)p_clientEntityLoD + 4);
      --v13;
    }
    while ( v13 );
  }
}

/*
==============
MSG_ReadDeltaEntityStruct
==============
*/
__int64 MSG_ReadDeltaEntityStruct(msg_t *msg, const int time, const void *from, void *to, unsigned int number, const bool archived, const bool readEntityLoDBit, NetFieldLoD *const outLoD)
{
  int v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  bool v16; 
  int Bit; 
  const NetFieldList *NetFieldListForNetFieldType; 
  int skippedNetfieldBits; 
  const NetField *array; 
  int LastChangedField; 
  __int64 v22; 
  __int64 v23; 
  char v24; 
  int NumFieldsSkipped; 
  int v26; 
  int v27; 
  entityType_s v28; 
  unsigned int NetFieldsCountForEntityType; 
  int v30; 
  __int16 bits; 
  bool v32; 
  bool v33; 
  int v34; 
  const NetField *v35; 
  __int64 v36; 
  bool v37; 
  __int16 *p_bits; 
  __int16 v39; 
  bool v40; 
  __int64 Field; 
  entityType_s v42; 
  const char *EntityTypeName; 
  char v44; 
  bool v45; 
  __int64 print; 
  __int64 xorValues; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  const NetField *v51; 
  const NetField *v52; 
  bool v54; 
  int skippedFieldBits; 
  bool outLoDa; 

  if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2368, ASSERT_TYPE_ASSERT, "( number < (1u << ( 11 )) )", (const char *)&queryFormat, "number < (1u << GENTITYNUM_BITS)") )
    __debugbreak();
  v12 = -1;
  if ( outLoD )
    *outLoD = NetFieldLoD_Invalid;
  if ( MSG_ReadBit(msg) != 1 )
  {
    v16 = !readEntityLoDBit || MSG_ReadBit(msg) != 0;
    outLoDa = v16;
    if ( outLoD )
      *outLoD = v16;
    Bit = MSG_ReadBit(msg);
    *(_OWORD *)to = *(_OWORD *)from;
    *((_OWORD *)to + 1) = *((_OWORD *)from + 1);
    *((_OWORD *)to + 2) = *((_OWORD *)from + 2);
    *((_OWORD *)to + 3) = *((_OWORD *)from + 3);
    *((_OWORD *)to + 4) = *((_OWORD *)from + 4);
    *((_OWORD *)to + 5) = *((_OWORD *)from + 5);
    *((_OWORD *)to + 6) = *((_OWORD *)from + 6);
    *((_OWORD *)to + 7) = *((_OWORD *)from + 7);
    *((_OWORD *)to + 8) = *((_OWORD *)from + 8);
    *((_OWORD *)to + 9) = *((_OWORD *)from + 9);
    *((_OWORD *)to + 10) = *((_OWORD *)from + 10);
    *((_OWORD *)to + 11) = *((_OWORD *)from + 11);
    *((_OWORD *)to + 12) = *((_OWORD *)from + 12);
    *((_OWORD *)to + 13) = *((_OWORD *)from + 13);
    *((_OWORD *)to + 14) = *((_OWORD *)from + 14);
    *((_QWORD *)to + 30) = *((_QWORD *)from + 30);
    if ( !Bit )
      return 0i64;
    NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_ENTITY_STATE);
    skippedNetfieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
    skippedFieldBits = skippedNetfieldBits;
    if ( NetFieldListForNetFieldType->count > 0x44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2419, ASSERT_TYPE_ASSERT, "(netFieldList->count <= maxNumFields)", (const char *)&queryFormat, "netFieldList->count <= maxNumFields") )
      __debugbreak();
    array = NetFieldListForNetFieldType->array;
    v52 = array;
    v54 = MSG_ReadBit(msg) > 0;
    LastChangedField = MSG_ReadLastChangedField(msg, 68);
    if ( (unsigned int)LastChangedField > 0x43 )
    {
      MSG_Discard(msg);
      Com_PrintError(25, "Got lastChanged field of %i, but there are only %i fields\n", (unsigned int)LastChangedField, 68i64);
      LODWORD(print) = LastChangedField;
      v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2429, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Got lastChanged field of %i, but there are only %i fields\n", print, 68);
LABEL_114:
      if ( v45 )
        __debugbreak();
      return 0i64;
    }
    if ( DVARINT_cl_shownet && (Dvar_GetInt_Internal_DebugName(DVARINT_cl_shownet, "cl_shownet") >= 2 || Dvar_GetInt_Internal_DebugName(DVARINT_cl_shownet, "cl_shownet") == -1) )
      Com_Printf(25, "%3i: #%-3i ", (unsigned int)msg->readcount, *(unsigned int *)to);
    *(_WORD *)to = number;
    if ( number != (unsigned __int64)(unsigned __int16)number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 385, ASSERT_TYPE_ASSERT, "(value == *static_cast<unsigned short*>(i))", "%s\n\tvalue %lld != *static_cast<unsigned short*>(i) %u", "value == *static_cast<unsigned short*>(i)", number, (unsigned __int16)number) )
      __debugbreak();
    v22 = 0i64;
    v23 = 0i64;
    while ( 1 )
    {
      v24 = array->name[v23++];
      if ( v24 != aEtype[v23 - 1] )
        break;
      if ( v23 == 6 )
        goto LABEL_38;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2448, ASSERT_TYPE_ASSERT, "( strcmp( esField[0].name, \"eType\" ) == 0 )", (const char *)&queryFormat, "strcmp( esField[0].name, \"eType\" ) == 0") )
      __debugbreak();
LABEL_38:
    if ( array->bits != -77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2450, ASSERT_TYPE_ASSERT, "( esField[0].bits == (-77) )", (const char *)&queryFormat, "esField[0].bits == MSG_FIELD_ETYPE") )
      __debugbreak();
    NumFieldsSkipped = MSG_ReadNumFieldsSkipped(msg, skippedNetfieldBits, LastChangedField + 1);
    v26 = NumFieldsSkipped;
    if ( NumFieldsSkipped <= 0 )
    {
      LODWORD(xorValues) = NumFieldsSkipped;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2459, ASSERT_TYPE_ASSERT, "( ( nextChanged > 0 ) )", "%s\n\t( nextChanged ) = %i", "( nextChanged > 0 )", xorValues) )
        __debugbreak();
    }
    v27 = v26 - 1;
    v50 = v27;
    if ( (unsigned int)v27 > 0x43 )
    {
      MSG_Discard(msg);
      Com_PrintError(25, "Got nextChanged field of %i, but there are only %i fields\n", (unsigned int)v27, 68i64);
      return 0i64;
    }
    if ( !v27 )
    {
      MSG_ReadDeltaField(msg, time, from, to, array, 0, 0);
      v12 = 0;
      if ( LastChangedField > 0 )
      {
        v50 = MSG_ReadNumFieldsSkipped(msg, skippedFieldBits, LastChangedField);
        v27 = v50;
        if ( v50 > 0x43 )
        {
          MSG_Discard(msg);
          Com_PrintError(25, "Got nextChanged (2) field of %i, but there are only %i fields\n", v50, 68i64);
          return 0i64;
        }
      }
    }
    if ( msg->overflowed )
    {
      Com_PrintError(25, "MSG_ReadDeltaEntityStruct overflowed, could not determine eType\n");
      return 0i64;
    }
    v28 = *((_WORD *)to + 4);
    v51 = MSG_GetStateFieldListForEntityType(v28)->array;
    NetFieldsCountForEntityType = MSG_GetNetFieldsCountForEntityType(v28);
    if ( LastChangedField >= (int)NetFieldsCountForEntityType )
    {
      MSG_Discard(msg);
      Com_Printf(14, "Last changed field was %i, but there are only %i fields\n", (unsigned int)LastChangedField, NetFieldsCountForEntityType);
      return 0i64;
    }
    if ( LastChangedField )
    {
      if ( v12 == LastChangedField )
      {
        LODWORD(v48) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2521, ASSERT_TYPE_ASSERT, "( lastChanged ) != ( lc )", "%s != %s\n\t%i, %i", "lastChanged", "lc", v48, LastChangedField) )
          __debugbreak();
      }
      v30 = NetFieldsCountForEntityType;
      while ( 1 )
      {
        v32 = 0;
        if ( *((_WORD *)from + 4) == *((_WORD *)to + 4) )
        {
          bits = v51[v27].bits;
          if ( bits != -77 && (!v54 || bits != -108 && (unsigned int)(bits + 83) > 5) )
            v32 = 1;
        }
        MSG_ReadDeltaField(msg, time, from, to, &v51[v27], 0, v32);
        v33 = v27 == LastChangedField;
        if ( v27 >= LastChangedField )
          break;
        v34 = v27;
        v27 += MSG_ReadNumFieldsSkipped(msg, skippedFieldBits, LastChangedField - v27);
        v50 = v27;
        if ( v27 >= v30 || v27 < 0 )
        {
          MSG_Discard(msg);
          Com_Printf(14, "Last changed field was %i, but there are only %i fields (loop)\n", (unsigned int)LastChangedField, (unsigned int)v30);
          return 0i64;
        }
        if ( LastChangedField < v27 )
        {
          LODWORD(v48) = LastChangedField;
          LODWORD(xorValues) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2548, ASSERT_TYPE_ASSERT, "(lc >= nextChanged)", "%s\n\tnextChanged is %i, lc is %i", "lc >= nextChanged", xorValues, v48) )
            __debugbreak();
        }
        if ( v27 <= v34 )
        {
          LODWORD(v48) = v34;
          LODWORD(xorValues) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2549, ASSERT_TYPE_ASSERT, "(nextChanged > lastChanged)", "%s\n\tnextChanged is %i, lastChanged is %i", "nextChanged > lastChanged", xorValues, v48) )
            __debugbreak();
        }
        if ( v27 > LastChangedField )
        {
          LODWORD(v49) = LastChangedField;
          LODWORD(v48) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2550, ASSERT_TYPE_ASSERT, "( nextChanged ) <= ( lc )", "%s <= %s\n\t%i, %i", "nextChanged", "lc", v48, v49) )
            __debugbreak();
        }
      }
    }
    else
    {
      v33 = v27 == 0;
    }
    if ( !v33 )
    {
      LODWORD(xorValues) = LastChangedField;
      LODWORD(print) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2554, ASSERT_TYPE_ASSERT, "( nextChanged ) == ( lc )", "nextChanged == lc\n\t%i, %i", print, xorValues) )
        __debugbreak();
    }
    v35 = v51;
    if ( outLoDa )
    {
      v36 = v27;
      v37 = v27 < 0;
      if ( v27 <= 0 )
      {
LABEL_97:
        if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2580, ASSERT_TYPE_ASSERT, "( nextChanged >= 0 )", (const char *)&queryFormat, "nextChanged >= 0") )
          __debugbreak();
        if ( msg_dumpEnts->current.enabled )
        {
          if ( v52->size > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2586, ASSERT_TYPE_ASSERT, "(esField[0].size <= 32)", (const char *)&queryFormat, "esField[0].size <= 32") )
            __debugbreak();
          Field = MSG_GetField((char *)to + v52->offset, v52->size);
          v42 = truncate_cast<enum entityType_s,__int64>(Field);
          EntityTypeName = BG_GetEntityTypeName(v42);
          Com_Printf(25, "%3i: changed ent, eType %s\n", number, EntityTypeName);
        }
        while ( 1 )
        {
          v44 = v35->name[v22++];
          if ( v44 != aEtype[v22 - 1] )
            break;
          if ( v22 == 6 )
            goto LABEL_110;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2593, ASSERT_TYPE_ASSERT, "( strcmp( stateFields[0].name, \"eType\" ) == 0 )", (const char *)&queryFormat, "strcmp( stateFields[0].name, \"eType\" ) == 0") )
          __debugbreak();
LABEL_110:
        if ( v35->bits == -77 )
          return 0i64;
        v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2595, ASSERT_TYPE_ASSERT, "( stateFields[0].bits == (-77) )", (const char *)&queryFormat, "stateFields[0].bits == MSG_FIELD_ETYPE");
        goto LABEL_114;
      }
      p_bits = &v51->bits;
      do
      {
        if ( *((_BYTE *)p_bits + 2) == 2 )
        {
          v40 = 0;
          if ( *((_WORD *)from + 4) == *((_WORD *)to + 4) )
          {
            v39 = *p_bits;
            if ( *p_bits != -77 && (!v54 || v39 != -108 && (unsigned int)(v39 + 83) > 5) )
              v40 = 1;
          }
          MSG_ReadDeltaField(msg, time, from, to, (const NetField *)(p_bits - 6), 0, v40);
        }
        p_bits += 12;
        --v36;
      }
      while ( v36 );
      v27 = v50;
      v35 = v51;
    }
    v37 = v27 < 0;
    goto LABEL_97;
  }
  v13 = DVARINT_cl_shownet;
  if ( DVARINT_cl_shownet )
  {
    Dvar_CheckFrontendServerThread(DVARINT_cl_shownet);
    if ( v13->current.integer >= 2 )
      goto LABEL_13;
    v14 = DVARINT_cl_shownet;
    if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer == -1 )
LABEL_13:
      Com_Printf(25, "%3i: #%-3i remove\n", (unsigned int)msg->readcount, number);
  }
  return 1i64;
}

/*
==============
MSG_ReadDeltaField
==============
*/
void MSG_ReadDeltaField(msg_t *msg, const int time, const void *from, void *to, const NetField *field, int print, bool xorValues)
{
  __int128 v8; 
  __int64 Short; 
  unsigned __int16 offset; 
  float *v14; 
  float *v15; 
  int bits; 
  int AnimData; 
  __int64 v18; 
  float v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  __int16 v23; 
  int v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  int v30; 
  float OriginExpGolomb; 
  unsigned int OriginExtraPrecisionBitsForField; 
  int FloatCase; 
  int v34; 
  unsigned int MinBitCountForNum; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  float v50; 
  float v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  unsigned int v55; 
  char v56; 
  int DeltaTime; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  int Byte; 
  int v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  int EventParamBits; 
  __int64 ValueNoXor; 
  unsigned int Long; 
  int size; 
  unsigned __int16 RuntimeMapIndexBits; 
  __int64 Value; 
  __int64 v72; 
  int v73; 
  entityType_s v74; 
  float OriginFloat; 
  float v76; 
  unsigned int v77; 
  float v78; 
  int v79; 
  __int64 v80; 
  float v81; 
  __int64 v84; 
  float v85; 
  __int64 v86; 
  __int64 v89; 
  float v90; 
  double Angle16; 
  float v92; 
  int v93; 
  msg_t *v94; 
  __int64 v95; 
  __int64 v96; 
  int Bit; 
  __int64 v98; 
  __int64 v99; 
  char v100; 
  __int64 v101; 
  __int64 v102; 
  int v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  unsigned __int8 v107; 
  float v108; 
  unsigned __int8 v109; 
  char v113; 
  float v114; 
  unsigned int v115; 
  int FloatByRangeAndBits; 
  __int64 NetConstString; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  unsigned int ClientAttachTagBits; 
  __int64 v133; 
  unsigned int m_effectBits; 
  unsigned int m_esIndexBits; 
  __int64 v136; 
  __int64 v137; 
  __int64 v138; 
  unsigned int v139; 
  __int64 v140; 
  __int64 v141; 
  unsigned int v142; 
  char v143; 
  double Float; 
  double v145; 
  double v146; 
  __int64 v147; 
  unsigned int v148; 
  int v149; 
  int v150; 
  __int64 v151; 
  char *fmt; 
  char *fmta; 
  __int64 v154; 
  __int64 v155; 
  float v156; 
  float v157; 
  int fromF; 
  int key; 
  __int64 v160; 
  vec3_t quatPacked; 
  vec4_t outQuat; 
  __int128 v163; 

  Short = 0i64;
  fromF = time;
  v160 = 0i64;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1530, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  offset = field->offset;
  if ( xorValues )
    v14 = (float *)((char *)from + offset);
  else
    v14 = (float *)&v160;
  v15 = (float *)((char *)to + offset);
  if ( msg->overflowed )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1538, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
      __debugbreak();
    if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1552, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", "%s\n\tmsg overflowed after reading %i out of %i bytes", "!msg->overflowed", msg->readcount, msg->cursize) )
      __debugbreak();
  }
  bits = field->bits;
  switch ( field->bits )
  {
    case 0xFF8D:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1768, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      v85 = *v14;
      if ( MSG_ReadBit(msg) == 1 )
      {
        v86 = MSG_ReadBits(msg, 8u);
        v81 = (float)((float)(truncate_cast<int,__int64>(v86) - 128) * 0.1) + v85;
      }
      else
      {
        _XMM0 = 0i64;
        __asm { vroundss xmm6, xmm0, xmm2, 1 }
        v89 = MSG_ReadBits(msg, 0x15u);
        v81 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(truncate_cast<int,__int64>(v89) - 1048570)).m128_f32[0] * 0.1) + _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM6).m128_f32[0];
      }
      *v15 = v81;
      if ( print )
        goto LABEL_130;
      return;
    case 0xFF8E:
    case 0xFF8F:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1759, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      v78 = *v14;
      v79 = field->bits;
      if ( MSG_ReadBit(msg) == 1 )
      {
        v80 = MSG_ReadBits(msg, 8u);
        v81 = (float)((float)(truncate_cast<int,__int64>(v80) - 128) * 0.1) + v78;
      }
      else
      {
        if ( v79 != -113 && v79 != -114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 400, ASSERT_TYPE_ASSERT, "( bits == (-114) )", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGIN_PHYSICSY") )
          __debugbreak();
        _XMM1 = 0i64;
        __asm { vroundss xmm3, xmm1, xmm2, 1 }
        v84 = MSG_ReadBits(msg, 0x15u);
        v81 = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM3).m128_f32[0] + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(truncate_cast<int,__int64>(v84) - 1048570)).m128_f32[0] * 0.1);
      }
      *v15 = v81;
      if ( print )
LABEL_130:
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, v81);
      return;
    case 0xFF90:
      if ( MSG_ReadBit(msg) == 1 )
      {
        v25 = MSG_ReadBits(msg, 6u);
        LOBYTE(v26) = truncate_cast<unsigned int,__int64>(v25);
      }
      else
      {
        v26 = *v14;
      }
      LODWORD(Short) = LOBYTE(v26) & 0x3F;
      if ( print )
        Com_Printf(25, "%s:%d ", field->name, Short & 0x3F);
      goto LABEL_26;
    case 0xFF91:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1723, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( BgWeaponHandle ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( BgWeaponHandle )") )
        __debugbreak();
      size = field->size;
      RuntimeMapIndexBits = BgWeaponMap::GetRuntimeMapIndexBits();
      Value = MSG_ReadValue(msg, v14, RuntimeMapIndexBits, size);
      *(_DWORD *)v15 = truncate_cast<unsigned int,__int64>(Value);
      return;
    case 0xFF92:
      if ( MSG_ReadBit(msg) == 1 )
      {
        v18 = MSG_ReadBits(msg, 6u);
        LOBYTE(v19) = truncate_cast<unsigned int,__int64>(v18);
      }
      else
      {
        v19 = *v14;
      }
      v20 = MSG_ReadBits(msg, 1u);
      v21 = LOBYTE(v19) & 0x3F ^ (LOBYTE(v19) & 0x3F ^ (unsigned __int8)((unsigned __int8)truncate_cast<unsigned int,__int64>(v20) << 6)) & 0x40;
      v22 = MSG_ReadBits(msg, 2u);
      v23 = truncate_cast<unsigned int,__int64>(v22);
      v24 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(v23 << 7)) & 0x180;
      if ( print )
        Com_Printf(25, "%s:%d ", field->name, ((unsigned __int8)v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)((_BYTE)v23 << 7)) & 0x80) & 0x3F);
      MSG_SetField(v15, field->size, v24);
      return;
    case 0xFF93:
      if ( field->size != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1856, ASSERT_TYPE_ASSERT, "(field->size == 4)", (const char *)&queryFormat, "field->size == 4") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
        LODWORD(Short) = MSG_ReadLong(msg) ^ *(_DWORD *)v14;
      *(_DWORD *)v15 = Short;
      return;
    case 0xFF94:
    case 0:
      FloatCase = MSG_ReadFloatCase(msg, (const int *)v14, field, print);
      MSG_SetField(v15, field->size, FloatCase);
      return;
    case 0xFF95:
      AnimData = MSG_ReadAnimData(msg, (const int *)v14, field, print);
      MSG_SetField(v15, field->size, AnimData);
      return;
    case 0xFF96:
    case 0xFF97:
    case 0xFF98:
    case 0xFFD9:
    case 0xFFDA:
    case 0xFFDB:
      v27 = (float)(unsigned int)(1 << MSG_GetOriginExtraPrecisionBitsForField(bits));
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      *(float *)&v30 = (float)(int)*(float *)&_XMM4 / v27;
      fromF = v30;
      if ( MSG_ReadBit(msg) )
      {
        v156 = COERCE_FLOAT(MSG_ReadFloatCase(msg, &fromF, field, print));
      }
      else
      {
        if ( bits == -104 || bits == -37 )
        {
          OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField(bits);
          OriginExpGolomb = MSG_ReadOriginExpGolomb(2, OriginExtraPrecisionBitsForField, msg, *(float *)&v30);
        }
        else
        {
          OriginExpGolomb = MSG_ReadOriginFloat(bits, msg, *(float *)&v30);
        }
        v156 = OriginExpGolomb;
        if ( print )
          Com_Printf(25, "%s:%f ", field->name, OriginExpGolomb);
      }
      MSG_SetField(v15, field->size, SLODWORD(v156));
      return;
    case 0xFF99:
      Bit = MSG_ReadBit(msg);
      v94 = msg;
      if ( Bit )
        goto LABEL_152;
      v98 = MSG_ReadBits(msg, 4u);
      MSG_SetField(v15, field->size, 50 * v98);
      return;
    case 0xFF9A:
      v93 = MSG_ReadBit(msg);
      v94 = msg;
      if ( v93 )
      {
LABEL_152:
        v95 = MSG_ReadBits(v94, 0x10u);
        MSG_SetField(v15, field->size, v95);
      }
      else
      {
        v96 = MSG_ReadBits(msg, 4u);
        MSG_SetField(v15, field->size, 250 * v96);
      }
      return;
    case 0xFF9B:
      if ( MSG_ReadBit(msg) )
        Short = MSG_ReadShort(msg);
      MSG_SetField(v15, field->size, Short);
      return;
    case 0xFF9C:
    case 0xFFB1:
      v90 = *v14;
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1780, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      *v15 = MSG_ReadDeltaAngle(msg, v90);
      return;
    case 0xFF9D:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1657, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
      {
        if ( MSG_ReadBit(msg) )
        {
          *(_DWORD *)v15 = MSG_ReadLong(msg) ^ *(_DWORD *)v14;
          if ( print )
            Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, *v15);
        }
        else
        {
          v47 = MSG_ReadBits(msg, 4u);
          v48 = truncate_cast<int,__int64>(v47);
          v49 = ((16 * MSG_ReadByte(msg) + v48) ^ ((int)*v14 + 2048)) - 2048;
          *v15 = (float)v49;
          if ( print )
          {
            LODWORD(fmt) = v49;
            Com_Printf(25, "%s%s:%i \n", (char *)&queryFormat.fmt + 3, field->name, fmt);
          }
        }
      }
      else
      {
        *v15 = 0.0;
      }
      v50 = *v15 + 2048.0;
      if ( (unsigned int)(int)v50 >= 0x1000 )
      {
        LODWORD(v155) = 4096;
        LODWORD(v154) = (int)v50;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1697, ASSERT_TYPE_ASSERT, "(unsigned)( *(float *)toF + (1<<(12-1)) ) < (unsigned)( 1 << 12 )", "*(float *)toF + HUDELEM_COORD_BIAS doesn't index 1 << HUDELEM_COORD_BITS\n\t%i not in [0, %i)", v154, v155) )
          __debugbreak();
      }
      return;
    case 0xFF9E:
      v51 = *v14;
      if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 227, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      if ( MSG_ReadBit(msg) == 1 )
      {
        v52 = MSG_ReadBits(msg, 0x1Eu);
        v53 = truncate_cast<int,__int64>(v52);
        MSG_SetField(v15, field->size, v53);
      }
      else
      {
        v54 = MSG_ReadBits(msg, 5u);
        v55 = truncate_cast<int,__int64>(v54);
        v56 = v55;
        if ( v55 > 0x1D )
        {
          LODWORD(v155) = v55;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 240, ASSERT_TYPE_ASSERT, "( ( bitChanged >= 0 && bitChanged < 30 ) )", "%s\n\t( bitChanged ) = %i", "( bitChanged >= 0 && bitChanged < 30 )", v155) )
            __debugbreak();
        }
        MSG_SetField(v15, field->size, LODWORD(v51) ^ (1 << v56));
      }
      return;
    case 0xFF9F:
    case 0xFFB6:
    case 0xFFBA:
      DeltaTime = MSG_ReadDeltaTime(msg, fromF);
      MSG_SetField(v15, field->size, DeltaTime);
      return;
    case 0xFFA0:
      if ( MSG_ReadBit(msg) == 1 )
      {
        MSG_SetField(v15, field->size, 2046i64);
        return;
      }
      if ( MSG_ReadBit(msg) != 1 )
      {
        v58 = MSG_ReadBits(msg, 3u);
        v59 = truncate_cast<int,__int64>(v58);
        LODWORD(Short) = (8 * MSG_ReadByte(msg)) | v59;
      }
      goto LABEL_26;
    case 0xFFA1:
      v72 = MSG_ReadBits(msg, 7u);
      MSG_SetField(v15, field->size, 100 * v72);
      return;
    case 0xFFA2:
      v60 = field->offset;
      if ( abs16(field->size) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 592, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toEvent ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toEvent )") )
        __debugbreak();
      if ( !MSG_ReadBit(msg) )
      {
        v65 = *(_DWORD *)((char *)from + v60);
        *(_DWORD *)((char *)to + v60) = v65;
        EventParamBits = MSG_GetEventParamBits(v65);
        if ( EventParamBits )
        {
          v63 = EventParamBits;
          goto LABEL_100;
        }
LABEL_101:
        *(_DWORD *)((char *)to + v60 + 4) = Short;
        return;
      }
      Byte = MSG_ReadByte(msg);
      *(_DWORD *)((char *)to + v60) = Byte;
      v62 = MSG_GetEventParamBits(Byte);
      if ( !v62 )
        goto LABEL_101;
      if ( MSG_ReadBit(msg) )
      {
        v63 = v62;
LABEL_100:
        ValueNoXor = MSG_ReadValueNoXor(msg, v63);
        LODWORD(Short) = truncate_cast<unsigned int,__int64>(ValueNoXor);
        goto LABEL_101;
      }
      LODWORD(v64) = -1;
      if ( v62 != 64 )
        v64 = ~(-1i64 << v62);
      *(_DWORD *)((char *)to + v60 + 4) = v64 & *(_DWORD *)((_BYTE *)from + v60 + 4);
      return;
    case 0xFFA3:
      Long = MSG_ReadLong(msg);
      MSG_SetField(v15, field->size, Long);
      return;
    case 0xFFA4:
    case 0xFFA5:
    case 0xFFAD:
    case 0xFFAE:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1739, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      OriginFloat = MSG_ReadOriginFloat(field->bits, msg, *v14);
      goto LABEL_113;
    case 0xFFA6:
    case 0xFFAF:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1749, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      v76 = *v14;
      v77 = MSG_GetOriginExtraPrecisionBitsForField(field->bits);
      OriginFloat = MSG_ReadOriginExpGolomb(2, v77, msg, v76);
LABEL_113:
      *v15 = OriginFloat;
      if ( print )
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, OriginFloat);
      return;
    case 0xFFA7:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1612, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
      {
        v45 = MSG_ReadLong(msg);
        *(_DWORD *)v15 = v45;
        *(_DWORD *)v15 = *(_DWORD *)v14 ^ v45;
        if ( print )
          Com_Printf(25, "%s%s:%f\n", (char *)&queryFormat.fmt + 3, field->name, *v15);
      }
      else
      {
        v42 = MSG_ReadBits(msg, 5u);
        v43 = truncate_cast<int,__int64>(v42);
        v44 = ((32 * MSG_ReadByte(msg) + v43) ^ ((int)*v14 + 4096)) - 4096;
        *v15 = (float)v44;
        if ( print )
        {
          LODWORD(fmt) = v44;
          Com_Printf(25, "%s%s:%i\n", (char *)&queryFormat.fmt + 3, field->name, fmt);
        }
      }
      return;
    case 0xFFA8:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1646, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v46 = MSG_ReadLong(msg);
      *(_DWORD *)v15 = v46;
      *(_DWORD *)v15 = *(_DWORD *)v14 ^ v46;
      if ( print )
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, *v15);
      return;
    case 0xFFA9:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1786, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      Angle16 = MSG_ReadAngle16(msg);
      *v15 = *(float *)&Angle16;
      return;
    case 0xFFAA:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1791, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      v92 = (float)MSG_ReadBits(msg, 6u);
      *v15 = v92 * 0.1;
      return;
    case 0xFFAB:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1813, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toColor ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toColor )") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
      {
        *v15 = *v14;
        if ( !*((_BYTE *)v14 + 3) )
          LOBYTE(Short) = -1;
        *((_BYTE *)v15 + 3) = Short;
      }
      else
      {
        if ( !MSG_ReadBit(msg) )
        {
          *(_BYTE *)v15 = MSG_ReadByte(msg);
          *((_BYTE *)v15 + 1) = MSG_ReadByte(msg);
          *((_BYTE *)v15 + 2) = MSG_ReadByte(msg);
        }
        v99 = MSG_ReadBits(msg, 8u);
        v100 = v99;
        if ( (v99 < 0 || (unsigned __int64)v99 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v99, "signed", v99) )
          __debugbreak();
        *((_BYTE *)v15 + 3) = v100;
      }
      return;
    case 0xFFAC:
      v101 = MSG_ReadBits(msg, 0x1Du);
      MSG_SetField(v15, field->size, v101);
      return;
    case 0xFFB0:
    case 0xFFB2:
      v34 = MSG_ReadLong(msg);
      MSG_SetField(v15, field->size, v34);
      return;
    case 0xFFB3:
      v73 = MSG_ReadByte(msg);
      v74 = truncate_cast<enum entityType_s,__int64>(v73);
      MSG_SetField(v15, field->size, v74);
      return;
    case 0xFFB4:
      if ( abs16(field->size) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1838, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 2)", (const char *)&queryFormat, "abs( field->size ) == 2") )
        __debugbreak();
      if ( MSG_ReadBit(msg) == 1 )
      {
        v102 = MSG_ReadBits(msg, 4u);
        v103 = truncate_cast<int,__int64>(v102);
        v104 = MSG_GetField(v14, field->size);
        v105 = truncate_cast<short,__int64>(v104) + v103 - 8;
      }
      else
      {
        v106 = MSG_ReadValue(msg, v14, 8, field->size);
        v105 = truncate_cast<short,__int64>(v106);
      }
      MSG_SetField(v15, field->size, v105);
      if ( print )
      {
        *(float *)&fmt = *v15;
        Com_Printf(25, "%s%s:%i \n", (char *)&queryFormat.fmt + 3, field->name, fmt);
      }
      return;
    case 0xFFB5:
      if ( MSG_ReadBit(msg) == 1 )
      {
        if ( abs16(field->size) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1602, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
          __debugbreak();
        MinBitCountForNum = GetMinBitCountForNum(0x10u);
        v36 = MSG_ReadBits(msg, MinBitCountForNum);
        v37 = truncate_cast<int,__int64>(v36);
        v38 = MSG_GetField(v14, field->size);
        v39 = truncate_cast<int,__int64>(v38);
        MSG_SetField(v15, field->size, v37 + v39 + 1);
      }
      else
      {
        v40 = MSG_ReadValue(msg, v14, 8, field->size);
        v41 = truncate_cast<int,__int64>(v40);
        MSG_SetField(v15, field->size, v41);
      }
      return;
    case 0xFFB7:
      NetConstString = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_HINTSTRING);
      MSG_SetField(v15, field->size, NetConstString);
      return;
    case 0xFFB8:
      v118 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_LOCSTRING);
      MSG_SetField(v15, field->size, v118);
      return;
    case 0xFFB9:
      v119 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_XMODEL);
      MSG_SetField(v15, field->size, v119);
      return;
    case 0xFFBB:
      if ( MSG_ReadBit(msg) )
      {
        v163 = v8;
        v107 = MSG_ReadByte(msg);
        v108 = *v14;
        v109 = v107;
        if ( *v14 < 0.0 || v108 > 1.0 )
        {
          __asm { vxorpd  xmm1, xmm1, xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1152, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( value ) && ( value ) <= ( 1.f )", "value not in [0.f, 1.f]\n\t%g not in [%g, %g]", v108, *(double *)&_XMM1, DOUBLE_1_0) )
            __debugbreak();
        }
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm0, 1 }
        v113 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 > 255 )
          v113 = -1;
        if ( (v109 ^ (unsigned __int8)v113) == 0xFF )
          v157 = FLOAT_1_0;
        else
          v157 = (float)(unsigned __int8)(v109 ^ v113) * 0.00390625;
        *(float *)&Short = v157;
        if ( print )
          Com_Printf(25, "%s:%f ", field->name, v157);
      }
      else
      {
        LODWORD(Short) = MSG_ReadBit(msg) << 31;
        if ( *(float *)&Short != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 942, ASSERT_TYPE_ASSERT, "( *reinterpret_cast<float *>( &value ) == 0.0f )", (const char *)&queryFormat, "*reinterpret_cast<float *>( &value ) == 0.0f") )
        {
          __debugbreak();
          MSG_SetField(v15, field->size, (int)Short);
          return;
        }
      }
LABEL_26:
      MSG_SetField(v15, field->size, (int)Short);
      return;
    case 0xFFBC:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1874, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v114 = FLOAT_10000_0;
      goto LABEL_205;
    case 0xFFBD:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1881, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v114 = FLOAT_5_0;
      v115 = 12;
      goto LABEL_206;
    case 0xFFBE:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1888, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v114 = FLOAT_11_0;
LABEL_205:
      v115 = 14;
      goto LABEL_206;
    case 0xFFBF:
      if ( MSG_ReadBit(msg) )
      {
        Float = MSG_ReadFloat(msg);
        quatPacked.v[0] = *(float *)&Float;
        v145 = MSG_ReadFloat(msg);
        quatPacked.v[1] = *(float *)&v145;
        v146 = MSG_ReadFloat(msg);
        quatPacked.v[2] = *(float *)&v146;
        PackedQuatToUnitQuat(&quatPacked, &outQuat);
        QuatToAxis(&outQuat, (tmat33_t<vec3_t> *)v15);
      }
      else
      {
        *(_QWORD *)v15 = 0i64;
        *((_QWORD *)v15 + 1) = 0i64;
        *((_QWORD *)v15 + 2) = 0i64;
        *((_QWORD *)v15 + 3) = 0i64;
        v15[8] = 0.0;
      }
      return;
    case 0xFFC0:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1902, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v114 = FLOAT_90_0;
      v115 = 11;
      goto LABEL_206;
    case 0xFFC1:
      m_esIndexBits = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VEHICLES) + 7;
      goto LABEL_247;
    case 0xFFC2:
      v122 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_HEADICON);
      MSG_SetField(v15, field->size, v122);
      return;
    case 0xFFC3:
      v125 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_SHOCK);
      MSG_SetField(v15, field->size, v125);
      return;
    case 0xFFC4:
      v126 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_CLIENT_TAGS);
      MSG_SetField(v15, field->size, v126);
      return;
    case 0xFFC5:
      ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
      v133 = MSG_ReadValueNoXor(msg, ClientAttachTagBits + 11);
      MSG_SetField(v15, field->size, v133);
      return;
    case 0xFFC6:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 66, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_effectBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 67, ASSERT_TYPE_ASSERT, "(ms_data.m_effectBits > 0)", (const char *)&queryFormat, "ms_data.m_effectBits > 0") )
        __debugbreak();
      m_effectBits = BgDynamicLimits::ms_data.m_effectBits;
      goto LABEL_246;
    case 0xFFC7:
      v127 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_SUIT);
      MSG_SetField(v15, field->size, v127);
      return;
    case 0xFFC8:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 82, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_modelBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 83, ASSERT_TYPE_ASSERT, "(ms_data.m_modelBits > 0)", (const char *)&queryFormat, "ms_data.m_modelBits > 0") )
        __debugbreak();
      m_effectBits = BgDynamicLimits::ms_data.m_modelBits;
LABEL_246:
      m_esIndexBits = m_effectBits + BgDynamicLimits::GetClientAttachTagBits();
      goto LABEL_247;
    case 0xFFC9:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
        __debugbreak();
      m_esIndexBits = BgDynamicLimits::ms_data.m_esIndexBits;
      goto LABEL_247;
    case 0xFFCA:
      v129 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_MATERIAL);
      MSG_SetField(v15, field->size, v129);
      return;
    case 0xFFCB:
      v120 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_ANIM);
      MSG_SetField(v15, field->size, v120);
      return;
    case 0xFFCC:
      v121 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_VISIONSET);
      MSG_SetField(v15, field->size, v121);
      return;
    case 0xFFCD:
      v130 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_VFX);
      MSG_SetField(v15, field->size, v130);
      return;
    case 0xFFCE:
      v131 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_MINIMAPICON);
      MSG_SetField(v15, field->size, v131);
      return;
    case 0xFFCF:
      v137 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_OBJECTIVEICON);
      MSG_SetField(v15, field->size, v137);
      return;
    case 0xFFD0:
      v123 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_LUI);
      MSG_SetField(v15, field->size, v123);
      return;
    case 0xFFD1:
      v124 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_IMAGE);
      MSG_SetField(v15, field->size, v124);
      return;
    case 0xFFD2:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
        __debugbreak();
      m_esIndexBits = ComCharacterLimits::ms_gameData.m_clientBits;
      goto LABEL_247;
    case 0xFFD3:
      key = 0;
      MSG_ReadDeltaClientBitsKey(msg, &key, v14, v15);
      return;
    case 0xFFD4:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 101, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_gameData.m_characterBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 102, ASSERT_TYPE_ASSERT, "(ms_gameData.m_characterBits > 0)", (const char *)&queryFormat, "ms_gameData.m_characterBits > 0") )
        __debugbreak();
      m_esIndexBits = ComCharacterLimits::ms_gameData.m_characterBits;
LABEL_247:
      v136 = MSG_ReadValueNoXor(msg, m_esIndexBits);
      MSG_SetField(v15, field->size, v136);
      return;
    case 0xFFD5:
      v138 = MSG_ReadBits(msg, 3u);
      v139 = truncate_cast<unsigned int,__int64>(v138);
      v140 = v139;
      if ( v139 > 7 )
      {
        LODWORD(v155) = 7;
        LODWORD(v154) = v139;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2002, ASSERT_TYPE_ASSERT, "( numPatterns ) <= ( (7u) )", "numPatterns not in [0, FULL_AUTO_SCALE_NUM_MAX_PATTERNS]\n\t%u not in [0, %u]", v154, v155) )
          __debugbreak();
      }
      *(_DWORD *)v15 = (_DWORD)v140 << 29;
      if ( (_DWORD)v140 )
      {
        do
        {
          v141 = MSG_ReadBits(msg, 4u);
          v142 = truncate_cast<unsigned int,__int64>(v141);
          v143 = Short;
          LODWORD(Short) = Short + 4;
          *(_DWORD *)v15 |= v142 << v143;
          --v140;
        }
        while ( v140 );
      }
      return;
    case 0xFFD6:
      v128 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_CARRYOBJECT);
      MSG_SetField(v15, field->size, v128);
      return;
    case 0xFFD7:
      v147 = MSG_ReadBits(msg, 0x12u);
      v148 = truncate_cast<unsigned int,__int64>(v147);
      MSG_SetField(v15, field->size, v148 - 1);
      return;
    case 0xFFD8:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1895, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v114 = FLOAT_20_0;
      v115 = 10;
LABEL_206:
      FloatByRangeAndBits = MSG_ReadFloatByRangeAndBits(msg, (const int *)v14, v114, v115, field, print);
      MSG_SetField(v15, field->size, FloatByRangeAndBits);
      return;
    default:
      v149 = MSG_ReadBit(msg);
      v150 = field->size;
      if ( v149 )
      {
        v151 = MSG_ReadValue(msg, v14, field->bits, v150);
        MSG_SetField(v15, field->size, v151);
        if ( print )
        {
          fmta = (char *)MSG_GetField(v15, field->size);
          Com_Printf(25, "%s%s:%lld\n", (char *)&queryFormat.fmt + 3, field->name, fmta);
        }
      }
      else
      {
        MSG_SetField(v15, v150, 0i64);
      }
      return;
  }
}

/*
==============
MSG_ReadDeltaFields
==============
*/
void MSG_ReadDeltaFields(msg_t *msg, const int time, const void *from, void *to, int numFields, const NetField *stateFields, const int skippedFieldBits)
{
  int v10; 
  int v11; 
  int LastChangedField; 
  int v13; 
  const NetField *v14; 
  int v15; 
  int i; 
  const NetField *v17; 
  __int64 v18; 
  unsigned __int8 *p_changeHints; 
  int j; 
  int k; 
  __int64 print; 
  __int64 xorValues; 
  __int64 v24; 

  if ( MSG_ReadBit(msg) )
  {
    v10 = numFields;
    v11 = -1;
    LastChangedField = MSG_ReadLastChangedField(msg, numFields);
    v13 = LastChangedField;
    if ( LastChangedField >= numFields || msg->overflowed )
    {
      MSG_Discard(msg);
      Com_PrintError(25, "Got lastChanged field of %i, but there are only %i fields\n", (unsigned int)v13, (unsigned int)numFields);
    }
    else
    {
      v14 = stateFields;
      if ( LastChangedField > -1 )
      {
        do
        {
          v15 = v11;
          v11 += MSG_ReadNumFieldsSkipped(msg, skippedFieldBits, v13 - v11);
          if ( msg->overflowed || v11 > v13 )
          {
            MSG_Discard(msg);
            Com_PrintError(25, "while ( nextChanged < lc ) - Got lastChanged field of %i, but there are only %i fields\n", (unsigned int)v13, (unsigned int)numFields);
            return;
          }
          if ( v11 <= v15 )
          {
            LODWORD(v24) = v11;
            LODWORD(xorValues) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2260, ASSERT_TYPE_ASSERT, "(nextChanged > lastChanged)", "%s\n\tlastChanged was %i, nextChanged is %i", "nextChanged > lastChanged", xorValues, v24) )
              __debugbreak();
          }
          if ( v13 < v11 )
          {
            LODWORD(v24) = v13;
            LODWORD(xorValues) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2261, ASSERT_TYPE_ASSERT, "(lc >= nextChanged)", "%s\n\tnextChanged is %i, lc is %i", "lc >= nextChanged", xorValues, v24) )
              __debugbreak();
          }
          for ( i = v15 + 1; i < v11; ++i )
            MSG_CopyFieldOver(stateFields, from, to, i);
          if ( v11 >= (unsigned int)numFields )
          {
            LODWORD(xorValues) = numFields;
            LODWORD(print) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2266, ASSERT_TYPE_ASSERT, "(unsigned)( nextChanged ) < (unsigned)( numFields )", "nextChanged doesn't index numFields\n\t%i not in [0, %i)", print, xorValues) )
              __debugbreak();
          }
          MSG_ReadDeltaField(msg, time, from, to, &stateFields[v11], 0, 1);
        }
        while ( v11 < v13 );
        if ( v11 > 0 )
        {
          v17 = stateFields;
          v18 = (unsigned int)v11;
          p_changeHints = &stateFields->changeHints;
          do
          {
            if ( *p_changeHints == 2 )
              MSG_ReadDeltaField(msg, time, from, to, v17, 0, 1);
            ++v17;
            p_changeHints += 24;
            --v18;
          }
          while ( v18 );
          v14 = stateFields;
          v10 = numFields;
        }
      }
      for ( j = v11 + 1; j < v10; ++j )
        MSG_CopyFieldOver(v14, from, to, j);
    }
  }
  else
  {
    for ( k = 0; k < numFields; ++k )
      MSG_CopyFieldOver(stateFields, from, to, k);
  }
}

/*
==============
MSG_ReadDeltaHudElems
==============
*/
void MSG_ReadDeltaHudElems(msg_t *msg, const int time, const hudelem_t *from, hudelem_t *to, int count, int hudelemIndexBits)
{
  int v6; 
  hudelem_t *v7; 
  const NetFieldList *NetFieldListForNetFieldType; 
  const NetField *array; 
  __int64 Bits; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  hudelem_t *v15; 
  const hudelem_t *v16; 
  int *p_alignOrg; 
  int v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  const hudelem_t *v22; 
  hudelem_t *v23; 
  int v24; 
  int i; 
  int v26; 
  __int64 v27; 
  const hudelem_t *v28; 
  hudelem_t *v29; 
  int v30; 
  int v31; 
  bool v32; 
  hudelem_t *v33; 
  __int64 xorValues; 
  __int64 v35; 
  int v36; 
  int skippedFieldBits; 
  int v38; 
  int v39; 
  int *v40; 
  __int64 v41; 
  signed __int64 v42; 
  __int64 v43; 

  v6 = count;
  v7 = to;
  if ( count != 15 && count != 30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2805, ASSERT_TYPE_ASSERT, "( count == 15 || count == 30 )", (const char *)&queryFormat, "count == MAX_HUDELEMS_ARCHIVAL || count == MAX_HUDELEMS_CURRENT") )
    __debugbreak();
  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_HUDELEMS);
  array = NetFieldListForNetFieldType->array;
  skippedFieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
  v38 = NetFieldListForNetFieldType->count;
  Bits = MSG_ReadBits(msg, hudelemIndexBits);
  v12 = truncate_cast<int,__int64>(Bits);
  v13 = v12;
  v39 = v12;
  v14 = v13;
  v43 = v13;
  v36 = 0;
  if ( (int)v13 > 0 )
  {
    v15 = to;
    v16 = from;
    v41 = v14;
    p_alignOrg = &to->alignOrg;
    v42 = (char *)from - (char *)to;
    v40 = &to->alignOrg;
    do
    {
      v18 = -1;
      v19 = MSG_ReadBits(msg, 6u);
      if ( (unsigned __int64)(v19 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v19, "signed", v19) )
        __debugbreak();
      v20 = v19 - 1;
      if ( (int)v19 - 1 > -1 )
      {
        v21 = v36;
        v22 = &from[v21];
        v23 = &v15[v21];
        do
        {
          v24 = v18;
          v18 += MSG_ReadNumFieldsSkipped(msg, skippedFieldBits, v20 - v18);
          if ( v20 < v18 )
          {
            LODWORD(v35) = v18;
            LODWORD(xorValues) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2826, ASSERT_TYPE_ASSERT, "(lc >= nextChanged)", "%s\n\tlc is %i, nextChanged is %i", "lc >= nextChanged", xorValues, v35) )
              __debugbreak();
          }
          if ( v18 <= v24 )
          {
            LODWORD(v35) = v24;
            LODWORD(xorValues) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2827, ASSERT_TYPE_ASSERT, "(nextChanged > lastChanged)", "%s\n\tnextChanged is %i, lastChanged is %i", "nextChanged > lastChanged", xorValues, v35) )
              __debugbreak();
          }
          for ( i = v24 + 1; i < v18; ++i )
            MSG_CopyFieldOver(array, v22, v23, i);
          MSG_ReadDeltaField(msg, time, v22, v23, &array[v18], 0, 1);
        }
        while ( v18 < v20 );
        p_alignOrg = v40;
        v15 = to;
        v16 = from;
      }
      v26 = v18 + 1;
      if ( v26 < v38 )
      {
        v27 = v36;
        v28 = &v16[v27];
        v29 = &v15[v27];
        do
          MSG_CopyFieldOver(array, v28, v29, v26++);
        while ( v26 < v38 );
      }
      if ( (*(int *)((char *)p_alignOrg + v42) & 0xFFFFFFF0) != 0 )
      {
        LODWORD(xorValues) = *(int *)((char *)p_alignOrg + v42);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2842, ASSERT_TYPE_ASSERT, "( ( !(from[i].alignOrg & ~15) ) )", "%s\n\t( from[i].alignOrg ) = %i", "( !(from[i].alignOrg & ~15) )", xorValues) )
          __debugbreak();
      }
      if ( (*p_alignOrg & 0xFFFFFFF0) != 0 )
      {
        LODWORD(xorValues) = *p_alignOrg;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2843, ASSERT_TYPE_ASSERT, "( ( !(to[i].alignOrg & ~15) ) )", "%s\n\t( to[i].alignOrg ) = %i", "( !(to[i].alignOrg & ~15) )", xorValues) )
          __debugbreak();
      }
      v30 = *(int *)((char *)p_alignOrg + v42);
      if ( (v30 & 0xC) != 0 && (v30 & 0xC) != 4 && (v30 & 0xC) != 8 )
      {
        LODWORD(xorValues) = *(int *)((char *)p_alignOrg + v42);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2846, ASSERT_TYPE_ASSERT, "( ( alignX == 0 || alignX == 1 || alignX == 2 ) )", "%s\n\t( from[i].alignOrg ) = %i", "( alignX == 0 || alignX == 1 || alignX == 2 )", xorValues) )
          __debugbreak();
      }
      if ( (*((_BYTE *)p_alignOrg + v42) & 3) == 3 )
      {
        LODWORD(xorValues) = *(int *)((char *)p_alignOrg + v42);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2849, ASSERT_TYPE_ASSERT, "( ( alignY == 0 || alignY == 1 || alignY == 2 ) )", "%s\n\t( from[i].alignOrg ) = %i", "( alignY == 0 || alignY == 1 || alignY == 2 )", xorValues) )
          __debugbreak();
      }
      v31 = *p_alignOrg;
      if ( (*p_alignOrg & 0xC) != 0 && (v31 & 0xC) != 4 && (v31 & 0xC) != 8 )
      {
        LODWORD(xorValues) = *p_alignOrg;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2852, ASSERT_TYPE_ASSERT, "( ( alignX == 0 || alignX == 1 || alignX == 2 ) )", "%s\n\t( to[i].alignOrg ) = %i", "( alignX == 0 || alignX == 1 || alignX == 2 )", xorValues) )
          __debugbreak();
      }
      if ( (*(_BYTE *)p_alignOrg & 3) == 3 )
      {
        LODWORD(xorValues) = *p_alignOrg;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2855, ASSERT_TYPE_ASSERT, "( ( alignY == 0 || alignY == 1 || alignY == 2 ) )", "%s\n\t( to[i].alignOrg ) = %i", "( alignY == 0 || alignY == 1 || alignY == 2 )", xorValues) )
          __debugbreak();
      }
      ++v36;
      v16 = from;
      p_alignOrg += 46;
      v32 = v41-- == 1;
      v40 = p_alignOrg;
    }
    while ( !v32 );
    LODWORD(v13) = v39;
    v7 = to;
    v6 = count;
    v14 = v43;
  }
  if ( (int)v13 < v6 )
  {
    v33 = &v7[v14];
    do
    {
      if ( v33->type == HE_TYPE_FREE )
        break;
      memset_0(&v7[(int)v13], 0, sizeof(hudelem_t));
      if ( v33->type )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2862, ASSERT_TYPE_ASSERT, "( to[inuse].type == HE_TYPE_FREE )", (const char *)&queryFormat, "to[inuse].type == HE_TYPE_FREE") )
          __debugbreak();
      }
      LODWORD(v13) = v13 + 1;
      ++v33;
    }
    while ( (int)v13 < v6 );
  }
}

/*
==============
MSG_ReadDeltaMLGSpectatorInfo
==============
*/
char MSG_ReadDeltaMLGSpectatorInfo(msg_t *msg, const int time, const MLGSpectatorClientInfo *from, MLGSpectatorClientInfo *to, CgGlobalsMP *cGameGlob, int clientIdx)
{
  const NetFieldList *NetFieldListForNetFieldType; 
  __int64 count; 
  __int64 Bits; 
  int v13; 
  char v14; 
  int v15; 
  __int64 v16; 
  const NetField *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int16 *p_offset; 
  int v21; 
  const NetField *array; 
  char v25[224]; 

  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3301, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_MLG_SPECTATOR);
  count = (int)NetFieldListForNetFieldType->count;
  array = NetFieldListForNetFieldType->array;
  if ( !from )
  {
    from = (const MLGSpectatorClientInfo *)v25;
    memset_0(v25, 0, 0xD8ui64);
  }
  if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, 6u);
    v13 = truncate_cast<int,__int64>(Bits);
    v14 = 0;
    v15 = 0;
    v16 = count;
    if ( (int)count > 0 )
    {
      v17 = array;
      v18 = 0i64;
      v19 = v13;
      p_offset = &array->offset;
      do
      {
        if ( v18 >= v19 )
        {
          *(int *)((char *)&to->mlgMessageSent + *p_offset) = *(int *)((char *)&from->mlgMessageSent + *p_offset);
        }
        else
        {
          MSG_ReadDeltaField(msg, time, from, to, &v17[v15], 1, 1);
          if ( !v14 )
          {
            v21 = (__int16)p_offset[1];
            if ( v21 == 7 || v21 == -111 )
              v14 = 1;
          }
          v17 = array;
        }
        ++v15;
        ++v18;
        p_offset += 12;
      }
      while ( v18 < v16 );
      if ( v14 )
        CgMLGSpectator::SetClientLoadoutDirty(cGameGlob->m_mlgSpectatorPtr, clientIdx, 1);
    }
    return 1;
  }
  else
  {
    *(_OWORD *)&to->mlgMessageSent = *(_OWORD *)&from->mlgMessageSent;
    *(_OWORD *)&to->killstreakIndexes[1] = *(_OWORD *)&from->killstreakIndexes[1];
    *(_OWORD *)&to->killstreakAvailability[1] = *(_OWORD *)&from->killstreakAvailability[1];
    *(_OWORD *)&to->inClipAmmo[1] = *(_OWORD *)&from->inClipAmmo[1];
    *(_OWORD *)&to->powerSecondaryAmmo = *(_OWORD *)&from->powerSecondaryAmmo;
    *(_OWORD *)&to->nextKillstreakCost = *(_OWORD *)&from->nextKillstreakCost;
    *(_OWORD *)&to->isGametypeVIP = *(_OWORD *)&from->isGametypeVIP;
    *(_OWORD *)&to->isSpecialist = *(_OWORD *)&from->isSpecialist;
    *(_OWORD *)to->loadoutIndicies = *(_OWORD *)from->loadoutIndicies;
    *(_OWORD *)&to->loadoutIndicies[4] = *(_OWORD *)&from->loadoutIndicies[4];
    *(_OWORD *)&to->loadoutIndicies[8] = *(_OWORD *)&from->loadoutIndicies[8];
    *(_OWORD *)to->extraPower = *(_OWORD *)from->extraPower;
    *(_OWORD *)&to->locationSelectorCursor.y = *(_OWORD *)&from->locationSelectorCursor.y;
    *(_QWORD *)&to->clientFoV = *(_QWORD *)&from->clientFoV;
    return 0;
  }
}

/*
==============
MSG_ReadDeltaOmnvar
==============
*/
void MSG_ReadDeltaOmnvar(msg_t *msg, const unsigned int timeBase, const unsigned int idx, const OmnvarData *from, OmnvarData *to, const unsigned int offset)
{
  unsigned __int8 *Def; 
  __int64 Bits; 
  unsigned int Long; 
  OmnvarValue v13; 
  int v14; 
  __int64 v15; 
  __int64 Value; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3374, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3375, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  Def = (unsigned __int8 *)BG_Omnvar_GetDef(idx + offset);
  if ( (Def[33] & 0x40) != 0 )
  {
    if ( MSG_ReadBit(msg) )
    {
      Long = MSG_ReadLong(msg);
    }
    else
    {
      Bits = MSG_ReadBits(msg, 8u);
      Long = timeBase - truncate_cast<int,__int64>(Bits);
    }
  }
  else
  {
    Long = timeBase;
  }
  to->timeModified = Long;
  switch ( Def[34] )
  {
    case 0u:
      to->current.enabled = MSG_ReadBit(msg) != 0;
      return;
    case 1u:
      v13.integer = MSG_ReadFloatCase(msg, &from->current.integer, NULL, 0);
      goto LABEL_23;
    case 2u:
      v14 = -4;
      goto LABEL_16;
    case 3u:
      Value = MSG_ReadValue(msg, &from->current, Def[32], -4);
      v13.integer = truncate_cast<unsigned int,__int64>(Value);
      goto LABEL_23;
    case 4u:
      v13.integer = MSG_ReadDeltaTime(msg, timeBase);
      goto LABEL_23;
    case 5u:
      if ( !Def[32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3406, ASSERT_TYPE_ASSERT, "(def->numbits)", (const char *)&queryFormat, "def->numbits") )
        __debugbreak();
      v14 = 4;
LABEL_16:
      v15 = MSG_ReadValue(msg, &from->current, Def[32], v14);
      v13.integer = truncate_cast<int,__int64>(v15);
LABEL_23:
      to->current = v13;
      break;
    default:
      return;
  }
}

/*
==============
MSG_ReadDeltaOmnvars
==============
*/
void MSG_ReadDeltaOmnvars(msg_t *msg, const int time, const OmnvarData *from, OmnvarData *to)
{
  unsigned int v8; 
  unsigned int v9; 

  v8 = BG_Omnvar_PerSnapMinBitsForIndex();
  v9 = BG_Omnvar_PerSnapCount();
  MSG_ReadDeltaOmnvars_Internal(msg, time, v9, v8, from, to, 0);
}

/*
==============
MSG_ReadDeltaOmnvars_Internal
==============
*/
void MSG_ReadDeltaOmnvars_Internal(msg_t *msg, const int time, unsigned int omnvarCount, unsigned int omnvarIndexBits, const OmnvarData *from, OmnvarData *to, unsigned int omnvarIndexOffset)
{
  __int64 v7; 
  __int64 Bits; 
  const char *fmt; 
  int v13; 
  __int64 offset; 

  v7 = omnvarCount;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3424, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3425, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  memcpy_0(to, from, 8 * v7);
  if ( MSG_ReadBit(msg) )
  {
    while ( 1 )
    {
      Bits = MSG_ReadBits(msg, omnvarIndexBits);
      if ( (Bits < 0 || (unsigned __int64)Bits > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)Bits, "signed", Bits) )
        __debugbreak();
      if ( msg->overflowed || (unsigned int)Bits >= (unsigned int)v7 )
      {
        fmt = "Got bad Omnvar index %i";
        v13 = 3436;
        goto LABEL_22;
      }
      MSG_ReadDeltaOmnvar(msg, time, Bits, &from[(unsigned int)Bits], &to[(unsigned int)Bits], omnvarIndexOffset);
      if ( MSG_ReadBit(msg) )
        break;
LABEL_18:
      if ( !MSG_ReadBit(msg) )
        return;
    }
    while ( 1 )
    {
      Bits = (unsigned int)(Bits + 1);
      if ( msg->overflowed || (unsigned int)Bits >= (unsigned int)v7 )
        break;
      MSG_ReadDeltaOmnvar(msg, time, Bits, &from[Bits], &to[Bits], omnvarIndexOffset);
      if ( !MSG_ReadBit(msg) )
        goto LABEL_18;
    }
    fmt = "Got bad Omnvar index %i (group)";
    v13 = 3450;
LABEL_22:
    LODWORD(offset) = Bits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v13, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, offset) )
      __debugbreak();
    MSG_Discard(msg);
  }
}

/*
==============
MSG_ReadDeltaPlayerstate
==============
*/
void MSG_ReadDeltaPlayerstate(msg_t *msg, const int time, const playerState_s *from, playerState_s *to, bool archived, bool *outRecvOriginAndVelocity, bool *outRecvVehicleState)
{
  int v7; 
  playerState_s *v8; 
  const playerState_s *p_ps; 
  msg_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const NetFieldList *NetFieldListForNetFieldType; 
  int v14; 
  int count; 
  int skippedNetfieldBits; 
  const NetField *array; 
  int v18; 
  bool v19; 
  bool *v20; 
  int v21; 
  int v22; 
  unsigned __int8 *p_changeHints; 
  const NetField *v24; 
  bool v25; 
  bool v26; 
  int i; 
  __int64 v28; 
  const dvar_t *v29; 
  __int64 Bits; 
  char v31; 
  bool *p_dualWielding; 
  __int64 v33; 
  BgWeaponHandle *weaponsEquipped; 
  __int64 v35; 
  __int64 v36; 
  char v37; 
  __int64 v38; 
  unsigned int m_mapEntryId; 
  int v40; 
  __int64 v41; 
  BgWeaponHandle *v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  WeaponAmmoType v46; 
  Weapon *v47; 
  int v48; 
  __int128 v49; 
  double v50; 
  char *v51; 
  __int64 v52; 
  int v53; 
  const NetFieldList *v54; 
  ObjectiveView *objectives; 
  __int64 v56; 
  int v57; 
  int v58; 
  const NetField *v59; 
  const playerState_s *v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  const NetFieldList *v64; 
  signed int v65; 
  int v66; 
  int v67; 
  const NetField *v68; 
  const NetFieldList *v69; 
  signed int v70; 
  int v71; 
  int v72; 
  const NetField *v73; 
  const NetFieldList *v74; 
  TargetMarkerGroupView *targetMarkerGroups; 
  signed __int64 v76; 
  __int64 v77; 
  int v78; 
  int v79; 
  const NetField *v80; 
  const NetFieldList *v81; 
  CalloutMarkerPingView *calloutMarkerPings; 
  char *v83; 
  __int64 v84; 
  int v85; 
  int v86; 
  const NetField *v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  int v91; 
  Weapon *v92; 
  __int64 v93; 
  __int128 v94; 
  double v95; 
  int v96; 
  _DWORD *v97; 
  __int64 v98; 
  int v99; 
  __int64 v100; 
  int v101; 
  __int64 v102; 
  int v103; 
  const char *fmt; 
  int v105; 
  __int64 print; 
  __int64 xorValues; 
  bool xorValuesa; 
  __int64 v109; 
  const playerState_s *froma; 
  int v113; 
  int v114; 
  int v115; 
  Weapon result; 
  playerState_s ps; 

  v7 = 0;
  v8 = to;
  froma = from;
  p_ps = from;
  v10 = msg;
  ps.meleeReaction.m_packed = 0;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2889, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2890, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !outRecvOriginAndVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2891, ASSERT_TYPE_ASSERT, "(outRecvOriginAndVelocity)", (const char *)&queryFormat, "outRecvOriginAndVelocity") )
    __debugbreak();
  if ( !outRecvVehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2892, ASSERT_TYPE_ASSERT, "(outRecvVehicleState)", (const char *)&queryFormat, "outRecvVehicleState") )
    __debugbreak();
  if ( !p_ps )
  {
    p_ps = &ps;
    froma = &ps;
    memset_0(&ps, 0, sizeof(ps));
    BG_InitPlayerState_PrepareForUseAsDelta(&ps, 0, 1);
  }
  memcpy_0(v8, p_ps, sizeof(playerState_s));
  v11 = DVARINT_cl_shownet;
  if ( !DVARINT_cl_shownet )
    goto LABEL_22;
  Dvar_CheckFrontendServerThread(DVARINT_cl_shownet);
  if ( v11->current.integer >= 2 )
    goto LABEL_21;
  v12 = DVARINT_cl_shownet;
  if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer == -2 )
  {
LABEL_21:
    v7 = 1;
    v113 = 1;
    Com_Printf(25, "%3i: playerstate ", (unsigned int)v10->readcount);
  }
  else
  {
LABEL_22:
    v113 = 0;
  }
  *outRecvOriginAndVelocity = MSG_ReadBit(v10) > 0;
  *outRecvVehicleState = MSG_ReadBit(v10) > 0;
  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_PLAYERSTATE);
  v14 = -1;
  count = NetFieldListForNetFieldType->count;
  skippedNetfieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
  array = NetFieldListForNetFieldType->array;
  v114 = skippedNetfieldBits;
  v115 = count;
  v18 = MSG_ReadLastChangedField(v10, count + 1) - 1;
  if ( v18 < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2933, ASSERT_TYPE_ASSERT, "(lc >= -1)", (const char *)&queryFormat, "lc >= -1") )
    __debugbreak();
  if ( v18 >= count )
  {
    MSG_Discard(v10);
    Com_PrintError(25, "MSG_ReadDeltaPlayerstate: Got lastChanged field of %i, but there are only %i fields\n", (unsigned int)v18, (unsigned int)count);
    return;
  }
  v19 = v18 == -1;
  if ( v18 > -1 )
  {
    v20 = outRecvVehicleState;
    do
    {
      if ( v10->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2948, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      v21 = v14;
      v14 += MSG_ReadNumFieldsSkipped(v10, skippedNetfieldBits, v18 - v14);
      v22 = v21 + 1;
      if ( v21 + 1 < v14 )
      {
        p_changeHints = &array[v22].changeHints;
        do
        {
          if ( *p_changeHints != 2 )
            MSG_CopyFieldOver(array, froma, to, v22);
          ++v22;
          p_changeHints += 24;
        }
        while ( v22 < v14 );
        v10 = msg;
        v20 = outRecvVehicleState;
      }
      v24 = &array[v14];
      v25 = *outRecvOriginAndVelocity && v24->changeHints == 3 || *v20 && v24->changeHints == 4;
      v26 = archived || !v25 && v24->changeHints != 7;
      if ( v14 > v18 )
      {
        LODWORD(v109) = v18;
        LODWORD(xorValues) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2964, ASSERT_TYPE_ASSERT, "(nextChanged <= lc)", "%s\n\tnextChanged == %i, lc == %i", "nextChanged <= lc", xorValues, v109) )
          __debugbreak();
      }
      if ( v14 <= v21 )
      {
        LODWORD(v109) = v21;
        LODWORD(xorValues) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2965, ASSERT_TYPE_ASSERT, "(nextChanged > lastChanged)", "%s\n\tnextChanged == %i, lastChanged == %i", "nextChanged > lastChanged", xorValues, v109) )
          __debugbreak();
      }
      v8 = to;
      xorValuesa = v26;
      v7 = v113;
      MSG_ReadDeltaField(v10, time, froma, to, &array[v14], v113, xorValuesa);
      if ( v10->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2969, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      skippedNetfieldBits = v114;
      v19 = v14 == v18;
    }
    while ( v14 < v18 );
    count = v115;
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2971, ASSERT_TYPE_ASSERT, "( nextChanged == lc )", (const char *)&queryFormat, "nextChanged == lc") )
    __debugbreak();
  for ( i = v14 + 1; i < count; ++i )
    MSG_CopyFieldOver(array, froma, v8, i);
  v28 = v14;
  if ( v14 > 0 )
  {
    do
    {
      if ( array->changeHints == 2 )
        MSG_ReadDeltaField(v10, time, froma, v8, array, v7, 1);
      ++array;
      --v28;
    }
    while ( v28 );
  }
  if ( MSG_ReadBit(v10) > 0 )
  {
    v29 = DVARINT_cl_shownet;
    if ( DVARINT_cl_shownet )
    {
      Dvar_CheckFrontendServerThread(DVARINT_cl_shownet);
      if ( v29->current.integer == 5 )
        Com_Printf(25, "%s ", "PS_STATS");
    }
    Bits = MSG_ReadBits(v10, 5u);
    v31 = truncate_cast<int,__int64>(Bits);
    if ( (v31 & 1) != 0 )
      v8->stats[0] = MSG_ReadShort(v10);
    if ( (v31 & 2) != 0 )
      v8->stats[1] = MSG_ReadShort(v10);
    if ( (v31 & 4) != 0 )
      v8->stats[2] = MSG_ReadShort(v10);
    if ( (v31 & 8) != 0 )
      v8->stats[3] = MSG_ReadByte(v10);
    if ( (v31 & 0x10) != 0 )
      v8->stats[4] = MSG_ReadShort(v10);
  }
  if ( MSG_ReadBit(v10) > 0 )
  {
    while ( 1 )
    {
      v88 = MSG_ReadBits(v10, 4u);
      v44 = v88;
      if ( (unsigned __int64)(v88 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v88, "signed", v88) )
        __debugbreak();
      if ( v10->overflowed || v44 >= 15 )
        break;
      v89 = (__int64)&v8->weapCommon.ammoInClip[v44];
      v90 = MSG_ReadBits(v10, 1u);
      v91 = v90;
      if ( (unsigned __int64)(v90 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum WeaponAmmoType __cdecl truncate_cast_impl<enum WeaponAmmoType,__int64>(__int64)", "signed", (int)v90, "signed", v90) )
        __debugbreak();
      *(_DWORD *)(v89 + 60) = v91;
      v92 = MSG_ReadWeapon(&result, v10);
      v93 = 2i64;
      v94 = *(_OWORD *)&v92->attachmentVariationIndices[5];
      v95 = *(double *)&v92->attachmentVariationIndices[21];
      v96 = *(_DWORD *)&v92->weaponCamo;
      *(__m256i *)v89 = *(__m256i *)&v92->weaponIdx;
      *(_OWORD *)(v89 + 32) = v94;
      *(double *)(v89 + 48) = v95;
      *(_DWORD *)(v89 + 56) = v96;
      v97 = (_DWORD *)(v89 + 72);
      do
      {
        if ( MSG_ReadBit(v10) )
        {
          v98 = MSG_ReadBits(v10, 5u);
          v99 = v98;
          if ( (unsigned __int64)(v98 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v98, "signed", v98) )
            __debugbreak();
          *(v97 - 2) = v99;
        }
        if ( MSG_ReadBit(v10) )
        {
          v100 = MSG_ReadBits(v10, 5u);
          v101 = v100;
          if ( (unsigned __int64)(v100 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v100, "signed", v100) )
            __debugbreak();
          *v97 = v101;
        }
        if ( MSG_ReadBit(v10) )
        {
          v102 = MSG_ReadBits(v10, 9u);
          v103 = v102;
          if ( (unsigned __int64)(v102 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v102, "signed", v102) )
            __debugbreak();
          v97[2] = v103;
        }
        ++v97;
        --v93;
      }
      while ( v93 );
      v8 = to;
      if ( MSG_ReadBit(v10) <= 0 )
        goto LABEL_85;
    }
    fmt = "Invalid state, message overflowed in clip ammo (%i)";
    v105 = 3019;
  }
  else
  {
LABEL_85:
    if ( MSG_ReadBit(v10) > 0 )
    {
      p_dualWielding = &v8->weapEquippedData[0].dualWielding;
      v33 = 15i64;
      weaponsEquipped = v8->weaponsEquipped;
      do
      {
        if ( MSG_ReadBit(v10) > 0 )
        {
          if ( MSG_ReadBit(v10) > 0 )
          {
            if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 235, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
              __debugbreak();
            weaponsEquipped->m_mapEntryId = MSG_ReadBits(v10, BgWeaponMap::ms_runtimeIndexBits);
          }
          *(p_dualWielding - 1) = MSG_ReadBit(v10) > 0;
          *p_dualWielding = MSG_ReadBit(v10) > 0;
          p_dualWielding[1] = MSG_ReadBit(v10) > 0;
          v35 = MSG_ReadBits(v10, 2u);
          if ( (unsigned __int64)(v35 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v35, "signed", v35) )
            __debugbreak();
          *(_DWORD *)(p_dualWielding + 3) = v35;
          v36 = MSG_ReadBits(v10, 3u);
          v37 = v36;
          if ( (v36 < 0 || (unsigned __int64)v36 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum OffhandSlot __cdecl truncate_cast_impl<enum OffhandSlot,__int64>(__int64)", "unsigned", (unsigned __int8)v36, "signed", v36) )
            __debugbreak();
          p_dualWielding[9] = v37;
          v38 = MSG_ReadBits(v10, 3u);
          if ( (unsigned __int64)(v38 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum WeaponSlot __cdecl truncate_cast_impl<enum WeaponSlot,__int64>(__int64)", "signed", (int)v38, "signed", v38) )
            __debugbreak();
          *(_DWORD *)(p_dualWielding + 11) = v38;
          p_dualWielding[7] = MSG_ReadBit(v10) > 0;
          p_dualWielding[8] = MSG_ReadBit(v10) > 0;
        }
        ++weaponsEquipped;
        p_dualWielding += 16;
        --v33;
      }
      while ( v33 );
      v8 = to;
    }
    m_mapEntryId = v8->weapCommon.weaponHandle.m_mapEntryId;
    if ( m_mapEntryId )
    {
      v40 = 0;
      v41 = 0i64;
      v42 = v8->weaponsEquipped;
      do
      {
        if ( v42->m_mapEntryId == m_mapEntryId )
          break;
        ++v40;
        ++v41;
        ++v42;
      }
      while ( v41 < 15 );
      if ( v40 >= 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3088, ASSERT_TYPE_ASSERT, "(equippedWeaponIndex < 15)", "%s\n\tPlayer does not have their current weapon equipped.", "equippedWeaponIndex < MAX_EQUIPPED_WEAPONS") )
        __debugbreak();
    }
    if ( MSG_ReadBit(v10) <= 0 )
    {
LABEL_126:
      if ( MSG_ReadBit(v10) > 0 )
      {
        v54 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_OBJECTIVE);
        objectives = froma->objectives;
        v56 = 32i64;
        v57 = v54->skippedNetfieldBits;
        v58 = v54->count;
        v59 = v54->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, objectives, (char *)objectives + (char *)v8 - (char *)froma, v58, v59, v57);
          ++objectives;
          --v56;
        }
        while ( v56 );
        v8 = to;
      }
      v60 = froma;
      if ( MSG_ReadBit(v10) > 0 )
      {
        MSG_ReadDeltaHudElems(v10, time, froma->hud.archival, v8->hud.archival, 15, 4);
        MSG_ReadDeltaHudElems(v10, time, froma->hud.current, v8->hud.current, 30, 5);
      }
      v61 = BG_Omnvar_PerSnapCount();
      v62 = BG_Omnvar_PerPlayerstateMinBitsForIndex();
      v63 = BG_Omnvar_PerPlayerstateCount();
      MSG_ReadDeltaOmnvars_Internal(v10, time, v63, v62, froma->rxvOmnvars, v8->rxvOmnvars, v61);
      if ( MSG_ReadBit(v10) > 0 )
      {
        v64 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_HEAD_ICON);
        v65 = 0;
        v66 = v64->skippedNetfieldBits;
        v67 = v64->count;
        v68 = v64->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, &froma->headIcons[v65], &v8->headIcons[v65], v67, v68, v66);
          ++v65;
        }
        while ( (unsigned int)v65 < 0x20 );
      }
      if ( MSG_ReadBit(v10) > 0 )
      {
        v69 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_HEAD_ICON_EXTENDED_DATA);
        v70 = 0;
        v71 = v69->skippedNetfieldBits;
        v72 = v69->count;
        v73 = v69->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, &froma->headIconsExtendedData[v70], &v8->headIconsExtendedData[v70], v72, v73, v71);
          ++v70;
        }
        while ( (unsigned int)v70 < 0x20 );
      }
      if ( MSG_ReadBit(v10) > 0 )
      {
        v74 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_TARGET_MARKER);
        targetMarkerGroups = froma->targetMarkerGroups;
        v76 = (char *)v8 - (char *)froma->targetMarkerGroups;
        v77 = 2i64;
        v78 = v74->skippedNetfieldBits;
        v79 = v74->count;
        v80 = v74->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, targetMarkerGroups, &targetMarkerGroups[130].extraStates[v76 + 4], v79, v80, v78);
          ++targetMarkerGroups;
          --v77;
        }
        while ( v77 );
        v8 = to;
        v60 = froma;
      }
      if ( MSG_ReadBit(v10) > 0 )
      {
        v81 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_CALLOUT_MARKER_PING);
        calloutMarkerPings = v60->calloutMarkerPings;
        v83 = (char *)((char *)v8 - (char *)v60);
        v84 = 52i64;
        v85 = v81->skippedNetfieldBits;
        v86 = v81->count;
        v87 = v81->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, calloutMarkerPings, &v83[(_QWORD)calloutMarkerPings], v86, v87, v85);
          ++calloutMarkerPings;
          --v84;
        }
        while ( v84 );
      }
      return;
    }
    while ( 1 )
    {
      v43 = MSG_ReadBits(v10, 4u);
      v44 = v43;
      if ( (unsigned __int64)(v43 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v43, "signed", v43) )
        __debugbreak();
      if ( v10->overflowed || v44 >= 15 )
        break;
      v45 = MSG_ReadBits(v10, 1u);
      v46 = (int)v45;
      if ( (unsigned __int64)(v45 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum WeaponAmmoType __cdecl truncate_cast_impl<enum WeaponAmmoType,__int64>(__int64)", "signed", (int)v45, "signed", v45) )
        __debugbreak();
      v8->weapCommon.ammoNotInClip[v44].ammoType.ammoType = v46;
      v47 = MSG_ReadWeapon(&result, v10);
      v48 = *(_DWORD *)&v47->weaponCamo;
      v49 = *(_OWORD *)&v47->attachmentVariationIndices[5];
      v50 = *(double *)&v47->attachmentVariationIndices[21];
      v51 = (char *)v8 + 68 * v44;
      *(__m256i *)(v51 + 1912) = *(__m256i *)&v47->weaponIdx;
      *(_OWORD *)(v51 + 1944) = v49;
      *((double *)v51 + 245) = v50;
      *((_DWORD *)v51 + 492) = v48;
      v52 = MSG_ReadBits(v10, 0xAu);
      v53 = v52;
      if ( (unsigned __int64)(v52 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v52, "signed", v52) )
        __debugbreak();
      *((_DWORD *)v51 + 494) = v53;
      if ( MSG_ReadBit(v10) <= 0 )
        goto LABEL_126;
    }
    fmt = "Invalid state, message overflowed in ammo stored (%i)";
    v105 = 3103;
  }
  LODWORD(print) = v44;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v105, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, print) )
    __debugbreak();
  MSG_Discard(v10);
}

/*
==============
MSG_ReadDeltaPlayerstateOmnvars
==============
*/
void MSG_ReadDeltaPlayerstateOmnvars(msg_t *msg, const int time, const OmnvarData *from, OmnvarData *to)
{
  unsigned int omnvarIndexOffset; 
  unsigned int v9; 
  unsigned int v10; 

  omnvarIndexOffset = BG_Omnvar_PerSnapCount();
  v9 = BG_Omnvar_PerPlayerstateMinBitsForIndex();
  v10 = BG_Omnvar_PerPlayerstateCount();
  MSG_ReadDeltaOmnvars_Internal(msg, time, v10, v9, from, to, omnvarIndexOffset);
}

/*
==============
MSG_ReadDeltaScoreboard
==============
*/
void MSG_ReadDeltaScoreboard(msg_t *msg, const int time, const ScoreboardInfo *from, ScoreboardInfo *to, const int clientCount)
{
  const ScoreboardInfo *v6; 
  int *teamPlacement; 
  __int64 v9; 
  int *v10; 
  __int128 v11; 
  ScoreboardInfo *v12; 
  __int64 v13; 
  signed __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 Bits; 
  int v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  __int64 i; 
  __int64 v23; 
  ScoreInfo *v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  __int64 v46; 
  char *v47; 
  ScoreInfo *clientScores; 
  int ping; 
  __int64 v50; 
  int v51; 
  int fromF; 
  const ScoreboardInfo *v53; 
  char v54[6032]; 

  v53 = from;
  v6 = from;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3218, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !v6 )
  {
    v6 = (const ScoreboardInfo *)v54;
    v53 = (const ScoreboardInfo *)v54;
    memset_0(v54, 0, 0x1784ui64);
  }
  teamPlacement = v6->teamPlacement;
  v9 = 6i64;
  v10 = to->teamPlacement;
  do
  {
    v10 += 32;
    v11 = *(_OWORD *)teamPlacement;
    teamPlacement += 32;
    *((_OWORD *)v10 - 8) = v11;
    *((_OWORD *)v10 - 7) = *((_OWORD *)teamPlacement - 7);
    *((_OWORD *)v10 - 6) = *((_OWORD *)teamPlacement - 6);
    *((_OWORD *)v10 - 5) = *((_OWORD *)teamPlacement - 5);
    *((_OWORD *)v10 - 4) = *((_OWORD *)teamPlacement - 4);
    *((_OWORD *)v10 - 3) = *((_OWORD *)teamPlacement - 3);
    *((_OWORD *)v10 - 2) = *((_OWORD *)teamPlacement - 2);
    *((_OWORD *)v10 - 1) = *((_OWORD *)teamPlacement - 1);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v10 = *(_OWORD *)teamPlacement;
  *((_OWORD *)v10 + 1) = *((_OWORD *)teamPlacement + 1);
  *((_QWORD *)v10 + 4) = *((_QWORD *)teamPlacement + 4);
  v10[10] = teamPlacement[10];
  if ( MSG_ReadBit(msg) )
  {
    v12 = to;
    v13 = 2i64;
    v14 = (char *)v6 - (char *)to;
    do
    {
      v15 = *(int *)((char *)v12->teamScores + v14);
      if ( MSG_ReadBit(msg) )
      {
        fromF = v15;
        v16 = MSG_ReadValue(msg, &fromF, 16, -4);
        v15 = truncate_cast<int,__int64>(v16);
      }
      v12->teamScores[0] = v15;
      v12 = (ScoreboardInfo *)((char *)v12 + 4);
      --v13;
    }
    while ( v13 );
    if ( MSG_ReadBit(msg) )
    {
      while ( !msg->overflowed )
      {
        Bits = MSG_ReadBits(msg, 8u);
        v18 = Bits;
        if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
          __debugbreak();
        v19 = MSG_ReadBits(msg, 8u);
        v20 = v19;
        if ( (unsigned __int64)(v19 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v19, "signed", v19) )
          __debugbreak();
        to->teamPlacement[v18] = v20;
        if ( !MSG_ReadBit(msg) )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      v21 = clientCount;
      fromF = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_STATUSICON);
      if ( clientCount > 0 )
      {
        for ( i = 0i64; i < clientCount; ++i )
        {
          v23 = (__int64)&v53->clientScores[i];
          v24 = &to->clientScores[i];
          if ( MSG_ReadBit(msg) )
          {
            v25 = *(unsigned __int8 *)(v23 + 2);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v25;
              v26 = MSG_ReadValue(msg, &v51, fromF, -4);
              v25 = truncate_cast<int,__int64>(v26);
            }
            if ( (v25 < 0 || (unsigned int)v25 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v25, "signed", v25) )
              __debugbreak();
            to->clientScores[i].status = v25;
            v27 = *(unsigned __int16 *)(v23 + 8);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v27;
              v28 = MSG_ReadValue(msg, &v51, 10, -4);
              v27 = truncate_cast<int,__int64>(v28);
            }
            if ( (v27 < 0 || (unsigned int)v27 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v27, "signed", v27) )
              __debugbreak();
            to->clientScores[i].deaths = v27;
            v29 = *(unsigned __int16 *)(v23 + 4);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v29;
              v30 = MSG_ReadValue(msg, &v51, 16, -4);
              v29 = truncate_cast<int,__int64>(v30);
            }
            if ( (v29 < 0 || (unsigned int)v29 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v29, "signed", v29) )
              __debugbreak();
            to->clientScores[i].score = v29;
            v31 = *(unsigned __int16 *)(v23 + 6);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v31;
              v32 = MSG_ReadValue(msg, &v51, 14, -4);
              v31 = truncate_cast<int,__int64>(v32);
            }
            if ( (v31 < 0 || (unsigned int)v31 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v31, "signed", v31) )
              __debugbreak();
            to->clientScores[i].kills = v31;
            v33 = *(unsigned __int16 *)(v23 + 10);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v33;
              v34 = MSG_ReadValue(msg, &v51, 10, -4);
              v33 = truncate_cast<int,__int64>(v34);
            }
            if ( (v33 < 0 || (unsigned int)v33 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v33, "signed", v33) )
              __debugbreak();
            to->clientScores[i].assists = v33;
            v35 = *(unsigned __int16 *)(v23 + 12);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v35;
              v36 = MSG_ReadValue(msg, &v51, 16, -4);
              v35 = truncate_cast<int,__int64>(v36);
            }
            if ( (v35 < 0 || (unsigned int)v35 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v35, "signed", v35) )
              __debugbreak();
            to->clientScores[i].extrascore0 = v35;
            v37 = *(unsigned __int16 *)(v23 + 14);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v37;
              v38 = MSG_ReadValue(msg, &v51, 8, -4);
              v37 = truncate_cast<int,__int64>(v38);
            }
            if ( (v37 < 0 || (unsigned int)v37 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v37, "signed", v37) )
              __debugbreak();
            to->clientScores[i].extrascore1 = v37;
            v39 = *(unsigned __int16 *)(v23 + 16);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v39;
              v40 = MSG_ReadValue(msg, &v51, 16, -4);
              v39 = truncate_cast<int,__int64>(v40);
            }
            if ( (v39 < 0 || (unsigned int)v39 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v39, "signed", v39) )
              __debugbreak();
            to->clientScores[i].extrascore2 = v39;
            v41 = *(unsigned __int16 *)(v23 + 18);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v41;
              v42 = MSG_ReadValue(msg, &v51, 16, -4);
              v41 = truncate_cast<int,__int64>(v42);
            }
            if ( (v41 < 0 || (unsigned int)v41 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v41, "signed", v41) )
              __debugbreak();
            to->clientScores[i].extrascore3 = v41;
            v43 = *(unsigned __int16 *)(v23 + 22);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v43;
              v44 = MSG_ReadValue(msg, &v51, 6, -4);
              v43 = truncate_cast<int,__int64>(v44);
            }
            if ( (v43 < 0 || (unsigned int)v43 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v43, "signed", v43) )
              __debugbreak();
            to->clientScores[i].adrenaline = v43;
            v45 = *(unsigned __int16 *)(v23 + 24);
            if ( MSG_ReadBit(msg) )
            {
              v51 = v45;
              v46 = MSG_ReadValue(msg, &v51, 10, -4);
              v45 = truncate_cast<int,__int64>(v46);
            }
            if ( (v45 < 0 || (unsigned int)v45 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v45, "signed", v45) )
              __debugbreak();
            to->clientScores[i].deathTimerLength = v45;
            v24->ping = *(_WORD *)v23;
          }
          else
          {
            *(_OWORD *)&v24->ping = *(_OWORD *)v23;
            *(double *)&to->clientScores[i].extrascore2 = *(double *)(v23 + 16);
            to->clientScores[i].deathTimerLength = *(_WORD *)(v23 + 24);
          }
        }
      }
      if ( MSG_ReadBit(msg) && clientCount > 0i64 )
      {
        v47 = (char *)((char *)to - (char *)v53);
        clientScores = v53->clientScores;
        do
        {
          ping = clientScores->ping;
          if ( MSG_ReadBit(msg) )
          {
            v51 = ping;
            v50 = MSG_ReadValue(msg, &v51, 10, -4);
            ping = truncate_cast<int,__int64>(v50);
          }
          if ( (unsigned int)(ping + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)ping, "signed", ping) )
            __debugbreak();
          *(_WORD *)&v47[(_QWORD)clientScores++] = ping;
          --v21;
        }
        while ( v21 );
      }
    }
  }
  else
  {
    memcpy_0(to, v6, sizeof(ScoreboardInfo));
  }
}

/*
==============
MSG_ReadDeltaStruct
==============
*/
__int64 MSG_ReadDeltaStruct(msg_t *msg, const int time, const void *from, void *to, unsigned int number, int numFields, int indexBits, const int indexSize, const NetField *stateFields, const int skippedFieldBits)
{
  const dvar_t *v14; 
  const dvar_t *v15; 

  if ( number >= 1 << indexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2314, ASSERT_TYPE_ASSERT, "( number < (1u << indexBits) )", (const char *)&queryFormat, "number < (1u << indexBits)") )
    __debugbreak();
  if ( MSG_ReadBit(msg) == 1 )
  {
    v14 = DVARINT_cl_shownet;
    if ( DVARINT_cl_shownet )
    {
      Dvar_CheckFrontendServerThread(DVARINT_cl_shownet);
      if ( v14->current.integer >= 2 )
        goto LABEL_11;
      v15 = DVARINT_cl_shownet;
      if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.integer == -1 )
LABEL_11:
        Com_Printf(25, "%3i: #%-3i remove\n", (unsigned int)msg->readcount, number);
    }
    return 1i64;
  }
  else
  {
    MSG_SetField(to, indexSize, number);
    MSG_ReadDeltaFields(msg, time, from, to, numFields, stateFields, skippedFieldBits);
    return 0i64;
  }
}

/*
==============
MSG_ReadDeltaTime
==============
*/
int MSG_ReadDeltaTime(msg_t *msg, int timeBase)
{
  __int64 Bits; 

  if ( MSG_ReadBit(msg) )
    return MSG_ReadLong(msg);
  Bits = MSG_ReadBits(msg, 8u);
  return timeBase - truncate_cast<int,__int64>(Bits);
}

/*
==============
MSG_ReadDeltaUmbraGateState
==============
*/
bitarray<384> *MSG_ReadDeltaUmbraGateState(bitarray<384> *result, msg_t *msg, const bitarray<384> *from)
{
  unsigned __int64 numUmbraGates; 
  int v7; 
  unsigned int v8; 
  __int64 Bits; 
  unsigned __int64 v10; 
  unsigned int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  *(_QWORD *)result->array = -1i64;
  *(_QWORD *)&result->array[2] = -1i64;
  *(_QWORD *)&result->array[4] = -1i64;
  *(_QWORD *)&result->array[6] = -1i64;
  *(_QWORD *)&result->array[8] = -1i64;
  *(_QWORD *)&result->array[10] = -1i64;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 141, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  numUmbraGates = comWorld.numUmbraGates;
  if ( comWorld.numUmbraGates )
  {
    if ( !MSG_ReadBit(msg) )
    {
      if ( from )
      {
        *(__m256i *)result->array = *(__m256i *)from->array;
        *(_OWORD *)&result->array[8] = *(_OWORD *)&from->array[8];
        return result;
      }
      v7 = 4051;
      goto LABEL_12;
    }
    if ( MSG_ReadBit(msg) )
    {
      if ( !from )
      {
        v7 = 4064;
LABEL_12:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v7, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Received a 'no change' umbra state without a 'from' state") )
          __debugbreak();
        MSG_Discard(msg);
        return result;
      }
      *(__m256i *)result->array = *(__m256i *)from->array;
      *(_OWORD *)&result->array[8] = *(_OWORD *)&from->array[8];
      v8 = I_log2Ceil(numUmbraGates);
      while ( 1 )
      {
        Bits = MSG_ReadBits(msg, v8);
        v10 = (unsigned int)truncate_cast<int,__int64>(Bits);
        if ( msg->overflowed )
          break;
        if ( ((v10 & 0x80000000) != 0i64 || (int)v10 >= (int)numUmbraGates) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4082, ASSERT_TYPE_ASSERT, "(gateIndex >= 0 && gateIndex < numWorldGates)", (const char *)&queryFormat, "gateIndex >= 0 && gateIndex < numWorldGates") )
          __debugbreak();
        if ( (unsigned int)v10 >= 0x180 )
        {
          LODWORD(v18) = 384;
          LODWORD(v17) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
            __debugbreak();
        }
        v11 = 0x80000000 >> (v10 & 0x1F);
        v12 = &result->array[v10 >> 5];
        if ( (v11 & *v12) != 0 )
        {
          if ( (unsigned int)v10 >= 0x180 )
          {
            LODWORD(v20) = 384;
            LODWORD(v19) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v19, v20) )
              __debugbreak();
          }
          *v12 &= ~v11;
        }
        else
        {
          if ( (unsigned int)v10 >= 0x180 )
          {
            LODWORD(v20) = 384;
            LODWORD(v19) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v19, v20) )
              __debugbreak();
          }
          *v12 |= v11;
        }
        if ( !MSG_ReadBit(msg) )
          return result;
      }
      Com_PrintError(25, "MSG_ReadDeltaUmbraGateState: Invalid state, message overflowed\n");
      MSG_Discard(msg);
    }
    else
    {
      v13 = 0i64;
      if ( (unsigned int)numUmbraGates >= 0x20 )
      {
        v14 = numUmbraGates >> 5;
        do
        {
          result->array[v13] = MSG_ReadLong(msg);
          LODWORD(numUmbraGates) = numUmbraGates - 32;
          v13 = (unsigned int)(v13 + 1);
          --v14;
        }
        while ( v14 );
      }
      if ( (_DWORD)numUmbraGates )
      {
        v15 = MSG_ReadBits(msg, numUmbraGates);
        result->array[v13] = (0xFFFFFFFF >> numUmbraGates) | (truncate_cast<int,__int64>(v15) << (32 - numUmbraGates));
      }
    }
  }
  return result;
}

/*
==============
MSG_ReadDeltaWeaponMapEntry
==============
*/
char MSG_ReadDeltaWeaponMapEntry(msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, WeaponMapEntry *to)
{
  Weapon *v8; 
  __int128 v9; 
  double v10; 
  int v11; 
  __int64 v12; 
  Weapon result; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3530, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3531, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( weaponMapIndex >= (unsigned int)BgWeaponMap::ms_runtimeSize )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v12) = weaponMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3532, ASSERT_TYPE_ASSERT, "(unsigned)( weaponMapIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponMapIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v12, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  if ( MSG_ReadBit(msg) )
    return 1;
  to->index = truncate_cast<unsigned short,int>(weaponMapIndex);
  v8 = MSG_ReadWeapon(&result, msg);
  v9 = *(_OWORD *)&v8->attachmentVariationIndices[5];
  v10 = *(double *)&v8->attachmentVariationIndices[21];
  v11 = *(_DWORD *)&v8->weaponCamo;
  *(__m256i *)&to->weapon.weaponIdx = *(__m256i *)&v8->weaponIdx;
  *(_OWORD *)&to->weapon.attachmentVariationIndices[5] = v9;
  *(double *)&to->weapon.attachmentVariationIndices[21] = v10;
  *(_DWORD *)&to->weapon.weaponCamo = v11;
  if ( !to->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3547, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( to->weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( to->weapon )") )
    __debugbreak();
  return 0;
}

/*
==============
MSG_ReadEntityIndex
==============
*/
__int64 MSG_ReadEntityIndex(msg_t *msg, int indexBits)
{
  int lastEntityRef; 
  __int64 v5; 
  int v6; 
  int v7; 
  __int64 Bits; 
  __int64 result; 
  __int64 v10; 

  if ( MSG_ReadBit(msg) )
  {
    if ( msg_printEntityNums->current.enabled )
      Com_Printf(25, "Entity num: 1 bit (inc)\n");
    lastEntityRef = ++msg->lastEntityRef;
  }
  else if ( indexBits != 11 || MSG_ReadBit(msg) )
  {
    if ( msg_printEntityNums->current.enabled )
      Com_Printf(25, "Entity num: %i bits (full)\n", (unsigned int)(indexBits + 2));
    if ( indexBits > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 488, ASSERT_TYPE_ASSERT, "(indexBits <= 32)", (const char *)&queryFormat, "indexBits <= 32") )
      __debugbreak();
    Bits = MSG_ReadBits(msg, indexBits);
    lastEntityRef = truncate_cast<int,__int64>(Bits);
    if ( lastEntityRef <= msg->lastEntityRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 490, ASSERT_TYPE_ASSERT, "(delta > msg->lastEntityRef)", "%s\n\t%i <= %i", "delta > msg->lastEntityRef", lastEntityRef, msg->lastEntityRef) )
      __debugbreak();
    msg->lastEntityRef = lastEntityRef;
  }
  else
  {
    if ( msg_printEntityNums->current.enabled )
      Com_Printf(25, "Entity num: %i bits (delta)\n", 11i64);
    v5 = MSG_ReadBits(msg, 9u);
    v6 = truncate_cast<int,__int64>(v5);
    v7 = v6;
    if ( v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 479, ASSERT_TYPE_ASSERT, "( ( delta > 0 ) )", "( delta ) = %i", v6) )
      __debugbreak();
    msg->lastEntityRef += v7;
    lastEntityRef = msg->lastEntityRef;
  }
  if ( msg_printEntityNums->current.enabled )
    Com_Printf(25, "Read entity num %i\n", (unsigned int)lastEntityRef);
  result = (unsigned int)msg->lastEntityRef;
  if ( !msg->overflowed && (int)result < 0 )
  {
    LODWORD(v10) = msg->lastEntityRef;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 497, ASSERT_TYPE_ASSERT, "( ( msg->overflowed || msg->lastEntityRef >= 0 ) )", "%s\n\t( msg->lastEntityRef ) = %i", "( msg->overflowed || msg->lastEntityRef >= 0 )", v10) )
      __debugbreak();
    return (unsigned int)msg->lastEntityRef;
  }
  return result;
}

/*
==============
MSG_ReadFloatByRangeAndBits
==============
*/
__int64 MSG_ReadFloatByRangeAndBits(msg_t *msg, const int *fromF, float maxValue, unsigned int bitCount, const NetField *field, int print)
{
  int Bit; 
  unsigned int v10; 
  __int64 Bits; 
  int v13; 
  int v14; 
  double v15; 
  int v16; 

  if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, bitCount);
    v13 = truncate_cast<int,__int64>(Bits);
    v14 = MSG_PackSignedFloat(*(float *)fromF, maxValue, bitCount);
    v15 = MSG_UnpackSignedFloat(v13 ^ (unsigned int)v14, maxValue, bitCount);
    if ( print && field )
      Com_Printf(25, "%s%s:%f \n", (const char *)&queryFormat.fmt + 3, field->name, *(float *)&v15);
    return LODWORD(v15);
  }
  else
  {
    Bit = MSG_ReadBit(msg);
    v10 = Bit << 31;
    if ( COERCE_FLOAT(Bit << 31) != 0.0 )
    {
      v16 = Bit << 31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 972, ASSERT_TYPE_ASSERT, "( *reinterpret_cast<float *>( &value ) == 0.0f )", (const char *)&queryFormat, "*reinterpret_cast<float *>( &value ) == 0.0f", v16) )
        __debugbreak();
    }
    return v10;
  }
}

/*
==============
MSG_ReadFloatCase
==============
*/
__int64 MSG_ReadFloatCase(msg_t *msg, const int *fromF, const NetField *field, int print)
{
  int Bit; 
  int v9; 
  unsigned int v10; 
  __int64 Bits; 
  int v12; 
  __int64 v13; 
  float v15; 

  Bit = MSG_ReadBit(msg);
  v9 = MSG_ReadBit(msg);
  if ( Bit )
  {
    if ( v9 )
    {
      v10 = *fromF ^ MSG_ReadLong(msg);
      if ( print && field )
        Com_Printf(25, "%s:%f ", field->name, *(float *)&v10);
    }
    else
    {
      Bits = MSG_ReadBits(msg, 5u);
      v12 = truncate_cast<int,__int64>(Bits);
      v13 = ((32 * MSG_ReadByte(msg) + v12) ^ (unsigned int)((int)*(float *)fromF + 4096)) - 4096;
      v15 = (float)(int)v13;
      if ( print && field )
        Com_Printf(25, "%s:%i ", field->name, v13);
      *(float *)&v10 = v15;
    }
  }
  else
  {
    v10 = v9 << 31;
    if ( *(float *)&v10 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 895, ASSERT_TYPE_ASSERT, "( *reinterpret_cast< float * >( toF ) == 0.0f )", (const char *)&queryFormat, "*reinterpret_cast< float * >( toF ) == 0.0f", v10) )
      __debugbreak();
  }
  return v10;
}

/*
==============
MSG_ReadLastChangedField
==============
*/
int MSG_ReadLastChangedField(msg_t *msg, int totalFields)
{
  unsigned int MinBitCountForNum; 
  __int64 Bits; 
  int result; 
  int v7; 
  int v8; 
  int v9; 

  MinBitCountForNum = GetMinBitCountForNum(totalFields);
  Bits = MSG_ReadBits(msg, MinBitCountForNum);
  result = truncate_cast<int,__int64>(Bits);
  v7 = result;
  if ( result >= totalFields )
  {
    v9 = totalFields;
    v8 = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 520, ASSERT_TYPE_ASSERT, "(lastChanged < totalFields)", "%s\n\tlastChanged was %i, totalFields is %i\n", "lastChanged < totalFields", v8, v9) )
      __debugbreak();
    return v7;
  }
  return result;
}

/*
==============
MSG_ReadNetConstString
==============
*/
__int64 MSG_ReadNetConstString(msg_t *msg, const NetConstStringType type)
{
  int BitsNeededForType; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1428, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  BitsNeededForType = NetConstStrings_GetBitsNeededForType(type);
  return MSG_ReadValueNoXor(msg, BitsNeededForType);
}

/*
==============
MSG_ReadNumFieldsSkipped
==============
*/
__int64 MSG_ReadNumFieldsSkipped(msg_t *msg, const int skippedFieldBits, const int maxVal)
{
  unsigned int v6; 
  int v8; 
  __int64 Bits; 
  __int64 v10; 
  int v11; 

  if ( skippedFieldBits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2083, ASSERT_TYPE_ASSERT, "(skippedFieldBits > 0)", (const char *)&queryFormat, "skippedFieldBits > 0") )
    __debugbreak();
  v6 = 0;
  if ( skippedFieldBits == 1 )
  {
    do
      ++v6;
    while ( !MSG_ReadBit(msg) );
    if ( maxVal < (int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2105, ASSERT_TYPE_ASSERT, "(maxVal >= numSkipped)", (const char *)&queryFormat, "maxVal >= numSkipped") )
    {
      __debugbreak();
      return v6;
    }
  }
  else
  {
    if ( MSG_ReadBit(msg) )
      return 1i64;
    v8 = 1;
    Bits = MSG_ReadBits(msg, skippedFieldBits);
    LODWORD(v10) = truncate_cast<int,__int64>(Bits);
    v11 = (1 << skippedFieldBits) - 1;
    if ( (int)v10 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2129, ASSERT_TYPE_ASSERT, "(bits <= ( 1 << skippedFieldBits ) - 1)", (const char *)&queryFormat, "bits <= ( 1 << skippedFieldBits ) - 1") )
      __debugbreak();
    if ( (_DWORD)v10 == v11 )
    {
      while ( 1 )
      {
        v8 += v11;
        v10 = MSG_ReadBits(msg, skippedFieldBits);
        if ( (unsigned __int64)(v10 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v10, "signed", v10) )
          __debugbreak();
        if ( (int)v10 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2137, ASSERT_TYPE_ASSERT, "(bits <= ( 1 << skippedFieldBits ) - 1)", (const char *)&queryFormat, "bits <= ( 1 << skippedFieldBits ) - 1") )
          __debugbreak();
        if ( msg->overflowed )
          break;
        if ( (_DWORD)v10 != v11 )
          return (unsigned int)(v10 + v8);
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2141, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Message overflowed when reading skipped field bits") )
        __debugbreak();
      LODWORD(v10) = 0;
    }
    return (unsigned int)(v10 + v8);
  }
  return v6;
}

/*
==============
MSG_ReadOriginExpGolomb
==============
*/
float MSG_ReadOriginExpGolomb(const int kBits, const unsigned int precisionBits, msg_t *msg, float oldValue)
{
  char v4; 
  int SignedExpGolomb; 
  int v6; 

  v4 = precisionBits;
  SignedExpGolomb = MSG_ReadSignedExpGolomb(msg, kBits);
  v6 = 1 << v4;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(( 1 << precisionBits ) != 0)", (const char *)&queryFormat, "( 1 << precisionBits ) != 0") )
    __debugbreak();
  return (float)((float)SignedExpGolomb / (float)v6) + oldValue;
}

/*
==============
MSG_ReadOriginFloat
==============
*/
double MSG_ReadOriginFloat(int bits, msg_t *msg, float oldValue)
{
  unsigned __int64 v3; 
  __int64 v6; 
  unsigned int OriginExtraPrecisionBitsForField; 
  double result; 

  v3 = (unsigned int)(bits + 114);
  if ( (unsigned int)v3 > 0x20 || (v6 = 0x180C00303i64, !_bittest64(&v6, v3)) )
  {
    if ( (unsigned int)(bits + 39) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 284, ASSERT_TYPE_ASSERT, "(bits == (-92) || bits == (-83) || bits == (-106) || bits == (-113) || bits == (-91) || bits == (-82) || bits == (-105) || bits == (-114) || bits == (-39) || bits == (-38))", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGINX || bits == MSG_FIELD_ES_ORIGINX || bits == MSG_FIELD_MOVING_PLATFORM_ORIGINX || bits == MSG_FIELD_ORIGIN_PHYSICSX || bits == MSG_FIELD_ORIGINY || bits == MSG_FIELD_ES_ORIGINY || bits == MSG_FIELD_MOVING_PLATFORM_ORIGINY || bits == MSG_FIELD_ORIGIN_PHYSICSY || bits == MSG_FIELD_HIGH_PRECISION_ORIGINX || bits == MSG_FIELD_HIGH_PRECISION_ORIGINY") )
      __debugbreak();
  }
  OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField(bits);
  *(float *)&result = MSG_ReadOriginExpGolomb(4, OriginExtraPrecisionBitsForField, msg, oldValue);
  return result;
}

/*
==============
MSG_ReadValue
==============
*/
__int64 MSG_ReadValue(msg_t *msg, const void *fromF, const int bits, const int size)
{
  int v4; 
  unsigned int v6; 
  __int64 ValueNoXor; 
  bool v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v13; 
  int v14; 

  v4 = bits;
  v6 = (unsigned int)bits >> 31;
  if ( bits < 0 )
    v4 = -bits;
  ValueNoXor = MSG_ReadValueNoXor(msg, v4);
  v9 = v4 == 64;
  if ( v4 > 64 )
  {
    v14 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 570, ASSERT_TYPE_ASSERT, "( ( absbits <= bitCount ) )", "%s\n\t( absbits ) = %i", "( absbits <= bitCount )", v14) )
      __debugbreak();
    v9 = v4 == 64;
  }
  if ( v9 )
    v10 = -1i64;
  else
    v10 = (1i64 << v4) - 1;
  if ( size > 64 )
  {
    LODWORD(v13) = size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 577, ASSERT_TYPE_ASSERT, "( ( size <= 64 ) )", "%s\n\t( size ) = %i", "( size <= 64 )", v13) )
      __debugbreak();
  }
  v11 = v10 & MSG_GetField(fromF, size) ^ ValueNoXor;
  if ( v6 && _bittest64(&v11, (unsigned __int8)(v4 - 1)) )
    return ~v10 | v11;
  return v11;
}

/*
==============
MSG_ReadValueNoXor
==============
*/
__int64 MSG_ReadValueNoXor(msg_t *msg, const int bits)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = bits;
  if ( bits < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 531, ASSERT_TYPE_ASSERT, "(bits >= 0)", (const char *)&queryFormat, "bits >= 0") )
    __debugbreak();
  v4 = v2 & 7;
  if ( (v2 & 7) != 0 )
    v5 = MSG_ReadBits(msg, v2 & 7);
  else
    v5 = 0i64;
  for ( ; v4 < v2; v5 |= v6 )
  {
    v6 = (__int64)MSG_ReadByte(msg) << v4;
    v4 += 8i64;
  }
  return v5;
}

/*
==============
MSG_ReadWeaponMapEntry_Index
==============
*/
__int64 MSG_ReadWeaponMapEntry_Index(msg_t *msg)
{
  __int64 result; 
  __int64 Bits; 
  int v4; 
  int v5; 
  unsigned __int16 RuntimeMapIndexBits; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3477, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->lastEntityRef < -1 )
    goto LABEL_34;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( msg->lastEntityRef > BgWeaponMap::ms_runtimeSize )
  {
LABEL_34:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v9) = msg->lastEntityRef;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3478, ASSERT_TYPE_ASSERT, "( -1 ) <= ( msg->lastEntityRef ) && ( msg->lastEntityRef ) <= ( BgWeaponMap::GetRuntimeSize() )", "msg->lastEntityRef not in [-1, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v9, -1, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  if ( MSG_ReadBit(msg) )
  {
    result = (unsigned int)(msg->lastEntityRef + 1);
    msg->lastEntityRef = result;
  }
  else if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, 3u);
    v4 = truncate_cast<int,__int64>(Bits);
    v5 = v4;
    if ( v4 <= 0 )
    {
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3491, ASSERT_TYPE_ASSERT, "( ( delta > 0 ) )", "( delta ) = %i", v9) )
        __debugbreak();
    }
    result = (unsigned int)(v5 + msg->lastEntityRef);
    msg->lastEntityRef = result;
  }
  else
  {
    RuntimeMapIndexBits = BgWeaponMap::GetRuntimeMapIndexBits();
    v7 = MSG_ReadBits(msg, RuntimeMapIndexBits);
    v8 = truncate_cast<int,__int64>(v7);
    if ( v8 < 0 )
      goto LABEL_35;
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v8 > BgWeaponMap::ms_runtimeSize )
    {
LABEL_35:
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      LODWORD(v10) = BgWeaponMap::ms_runtimeSize;
      LODWORD(v9) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3499, ASSERT_TYPE_ASSERT, "( 0 ) <= ( weaponMapIndex ) && ( weaponMapIndex ) <= ( BgWeaponMap::GetRuntimeSize() )", "weaponMapIndex not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    msg->lastEntityRef = v8;
    return (unsigned int)v8;
  }
  return result;
}

/*
==============
MSG_ResetEntityToLowLoD
==============
*/
void MSG_ResetEntityToLowLoD(entityState_t *const entityState)
{
  entityType_s eType; 
  const NetFieldList *StateFieldListForEntityType; 
  unsigned int v4; 
  unsigned int NetFieldsCountForEntityType; 
  __int64 v6; 
  const NetField *array; 
  NetFieldLoD netfieldLoD; 
  netFieldResetValue resetValue; 
  __int64 v10; 
  __m256i v11; 
  __int64 v12; 
  _BYTE to[224]; 
  __int128 v14; 
  __int64 v15; 

  if ( !entityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4211, ASSERT_TYPE_ASSERT, "(entityState != nullptr)", (const char *)&queryFormat, "entityState != nullptr") )
    __debugbreak();
  memset_0(to, 0, 0xF8ui64);
  eType = entityState->eType;
  *(_WORD *)to = entityState->number;
  *(_WORD *)&to[8] = eType;
  StateFieldListForEntityType = MSG_GetStateFieldListForEntityType(eType);
  v4 = 0;
  NetFieldsCountForEntityType = MSG_GetNetFieldsCountForEntityType((const entityType_s)entityState->eType);
  if ( NetFieldsCountForEntityType )
  {
    v6 = 0i64;
    do
    {
      array = StateFieldListForEntityType->array;
      netfieldLoD = StateFieldListForEntityType->array[v6].netfieldLoD;
      if ( netfieldLoD )
      {
        if ( netfieldLoD != NetFieldLoD_High && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4231, ASSERT_TYPE_ASSERT, "(netField->netfieldLoD == NetFieldLoD_High)", (const char *)&queryFormat, "netField->netfieldLoD == NetFieldLoD_High") )
          __debugbreak();
        resetValue = array[v6].resetValue;
        if ( resetValue == NET_FIELD_RESET_ENT_NONE )
        {
          v10 = 2047i64;
LABEL_15:
          MSG_SetField(&to[array[v6].offset], array[v6].size, v10);
          goto LABEL_16;
        }
        if ( resetValue == NET_FIELD_RESET_SM_ANIMRATE )
        {
          v10 = 1000i64;
          goto LABEL_15;
        }
      }
      else
      {
        MSG_CopyFieldOver(StateFieldListForEntityType->array, entityState, to, v4);
      }
LABEL_16:
      ++v4;
      ++v6;
    }
    while ( v4 < NetFieldsCountForEntityType );
  }
  v11 = *(__m256i *)&to[128];
  *(__m256i *)&entityState->number = *(__m256i *)to;
  *(__m256i *)&entityState->lerp.pos.trBase.y = *(__m256i *)&to[32];
  *(__m256i *)entityState->lerp.apos.trBase.v = *(__m256i *)&to[64];
  *(__m256i *)&entityState->lerp.u.vehicle.bodyPitch = *(__m256i *)&to[96];
  *(__m256i *)&entityState->staticState.turret.carrierEntNum = v11;
  *(__m256i *)&entityState->events[0].eventType = *(__m256i *)&to[160];
  *(__m256i *)&entityState->index.brushModel = *(__m256i *)&to[192];
  v12 = v15;
  *(_OWORD *)&entityState->partBits.array[2] = v14;
  *(_QWORD *)&entityState->partBits.array[6] = v12;
}

/*
==============
MSG_RunUnitTest
==============
*/

void MSG_RunUnitTest(void)
{
  MSG_DeltaClientBitsUnitTest();
}

/*
==============
MSG_ValuesAreEqualPost
==============
*/
bool MSG_ValuesAreEqualPost(const void *first, const void *second, const int bits, const int size)
{
  _DWORD *v7; 
  bool result; 
  unsigned int v18; 
  char *v19; 
  unsigned int v20; 
  int v21; 

  v7 = first;
  if ( !first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 66, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
    __debugbreak();
  if ( !second && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 67, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
    __debugbreak();
  switch ( bits )
  {
    case -115:
    case -114:
    case -113:
    case -86:
      _XMM6 = 0i64;
      __asm
      {
        vroundss xmm3, xmm6, xmm2, 1
        vroundss xmm1, xmm6, xmm3, 1
      }
      result = SLODWORD(_XMM3) == SLODWORD(_XMM1);
      break;
    case -109:
      result = *v7 == *(_DWORD *)second;
      break;
    case -100:
    case -87:
    case -79:
      _XMM6 = 0i64;
      __asm
      {
        vroundss xmm3, xmm6, xmm2, 1
        vroundss xmm1, xmm6, xmm3, 1
      }
      result = (unsigned __int16)((int)*(float *)&_XMM1 ^ (int)*(float *)&_XMM3) == 0;
      break;
    case -98:
      result = ((*(_DWORD *)second ^ *v7) & 0x3FFFFFFF) == 0;
      break;
    case -95:
      result = *v7 / 100 == *(_DWORD *)second / 100;
      break;
    case -94:
      if ( v7[1] != *((_DWORD *)second + 1) || *v7 != *(_DWORD *)second )
        goto LABEL_41;
      result = 1;
      break;
    case -92:
    case -91:
    case -90:
    case -83:
    case -82:
    case -81:
      _XMM4 = 0i64;
      __asm
      {
        vroundss xmm0, xmm4, xmm3, 1
        vroundss xmm2, xmm4, xmm1, 1
      }
      result = SLODWORD(_XMM2) == SLODWORD(_XMM0);
      break;
    case -85:
      if ( *(_BYTE *)v7 != *(_BYTE *)second || *((_BYTE *)v7 + 1) != *((_BYTE *)second + 1) || *((_BYTE *)v7 + 2) != *((_BYTE *)second + 2) || *((_BYTE *)v7 + 3) != *((_BYTE *)second + 3) )
        goto LABEL_41;
      result = 1;
      break;
    case -84:
      result = ((*(_DWORD *)second ^ *v7) & 0x1FFFFFFF) == 0;
      break;
    case -65:
      if ( *(float *)second != *(float *)v7 || *((float *)second + 1) != *((float *)v7 + 1) || *((float *)second + 2) != *((float *)v7 + 2) || *((float *)second + 3) != *((float *)v7 + 3) || *((float *)second + 4) != *((float *)v7 + 4) || *((float *)second + 5) != *((float *)v7 + 5) || *((float *)second + 6) != *((float *)v7 + 6) || *((float *)second + 7) != *((float *)v7 + 7) || *((float *)second + 8) != *((float *)v7 + 8) )
        goto LABEL_41;
      result = 1;
      break;
    case -45:
      v18 = 0;
      v19 = (char *)((_BYTE *)second - (_BYTE *)v7);
      do
      {
        if ( *v7 != *(_DWORD *)((char *)v7 + (_QWORD)v19) )
          goto LABEL_41;
        ++v18;
        ++v7;
      }
      while ( v18 < 7 );
      result = 1;
      break;
    default:
      v20 = abs32(size);
      if ( v20 > 8 || (v21 = 278, !_bittest(&v21, v20)) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 151, ASSERT_TYPE_ASSERT, "(abs( size ) == 1 || abs( size ) == 2 || abs( size ) == 4 || abs( size ) == 8)", "%s\n\tunexpected size %d\n", "abs( size ) == 1 || abs( size ) == 2 || abs( size ) == 4 || abs( size ) == 8", size) )
          __debugbreak();
      }
LABEL_41:
      result = 0;
      break;
  }
  return result;
}

/*
==============
MSG_WriteBitsCompress
==============
*/
char MSG_WriteBitsCompress(const bool trainHuffman, const unsigned __int8 *from, unsigned __int8 *to, const int fromSize, const int toMaxSize, int *outCurSize)
{
  __int64 v6; 
  __int64 v7; 
  __int64 i; 
  __int64 v11; 
  int *v12; 
  int v13; 
  int inOutOffset; 

  v6 = 0i64;
  v7 = fromSize;
  if ( trainHuffman && fromSize > 0 )
  {
    for ( i = 0i64; i < fromSize; ++i )
    {
      v11 = from[i];
      ++huffBytesSeen[v11];
    }
  }
  v12 = outCurSize;
  inOutOffset = 0;
  *outCurSize = 0;
  if ( fromSize <= 0 )
  {
LABEL_10:
    *v12 = ((int)v6 + 7) >> 3;
    return 1;
  }
  else
  {
    v13 = toMaxSize;
    while ( Huff_offsetTransmit(g_huffWriteData, from[v6], to, v13, &inOutOffset) )
    {
      if ( ++v6 >= v7 )
      {
        LODWORD(v6) = inOutOffset;
        goto LABEL_10;
      }
    }
    return 0;
  }
}

/*
==============
MSG_WriteDeltaClientBitsKey
==============
*/
void MSG_WriteDeltaClientBitsKey(msg_t *const msg, const int *const key, const void *const from, const void *const to)
{
  unsigned int m_clientCount; 
  unsigned int v8; 
  int v9; 
  bool v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  _DWORD *v15; 
  unsigned int v16; 
  unsigned int v17; 
  _DWORD *v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1212, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1213, ASSERT_TYPE_ASSERT, "(key != nullptr)", (const char *)&queryFormat, "key != nullptr") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1214, ASSERT_TYPE_ASSERT, "(to != nullptr)", (const char *)&queryFormat, "to != nullptr") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_clientCount = ComCharacterLimits::ms_gameData.m_clientCount;
  if ( ComCharacterLimits::ms_gameData.m_clientCount > 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1221, ASSERT_TYPE_ASSERT, "( clientBits ) <= ( ( sizeof( *array_counter( toClientBits->array ) ) + 0 ) * 32 )", "%s <= %s\n\t%i, %i", "clientBits", "ARRAY_COUNT( toClientBits->array ) * 32", ComCharacterLimits::ms_gameData.m_clientCount, 224) )
    __debugbreak();
  v8 = m_clientCount >> 5;
  v9 = m_clientCount & 0x1F;
  v10 = m_clientCount >> 5 < 7;
  if ( m_clientCount >> 5 > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1226, ASSERT_TYPE_ASSERT, "(totalFullWords <= ( sizeof( *array_counter( toClientBits->array ) ) + 0 ))", (const char *)&queryFormat, "totalFullWords <= ARRAY_COUNT( toClientBits->array )") )
      __debugbreak();
    v10 = v8 < 7;
  }
  if ( !v10 && (m_clientCount & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1227, ASSERT_TYPE_ASSERT, "(( totalFullWords < ( sizeof( *array_counter( toClientBits->array ) ) + 0 ) ) || ( partialBits == 0 ))", (const char *)&queryFormat, "( totalFullWords < ARRAY_COUNT( toClientBits->array ) ) || ( partialBits == 0 )") )
    __debugbreak();
  v11 = 0;
  v12 = v8;
  if ( v8 )
  {
    v13 = 0i64;
    v11 = v12;
    do
      MSG_WriteLong(msg, *key ^ *((_DWORD *)to + v13++));
    while ( v13 < v12 );
  }
  if ( v9 )
  {
    v14 = *key;
    v15 = (char *)to + 4 * (int)v11;
    v16 = (1 << v9) - 1;
    v17 = v16 & v14;
    if ( (~(v16 << (32 - v9)) & *v15) != 0 )
      Com_PrintWarning(25, "MSG_WriteDeltaClientBitsKey: Not enough bits written for ClientBits field\n", from);
    if ( v11 >= 7 )
    {
      LODWORD(v20) = 7;
      LODWORD(v19) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1251, ASSERT_TYPE_ASSERT, "(unsigned)( wordIndex ) < (unsigned)( ( sizeof( *array_counter( toClientBits->array ) ) + 0 ) )", "wordIndex doesn't index ARRAY_COUNT( toClientBits->array )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    MSG_WriteBits(msg, v17 ^ v16 & ((unsigned __int64)(unsigned int)*v15 >> (32 - (unsigned __int8)v9)), v9);
    ++v11;
  }
  if ( v11 < 7 )
  {
    v18 = (char *)to + 4 * (int)v11;
    do
    {
      if ( *v18 )
        Com_PrintWarning(25, "MSG_WriteDeltaClientBitsKey: Not enough bits written for ClientBits field\n", from);
      ++v11;
      ++v18;
    }
    while ( v11 < 7 );
  }
}

/*
==============
MSG_WriteDeltaUmbraGateState
==============
*/
void MSG_WriteDeltaUmbraGateState(msg_t *msg, const bitarray<384> *from, const bitarray<384> *to)
{
  unsigned __int64 numUmbraGates; 
  __int64 v7; 
  __int128 v8; 
  __int64 v9; 
  __m256i *v10; 
  __int64 v11; 
  __m256i *v12; 
  __int64 v13; 
  int v16; 
  __m256i *i; 
  int v18; 
  __m256i *v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  bool v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __m256i v27; 
  __int128 v28; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3954, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 141, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  numUmbraGates = comWorld.numUmbraGates;
  if ( comWorld.numUmbraGates )
  {
    v7 = 0i64;
    if ( !from )
      goto LABEL_41;
    v8 = *(_OWORD *)&from->array[8];
    v9 = 12i64;
    v27 = *(__m256i *)from->array;
    v28 = v8;
    if ( &v27 > (__m256i *)&to->array[11] || (char *)&v28 + 12 < (char *)to )
    {
      v12 = &v27;
      v13 = 3i64;
      do
      {
        _XMM1 = *(_OWORD *)&v12->m256i_i8[(char *)to - (char *)&v27];
        __asm { vpxor   xmm1, xmm1, xmmword ptr [rax] }
        *(_OWORD *)v12->m256i_i8 = _XMM1;
        v12 = (__m256i *)((char *)v12 + 16);
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v10 = &v27;
      v11 = 12i64;
      do
      {
        v10->m256i_i32[0] ^= *(unsigned int *)((char *)v10->m256i_u32 + (char *)to - (char *)&v27);
        v10 = (__m256i *)((char *)v10 + 4);
        --v11;
      }
      while ( v11 );
    }
    v16 = 0;
    for ( i = &v27; !i->m256i_i32[0]; i = (__m256i *)((char *)i + 4) )
    {
      if ( (unsigned int)++v16 >= 0xC )
      {
        MSG_WriteBit0(msg);
        return;
      }
    }
    v18 = 0;
    v19 = &v27;
    do
    {
      v18 += __popcnt(v19->m256i_i32[0]);
      v19 = (__m256i *)((char *)v19 + 4);
      --v9;
    }
    while ( v9 );
    if ( !(_DWORD)numUmbraGates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
    v20 = 32 - __lzcnt(numUmbraGates - 1);
    if ( v18 * (v20 + 1) < (unsigned int)numUmbraGates )
    {
      MSG_WriteBit1(msg);
      MSG_WriteBit1(msg);
      do
      {
        if ( (unsigned int)v7 >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3991, ASSERT_TYPE_ASSERT, "(blockIndex < umbraGateStates_t::WORD_COUNT)", (const char *)&queryFormat, "blockIndex < umbraGateStates_t::WORD_COUNT") )
          __debugbreak();
        v21 = v27.m256i_u32[v7];
        if ( v21 )
        {
          v22 = 32 * v7 + __lzcnt(v21);
          MSG_WriteBits(msg, v22, v20);
          v23 = v18-- == 1;
          MSG_WriteBool(msg, !v23);
          if ( v22 >= 0x180 )
          {
            LODWORD(v26) = 384;
            LODWORD(v25) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
              __debugbreak();
          }
          v27.m256i_i32[(unsigned __int64)v22 >> 5] &= ~(0x80000000 >> (v22 & 0x1F));
        }
        else
        {
          v7 = (unsigned int)(v7 + 1);
        }
      }
      while ( v18 );
    }
    else
    {
LABEL_41:
      MSG_WriteBit1(msg);
      MSG_WriteBit0(msg);
      if ( (unsigned int)numUmbraGates >= 0x20 )
      {
        v24 = numUmbraGates >> 5;
        do
        {
          MSG_WriteLong(msg, to->array[v7]);
          LODWORD(numUmbraGates) = numUmbraGates - 32;
          v7 = (unsigned int)(v7 + 1);
          --v24;
        }
        while ( v24 );
      }
      if ( (_DWORD)numUmbraGates )
        MSG_WriteBits(msg, (__int64)(int)to->array[v7] >> (32 - (unsigned __int8)numUmbraGates), numUmbraGates);
    }
  }
}

/*
==============
VerifyNetFields
==============
*/
void VerifyNetFields(const NetFieldList *const netFieldList, const netFieldTypes_t fieldType)
{
  const NetFieldList *v3; 
  unsigned int count; 
  int v5; 
  const NetField *array; 
  __int16 *p_bits; 
  unsigned int v8; 
  int v9; 
  int v10; 
  __int16 v11; 
  __int16 v12; 
  __int16 v13; 
  __int16 v14; 
  __int16 v15; 
  __int64 v16; 
  const NetField *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v24; 
  const NetField *v25; 

  v3 = netFieldList;
  if ( !netFieldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3565, ASSERT_TYPE_ASSERT, "(netFieldList != 0)", (const char *)&queryFormat, "netFieldList != NULL") )
    __debugbreak();
  count = v3->count;
  v5 = -1;
  array = v3->array;
  v25 = v3->array;
  if ( count )
  {
    p_bits = &array->bits;
    v8 = 1;
    v24 = v3->count;
    do
    {
      if ( *((_DWORD *)p_bits + 1) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3580, ASSERT_TYPE_ASSERT, "(currentNetField->netfieldLoD != NetFieldLoD_Invalid)", "%s\n\tNetfield %s doesn't have a valid lod\n", "currentNetField->netfieldLoD != NetFieldLoD_Invalid", *(const char **)(p_bits - 6)) )
        __debugbreak();
      if ( *((_BYTE *)p_bits + 2) == 2 && *((_DWORD *)p_bits + 1) != 1 )
      {
        LODWORD(v20) = v3->listId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3583, ASSERT_TYPE_ASSERT, "(currentNetField->changeHints != 2 || currentNetField->netfieldLoD == NetFieldLoD_High)", "%s\n\tALWAYS_CHANGES can only be used on High LoD netfields (to guarantee their serialization after all the low LoD fields). Please update '%s' in netfield list %d\n", "currentNetField->changeHints != ALWAYS_CHANGES || currentNetField->netfieldLoD == NetFieldLoD_High", *(const char **)(p_bits - 6), v20) )
          __debugbreak();
      }
      v9 = *((_DWORD *)p_bits + 1);
      v10 = v9;
      if ( v9 <= v5 )
        v10 = v5;
      v5 = v10;
      if ( v9 < v10 )
      {
        LODWORD(v21) = *((_DWORD *)p_bits + 1);
        LODWORD(v20) = v3->listId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3589, ASSERT_TYPE_ASSERT, "(currentNetField->netfieldLoD >= netfieldHighestLoDFound)", "%s\n\tInvalid placement of netfield '%s' in netfield list %d. It should be grouped with the other netfields using lod %d\n", "currentNetField->netfieldLoD >= netfieldHighestLoDFound", *(const char **)(p_bits - 6), v20, v21) )
          __debugbreak();
      }
      if ( *p_bits > 32 )
      {
        LODWORD(v21) = *p_bits;
        LODWORD(v20) = fieldType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3594, ASSERT_TYPE_ASSERT, "(currentNetField->bits <= 32)", "%s\n\tMSG_CheckFields: Invalid bit count field %s for fieldType %i. %i must be less or equal to 32\n", "currentNetField->bits <= 32", *(const char **)(p_bits - 6), v20, v21) )
          __debugbreak();
      }
      if ( *p_bits == -94 )
      {
        v11 = *(p_bits - 2);
        if ( v11 != 8 )
        {
          LODWORD(v21) = fieldType;
          LODWORD(v19) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3596, ASSERT_TYPE_ASSERT, "(currentNetField->bits != (-94) || currentNetField->size == sizeof( EntityEvent ))", "%s\n\tMSG_CheckFields: Invalid size (%i) for entityEvent field %s (netfield type %i).\n", "currentNetField->bits != MSG_FIELD_EVENT || currentNetField->size == sizeof( EntityEvent )", v19, *(const char **)(p_bits - 6), v21) )
            __debugbreak();
        }
      }
      if ( *p_bits == -109 )
      {
        v12 = *(p_bits - 2);
        if ( v12 != 4 )
        {
          LODWORD(v21) = fieldType;
          LODWORD(v19) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3597, ASSERT_TYPE_ASSERT, "(currentNetField->bits != (-109) || currentNetField->size == 4)", "%s\n\tMSG_CheckFields: Invalid size (%i) for text field %s (netfield type %i).\n", "currentNetField->bits != MSG_FIELD_TEXT || currentNetField->size == 4", v19, *(const char **)(p_bits - 6), v21) )
            __debugbreak();
        }
      }
      if ( *p_bits == -65 )
      {
        v13 = *(p_bits - 2);
        if ( v13 != 36 )
        {
          LODWORD(v21) = fieldType;
          LODWORD(v19) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3598, ASSERT_TYPE_ASSERT, "(currentNetField->bits != (-65) || currentNetField->size == sizeof( mat33_t ))", "%s\n\tMSG_CheckFields: Invalid size (%i) for 3x3 matrix field %s (netfield type %i).\n", "currentNetField->bits != MSG_FIELD_PACKED_BASIS || currentNetField->size == sizeof( mat33_t )", v19, *(const char **)(p_bits - 6), v21) )
            __debugbreak();
        }
      }
      if ( *p_bits == -45 )
      {
        v14 = *(p_bits - 2);
        if ( v14 != 28 )
        {
          LODWORD(v21) = fieldType;
          LODWORD(v19) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3599, ASSERT_TYPE_ASSERT, "(currentNetField->bits != (-45) || currentNetField->size == sizeof( ClientBits ))", "%s\n\tMSG_CheckFields: Invalid size (%i) for ClientBits field %s (netfield type %i).\n", "currentNetField->bits != MSG_FIELD_CLIENT_BITARRAY || currentNetField->size == sizeof( ClientBits )", v19, *(const char **)(p_bits - 6), v21) )
            __debugbreak();
        }
      }
      v15 = *p_bits;
      if ( *p_bits >= 0 && 8 * abs16(*(p_bits - 2)) < v15 )
      {
        LODWORD(v22) = fieldType;
        LODWORD(v21) = v15;
        LODWORD(v19) = *(p_bits - 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3601, ASSERT_TYPE_ASSERT, "(currentNetField->bits < 0 || (abs( currentNetField->size ) * 8 >= currentNetField->bits))", "%s\n\tMSG_CheckFields: netField size (%i) for field %s is smaller than netfield bits %d (netfield type %i).\n", "currentNetField->bits < 0 || (abs( currentNetField->size ) * 8 >= currentNetField->bits)", v19, *(const char **)(p_bits - 6), v21, v22) )
          __debugbreak();
      }
      if ( v8 < count )
      {
        v16 = count - v8;
        v17 = &array[v8];
        do
        {
          if ( *(p_bits - 1) == v17->offset )
          {
            LODWORD(v18) = fieldType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3607, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_CheckFields: fieldType %i field '%s' and '%s' are pointing to the same spot\n", v18, *(const char **)(p_bits - 6), v17->name) )
              __debugbreak();
          }
          ++v17;
          --v16;
        }
        while ( v16 );
        v3 = netFieldList;
        array = v25;
      }
      ++v8;
      p_bits += 12;
      --v24;
    }
    while ( v24 );
  }
}

