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
  __int16 size; 
  int v11; 
  unsigned int v12; 
  int v13; 
  __int64 Field; 

  v4 = fieldNum;
  offset = stateFields[v4].offset;
  v6 = &stateFields[v4];
  bits = v6->bits;
  _RBX = (char *)from + offset;
  _RDI = (char *)to + offset;
  size = v6->size;
  if ( bits == -94 )
  {
    if ( abs16(size) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2181, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( EntityEvent ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( EntityEvent )") )
      __debugbreak();
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx]
      vmovsd  qword ptr [rdi], xmm0
    }
  }
  else if ( bits == -65 )
  {
    if ( abs16(size) != 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2188, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( mat33_t ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( mat33_t )") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rdi], ymm0
    }
    _RDI[8] = _RBX[8];
  }
  else
  {
    v11 = size;
    v12 = abs16(size);
    if ( bits == -45 )
    {
      if ( v12 != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2195, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( ClientBits ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( ClientBits )") )
        __debugbreak();
      *_RDI = *_RBX;
      _RDI[1] = _RBX[1];
      _RDI[2] = _RBX[2];
      _RDI[3] = _RBX[3];
      _RDI[4] = _RBX[4];
      _RDI[5] = _RBX[5];
      _RDI[6] = _RBX[6];
    }
    else
    {
      if ( v12 > 8 || (v13 = 278, !_bittest(&v13, v12)) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2206, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 1 || abs( field->size ) == 2 || abs( field->size ) == 4 || abs( field->size ) == 8)", "%s\n\tnetfield %s (size %d) can not be copied with the default netfield copy case. Did you forget to handle the bit serialization %d with a special case?\n", "abs( field->size ) == 1 || abs( field->size ) == 2 || abs( field->size ) == 4 || abs( field->size ) == 8", v6->name, v11, bits) )
          __debugbreak();
      }
      Field = MSG_GetField(_RBX, v6->size);
      MSG_SetField(_RDI, v6->size, Field);
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
  __int64 v1; 
  __m256i *v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 i; 
  unsigned int v8; 
  netFieldOrderInfo_t *v9; 
  int j; 
  __int64 v11[10]; 
  __int64 v12[10]; 
  __m256i v13; 
  int v14; 
  int v15; 

  __asm { vmovdqu ymm0, cs:__ymm@0000003e00000005000000060000002e0000002f0000023f0000005a00000076 }
  v14 = 8;
  v12[0] = (__int64)orderInfo.clientState;
  v15 = 55;
  v12[1] = (__int64)orderInfo.agentState;
  v12[2] = (__int64)orderInfo.playerState;
  v12[3] = (__int64)orderInfo.objective;
  v12[4] = (__int64)orderInfo.hudElem;
  v12[5] = (__int64)orderInfo.headIcon;
  v12[6] = (__int64)orderInfo.headIconExtendedData;
  v12[7] = (__int64)orderInfo.targetMarkers;
  v12[8] = (__int64)orderInfo.calloutMarkers;
  v12[9] = (__int64)orderInfo.mlgSpectator;
  v11[0] = (__int64)"Client State";
  v11[1] = (__int64)"Agent State";
  v11[2] = (__int64)"Player State";
  v11[3] = (__int64)"Objective";
  v11[4] = (__int64)"HUD Elem";
  v11[5] = (__int64)"Head Icon";
  v11[6] = (__int64)"Head Icon Extended";
  v11[7] = (__int64)"Target Markers";
  v11[8] = (__int64)"Callout Markers";
  v11[9] = (__int64)"MLG Spectator";
  __asm { vmovdqu [rbp+57h+var_50], ymm0 }
  Com_Printf(0, "========================================\n");
  Com_Printf(0, "NetField changes. format: field# : #changes\n");
  v1 = 0i64;
  v2 = &v13;
  v3 = 10i64;
  do
  {
    Com_Printf(0, "========================================\n");
    Com_Printf(0, "    %s\n", (const char *)v11[v1]);
    Com_Printf(0, "--------------------\n");
    v4 = v2->m256i_i32[0];
    v5 = 0;
    v6 = v12[v1];
    for ( i = 0i64; i < v4; ++i )
      Com_Printf(0, "%3i : %8i\n", v5++, *(unsigned int *)(v6 + 4 * i));
    ++v1;
    v2 = (__m256i *)((char *)v2 + 4);
    --v3;
  }
  while ( v3 );
  v8 = 0;
  v9 = &orderInfo;
  do
  {
    Com_Printf(0, "========================================\n");
    Com_Printf(0, "    Entity State: Type %d\n", v8);
    Com_Printf(0, "--------------------\n");
    for ( j = 0; j < 68; ++j )
    {
      Com_Printf(0, "%3i : %8i\n", (unsigned int)j, (unsigned int)v9->entState[0][0]);
      v9 = (netFieldOrderInfo_t *)((char *)v9 + 4);
    }
    ++v8;
  }
  while ( v8 <= 0x1D );
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
  int v34; 
  unsigned int i; 
  const char *v36; 
  int size; 
  int v38; 
  unsigned int fmt; 
  char *fmta; 
  double v44; 
  int v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 

  _RBX = (unsigned int *)netfieldBuffer;
  bits = (unsigned __int16)field->bits;
  switch ( (_WORD)bits )
  {
    case 0xFFA2:
      fmt = _RBX[1];
      Com_sprintf(string, stringSize, "%d %u", *_RBX, fmt);
      break;
    case 0xFF91:
$LN28_27:
      Com_sprintf(string, stringSize, "%u", *_RBX);
      break;
    case 0xFFBF:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vmovss  xmm1, dword ptr [rbx+1Ch]
        vmovss  xmm2, dword ptr [rbx+18h]
        vmovss  xmm4, dword ptr [rbx+14h]
        vmovss  xmm5, dword ptr [rbx+10h]
        vmovss  xmm3, dword ptr [rbx]
        vmovaps [rsp+98h+var_18], xmm6
        vmovss  xmm6, dword ptr [rbx+0Ch]
        vmovaps [rsp+98h+var_28], xmm7
        vmovss  xmm7, dword ptr [rbx+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+98h+var_40], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+98h+var_48], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+98h+var_50], xmm2
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+98h+var_58], xmm4
        vmovaps [rsp+98h+var_38], xmm8
        vmovss  xmm8, dword ptr [rbx+4]
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+98h+var_60], xmm5
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+98h+var_68], xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vmovsd  [rsp+98h+var_70], xmm7
        vmovq   r9, xmm3
        vmovsd  [rsp+98h+fmt], xmm8
      }
      Com_sprintf(string, stringSize, "[%f,%f,%f],[%f,%f,%f],[%f,%f,%f]", *(double *)&_XMM3, *(double *)&fmta, v44, v46, v47, v48, v49, v50, v51);
      __asm
      {
        vmovaps xmm8, [rsp+98h+var_38]
        vmovaps xmm7, [rsp+98h+var_28]
        vmovaps xmm6, [rsp+98h+var_18]
      }
      break;
    case 0xFFD3:
      v34 = Com_sprintf(string, stringSize, "[", field);
      for ( i = 0; i < 7; ++i )
      {
        v36 = "%u";
        if ( i )
          v36 = ",%u";
        v34 += Com_sprintf(&string[v34], stringSize - v34, v36, *_RBX++);
      }
      Com_sprintf(&string[v34], stringSize - v34, "]");
      break;
    default:
      size = field->size;
      if ( abs16(field->size) == 4 && (!(_WORD)bits || (unsigned __int16)(bits + 106) <= 0x1Cu && (v38 = 530038791, _bittest(&v38, bits + 106)) || (unsigned __int16)(bits + 39) <= 2u) )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbx]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_sprintf(string, stringSize, "%g", *(double *)&_XMM3);
      }
      else
      {
        switch ( size )
        {
          case -8:
            Com_sprintf(string, stringSize, "%lld", *(_QWORD *)_RBX);
            break;
          case -4:
            Com_sprintf(string, stringSize, "%d", *_RBX);
            break;
          case -2:
            Com_sprintf(string, stringSize, "%hd", (unsigned int)*(__int16 *)_RBX);
            break;
          case -1:
            Com_sprintf(string, stringSize, "%hhd", (unsigned int)*(char *)_RBX);
            break;
          case 1:
            Com_sprintf(string, stringSize, "%hhu", *(unsigned __int8 *)_RBX);
            break;
          case 2:
            Com_sprintf(string, stringSize, "%hu", *(unsigned __int16 *)_RBX);
            break;
          case 4:
            goto $LN28_27;
          case 8:
            Com_sprintf(string, stringSize, "%llu", *(_QWORD *)_RBX);
            break;
          default:
            v45 = size;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported field size %d for %s\n", v45, field->name) )
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

float __fastcall MSG_ReadDeltaAngle(msg_t *msg, double oldFloat)
{
  int Bit; 
  int v6; 
  unsigned int MinBitCountForNum; 
  __int64 Bits; 
  int v9; 
  __int64 v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  __int64 v15; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Bit = MSG_ReadBit(msg);
  v6 = MSG_ReadBit(msg);
  if ( Bit == 1 )
  {
    MinBitCountForNum = GetMinBitCountForNum(7u);
    Bits = MSG_ReadBits(msg, MinBitCountForNum);
    v9 = truncate_cast<int,__int64>(Bits);
    v10 = v9;
    if ( (unsigned int)v9 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 682, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 7 )", "index doesn't index COMMON_ANGLE_DELTA_ARRAYCOUNT\n\t%i not in [0, %i)", v9, 7) )
      __debugbreak();
    if ( g_commonAngleDeltas[v10] )
      goto LABEL_13;
    v11 = "delta";
    v12 = 684;
    v13 = "(delta)";
    goto LABEL_11;
  }
  if ( v6 )
  {
    MSG_ReadBit(msg);
    v15 = MSG_ReadBits(msg, 0xCu);
    if ( truncate_cast<short,__int64>(v15) )
    {
LABEL_13:
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@43360b61
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm3, xmm1, xmm2
        vroundss xmm4, xmm0, xmm3, 1
        vxorps  xmm0, xmm0, xmm0
        vcvttss2si edx, xmm4
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3bb40000
      }
      goto LABEL_14;
    }
    v11 = "deltaAngle";
    v12 = 706;
    v13 = "(deltaAngle)";
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
      __debugbreak();
    goto LABEL_13;
  }
  *(double *)&_XMM0 = MSG_ReadAngle16(msg);
LABEL_14:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  __int16 v11; 
  int v16; 
  Weapon result; 

  _RBX = to;
  _RDI = from;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3511, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3512, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( _RDI )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&_RBX->weapon.attachmentVariationIndices[27] = *(_DWORD *)&_RDI->weapon.attachmentVariationIndices[27];
    v11 = *(_WORD *)&_RDI->weapon.scopeVariation;
  }
  else
  {
    v11 = 0;
    *(_QWORD *)&_RBX->index = 0i64;
    *(_QWORD *)&_RBX->weapon.stickerIndices[2] = 0i64;
    *(_QWORD *)_RBX->weapon.weaponAttachments = 0i64;
    *(_QWORD *)&_RBX->weapon.weaponAttachments[8] = 0i64;
    *(_QWORD *)&_RBX->weapon.attachmentVariationIndices[3] = 0i64;
    *(_QWORD *)&_RBX->weapon.attachmentVariationIndices[11] = 0i64;
    *(_QWORD *)&_RBX->weapon.attachmentVariationIndices[19] = 0i64;
    *(_DWORD *)&_RBX->weapon.attachmentVariationIndices[27] = 0;
  }
  *(_WORD *)&_RBX->weapon.scopeVariation = v11;
  if ( !MSG_ReadBit(msg) )
  {
    _RAX = MSG_ReadWeapon(&result, msg);
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+20h]
      vmovsd  xmm0, qword ptr [rax+30h]
    }
    v16 = *(_DWORD *)&_RAX->weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rbx+2], ymm1
      vmovups xmmword ptr [rbx+22h], xmm2
      vmovsd  qword ptr [rbx+32h], xmm0
    }
    *(_DWORD *)&_RBX->weapon.weaponCamo = v16;
  }
  _RBX->index = truncate_cast<unsigned short,int>(weaponMapIndex);
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
  __int64 v9; 
  int v18; 
  EntityLoDs *p_clientEntityLoD; 
  __int64 v20; 

  _RDI = fromLoD;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2734, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !toLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2735, ASSERT_TYPE_ASSERT, "(toLoD != nullptr)", (const char *)&queryFormat, "toLoD != nullptr") )
    __debugbreak();
  toLoD->clientIndex = clientIndex;
  if ( _RDI )
  {
    if ( _RDI->clientIndex != clientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2738, ASSERT_TYPE_ASSERT, "((fromLoD == nullptr) || (fromLoD->clientIndex == clientIndex))", (const char *)&queryFormat, "(fromLoD == nullptr) || (fromLoD->clientIndex == clientIndex)") )
      __debugbreak();
    _RCX = toLoD;
    v9 = 2i64;
    do
    {
      _RCX = (clientLoDInfo_t *)((char *)_RCX + 128);
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      _RDI = (const clientLoDInfo_t *)((char *)_RDI + 128);
      __asm
      {
        vmovups xmmword ptr [rcx-80h], xmm0
        vmovups xmm1, xmmword ptr [rdi-70h]
        vmovups xmmword ptr [rcx-70h], xmm1
        vmovups xmm0, xmmword ptr [rdi-60h]
        vmovups xmmword ptr [rcx-60h], xmm0
        vmovups xmm1, xmmword ptr [rdi-50h]
        vmovups xmmword ptr [rcx-50h], xmm1
        vmovups xmm0, xmmword ptr [rdi-40h]
        vmovups xmmword ptr [rcx-40h], xmm0
        vmovups xmm1, xmmword ptr [rdi-30h]
        vmovups xmmword ptr [rcx-30h], xmm1
        vmovups xmm0, xmmword ptr [rdi-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmm1, xmmword ptr [rdi-10h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v9;
    }
    while ( v9 );
    v18 = _RDI->clientIndex;
    p_clientEntityLoD = &toLoD->clientEntityLoD;
    _RCX->clientIndex = v18;
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
    v20 = 64i64;
    do
    {
      if ( MSG_ReadBit(msg) )
        p_clientEntityLoD->array[0] = MSG_ReadLong(msg);
      p_clientEntityLoD = (EntityLoDs *)((char *)p_clientEntityLoD + 4);
      --v20;
    }
    while ( v20 );
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
  __int64 v37; 
  __int64 v38; 
  char v39; 
  int NumFieldsSkipped; 
  int v41; 
  int v42; 
  entityType_s v43; 
  unsigned int NetFieldsCountForEntityType; 
  int v45; 
  __int16 bits; 
  bool v47; 
  bool v48; 
  int v49; 
  const NetField *v50; 
  __int64 v51; 
  bool v52; 
  __int16 *p_bits; 
  __int16 v54; 
  bool v55; 
  __int64 Field; 
  entityType_s v57; 
  const char *EntityTypeName; 
  char v59; 
  bool v60; 
  __int64 print; 
  __int64 xorValues; 
  __int64 v63; 
  __int64 v64; 
  unsigned int v65; 
  const NetField *v66; 
  const NetField *v67; 
  bool v69; 
  int skippedFieldBits; 
  bool outLoDa; 

  _R14 = to;
  _RBP = from;
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [r14], xmm0
      vmovups xmm1, xmmword ptr [rbp+10h]
      vmovups xmmword ptr [r14+10h], xmm1
      vmovups xmm0, xmmword ptr [rbp+20h]
      vmovups xmmword ptr [r14+20h], xmm0
      vmovups xmm1, xmmword ptr [rbp+30h]
      vmovups xmmword ptr [r14+30h], xmm1
      vmovups xmm0, xmmword ptr [rbp+40h]
      vmovups xmmword ptr [r14+40h], xmm0
      vmovups xmm1, xmmword ptr [rbp+50h]
      vmovups xmmword ptr [r14+50h], xmm1
      vmovups xmm0, xmmword ptr [rbp+60h]
      vmovups xmmword ptr [r14+60h], xmm0
      vmovups xmm0, xmmword ptr [rbp+70h]
      vmovups xmmword ptr [r14+70h], xmm0
      vmovups xmm1, xmmword ptr [rbp+80h]
      vmovups xmmword ptr [r14+80h], xmm1
      vmovups xmm0, xmmword ptr [rbp+90h]
      vmovups xmmword ptr [r14+90h], xmm0
      vmovups xmm1, xmmword ptr [rbp+0A0h]
      vmovups xmmword ptr [r14+0A0h], xmm1
      vmovups xmm0, xmmword ptr [rbp+0B0h]
      vmovups xmmword ptr [r14+0B0h], xmm0
      vmovups xmm1, xmmword ptr [rbp+0C0h]
      vmovups xmmword ptr [r14+0C0h], xmm1
      vmovups xmm0, xmmword ptr [rbp+0D0h]
      vmovups xmmword ptr [r14+0D0h], xmm0
      vmovups xmm1, xmmword ptr [rbp+0E0h]
      vmovups xmmword ptr [r14+0E0h], xmm1
    }
    *((_QWORD *)_R14 + 30) = _RBP[30];
    if ( !Bit )
      return 0i64;
    NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_ENTITY_STATE);
    skippedNetfieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
    skippedFieldBits = skippedNetfieldBits;
    if ( NetFieldListForNetFieldType->count > 0x44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2419, ASSERT_TYPE_ASSERT, "(netFieldList->count <= maxNumFields)", (const char *)&queryFormat, "netFieldList->count <= maxNumFields") )
      __debugbreak();
    array = NetFieldListForNetFieldType->array;
    v67 = array;
    v69 = MSG_ReadBit(msg) > 0;
    LastChangedField = MSG_ReadLastChangedField(msg, 68);
    if ( (unsigned int)LastChangedField > 0x43 )
    {
      MSG_Discard(msg);
      Com_PrintError(25, "Got lastChanged field of %i, but there are only %i fields\n", (unsigned int)LastChangedField, 68i64);
      LODWORD(print) = LastChangedField;
      v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2429, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Got lastChanged field of %i, but there are only %i fields\n", print, 68);
LABEL_114:
      if ( v60 )
        __debugbreak();
      return 0i64;
    }
    if ( DVARINT_cl_shownet && (Dvar_GetInt_Internal_DebugName(DVARINT_cl_shownet, "cl_shownet") >= 2 || Dvar_GetInt_Internal_DebugName(DVARINT_cl_shownet, "cl_shownet") == -1) )
      Com_Printf(25, "%3i: #%-3i ", (unsigned int)msg->readcount, *(unsigned int *)_R14);
    *_R14 = number;
    if ( number != (unsigned __int64)(unsigned __int16)number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 385, ASSERT_TYPE_ASSERT, "(value == *static_cast<unsigned short*>(i))", "%s\n\tvalue %lld != *static_cast<unsigned short*>(i) %u", "value == *static_cast<unsigned short*>(i)", number, (unsigned __int16)number) )
      __debugbreak();
    v37 = 0i64;
    v38 = 0i64;
    while ( 1 )
    {
      v39 = array->name[v38++];
      if ( v39 != aEtype[v38 - 1] )
        break;
      if ( v38 == 6 )
        goto LABEL_38;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2448, ASSERT_TYPE_ASSERT, "( strcmp( esField[0].name, \"eType\" ) == 0 )", (const char *)&queryFormat, "strcmp( esField[0].name, \"eType\" ) == 0") )
      __debugbreak();
LABEL_38:
    if ( array->bits != -77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2450, ASSERT_TYPE_ASSERT, "( esField[0].bits == (-77) )", (const char *)&queryFormat, "esField[0].bits == MSG_FIELD_ETYPE") )
      __debugbreak();
    NumFieldsSkipped = MSG_ReadNumFieldsSkipped(msg, skippedNetfieldBits, LastChangedField + 1);
    v41 = NumFieldsSkipped;
    if ( NumFieldsSkipped <= 0 )
    {
      LODWORD(xorValues) = NumFieldsSkipped;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2459, ASSERT_TYPE_ASSERT, "( ( nextChanged > 0 ) )", "%s\n\t( nextChanged ) = %i", "( nextChanged > 0 )", xorValues) )
        __debugbreak();
    }
    v42 = v41 - 1;
    v65 = v42;
    if ( (unsigned int)v42 > 0x43 )
    {
      MSG_Discard(msg);
      Com_PrintError(25, "Got nextChanged field of %i, but there are only %i fields\n", (unsigned int)v42, 68i64);
      return 0i64;
    }
    if ( !v42 )
    {
      MSG_ReadDeltaField(msg, time, _RBP, _R14, array, 0, 0);
      v12 = 0;
      if ( LastChangedField > 0 )
      {
        v65 = MSG_ReadNumFieldsSkipped(msg, skippedFieldBits, LastChangedField);
        v42 = v65;
        if ( v65 > 0x43 )
        {
          MSG_Discard(msg);
          Com_PrintError(25, "Got nextChanged (2) field of %i, but there are only %i fields\n", v65, 68i64);
          return 0i64;
        }
      }
    }
    if ( msg->overflowed )
    {
      Com_PrintError(25, "MSG_ReadDeltaEntityStruct overflowed, could not determine eType\n");
      return 0i64;
    }
    v43 = _R14[4];
    v66 = MSG_GetStateFieldListForEntityType(v43)->array;
    NetFieldsCountForEntityType = MSG_GetNetFieldsCountForEntityType(v43);
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
        LODWORD(v63) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2521, ASSERT_TYPE_ASSERT, "( lastChanged ) != ( lc )", "%s != %s\n\t%i, %i", "lastChanged", "lc", v63, LastChangedField) )
          __debugbreak();
      }
      v45 = NetFieldsCountForEntityType;
      while ( 1 )
      {
        v47 = 0;
        if ( *((_WORD *)_RBP + 4) == _R14[4] )
        {
          bits = v66[v42].bits;
          if ( bits != -77 && (!v69 || bits != -108 && (unsigned int)(bits + 83) > 5) )
            v47 = 1;
        }
        MSG_ReadDeltaField(msg, time, _RBP, _R14, &v66[v42], 0, v47);
        v48 = v42 == LastChangedField;
        if ( v42 >= LastChangedField )
          break;
        v49 = v42;
        v42 += MSG_ReadNumFieldsSkipped(msg, skippedFieldBits, LastChangedField - v42);
        v65 = v42;
        if ( v42 >= v45 || v42 < 0 )
        {
          MSG_Discard(msg);
          Com_Printf(14, "Last changed field was %i, but there are only %i fields (loop)\n", (unsigned int)LastChangedField, (unsigned int)v45);
          return 0i64;
        }
        if ( LastChangedField < v42 )
        {
          LODWORD(v63) = LastChangedField;
          LODWORD(xorValues) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2548, ASSERT_TYPE_ASSERT, "(lc >= nextChanged)", "%s\n\tnextChanged is %i, lc is %i", "lc >= nextChanged", xorValues, v63) )
            __debugbreak();
        }
        if ( v42 <= v49 )
        {
          LODWORD(v63) = v49;
          LODWORD(xorValues) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2549, ASSERT_TYPE_ASSERT, "(nextChanged > lastChanged)", "%s\n\tnextChanged is %i, lastChanged is %i", "nextChanged > lastChanged", xorValues, v63) )
            __debugbreak();
        }
        if ( v42 > LastChangedField )
        {
          LODWORD(v64) = LastChangedField;
          LODWORD(v63) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2550, ASSERT_TYPE_ASSERT, "( nextChanged ) <= ( lc )", "%s <= %s\n\t%i, %i", "nextChanged", "lc", v63, v64) )
            __debugbreak();
        }
      }
    }
    else
    {
      v48 = v42 == 0;
    }
    if ( !v48 )
    {
      LODWORD(xorValues) = LastChangedField;
      LODWORD(print) = v42;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2554, ASSERT_TYPE_ASSERT, "( nextChanged ) == ( lc )", "nextChanged == lc\n\t%i, %i", print, xorValues) )
        __debugbreak();
    }
    v50 = v66;
    if ( outLoDa )
    {
      v51 = v42;
      v52 = v42 < 0;
      if ( v42 <= 0 )
      {
LABEL_97:
        if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2580, ASSERT_TYPE_ASSERT, "( nextChanged >= 0 )", (const char *)&queryFormat, "nextChanged >= 0") )
          __debugbreak();
        if ( msg_dumpEnts->current.enabled )
        {
          if ( v67->size > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2586, ASSERT_TYPE_ASSERT, "(esField[0].size <= 32)", (const char *)&queryFormat, "esField[0].size <= 32") )
            __debugbreak();
          Field = MSG_GetField((char *)_R14 + v67->offset, v67->size);
          v57 = truncate_cast<enum entityType_s,__int64>(Field);
          EntityTypeName = BG_GetEntityTypeName(v57);
          Com_Printf(25, "%3i: changed ent, eType %s\n", number, EntityTypeName);
        }
        while ( 1 )
        {
          v59 = v50->name[v37++];
          if ( v59 != aEtype[v37 - 1] )
            break;
          if ( v37 == 6 )
            goto LABEL_110;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2593, ASSERT_TYPE_ASSERT, "( strcmp( stateFields[0].name, \"eType\" ) == 0 )", (const char *)&queryFormat, "strcmp( stateFields[0].name, \"eType\" ) == 0") )
          __debugbreak();
LABEL_110:
        if ( v50->bits == -77 )
          return 0i64;
        v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2595, ASSERT_TYPE_ASSERT, "( stateFields[0].bits == (-77) )", (const char *)&queryFormat, "stateFields[0].bits == MSG_FIELD_ETYPE");
        goto LABEL_114;
      }
      p_bits = &v66->bits;
      do
      {
        if ( *((_BYTE *)p_bits + 2) == 2 )
        {
          v55 = 0;
          if ( *((_WORD *)_RBP + 4) == _R14[4] )
          {
            v54 = *p_bits;
            if ( *p_bits != -77 && (!v69 || v54 != -108 && (unsigned int)(v54 + 83) > 5) )
              v55 = 1;
          }
          MSG_ReadDeltaField(msg, time, _RBP, _R14, (const NetField *)(p_bits - 6), 0, v55);
        }
        p_bits += 12;
        --v51;
      }
      while ( v51 );
      v42 = v65;
      v50 = v66;
    }
    v52 = v42 < 0;
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
  __int64 Short; 
  unsigned __int16 offset; 
  int bits; 
  int AnimData; 
  __int64 v20; 
  float v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  __int16 v25; 
  int v26; 
  __int64 v27; 
  float v28; 
  unsigned int OriginExtraPrecisionBitsForField; 
  int FloatCase; 
  int v47; 
  unsigned int MinBitCountForNum; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  int v57; 
  int v59; 
  int v62; 
  int v65; 
  __int64 v68; 
  int v69; 
  int v70; 
  int v72; 
  float v81; 
  __int64 v82; 
  int v83; 
  __int64 v84; 
  unsigned int v85; 
  char v86; 
  int DeltaTime; 
  __int64 v88; 
  int v89; 
  __int64 v90; 
  int Byte; 
  int v92; 
  int v93; 
  __int64 v94; 
  int v95; 
  int EventParamBits; 
  __int64 ValueNoXor; 
  unsigned int Long; 
  int size; 
  unsigned __int16 RuntimeMapIndexBits; 
  __int64 Value; 
  __int64 v102; 
  int v103; 
  entityType_s v104; 
  unsigned int v108; 
  int v111; 
  __int64 v112; 
  __int64 v124; 
  __int64 v131; 
  __int64 v140; 
  int v154; 
  msg_t *v155; 
  __int64 v156; 
  __int64 v157; 
  int Bit; 
  __int64 v159; 
  __int64 v160; 
  char v161; 
  __int64 v162; 
  __int64 v163; 
  int v164; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  char v170; 
  char v171; 
  unsigned __int8 v172; 
  unsigned __int8 v176; 
  char v183; 
  unsigned int v192; 
  int FloatByRangeAndBits; 
  __int64 NetConstString; 
  __int64 v195; 
  __int64 v196; 
  __int64 v197; 
  __int64 v198; 
  __int64 v199; 
  __int64 v200; 
  __int64 v201; 
  __int64 v202; 
  __int64 v203; 
  __int64 v204; 
  __int64 v205; 
  __int64 v206; 
  __int64 v207; 
  __int64 v208; 
  unsigned int ClientAttachTagBits; 
  __int64 v210; 
  unsigned int m_effectBits; 
  unsigned int m_esIndexBits; 
  __int64 v213; 
  __int64 v214; 
  __int64 v215; 
  unsigned int v216; 
  __int64 v217; 
  __int64 v218; 
  unsigned int v219; 
  char v220; 
  __int64 v221; 
  unsigned int v222; 
  int v223; 
  int v224; 
  __int64 v225; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmtg; 
  __int64 v235; 
  double v236; 
  __int64 v237; 
  double v238; 
  double v239; 
  int v240; 
  int v241; 
  int v242; 
  int fromF; 
  int key; 
  __int64 v245; 
  vec3_t quatPacked; 
  vec4_t outQuat; 

  Short = 0i64;
  fromF = time;
  v245 = 0i64;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1530, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  offset = field->offset;
  if ( xorValues )
    _R15 = (__int64 *)((char *)from + offset);
  else
    _R15 = &v245;
  _R14 = (tmat33_t<vec3_t> *)((char *)to + offset);
  if ( msg->overflowed )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1538, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
      __debugbreak();
    if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1552, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", "%s\n\tmsg overflowed after reading %i out of %i bytes", "!msg->overflowed", msg->readcount, msg->cursize) )
      __debugbreak();
  }
  bits = field->bits;
  __asm { vmovaps [rsp+0F8h+var_58], xmm6 }
  switch ( bits )
  {
    case -115:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1768, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      __asm { vmovss  xmm6, dword ptr [r15] }
      if ( MSG_ReadBit(msg) == 1 )
      {
        v131 = MSG_ReadBits(msg, 8u);
        truncate_cast<int,__int64>(v131);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@3dcccccd
          vaddss  xmm2, xmm1, xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:?cls@@3UClStatic@@A.mapCenter+8; ClStatic cls
          vaddss  xmm2, xmm0, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm6, xmm0, xmm2, 1
        }
        v140 = MSG_ReadBits(msg, 0x15u);
        _EAX = truncate_cast<int,__int64>(v140) - 1048570;
        __asm
        {
          vmovd   xmm0, eax
          vcvttss2si eax, xmm6
          vmovd   xmm1, eax
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm2, xmm0, cs:__real@3dcccccd
          vcvtdq2ps xmm1, xmm1
          vaddss  xmm2, xmm2, xmm1
        }
      }
      __asm { vmovss  dword ptr [r14], xmm2 }
      if ( print )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm2, xmm2
          vmovsd  [rsp+0F8h+fmt], xmm0
        }
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, fmtf);
      }
      goto LABEL_295;
    case -114:
    case -113:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1759, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      __asm { vmovss  xmm6, dword ptr [r15] }
      v111 = field->bits;
      if ( MSG_ReadBit(msg) == 1 )
      {
        v112 = MSG_ReadBits(msg, 8u);
        truncate_cast<int,__int64>(v112);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@3dcccccd
          vaddss  xmm2, xmm1, xmm6
        }
      }
      else
      {
        if ( v111 == -113 )
        {
          __asm { vmovss  xmm0, dword ptr cs:?cls@@3UClStatic@@A.mapCenter; ClStatic cls }
        }
        else
        {
          if ( v111 != -114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 400, ASSERT_TYPE_ASSERT, "( bits == (-114) )", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGIN_PHYSICSY") )
            __debugbreak();
          __asm { vmovss  xmm0, dword ptr cs:?cls@@3UClStatic@@A.mapCenter+4; ClStatic cls }
        }
        __asm
        {
          vaddss  xmm2, xmm0, cs:__real@3f000000
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm3, xmm1, xmm2, 1
          vcvttss2si eax, xmm3
          vmovd   xmm6, eax
          vcvtdq2ps xmm6, xmm6
        }
        v124 = MSG_ReadBits(msg, 0x15u);
        _EAX = truncate_cast<int,__int64>(v124) - 1048570;
        __asm
        {
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, cs:__real@3dcccccd
          vaddss  xmm2, xmm6, xmm1
        }
      }
      __asm { vmovss  dword ptr [r14], xmm2 }
      if ( print )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm2, xmm2
          vmovsd  [rsp+0F8h+fmt], xmm0
        }
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, fmte);
      }
      goto LABEL_295;
    case -112:
      if ( MSG_ReadBit(msg) == 1 )
      {
        v27 = MSG_ReadBits(msg, 6u);
        LOBYTE(v28) = truncate_cast<unsigned int,__int64>(v27);
      }
      else
      {
        v28 = *(float *)_R15;
      }
      LODWORD(Short) = LOBYTE(v28) & 0x3F;
      if ( print )
        Com_Printf(25, "%s:%d ", field->name, Short & 0x3F);
      goto LABEL_26;
    case -111:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1723, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( BgWeaponHandle ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( BgWeaponHandle )") )
        __debugbreak();
      size = field->size;
      RuntimeMapIndexBits = BgWeaponMap::GetRuntimeMapIndexBits();
      Value = MSG_ReadValue(msg, _R15, RuntimeMapIndexBits, size);
      LODWORD(_R14->m[0].v[0]) = truncate_cast<unsigned int,__int64>(Value);
      goto LABEL_295;
    case -110:
      if ( MSG_ReadBit(msg) == 1 )
      {
        v20 = MSG_ReadBits(msg, 6u);
        LOBYTE(v21) = truncate_cast<unsigned int,__int64>(v20);
      }
      else
      {
        v21 = *(float *)_R15;
      }
      v22 = MSG_ReadBits(msg, 1u);
      v23 = LOBYTE(v21) & 0x3F ^ (LOBYTE(v21) & 0x3F ^ (unsigned __int8)((unsigned __int8)truncate_cast<unsigned int,__int64>(v22) << 6)) & 0x40;
      v24 = MSG_ReadBits(msg, 2u);
      v25 = truncate_cast<unsigned int,__int64>(v24);
      v26 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(v25 << 7)) & 0x180;
      if ( print )
        Com_Printf(25, "%s:%d ", field->name, ((unsigned __int8)v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)((_BYTE)v25 << 7)) & 0x80) & 0x3F);
      MSG_SetField(_R14, field->size, v26);
      goto LABEL_295;
    case -109:
      if ( field->size != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1856, ASSERT_TYPE_ASSERT, "(field->size == 4)", (const char *)&queryFormat, "field->size == 4") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
        LODWORD(Short) = MSG_ReadLong(msg) ^ *(_DWORD *)_R15;
      LODWORD(_R14->m[0].v[0]) = Short;
      goto LABEL_295;
    case -108:
    case 0:
      FloatCase = MSG_ReadFloatCase(msg, (const int *)_R15, field, print);
      MSG_SetField(_R14, field->size, FloatCase);
      goto LABEL_295;
    case -107:
      AnimData = MSG_ReadAnimData(msg, (const int *)_R15, field, print);
      MSG_SetField(_R14, field->size, AnimData);
      goto LABEL_295;
    case -106:
    case -105:
    case -104:
    case -39:
    case -38:
    case -37:
      __asm { vmovss  xmm6, dword ptr [r15]; jumptable 0000000141429225 cases -106--104,-39--37 }
      MSG_GetOriginExtraPrecisionBitsForField(bits);
      __asm
      {
        vxorps  xmm5, xmm5, xmm5
        vcvtsi2ss xmm5, xmm5, rax
        vmulss  xmm0, xmm5, xmm6
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vcvttss2si eax, xmm4
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm6, xmm0, xmm5
        vmovss  [rsp+0F8h+fromF], xmm6
      }
      if ( MSG_ReadBit(msg) )
      {
        v240 = MSG_ReadFloatCase(msg, &fromF, field, print);
      }
      else
      {
        if ( bits == -104 || bits == -37 )
        {
          OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField(bits);
          __asm { vmovaps xmm3, xmm6; oldValue }
          *(float *)&_XMM0 = MSG_ReadOriginExpGolomb(2, OriginExtraPrecisionBitsForField, msg, *(float *)&_XMM3);
        }
        else
        {
          __asm { vmovaps xmm2, xmm6; oldValue }
          *(float *)&_XMM0 = MSG_ReadOriginFloat(bits, msg, *(float *)&_XMM2);
        }
        __asm { vmovss  [rsp+0F8h+var_A8], xmm0 }
        if ( print )
        {
          __asm
          {
            vcvtss2sd xmm3, xmm0, xmm0
            vmovq   r9, xmm3
          }
          Com_Printf(25, "%s:%f ", field->name, *(double *)&_XMM3);
        }
      }
      MSG_SetField(_R14, field->size, v240);
      goto LABEL_295;
    case -103:
      Bit = MSG_ReadBit(msg);
      v155 = msg;
      if ( Bit )
        goto LABEL_154;
      v159 = MSG_ReadBits(msg, 4u);
      MSG_SetField(_R14, field->size, 50 * v159);
      goto LABEL_295;
    case -102:
      v154 = MSG_ReadBit(msg);
      v155 = msg;
      if ( v154 )
      {
LABEL_154:
        v156 = MSG_ReadBits(v155, 0x10u);
        MSG_SetField(_R14, field->size, v156);
      }
      else
      {
        v157 = MSG_ReadBits(msg, 4u);
        MSG_SetField(_R14, field->size, 250 * v157);
      }
      goto LABEL_295;
    case -101:
      if ( MSG_ReadBit(msg) )
        Short = MSG_ReadShort(msg);
      MSG_SetField(_R14, field->size, Short);
      goto LABEL_295;
    case -100:
    case -79:
      __asm { vmovss  xmm6, dword ptr [r15] }
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1780, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      __asm { vmovaps xmm1, xmm6; oldFloat }
      *(float *)&_XMM0 = MSG_ReadDeltaAngle(msg, *(double *)&_XMM1);
      __asm { vmovss  dword ptr [r14], xmm0 }
      goto LABEL_295;
    case -99:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1657, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
      {
        if ( MSG_ReadBit(msg) )
        {
          LODWORD(_R14->m[0].v[0]) = MSG_ReadLong(msg) ^ *(_DWORD *)_R15;
          if ( print )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r14]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0F8h+fmt], xmm0
            }
            Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, fmtc);
          }
        }
        else
        {
          v68 = MSG_ReadBits(msg, 4u);
          v69 = truncate_cast<int,__int64>(v68);
          v70 = 16 * MSG_ReadByte(msg) + v69;
          __asm { vcvttss2si eax, dword ptr [r15] }
          v72 = (v70 ^ (_EAX + 2048)) - 2048;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [r14], xmm0
          }
          if ( print )
          {
            LODWORD(fmt) = v72;
            Com_Printf(25, "%s%s:%i \n", (char *)&queryFormat.fmt + 3, field->name, fmt);
          }
        }
      }
      else
      {
        _R14->m[0].v[0] = 0.0;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vaddss  xmm1, xmm0, cs:__real@45000000
        vcvttss2si rax, xmm1
      }
      if ( (unsigned int)_RAX >= 0x1000 )
      {
        __asm { vcvttss2si eax, xmm1 }
        LODWORD(v237) = 4096;
        LODWORD(v235) = _EAX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1697, ASSERT_TYPE_ASSERT, "(unsigned)( *(float *)toF + (1<<(12-1)) ) < (unsigned)( 1 << 12 )", "*(float *)toF + HUDELEM_COORD_BIAS doesn't index 1 << HUDELEM_COORD_BITS\n\t%i not in [0, %i)", v235, v237) )
          __debugbreak();
      }
      goto LABEL_295;
    case -98:
      v81 = *(float *)_R15;
      if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 227, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      if ( MSG_ReadBit(msg) == 1 )
      {
        v82 = MSG_ReadBits(msg, 0x1Eu);
        v83 = truncate_cast<int,__int64>(v82);
        MSG_SetField(_R14, field->size, v83);
      }
      else
      {
        v84 = MSG_ReadBits(msg, 5u);
        v85 = truncate_cast<int,__int64>(v84);
        v86 = v85;
        if ( v85 > 0x1D )
        {
          LODWORD(v237) = v85;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 240, ASSERT_TYPE_ASSERT, "( ( bitChanged >= 0 && bitChanged < 30 ) )", "%s\n\t( bitChanged ) = %i", "( bitChanged >= 0 && bitChanged < 30 )", v237) )
            __debugbreak();
        }
        MSG_SetField(_R14, field->size, LODWORD(v81) ^ (1 << v86));
      }
      goto LABEL_295;
    case -97:
    case -74:
    case -70:
      DeltaTime = MSG_ReadDeltaTime(msg, fromF);
      MSG_SetField(_R14, field->size, DeltaTime);
      goto LABEL_295;
    case -96:
      if ( MSG_ReadBit(msg) == 1 )
      {
        MSG_SetField(_R14, field->size, 2046i64);
        goto LABEL_295;
      }
      if ( MSG_ReadBit(msg) != 1 )
      {
        v88 = MSG_ReadBits(msg, 3u);
        v89 = truncate_cast<int,__int64>(v88);
        LODWORD(Short) = (8 * MSG_ReadByte(msg)) | v89;
      }
      goto LABEL_26;
    case -95:
      v102 = MSG_ReadBits(msg, 7u);
      MSG_SetField(_R14, field->size, 100 * v102);
      goto LABEL_295;
    case -94:
      v90 = field->offset;
      if ( abs16(field->size) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 592, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toEvent ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toEvent )") )
        __debugbreak();
      if ( !MSG_ReadBit(msg) )
      {
        v95 = *(_DWORD *)((char *)from + v90);
        *(_DWORD *)((char *)to + v90) = v95;
        EventParamBits = MSG_GetEventParamBits(v95);
        if ( EventParamBits )
        {
          v93 = EventParamBits;
          goto LABEL_100;
        }
LABEL_101:
        *(_DWORD *)((char *)to + v90 + 4) = Short;
        goto LABEL_295;
      }
      Byte = MSG_ReadByte(msg);
      *(_DWORD *)((char *)to + v90) = Byte;
      v92 = MSG_GetEventParamBits(Byte);
      if ( !v92 )
        goto LABEL_101;
      if ( MSG_ReadBit(msg) )
      {
        v93 = v92;
LABEL_100:
        ValueNoXor = MSG_ReadValueNoXor(msg, v93);
        LODWORD(Short) = truncate_cast<unsigned int,__int64>(ValueNoXor);
        goto LABEL_101;
      }
      LODWORD(v94) = -1;
      if ( v92 != 64 )
        v94 = ~(-1i64 << v92);
      *(_DWORD *)((char *)to + v90 + 4) = v94 & *(_DWORD *)((_BYTE *)from + v90 + 4);
LABEL_295:
      __asm { vmovaps xmm6, [rsp+0F8h+var_58] }
      return;
    case -93:
      Long = MSG_ReadLong(msg);
      MSG_SetField(_R14, field->size, Long);
      goto LABEL_295;
    case -92:
    case -91:
    case -83:
    case -82:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1739, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      __asm { vmovss  xmm2, dword ptr [r15]; oldValue }
      *(float *)&_XMM0 = MSG_ReadOriginFloat(field->bits, msg, *(float *)&_XMM2);
      goto LABEL_113;
    case -90:
    case -81:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1749, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      __asm { vmovss  xmm6, dword ptr [r15] }
      v108 = MSG_GetOriginExtraPrecisionBitsForField(field->bits);
      __asm { vmovaps xmm3, xmm6; oldValue }
      *(float *)&_XMM0 = MSG_ReadOriginExpGolomb(2, v108, msg, *(float *)&_XMM3);
LABEL_113:
      __asm { vmovss  dword ptr [r14], xmm0 }
      if ( print )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0F8h+fmt], xmm0
        }
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, fmtd);
      }
      goto LABEL_295;
    case -89:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1612, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
      {
        v62 = MSG_ReadLong(msg);
        LODWORD(_R14->m[0].v[0]) = v62;
        LODWORD(_R14->m[0].v[0]) = *(_DWORD *)_R15 ^ v62;
        if ( print )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+0F8h+fmt], xmm0
          }
          Com_Printf(25, "%s%s:%f\n", (char *)&queryFormat.fmt + 3, field->name, fmta);
        }
      }
      else
      {
        v55 = MSG_ReadBits(msg, 5u);
        v56 = truncate_cast<int,__int64>(v55);
        v57 = 32 * MSG_ReadByte(msg) + v56;
        __asm { vcvttss2si eax, dword ptr [r15] }
        v59 = (v57 ^ (_EAX + 4096)) - 4096;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [r14], xmm0
        }
        if ( print )
        {
          LODWORD(fmt) = v59;
          Com_Printf(25, "%s%s:%i\n", (char *)&queryFormat.fmt + 3, field->name, fmt);
        }
      }
      goto LABEL_295;
    case -88:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1646, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v65 = MSG_ReadLong(msg);
      LODWORD(_R14->m[0].v[0]) = v65;
      LODWORD(_R14->m[0].v[0]) = *(_DWORD *)_R15 ^ v65;
      if ( print )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0F8h+fmt], xmm0
        }
        Com_Printf(25, "%s%s:%f \n", (char *)&queryFormat.fmt + 3, field->name, fmtb);
      }
      goto LABEL_295;
    case -87:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1786, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      *(double *)&_XMM0 = MSG_ReadAngle16(msg);
      __asm { vmovss  dword ptr [r14], xmm0 }
      goto LABEL_295;
    case -86:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1791, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( float ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( float )") )
        __debugbreak();
      MSG_ReadBits(msg, 6u);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, cs:__real@3dcccccd
        vmovss  dword ptr [r14], xmm1
      }
      goto LABEL_295;
    case -85:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1813, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toColor ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toColor )") )
        __debugbreak();
      if ( MSG_ReadBit(msg) )
      {
        _R14->m[0].v[0] = *(float *)_R15;
        if ( !*((_BYTE *)_R15 + 3) )
          LOBYTE(Short) = -1;
        HIBYTE(_R14->row0.x) = Short;
      }
      else
      {
        if ( !MSG_ReadBit(msg) )
        {
          LOBYTE(_R14->m[0].v[0]) = MSG_ReadByte(msg);
          BYTE1(_R14->m[0].v[0]) = MSG_ReadByte(msg);
          BYTE2(_R14->row0.x) = MSG_ReadByte(msg);
        }
        v160 = MSG_ReadBits(msg, 8u);
        v161 = v160;
        if ( (v160 < 0 || (unsigned __int64)v160 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v160, "signed", v160) )
          __debugbreak();
        HIBYTE(_R14->row0.x) = v161;
      }
      goto LABEL_295;
    case -84:
      v162 = MSG_ReadBits(msg, 0x1Du);
      MSG_SetField(_R14, field->size, v162);
      goto LABEL_295;
    case -80:
    case -78:
      v47 = MSG_ReadLong(msg);
      MSG_SetField(_R14, field->size, v47);
      goto LABEL_295;
    case -77:
      v103 = MSG_ReadByte(msg);
      v104 = truncate_cast<enum entityType_s,__int64>(v103);
      MSG_SetField(_R14, field->size, v104);
      goto LABEL_295;
    case -76:
      if ( abs16(field->size) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1838, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 2)", (const char *)&queryFormat, "abs( field->size ) == 2") )
        __debugbreak();
      if ( MSG_ReadBit(msg) == 1 )
      {
        v163 = MSG_ReadBits(msg, 4u);
        v164 = truncate_cast<int,__int64>(v163);
        v165 = MSG_GetField(_R15, field->size);
        v166 = truncate_cast<short,__int64>(v165) + v164 - 8;
      }
      else
      {
        v167 = MSG_ReadValue(msg, _R15, 8, field->size);
        v166 = truncate_cast<short,__int64>(v167);
      }
      MSG_SetField(_R14, field->size, v166);
      if ( print )
      {
        *(float *)&fmt = _R14->m[0].v[0];
        Com_Printf(25, "%s%s:%i \n", (char *)&queryFormat.fmt + 3, field->name, fmt);
      }
      goto LABEL_295;
    case -75:
      if ( MSG_ReadBit(msg) == 1 )
      {
        if ( abs16(field->size) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1602, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
          __debugbreak();
        MinBitCountForNum = GetMinBitCountForNum(0x10u);
        v49 = MSG_ReadBits(msg, MinBitCountForNum);
        v50 = truncate_cast<int,__int64>(v49);
        v51 = MSG_GetField(_R15, field->size);
        v52 = truncate_cast<int,__int64>(v51);
        MSG_SetField(_R14, field->size, v50 + v52 + 1);
      }
      else
      {
        v53 = MSG_ReadValue(msg, _R15, 8, field->size);
        v54 = truncate_cast<int,__int64>(v53);
        MSG_SetField(_R14, field->size, v54);
      }
      goto LABEL_295;
    case -73:
      NetConstString = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_HINTSTRING);
      MSG_SetField(_R14, field->size, NetConstString);
      goto LABEL_295;
    case -72:
      v195 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_LOCSTRING);
      MSG_SetField(_R14, field->size, v195);
      goto LABEL_295;
    case -71:
      v196 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_XMODEL);
      MSG_SetField(_R14, field->size, v196);
      goto LABEL_295;
    case -69:
      if ( MSG_ReadBit(msg) )
      {
        __asm { vmovaps [rsp+0F8h+var_68], xmm7 }
        v172 = MSG_ReadByte(msg);
        __asm
        {
          vmovss  xmm6, dword ptr [r15]
          vmovss  xmm7, cs:__real@3f800000
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
        v176 = v172;
        if ( v170 )
          goto LABEL_298;
        __asm { vcomiss xmm6, xmm7 }
        if ( !(v170 | v171) )
        {
LABEL_298:
          __asm
          {
            vmovsd  xmm0, cs:__real@3ff0000000000000
            vmovsd  [rsp+0F8h+var_C0], xmm0
            vxorpd  xmm1, xmm1, xmm1
            vmovsd  [rsp+0F8h+var_C8], xmm1
            vcvtss2sd xmm2, xmm6, xmm6
            vmovsd  qword ptr [rsp+0F8h+var_D0], xmm2
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1152, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( value ) && ( value ) <= ( 1.f )", "value not in [0.f, 1.f]\n\t%g not in [%g, %g]", v236, v238, v239) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm6, cs:__real@43800000
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm1, xmm1, xmm0, 1
          vcvttss2si eax, xmm1
        }
        v183 = _EAX;
        if ( _EAX > 255 )
          v183 = -1;
        if ( (v176 ^ (unsigned __int8)v183) == 0xFF )
        {
          __asm { vmovss  [rsp+0F8h+var_A8], xmm7 }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, cs:__real@3b800000
            vmovss  [rsp+0F8h+var_A8], xmm1
          }
        }
        LODWORD(Short) = v242;
        __asm { vmovaps xmm7, [rsp+0F8h+var_68] }
        if ( print )
        {
          __asm
          {
            vmovss  xmm3, [rsp+0F8h+var_A8]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovq   r9, xmm3
          }
          Com_Printf(25, "%s:%f ", field->name, *(double *)&_XMM3);
        }
      }
      else
      {
        LODWORD(Short) = MSG_ReadBit(msg) << 31;
        v241 = Short;
        __asm
        {
          vmovss  xmm0, [rsp+0F8h+var_A8]
          vxorps  xmm1, xmm1, xmm1
          vucomiss xmm0, xmm1
        }
        if ( (_DWORD)Short && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 942, ASSERT_TYPE_ASSERT, "( *reinterpret_cast<float *>( &value ) == 0.0f )", (const char *)&queryFormat, "*reinterpret_cast<float *>( &value ) == 0.0f") )
        {
          __debugbreak();
          MSG_SetField(_R14, field->size, (int)Short);
          goto LABEL_295;
        }
      }
LABEL_26:
      MSG_SetField(_R14, field->size, (int)Short);
      goto LABEL_295;
    case -68:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1874, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm2, cs:__real@461c4000; maxValue }
      goto LABEL_207;
    case -67:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1881, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm2, cs:__real@40a00000 }
      v192 = 12;
      goto LABEL_208;
    case -66:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1888, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm2, cs:__real@41300000 }
LABEL_207:
      v192 = 14;
      goto LABEL_208;
    case -65:
      if ( MSG_ReadBit(msg) )
      {
        *(double *)&_XMM0 = MSG_ReadFloat(msg);
        __asm { vmovss  dword ptr [rsp+0F8h+quatPacked], xmm0 }
        *(double *)&_XMM0 = MSG_ReadFloat(msg);
        __asm { vmovss  dword ptr [rsp+0F8h+quatPacked+4], xmm0 }
        *(double *)&_XMM0 = MSG_ReadFloat(msg);
        __asm { vmovss  dword ptr [rsp+0F8h+quatPacked+8], xmm0 }
        PackedQuatToUnitQuat(&quatPacked, &outQuat);
        QuatToAxis(&outQuat, _R14);
      }
      else
      {
        *(_QWORD *)_R14->m[0].v = 0i64;
        *(_QWORD *)&_R14->row0.z = 0i64;
        *(_QWORD *)&_R14->row1.y = 0i64;
        *(_QWORD *)_R14->row2.v = 0i64;
        _R14->m[2].v[2] = 0.0;
      }
      goto LABEL_295;
    case -64:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1902, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm2, cs:__real@42b40000 }
      v192 = 11;
      goto LABEL_208;
    case -63:
      m_esIndexBits = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VEHICLES) + 7;
      goto LABEL_249;
    case -62:
      v199 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_HEADICON);
      MSG_SetField(_R14, field->size, v199);
      goto LABEL_295;
    case -61:
      v202 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_SHOCK);
      MSG_SetField(_R14, field->size, v202);
      goto LABEL_295;
    case -60:
      v203 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_CLIENT_TAGS);
      MSG_SetField(_R14, field->size, v203);
      goto LABEL_295;
    case -59:
      ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
      v210 = MSG_ReadValueNoXor(msg, ClientAttachTagBits + 11);
      MSG_SetField(_R14, field->size, v210);
      goto LABEL_295;
    case -58:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 66, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_effectBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 67, ASSERT_TYPE_ASSERT, "(ms_data.m_effectBits > 0)", (const char *)&queryFormat, "ms_data.m_effectBits > 0") )
        __debugbreak();
      m_effectBits = BgDynamicLimits::ms_data.m_effectBits;
      goto LABEL_248;
    case -57:
      v204 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_SUIT);
      MSG_SetField(_R14, field->size, v204);
      goto LABEL_295;
    case -56:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 82, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_modelBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 83, ASSERT_TYPE_ASSERT, "(ms_data.m_modelBits > 0)", (const char *)&queryFormat, "ms_data.m_modelBits > 0") )
        __debugbreak();
      m_effectBits = BgDynamicLimits::ms_data.m_modelBits;
LABEL_248:
      m_esIndexBits = m_effectBits + BgDynamicLimits::GetClientAttachTagBits();
      goto LABEL_249;
    case -55:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( !BgDynamicLimits::ms_data.m_esIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
        __debugbreak();
      m_esIndexBits = BgDynamicLimits::ms_data.m_esIndexBits;
      goto LABEL_249;
    case -54:
      v206 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_MATERIAL);
      MSG_SetField(_R14, field->size, v206);
      goto LABEL_295;
    case -53:
      v197 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_ANIM);
      MSG_SetField(_R14, field->size, v197);
      goto LABEL_295;
    case -52:
      v198 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_VISIONSET);
      MSG_SetField(_R14, field->size, v198);
      goto LABEL_295;
    case -51:
      v207 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_VFX);
      MSG_SetField(_R14, field->size, v207);
      goto LABEL_295;
    case -50:
      v208 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_MINIMAPICON);
      MSG_SetField(_R14, field->size, v208);
      goto LABEL_295;
    case -49:
      v214 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_OBJECTIVEICON);
      MSG_SetField(_R14, field->size, v214);
      goto LABEL_295;
    case -48:
      v200 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_LUI);
      MSG_SetField(_R14, field->size, v200);
      goto LABEL_295;
    case -47:
      v201 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_IMAGE);
      MSG_SetField(_R14, field->size, v201);
      goto LABEL_295;
    case -46:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
        __debugbreak();
      m_esIndexBits = ComCharacterLimits::ms_gameData.m_clientBits;
      goto LABEL_249;
    case -45:
      key = 0;
      MSG_ReadDeltaClientBitsKey(msg, &key, _R15, _R14);
      goto LABEL_295;
    case -44:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 101, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_gameData.m_characterBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 102, ASSERT_TYPE_ASSERT, "(ms_gameData.m_characterBits > 0)", (const char *)&queryFormat, "ms_gameData.m_characterBits > 0") )
        __debugbreak();
      m_esIndexBits = ComCharacterLimits::ms_gameData.m_characterBits;
LABEL_249:
      v213 = MSG_ReadValueNoXor(msg, m_esIndexBits);
      MSG_SetField(_R14, field->size, v213);
      goto LABEL_295;
    case -43:
      v215 = MSG_ReadBits(msg, 3u);
      v216 = truncate_cast<unsigned int,__int64>(v215);
      v217 = v216;
      if ( v216 > 7 )
      {
        LODWORD(v237) = 7;
        LODWORD(v235) = v216;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2002, ASSERT_TYPE_ASSERT, "( numPatterns ) <= ( (7u) )", "numPatterns not in [0, FULL_AUTO_SCALE_NUM_MAX_PATTERNS]\n\t%u not in [0, %u]", v235, v237) )
          __debugbreak();
      }
      LODWORD(_R14->m[0].v[0]) = (_DWORD)v217 << 29;
      if ( (_DWORD)v217 )
      {
        do
        {
          v218 = MSG_ReadBits(msg, 4u);
          v219 = truncate_cast<unsigned int,__int64>(v218);
          v220 = Short;
          LODWORD(Short) = Short + 4;
          LODWORD(_R14->m[0].v[0]) |= v219 << v220;
          --v217;
        }
        while ( v217 );
      }
      goto LABEL_295;
    case -42:
      v205 = MSG_ReadNetConstString(msg, NETCONSTSTRINGTYPE_CARRYOBJECT);
      MSG_SetField(_R14, field->size, v205);
      goto LABEL_295;
    case -41:
      v221 = MSG_ReadBits(msg, 0x12u);
      v222 = truncate_cast<unsigned int,__int64>(v221);
      MSG_SetField(_R14, field->size, v222 - 1);
      goto LABEL_295;
    case -40:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 1895, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm2, cs:__real@41a00000 }
      v192 = 10;
LABEL_208:
      FloatByRangeAndBits = MSG_ReadFloatByRangeAndBits(msg, (const int *)_R15, *(float *)&_XMM2, v192, field, print);
      MSG_SetField(_R14, field->size, FloatByRangeAndBits);
      goto LABEL_295;
    default:
      v223 = MSG_ReadBit(msg);
      v224 = field->size;
      if ( v223 )
      {
        v225 = MSG_ReadValue(msg, _R15, field->bits, v224);
        MSG_SetField(_R14, field->size, v225);
        if ( print )
        {
          fmtg = (char *)MSG_GetField(_R14, field->size);
          Com_Printf(25, "%s%s:%lld\n", (char *)&queryFormat.fmt + 3, field->name, fmtg);
        }
      }
      else
      {
        MSG_SetField(_R14, v224, 0i64);
      }
      goto LABEL_295;
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
  int v26; 
  char v27; 
  int v28; 
  __int64 v29; 
  const NetField *v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int16 *p_offset; 
  int v34; 
  const NetField *array; 
  char v38[224]; 

  _RBP = to;
  _RSI = from;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3301, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_MLG_SPECTATOR);
  count = (int)NetFieldListForNetFieldType->count;
  array = NetFieldListForNetFieldType->array;
  if ( !_RSI )
  {
    _RSI = (const MLGSpectatorClientInfo *)v38;
    memset_0(v38, 0, 0xD8ui64);
  }
  if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, 6u);
    v26 = truncate_cast<int,__int64>(Bits);
    v27 = 0;
    v28 = 0;
    v29 = count;
    if ( (int)count > 0 )
    {
      v30 = array;
      v31 = 0i64;
      v32 = v26;
      p_offset = &array->offset;
      do
      {
        if ( v31 >= v32 )
        {
          *(int *)((char *)&_RBP->mlgMessageSent + *p_offset) = *(int *)((char *)&_RSI->mlgMessageSent + *p_offset);
        }
        else
        {
          MSG_ReadDeltaField(msg, time, _RSI, _RBP, &v30[v28], 1, 1);
          if ( !v27 )
          {
            v34 = (__int16)p_offset[1];
            if ( v34 == 7 || v34 == -111 )
              v27 = 1;
          }
          v30 = array;
        }
        ++v28;
        ++v31;
        p_offset += 12;
      }
      while ( v31 < v29 );
      if ( v27 )
        CgMLGSpectator::SetClientLoadoutDirty(cGameGlob->m_mlgSpectatorPtr, clientIdx, 1);
    }
    return 1;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+0], xmm0
      vmovups xmm1, xmmword ptr [rsi+10h]
      vmovups xmmword ptr [rbp+10h], xmm1
      vmovups xmm0, xmmword ptr [rsi+20h]
      vmovups xmmword ptr [rbp+20h], xmm0
      vmovups xmm1, xmmword ptr [rsi+30h]
      vmovups xmmword ptr [rbp+30h], xmm1
      vmovups xmm0, xmmword ptr [rsi+40h]
      vmovups xmmword ptr [rbp+40h], xmm0
      vmovups xmm1, xmmword ptr [rsi+50h]
      vmovups xmmword ptr [rbp+50h], xmm1
      vmovups xmm0, xmmword ptr [rsi+60h]
      vmovups xmmword ptr [rbp+60h], xmm0
      vmovups xmm0, xmmword ptr [rsi+70h]
      vmovups xmmword ptr [rbp+70h], xmm0
      vmovups xmm1, xmmword ptr [rsi+80h]
      vmovups xmmword ptr [rbp+80h], xmm1
      vmovups xmm0, xmmword ptr [rsi+90h]
      vmovups xmmword ptr [rbp+90h], xmm0
      vmovups xmm1, xmmword ptr [rsi+0A0h]
      vmovups xmmword ptr [rbp+0A0h], xmm1
      vmovups xmm0, xmmword ptr [rsi+0B0h]
      vmovups xmmword ptr [rbp+0B0h], xmm0
      vmovups xmm1, xmmword ptr [rsi+0C0h]
      vmovups xmmword ptr [rbp+0C0h], xmm1
    }
    *(_QWORD *)&_RBP->clientFoV = *(_QWORD *)&_RSI->clientFoV;
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
  int v48; 
  __int64 v53; 
  int v54; 
  const NetFieldList *v55; 
  ObjectiveView *objectives; 
  __int64 v57; 
  int v58; 
  int v59; 
  const NetField *v60; 
  const playerState_s *v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int v64; 
  const NetFieldList *v65; 
  signed int v66; 
  int v67; 
  int v68; 
  const NetField *v69; 
  const NetFieldList *v70; 
  signed int v71; 
  int v72; 
  int v73; 
  const NetField *v74; 
  const NetFieldList *v75; 
  TargetMarkerGroupView *targetMarkerGroups; 
  signed __int64 v77; 
  __int64 v78; 
  int v79; 
  int v80; 
  const NetField *v81; 
  const NetFieldList *v82; 
  CalloutMarkerPingView *calloutMarkerPings; 
  char *v84; 
  __int64 v85; 
  int v86; 
  int v87; 
  const NetField *v88; 
  __int64 v89; 
  __int64 v91; 
  int v92; 
  __int64 v94; 
  int v98; 
  _DWORD *v99; 
  __int64 v100; 
  int v101; 
  __int64 v102; 
  int v103; 
  __int64 v104; 
  int v105; 
  const char *fmt; 
  int v107; 
  __int64 print; 
  __int64 xorValues; 
  bool xorValuesa; 
  __int64 v111; 
  const playerState_s *froma; 
  int v115; 
  int v116; 
  int v117; 
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
    v115 = 1;
    Com_Printf(25, "%3i: playerstate ", (unsigned int)v10->readcount);
  }
  else
  {
LABEL_22:
    v115 = 0;
  }
  *outRecvOriginAndVelocity = MSG_ReadBit(v10) > 0;
  *outRecvVehicleState = MSG_ReadBit(v10) > 0;
  NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_PLAYERSTATE);
  v14 = -1;
  count = NetFieldListForNetFieldType->count;
  skippedNetfieldBits = NetFieldListForNetFieldType->skippedNetfieldBits;
  array = NetFieldListForNetFieldType->array;
  v116 = skippedNetfieldBits;
  v117 = count;
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
        LODWORD(v111) = v18;
        LODWORD(xorValues) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2964, ASSERT_TYPE_ASSERT, "(nextChanged <= lc)", "%s\n\tnextChanged == %i, lc == %i", "nextChanged <= lc", xorValues, v111) )
          __debugbreak();
      }
      if ( v14 <= v21 )
      {
        LODWORD(v111) = v21;
        LODWORD(xorValues) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2965, ASSERT_TYPE_ASSERT, "(nextChanged > lastChanged)", "%s\n\tnextChanged == %i, lastChanged == %i", "nextChanged > lastChanged", xorValues, v111) )
          __debugbreak();
      }
      v8 = to;
      xorValuesa = v26;
      v7 = v115;
      MSG_ReadDeltaField(v10, time, froma, to, &array[v14], v115, xorValuesa);
      if ( v10->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 2969, ASSERT_TYPE_ASSERT, "( !msg->overflowed )", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      skippedNetfieldBits = v116;
      v19 = v14 == v18;
    }
    while ( v14 < v18 );
    count = v117;
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
      v89 = MSG_ReadBits(v10, 4u);
      v44 = v89;
      if ( (unsigned __int64)(v89 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v89, "signed", v89) )
        __debugbreak();
      if ( v10->overflowed || v44 >= 15 )
        break;
      _RSI = (__int64)&v8->weapCommon.ammoInClip[v44];
      v91 = MSG_ReadBits(v10, 1u);
      v92 = v91;
      if ( (unsigned __int64)(v91 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum WeaponAmmoType __cdecl truncate_cast_impl<enum WeaponAmmoType,__int64>(__int64)", "signed", (int)v91, "signed", v91) )
        __debugbreak();
      *(_DWORD *)(_RSI + 60) = v92;
      _RAX = MSG_ReadWeapon(&result, v10);
      v94 = 2i64;
      __asm
      {
        vmovups ymm1, ymmword ptr [rax]
        vmovups xmm2, xmmword ptr [rax+20h]
        vmovsd  xmm0, qword ptr [rax+30h]
      }
      v98 = *(_DWORD *)&_RAX->weaponCamo;
      __asm
      {
        vmovups ymmword ptr [rsi], ymm1
        vmovups xmmword ptr [rsi+20h], xmm2
        vmovsd  qword ptr [rsi+30h], xmm0
      }
      *(_DWORD *)(_RSI + 56) = v98;
      v99 = (_DWORD *)(_RSI + 72);
      do
      {
        if ( MSG_ReadBit(v10) )
        {
          v100 = MSG_ReadBits(v10, 5u);
          v101 = v100;
          if ( (unsigned __int64)(v100 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v100, "signed", v100) )
            __debugbreak();
          *(v99 - 2) = v101;
        }
        if ( MSG_ReadBit(v10) )
        {
          v102 = MSG_ReadBits(v10, 5u);
          v103 = v102;
          if ( (unsigned __int64)(v102 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v102, "signed", v102) )
            __debugbreak();
          *v99 = v103;
        }
        if ( MSG_ReadBit(v10) )
        {
          v104 = MSG_ReadBits(v10, 9u);
          v105 = v104;
          if ( (unsigned __int64)(v104 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v104, "signed", v104) )
            __debugbreak();
          v99[2] = v105;
        }
        ++v99;
        --v94;
      }
      while ( v94 );
      v8 = to;
      if ( MSG_ReadBit(v10) <= 0 )
        goto LABEL_85;
    }
    fmt = "Invalid state, message overflowed in clip ammo (%i)";
    v107 = 3019;
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
        v55 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_OBJECTIVE);
        objectives = froma->objectives;
        v57 = 32i64;
        v58 = v55->skippedNetfieldBits;
        v59 = v55->count;
        v60 = v55->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, objectives, (char *)objectives + (char *)v8 - (char *)froma, v59, v60, v58);
          ++objectives;
          --v57;
        }
        while ( v57 );
        v8 = to;
      }
      v61 = froma;
      if ( MSG_ReadBit(v10) > 0 )
      {
        MSG_ReadDeltaHudElems(v10, time, froma->hud.archival, v8->hud.archival, 15, 4);
        MSG_ReadDeltaHudElems(v10, time, froma->hud.current, v8->hud.current, 30, 5);
      }
      v62 = BG_Omnvar_PerSnapCount();
      v63 = BG_Omnvar_PerPlayerstateMinBitsForIndex();
      v64 = BG_Omnvar_PerPlayerstateCount();
      MSG_ReadDeltaOmnvars_Internal(v10, time, v64, v63, froma->rxvOmnvars, v8->rxvOmnvars, v62);
      if ( MSG_ReadBit(v10) > 0 )
      {
        v65 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_HEAD_ICON);
        v66 = 0;
        v67 = v65->skippedNetfieldBits;
        v68 = v65->count;
        v69 = v65->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, &froma->headIcons[v66], &v8->headIcons[v66], v68, v69, v67);
          ++v66;
        }
        while ( (unsigned int)v66 < 0x20 );
      }
      if ( MSG_ReadBit(v10) > 0 )
      {
        v70 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_HEAD_ICON_EXTENDED_DATA);
        v71 = 0;
        v72 = v70->skippedNetfieldBits;
        v73 = v70->count;
        v74 = v70->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, &froma->headIconsExtendedData[v71], &v8->headIconsExtendedData[v71], v73, v74, v72);
          ++v71;
        }
        while ( (unsigned int)v71 < 0x20 );
      }
      if ( MSG_ReadBit(v10) > 0 )
      {
        v75 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_TARGET_MARKER);
        targetMarkerGroups = froma->targetMarkerGroups;
        v77 = (char *)v8 - (char *)froma->targetMarkerGroups;
        v78 = 2i64;
        v79 = v75->skippedNetfieldBits;
        v80 = v75->count;
        v81 = v75->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, targetMarkerGroups, &targetMarkerGroups[130].extraStates[v77 + 4], v80, v81, v79);
          ++targetMarkerGroups;
          --v78;
        }
        while ( v78 );
        v8 = to;
        v61 = froma;
      }
      if ( MSG_ReadBit(v10) > 0 )
      {
        v82 = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_CALLOUT_MARKER_PING);
        calloutMarkerPings = v61->calloutMarkerPings;
        v84 = (char *)((char *)v8 - (char *)v61);
        v85 = 52i64;
        v86 = v82->skippedNetfieldBits;
        v87 = v82->count;
        v88 = v82->array;
        do
        {
          MSG_ReadDeltaFields(v10, time, calloutMarkerPings, &v84[(_QWORD)calloutMarkerPings], v87, v88, v86);
          ++calloutMarkerPings;
          --v85;
        }
        while ( v85 );
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
      _RAX = MSG_ReadWeapon(&result, v10);
      v48 = *(_DWORD *)&_RAX->weaponCamo;
      __asm
      {
        vmovups ymm1, ymmword ptr [rax]
        vmovups xmm2, xmmword ptr [rax+20h]
        vmovsd  xmm0, qword ptr [rax+30h]
      }
      _RSI = (char *)v8 + 68 * v44;
      __asm
      {
        vmovups ymmword ptr [rsi+778h], ymm1
        vmovups xmmword ptr [rsi+798h], xmm2
        vmovsd  qword ptr [rsi+7A8h], xmm0
      }
      *((_DWORD *)_RSI + 492) = v48;
      v53 = MSG_ReadBits(v10, 0xAu);
      v54 = v53;
      if ( (unsigned __int64)(v53 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v53, "signed", v53) )
        __debugbreak();
      *((_DWORD *)_RSI + 494) = v54;
      if ( MSG_ReadBit(v10) <= 0 )
        goto LABEL_126;
    }
    fmt = "Invalid state, message overflowed in ammo stored (%i)";
    v107 = 3103;
  }
  LODWORD(print) = v44;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v107, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, print) )
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
  __int64 v9; 
  ScoreboardInfo *v21; 
  __int64 v22; 
  signed __int64 v23; 
  int v24; 
  __int64 v25; 
  __int64 Bits; 
  int v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  __int64 i; 
  int v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  char *v58; 
  ScoreInfo *clientScores; 
  int ping; 
  __int64 v61; 
  int v62; 
  int fromF; 
  const ScoreboardInfo *v64; 
  char v65[6032]; 

  v64 = from;
  v6 = from;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3218, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !v6 )
  {
    v6 = (const ScoreboardInfo *)v65;
    v64 = (const ScoreboardInfo *)v65;
    memset_0(v65, 0, 0x1784ui64);
  }
  _R9 = v6->teamPlacement;
  v9 = 6i64;
  _R10 = to->teamPlacement;
  do
  {
    _R10 += 32;
    __asm { vmovups xmm0, xmmword ptr [r9] }
    _R9 += 32;
    __asm
    {
      vmovups xmmword ptr [r10-80h], xmm0
      vmovups xmm1, xmmword ptr [r9-70h]
      vmovups xmmword ptr [r10-70h], xmm1
      vmovups xmm0, xmmword ptr [r9-60h]
      vmovups xmmword ptr [r10-60h], xmm0
      vmovups xmm1, xmmword ptr [r9-50h]
      vmovups xmmword ptr [r10-50h], xmm1
      vmovups xmm0, xmmword ptr [r9-40h]
      vmovups xmmword ptr [r10-40h], xmm0
      vmovups xmm1, xmmword ptr [r9-30h]
      vmovups xmmword ptr [r10-30h], xmm1
      vmovups xmm0, xmmword ptr [r9-20h]
      vmovups xmmword ptr [r10-20h], xmm0
      vmovups xmm1, xmmword ptr [r9-10h]
      vmovups xmmword ptr [r10-10h], xmm1
    }
    --v9;
  }
  while ( v9 );
  __asm
  {
    vmovups xmm0, xmmword ptr [r9]
    vmovups xmmword ptr [r10], xmm0
    vmovups xmm1, xmmword ptr [r9+10h]
    vmovups xmmword ptr [r10+10h], xmm1
  }
  *((_QWORD *)_R10 + 4) = *((_QWORD *)_R9 + 4);
  _R10[10] = _R9[10];
  if ( MSG_ReadBit(msg) )
  {
    v21 = to;
    v22 = 2i64;
    v23 = (char *)v6 - (char *)to;
    do
    {
      v24 = *(int *)((char *)v21->teamScores + v23);
      if ( MSG_ReadBit(msg) )
      {
        fromF = v24;
        v25 = MSG_ReadValue(msg, &fromF, 16, -4);
        v24 = truncate_cast<int,__int64>(v25);
      }
      v21->teamScores[0] = v24;
      v21 = (ScoreboardInfo *)((char *)v21 + 4);
      --v22;
    }
    while ( v22 );
    if ( MSG_ReadBit(msg) )
    {
      while ( !msg->overflowed )
      {
        Bits = MSG_ReadBits(msg, 8u);
        v27 = Bits;
        if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
          __debugbreak();
        v28 = MSG_ReadBits(msg, 8u);
        v29 = v28;
        if ( (unsigned __int64)(v28 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v28, "signed", v28) )
          __debugbreak();
        to->teamPlacement[v27] = v29;
        if ( !MSG_ReadBit(msg) )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      v30 = clientCount;
      fromF = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_STATUSICON);
      if ( clientCount > 0 )
      {
        for ( i = 0i64; i < clientCount; ++i )
        {
          _RSI = (__int64)&v64->clientScores[i];
          _R14 = &to->clientScores[i];
          if ( MSG_ReadBit(msg) )
          {
            v36 = *(unsigned __int8 *)(_RSI + 2);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v36;
              v37 = MSG_ReadValue(msg, &v62, fromF, -4);
              v36 = truncate_cast<int,__int64>(v37);
            }
            if ( (v36 < 0 || (unsigned int)v36 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v36, "signed", v36) )
              __debugbreak();
            to->clientScores[i].status = v36;
            v38 = *(unsigned __int16 *)(_RSI + 8);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v38;
              v39 = MSG_ReadValue(msg, &v62, 10, -4);
              v38 = truncate_cast<int,__int64>(v39);
            }
            if ( (v38 < 0 || (unsigned int)v38 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v38, "signed", v38) )
              __debugbreak();
            to->clientScores[i].deaths = v38;
            v40 = *(unsigned __int16 *)(_RSI + 4);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v40;
              v41 = MSG_ReadValue(msg, &v62, 16, -4);
              v40 = truncate_cast<int,__int64>(v41);
            }
            if ( (v40 < 0 || (unsigned int)v40 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v40, "signed", v40) )
              __debugbreak();
            to->clientScores[i].score = v40;
            v42 = *(unsigned __int16 *)(_RSI + 6);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v42;
              v43 = MSG_ReadValue(msg, &v62, 14, -4);
              v42 = truncate_cast<int,__int64>(v43);
            }
            if ( (v42 < 0 || (unsigned int)v42 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v42, "signed", v42) )
              __debugbreak();
            to->clientScores[i].kills = v42;
            v44 = *(unsigned __int16 *)(_RSI + 10);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v44;
              v45 = MSG_ReadValue(msg, &v62, 10, -4);
              v44 = truncate_cast<int,__int64>(v45);
            }
            if ( (v44 < 0 || (unsigned int)v44 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v44, "signed", v44) )
              __debugbreak();
            to->clientScores[i].assists = v44;
            v46 = *(unsigned __int16 *)(_RSI + 12);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v46;
              v47 = MSG_ReadValue(msg, &v62, 16, -4);
              v46 = truncate_cast<int,__int64>(v47);
            }
            if ( (v46 < 0 || (unsigned int)v46 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v46, "signed", v46) )
              __debugbreak();
            to->clientScores[i].extrascore0 = v46;
            v48 = *(unsigned __int16 *)(_RSI + 14);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v48;
              v49 = MSG_ReadValue(msg, &v62, 8, -4);
              v48 = truncate_cast<int,__int64>(v49);
            }
            if ( (v48 < 0 || (unsigned int)v48 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v48, "signed", v48) )
              __debugbreak();
            to->clientScores[i].extrascore1 = v48;
            v50 = *(unsigned __int16 *)(_RSI + 16);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v50;
              v51 = MSG_ReadValue(msg, &v62, 16, -4);
              v50 = truncate_cast<int,__int64>(v51);
            }
            if ( (v50 < 0 || (unsigned int)v50 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v50, "signed", v50) )
              __debugbreak();
            to->clientScores[i].extrascore2 = v50;
            v52 = *(unsigned __int16 *)(_RSI + 18);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v52;
              v53 = MSG_ReadValue(msg, &v62, 16, -4);
              v52 = truncate_cast<int,__int64>(v53);
            }
            if ( (v52 < 0 || (unsigned int)v52 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v52, "signed", v52) )
              __debugbreak();
            to->clientScores[i].extrascore3 = v52;
            v54 = *(unsigned __int16 *)(_RSI + 22);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v54;
              v55 = MSG_ReadValue(msg, &v62, 6, -4);
              v54 = truncate_cast<int,__int64>(v55);
            }
            if ( (v54 < 0 || (unsigned int)v54 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v54, "signed", v54) )
              __debugbreak();
            to->clientScores[i].adrenaline = v54;
            v56 = *(unsigned __int16 *)(_RSI + 24);
            if ( MSG_ReadBit(msg) )
            {
              v62 = v56;
              v57 = MSG_ReadValue(msg, &v62, 10, -4);
              v56 = truncate_cast<int,__int64>(v57);
            }
            if ( (v56 < 0 || (unsigned int)v56 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v56, "signed", v56) )
              __debugbreak();
            to->clientScores[i].deathTimerLength = v56;
            _R14->ping = *(_WORD *)_RSI;
          }
          else
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi]
              vmovups xmmword ptr [r14], xmm0
              vmovsd  xmm1, qword ptr [rsi+10h]
              vmovsd  qword ptr [r14+10h], xmm1
            }
            to->clientScores[i].deathTimerLength = *(_WORD *)(_RSI + 24);
          }
        }
      }
      if ( MSG_ReadBit(msg) && clientCount > 0i64 )
      {
        v58 = (char *)((char *)to - (char *)v64);
        clientScores = v64->clientScores;
        do
        {
          ping = clientScores->ping;
          if ( MSG_ReadBit(msg) )
          {
            v62 = ping;
            v61 = MSG_ReadValue(msg, &v62, 10, -4);
            ping = truncate_cast<int,__int64>(v61);
          }
          if ( (unsigned int)(ping + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)ping, "signed", ping) )
            __debugbreak();
          *(_WORD *)&v58[(_QWORD)clientScores++] = ping;
          --v30;
        }
        while ( v30 );
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
  unsigned int v12; 
  __int64 Bits; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned int *v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  *(_QWORD *)result->array = -1i64;
  *(_QWORD *)&result->array[2] = -1i64;
  _RBX = from;
  *(_QWORD *)&result->array[4] = -1i64;
  *(_QWORD *)&result->array[6] = -1i64;
  _RDI = result;
  *(_QWORD *)&result->array[8] = -1i64;
  *(_QWORD *)&result->array[10] = -1i64;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 141, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  numUmbraGates = comWorld.numUmbraGates;
  if ( comWorld.numUmbraGates )
  {
    if ( !MSG_ReadBit(msg) )
    {
      if ( _RBX )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx]
          vmovups ymmword ptr [rdi], ymm0
          vmovups xmm1, xmmword ptr [rbx+20h]
          vmovups xmmword ptr [rdi+20h], xmm1
        }
        return _RDI;
      }
      v7 = 4051;
      goto LABEL_12;
    }
    if ( MSG_ReadBit(msg) )
    {
      if ( !_RBX )
      {
        v7 = 4064;
LABEL_12:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", v7, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Received a 'no change' umbra state without a 'from' state") )
          __debugbreak();
        MSG_Discard(msg);
        return _RDI;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdi+20h], xmm1
      }
      v12 = I_log2Ceil(numUmbraGates);
      while ( 1 )
      {
        Bits = MSG_ReadBits(msg, v12);
        v14 = (unsigned int)truncate_cast<int,__int64>(Bits);
        if ( msg->overflowed )
          break;
        if ( ((v14 & 0x80000000) != 0i64 || (int)v14 >= (int)numUmbraGates) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4082, ASSERT_TYPE_ASSERT, "(gateIndex >= 0 && gateIndex < numWorldGates)", (const char *)&queryFormat, "gateIndex >= 0 && gateIndex < numWorldGates") )
          __debugbreak();
        if ( (unsigned int)v14 >= 0x180 )
        {
          LODWORD(v22) = 384;
          LODWORD(v21) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
            __debugbreak();
        }
        v15 = 0x80000000 >> (v14 & 0x1F);
        v16 = &_RDI->array[v14 >> 5];
        if ( (v15 & *v16) != 0 )
        {
          if ( (unsigned int)v14 >= 0x180 )
          {
            LODWORD(v24) = 384;
            LODWORD(v23) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
              __debugbreak();
          }
          *v16 &= ~v15;
        }
        else
        {
          if ( (unsigned int)v14 >= 0x180 )
          {
            LODWORD(v24) = 384;
            LODWORD(v23) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
              __debugbreak();
          }
          *v16 |= v15;
        }
        if ( !MSG_ReadBit(msg) )
          return _RDI;
      }
      Com_PrintError(25, "MSG_ReadDeltaUmbraGateState: Invalid state, message overflowed\n");
      MSG_Discard(msg);
    }
    else
    {
      v17 = 0i64;
      if ( (unsigned int)numUmbraGates >= 0x20 )
      {
        v18 = numUmbraGates >> 5;
        do
        {
          _RDI->array[v17] = MSG_ReadLong(msg);
          LODWORD(numUmbraGates) = numUmbraGates - 32;
          v17 = (unsigned int)(v17 + 1);
          --v18;
        }
        while ( v18 );
      }
      if ( (_DWORD)numUmbraGates )
      {
        v19 = MSG_ReadBits(msg, numUmbraGates);
        _RDI->array[v17] = (0xFFFFFFFF >> numUmbraGates) | (truncate_cast<int,__int64>(v19) << (32 - numUmbraGates));
      }
    }
  }
  return _RDI;
}

/*
==============
MSG_ReadDeltaWeaponMapEntry
==============
*/
char MSG_ReadDeltaWeaponMapEntry(msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, WeaponMapEntry *to)
{
  int v12; 
  __int64 v13; 
  Weapon result; 

  _RBX = to;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3530, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3531, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( weaponMapIndex >= (unsigned int)BgWeaponMap::ms_runtimeSize )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v13) = weaponMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3532, ASSERT_TYPE_ASSERT, "(unsigned)( weaponMapIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponMapIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v13, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  if ( MSG_ReadBit(msg) )
    return 1;
  _RBX->index = truncate_cast<unsigned short,int>(weaponMapIndex);
  _RAX = MSG_ReadWeapon(&result, msg);
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovups xmm2, xmmword ptr [rax+20h]
    vmovsd  xmm0, qword ptr [rax+30h]
  }
  v12 = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rbx+2], ymm1
    vmovups xmmword ptr [rbx+22h], xmm2
    vmovsd  qword ptr [rbx+32h], xmm0
  }
  *(_DWORD *)&_RBX->weapon.weaponCamo = v12;
  if ( !_RBX->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3547, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( to->weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( to->weapon )") )
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

__int64 __fastcall MSG_ReadFloatByRangeAndBits(msg_t *msg, const int *fromF, double maxValue, unsigned int bitCount, const NetField *field, int print)
{
  unsigned int v12; 
  __int64 result; 
  __int64 Bits; 
  int v17; 
  int v18; 
  int v20; 
  char *fmt; 
  unsigned int v26; 
  unsigned int v27; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  _RSI = fromF;
  if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, bitCount);
    v17 = truncate_cast<int,__int64>(Bits);
    __asm { vmovss  xmm0, dword ptr [rsi]; value }
    v18 = v17;
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    v20 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, bitCount);
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(v18 ^ (unsigned int)v20, *(float *)&_XMM1, bitCount);
    __asm { vmovss  [rsp+58h+var_28], xmm0 }
    if ( print && field )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+58h+fmt], xmm0
      }
      Com_Printf(25, "%s%s:%f \n", (const char *)&queryFormat.fmt + 3, field->name, *(double *)&fmt);
    }
    result = v27;
  }
  else
  {
    v12 = MSG_ReadBit(msg) << 31;
    v26 = v12;
    __asm
    {
      vmovss  xmm0, [rsp+58h+var_28]
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 972, ASSERT_TYPE_ASSERT, "( *reinterpret_cast<float *>( &value ) == 0.0f )", (const char *)&queryFormat, "*reinterpret_cast<float *>( &value ) == 0.0f") )
      __debugbreak();
    result = v12;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
MSG_ReadFloatCase
==============
*/
__int64 MSG_ReadFloatCase(msg_t *msg, const int *fromF, const NetField *field, int print)
{
  int Bit; 
  int v11; 
  unsigned int v12; 
  __int64 Bits; 
  int v16; 
  int Byte; 
  __int64 v19; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 

  _R15 = fromF;
  Bit = MSG_ReadBit(msg);
  v11 = MSG_ReadBit(msg);
  if ( Bit )
  {
    if ( v11 )
    {
      v12 = *_R15 ^ MSG_ReadLong(msg);
      v28 = v12;
      if ( print && field )
      {
        __asm
        {
          vmovss  xmm3, [rsp+58h+var_28]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_Printf(25, "%s:%f ", field->name, *(double *)&_XMM3);
      }
    }
    else
    {
      Bits = MSG_ReadBits(msg, 5u);
      v16 = truncate_cast<int,__int64>(Bits);
      Byte = MSG_ReadByte(msg);
      __asm { vcvttss2si r9d, dword ptr [r15] }
      v19 = ((32 * Byte + v16) ^ (unsigned int)(_ER9 + 4096)) - 4096;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9d
        vmovss  [rsp+58h+var_28], xmm0
      }
      if ( print && field )
        Com_Printf(25, "%s:%i ", field->name, v19);
      return v27;
    }
  }
  else
  {
    v12 = v11 << 31;
    v26 = v12;
    __asm
    {
      vmovss  xmm0, [rsp+58h+var_28]
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 895, ASSERT_TYPE_ASSERT, "( *reinterpret_cast< float * >( toF ) == 0.0f )", (const char *)&queryFormat, "*reinterpret_cast< float * >( toF ) == 0.0f") )
      __debugbreak();
  }
  return v12;
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

float __fastcall MSG_ReadOriginExpGolomb(const int kBits, const unsigned int precisionBits, msg_t *msg, double oldValue)
{
  char v7; 

  v7 = precisionBits;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  MSG_ReadSignedExpGolomb(msg, kBits);
  if ( !(1 << v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(( 1 << precisionBits ) != 0)", (const char *)&queryFormat, "( 1 << precisionBits ) != 0") )
    __debugbreak();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vcvtsi2ss xmm1, xmm1, edi
    vdivss  xmm1, xmm1, xmm0
    vaddss  xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
MSG_ReadOriginFloat
==============
*/

double __fastcall MSG_ReadOriginFloat(int bits, msg_t *msg, double oldValue)
{
  unsigned __int64 v4; 
  __int64 v8; 
  unsigned int OriginExtraPrecisionBitsForField; 
  double result; 

  v4 = (unsigned int)(bits + 114);
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (unsigned int)v4 > 0x20 || (v8 = 0x180C00303i64, !_bittest64(&v8, v4)) )
  {
    if ( (unsigned int)(bits + 39) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 284, ASSERT_TYPE_ASSERT, "(bits == (-92) || bits == (-83) || bits == (-106) || bits == (-113) || bits == (-91) || bits == (-82) || bits == (-105) || bits == (-114) || bits == (-39) || bits == (-38))", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGINX || bits == MSG_FIELD_ES_ORIGINX || bits == MSG_FIELD_MOVING_PLATFORM_ORIGINX || bits == MSG_FIELD_ORIGIN_PHYSICSX || bits == MSG_FIELD_ORIGINY || bits == MSG_FIELD_ES_ORIGINY || bits == MSG_FIELD_MOVING_PLATFORM_ORIGINY || bits == MSG_FIELD_ORIGIN_PHYSICSY || bits == MSG_FIELD_HIGH_PRECISION_ORIGINX || bits == MSG_FIELD_HIGH_PRECISION_ORIGINY") )
      __debugbreak();
  }
  OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField(bits);
  __asm
  {
    vmovaps xmm3, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  *(float *)&result = MSG_ReadOriginExpGolomb(4, OriginExtraPrecisionBitsForField, msg, *(double *)&_XMM3);
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
  entityType_s v2; 
  const NetFieldList *StateFieldListForEntityType; 
  unsigned int v4; 
  unsigned int NetFieldsCountForEntityType; 
  __int64 v6; 
  const NetField *array; 
  NetFieldLoD netfieldLoD; 
  netFieldResetValue resetValue; 
  __int64 v10; 
  __int64 v20; 
  __int16 to[120]; 
  __int64 v22; 

  _R14 = &entityState->number;
  if ( !entityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 4211, ASSERT_TYPE_ASSERT, "(entityState != nullptr)", (const char *)&queryFormat, "entityState != nullptr") )
    __debugbreak();
  memset_0(to, 0, 0xF8ui64);
  v2 = _R14[4];
  to[0] = *_R14;
  to[4] = v2;
  StateFieldListForEntityType = MSG_GetStateFieldListForEntityType(v2);
  v4 = 0;
  NetFieldsCountForEntityType = MSG_GetNetFieldsCountForEntityType((const entityType_s)_R14[4]);
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
          MSG_SetField((char *)to + array[v6].offset, array[v6].size, v10);
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
        MSG_CopyFieldOver(StateFieldListForEntityType->array, _R14, to, v4);
      }
LABEL_16:
      ++v4;
      ++v6;
    }
    while ( v4 < NetFieldsCountForEntityType );
  }
  _RAX = to;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [r14], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [r14+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [r14+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [r14+60h], ymm0
    vmovups ymmword ptr [r14+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [r14+0A0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0C0h]
    vmovups ymmword ptr [r14+0C0h], ymm1
    vmovups xmm1, xmmword ptr [rax+0E0h]
  }
  v20 = v22;
  __asm { vmovups xmmword ptr [r14+0E0h], xmm1 }
  *((_QWORD *)_R14 + 30) = v20;
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
  bool v10; 
  bool v11; 
  bool result; 
  unsigned int v50; 
  signed __int64 v51; 
  unsigned int v52; 
  int v53; 

  _RDI = second;
  _RBX = first;
  if ( !first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 66, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
    __debugbreak();
  v10 = _RDI == NULL;
  if ( !_RDI )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 67, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  switch ( bits )
  {
    case -115:
    case -114:
    case -113:
    case -86:
      __asm
      {
        vmovss  xmm5, cs:__real@41200000; jumptable 0000000141430DAB cases -115--113,-86
        vmulss  xmm1, xmm5, dword ptr [rbx]
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm1, xmm5, dword ptr [rdi]
        vxorps  xmm6, xmm6, xmm6
        vroundss xmm3, xmm6, xmm2, 1
        vcvttss2si ecx, xmm3
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si eax, xmm1
      }
      result = _ECX == _EAX;
      break;
    case -109:
      result = *_RBX == *_RDI;
      break;
    case -100:
    case -87:
    case -79:
      __asm
      {
        vmovss  xmm5, cs:__real@43360b61; jumptable 0000000141430DAB cases -100,-87,-79
        vmulss  xmm1, xmm5, dword ptr [rbx]
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm1, xmm5, dword ptr [rdi]
        vxorps  xmm6, xmm6, xmm6
        vroundss xmm3, xmm6, xmm2, 1
        vcvttss2si ecx, xmm3
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si eax, xmm1
      }
      result = (unsigned __int16)(_EAX ^ _ECX) == 0;
      break;
    case -98:
      result = ((*_RDI ^ *_RBX) & 0x3FFFFFFF) == 0;
      break;
    case -95:
      result = *_RBX / 100 == *_RDI / 100;
      break;
    case -94:
      if ( _RBX[1] != _RDI[1] || *_RBX != *_RDI )
        goto LABEL_41;
      result = 1;
      break;
    case -92:
    case -91:
    case -90:
    case -83:
    case -82:
    case -81:
      __asm
      {
        vmovss  xmm3, cs:__real@3f000000; jumptable 0000000141430DAB cases -92--90,-83--81
        vaddss  xmm1, xmm3, dword ptr [rbx]
        vaddss  xmm3, xmm3, dword ptr [rdi]
        vxorps  xmm4, xmm4, xmm4
        vroundss xmm0, xmm4, xmm3, 1
        vcvttss2si eax, xmm0
        vroundss xmm2, xmm4, xmm1, 1
        vcvttss2si ecx, xmm2
      }
      result = _ECX == _EAX;
      break;
    case -85:
      if ( *(_BYTE *)_RBX != *(_BYTE *)_RDI || *((_BYTE *)_RBX + 1) != *((_BYTE *)_RDI + 1) || *((_BYTE *)_RBX + 2) != *((_BYTE *)_RDI + 2) || *((_BYTE *)_RBX + 3) != *((_BYTE *)_RDI + 3) )
        goto LABEL_41;
      result = 1;
      break;
    case -84:
      result = ((*_RDI ^ *_RBX) & 0x1FFFFFFF) == 0;
      break;
    case -65:
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]; jumptable 0000000141430DAB case -65
        vucomiss xmm0, dword ptr [rbx]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vucomiss xmm0, dword ptr [rbx+4]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+8]
        vucomiss xmm0, dword ptr [rbx+8]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vucomiss xmm0, dword ptr [rbx+0Ch]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10h]
        vucomiss xmm0, dword ptr [rbx+10h]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+14h]
        vucomiss xmm0, dword ptr [rbx+14h]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+18h]
        vucomiss xmm0, dword ptr [rbx+18h]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1Ch]
        vucomiss xmm0, dword ptr [rbx+1Ch]
      }
      if ( !v10 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+20h]
        vucomiss xmm0, dword ptr [rbx+20h]
      }
      if ( !v10 )
        goto LABEL_41;
      result = 1;
      break;
    case -45:
      v50 = 0;
      v51 = (char *)_RDI - (char *)_RBX;
      do
      {
        if ( *_RBX != *(_DWORD *)((char *)_RBX + v51) )
          goto LABEL_41;
        ++v50;
        ++_RBX;
      }
      while ( v50 < 7 );
      result = 1;
      break;
    default:
      v52 = abs32(size);
      if ( v52 > 8 || (v53 = 278, !_bittest(&v53, v52)) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 151, ASSERT_TYPE_ASSERT, "(abs( size ) == 1 || abs( size ) == 2 || abs( size ) == 4 || abs( size ) == 8)", "%s\n\tunexpected size %d\n", "abs( size ) == 1 || abs( size ) == 2 || abs( size ) == 4 || abs( size ) == 8", size) )
          __debugbreak();
      }
LABEL_41:
      result = 0;
      break;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  __int64 v10; 
  __m256i *v11; 
  __int64 v12; 
  __int64 v15; 
  int v18; 
  __m256i *i; 
  int v20; 
  __m256i *v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  bool v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __m256i v29; 
  __int128 v30; 

  _RSI = from;
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
    if ( !_RSI )
      goto LABEL_41;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups xmm1, xmmword ptr [rsi+20h]
    }
    v10 = 12i64;
    __asm
    {
      vmovups [rsp+0C8h+var_78], ymm0
      vmovups [rsp+0C8h+var_58], xmm1
    }
    if ( &v29 > (__m256i *)&to->array[11] || (char *)&v30 + 12 < (char *)to )
    {
      _RDX = (char *)to - (char *)&v29;
      _RAX = &v29;
      v15 = 3i64;
      do
      {
        __asm
        {
          vmovdqu xmm1, xmmword ptr [rdx+rax]
          vpxor   xmm1, xmm1, xmmword ptr [rax]
          vmovdqu xmmword ptr [rax], xmm1
        }
        _RAX = (__m256i *)((char *)_RAX + 16);
        --v15;
      }
      while ( v15 );
    }
    else
    {
      v11 = &v29;
      v12 = 12i64;
      do
      {
        v11->m256i_i32[0] ^= *(unsigned int *)((char *)v11->m256i_u32 + (char *)to - (char *)&v29);
        v11 = (__m256i *)((char *)v11 + 4);
        --v12;
      }
      while ( v12 );
    }
    v18 = 0;
    for ( i = &v29; !i->m256i_i32[0]; i = (__m256i *)((char *)i + 4) )
    {
      if ( (unsigned int)++v18 >= 0xC )
      {
        MSG_WriteBit0(msg);
        return;
      }
    }
    v20 = 0;
    v21 = &v29;
    do
    {
      v20 += __popcnt(v21->m256i_i32[0]);
      v21 = (__m256i *)((char *)v21 + 4);
      --v10;
    }
    while ( v10 );
    if ( !(_DWORD)numUmbraGates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
    v22 = 32 - __lzcnt(numUmbraGates - 1);
    if ( v20 * (v22 + 1) < (unsigned int)numUmbraGates )
    {
      MSG_WriteBit1(msg);
      MSG_WriteBit1(msg);
      do
      {
        if ( (unsigned int)v7 >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.cpp", 3991, ASSERT_TYPE_ASSERT, "(blockIndex < umbraGateStates_t::WORD_COUNT)", (const char *)&queryFormat, "blockIndex < umbraGateStates_t::WORD_COUNT") )
          __debugbreak();
        v23 = v29.m256i_u32[v7];
        if ( v23 )
        {
          v24 = 32 * v7 + __lzcnt(v23);
          MSG_WriteBits(msg, v24, v22);
          v25 = v20-- == 1;
          MSG_WriteBool(msg, !v25);
          if ( v24 >= 0x180 )
          {
            LODWORD(v28) = 384;
            LODWORD(v27) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v28) )
              __debugbreak();
          }
          v29.m256i_i32[(unsigned __int64)v24 >> 5] &= ~(0x80000000 >> (v24 & 0x1F));
        }
        else
        {
          v7 = (unsigned int)(v7 + 1);
        }
      }
      while ( v20 );
    }
    else
    {
LABEL_41:
      MSG_WriteBit1(msg);
      MSG_WriteBit0(msg);
      if ( (unsigned int)numUmbraGates >= 0x20 )
      {
        v26 = numUmbraGates >> 5;
        do
        {
          MSG_WriteLong(msg, to->array[v7]);
          LODWORD(numUmbraGates) = numUmbraGates - 32;
          v7 = (unsigned int)(v7 + 1);
          --v26;
        }
        while ( v26 );
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

