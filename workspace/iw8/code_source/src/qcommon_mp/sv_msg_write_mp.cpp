/*
==============
MSG_GenerateSignature
==============
*/

void MSG_GenerateSignature(void)
{
  ?MSG_GenerateSignature@@YAXXZ();
}

/*
==============
MSG_WriteDeltaClient
==============
*/

void __fastcall MSG_WriteDeltaClient(SnapshotInfo *snapInfo, msg_t *msg, const int time, const clientState_t *from, const clientState_t *to, int writeIndex, int force)
{
  ?MSG_WriteDeltaClient@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUclientState_t@@2HH@Z(snapInfo, msg, time, from, to, writeIndex, force);
}

/*
==============
MSG_SetupSnapInfoForNetfieldType
==============
*/

void __fastcall MSG_SetupSnapInfoForNetfieldType(const netFieldTypes_t fieldType, SnapshotInfo *const outSnapInfo)
{
  ?MSG_SetupSnapInfoForNetfieldType@@YAXW4netFieldTypes_t@@QEAUSnapshotInfo@@@Z(fieldType, outSnapInfo);
}

/*
==============
MSG_WriteEntityLoD
==============
*/

void __fastcall MSG_WriteEntityLoD(const SnapshotInfo *const snapInfo, msg_t *const msg, const NetFieldLoD lod)
{
  ?MSG_WriteEntityLoD@@YAXQEBUSnapshotInfo@@QEAUmsg_t@@W4NetFieldLoD@@@Z(snapInfo, msg, lod);
}

/*
==============
MSG_GetNetFieldListForNetFieldType
==============
*/

const NetFieldList *__fastcall MSG_GetNetFieldListForNetFieldType(const netFieldTypes_t netFieldType)
{
  return ?MSG_GetNetFieldListForNetFieldType@@YAPEBUNetFieldList@@W4netFieldTypes_t@@@Z(netFieldType);
}

/*
==============
MSG_WriteEntityIndex
==============
*/

void __fastcall MSG_WriteEntityIndex(const SnapshotInfo *snapInfo, msg_t *msg, const int index, const int indexBits)
{
  ?MSG_WriteEntityIndex@@YAXPEBUSnapshotInfo@@PEIAUmsg_t@@HH@Z(snapInfo, msg, index, indexBits);
}

/*
==============
MSG_WriteDeltaBit
==============
*/

void __fastcall MSG_WriteDeltaBit(msg_t *const msg)
{
  ?MSG_WriteDeltaBit@@YAXQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_WriteDeltaPlayerstateOmnvars
==============
*/

void __fastcall MSG_WriteDeltaPlayerstateOmnvars(SnapshotInfo *snapInfo, msg_t *msg, const int time, const OmnvarData *fromOmnvars, const OmnvarData *toOmnvars)
{
  ?MSG_WriteDeltaPlayerstateOmnvars@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUOmnvarData@@2@Z(snapInfo, msg, time, fromOmnvars, toOmnvars);
}

/*
==============
MSG_WriteDeltaEntityLoD
==============
*/

void __fastcall MSG_WriteDeltaEntityLoD(SnapshotInfo *snapInfo, msg_t *msg, const clientLoDInfo_t *fromLoD, const EntityLoDs *entityLoDBits, const int clientIndex)
{
  ?MSG_WriteDeltaEntityLoD@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@PEBUclientLoDInfo_t@@PEBUEntityLoDs@@H@Z(snapInfo, msg, fromLoD, entityLoDBits, clientIndex);
}

/*
==============
MSG_WriteDeltaWeaponMapEntry
==============
*/

void __fastcall MSG_WriteDeltaWeaponMapEntry(SnapshotInfo *snapInfo, msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, const WeaponMapEntry *to)
{
  ?MSG_WriteDeltaWeaponMapEntry@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUWeaponMapEntry@@2@Z(snapInfo, msg, weaponMapIndex, from, to);
}

/*
==============
MSG_WriteDeltaArchivedEntity
==============
*/

void __fastcall MSG_WriteDeltaArchivedEntity(SnapshotInfo *snapInfo, msg_t *msg, const int time, const entityState_t *from, const entityState_t *to, const char *fromClientMask, const char *toClientMask, const unsigned int clientMaskSize)
{
  ?MSG_WriteDeltaArchivedEntity@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUentityState_t@@2PEBD3I@Z(snapInfo, msg, time, from, to, fromClientMask, toClientMask, clientMaskSize);
}

/*
==============
MSG_WriteDeltaOmnvars
==============
*/

void __fastcall MSG_WriteDeltaOmnvars(SnapshotInfo *snapInfo, msg_t *msg, const int time, const OmnvarData *fromOmnvars, const OmnvarData *toOmnvars)
{
  ?MSG_WriteDeltaOmnvars@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUOmnvarData@@2@Z(snapInfo, msg, time, fromOmnvars, toOmnvars);
}

/*
==============
MSG_GetBitCount
==============
*/

int __fastcall MSG_GetBitCount(bool *estimate, const unsigned __int8 *fromData, const unsigned __int8 *toData, const NetField *field)
{
  return ?MSG_GetBitCount@@YAHPEA_NPEBE1PEBUNetField@@@Z(estimate, fromData, toData, field);
}

/*
==============
MSG_WriteWeaponMapEntry_Index
==============
*/

void __fastcall MSG_WriteWeaponMapEntry_Index(msg_t *msg, const int itemIndex)
{
  ?MSG_WriteWeaponMapEntry_Index@@YAXPEAUmsg_t@@H@Z(msg, itemIndex);
}

/*
==============
MSG_WriteReliableCommandToBuffer
==============
*/

unsigned int __fastcall MSG_WriteReliableCommandToBuffer(const char *pszCommand, char *pszBuffer, unsigned int iBufferSize)
{
  return ?MSG_WriteReliableCommandToBuffer@@YAIPEBDPEADI@Z(pszCommand, pszBuffer, iBufferSize);
}

/*
==============
MSG_GetPlatformSignature
==============
*/

unsigned int __fastcall MSG_GetPlatformSignature()
{
  return ?MSG_GetPlatformSignature@@YAIXZ();
}

/*
==============
MSG_WriteDeltaPlayerstate
==============
*/

void __fastcall MSG_WriteDeltaPlayerstate(SnapshotInfo *snapInfo, msg_t *msg, const int time, const playerState_s *from, const playerState_s *to)
{
  ?MSG_WriteDeltaPlayerstate@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUplayerState_s@@2@Z(snapInfo, msg, time, from, to);
}

/*
==============
MSG_WriteReliableCommandDataToBuffer
==============
*/

unsigned int __fastcall MSG_WriteReliableCommandDataToBuffer(const unsigned __int8 *data, const unsigned int dataSize, char *pszBuffer, unsigned int iBufferSize)
{
  return ?MSG_WriteReliableCommandDataToBuffer@@YAIPEBEIPEADI@Z(data, dataSize, pszBuffer, iBufferSize);
}

/*
==============
SV_MsgMP_ValidateEntityState
==============
*/

void __fastcall SV_MsgMP_ValidateEntityState(const entityState_t *entState)
{
  ?SV_MsgMP_ValidateEntityState@@YAXPEBUentityState_t@@@Z(entState);
}

/*
==============
MSG_GetNetFieldsCountForEntityType
==============
*/

unsigned int __fastcall MSG_GetNetFieldsCountForEntityType(const entityType_s eType)
{
  return ?MSG_GetNetFieldsCountForEntityType@@YAIW4entityType_s@@@Z(eType);
}

/*
==============
MSG_SetupSnapInfoForEntityType
==============
*/

void __fastcall MSG_SetupSnapInfoForEntityType(const entityType_s entType, SnapshotInfo *const outSnapInfo)
{
  ?MSG_SetupSnapInfoForEntityType@@YAXW4entityType_s@@QEAUSnapshotInfo@@@Z(entType, outSnapInfo);
}

/*
==============
MSG_WriteDeltaAgent
==============
*/

void __fastcall MSG_WriteDeltaAgent(SnapshotInfo *snapInfo, msg_t *msg, const int time, const agentState_s *from, const agentState_s *to, int writeIndex, int force)
{
  ?MSG_WriteDeltaAgent@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUagentState_s@@2HH@Z(snapInfo, msg, time, from, to, writeIndex, force);
}

/*
==============
MSG_WriteNoDeltaBit
==============
*/

void __fastcall MSG_WriteNoDeltaBit(msg_t *const msg)
{
  ?MSG_WriteNoDeltaBit@@YAXQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_GetPacketEntityTypeForEType
==============
*/

PacketEntityType_e __fastcall MSG_GetPacketEntityTypeForEType(const entityType_s eType)
{
  return ?MSG_GetPacketEntityTypeForEType@@YA?AW4PacketEntityType_e@@W4entityType_s@@@Z(eType);
}

/*
==============
MSG_WriteDeltaMLGSpectatorInfo
==============
*/

bool __fastcall MSG_WriteDeltaMLGSpectatorInfo(SnapshotInfo *snapInfo, msg_t *msg, const int time, const MLGSpectatorClientInfo *from, const MLGSpectatorClientInfo *to)
{
  return ?MSG_WriteDeltaMLGSpectatorInfo@@YA_NPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUMLGSpectatorClientInfo@@2@Z(snapInfo, msg, time, from, to);
}

/*
==============
MSG_SetupNetFieldListsForGame
==============
*/

void __fastcall MSG_SetupNetFieldListsForGame(const char *const gameType)
{
  ?MSG_SetupNetFieldListsForGame@@YAXQEBD@Z(gameType);
}

/*
==============
MSG_WriteEntity
==============
*/

bool __fastcall MSG_WriteEntity(SnapshotInfo *snapInfo, msg_t *msg, const int timeDeltaFrom, const int timeDeltaTo, const int time, const entityState_t *from, const entityState_t *to, ServerEntityHeader *const outHeader, bool force)
{
  return ?MSG_WriteEntity@@YA_NPEAUSnapshotInfo@@PEAUmsg_t@@HHHPEBUentityState_t@@2QEAUServerEntityHeader@@_N@Z(snapInfo, msg, timeDeltaFrom, timeDeltaTo, time, from, to, outHeader, force);
}

/*
==============
SV_MsgMP_InitAnimClassData
==============
*/

void SV_MsgMP_InitAnimClassData(void)
{
  ?SV_MsgMP_InitAnimClassData@@YAXXZ();
}

/*
==============
MSG_WriteDeltaArchivedWeaponMapEntry
==============
*/

void __fastcall MSG_WriteDeltaArchivedWeaponMapEntry(SnapshotInfo *snapInfo, msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, const WeaponMapEntry *to)
{
  ?MSG_WriteDeltaArchivedWeaponMapEntry@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUWeaponMapEntry@@2@Z(snapInfo, msg, weaponMapIndex, from, to);
}

/*
==============
MSG_WriteDeltaTime
==============
*/

void __fastcall MSG_WriteDeltaTime(msg_t *msg, int timeBase, int time)
{
  ?MSG_WriteDeltaTime@@YAXPEAUmsg_t@@HH@Z(msg, timeBase, time);
}

/*
==============
MSG_GetStateFieldListForEntityType
==============
*/

const NetFieldList *__fastcall MSG_GetStateFieldListForEntityType(const entityType_s eType)
{
  return ?MSG_GetStateFieldListForEntityType@@YAPEBUNetFieldList@@W4entityType_s@@@Z(eType);
}

/*
==============
MSG_WriteDeltaScoreboard
==============
*/

void __fastcall MSG_WriteDeltaScoreboard(SnapshotInfo *snapInfo, msg_t *msg, const int time, const ScoreboardInfo *from, const ScoreboardInfo *to)
{
  ?MSG_WriteDeltaScoreboard@@YAXPEAUSnapshotInfo@@PEAUmsg_t@@HPEBUScoreboardInfo@@2@Z(snapInfo, msg, time, from, to);
}

/*
==============
MSG_WriteLastChangedField
==============
*/

void __fastcall MSG_WriteLastChangedField(const SnapshotInfo *snapInfo, msg_t *msg, const int lastChangedFieldNum, const int numFields)
{
  ?MSG_WriteLastChangedField@@YAXPEBUSnapshotInfo@@PEAUmsg_t@@HH@Z(snapInfo, msg, lastChangedFieldNum, numFields);
}

/*
==============
MSG_WriteDeltaAngleShort
==============
*/

void __fastcall MSG_WriteDeltaAngleShort(msg_t *msg, const __int16 from, const __int16 to)
{
  ?MSG_WriteDeltaAngleShort@@YAXPEAUmsg_t@@FF@Z(msg, from, to);
}

/*
==============
MSG_GenerateSignature
==============
*/
void MSG_GenerateSignature(void)
{
  __int64 v0; 
  char v1; 
  int v2; 
  char v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  char v13; 
  int v14; 

  if ( !s_msgSignatureGenerated )
  {
    s_msgSignature = 0;
    s_msgSignatureBits = 0;
    v0 = MSG_ComputeNetfieldListsHash();
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "MSG_ComputeNetfieldListsHash()", v0);
    if ( s_msgSignatureBits )
      LODWORD(v0) = __ROL4__(v0, s_msgSignatureBits);
    s_msgSignature ^= v0;
    v1 = s_msgSignatureBits + v0;
    v2 = 64;
    s_msgSignatureBits = v1 & 0x1F;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "BUTTON_BIT_COUNT", 64i64);
    if ( s_msgSignatureBits )
      v2 = __ROL4__(64, s_msgSignatureBits);
    s_msgSignature ^= v2;
    v3 = s_msgSignatureBits + v2;
    v4 = 1;
    s_msgSignatureBits = v3 & 0x1F;
    v5 = 1;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( COMPASS_EYES_ON )", 1i64);
    if ( s_msgSignatureBits )
      v5 = __ROL4__(1, s_msgSignatureBits);
    s_msgSignature ^= v5;
    s_msgSignatureBits = ((_BYTE)s_msgSignatureBits + (_BYTE)v5) & 0x1F;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( NET_ENCODING )", 0i64);
    s_msgSignatureBits &= 0x1Fu;
    v6 = 1237;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "NETWORK_FRAGMENT_SIZE", 1237i64);
    if ( s_msgSignatureBits )
      v6 = __ROL4__(1237, s_msgSignatureBits);
    s_msgSignature ^= v6;
    v7 = ((_BYTE)s_msgSignatureBits + (_BYTE)v6) & 0x1F;
    v8 = 1252;
    s_msgSignatureBits = v7;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "MAX_NETWORK_PACKETLEN", 1252i64);
    if ( s_msgSignatureBits )
      v8 = __ROL4__(1252, s_msgSignatureBits);
    s_msgSignature ^= v8;
    v9 = ((_BYTE)s_msgSignatureBits + (_BYTE)v8) & 0x1F;
    v10 = 200;
    s_msgSignatureBits = v9;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "MAX_CLIENTS_MP", 200i64);
    if ( s_msgSignatureBits )
      v10 = __ROL4__(200, s_msgSignatureBits);
    s_msgSignature ^= v10;
    s_msgSignatureBits = ((_BYTE)s_msgSignatureBits + (_BYTE)v10) & 0x1F;
    v11 = 1;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( DEPTH_OF_FIELD )", 1i64);
    if ( s_msgSignatureBits )
      v11 = __ROL4__(1, s_msgSignatureBits);
    s_msgSignature ^= v11;
    s_msgSignatureBits = ((_BYTE)s_msgSignatureBits + (_BYTE)v11) & 0x1F;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( PLAYER_CONTEXT_LEAN )", 0i64);
    s_msgSignatureBits &= 0x1Fu;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( HUD_OUTLINE_DATA )", 1i64);
    if ( s_msgSignatureBits )
      v4 = __ROL4__(1, s_msgSignatureBits);
    s_msgSignature ^= v4;
    s_msgSignatureBits = ((_BYTE)s_msgSignatureBits + (_BYTE)v4) & 0x1F;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( PLAYER_PRONE_FLIP )", 0i64);
    s_msgSignatureBits &= 0x1Fu;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( PLAYER_PRONE_ROLL )", 0i64);
    s_msgSignatureBits &= 0x1Fu;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "USING( PLAYER_JUKE )", 0i64);
    s_msgSignatureBits &= 0x1Fu;
    v12 = 30;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "ARRAY_COUNT( g_newEntityStateNetFieldList )", 30i64);
    if ( s_msgSignatureBits )
      v12 = __ROL4__(30, s_msgSignatureBits);
    s_msgSignature ^= v12;
    v13 = s_msgSignatureBits + v12;
    v14 = 11;
    s_msgSignatureBits = v13 & 0x1F;
    Com_Printf(16, "MSG_AddSignatureField: %-50s = %u\n", "ARRAY_COUNT( g_newNetFieldList )", 11i64);
    if ( s_msgSignatureBits )
      v14 = __ROL4__(11, s_msgSignatureBits);
    s_msgSignatureGenerated = 1;
    s_msgSignature ^= v14;
    s_msgSignatureBits = ((_BYTE)s_msgSignatureBits + (_BYTE)v14) & 0x1F;
    Com_Printf(16, "MSG Signature is: 0x%08x\n", s_msgSignature);
  }
}

/*
==============
MSG_GetBitCount
==============
*/
unsigned int MSG_GetBitCount(bool *estimate, const unsigned __int8 *fromData, const unsigned __int8 *toData, const NetField *field)
{
  int bits; 
  __int64 offset; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int result; 
  int v11; 
  int v12; 

  bits = field->bits;
  if ( fromData && toData )
  {
    offset = field->offset;
    v7 = *(_DWORD *)&fromData[offset];
    v8 = *(_DWORD *)&toData[offset];
  }
  else
  {
    v7 = 0;
    v8 = -1;
  }
  if ( field->bits )
  {
    if ( (unsigned int)(bits + 108) > 0x1E || (v9 = 1342177281, !_bittest(&v9, bits + 108)) )
    {
      switch ( bits )
      {
        case -107:
          result = 28;
          *estimate = 1;
          return result;
        case -110:
LABEL_141:
          result = 8;
          *estimate = 1;
          return result;
        case -112:
          goto LABEL_140;
      }
      if ( (unsigned int)(bits + 106) > 2 && (unsigned int)(bits + 39) > 2 && bits != -89 )
      {
        if ( bits == -88 )
          goto LABEL_139;
        if ( bits != -99 )
        {
          if ( (unsigned int)(bits + 101) <= 1 || bits == -79 )
          {
            *estimate = 0;
            return 17;
          }
          switch ( bits )
          {
            case -87:
              *estimate = 0;
              return 16;
            case -86:
              goto LABEL_136;
            case -102:
              *estimate = 0;
              if ( v7 < 4000 )
              {
                v11 = 250 * (v8 / 250);
                goto LABEL_28;
              }
              return 17;
            case -103:
              *estimate = 0;
              if ( v7 < 800 )
              {
                v11 = 50 * (v8 / 50);
LABEL_28:
                if ( v8 == v11 )
                  return 5;
              }
              return 17;
            case -85:
              *estimate = 0;
              if ( ((v7 ^ v8) & 0xFFFFFF00) != 0 )
                return 34;
              if ( (_BYTE)v7 )
              {
                if ( (unsigned __int8)v7 != 255 || (_BYTE)v8 )
                  return 10;
              }
              else if ( (_BYTE)v8 != 0xFF )
              {
                return 10;
              }
              return 2;
            case -84:
              *estimate = 0;
              return 29;
          }
          if ( (unsigned int)(bits + 97) <= 0x1B )
          {
            v12 = 142606337;
            if ( _bittest(&v12, bits + 97) )
              goto LABEL_133;
          }
          switch ( bits )
          {
            case -69:
              *estimate = 0;
              return 9;
            case -68:
              goto LABEL_135;
            case -67:
              *estimate = 0;
              return 13;
            case -66:
LABEL_135:
              *estimate = 0;
              return 15;
            case -40:
              *estimate = 0;
              return 11;
            case -64:
              *estimate = 0;
              return 12;
            case -98:
LABEL_136:
              *estimate = 0;
              return 6;
            case -96:
              result = 3;
              *estimate = 1;
              return result;
          }
          if ( bits != -75 )
          {
            switch ( bits )
            {
              case -94:
                *estimate = 0;
                return 42;
              case -111:
                *estimate = 0;
                return BgWeaponMap::GetRuntimeMapIndexBits();
              case -77:
                *estimate = 0;
                return 8;
            }
            if ( bits != -93 )
            {
              if ( (unsigned int)(bits + 92) <= 2 || (unsigned int)(bits + 83) <= 2 )
              {
                result = 17;
                *estimate = 1;
                return result;
              }
              if ( (unsigned int)(bits + 115) > 2 )
              {
                if ( bits == -95 )
                {
                  *estimate = 0;
                  return 7;
                }
                if ( bits != -76 )
                {
                  switch ( bits )
                  {
                    case -109:
                      *estimate = 0;
                      if ( v8 )
                        return 33;
                      break;
                    case -65:
                      result = 100;
                      *estimate = 1;
                      return result;
                    case -73:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_HINTSTRING);
                    case -72:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_LOCSTRING);
                    case -71:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_XMODEL);
                    case -53:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_ANIM);
                    case -52:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VISIONSET);
                    case -62:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_HEADICON);
                    case -48:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_LUI);
                    case -47:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_IMAGE);
                    case -49:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_OBJECTIVEICON);
                    case -61:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_SHOCK);
                    case -60:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_CLIENT_TAGS);
                    case -57:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_SUIT);
                    case -42:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_CARRYOBJECT);
                    case -54:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_MATERIAL);
                    case -51:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VFX);
                    case -50:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_MINIMAPICON);
                    case -59:
                      *estimate = 0;
                      return BgDynamicLimits::GetClientAttachTagBits() + 11;
                    case -58:
                      *estimate = 0;
                      return LerpEntityStateBeamScript::GetBitCount();
                    case -63:
                      *estimate = 0;
                      return NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VEHICLES) + 7;
                    case -56:
                      *estimate = 0;
                      return AgentAttachModelData::GetBitCount();
                    case -55:
                      *estimate = 0;
                      return BgDynamicLimits::GetEntityStateIndexBits();
                    case -46:
                      *estimate = 0;
                      return ComCharacterLimits::GetClientBits();
                    case -44:
                      *estimate = 0;
                      return ComCharacterLimits::GetCharacterBits();
                    case -43:
                      result = 31;
                      *estimate = 1;
                      return result;
                    case -45:
                      *estimate = 0;
                      return ComCharacterLimits::GetClientMaxCount();
                    case -41:
                      *estimate = 0;
                      return 18;
                    default:
                      if ( bits < -50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1521, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Missed a MSG_ case in MSG_GetBitCount - value is %i", field->bits) )
                        __debugbreak();
                      *estimate = 0;
                      if ( v8 )
                        return abs32(bits) + 1;
                      break;
                  }
                  return 1;
                }
                goto LABEL_141;
              }
LABEL_133:
              result = 9;
              *estimate = 1;
              return result;
            }
LABEL_139:
            *estimate = 0;
            return 32;
          }
LABEL_140:
          result = 7;
          *estimate = 1;
          return result;
        }
      }
    }
  }
  result = 33;
  *estimate = 1;
  return result;
}

/*
==============
MSG_GetLastChangedField
==============
*/
__int64 MSG_GetLastChangedField(const SnapshotInfo *snapInfo, const unsigned __int8 *from, const unsigned __int8 *to, const int numFields, const NetField *stateFields, int entityIndex)
{
  int v6; 
  int v11; 
  __int16 *p_size; 
  __int64 v13; 
  const unsigned __int8 *v14; 
  const unsigned __int8 *v15; 
  unsigned int v16; 
  int v19; 

  v6 = 0;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3407, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  v11 = 0;
  if ( numFields > 0 )
  {
    p_size = &stateFields->size;
    do
    {
      v13 = (unsigned __int16)p_size[1];
      v14 = &from[v13];
      v15 = &to[v13];
      v16 = abs16(*p_size);
      if ( v16 > 0x10 )
        goto LABEL_22;
      _XMM1 = *(_OWORD *)v15;
      __asm { vpcmpeqb xmm1, xmm1, xmmword ptr [r10] }
      v19 = (1 << v16) - 1;
      __asm { vpmovmskb eax, xmm1 }
      if ( (v19 & _EAX) != v19 )
      {
LABEL_22:
        if ( !MSG_ValuesAreEqualPost(v14, v15, p_size[2], *p_size) )
        {
          if ( !snapInfo->archived && !snapInfo->fromBaseline )
            SV_TrackFieldChange(snapInfo->clientNum, (const PacketEntityType_e)snapInfo->packetEntityType, v11, entityIndex);
          v6 = v11 + 1;
        }
      }
      p_size += 12;
      ++v11;
    }
    while ( v11 < numFields );
    if ( v6 < 0 )
      goto LABEL_21;
  }
  if ( v6 > numFields )
  {
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3423, ASSERT_TYPE_ASSERT, "( ( lc >= 0 && lc <= numFields ) )", "%s\n\t( lc ) = %i", "( lc >= 0 && lc <= numFields )", v6) )
      __debugbreak();
  }
  return (unsigned int)v6;
}

/*
==============
MSG_GetNetFieldListForNetFieldType
==============
*/
const NetFieldList *MSG_GetNetFieldListForNetFieldType(const netFieldTypes_t netFieldType)
{
  return g_newNetFieldList[netFieldType];
}

/*
==============
MSG_GetNetFieldsCountForEntityType
==============
*/
__int64 MSG_GetNetFieldsCountForEntityType(const entityType_s eType)
{
  entityType_s v1; 

  v1 = ET_EVENTS;
  if ( eType < ET_EVENTS )
    v1 = eType;
  return g_newEntityStateNetFieldList[v1]->count;
}

/*
==============
MSG_GetPacketEntityTypeForEType
==============
*/
__int64 MSG_GetPacketEntityTypeForEType(const entityType_s eType)
{
  __int64 result; 

  switch ( eType )
  {
    case ET_FIRST:
      result = 0i64;
      break;
    case ET_PLAYER:
      result = 1i64;
      break;
    case ET_PLAYER_CORPSE:
      result = 2i64;
      break;
    case ET_ITEM:
      result = 3i64;
      break;
    case ET_MISSILE:
      result = 4i64;
      break;
    case ET_INVISIBLE:
      result = 5i64;
      break;
    case ET_SCRIPTMOVER:
      result = 6i64;
      break;
    case ET_SOUND:
      result = 7i64;
      break;
    case ET_FX:
      result = 8i64;
      break;
    case ET_LOOP_FX:
      result = 9i64;
      break;
    case ET_PRIMARY_LIGHT:
      result = 10i64;
      break;
    case ET_TURRET:
      result = 11i64;
      break;
    case ET_HELICOPTER:
      result = 12i64;
      break;
    case ET_PLANE:
      result = 13i64;
      break;
    case ET_VEHICLE:
      result = 14i64;
      break;
    case ET_VEHICLE_CORPSE:
      result = 15i64;
      break;
    case ET_VEHICLE_SPAWNER:
      result = 16i64;
      break;
    case ET_AGENT:
      result = 17i64;
      break;
    case ET_AGENT_CORPSE:
      result = 18i64;
      break;
    case ET_ACTOR:
      result = 19i64;
      break;
    case ET_ACTOR_SPAWNER:
      result = 20i64;
      break;
    case ET_ACTOR_CORPSE:
      result = 21i64;
      break;
    case ET_PHYSICS_CHILD:
      result = 22i64;
      break;
    case ET_BEAM:
      result = 23i64;
      break;
    case ET_CLIENT_CHARACTER:
      result = 24i64;
      break;
    case ET_RAGDOLL_CONSTRAINT:
      result = 25i64;
      break;
    case ET_PHYSICS_VOLUME:
      result = 26i64;
      break;
    case ET_COVERWALL:
      result = 27i64;
      break;
    case ET_INFO_VOLUME_GRAPPLE:
      result = 28i64;
      break;
    default:
      result = 29i64;
      break;
  }
  return result;
}

/*
==============
MSG_GetPlatformSignature
==============
*/
__int64 MSG_GetPlatformSignature()
{
  if ( !s_msgSignatureGenerated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5974, ASSERT_TYPE_ASSERT, "(s_msgSignatureGenerated)", (const char *)&queryFormat, "s_msgSignatureGenerated") )
    __debugbreak();
  return s_msgSignature;
}

/*
==============
MSG_GetStateFieldListForEntityType
==============
*/
const NetFieldList *MSG_GetStateFieldListForEntityType(const entityType_s eType)
{
  entityType_s v1; 

  v1 = ET_EVENTS;
  if ( eType < ET_EVENTS )
    v1 = eType;
  return g_newEntityStateNetFieldList[v1];
}

/*
==============
MSG_SetupNetFieldListsForGame
==============
*/
void MSG_SetupNetFieldListsForGame(const char *const gameType)
{
  const char *NetFieldListsNameForGameType; 
  const NetFieldList *NetFieldList; 
  const NetFieldList *v4; 
  unsigned int count; 
  __int64 v6; 
  const NetField *array; 

  NetFieldListsNameForGameType = MSG_GetNetFieldListsNameForGameType(gameType);
  Com_Printf(25, "MSG_SetupNetFieldListsForGame( %s ): choose netfield lists '%s'\n", gameType, NetFieldListsNameForGameType);
  g_newEntityStateNetFieldList[0] = MSG_GetNetFieldList(gameType, NetFieldList_ID_generalStateFields);
  g_newEntityStateNetFieldList[1] = MSG_GetNetFieldList(gameType, NetFieldList_ID_playerEntityStateFields);
  g_newEntityStateNetFieldList[2] = MSG_GetNetFieldList(gameType, NetFieldList_ID_corpseEntityStateFields);
  g_newEntityStateNetFieldList[3] = MSG_GetNetFieldList(gameType, NetFieldList_ID_itemEntityStateFields);
  g_newEntityStateNetFieldList[4] = MSG_GetNetFieldList(gameType, NetFieldList_ID_missileEntityStateFields);
  g_newEntityStateNetFieldList[5] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[6] = MSG_GetNetFieldList(gameType, NetFieldList_ID_scriptMoverStateFields);
  g_newEntityStateNetFieldList[7] = MSG_GetNetFieldList(gameType, NetFieldList_ID_soundEntityStateFields);
  g_newEntityStateNetFieldList[8] = MSG_GetNetFieldList(gameType, NetFieldList_ID_fxStateFields);
  g_newEntityStateNetFieldList[9] = MSG_GetNetFieldList(gameType, NetFieldList_ID_loopFxEntityStateFields);
  g_newEntityStateNetFieldList[10] = MSG_GetNetFieldList(gameType, NetFieldList_ID_primaryLightFields);
  g_newEntityStateNetFieldList[11] = MSG_GetNetFieldList(gameType, NetFieldList_ID_turretStateFields);
  g_newEntityStateNetFieldList[12] = MSG_GetNetFieldList(gameType, NetFieldList_ID_helicopterEntityStateFields);
  g_newEntityStateNetFieldList[13] = MSG_GetNetFieldList(gameType, NetFieldList_ID_planeStateFields);
  g_newEntityStateNetFieldList[14] = MSG_GetNetFieldList(gameType, NetFieldList_ID_vehicleEntityStateFields);
  g_newEntityStateNetFieldList[15] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[16] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[17] = MSG_GetNetFieldList(gameType, NetFieldList_ID_agentEntityStateFields);
  g_newEntityStateNetFieldList[18] = MSG_GetNetFieldList(gameType, NetFieldList_ID_agentCorpseEntityStateFields);
  g_newEntityStateNetFieldList[19] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[20] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[21] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[22] = MSG_GetNetFieldList(gameType, NetFieldList_ID_physicsChildEntityStateFields);
  g_newEntityStateNetFieldList[23] = MSG_GetNetFieldList(gameType, NetFieldList_ID_beamEntityStateFields);
  g_newEntityStateNetFieldList[24] = MSG_GetNetFieldList(gameType, NetFieldList_ID_scriptCharacterStateFields);
  g_newEntityStateNetFieldList[25] = MSG_GetNetFieldList(gameType, NetFieldList_ID_ragdollConstraintStateFields);
  g_newEntityStateNetFieldList[26] = MSG_GetNetFieldList(gameType, NetFieldList_ID_physicsVolumeEntityStateFields);
  g_newEntityStateNetFieldList[27] = MSG_GetNetFieldList(gameType, NetFieldList_ID_coverWallEntityStateFields);
  g_newEntityStateNetFieldList[28] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  g_newEntityStateNetFieldList[29] = MSG_GetNetFieldList(gameType, NetFieldList_ID_eventEntityStateFields);
  g_newNetFieldList[0] = MSG_GetNetFieldList(gameType, NetFieldList_ID_clientStateFields);
  g_newNetFieldList[1] = MSG_GetNetFieldList(gameType, NetFieldList_ID_agentStateFields);
  g_newNetFieldList[2] = MSG_GetNetFieldList(gameType, NetFieldList_ID_playerStateFields);
  g_newNetFieldList[3] = MSG_GetNetFieldList(gameType, NetFieldList_ID_objectiveFields);
  g_newNetFieldList[4] = MSG_GetNetFieldList(gameType, NetFieldList_ID_headIconFields);
  g_newNetFieldList[5] = MSG_GetNetFieldList(gameType, NetFieldList_ID_headIconExtendedFields);
  g_newNetFieldList[6] = MSG_GetNetFieldList(gameType, NetFieldList_ID_targetMarkerGroupFields);
  g_newNetFieldList[10] = MSG_GetNetFieldList(gameType, NetFieldList_ID_calloutMarkerPingFields);
  g_newNetFieldList[7] = MSG_GetNetFieldList(gameType, NetFieldList_ID_hudElemFields);
  g_newNetFieldList[8] = MSG_GetNetFieldList(gameType, NetFieldList_ID_entityStateFields);
  NetFieldList = MSG_GetNetFieldList(gameType, NetFieldList_ID_mlgSpectatorFields);
  v4 = g_newEntityStateNetFieldList[1];
  g_newNetFieldList[9] = NetFieldList;
  truncate_cast<short,int>(-4);
  count = v4->count;
  v6 = 0i64;
  if ( count )
  {
    array = v4->array;
    while ( array[v6].offset != 28 || array[v6].bits != -39 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= count )
        goto LABEL_6;
    }
    MSG_SetUsingHighPrecisionPlayerOrigin(1);
  }
  else
  {
LABEL_6:
    MSG_SetUsingHighPrecisionPlayerOrigin(0);
  }
}

/*
==============
MSG_SetupSnapInfoForEntityType
==============
*/
void MSG_SetupSnapInfoForEntityType(const entityType_s entType, SnapshotInfo *const outSnapInfo)
{
  __int64 v4; 
  __int64 v5; 

  if ( !outSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4640, ASSERT_TYPE_ASSERT, "( outSnapInfo )", (const char *)&queryFormat, "outSnapInfo") )
    __debugbreak();
  if ( entType > ET_EVENTS )
  {
    LODWORD(v4) = entType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4641, ASSERT_TYPE_ASSERT, "( entType ) <= ( ET_EVENTS )", "entType not in [0, ET_EVENTS]\n\t%u not in [0, %u]", v4, 29) )
      __debugbreak();
  }
  if ( (unsigned __int16)entType >= ET_COUNT )
  {
    LODWORD(v5) = 30;
    LODWORD(v4) = entType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4642, ASSERT_TYPE_ASSERT, "(unsigned)( entType ) < (unsigned)( ( sizeof( *array_counter( orderInfo.entState ) ) + 0 ) )", "entType doesn't index ARRAY_COUNT( orderInfo.entState )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  outSnapInfo->fieldChangesCount = 68;
  outSnapInfo->fieldChanges = orderInfo.entState[entType];
}

/*
==============
MSG_SetupSnapInfoForNetfieldType
==============
*/
void MSG_SetupSnapInfoForNetfieldType(const netFieldTypes_t fieldType, SnapshotInfo *const outSnapInfo)
{
  bool v4; 
  __int64 v5; 

  if ( !outSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4581, ASSERT_TYPE_ASSERT, "( outSnapInfo )", (const char *)&queryFormat, "outSnapInfo") )
    __debugbreak();
  switch ( fieldType )
  {
    case NET_FIELD_TYPE_FIRST:
      outSnapInfo->fieldChangesCount = 118;
      outSnapInfo->fieldChanges = orderInfo.clientState;
      break;
    case NET_FIELD_TYPE_AGENT_STATE:
      outSnapInfo->fieldChangesCount = 90;
      outSnapInfo->fieldChanges = orderInfo.agentState;
      break;
    case NET_FIELD_TYPE_PLAYERSTATE:
      outSnapInfo->fieldChangesCount = 575;
      outSnapInfo->fieldChanges = orderInfo.playerState;
      break;
    case NET_FIELD_TYPE_OBJECTIVE:
      outSnapInfo->fieldChangesCount = 47;
      outSnapInfo->fieldChanges = orderInfo.objective;
      break;
    case NET_FIELD_TYPE_HEAD_ICON:
      outSnapInfo->fieldChangesCount = 6;
      outSnapInfo->fieldChanges = orderInfo.headIcon;
      break;
    case NET_FIELD_TYPE_HEAD_ICON_EXTENDED_DATA:
      outSnapInfo->fieldChangesCount = 5;
      outSnapInfo->fieldChanges = orderInfo.headIconExtendedData;
      break;
    case NET_FIELD_TYPE_TARGET_MARKER:
      outSnapInfo->fieldChangesCount = 62;
      outSnapInfo->fieldChanges = orderInfo.targetMarkers;
      break;
    case NET_FIELD_TYPE_HUDELEMS:
      outSnapInfo->fieldChangesCount = 46;
      outSnapInfo->fieldChanges = orderInfo.hudElem;
      break;
    case NET_FIELD_TYPE_ENTITY_STATE:
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4619, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid call to MSG_SetupSnapInfoForNetfieldType. Use MSG_SetupSnapInfoForEntityType instead.\n");
      goto LABEL_17;
    case NET_FIELD_TYPE_MLG_SPECTATOR:
      outSnapInfo->fieldChangesCount = 55;
      outSnapInfo->fieldChanges = orderInfo.mlgSpectator;
      break;
    case NET_FIELD_TYPE_CALLOUT_MARKER_PING:
      outSnapInfo->fieldChangesCount = 8;
      outSnapInfo->fieldChanges = orderInfo.calloutMarkers;
      break;
    default:
      LODWORD(v5) = fieldType;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4632, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown netfield type %d\n", v5);
LABEL_17:
      if ( v4 )
        __debugbreak();
      break;
  }
}

/*
==============
MSG_ShouldSendEntityField
==============
*/
bool MSG_ShouldSendEntityField(const SnapshotInfo *const snapInfo, const entityState_t *from, const entityState_t *to, const NetField *field)
{
  int bits; 
  bool result; 
  bool v6; 
  __int64 offset; 
  int size; 
  char *v9; 
  __int128 *v10; 
  unsigned int v11; 
  int v14; 

  bits = field->bits;
  switch ( field->bits )
  {
    case 0xFF94:
    case 0xFFAD:
    case 0xFFAE:
    case 0xFFAF:
    case 0xFFB0:
    case 0xFFB1:
    case 0xFFB2:
      if ( !snapInfo->entJustUnlinked )
        goto LABEL_4;
      result = 1;
      break;
    case 0xFF95:
    case 0xFF96:
    case 0xFF97:
    case 0xFF98:
    case 0xFF99:
    case 0xFF9A:
    case 0xFF9B:
    case 0xFF9C:
    case 0xFF9D:
    case 0xFF9E:
    case 0xFF9F:
    case 0xFFA0:
    case 0xFFA1:
    case 0xFFA2:
    case 0xFFA3:
    case 0xFFA4:
    case 0xFFA5:
    case 0xFFA6:
    case 0xFFA7:
    case 0xFFA8:
    case 0xFFA9:
    case 0xFFAA:
    case 0xFFAB:
    case 0xFFAC:
LABEL_4:
      switch ( field->bits )
      {
        case 0xFF94:
        case 0xFFAD:
        case 0xFFAE:
        case 0xFFAF:
          v6 = (*(_DWORD *)&to->clientLinkInfo & 0x7FF) == 0;
          break;
        case 0xFFB1:
          if ( (*(_DWORD *)&to->clientLinkInfo & 0x7FF) == 0 )
            goto $LN3_2;
          v6 = to->eType == ET_PLAYER;
          break;
        default:
          goto $LN3_2;
      }
      if ( v6 )
        goto $LN3_2;
      result = 0;
      break;
    default:
$LN3_2:
      offset = field->offset;
      size = field->size;
      v9 = (char *)from + offset;
      v10 = (__int128 *)((char *)&to->number + offset);
      v11 = abs32(size);
      if ( v11 > 0x10 )
        goto LABEL_13;
      _XMM1 = *v10;
      __asm { vpcmpeqb xmm1, xmm1, xmmword ptr [r10] }
      v14 = (1 << v11) - 1;
      __asm { vpmovmskb eax, xmm1 }
      if ( (v14 & _EAX) == v14 )
        result = 0;
      else
LABEL_13:
        result = !MSG_ValuesAreEqualPost(v9, v10, bits, size);
      break;
  }
  return result;
}

/*
==============
MSG_ShouldSendPSField
==============
*/
bool MSG_ShouldSendPSField(const SnapshotInfo *snapInfo, bool sendOriginAndVel, bool sendVehicleState, const playerState_s *ps, const playerState_s *oldPs, const NetField *field)
{
  unsigned __int8 changeHints; 
  bool IsSpectatingOrSpectator; 
  bool v11; 
  __int16 viewlocked_entNum; 
  __int64 offset; 
  char *v14; 
  __int128 *v15; 
  unsigned int v16; 
  int v19; 
  int pm_type; 

  if ( field->bits != -87 )
  {
    if ( !snapInfo->archived )
    {
      changeHints = field->changeHints;
      switch ( changeHints )
      {
        case 3u:
          return sendOriginAndVel;
        case 4u:
          return sendVehicleState;
        case 7u:
          if ( BG_IsSpectatingOrSpectator(ps) )
          {
            IsSpectatingOrSpectator = BG_IsSpectatingOrSpectator(oldPs);
            goto LABEL_10;
          }
          return 0;
      }
    }
    goto $if_changed;
  }
  v11 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&oldPs->eFlags, ACTIVE, 2u);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 2u) != v11 )
    return 1;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, (POtherFlagsMP)33) )
  {
    IsSpectatingOrSpectator = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&oldPs->otherFlags, (POtherFlagsMP)33);
    goto LABEL_10;
  }
  if ( !snapInfo->archived )
  {
    viewlocked_entNum = ps->viewlocked_entNum;
    if ( viewlocked_entNum != 2047 )
    {
      if ( viewlocked_entNum != oldPs->viewlocked_entNum )
        return 1;
      goto $if_changed;
    }
    pm_type = ps->pm_type;
    if ( pm_type == 6 )
    {
      if ( oldPs->pm_type != 6 )
        return 1;
      goto $if_changed;
    }
    if ( pm_type != 1 && (ps->linkFlags.m_flags[0] & 4) == 0 )
    {
      if ( BG_IsUfoViewmodel(ps) )
      {
        IsSpectatingOrSpectator = BG_IsUfoViewmodel(oldPs);
      }
      else
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
          goto $if_changed;
        if ( BG_ContextMount_IsActive(ps) )
        {
          IsSpectatingOrSpectator = BG_ContextMount_IsActive(oldPs);
        }
        else
        {
          if ( !BG_IsPlayerInExecution(ps) )
            return 0;
          IsSpectatingOrSpectator = BG_IsPlayerInExecution(oldPs);
        }
      }
LABEL_10:
      if ( !IsSpectatingOrSpectator )
        return 1;
    }
  }
$if_changed:
  offset = field->offset;
  v14 = (char *)oldPs + offset;
  v15 = (__int128 *)((char *)&ps->commandTime + offset);
  v16 = abs16(field->size);
  if ( v16 > 0x10 )
    return !MSG_ValuesAreEqualPost(v14, v15, field->bits, field->size);
  _XMM1 = *v15;
  __asm { vpcmpeqb xmm1, xmm1, xmmword ptr [r10] }
  v19 = 1 << v16;
  __asm { vpmovmskb eax, xmm1 }
  return ((v19 - 1) & _EAX) != v19 - 1 && !MSG_ValuesAreEqualPost(v14, v15, field->bits, field->size);
}

/*
==============
MSG_WriteAnimData
==============
*/
void MSG_WriteAnimData(msg_t *msg, const int *fromF, const int *toF)
{
  unsigned __int16 v6; 
  unsigned int MinBitCountForNum; 
  unsigned int v8; 
  bool IsEnabled; 
  unsigned int v10; 
  unsigned int v11; 
  msg_t *v12; 

  if ( (*(_BYTE *)toF & 1) == 0 )
  {
    IsEnabled = PlayerASM_IsEnabled();
    MSG_WriteBit0(msg);
    v10 = ((unsigned int)*fromF >> 1) & 3;
    v11 = ((unsigned int)*toF >> 1) & 3;
    if ( IsEnabled )
    {
      if ( v10 == v11 )
      {
        MSG_WriteBit0(msg);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, ((unsigned int)*toF >> 1) & 3, 2u);
      }
      if ( (((unsigned int)*toF >> 3) & 0x1FFF | *((_WORD *)toF + 1) & 0x2000) == (((unsigned int)*fromF >> 3) & 0x1FFF | *((_WORD *)fromF + 1) & 0x2000) )
      {
        MSG_WriteBit0(msg);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, (*toF & 0xFFF8 | (unsigned __int64)(((unsigned int)*toF >> 13) & 0x10000)) >> 3, 0xEu);
      }
      v12 = msg;
      if ( (*toF & 0x1FFF0000 | ((unsigned int)*toF >> 1) & 0x20000000) != (*fromF & 0x1FFF0000 | ((unsigned int)*fromF >> 1) & 0x20000000) )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, (*toF & 0x1FFF0000 | (unsigned __int64)(((unsigned int)*toF >> 1) & 0x20000000)) >> 16, 0xEu);
        return;
      }
    }
    else
    {
      if ( v11 == v10 )
      {
        MSG_WriteBit0(msg);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, ((unsigned int)*toF >> 1) & 3, 2u);
      }
      if ( ((*toF ^ *fromF) & 0x1FFE000) != 0 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, ((unsigned int)*toF >> 13) & 0xFFF, 0xCu);
      }
      else
      {
        MSG_WriteBit0(msg);
      }
      v12 = msg;
      if ( ((*toF ^ *fromF) & 0x1FF8) != 0 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, ((unsigned int)*toF >> 3) & 0x3FF, 0xAu);
        return;
      }
    }
    MSG_WriteBit0(v12);
    return;
  }
  MSG_WriteBit1(msg);
  if ( ((*toF ^ *fromF) & 0xFC0000) != 0 )
  {
    MSG_WriteBit1(msg);
    MSG_WriteBits(msg, ((unsigned int)*toF >> 18) & 0x3F, 6u);
  }
  else
  {
    MSG_WriteBit0(msg);
  }
  v6 = s_animStateSnapData.animStateCount[((unsigned int)*toF >> 18) & 0x3F];
  if ( v6 )
  {
    if ( ((*fromF ^ *toF) & 0x7FE) != 0 )
    {
      MinBitCountForNum = GetMinBitCountForNum(v6);
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, ((unsigned int)*toF >> 1) & 0x3FF, MinBitCountForNum);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
    if ( ((*fromF ^ *toF) & 0x3F800) != 0 )
    {
      v8 = GetMinBitCountForNum(s_animStateSnapData.animEntryCount[((unsigned __int64)*(unsigned int *)toF >> 18) & 0x3F][((unsigned __int64)*(unsigned int *)toF >> 1) & 0x3FF]);
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, ((unsigned int)*toF >> 11) & 0x7F, v8);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
  }
}

/*
==============
MSG_WriteDeltaAgent
==============
*/
void MSG_WriteDeltaAgent(SnapshotInfo *snapInfo, msg_t *msg, const int time, const agentState_s *from, const agentState_s *to, int writeIndex, int force)
{
  unsigned int indexBits; 
  const NetFieldList *v12; 
  unsigned int v13; 
  int numFields; 
  NetField *stateFields; 
  int skippedFieldBits; 
  char v17[256]; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4362, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( !from )
  {
    from = (const agentState_s *)v17;
    memset_0(v17, 0, 0xFCui64);
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 93, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_gameData.m_agentBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 94, ASSERT_TYPE_ASSERT, "(ms_gameData.m_agentBits > 0)", (const char *)&queryFormat, "ms_gameData.m_agentBits > 0") )
    __debugbreak();
  indexBits = ComCharacterLimits::ms_gameData.m_agentBits;
  if ( to )
  {
    v12 = g_newNetFieldList[1];
    snapInfo->packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE;
    snapInfo->fieldChangesCount = 90;
    skippedFieldBits = v12->skippedNetfieldBits;
    stateFields = (NetField *)v12->array;
    numFields = v12->count;
    snapInfo->fieldChanges = orderInfo.agentState;
    v13 = MSG_WriteDeltaStruct(snapInfo, msg, time, (const unsigned __int8 *)from, (const unsigned __int8 *)to, force, writeIndex, numFields, indexBits, 2, stateFields, skippedFieldBits, NULL);
    if ( v13 && !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Agent state delta for agent %i - %i bits\n", (unsigned int)to->entityNum, v13);
  }
  else
  {
    if ( !writeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4374, ASSERT_TYPE_ASSERT, "(writeIndex)", (const char *)&queryFormat, "writeIndex") )
      __debugbreak();
    MSG_WriteEntityRemoval(snapInfo, msg, (const unsigned __int8 *)from, indexBits, 2, NULL, 1);
  }
}

/*
==============
MSG_WriteDeltaAngleShort
==============
*/
void MSG_WriteDeltaAngleShort(msg_t *msg, const __int16 from, const __int16 to)
{
  int v4; 
  int v5; 
  int v6; 

  v4 = to;
  v5 = to - from;
  v6 = abs32(v5);
  if ( v6 >= 4096 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteShort(msg, v4);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteBool(msg, v5 < 0);
    MSG_WriteBits(msg, v6, 0xCu);
  }
}

/*
==============
MSG_WriteDeltaArchivedEntity
==============
*/
void MSG_WriteDeltaArchivedEntity(SnapshotInfo *snapInfo, msg_t *msg, const int time, const entityState_t *from, const entityState_t *to, const char *fromClientMask, const char *toClientMask, const unsigned int clientMaskSize)
{
  bool v12; 
  bool v13; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4234, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( !snapInfo->archived && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4235, ASSERT_TYPE_ASSERT, "( snapInfo->archived )", (const char *)&queryFormat, "snapInfo->archived") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4236, ASSERT_TYPE_ASSERT, "( to != 0 )", (const char *)&queryFormat, "to != NULL") )
    __debugbreak();
  snapInfo->packetEntityType = MSG_GetPacketEntityTypeForEType((const entityType_s)to->eType);
  if ( from )
    SV_MsgMP_ValidateEntityState(from);
  SV_MsgMP_ValidateEntityState(to);
  if ( snapInfo->sendNetfieldLoDBit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4256, ASSERT_TYPE_ASSERT, "( snapInfo->sendNetfieldLoDBit == false )", (const char *)&queryFormat, "snapInfo->sendNetfieldLoDBit == false") )
    __debugbreak();
  if ( SV_SnapshotMP_GetNewEntityLoD(snapInfo, to->number) != NetFieldLoD_High && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4257, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_GetNewEntityLoD( snapInfo, to->number ) == NetFieldLoD_High )", (const char *)&queryFormat, "SV_SnapshotMP_GetNewEntityLoD( snapInfo, to->number ) == NetFieldLoD_High") )
    __debugbreak();
  if ( SV_SnapshotMP_GetOldEntityLoD(snapInfo, to->number) != NetFieldLoD_High && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4258, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_GetOldEntityLoD( snapInfo, to->number ) == NetFieldLoD_High )", (const char *)&queryFormat, "SV_SnapshotMP_GetOldEntityLoD( snapInfo, to->number ) == NetFieldLoD_High") )
    __debugbreak();
  v12 = !snapInfo->fromBaseline && (*(_DWORD *)&to->clientLinkInfo & 0x7FF) == 0 && (*(_DWORD *)&from->clientLinkInfo & 0x7FF) != 0;
  snapInfo->entJustUnlinked = v12;
  MSG_WriteEntityDeltaForEType(snapInfo, msg, time, to->eType, from, to, NULL, 1);
  v13 = memcmp_0(fromClientMask, toClientMask, clientMaskSize) != 0;
  MSG_WriteBool(msg, v13);
  if ( v13 )
    MSG_WriteData(msg, toClientMask, clientMaskSize);
}

/*
==============
MSG_WriteDeltaArchivedWeaponMapEntry
==============
*/
void MSG_WriteDeltaArchivedWeaponMapEntry(SnapshotInfo *snapInfo, msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, const WeaponMapEntry *to)
{
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5854, ASSERT_TYPE_ASSERT, "(snapInfo)", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5855, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5856, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  MSG_WriteWeaponMapEntry_Index(msg, weaponMapIndex);
  if ( from && !memcmp_0(&from->weapon, &to->weapon, 0x3Cui64) )
  {
    MSG_WriteBit1(msg);
  }
  else
  {
    MSG_WriteBit0(msg);
    MSG_WriteWeapon(msg, &to->weapon);
  }
}

/*
==============
MSG_WriteDeltaBit
==============
*/

void __fastcall MSG_WriteDeltaBit(msg_t *const msg)
{
  MSG_WriteBit1(msg);
}

/*
==============
MSG_WriteDeltaClient
==============
*/
void MSG_WriteDeltaClient(SnapshotInfo *snapInfo, msg_t *msg, const int time, const clientState_t *from, const clientState_t *to, int writeIndex, int force)
{
  unsigned int indexBits; 
  int skippedFieldBits; 
  unsigned int numFields; 
  const NetField *stateFields; 
  unsigned int v14; 
  char v16[416]; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4300, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  indexBits = ComCharacterLimits::GetClientBits();
  if ( !from )
  {
    from = (const clientState_t *)v16;
    memset_0(v16, 0, 0x198ui64);
  }
  snapInfo->packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT;
  if ( to )
  {
    skippedFieldBits = g_newNetFieldList[0]->skippedNetfieldBits;
    numFields = g_newNetFieldList[0]->count;
    stateFields = g_newNetFieldList[0]->array;
    if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4581, ASSERT_TYPE_ASSERT, "( outSnapInfo )", (const char *)&queryFormat, "outSnapInfo") )
      __debugbreak();
    snapInfo->fieldChanges = orderInfo.clientState;
    snapInfo->fieldChangesCount = 118;
    v14 = MSG_WriteDeltaStruct(snapInfo, msg, time, (const unsigned __int8 *)from, (const unsigned __int8 *)to, force, writeIndex, numFields, indexBits, 4, stateFields, skippedFieldBits, NULL);
    if ( v14 && !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Client state delta for client %i took %i bits\n", (unsigned int)to->clientIndex, v14);
  }
  else
  {
    if ( !writeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4315, ASSERT_TYPE_ASSERT, "(writeIndex)", (const char *)&queryFormat, "writeIndex") )
      __debugbreak();
    MSG_WriteEntityRemoval(snapInfo, msg, (const unsigned __int8 *)from, indexBits, 4, NULL, 1);
  }
}

/*
==============
MSG_WriteDeltaEntityLoD
==============
*/
void MSG_WriteDeltaEntityLoD(SnapshotInfo *snapInfo, msg_t *msg, const clientLoDInfo_t *fromLoD, const EntityLoDs *entityLoDBits, const int clientIndex)
{
  const EntityLoDs *v5; 
  int ClientBits; 
  int UsedBitCount; 
  __int64 v11; 
  char *v12; 
  __int64 v13; 
  int v14; 

  v5 = entityLoDBits;
  if ( !entityLoDBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4409, ASSERT_TYPE_ASSERT, "( entityLoDBits != nullptr )", (const char *)&queryFormat, "entityLoDBits != nullptr") )
    __debugbreak();
  MSG_WriteBit1(msg);
  ClientBits = ComCharacterLimits::GetClientBits();
  MSG_WriteEntityIndex(snapInfo, msg, clientIndex, ClientBits);
  UsedBitCount = MSG_GetUsedBitCount(msg);
  MSG_WriteBit1(msg);
  v11 = 0i64;
  v12 = (char *)((char *)fromLoD - (char *)v5);
  v13 = 64i64;
  do
  {
    if ( fromLoD )
      v14 = *(unsigned int *)((char *)&v5->array[1] + (_QWORD)v12);
    else
      v14 = -1;
    if ( v14 == v5->array[0] )
    {
      MSG_WriteBit0(msg);
    }
    else
    {
      MSG_WriteBit1(msg);
      MSG_WriteLong(msg, v5->array[0]);
      v11 = 1i64;
    }
    v5 = (const EntityLoDs *)((char *)v5 + 4);
    --v13;
  }
  while ( v13 );
  if ( !v11 )
  {
    msg->bit = UsedBitCount;
    msg->cursize = (UsedBitCount + 7) >> 3;
    MSG_WriteBit0(msg);
  }
}

/*
==============
MSG_WriteDeltaField
==============
*/
char MSG_WriteDeltaField(SnapshotInfo *snapInfo, msg_t *msg, const int time, const unsigned __int8 *from, const unsigned __int8 *to, const NetField *field, const int fieldNum, const bool forceSend, const bool xorValue, const int lastChangedField, const int skippedFieldBits, const bool sendSkippedFields, ServerEntityHeader *const outHeader)
{
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  bool archived; 
  __int64 offset; 
  const unsigned __int8 *v23; 
  const unsigned __int8 *v24; 
  float *v25; 
  unsigned int v26; 
  int v28; 
  PacketEntityType_e packetEntityType; 
  bool fromBaseline; 
  const char *EntityTypeString; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int bits; 
  msg_t *v39; 
  char OriginExtraPrecisionBitsForField; 
  bool v41; 
  float v42; 
  int v45; 
  float v46; 
  unsigned int v47; 
  int v48; 
  int v49; 
  int v50; 
  signed int v51; 
  __int64 v52; 
  __int16 v53; 
  int v54; 
  int v55; 
  int v56; 
  signed int v57; 
  float v58; 
  float v59; 
  int v63; 
  int v64; 
  __int16 *v65; 
  int v66; 
  unsigned int v67; 
  __int64 v70; 
  __int64 v71; 
  int v72; 
  float v73; 
  char v74; 
  __int16 v75; 
  __int64 v76; 
  int v77; 
  __int64 v78; 
  int v79; 
  unsigned int MinBitCountForNum; 
  __int16 size; 
  __int64 v82; 
  int v83; 
  float v84; 
  float v85; 
  int v86; 
  unsigned int v87; 
  signed int v88; 
  __int16 v89; 
  __int64 v90; 
  __int64 v91; 
  const unsigned __int8 *v92; 
  const unsigned __int8 *v93; 
  float v94; 
  int RuntimeMapIndexBits; 
  __int64 v96; 
  __int16 v97; 
  float v98; 
  float v99; 
  unsigned int v100; 
  float v101; 
  int v104; 
  int v106; 
  bool v107; 
  float v108; 
  int v109; 
  float v110; 
  float v111; 
  float v112; 
  __int64 v114; 
  unsigned __int8 v115; 
  unsigned int BitsNeededForType; 
  __int64 v117; 
  unsigned int BitCount; 
  int v119; 
  __int64 v120; 
  unsigned int ClientAttachTagBits; 
  __int64 v122; 
  int EntityStateIndexBits; 
  float v124; 
  unsigned int v125; 
  unsigned int i; 
  __int64 v127; 
  int v128; 
  __int64 v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  const unsigned __int8 *v134; 
  int v135; 
  char *fmt; 
  __int64 oldValue; 
  __int64 dataBits; 
  int fromF; 
  int v141; 
  int v142; 
  int UsedBitCount; 
  __int64 v144; 
  ServerEntityHeader *v145; 
  const unsigned __int8 *v146; 
  vec3_t outQuatPacked; 
  char v148[32]; 
  char string[32]; 
  __int128 v150; 
  __int128 v151; 
  __int128 v152; 
  __int128 v153; 

  v141 = fieldNum;
  v145 = outHeader;
  fromF = time;
  UsedBitCount = 0;
  v142 = 0;
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2381, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2382, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2383, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2384, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2385, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !field && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2386, ASSERT_TYPE_ASSERT, "( field )", (const char *)&queryFormat, "field") )
    __debugbreak();
  archived = snapInfo->archived;
  if ( !archived )
    UsedBitCount = MSG_GetUsedBitCount(msg);
  offset = field->offset;
  v23 = &from[offset];
  v144 = 0i64;
  v24 = &to[offset];
  v25 = (float *)&v144;
  v146 = &to[offset];
  if ( xorValue )
    v25 = (float *)v23;
  *(_QWORD *)outQuatPacked.v = v25;
  if ( sendSkippedFields )
  {
    if ( skippedFieldBits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2413, ASSERT_TYPE_ASSERT, "( skippedFieldBits > 0 )", (const char *)&queryFormat, "skippedFieldBits > 0") )
      __debugbreak();
    if ( !forceSend )
    {
      v26 = abs16(field->size);
      if ( v26 <= 0x10 )
      {
        _XMM1 = *(_OWORD *)v23;
        __asm { vpcmpeqb xmm1, xmm1, xmmword ptr [rsi] }
        v28 = (1 << v26) - 1;
        __asm { vpmovmskb eax, xmm1 }
        if ( (v28 & _EAX) == v28 )
          return 0;
      }
      if ( MSG_ValuesAreEqualPost(v23, v24, field->bits, field->size) )
        return 0;
    }
    if ( field->changeHints == 1 )
    {
      packetEntityType = snapInfo->packetEntityType;
      if ( packetEntityType > ANALYZE_DATATYPE_ENTITYTYPE_TEMPENTITY || *((_WORD *)from + 4) == *((_WORD *)to + 4) )
      {
        fromBaseline = snapInfo->fromBaseline;
        if ( !fromBaseline || v141 )
        {
          MSG_PrintNetFieldValue(v25, field, string, 0x20ui64);
          MSG_PrintNetFieldValue(v24, field, v148, 0x20ui64);
          EntityTypeString = SV_GetEntityTypeString(packetEntityType);
          LODWORD(fmt) = fromBaseline;
          Com_PrintError(15, "Field %s changed for eType %s when we thought it never would (baseline = %d): from %s to %s\n", field->name, EntityTypeString, fmt, string, v148);
        }
      }
    }
    v34 = v141 - lastChangedField;
    if ( v141 - lastChangedField <= 0 )
    {
      LODWORD(oldValue) = v141 - lastChangedField;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1538, ASSERT_TYPE_ASSERT, "( ( numFieldsSkipped > 0 ) )", "( numFieldsSkipped ) = %i", oldValue) )
        __debugbreak();
    }
    if ( skippedFieldBits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1539, ASSERT_TYPE_ASSERT, "(skippedFieldBits > 0)", (const char *)&queryFormat, "skippedFieldBits > 0") )
      __debugbreak();
    archived = snapInfo->archived;
    if ( !*(_WORD *)&snapInfo->fromBaseline )
      SV_TrackNumFieldsSkipped((const PacketEntityType_e)snapInfo->packetEntityType, v34, v145, field);
    if ( skippedFieldBits == 1 )
    {
      if ( v34 > 1 )
      {
        v35 = (unsigned int)(v34 - 1);
        do
        {
          MSG_WriteBit0(msg);
          --v35;
        }
        while ( v35 );
      }
    }
    else if ( v34 != 1 )
    {
      MSG_WriteBit0(msg);
      v36 = v34 - 1;
      v37 = 1 << skippedFieldBits;
      if ( v36 >= (1 << skippedFieldBits) - 1 )
      {
        do
        {
          MSG_WriteBits(msg, -1i64, skippedFieldBits);
          v36 += 1 - v37;
        }
        while ( v36 >= v37 - 1 );
        v24 = v146;
        v25 = *(float **)outQuatPacked.v;
      }
      MSG_WriteBits(msg, v36, skippedFieldBits);
      goto LABEL_57;
    }
    MSG_WriteBit1(msg);
LABEL_57:
    if ( !archived )
      v142 = MSG_GetUsedBitCount(msg);
  }
  if ( !archived && !snapInfo->fromBaseline )
  {
    if ( (unsigned int)v141 >= snapInfo->fieldChangesCount )
      CrashReport_TriggerNow();
    Sys_InterlockedIncrement(&snapInfo->fieldChanges[v141]);
    archived = snapInfo->archived;
  }
  bits = field->bits;
  v153 = v14;
  v152 = v15;
  v151 = v16;
  v150 = v17;
  switch ( bits )
  {
    case -115:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2803, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v101 = *(float *)v24;
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 659, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      _XMM7 = 0i64;
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      v104 = (int)*(float *)&_XMM3 + 128;
      if ( (unsigned int)v104 > 0xFF )
      {
        MSG_WriteBit0(msg);
        __asm { vroundss xmm0, xmm7, xmm2, 1 }
        v106 = 1048570 - (int)(float)((float)(v101 - (float)(int)*(float *)&_XMM0) * -10.0);
        v107 = v106 <= 2097140;
        if ( (unsigned int)v106 > 0x1FFFF4 )
        {
          Com_PrintError(1, "MSG_WriteOriginPhysicsZ: Not enough range available for physics origin '%f''\n", v101);
          v107 = v106 <= 2097140;
        }
        if ( !v107 )
          v106 = 2097140;
        if ( v106 < 0 )
          v106 = 0;
        MSG_WriteBits(msg, v106, 0x15u);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, v104, 8u);
      }
      goto LABEL_386;
    case -114:
    case -113:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2793, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      MSG_WriteOriginPhysics(snapInfo, &snapInfo->mapCenter, msg, (__int16)bits, *(float *)v24, *v25);
      goto LABEL_386;
    case -112:
      v39 = msg;
      if ( ((*v24 ^ *(_BYTE *)v25) & 0x3F) == 0 )
        goto LABEL_384;
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, *(_DWORD *)v24 & 0x3F, 6u);
      goto LABEL_386;
    case -111:
      RuntimeMapIndexBits = BgWeaponMap::GetRuntimeMapIndexBits();
      MSG_WriteValue(msg, v25, v24, RuntimeMapIndexBits, field->size, field->name);
      goto LABEL_386;
    case -110:
      if ( ((*v24 ^ *(_BYTE *)v25) & 0x3F) != 0 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, *(_DWORD *)v24 & 0x3F, 6u);
      }
      else
      {
        MSG_WriteBit0(msg);
      }
      MSG_WriteBits(msg, (*(_DWORD *)v24 >> 6) & 1, 1u);
      MSG_WriteBits(msg, (*(_DWORD *)v24 >> 7) & 3, 2u);
      goto LABEL_386;
    case -109:
      if ( field->size != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2846, ASSERT_TYPE_ASSERT, "(field->size == 4)", (const char *)&queryFormat, "field->size == 4") )
        __debugbreak();
      v39 = msg;
      if ( !*(_DWORD *)v24 )
        goto LABEL_384;
      goto LABEL_94;
    case -108:
    case 0:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2500, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatCase(msg, (const int *)v25, (const int *)v24);
      goto LABEL_386;
    case -107:
      MSG_WriteAnimData(msg, (const int *)v25, (const int *)v24);
      goto LABEL_386;
    case -106:
    case -105:
    case -104:
    case -39:
    case -38:
    case -37:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2492, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField((__int16)bits);
      v41 = !snapInfo->highPrecisionOrigin;
      v42 = (float)(unsigned int)(1 << OriginExtraPrecisionBitsForField);
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      *(float *)&v45 = (float)(int)*(float *)&_XMM4 / v42;
      fromF = v45;
      if ( v41 && Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
      {
        MSG_WriteBit0(msg);
        v46 = *(float *)v24;
        if ( (__int16)bits == -104 || (__int16)bits == -37 )
        {
          v47 = MSG_GetOriginExtraPrecisionBitsForField((__int16)bits);
          MSG_WriteOriginExpGolomb(snapInfo, msg, 2, v47, v46, *(float *)&v45);
        }
        else
        {
          MSG_WriteOriginFloat(snapInfo, &snapInfo->mapCenter, msg, (__int16)bits, v46, *(float *)&v45);
        }
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteFloatCase(msg, &fromF, (const int *)v24);
      }
      goto LABEL_386;
    case -103:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2659, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v73 = *(float *)v24;
      v72 = SLODWORD(v73) / 50;
      if ( SLODWORD(v73) < 800 && LODWORD(v73) == 50 * v72 )
        goto LABEL_160;
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, SLODWORD(v73), 0x10u);
      goto LABEL_386;
    case -102:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2641, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v72 = *(_DWORD *)v24 / 250;
      if ( *(int *)v24 < 4000 && *(_DWORD *)v24 == 250 * v72 )
      {
LABEL_160:
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, v72, 4u);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, *(int *)v24, 0x10u);
      }
      goto LABEL_386;
    case -101:
      v52 = MSG_GetField(v24, field->size);
      v53 = truncate_cast<short,__int64>(v52);
      v39 = msg;
      if ( !v53 )
        goto LABEL_384;
      MSG_WriteBit1(msg);
      MSG_WriteShort(msg, v53);
      goto LABEL_386;
    case -100:
    case -79:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2608, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v59 = *(float *)v24;
      _XMM6 = 0i64;
      __asm
      {
        vroundss xmm3, xmm6, xmm2, 1
        vroundss xmm0, xmm6, xmm2, 1
      }
      v63 = (__int16)(int)*(float *)&_XMM0 - (__int16)(int)*(float *)&_XMM3;
      v64 = abs32(v63);
      v65 = g_commonAngleDeltas;
      v66 = 0;
      break;
    case -99:
      v54 = *(int *)v24;
      v55 = (int)*v25;
      v56 = (int)*(float *)v24;
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2574, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      if ( *(float *)&v54 != 0.0 || (fromF = v54, v54 == 0x80000000) )
      {
        MSG_WriteBit1(msg);
        fromF = v54;
        if ( v54 == 0x80000000 || (float)v56 != *(float *)&v54 || (v57 = v56 + 2048, (unsigned int)v57 > 0xFFF) )
        {
          MSG_WriteBit1(msg);
          MSG_WriteLong(msg, *(_DWORD *)v24 ^ *(_DWORD *)v25);
        }
        else
        {
          MSG_WriteBit0(msg);
          MSG_WriteBits(msg, v57 ^ (unsigned __int64)(v55 + 2048), 4u);
          MSG_WriteByte(msg, (__int64)(v57 ^ (unsigned __int64)(v55 + 2048)) >> 4);
        }
      }
      else
      {
        MSG_WriteBit0(msg);
      }
      v58 = *(float *)v24 + 2048.0;
      if ( (unsigned int)(int)v58 >= 0x1000 )
      {
        LODWORD(dataBits) = 4096;
        LODWORD(oldValue) = (int)v58;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2601, ASSERT_TYPE_ASSERT, "(unsigned)( *(float *)toF + (1<<(12-1)) ) < (unsigned)( 1 << 12 )", "*(float *)toF + HUDELEM_COORD_BIAS doesn't index 1 << HUDELEM_COORD_BITS\n\t%i not in [0, %i)", oldValue, dataBits) )
          __debugbreak();
      }
      goto LABEL_386;
    case -98:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2732, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v84 = *(float *)v24;
      v85 = *v25;
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 985, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      v86 = (LODWORD(v84) ^ LODWORD(v85)) & 0x3FFFFFFF;
      if ( !v86 || ((v86 - 1) & v86) != 0 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, SLODWORD(v84), 0x1Eu);
      }
      else
      {
        v87 = __lzcnt(v86);
        v88 = 31 - v87;
        if ( 31 - v87 > 0x1D )
        {
          LODWORD(dataBits) = 31 - v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "( ( changedBitIndex >= 0 && changedBitIndex < 30 ) )", "%s\n\t( changedBitIndex ) = %i", "( changedBitIndex >= 0 && changedBitIndex < 30 )", dataBits) )
            __debugbreak();
        }
        if ( v86 != 1 << v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1002, ASSERT_TYPE_ASSERT, "( ( ((oldFlags ^ newFlags) & ((1 << 30) - 1)) ^ (1 << changedBitIndex)) == 0 )", (const char *)&queryFormat, "( ((oldFlags ^ newFlags) & MASK_EFLAGS) ^ (1 << changedBitIndex)) == 0") )
          __debugbreak();
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, v88, 5u);
      }
      goto LABEL_386;
    case -97:
    case -74:
    case -70:
      size = field->size;
      if ( abs16(size) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2725, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
      {
        __debugbreak();
        size = field->size;
      }
      v82 = MSG_GetField(v24, size);
      v83 = truncate_cast<int,__int64>(v82);
      MSG_WriteDeltaTime(msg, fromF, v83);
      goto LABEL_386;
    case -96:
      v89 = field->size;
      if ( abs16(v89) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2739, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
      {
        __debugbreak();
        v89 = field->size;
      }
      v90 = MSG_GetField(v24, v89);
      v91 = truncate_cast<int,__int64>(v90);
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1018, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      if ( (_DWORD)v91 == 2046 )
        goto LABEL_181;
      MSG_WriteBit0(msg);
      if ( !(_DWORD)v91 )
        goto LABEL_181;
      MSG_WriteBit0(msg);
      MSG_WriteBits(msg, v91, 3u);
      MSG_WriteByte(msg, (int)v91 >> 3);
      goto LABEL_386;
    case -95:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2813, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        archived = snapInfo->archived;
      }
      v108 = *(float *)v24;
      if ( !archived )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending %i as playerstate timer value (%ims granularity)\n", v108, 100i64);
      MSG_WriteBits(msg, SLODWORD(v108) / 100, 7u);
      goto LABEL_386;
    case -94:
      v92 = from;
      v93 = to;
      MSG_WriteEvent(snapInfo, msg, from, to, field);
      goto LABEL_387;
    case -93:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2750, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v94 = *(float *)v24;
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1057, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      MSG_WriteLong(msg, SLODWORD(v94));
      goto LABEL_386;
    case -92:
    case -91:
    case -83:
    case -82:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2772, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      MSG_WriteOriginFloat(snapInfo, &snapInfo->mapCenter, msg, (__int16)bits, *(float *)v24, *v25);
      goto LABEL_386;
    case -90:
    case -81:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2783, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      v98 = *(float *)v24;
      v99 = *v25;
      v100 = MSG_GetOriginExtraPrecisionBitsForField((__int16)bits);
      MSG_WriteOriginExpGolomb(snapInfo, msg, 2, v100, v98, v99);
      goto LABEL_386;
    case -89:
      v48 = *(int *)v24;
      v49 = (int)*v25;
      v50 = (int)*(float *)v24;
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2514, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      if ( (float)v50 != *(float *)&v48 || (fromF = v48, v48 == 0x80000000) || (v51 = v50 + 4096, (unsigned int)v51 > 0x1FFF) )
      {
        v39 = msg;
LABEL_94:
        MSG_WriteBit1(v39);
        MSG_WriteLong(msg, *(_DWORD *)v24 ^ *(_DWORD *)v25);
      }
      else
      {
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, v51 ^ (unsigned __int64)(v49 + 4096), 5u);
        MSG_WriteByte(msg, (__int64)(v51 ^ (unsigned __int64)(v49 + 4096)) >> 5);
      }
      goto LABEL_386;
    case -88:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2560, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteLong(msg, *(_DWORD *)v24 ^ *(_DWORD *)v25);
      goto LABEL_386;
    case -87:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2618, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteAngle16(msg, *(float *)v24);
      goto LABEL_386;
    case -86:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2626, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v70 = (int)*(float *)&_XMM4;
      v71 = v70;
      if ( v70 < 0 )
        v71 = ~(__int64)(int)*(float *)&_XMM4;
      if ( 64 - (unsigned int)__lzcnt(v71) > (unsigned int)(v70 >= 0) + 5 )
        Com_PrintError(15, "MSG_WriteDeltaField: Not enough bits written for fontScale %f\n", *(float *)v24);
      MSG_WriteBits(msg, v70, 6u);
      goto LABEL_386;
    case -85:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2680, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toColor ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toColor )") )
        __debugbreak();
      v74 = *((_BYTE *)v25 + 3);
      if ( v74 == -1 )
      {
        if ( v24[3] )
          goto LABEL_173;
      }
      else if ( v74 || v24[3] != 0xFF )
      {
        goto LABEL_173;
      }
      if ( *(_WORD *)v25 == *(_WORD *)v24 && *((_BYTE *)v25 + 2) == v24[2] )
      {
LABEL_181:
        MSG_WriteBit1(msg);
        goto LABEL_386;
      }
LABEL_173:
      MSG_WriteBit0(msg);
      if ( *(_BYTE *)v25 == *v24 && *((_BYTE *)v25 + 1) == v24[1] && *((_BYTE *)v25 + 2) == v24[2] )
      {
        MSG_WriteBit1(msg);
      }
      else
      {
        MSG_WriteBit0(msg);
        MSG_WriteByte(msg, *v24);
        MSG_WriteByte(msg, v24[1]);
        MSG_WriteByte(msg, v24[2]);
      }
      MSG_WriteBits(msg, v24[3], 8u);
      goto LABEL_386;
    case -84:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2716, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteBits(msg, *(int *)v24, 0x1Du);
      goto LABEL_386;
    case -80:
    case -78:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2538, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteLong(msg, *(_DWORD *)v24);
      goto LABEL_386;
    case -77:
      v96 = MSG_GetField(v24, field->size);
      v97 = v96;
      if ( (unsigned __int64)(v96 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,__int64>(__int64)", "signed", (__int16)v96, "signed", v96) )
        __debugbreak();
      MSG_WriteValueNoXor(msg, v97, 8, field->name);
      goto LABEL_386;
    case -76:
      if ( abs16(field->size) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2824, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 2)", (const char *)&queryFormat, "abs( field->size ) == 2") )
      {
        __debugbreak();
        archived = snapInfo->archived;
      }
      v109 = *(__int16 *)v24 - *(__int16 *)v25;
      if ( !archived && !snapInfo->fromBaseline )
        SV_TrackMovementDirDelta(v109);
      if ( (int)abs32(v109) >= 8 )
      {
        MSG_WriteBit0(msg);
        MSG_WriteValue(msg, v25, v24, 8, field->size, field->name);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, v109 + 8, 4u);
      }
      goto LABEL_386;
    case -75:
      v75 = field->size;
      if ( abs16(v75) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2709, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
      {
        __debugbreak();
        v75 = field->size;
        archived = snapInfo->archived;
      }
      v76 = MSG_GetField(v24, v75);
      v77 = truncate_cast<int,__int64>(v76);
      v78 = MSG_GetField(v25, v75);
      v79 = v77 - truncate_cast<int,__int64>(v78);
      if ( (unsigned int)(v79 - 1) > 0xF )
      {
        if ( !archived && !snapInfo->fromBaseline )
          SV_TrackEventSeqFullSend(v79);
        MSG_WriteBit0(msg);
        MSG_WriteValue(msg, v25, v24, 8, v75, field->name);
      }
      else
      {
        if ( !archived && !snapInfo->fromBaseline )
          SV_TrackEventSeqDeltaSend(v79);
        MSG_WriteBit1(msg);
        MinBitCountForNum = GetMinBitCountForNum(0x10u);
        MSG_WriteBits(msg, v79 - 1, MinBitCountForNum);
      }
      goto LABEL_386;
    case -73:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_HINTSTRING);
      goto LABEL_386;
    case -72:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_LOCSTRING);
      goto LABEL_386;
    case -71:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_XMODEL);
      goto LABEL_386;
    case -69:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2860, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v110 = *(float *)v24;
      if ( (*(float *)v24 < 0.0 || v110 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2863, ASSERT_TYPE_ASSERT, "(0.f <= *newValue && *newValue <= 1.f)", "%s\n\tnetfield %s can't be serialized with bits %d, value %f is not within range\n", "0.f <= *newValue && *newValue <= 1.f", field->name, field->bits, v110) )
        __debugbreak();
      v111 = *(float *)v24;
      v112 = *v25;
      if ( *(float *)v24 < 0.0 || v111 > 1.0 )
      {
        __asm { vxorpd  xmm1, xmm1, xmm1 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2006, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( newValue ) && ( newValue ) <= ( 1.f )", "newValue not in [0.f, 1.f]\n\t%g not in [%g, %g]", v111, *(double *)&_XMM1, DOUBLE_1_0) )
          __debugbreak();
      }
      if ( v111 == 0.0 )
      {
        MSG_WriteBit0(msg);
        *(float *)&fromF = 0.0;
        v39 = msg;
LABEL_384:
        MSG_WriteBit0(v39);
      }
      else
      {
        MSG_WriteBit1(msg);
        v114 = QuantizeRange01ToByte(v111);
        v115 = QuantizeRange01ToByte(v112);
        MSG_WriteByte(msg, v114 ^ v115);
      }
      goto LABEL_386;
    case -68:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2870, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatByRangeAndBits(msg, v25, (const float *)v24, 10000.0, 0xEu);
      goto LABEL_386;
    case -67:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2877, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatByRangeAndBits(msg, v25, (const float *)v24, 5.0, 0xCu);
      goto LABEL_386;
    case -66:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2884, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatByRangeAndBits(msg, v25, (const float *)v24, 11.0, 0xEu);
      goto LABEL_386;
    case -65:
      if ( abs16(field->size) != 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3024, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( toBasis ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( toBasis )") )
        __debugbreak();
      if ( (float)((float)((float)(*(float *)v24 * *(float *)v24) + (float)(*((float *)v24 + 1) * *((float *)v24 + 1))) + (float)(*((float *)v24 + 2) * *((float *)v24 + 2))) > 1.0e-12 || (float)((float)((float)(*((float *)v24 + 3) * *((float *)v24 + 3)) + (float)(*((float *)v24 + 4) * *((float *)v24 + 4))) + (float)(*((float *)v24 + 5) * *((float *)v24 + 5))) > 1.0e-12 || (float)((float)((float)(*((float *)v24 + 6) * *((float *)v24 + 6)) + (float)(*((float *)v24 + 7) * *((float *)v24 + 7))) + (float)(*((float *)v24 + 8) * *((float *)v24 + 8))) > 1.0e-12 )
      {
        MSG_WriteBit1(msg);
        AxisToPackedQuat((const tmat33_t<vec3_t> *)v24, &outQuatPacked);
        MSG_WriteFloat(msg, outQuatPacked.v[0]);
        MSG_WriteFloat(msg, outQuatPacked.v[1]);
        MSG_WriteFloat(msg, outQuatPacked.v[2]);
      }
      else
      {
        MSG_WriteBit0(msg);
      }
      goto LABEL_386;
    case -64:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2898, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatByRangeAndBits(msg, v25, (const float *)v24, 90.0, 0xBu);
      goto LABEL_386;
    case -63:
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1696, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      BitsNeededForType = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VEHICLES);
      v117 = MSG_GetField(v24, field->size);
      MSG_WriteValueNoXor(msg, v117, BitsNeededForType + 7, field->name);
      goto LABEL_386;
    case -62:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_HEADICON);
      goto LABEL_386;
    case -61:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_SHOCK);
      goto LABEL_386;
    case -60:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_CLIENT_TAGS);
      goto LABEL_386;
    case -59:
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
      v122 = MSG_GetField(v24, field->size);
      MSG_WriteValueNoXor(msg, v122, ClientAttachTagBits + 11, field->name);
      goto LABEL_386;
    case -58:
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      BitCount = LerpEntityStateBeamScript::GetBitCount();
      goto LABEL_347;
    case -57:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_SUIT);
      goto LABEL_386;
    case -56:
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      BitCount = AgentAttachModelData::GetBitCount();
LABEL_347:
      v119 = BitCount;
      v120 = MSG_GetField(v24, field->size);
      MSG_WriteValueNoXor(msg, v120, v119, field->name);
      goto LABEL_386;
    case -55:
      EntityStateIndexBits = BgDynamicLimits::GetEntityStateIndexBits();
      goto LABEL_357;
    case -54:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_MATERIAL);
      goto LABEL_386;
    case -53:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_ANIM);
      goto LABEL_386;
    case -52:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_VISIONSET);
      goto LABEL_386;
    case -51:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_VFX);
      goto LABEL_386;
    case -50:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_MINIMAPICON);
      goto LABEL_386;
    case -49:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_OBJECTIVEICON);
      goto LABEL_386;
    case -48:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_LUI);
      goto LABEL_386;
    case -47:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_IMAGE);
      goto LABEL_386;
    case -46:
      EntityStateIndexBits = ComCharacterLimits::GetClientBits();
      goto LABEL_357;
    case -45:
      *(float *)&fromF = 0.0;
      MSG_WriteDeltaClientBitsKey(msg, &fromF, v25, v24);
      goto LABEL_386;
    case -44:
      EntityStateIndexBits = ComCharacterLimits::GetCharacterBits();
LABEL_357:
      MSG_WriteDynamicIndexField(msg, field, v24, EntityStateIndexBits);
      goto LABEL_386;
    case -43:
      v124 = *(float *)v24;
      v125 = *(_DWORD *)v24 >> 29;
      MSG_WriteBits(msg, v125, 3u);
      for ( i = 0; i < v125; ++i )
        MSG_WriteBits(msg, (unsigned __int64)(LODWORD(v124) & (unsigned int)(15 << (4 * i))) >> (4 * (unsigned __int8)i), 4u);
      goto LABEL_386;
    case -42:
      MSG_WriteNetConstString(msg, field, v24, NETCONSTSTRINGTYPE_CARRYOBJECT);
      goto LABEL_386;
    case -41:
      v127 = MSG_GetField(v24, field->size);
      if ( (v127 < 0 || (unsigned __int64)v127 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v127, "signed", v127) )
        __debugbreak();
      MSG_WriteBits(msg, (unsigned int)(v127 + 1), 0x12u);
      goto LABEL_386;
    case -40:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2891, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatByRangeAndBits(msg, v25, (const float *)v24, 20.0, 0xAu);
      goto LABEL_386;
    default:
      if ( (__int16)bits > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3058, ASSERT_TYPE_ASSERT, "(field->bits <= 32)", "%s\n\tFields must be less or equal to 32 bits. Enforced via MSG_CheckFields", "field->bits <= 32") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      if ( (__int16)bits < -50 )
      {
        LODWORD(oldValue) = (__int16)bits;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3063, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Missed a MSG_ case in MSG_WriteDeltaField - value is %i", oldValue) )
          __debugbreak();
      }
      v128 = field->size;
      v129 = MSG_GetField(v24, v128);
      v39 = msg;
      if ( !v129 )
        goto LABEL_384;
      MSG_WriteBit1(msg);
      MSG_WriteValue(msg, v25, v24, field->bits, v128, field->name);
      goto LABEL_386;
  }
  do
  {
    if ( *v65 == v64 )
    {
      MSG_WriteBit1(msg);
      if ( v63 >= 0 )
        MSG_WriteBit0(msg);
      else
        MSG_WriteBit1(msg);
      v67 = GetMinBitCountForNum(7u);
      MSG_WriteBits(msg, v66, v67);
      goto LABEL_386;
    }
    ++v66;
    ++v65;
  }
  while ( (__int64)v65 < (__int64)&unk_147EF2566 );
  MSG_WriteBit0(msg);
  if ( v64 && v64 < 4096 )
  {
    if ( !snapInfo->archived && !snapInfo->fromBaseline )
      SV_TrackAngleDeltaBits(v63);
    MSG_WriteBit1(msg);
    if ( v63 >= 0 )
      MSG_WriteBit0(msg);
    else
      MSG_WriteBit1(msg);
    MSG_WriteBits(msg, v64, 0xCu);
  }
  else
  {
    if ( !snapInfo->archived && !snapInfo->fromBaseline )
      SV_TrackAngleFullSend();
    MSG_WriteBit0(msg);
    MSG_WriteAngle16(msg, v59);
  }
LABEL_386:
  v92 = from;
  v93 = to;
LABEL_387:
  if ( !snapInfo->archived )
  {
    v130 = MSG_GetUsedBitCount(msg);
    v131 = v142;
    if ( !sendSkippedFields )
      v131 = UsedBitCount;
    v132 = v142 - UsedBitCount;
    v133 = v130 - v131;
    if ( !sendSkippedFields )
      v132 = 0;
    if ( snapInfo->fromBaseline )
    {
      v135 = v141;
    }
    else
    {
      v134 = v92;
      v135 = v141;
      SV_TrackFieldWritten(snapInfo->clientNum, (const PacketEntityType_e)snapInfo->packetEntityType, v141, v134, v93, v132, v133);
    }
    if ( v133 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3126, ASSERT_TYPE_ASSERT, "( dataBits > 0 )", (const char *)&queryFormat, "dataBits > 0") )
      __debugbreak();
    if ( snapInfo->clientNum == -1 )
      SV_BandwidthProfile_AddNetFieldToServerMsg(snapInfo, *(_WORD *)v93, v135, v132, v133);
    else
      SV_BandwidthProfile_AddNetFieldToSnapshot(snapInfo, v135, v132, v133);
  }
  return 1;
}

/*
==============
MSG_WriteDeltaFields
==============
*/
void MSG_WriteDeltaFields(SnapshotInfo *snapInfo, msg_t *msg, const int time, const unsigned __int8 *from, const unsigned __int8 *to, const int force, int lastChanged, int numFields, const NetField *stateFields, const int skippedFieldBits, ServerEntityHeader *const outHeader)
{
  msg_t *v12; 
  int v14; 
  const NetField *v15; 
  int v16; 
  int v17; 
  int fieldNum; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  const NetField *field; 
  int lastChangedField; 
  int numFieldsa; 

  v12 = msg;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3163, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  v14 = lastChanged;
  if ( lastChanged >= numFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3164, ASSERT_TYPE_ASSERT, "( lastChanged < numFields )", (const char *)&queryFormat, "lastChanged < numFields") )
    __debugbreak();
  if ( snapInfo->entJustUnlinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3165, ASSERT_TYPE_ASSERT, "(!snapInfo->entJustUnlinked)", "%s\n\tEntities should not be serialized with MSG_WriteDeltaFields. Use MSG_WriteEntityDelta.\n", "!snapInfo->entJustUnlinked") )
    __debugbreak();
  if ( force || lastChanged >= 0 )
  {
    MSG_WriteBit1(v12);
    if ( lastChanged < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3175, ASSERT_TYPE_ASSERT, "(lastChanged >= 0)", (const char *)&queryFormat, "lastChanged >= 0") )
      __debugbreak();
    if ( !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Writing byte for how many fields changed (%i)\n", (unsigned int)lastChanged);
    MSG_WriteLastChangedField(snapInfo, v12, lastChanged, numFields);
    if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3183, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
      __debugbreak();
    v15 = stateFields;
    v16 = 0;
    v17 = -1;
    fieldNum = 0;
    v19 = -1;
    v20 = lastChanged;
    if ( lastChanged >= 0 )
    {
      v21 = 0i64;
      field = stateFields;
      lastChangedField = -1;
      do
      {
        if ( (field->changeHints != 2 || v21 == lastChanged) && MSG_WriteDeltaField(snapInfo, msg, time, from, to, field, fieldNum, 0, 1, lastChangedField, skippedFieldBits, 1, outHeader) )
          lastChangedField = fieldNum;
        ++fieldNum;
        ++v21;
        ++field;
      }
      while ( v21 <= lastChanged );
      v14 = lastChanged;
      v16 = 0;
      v12 = msg;
      numFieldsa = lastChangedField;
      v15 = stateFields;
      v19 = numFieldsa;
      v17 = -1;
    }
    if ( v19 != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3201, ASSERT_TYPE_ASSERT, "(lastChanged == numFields)", (const char *)&queryFormat, "lastChanged == numFields") )
      __debugbreak();
    if ( lastChanged > 0i64 )
    {
      do
      {
        if ( v15->changeHints == 2 )
        {
          if ( MSG_WriteDeltaField(snapInfo, v12, time, from, to, v15, v16, 1, 1, v17, skippedFieldBits, 0, outHeader) )
          {
            v17 = v16;
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3221, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "An ALWAYS_CHANGES field (%s) didn't have its delta written?", v15->name) )
          {
            __debugbreak();
          }
        }
        ++v16;
        ++v15;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    if ( !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Writing bit 0 to say no delta\n");
    MSG_WriteBit0(v12);
  }
}

/*
==============
MSG_WriteDeltaHudElems
==============
*/
void MSG_WriteDeltaHudElems(SnapshotInfo *snapInfo, msg_t *msg, const int time, const hudelem_t *from, const hudelem_t *to, int count, int hudelemIndexBits)
{
  const unsigned __int8 *v7; 
  __int64 v10; 
  PacketEntityType_e packetEntityType; 
  int v12; 
  __int64 v13; 
  const hudelem_t *v14; 
  signed int v15; 
  const unsigned __int8 *v16; 
  const hudelem_t *v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  const NetField *v22; 
  __int64 offset; 
  const unsigned __int8 *v24; 
  const unsigned __int8 *v25; 
  __int128 *v26; 
  unsigned int v27; 
  int v30; 
  int BitCount; 
  const char *v33; 
  signed int v34; 
  __int64 v35; 
  int v36; 
  const unsigned __int8 *v37; 
  int v38; 
  char *fmt; 
  NetField *field; 
  __int64 fieldNum; 
  __int64 forceSend; 
  __int64 xorValue; 
  __int64 lastChangedField; 
  __int64 sendSkippedFields; 
  int v46; 
  int v47; 
  int skippedFieldBits; 
  PacketEntityType_e v49; 
  const NetField *array; 
  int *p_targetEntNum; 
  const unsigned __int8 *v52; 
  unsigned int v53; 
  unsigned __int8 *fromData; 
  const hudelem_t *toa; 

  fromData = (unsigned __int8 *)from;
  v7 = (const unsigned __int8 *)from;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4481, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  v10 = count;
  if ( count != 15 && count != 30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4482, ASSERT_TYPE_ASSERT, "( count == 15 || count == 30 )", (const char *)&queryFormat, "count == MAX_HUDELEMS_ARCHIVAL || count == MAX_HUDELEMS_CURRENT") )
    __debugbreak();
  packetEntityType = snapInfo->packetEntityType;
  v12 = 0;
  v49 = packetEntityType;
  snapInfo->packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_HUDELEM;
  v53 = 0;
  if ( (int)v10 > 0 )
  {
    v13 = 0i64;
    v14 = to;
    do
    {
      if ( v14->type == HE_TYPE_FREE )
        break;
      ++v12;
      ++v13;
      ++v14;
    }
    while ( v13 < v10 );
    v53 = v12;
  }
  MSG_WriteBits(msg, v12, hudelemIndexBits);
  v46 = 0;
  v15 = g_newNetFieldList[7]->count;
  array = g_newNetFieldList[7]->array;
  skippedFieldBits = g_newNetFieldList[7]->skippedNetfieldBits;
  v47 = v15;
  if ( v12 <= 0 )
  {
    snapInfo->packetEntityType = packetEntityType;
  }
  else
  {
    v16 = v7 + 56;
    p_targetEntNum = &to->targetEntNum;
    v17 = (const hudelem_t *)((char *)to - (char *)v7);
    v52 = v7 + 56;
    toa = (const hudelem_t *)((char *)to - (char *)v7);
    do
    {
      if ( (*(_DWORD *)v16 & 0xFFFFFFF0) != 0 )
      {
        LODWORD(field) = *(_DWORD *)v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4507, ASSERT_TYPE_ASSERT, "( ( !(from[i].alignOrg & ~15) ) )", "( from[i].alignOrg ) = %i", field) )
          __debugbreak();
      }
      if ( (*(_DWORD *)&v16[(_QWORD)v17] & 0xFFFFFFF0) != 0 )
      {
        LODWORD(field) = *(_DWORD *)v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4508, ASSERT_TYPE_ASSERT, "( ( !(to[i].alignOrg & ~15) ) )", "( from[i].alignOrg ) = %i", field) )
          __debugbreak();
      }
      v18 = *(_DWORD *)v16;
      if ( (*(_DWORD *)v16 & 0xC) != 0 && (v18 & 0xC) != 4 && (v18 & 0xC) != 8 )
      {
        LODWORD(field) = *(_DWORD *)v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4511, ASSERT_TYPE_ASSERT, "( ( alignX == 0 || alignX == 1 || alignX == 2 ) )", "( from[i].alignOrg ) = %i", field) )
          __debugbreak();
      }
      if ( (*v16 & 3) == 3 )
      {
        LODWORD(field) = *(_DWORD *)v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4514, ASSERT_TYPE_ASSERT, "( ( alignY == 0 || alignY == 1 || alignY == 2 ) )", "( from[i].alignOrg ) = %i", field) )
          __debugbreak();
      }
      v19 = *(_DWORD *)&v16[(_QWORD)v17];
      if ( (v19 & 0xC) != 0 && (v19 & 0xC) != 4 && (v19 & 0xC) != 8 )
      {
        LODWORD(field) = *(_DWORD *)&v16[(_QWORD)v17];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4517, ASSERT_TYPE_ASSERT, "( ( alignX == 0 || alignX == 1 || alignX == 2 ) )", "( to[i].alignOrg ) = %i", field) )
          __debugbreak();
      }
      if ( (v16[(_QWORD)v17] & 3) == 3 )
      {
        LODWORD(field) = *(_DWORD *)&v16[(_QWORD)v17];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4520, ASSERT_TYPE_ASSERT, "( ( alignY == 0 || alignY == 1 || alignY == 2 ) )", "( to[i].alignOrg ) = %i", field) )
          __debugbreak();
      }
      v20 = 0i64;
      v21 = -1;
      if ( v15 > 0 )
      {
        do
        {
          v22 = &array[v20];
          offset = v22->offset;
          v24 = &v16[offset - 56];
          v25 = &v16[(_QWORD)toa - 56];
          v26 = (__int128 *)&v25[offset];
          v27 = abs16(v22->size);
          if ( v27 > 0x10 )
            goto LABEL_70;
          _XMM1 = *v26;
          __asm { vpcmpeqb xmm1, xmm1, xmmword ptr [rsi] }
          v30 = (1 << v27) - 1;
          __asm { vpmovmskb eax, xmm1 }
          if ( (v30 & _EAX) != v30 )
          {
LABEL_70:
            if ( !MSG_ValuesAreEqualPost(v24, v26, v22->bits, array[v20].size) )
            {
              if ( !snapInfo->archived && msg_hudelemspew->current.enabled )
              {
                BitCount = MSG_GetBitCount((bool *)&count, fromData, (const unsigned __int8 *)toa + (_QWORD)fromData, v22);
                v33 = (char *)&queryFormat.fmt + 3;
                if ( (_BYTE)count )
                  v33 = "(est)";
                LODWORD(sendSkippedFields) = BitCount;
                LODWORD(lastChangedField) = *(_DWORD *)v26;
                LODWORD(xorValue) = *(_DWORD *)v24;
                LODWORD(fieldNum) = v20;
                LODWORD(field) = snapInfo->clientNum;
                LODWORD(fmt) = *(_DWORD *)v25;
                Com_Printf(15, "Hudelem write delta %d/%d type %x client %d field %d (%s) from 0x%x to 0x%x bits%s %d\n", (unsigned int)v46, v53, fmt, field, fieldNum, v22->name, xorValue, lastChangedField, v33, sendSkippedFields);
              }
              SV_TrackFieldChange(snapInfo->clientNum, (const PacketEntityType_e)snapInfo->packetEntityType, v20, *p_targetEntNum);
              v21 = v20;
            }
          }
          v15 = v47;
          v20 = (unsigned int)(v20 + 1);
        }
        while ( (int)v20 < v47 );
        v12 = v53;
        v7 = fromData;
        v17 = toa;
      }
      v34 = v21 + 1;
      if ( v21 + 1 < 0 || v34 > v15 )
      {
        LODWORD(field) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4548, ASSERT_TYPE_ASSERT, "( ( lc+1 >= 0 && lc+1 <= static_cast<int>( numFields ) ) )", "( lc ) = %i", field) )
          __debugbreak();
      }
      MSG_WriteBits(msg, v34, 6u);
      v35 = 0i64;
      snapInfo->fieldChangesCount = 46;
      v36 = -1;
      snapInfo->fieldChanges = orderInfo.hudElem;
      if ( v21 >= 0 )
      {
        v37 = (const unsigned __int8 *)v17 + (_QWORD)v7;
        do
        {
          if ( MSG_WriteDeltaField(snapInfo, msg, time, v7, v37, &array[v35], v35, 0, 1, v36, skippedFieldBits, 1, NULL) )
            v36 = v35;
          v35 = (unsigned int)(v35 + 1);
        }
        while ( (int)v35 <= v21 );
        v16 = v52;
        v12 = v53;
      }
      if ( v36 != v21 )
      {
        LODWORD(forceSend) = v21;
        LODWORD(fieldNum) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4567, ASSERT_TYPE_ASSERT, "(lastChanged == lc)", "%s\n\t%i != %i", "lastChanged == lc", fieldNum, forceSend) )
          __debugbreak();
      }
      v38 = *p_targetEntNum;
      if ( (unsigned int)(*p_targetEntNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v38, "signed", *p_targetEntNum) )
        __debugbreak();
      SV_BandwidthProfile_AddSerializedEntityToSnapshot(snapInfo, v38, 0);
      v17 = toa;
      v15 = v47;
      v7 += 184;
      ++v46;
      v16 += 184;
      fromData = (unsigned __int8 *)v7;
      v52 = v16;
    }
    while ( v46 < v12 );
    snapInfo->packetEntityType = v49;
  }
}

/*
==============
MSG_WriteDeltaMLGSpectatorInfo
==============
*/
char MSG_WriteDeltaMLGSpectatorInfo(SnapshotInfo *snapInfo, msg_t *msg, const int time, const MLGSpectatorClientInfo *from, const MLGSpectatorClientInfo *to)
{
  const unsigned __int8 *v5; 
  int v7; 
  __int64 count; 
  const NetField *field; 
  int v10; 
  __int64 v11; 
  __int16 *p_size; 
  __int64 v13; 
  const unsigned __int8 *v14; 
  __int128 *v15; 
  unsigned int v16; 
  int v19; 
  bool v21; 
  int v22; 
  int lastChangedField; 
  int v24; 
  int fieldNum; 
  char v29[224]; 

  v5 = (const unsigned __int8 *)from;
  v7 = -1;
  count = (int)g_newNetFieldList[9]->count;
  field = g_newNetFieldList[9]->array;
  if ( !from )
  {
    v5 = (const unsigned __int8 *)v29;
    memset_0(v29, 0, 0xD8ui64);
  }
  v10 = 0;
  v11 = count;
  if ( (int)count <= 0 )
    goto LABEL_21;
  p_size = &field->size;
  do
  {
    v13 = (unsigned __int16)p_size[1];
    v14 = &v5[v13];
    v15 = (__int128 *)((char *)&to->mlgMessageSent + v13);
    v16 = abs16(*p_size);
    if ( v16 > 0x10 )
      goto LABEL_8;
    _XMM1 = *v15;
    __asm { vpcmpeqb xmm1, xmm1, xmmword ptr [r10] }
    v19 = (1 << v16) - 1;
    __asm { vpmovmskb eax, xmm1 }
    if ( (v19 & _EAX) == v19 )
      v21 = 1;
    else
LABEL_8:
      v21 = MSG_ValuesAreEqualPost(v14, v15, p_size[2], *p_size);
    v22 = v10;
    if ( v21 )
      v22 = v7;
    ++v10;
    p_size += 12;
    v7 = v22;
    --v11;
  }
  while ( v11 );
  lastChangedField = -1;
  if ( v22 == -1 )
  {
LABEL_21:
    MSG_WriteBit0(msg);
    return 0;
  }
  else
  {
    MSG_WriteBit1(msg);
    v24 = v7 + 1;
    MSG_WriteBits(msg, v24, 6u);
    if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4581, ASSERT_TYPE_ASSERT, "( outSnapInfo )", (const char *)&queryFormat, "outSnapInfo") )
      __debugbreak();
    snapInfo->fieldChangesCount = 55;
    snapInfo->fieldChanges = orderInfo.mlgSpectator;
    for ( fieldNum = 0; fieldNum < v24; ++field )
    {
      if ( MSG_WriteDeltaField(snapInfo, msg, time, v5, (const unsigned __int8 *)to, field, fieldNum, 0, 1, lastChangedField, 0, 0, NULL) )
        lastChangedField = fieldNum;
      ++fieldNum;
    }
    return 1;
  }
}

/*
==============
MSG_WriteDeltaOmnvar
==============
*/
void MSG_WriteDeltaOmnvar(SnapshotInfo *snapInfo, msg_t *msg, const unsigned int timeBase, const OmnvarDef *def, const OmnvarData *from, const OmnvarData *to)
{
  char *fmt; 
  char *fieldName; 
  char v12[32]; 
  char dest[32]; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5631, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5632, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5633, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( (def->flags & 0x40) != 0 )
    MSG_WriteDeltaTime(msg, timeBase, to->timeModified);
  switch ( def->type )
  {
    case OMNVAR_TYPE_BOOL:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%d", from->current.enabled);
        Com_sprintf(v12, 0x20ui64, "%d", to->current.enabled);
      }
      MSG_WriteBool(msg, to->current.enabled);
      break;
    case OMNVAR_TYPE_FLOAT:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%f", from->current.value);
        Com_sprintf(v12, 0x20ui64, "%f", to->current.value);
      }
      MSG_WriteFloatCase(msg, &from->current.integer, &to->current.integer);
      break;
    case OMNVAR_TYPE_INT:
      MSG_WriteValue(msg, &from->current, &to->current, def->numbits, -4, def->name);
      break;
    case OMNVAR_TYPE_UINT:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%d", from->current.unsignedInteger);
        Com_sprintf(v12, 0x20ui64, "%d", to->current.unsignedInteger);
      }
      MSG_WriteValue(msg, &from->current, &to->current, def->numbits, -4, def->name);
      break;
    case OMNVAR_TYPE_TIME:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%d", from->current.unsignedInteger);
        Com_sprintf(v12, 0x20ui64, "%d", to->current.unsignedInteger);
      }
      MSG_WriteDeltaTime(msg, timeBase, to->current.integer);
      break;
    case OMNVAR_TYPE_NCS_LUI:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%u", from->current.unsignedInteger);
        Com_sprintf(v12, 0x20ui64, "%u", to->current.unsignedInteger);
      }
      if ( !def->numbits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5694, ASSERT_TYPE_ASSERT, "(def->numbits)", "%s\n\tomnvar for lui ncs was not initialized", "def->numbits") )
        __debugbreak();
      MSG_WriteValue(msg, &from->current, &to->current, def->numbits, 4, def->name);
      break;
    default:
      break;
  }
  if ( !snapInfo->archived )
  {
    LODWORD(fieldName) = def->type;
    LODWORD(fmt) = def->flags;
    SV_LogSnapshotContent(snapInfo->clientNum, "Omnvar - (%s, %d bits, flags: %d, type %d) from %s to %s\n", def->name, def->numbits, fmt, fieldName, dest, v12);
  }
}

/*
==============
MSG_WriteDeltaOmnvars
==============
*/
void MSG_WriteDeltaOmnvars(SnapshotInfo *snapInfo, msg_t *msg, const int time, const OmnvarData *fromOmnvars, const OmnvarData *toOmnvars)
{
  const OmnvarDef *omnvarDefs; 
  unsigned int v10; 
  unsigned int omnvarIdxBits; 
  int UsedBitCount; 
  int v13; 

  omnvarDefs = BG_Omnvar_GetDefs();
  v10 = BG_Omnvar_PerSnapCount();
  omnvarIdxBits = BG_Omnvar_PerSnapMinBitsForIndex();
  UsedBitCount = MSG_GetUsedBitCount(msg);
  LODWORD(omnvarDefs) = MSG_WriteDeltaOmnvars_Internal(snapInfo, msg, time, v10, omnvarIdxBits, fromOmnvars, toOmnvars, omnvarDefs);
  v13 = MSG_GetUsedBitCount(msg);
  SV_BandwidthProfile_AddWorldOmnvarsToSnapshot(snapInfo, v13 - UsedBitCount, (const unsigned int)omnvarDefs);
}

/*
==============
MSG_WriteDeltaOmnvars_Internal
==============
*/
__int64 MSG_WriteDeltaOmnvars_Internal(SnapshotInfo *snapInfo, msg_t *msg, const int time, const unsigned int omnvarCount, const unsigned int omnvarIdxBits, const OmnvarData *fromOmnvars, const OmnvarData *toOmnvars, const OmnvarDef *omnvarDefs)
{
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v12; 
  const OmnvarData *v13; 
  const OmnvarDef *v14; 
  __int64 v15; 
  const OmnvarDef *v16; 
  const OmnvarData *to; 

  v8 = 0;
  v9 = omnvarCount;
  v12 = 0;
  if ( omnvarCount )
  {
    v13 = toOmnvars;
    do
    {
      v14 = &omnvarDefs[v12];
      if ( Omnvar_HasChanged(v14, &fromOmnvars[v12], &v13[v12]) )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, v12, omnvarIdxBits);
        MSG_WriteDeltaOmnvar(snapInfo, msg, time, v14, &fromOmnvars[v12], &v13[v12]);
        ++v8;
        SV_BandwidthProfile_AddOmnvarName(snapInfo, v14->name);
        v15 = v12 + 1;
        if ( (unsigned int)v15 < v9 )
        {
          v16 = &omnvarDefs[v15];
          do
          {
            to = &v13[v15];
            if ( !Omnvar_HasChanged(v16, &fromOmnvars[v15], to) )
              break;
            MSG_WriteBit1(msg);
            MSG_WriteDeltaOmnvar(snapInfo, msg, time, v16, &fromOmnvars[v15], to);
            ++v8;
            SV_BandwidthProfile_AddOmnvarName(snapInfo, v16->name);
            v13 = toOmnvars;
            v12 = v15;
            v15 = (unsigned int)(v15 + 1);
            ++v16;
          }
          while ( (unsigned int)v15 < omnvarCount );
          v9 = omnvarCount;
          v13 = toOmnvars;
        }
        MSG_WriteBit0(msg);
      }
      ++v12;
    }
    while ( v12 < v9 );
  }
  MSG_WriteBit0(msg);
  return v8;
}

/*
==============
MSG_WriteDeltaPlayerstate
==============
*/
void MSG_WriteDeltaPlayerstate(SnapshotInfo *snapInfo, msg_t *msg, const int time, const playerState_s *from, const playerState_s *to)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  const playerState_s *v9; 
  const playerState_s *v10; 
  msg_t *v11; 
  int UsedBitCount; 
  bool archived; 
  int clientNum; 
  __int16 v19; 
  const SvClientPredictedOrigin *predictedResult; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  const SvClientMP *client; 
  float v26; 
  float value; 
  double v28; 
  char *name; 
  float v30; 
  float v31; 
  float v32; 
  bool v33; 
  int v34; 
  int v35; 
  NetField *array; 
  signed int count; 
  unsigned int v38; 
  __int64 v39; 
  const dvar_t *v40; 
  bool v41; 
  const char *v42; 
  const char *v43; 
  __int64 v44; 
  signed __int64 v45; 
  char v46; 
  __int64 v47; 
  char v48; 
  int BitCount; 
  const char *v50; 
  bool v51; 
  int v52; 
  NetField *v53; 
  int v54; 
  int lastChangedField; 
  int v56; 
  NetField *v57; 
  int fieldNum; 
  int v59; 
  __int64 v60; 
  unsigned __int8 changeHints; 
  bool xorValue; 
  int i; 
  int v64; 
  playerState_s *v65; 
  unsigned __int8 *v66; 
  int v67; 
  bool v68; 
  const Weapon *v69; 
  NetField *v70; 
  __int64 v71; 
  int *v72; 
  __int64 v73; 
  playerState_s *v74; 
  __int64 v75; 
  signed __int64 v76; 
  bool v77; 
  int v78; 
  int v79; 
  int v80; 
  _DWORD *v81; 
  PlayerEquippedWeaponState *weapEquippedData; 
  char v83; 
  unsigned __int8 *v84; 
  SnapshotInfo *v85; 
  PlayerEquippedWeaponState *v86; 
  PlayerEquippedWeaponState *v87; 
  unsigned __int8 *v88; 
  unsigned __int8 *v89; 
  signed __int64 v90; 
  __int64 j; 
  const Weapon *v92; 
  int v93; 
  SnapshotInfo *v94; 
  int *v95; 
  signed __int64 v96; 
  bool v97; 
  int v98; 
  int v99; 
  unsigned __int8 *v100; 
  ObjectiveView *objectives; 
  unsigned __int8 *v102; 
  const NetFieldList *v103; 
  int v104; 
  const NetField *v105; 
  __int64 v106; 
  int v107; 
  const unsigned __int8 *v108; 
  int v109; 
  int v110; 
  int v111; 
  playerState_s *v112; 
  bool v113; 
  int v114; 
  int v115; 
  const OmnvarDef *PlayerStateDefs; 
  unsigned int v117; 
  unsigned int v118; 
  int v119; 
  unsigned int v120; 
  int v121; 
  unsigned __int8 *v122; 
  HeadIconView *headIcons; 
  unsigned int v124; 
  const NetField *v125; 
  __int64 v126; 
  int v127; 
  const unsigned __int8 *v128; 
  int v129; 
  int v130; 
  int v131; 
  unsigned __int8 *v132; 
  HeadIconExtendedView *headIconsExtendedData; 
  unsigned int v134; 
  const NetField *v135; 
  __int64 v136; 
  int v137; 
  const unsigned __int8 *v138; 
  int v139; 
  int v140; 
  int v141; 
  unsigned __int8 *v142; 
  TargetMarkerGroupView *targetMarkerGroups; 
  unsigned int v144; 
  const NetField *v145; 
  __int64 v146; 
  int v147; 
  const unsigned __int8 *v148; 
  int v149; 
  int v150; 
  int v151; 
  unsigned __int8 *v152; 
  CalloutMarkerPingView *calloutMarkerPings; 
  unsigned int v154; 
  const NetField *v155; 
  __int64 v156; 
  int v157; 
  const unsigned __int8 *v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  char *fmt; 
  NetField *field; 
  char v165; 
  int skippedFieldBits; 
  int v167; 
  int skippedNetfieldBits; 
  int v169; 
  int v170; 
  int v171; 
  int v172; 
  bool v173; 
  bool estimate; 
  int timea; 
  int lc; 
  playerState_s *oldPs; 
  const Weapon *v178; 
  unsigned __int8 *toData; 
  NetField *v180; 
  int v181; 
  SnapshotInfo *snapInfoa; 
  __int64 v183; 
  unsigned __int8 *v184; 
  playerState_s v185; 
  __int64 v186[10]; 
  char *v187; 
  int v188; 
  __int16 v189; 
  char v190; 
  __int128 v191; 
  __int128 v192; 
  __int128 v193; 

  v9 = to;
  v10 = from;
  v11 = msg;
  oldPs = (playerState_s *)from;
  timea = time;
  v183 = (__int64)msg;
  snapInfoa = snapInfo;
  toData = (unsigned __int8 *)to;
  v185.meleeReaction.m_packed = 0;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4742, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  memset(v186, 0, 72);
  _XMM0 = BG_IsPlayerPositionQuantized(to);
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_0099999998);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  Profile_Begin(376);
  UsedBitCount = MSG_GetUsedBitCount(v11);
  archived = snapInfo->archived;
  v181 = UsedBitCount;
  if ( !archived )
    SV_LogSnapshotContent(snapInfo->clientNum, "Writing playerstate for client #%i to->clientNum %d\n", (unsigned int)snapInfo->clientNum, (unsigned int)to->clientNum);
  snapInfo->packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_PLAYERSTATE;
  if ( !v10 )
  {
    v10 = &v185;
    oldPs = &v185;
    memset_0(&v185, 0, sizeof(v185));
    BG_InitPlayerState_PrepareForUseAsDelta(&v185, 0, 1);
  }
  v192 = v6;
  if ( archived || snapInfo->demoSnapshot )
  {
    v33 = 1;
    v173 = 1;
    v165 = 1;
    MSG_WriteBit1(v11);
    MSG_WriteBit1(v11);
    goto LABEL_46;
  }
  clientNum = to->clientNum;
  v193 = v5;
  v191 = v7;
  v19 = truncate_cast<short,int>(clientNum);
  SV_BandwidthProfile_AddSerializedEntityToSnapshot(snapInfo, v19, 0);
  predictedResult = snapInfo->predictedResult;
  v21 = *(float *)&_XMM0;
  if ( predictedResult )
  {
    v22 = to->origin.v[0] - predictedResult->origin.v[0];
    v23 = to->origin.v[1] - predictedResult->origin.v[1];
    v24 = to->origin.v[2] - predictedResult->origin.v[2];
    client = snapInfo->client;
    v26 = (float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24);
    if ( !snapInfo->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4788, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( client->isForceMispredict )
    {
      v26 = *(float *)&_XMM0 + 1.0;
      client->isForceMispredict = 0;
    }
  }
  else
  {
    v26 = 0.0;
  }
  if ( !v10 || !predictedResult || v26 > *(float *)&_XMM0 )
  {
    value = msg_logPredictionPositionErrors->current.value;
    if ( value > 0.0 && v26 < (float)(value * value) )
    {
      if ( v26 <= v21 )
        goto LABEL_34;
      if ( !snapInfo->archived )
      {
        if ( to->clientNum >= SvClient::ms_clientCount )
        {
          LODWORD(field) = to->clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4815, ASSERT_TYPE_ASSERT, "(unsigned)( to->clientNum ) < (unsigned)( SvClient::GetClientCount() )", "to->clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", field, SvClient::ms_clientCount) )
            __debugbreak();
        }
        v28 = fsqrt(v26);
        if ( snapInfo->client )
          name = snapInfo->client->name;
        else
          name = "<unknown>";
        LODWORD(fmt) = to->serverTime;
        Com_Printf(16, "%s (%i): Prediction mismatch. Time ( %i ). Setting origin from ( %.2f, %.2f, %.2f ) to ( %.2f, %.2f, %.2f ) (%.2f away)\n", name, (unsigned int)to->clientNum, fmt, predictedResult->origin.v[0], predictedResult->origin.v[1], predictedResult->origin.v[2], to->origin.v[0], to->origin.v[1], to->origin.v[2], v28);
      }
    }
    if ( v26 > v21 )
    {
      SV_TrackPSOriginPredictionSend();
LABEL_36:
      v173 = 1;
      MSG_WriteBit1(v11);
      goto LABEL_37;
    }
LABEL_34:
    if ( !predictedResult )
      SV_TrackPSOriginServerTimeSend();
    goto LABEL_36;
  }
  v173 = 0;
  MSG_WriteBit0(v11);
LABEL_37:
  if ( to->vehicleState.entity == 2047 || v10 && predictedResult && predictedResult->hasVehicleData && predictedResult->vehicleTargetEntity == to->vehicleState.targetEntity && (v30 = to->vehicleState.origin.v[0] - predictedResult->vehicleOrigin.v[0], v31 = to->vehicleState.origin.v[1] - predictedResult->vehicleOrigin.v[1], v32 = to->vehicleState.origin.v[2] - predictedResult->vehicleOrigin.v[2], (float)((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32)) <= v21) )
  {
    MSG_WriteBit0(v11);
    v33 = 0;
    v165 = 0;
  }
  else
  {
    MSG_WriteBit1(v11);
    v33 = 1;
    v165 = 1;
  }
LABEL_46:
  v34 = -1;
  v35 = 0;
  array = (NetField *)g_newNetFieldList[2]->array;
  skippedFieldBits = g_newNetFieldList[2]->skippedNetfieldBits;
  count = g_newNetFieldList[2]->count;
  v38 = -1;
  lc = -1;
  LODWORD(v178) = count;
  v180 = array;
  if ( count > 0 )
  {
    v39 = 0i64;
    do
    {
      if ( MSG_ShouldSendPSField(snapInfo, v173, v33, v9, oldPs, array) )
      {
        if ( !snapInfo->archived && !snapInfo->fromBaseline )
        {
          SV_TrackFieldChange(snapInfo->clientNum, ANALYZE_DATATYPE_ENTITYTYPE_PLAYERSTATE, v35, v9->clientNum);
          v40 = DVARBOOL_sv_debugPlayerstate;
          v41 = 0;
          if ( !DVARBOOL_sv_debugPlayerstate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPlayerstate") )
          {
            __debugbreak();
            v41 = snapInfo->archived;
          }
          Dvar_CheckFrontendServerThread(v40);
          if ( v40->current.enabled && !v41 )
          {
            v42 = array->name;
            v43 = "commandTime";
            v44 = 0x7FFFFFFFi64;
            if ( !array->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v45 = v42 - "commandTime";
            while ( 1 )
            {
              v46 = v43[v45];
              v47 = v44;
              v48 = *v43;
              --v44;
              ++v43;
              if ( !v47 )
              {
LABEL_63:
                v9 = (const playerState_s *)toData;
                goto LABEL_64;
              }
              if ( v46 != v48 )
                break;
              if ( !v46 )
                goto LABEL_63;
            }
            v9 = (const playerState_s *)toData;
            BitCount = MSG_GetBitCount(&estimate, (const unsigned __int8 *)oldPs, toData, array);
            v50 = (char *)&queryFormat.fmt + 3;
            if ( estimate )
              v50 = "(est)";
            LODWORD(fmt) = BitCount;
            Com_Printf(16, "PS field %d %s changed, %d bits%s\n", (unsigned int)v35, array->name, fmt, v50);
          }
LABEL_64:
          v33 = v165;
        }
        *((_DWORD *)v186 + (v39 >> 5)) |= 1 << (v35 & 0x1F);
        v38 = v35;
        lc = v35;
      }
      else
      {
        v38 = lc;
      }
      ++v35;
      ++v39;
      ++array;
    }
    while ( v35 < (int)v178 );
    v11 = (msg_t *)v183;
    v34 = -1;
  }
  v51 = !snapInfo->archived;
  snapInfo->fieldChanges = orderInfo.playerState;
  snapInfo->fieldChangesCount = 575;
  if ( v51 )
    SV_LogSnapshotContent(snapInfo->clientNum, "Writing byte for number of fields changed (%i)\n", v38);
  v52 = lc;
  if ( lc < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4905, ASSERT_TYPE_ASSERT, "(lc >= -1)", (const char *)&queryFormat, "lc >= -1") )
    __debugbreak();
  MSG_WriteLastChangedField(snapInfo, v11, v52 + 1, (_DWORD)v178 + 1);
  v53 = v180;
  v54 = lc;
  lastChangedField = -1;
  v56 = -1;
  v57 = v180;
  fieldNum = 0;
  if ( lc >= 0 )
  {
    v59 = 1;
    v60 = 0i64;
    do
    {
      changeHints = v57->changeHints;
      if ( changeHints != 2 || fieldNum == v54 )
      {
        if ( (v59 & *((_DWORD *)v186 + (v60 >> 5))) != 0 )
        {
          xorValue = snapInfo->archived || ((changeHints - 3) & 0xFA) != 0 || changeHints == 8;
          if ( !MSG_WriteDeltaField(snapInfo, v11, timea, (const unsigned __int8 *)oldPs, toData, v57, fieldNum, 1, xorValue, lastChangedField, skippedFieldBits, 1, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4933, ASSERT_TYPE_ASSERT, "(sent)", "%s\n\tfield %s changed but wasn't sent to the client\n", "sent", v57->name) )
            __debugbreak();
          v54 = lc;
          lastChangedField = fieldNum;
        }
      }
      else
      {
        v56 = fieldNum;
      }
      ++fieldNum;
      v59 = __ROL4__(v59, 1);
      ++v60;
      ++v57;
    }
    while ( fieldNum <= v54 );
    if ( v54 >= 0 && lastChangedField != v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4939, ASSERT_TYPE_ASSERT, "(lastChanged == lc)", (const char *)&queryFormat, "lastChanged == lc") )
      __debugbreak();
    v53 = v180;
    v34 = -1;
  }
  for ( i = 0; i <= v56; ++v53 )
  {
    if ( v53->changeHints == 2 && MSG_WriteDeltaField(snapInfo, v11, timea, (const unsigned __int8 *)oldPs, toData, v53, i, 1, 1, v34, skippedFieldBits, 0, NULL) )
      v34 = i;
    ++i;
  }
  if ( v34 > lc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4957, ASSERT_TYPE_ASSERT, "(lastChanged <= lc)", (const char *)&queryFormat, "lastChanged <= lc") )
    __debugbreak();
  v64 = MSG_GetUsedBitCount(v11);
  SV_TrackPSBitsForSegment(snapInfo, v64 - v181, PLAYERSTATE_SEGMENT_FIRST);
  v65 = oldPs;
  v66 = toData;
  v67 = *((_DWORD *)toData + 150) != oldPs->stats[0];
  if ( *((_DWORD *)toData + 151) != oldPs->stats[1] )
    v67 |= 2u;
  if ( *((_DWORD *)toData + 152) != oldPs->stats[2] )
    v67 |= 4u;
  if ( *((_DWORD *)toData + 153) != oldPs->stats[3] )
    v67 |= 8u;
  if ( *((_DWORD *)toData + 154) != oldPs->stats[4] )
    v67 |= 0x10u;
  v68 = snapInfo->archived;
  if ( v67 )
  {
    if ( !v68 )
      SV_LogSnapshotContent(snapInfo->clientNum, "Sending player stats changes - bit 1 to say it changed, %i bits for which changed\n", 5i64);
    MSG_WriteBit1(v11);
    MSG_WriteBits(v11, v67, 5u);
    if ( (v67 & 1) != 0 )
    {
      if ( !v68 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player health stat (value is %i)\n", *((unsigned int *)v66 + 150));
      MSG_WriteShort(v11, *((_DWORD *)v66 + 150));
    }
    if ( (v67 & 2) != 0 )
    {
      if ( !v68 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player dead yaw stat (value is %i)\n", *((unsigned int *)v66 + 151));
      MSG_WriteShort(v11, *((_DWORD *)v66 + 151));
    }
    if ( (v67 & 4) != 0 )
    {
      if ( !v68 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player maximum health stat (value is %i)\n", *((unsigned int *)v66 + 152));
      MSG_WriteShort(v11, *((_DWORD *)v66 + 152));
    }
    if ( (v67 & 8) != 0 )
    {
      if ( !v68 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player spawn count stat (value is %i)\n", *((unsigned int *)v66 + 153));
      MSG_WriteByte(v11, *((int *)v66 + 153));
    }
    if ( (v67 & 0x10) != 0 )
    {
      if ( !v68 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player killer vehicle (value is %i)\n", *((unsigned int *)v66 + 154));
      MSG_WriteShort(v11, *((_DWORD *)v66 + 154));
    }
  }
  else
  {
    if ( !v68 )
      SV_LogSnapshotContent(snapInfo->clientNum, "Writing 0 to say no player stats changed\n");
    MSG_WriteBit0(v11);
  }
  v167 = MSG_GetUsedBitCount(v11);
  SV_TrackPSBitsForSegment(snapInfo, v167 - v64, PLAYERSTATE_SEGMENT_STATS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(snapInfo, v167 - v64, 1);
  estimate = snapInfo->archived;
  if ( !estimate )
    SV_LogSnapshotContent(snapInfo->clientNum, "sending ammo and weapons\n");
  v69 = (const Weapon *)(v66 + 2932);
  v70 = NULL;
  v178 = (const Weapon *)(v66 + 2932);
  v71 = (char *)v65 - (char *)(v66 + 2932);
  v180 = NULL;
  v72 = (int *)(v66 + 2996);
  v187 = (char *)v71;
  v73 = 15i64;
  v184 = v66 + 2996;
  v183 = 15i64;
  do
  {
    if ( memcmp_0(v69, &v69[48].attachmentVariationIndices[v71 + 25], 0x58ui64) )
    {
      MSG_WriteBit1(v11);
      MSG_WriteBits(v11, (const __int64)v70, 4u);
      MSG_WriteBits(v11, *(v72 - 1), 1u);
      MSG_WriteWeapon(v11, v69);
      v74 = v65;
      v75 = 2i64;
      v76 = (char *)v74 - (char *)v66;
      v77 = estimate;
      do
      {
        if ( *v72 == *(int *)((char *)v72 + v76) )
        {
          MSG_WriteBit0(v11);
        }
        else
        {
          MSG_WriteBit1(v11);
          v78 = *v72;
          if ( *v72 > 31 )
            v78 = 31;
          if ( v78 < 0 )
            v78 = 0;
          MSG_WriteBits(v11, v78, 5u);
        }
        if ( v72[2] == *(int *)((char *)v72 + v76 + 8) )
        {
          MSG_WriteBit0(v11);
        }
        else
        {
          MSG_WriteBit1(v11);
          v79 = v72[2];
          if ( v79 > 31 )
            v79 = 31;
          if ( v79 < 0 )
            v79 = 0;
          MSG_WriteBits(v11, v79, 5u);
        }
        if ( v72[4] == *(int *)((char *)v72 + v76 + 16) )
        {
          MSG_WriteBit0(v11);
        }
        else
        {
          MSG_WriteBit1(v11);
          v80 = v72[4];
          if ( v80 >= 512 )
          {
            v80 = 511;
            if ( !v77 )
              Com_Printf(15, "Clip ammo clamped to %i when packed into message.\n", 511i64);
          }
          MSG_WriteBits(v11, v80, 9u);
        }
        ++v72;
        --v75;
      }
      while ( v75 );
      v66 = toData;
      v69 = v178;
      v72 = (int *)v184;
      v70 = v180;
      v73 = v183;
      v65 = oldPs;
    }
    v71 = (__int64)v187;
    v70 = (NetField *)((char *)v70 + 1);
    v69 = (const Weapon *)((char *)v69 + 88);
    v180 = v70;
    v72 += 22;
    v178 = v69;
    --v73;
    v184 = (unsigned __int8 *)v72;
    v183 = v73;
  }
  while ( v73 );
  MSG_WriteBit0(v11);
  v81 = v66 + 1480;
  v187 = NULL;
  weapEquippedData = v65->weapEquippedData;
  v188 = 0;
  v83 = 0;
  v189 = 0;
  v190 = 0;
  if ( *((_DWORD *)v66 + 370) != v65->weaponsEquipped[0].m_mapEntryId || (v84 = v66 + 1540, *(_QWORD *)(v66 + 1540) != *(_QWORD *)&weapEquippedData->usedBefore) || *(_QWORD *)(v66 + 1548) != *(_QWORD *)&v65->weapEquippedData[0].thermalEnabled )
  {
    LOBYTE(v187) = 1;
    v84 = v66 + 1540;
    v83 = 1;
  }
  v85 = snapInfoa;
  if ( *((_DWORD *)v66 + 371) != v65->weaponsEquipped[1].m_mapEntryId || *((_QWORD *)v84 + 2) != *(_QWORD *)&v65->weapEquippedData[1].usedBefore || *((_QWORD *)v84 + 3) != *(_QWORD *)&v65->weapEquippedData[1].thermalEnabled )
  {
    BYTE1(v187) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 372) != v65->weaponsEquipped[2].m_mapEntryId || *((_QWORD *)v84 + 4) != *(_QWORD *)&v65->weapEquippedData[2].usedBefore || *((_QWORD *)v84 + 5) != *(_QWORD *)&v65->weapEquippedData[2].thermalEnabled )
  {
    BYTE2(v187) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 373) != v65->weaponsEquipped[3].m_mapEntryId || *((_QWORD *)v84 + 6) != *(_QWORD *)&v65->weapEquippedData[3].usedBefore || *((_QWORD *)v84 + 7) != *(_QWORD *)&v65->weapEquippedData[3].thermalEnabled )
  {
    BYTE3(v187) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 374) != v65->weaponsEquipped[4].m_mapEntryId || *((_QWORD *)v84 + 8) != *(_QWORD *)&v65->weapEquippedData[4].usedBefore || *((_QWORD *)v84 + 9) != *(_QWORD *)&v65->weapEquippedData[4].thermalEnabled )
  {
    BYTE4(v187) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 375) != v65->weaponsEquipped[5].m_mapEntryId || *((_QWORD *)v84 + 10) != *(_QWORD *)&v65->weapEquippedData[5].usedBefore || *((_QWORD *)v84 + 11) != *(_QWORD *)&v65->weapEquippedData[5].thermalEnabled )
  {
    BYTE5(v187) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 376) != v65->weaponsEquipped[6].m_mapEntryId )
  {
    v86 = v65->weapEquippedData;
LABEL_197:
    BYTE6(v187) = 1;
    v88 = v66 + 1540;
    v83 = 1;
    v87 = v86;
    goto LABEL_198;
  }
  v86 = v65->weapEquippedData;
  v87 = v65->weapEquippedData;
  v88 = v84;
  if ( *((_QWORD *)v84 + 12) != *(_QWORD *)&v65->weapEquippedData[6].usedBefore || *((_QWORD *)v84 + 13) != *(_QWORD *)&v65->weapEquippedData[6].thermalEnabled )
    goto LABEL_197;
LABEL_198:
  if ( *((_DWORD *)v66 + 377) != v65->weaponsEquipped[7].m_mapEntryId || (v87 = v65->weapEquippedData, v88 = v84, *((_QWORD *)v84 + 14) != *(_QWORD *)&v65->weapEquippedData[7].usedBefore) || *((_QWORD *)v84 + 15) != *(_QWORD *)&v65->weapEquippedData[7].thermalEnabled )
  {
    HIBYTE(v187) = 1;
    v83 = 1;
    weapEquippedData = v87;
    v84 = v88;
  }
  if ( *((_DWORD *)v66 + 378) != v65->weaponsEquipped[8].m_mapEntryId || *((_QWORD *)v84 + 16) != *(_QWORD *)&weapEquippedData[8].usedBefore || *((_QWORD *)v84 + 17) != *(_QWORD *)&weapEquippedData[8].thermalEnabled )
  {
    LOBYTE(v188) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 379) != v65->weaponsEquipped[9].m_mapEntryId || *((_QWORD *)v84 + 18) != *(_QWORD *)&weapEquippedData[9].usedBefore || *((_QWORD *)v84 + 19) != *(_QWORD *)&weapEquippedData[9].thermalEnabled )
  {
    BYTE1(v188) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 380) != v65->weaponsEquipped[10].m_mapEntryId || *((_QWORD *)v84 + 20) != *(_QWORD *)&weapEquippedData[10].usedBefore || *((_QWORD *)v84 + 21) != *(_QWORD *)&weapEquippedData[10].thermalEnabled )
  {
    BYTE2(v188) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 381) != v65->weaponsEquipped[11].m_mapEntryId || *((_QWORD *)v84 + 22) != *(_QWORD *)&weapEquippedData[11].usedBefore || *((_QWORD *)v84 + 23) != *(_QWORD *)&weapEquippedData[11].thermalEnabled )
  {
    HIBYTE(v188) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 382) != v65->weaponsEquipped[12].m_mapEntryId || *((_QWORD *)v84 + 24) != *(_QWORD *)&weapEquippedData[12].usedBefore || *((_QWORD *)v84 + 25) != *(_QWORD *)&weapEquippedData[12].thermalEnabled )
  {
    LOBYTE(v189) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 383) != v65->weaponsEquipped[13].m_mapEntryId || *((_QWORD *)v84 + 26) != *(_QWORD *)&weapEquippedData[13].usedBefore || *((_QWORD *)v84 + 27) != *(_QWORD *)&weapEquippedData[13].thermalEnabled )
  {
    HIBYTE(v189) = 1;
    v83 = 1;
  }
  if ( *((_DWORD *)v66 + 384) == v65->weaponsEquipped[14].m_mapEntryId && *((_QWORD *)v84 + 28) == *(_QWORD *)&weapEquippedData[14].usedBefore && *((_QWORD *)v84 + 29) == *(_QWORD *)&weapEquippedData[14].thermalEnabled )
  {
    if ( !v83 )
    {
      MSG_WriteBit0(v11);
      goto LABEL_257;
    }
  }
  else
  {
    v190 = 1;
  }
  MSG_WriteBit1(v11);
  v89 = v66 + 1541;
  v90 = (char *)v65 - (char *)v66;
  for ( j = 0i64; j < 15; ++j )
  {
    if ( !*((_BYTE *)&v187 + j) )
      goto LABEL_254;
    MSG_WriteBit1(v11);
    if ( *v81 == *(_DWORD *)((char *)v81 + v90) )
    {
      MSG_WriteBit0(v11);
    }
    else
    {
      MSG_WriteBit1(v11);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 235, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      MSG_WriteBits(v11, (unsigned int)*v81, BgWeaponMap::ms_runtimeIndexBits);
    }
    if ( *(v89 - 1) )
      MSG_WriteBit1(v11);
    else
      MSG_WriteBit0(v11);
    if ( *v89 )
      MSG_WriteBit1(v11);
    else
      MSG_WriteBit0(v11);
    if ( v89[1] )
      MSG_WriteBit1(v11);
    else
      MSG_WriteBit0(v11);
    MSG_WriteBits(v11, *(int *)(v89 + 3), 2u);
    MSG_WriteBits(v11, v89[9], 3u);
    MSG_WriteBits(v11, *(int *)(v89 + 11), 3u);
    if ( v89[7] )
      MSG_WriteBit1(v11);
    else
      MSG_WriteBit0(v11);
    if ( v89[8] )
      MSG_WriteBit1(v11);
    else
LABEL_254:
      MSG_WriteBit0(v11);
    ++v81;
    v89 += 16;
  }
  v85 = snapInfoa;
  v66 = toData;
LABEL_257:
  v92 = (const Weapon *)(v66 + 1912);
  v93 = 0;
  snapInfoa = NULL;
  v94 = NULL;
  v95 = (int *)(v66 + 1976);
  v96 = (char *)oldPs - (char *)(v66 + 1912);
  v187 = (char *)v96;
  do
  {
    if ( memcmp_0(v92, &v92[31].attachmentVariationIndices[v96 + 25], 0x44ui64) )
    {
      v97 = v85->archived;
      if ( !v97 )
      {
        LODWORD(fmt) = *v95;
        SV_LogSnapshotContent(v85->clientNum, "ammo changed, sending %d bits as flag bit, %i bit index (value is %i) followed by the ammo value as short\n", 10i64, (unsigned int)v93, fmt);
      }
      MSG_WriteBit1(v11);
      MSG_WriteBits(v11, (const __int64)v94, 4u);
      MSG_WriteBits(v11, *(v95 - 1), 1u);
      MSG_WriteWeapon(v11, v92);
      v98 = *v95;
      if ( *v95 >= 1024 )
      {
        v98 = 1023;
        if ( !v97 )
          Com_Printf(15, "Stored ammo clamped to %i when packed into message.\n", 1023i64);
      }
      MSG_WriteBits(v11, v98, 0xAu);
      v94 = snapInfoa;
    }
    v96 = (signed __int64)v187;
    v94 = (SnapshotInfo *)((char *)v94 + 1);
    ++v93;
    snapInfoa = v94;
    v92 = (const Weapon *)((char *)v92 + 68);
    v95 += 17;
  }
  while ( v93 < 15 );
  MSG_WriteBit0(v11);
  LODWORD(v178) = MSG_GetUsedBitCount(v11);
  v99 = (_DWORD)v178 - v167;
  SV_TrackPSBitsForSegment(v85, (_DWORD)v178 - v167, PLAYERSTATE_SEGMENT_AMMO);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v99, 2);
  v100 = toData;
  objectives = oldPs->objectives;
  v102 = toData + 4720;
  if ( !memcmp_0(oldPs->objectives, toData + 4720, 0x1580ui64) )
  {
    MSG_WriteBit0(v11);
  }
  else
  {
    v103 = g_newNetFieldList[3];
    v85->fieldChangesCount = 47;
    v104 = v103->count;
    v105 = v103->array;
    skippedNetfieldBits = v103->skippedNetfieldBits;
    v85->fieldChanges = orderInfo.objective;
    MSG_WriteBit1(v11);
    v106 = v102 - (unsigned __int8 *)objectives;
    v107 = 0;
    v187 = (char *)v106;
    do
    {
      if ( !v85->archived )
        SV_LogSnapshotContent(v85->clientNum, "sending objective %i\n", (unsigned int)v107);
      v108 = (const unsigned __int8 *)objectives + v106;
      lc = MSG_GetLastChangedField(v85, (const unsigned __int8 *)objectives, v108, v104, v105, v107);
      MSG_WriteDeltaFields(v85, v11, timea, (const unsigned __int8 *)objectives, v108, 0, lc - 1, v104, v105, skippedNetfieldBits, NULL);
      v106 = (__int64)v187;
      ++v107;
      ++objectives;
    }
    while ( v107 < 32 );
    v100 = toData;
  }
  v109 = MSG_GetUsedBitCount(v11);
  v110 = v109 - (_DWORD)v178;
  v111 = v109;
  SV_TrackPSBitsForSegment(v85, v109 - (_DWORD)v178, PLAYERSTATE_SEGMENT_OBJECTIVES);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v110, 3);
  v112 = oldPs;
  v113 = v85->archived;
  if ( !memcmp_0(&oldPs->hud, v100 + 12152, 0x2058ui64) )
  {
    if ( !v113 )
      SV_LogSnapshotContent(v85->clientNum, "no hudelems changed\n");
    MSG_WriteBit0(v11);
  }
  else
  {
    if ( !v113 )
      SV_LogSnapshotContent(v85->clientNum, "hudelems changed\n");
    MSG_WriteBit1(v11);
    if ( !v113 )
      SV_LogSnapshotContent(v85->clientNum, "sending archived hudelems\n");
    v114 = timea;
    MSG_WriteDeltaHudElems(v85, v11, timea, v112->hud.archival, (const hudelem_t *)(v100 + 17672), 15, 4);
    if ( !v85->archived )
      SV_LogSnapshotContent(v85->clientNum, "sending current hudelems\n");
    MSG_WriteDeltaHudElems(v85, v11, v114, v112->hud.current, (const hudelem_t *)(v100 + 12152), 30, 5);
  }
  v115 = MSG_GetUsedBitCount(v11) - v111;
  SV_TrackPSBitsForSegment(v85, v115, PLAYERSTATE_SEGMENT_HUDELEMS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v115, 4);
  PlayerStateDefs = BG_Omnvar_GetPlayerStateDefs();
  v117 = BG_Omnvar_PerPlayerstateCount();
  v118 = BG_Omnvar_PerPlayerstateMinBitsForIndex();
  v119 = MSG_GetUsedBitCount(v11);
  v120 = MSG_WriteDeltaOmnvars_Internal(v85, v11, timea, v117, v118, oldPs->rxvOmnvars, (const OmnvarData *)v100 + 2554, PlayerStateDefs);
  v121 = MSG_GetUsedBitCount(v11);
  SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot(v85, v121 - v119, v120);
  v122 = v100 + 10224;
  headIcons = oldPs->headIcons;
  LODWORD(v178) = MSG_GetUsedBitCount(v11);
  v85->fieldChangesCount = 6;
  v85->fieldChanges = orderInfo.headIcon;
  if ( !memcmp_0(headIcons, v100 + 10224, 0x300ui64) )
  {
    MSG_WriteBit0(v11);
  }
  else
  {
    v124 = g_newNetFieldList[4]->count;
    v125 = g_newNetFieldList[4]->array;
    v169 = g_newNetFieldList[4]->skippedNetfieldBits;
    MSG_WriteBit1(v11);
    v126 = v122 - (unsigned __int8 *)headIcons;
    v127 = 0;
    v187 = (char *)v126;
    do
    {
      v128 = (const unsigned __int8 *)headIcons + v126;
      v129 = MSG_GetLastChangedField(v85, (const unsigned __int8 *)headIcons, v128, v124, v125, v127);
      MSG_WriteDeltaFields(v85, v11, timea, (const unsigned __int8 *)headIcons, v128, 0, v129 - 1, v124, v125, v169, NULL);
      v126 = (__int64)v187;
      ++v127;
      ++headIcons;
    }
    while ( v127 < 32 );
    v100 = toData;
  }
  v130 = MSG_GetUsedBitCount(v11);
  v131 = v130 - (_DWORD)v178;
  SV_TrackPSBitsForSegment(v85, v130 - (_DWORD)v178, PLAYERSTATE_SEGMENT_HEADICONS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v131, 5);
  v132 = v100 + 10992;
  headIconsExtendedData = oldPs->headIconsExtendedData;
  LODWORD(v178) = MSG_GetUsedBitCount(v11);
  v85->fieldChangesCount = 5;
  v85->fieldChanges = orderInfo.headIconExtendedData;
  if ( !memcmp_0(headIconsExtendedData, v100 + 10992, 0x200ui64) )
  {
    MSG_WriteBit0(v11);
  }
  else
  {
    v134 = g_newNetFieldList[5]->count;
    v135 = g_newNetFieldList[5]->array;
    v170 = g_newNetFieldList[5]->skippedNetfieldBits;
    MSG_WriteBit1(v11);
    v136 = v132 - (unsigned __int8 *)headIconsExtendedData;
    v137 = 0;
    v187 = (char *)v136;
    do
    {
      v138 = (const unsigned __int8 *)headIconsExtendedData + v136;
      v139 = MSG_GetLastChangedField(v85, (const unsigned __int8 *)headIconsExtendedData, v138, v134, v135, v137);
      MSG_WriteDeltaFields(v85, v11, timea, (const unsigned __int8 *)headIconsExtendedData, v138, 0, v139 - 1, v134, v135, v170, NULL);
      v136 = (__int64)v187;
      ++v137;
      ++headIconsExtendedData;
    }
    while ( v137 < 32 );
    v100 = toData;
  }
  v140 = MSG_GetUsedBitCount(v11);
  v141 = v140 - (_DWORD)v178;
  SV_TrackPSBitsForSegment(v85, v140 - (_DWORD)v178, PLAYERSTATE_SEGMENT_HEADICONS_EXTENDED);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v141, 6);
  v142 = v100 + 11504;
  targetMarkerGroups = oldPs->targetMarkerGroups;
  LODWORD(v178) = MSG_GetUsedBitCount(v11);
  v85->fieldChangesCount = 62;
  v85->fieldChanges = orderInfo.targetMarkers;
  if ( !memcmp_0(targetMarkerGroups, v100 + 11504, 0xB0ui64) )
  {
    MSG_WriteBit0(v11);
  }
  else
  {
    v144 = g_newNetFieldList[6]->count;
    v145 = g_newNetFieldList[6]->array;
    v171 = g_newNetFieldList[6]->skippedNetfieldBits;
    MSG_WriteBit1(v11);
    v146 = v142 - (unsigned __int8 *)targetMarkerGroups;
    v147 = 0;
    v187 = (char *)v146;
    do
    {
      v148 = (const unsigned __int8 *)targetMarkerGroups + v146;
      v149 = MSG_GetLastChangedField(v85, (const unsigned __int8 *)targetMarkerGroups, v148, v144, v145, v147);
      MSG_WriteDeltaFields(v85, v11, timea, (const unsigned __int8 *)targetMarkerGroups, v148, 0, v149 - 1, v144, v145, v171, NULL);
      v146 = (__int64)v187;
      ++v147;
      ++targetMarkerGroups;
    }
    while ( v147 < 2 );
    v100 = toData;
  }
  v150 = MSG_GetUsedBitCount(v11);
  v151 = v150 - (_DWORD)v178;
  SV_TrackPSBitsForSegment(v85, v150 - (_DWORD)v178, PLAYERSTATE_SEGMENT_TARGETMARKERS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v151, 7);
  v152 = v100 + 11680;
  calloutMarkerPings = oldPs->calloutMarkerPings;
  LODWORD(v178) = MSG_GetUsedBitCount(v11);
  v85->fieldChangesCount = 8;
  v85->fieldChanges = orderInfo.calloutMarkers;
  if ( !memcmp_0(calloutMarkerPings, v100 + 11680, 0x1A0ui64) )
  {
    MSG_WriteBit0(v11);
  }
  else
  {
    v154 = g_newNetFieldList[10]->count;
    v155 = g_newNetFieldList[10]->array;
    v172 = g_newNetFieldList[10]->skippedNetfieldBits;
    MSG_WriteBit1(v11);
    v156 = v152 - (unsigned __int8 *)calloutMarkerPings;
    v157 = 0;
    v187 = (char *)v156;
    do
    {
      v158 = (const unsigned __int8 *)calloutMarkerPings + v156;
      v159 = MSG_GetLastChangedField(v85, (const unsigned __int8 *)calloutMarkerPings, v158, v154, v155, v157);
      MSG_WriteDeltaFields(v85, v11, timea, (const unsigned __int8 *)calloutMarkerPings, v158, 0, v159 - 1, v154, v155, v172, NULL);
      v156 = (__int64)v187;
      ++v157;
      ++calloutMarkerPings;
    }
    while ( v157 < 52 );
  }
  v160 = MSG_GetUsedBitCount(v11);
  v161 = v160 - (_DWORD)v178;
  SV_TrackPSBitsForSegment(v85, v160 - (_DWORD)v178, PLAYERSTATE_SEGMENT_CALLOUTMARKERS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v85, v161, 8);
  v162 = MSG_GetUsedBitCount(v11);
  SV_TrackPSBitsForSegment(v85, v162 - v181, PLAYERSTATE_SEGMENT_LAST);
  if ( !v85->archived && !v85->fromBaseline )
    SV_TrackFieldsChanged(lc);
  Profile_EndInternal(NULL);
}

/*
==============
MSG_WriteDeltaPlayerstateOmnvars
==============
*/
void MSG_WriteDeltaPlayerstateOmnvars(SnapshotInfo *snapInfo, msg_t *msg, const int time, const OmnvarData *fromOmnvars, const OmnvarData *toOmnvars)
{
  const OmnvarDef *omnvarDefs; 
  unsigned int v10; 
  unsigned int omnvarIdxBits; 
  int UsedBitCount; 
  int v13; 

  omnvarDefs = BG_Omnvar_GetPlayerStateDefs();
  v10 = BG_Omnvar_PerPlayerstateCount();
  omnvarIdxBits = BG_Omnvar_PerPlayerstateMinBitsForIndex();
  UsedBitCount = MSG_GetUsedBitCount(msg);
  LODWORD(omnvarDefs) = MSG_WriteDeltaOmnvars_Internal(snapInfo, msg, time, v10, omnvarIdxBits, fromOmnvars, toOmnvars, omnvarDefs);
  v13 = MSG_GetUsedBitCount(msg);
  SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot(snapInfo, v13 - UsedBitCount, (const unsigned int)omnvarDefs);
}

/*
==============
MSG_WriteDeltaScoreboard
==============
*/
void MSG_WriteDeltaScoreboard(SnapshotInfo *snapInfo, msg_t *msg, const int time, const ScoreboardInfo *from, const ScoreboardInfo *to)
{
  const ScoreboardInfo *v5; 
  int v7; 
  int v8; 
  char v9; 
  bool v10; 
  __int64 v11; 
  signed __int64 v12; 
  char *v13; 
  unsigned __int8 *p_status; 
  bool v15; 
  char *v16; 
  const ScoreboardInfo *v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  __int16 Field; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  int *teamPlacement; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  SnapshotInfo *v34; 
  bool archived; 
  unsigned int v36; 
  unsigned int BitsNeededForType; 
  __int64 v38; 
  SnapshotInfo *v39; 
  char *v40; 
  bool v41; 
  int v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  __int64 v47; 
  unsigned __int64 v48; 
  unsigned int v49; 
  __int64 v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned __int16 v53; 
  __int64 v54; 
  __int64 v55; 
  unsigned __int64 v56; 
  unsigned int v57; 
  unsigned __int64 v58; 
  unsigned int v59; 
  int v60; 
  __int16 v61; 
  __int64 v62; 
  __int64 v63; 
  unsigned __int64 v64; 
  unsigned int v65; 
  __int64 v66; 
  __int64 v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned __int16 v70; 
  __int64 v71; 
  __int64 v72; 
  unsigned __int64 v73; 
  unsigned int v74; 
  unsigned __int64 v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned __int16 v78; 
  __int64 v79; 
  __int64 v80; 
  unsigned __int64 v81; 
  unsigned int v82; 
  unsigned __int64 v83; 
  unsigned int v84; 
  int v85; 
  __int16 v86; 
  __int64 v87; 
  __int64 v88; 
  unsigned __int64 v89; 
  unsigned int v90; 
  __int64 v91; 
  __int64 v92; 
  unsigned int v93; 
  unsigned int v94; 
  char v95; 
  __int64 v96; 
  __int64 v97; 
  unsigned __int64 v98; 
  unsigned int v99; 
  unsigned __int64 v100; 
  unsigned int v101; 
  int v102; 
  __int16 v103; 
  __int64 v104; 
  __int64 v105; 
  unsigned __int64 v106; 
  unsigned int v107; 
  __int64 v108; 
  __int64 v109; 
  unsigned int v110; 
  int v111; 
  __int16 v112; 
  __int64 v113; 
  __int64 v114; 
  unsigned __int64 v115; 
  unsigned int v116; 
  __int64 v117; 
  __int64 v118; 
  unsigned int v119; 
  unsigned int v120; 
  unsigned __int8 v121; 
  __int64 v122; 
  __int64 v123; 
  unsigned __int64 v124; 
  unsigned int v125; 
  unsigned __int64 v126; 
  unsigned int v127; 
  unsigned int v128; 
  unsigned __int16 v129; 
  __int64 v130; 
  __int64 v131; 
  unsigned __int64 v132; 
  unsigned int v133; 
  unsigned __int64 v134; 
  ScoreInfo *clientScores; 
  unsigned int ping; 
  unsigned int v137; 
  unsigned __int16 v138; 
  __int64 v139; 
  __int64 v140; 
  unsigned __int64 v141; 
  unsigned int v142; 
  unsigned __int64 v143; 
  int v144; 
  char *fmt; 
  __int64 v146; 
  unsigned int v147; 
  unsigned int v148; 
  char v149; 
  SnapshotInfo *snapInfoa; 
  int bits; 
  unsigned int v152; 
  int i; 
  const ScoreboardInfo *v154; 
  int UsedBitCount; 
  char *v156; 
  __int64 v157; 
  __int64 v158; 
  const ScoreboardInfo *v159; 
  __int64 v160; 
  char v161[6032]; 
  char v162[208]; 

  v5 = from;
  v159 = to;
  v154 = from;
  snapInfoa = snapInfo;
  if ( !from )
  {
    v5 = (const ScoreboardInfo *)v161;
    v154 = (const ScoreboardInfo *)v161;
    memset_0(v161, 0, 0x1784ui64);
  }
  v7 = SvClient::ms_clientCount;
  if ( SvClient::ms_clientCount - 1 > 0xC7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5418, ASSERT_TYPE_ASSERT, "( 1 ) <= ( SvClient::GetClientCount() ) && ( SvClient::GetClientCount() ) <= ( 200 )", "SvClient::GetClientCount() not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", SvClient::ms_clientCount, 1, 200) )
      __debugbreak();
    v7 = SvClient::ms_clientCount;
  }
  v8 = to->teamScores[0];
  v9 = 0;
  v149 = 0;
  v10 = *(_QWORD *)v5->teamScores != __PAIR64__(to->teamScores[1], v8);
  if ( v7 > 0 )
  {
    v11 = (unsigned int)v7;
    v12 = (char *)to - (char *)v5;
    v13 = v162;
    p_status = &v5->clientScores[0].status;
    do
    {
      v15 = p_status[v12] != *p_status || *(_WORD *)&p_status[v12 + 2] != *((_WORD *)p_status + 1) || *(_WORD *)&p_status[v12 + 4] != *((_WORD *)p_status + 2) || *(_WORD *)&p_status[v12 + 6] != *((_WORD *)p_status + 3) || *(_WORD *)&p_status[v12 + 8] != *((_WORD *)p_status + 4) || *(_WORD *)&p_status[v12 + 10] != *((_WORD *)p_status + 5) || *(_WORD *)&p_status[v12 + 12] != *((_WORD *)p_status + 6) || *(_WORD *)&p_status[v12 + 14] != *((_WORD *)p_status + 7) || *(_WORD *)&p_status[v12 + 16] != *((_WORD *)p_status + 8);
      *v13 = v15;
      if ( v9 || *(_WORD *)&p_status[v12 - 2] != *((_WORD *)p_status - 1) )
        v9 = 1;
      if ( v10 || v9 || v15 )
        v10 = 1;
      ++v13;
      p_status += 26;
      --v11;
    }
    while ( v11 );
    v149 = v9;
  }
  if ( v10 )
  {
    UsedBitCount = MSG_GetUsedBitCount(msg);
    MSG_WriteBit1(msg);
    v16 = (char *)((char *)to - (char *)v5);
    v17 = v5;
    v156 = (char *)((char *)to - (char *)v5);
    v18 = 2i64;
    do
    {
      v19 = *(int *)((char *)v17->teamScores + (_QWORD)v16);
      v20 = v17->teamScores[0];
      i = v17->teamScores[0];
      v152 = v19;
      if ( v19 > 0xFFFF )
        Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", (unsigned int)v19, 0xFFFFi64, "teamScore");
      if ( v20 == v19 )
      {
        MSG_WriteBit0(msg);
      }
      else
      {
        MSG_WriteBit1(msg);
        Field = MSG_GetField(&i, -4);
        v22 = MSG_GetField(&v152, -4);
        v23 = v22;
        if ( v22 < 0 )
        {
          v25 = 15;
          v24 = -1 - v22;
        }
        else
        {
          v24 = v22;
          v25 = 16;
        }
        if ( 64 - (unsigned int)__lzcnt(v24) > v25 )
        {
          LODWORD(fmt) = 16;
          Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v22, "teamScore", fmt);
          LODWORD(v146) = 16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v23, "teamScore", v146) )
            __debugbreak();
        }
        v26 = (unsigned __int16)(Field ^ v23);
        if ( 64 - (unsigned int)__lzcnt(v26) > 0x10 )
        {
          LODWORD(fmt) = 16;
          Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v26, "teamScore", fmt);
          LODWORD(v146) = 16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v26, "teamScore", v146) )
            __debugbreak();
        }
        v27 = 2i64;
        do
        {
          MSG_WriteByte(msg, v26);
          v26 >>= 8;
          --v27;
        }
        while ( v27 );
        if ( !snapInfoa->archived )
        {
          LODWORD(fmt) = v19;
          SV_LogSnapshotContent(snapInfoa->clientNum, "scoreboard value %s changed from %d to %d\n", "teamScore", v20, fmt);
        }
      }
      v16 = v156;
      v17 = (const ScoreboardInfo *)((char *)v17 + 4);
      --v18;
    }
    while ( v18 );
    LODWORD(v28) = 0;
    v157 = 0i64;
    v29 = 0i64;
    teamPlacement = v154->teamPlacement;
    v31 = 203i64;
    v32 = (__int64)v156;
    do
    {
      v33 = *(int *)((char *)teamPlacement + v32);
      if ( *teamPlacement != (_DWORD)v33 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, v29, 8u);
        MSG_WriteBits(msg, v33, 8u);
      }
      ++v29;
      ++teamPlacement;
      --v31;
    }
    while ( v31 );
    MSG_WriteBit0(msg);
    v34 = snapInfoa;
    archived = snapInfoa->archived;
    if ( !archived )
      SV_LogSnapshotContent(snapInfoa->clientNum, "%d bytes written (after team scores)\n", (unsigned int)msg->cursize);
    v36 = NetConstStrings_GetCountForType(NETCONSTSTRINGTYPE_STATUSICON) + 1;
    v152 = v36;
    BitsNeededForType = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_STATUSICON);
    bits = BitsNeededForType;
    i = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      v38 = 0i64;
      v158 = 0i64;
      v160 = __ROL8__(1i64, BitsNeededForType);
      do
      {
        v39 = (SnapshotInfo *)((char *)v159 + 26 * v38);
        v40 = (char *)v154 + 26 * v38;
        v41 = v162[v38] == 0;
        snapInfoa = v39;
        if ( v41 )
        {
          MSG_WriteBit0(msg);
          archived = v34->archived;
        }
        else
        {
          MSG_WriteBit1(msg);
          v42 = BYTE2(v39[1].oldEntitiesLoD.array[34]);
          v43 = (unsigned __int8)v40[822];
          v147 = v43;
          v148 = v42;
          if ( v42 > (int)v36 )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", (unsigned int)v42, v36, "status");
          if ( v43 == v42 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v44 = MSG_GetField(&v147, -4);
            v45 = MSG_GetField(&v148, -4);
            v46 = bits;
            v47 = v45;
            if ( v45 < 0 )
            {
              v49 = bits - 1;
              v48 = -1 - v45;
            }
            else
            {
              v48 = v45;
              if ( bits >= 0 )
              {
                v49 = bits;
              }
              else
              {
                v46 = bits;
                v49 = abs32(bits) - 1;
              }
            }
            if ( 64 - (unsigned int)__lzcnt(v48) > v49 )
            {
              LODWORD(fmt) = v46;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v45, "status", fmt);
              LODWORD(v146) = bits;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v47, "status", v146) )
                __debugbreak();
            }
            v50 = v44 ^ v47;
            if ( bits >= 0 && bits != 64 )
              v50 &= v160 - 1;
            MSG_WriteValueNoXor(msg, v50, bits, "status");
            if ( !v34->archived )
            {
              LODWORD(fmt) = v42;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "status", v43, fmt);
            }
          }
          v51 = *((unsigned __int16 *)v40 + 414);
          v148 = v51;
          v52 = LOWORD(snapInfoa[1].oldEntitiesLoD.array[36]);
          v147 = v52;
          if ( v52 > 0x3E7 )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v52, 999i64, "deaths");
          if ( v51 == v52 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v53 = MSG_GetField(&v148, -4);
            v54 = MSG_GetField(&v147, -4);
            v55 = v54;
            if ( v54 < 0 )
            {
              v57 = 9;
              v56 = -1 - v54;
            }
            else
            {
              v56 = v54;
              v57 = 10;
            }
            if ( 64 - (unsigned int)__lzcnt(v56) > v57 )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v54, "deaths", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v55, "deaths", v146) )
                __debugbreak();
            }
            v58 = (v53 ^ (unsigned __int16)v55) & 0x3FF;
            if ( 64 - (unsigned int)__lzcnt(v58) > 0xA )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v58, "deaths", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v58, "deaths", v146) )
                __debugbreak();
            }
            MSG_WriteBits(msg, v58, 2u);
            MSG_WriteByte(msg, v58 >> 2);
            if ( !v34->archived )
            {
              LODWORD(fmt) = v52;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "deaths", v51, fmt);
            }
          }
          v59 = *((unsigned __int16 *)v40 + 412);
          v148 = v59;
          v60 = LOWORD(snapInfoa[1].oldEntitiesLoD.array[35]);
          v147 = v60;
          if ( v59 == v60 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v61 = MSG_GetField(&v148, -4);
            v62 = MSG_GetField(&v147, -4);
            v63 = v62;
            if ( v62 < 0 )
            {
              v65 = 15;
              v64 = -1 - v62;
            }
            else
            {
              v64 = v62;
              v65 = 16;
            }
            if ( 64 - (unsigned int)__lzcnt(v64) > v65 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v62, "score", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v63, "score", v146) )
                __debugbreak();
            }
            v66 = (unsigned __int16)(v61 ^ v63);
            if ( 64 - (unsigned int)__lzcnt(v66) > 0x10 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v66, "score", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v66, "score", v146) )
                __debugbreak();
            }
            v67 = 2i64;
            do
            {
              MSG_WriteByte(msg, v66);
              v66 >>= 8;
              --v67;
            }
            while ( v67 );
            if ( !v34->archived )
            {
              LODWORD(fmt) = v60;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "score", v59, fmt);
            }
          }
          v68 = *((unsigned __int16 *)v40 + 413);
          v148 = v68;
          v69 = HIWORD(snapInfoa[1].oldEntitiesLoD.array[35]);
          v147 = v69;
          if ( v69 > 0x3A98 )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v69, 15000i64, "kills");
          if ( v68 == v69 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v70 = MSG_GetField(&v148, -4);
            v71 = MSG_GetField(&v147, -4);
            v72 = v71;
            if ( v71 < 0 )
            {
              v74 = 13;
              v73 = -1 - v71;
            }
            else
            {
              v73 = v71;
              v74 = 14;
            }
            if ( 64 - (unsigned int)__lzcnt(v73) > v74 )
            {
              LODWORD(fmt) = 14;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v71, "kills", fmt);
              LODWORD(v146) = 14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v72, "kills", v146) )
                __debugbreak();
            }
            v75 = (v70 ^ (unsigned __int16)v72) & 0x3FFF;
            if ( 64 - (unsigned int)__lzcnt(v75) > 0xE )
            {
              LODWORD(fmt) = 14;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v75, "kills", fmt);
              LODWORD(v146) = 14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v75, "kills", v146) )
                __debugbreak();
            }
            MSG_WriteBits(msg, v75, 6u);
            MSG_WriteByte(msg, v75 >> 6);
            if ( !v34->archived )
            {
              LODWORD(fmt) = v69;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "kills", v68, fmt);
            }
          }
          v76 = *((unsigned __int16 *)v40 + 415);
          v148 = v76;
          v77 = HIWORD(snapInfoa[1].oldEntitiesLoD.array[36]);
          v147 = v77;
          if ( v77 > 0x3E7 )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v77, 999i64, "assists");
          if ( v76 == v77 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v78 = MSG_GetField(&v148, -4);
            v79 = MSG_GetField(&v147, -4);
            v80 = v79;
            if ( v79 < 0 )
            {
              v82 = 9;
              v81 = -1 - v79;
            }
            else
            {
              v81 = v79;
              v82 = 10;
            }
            if ( 64 - (unsigned int)__lzcnt(v81) > v82 )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v79, "assists", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v80, "assists", v146) )
                __debugbreak();
            }
            v83 = (v78 ^ (unsigned __int16)v80) & 0x3FF;
            if ( 64 - (unsigned int)__lzcnt(v83) > 0xA )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v83, "assists", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v83, "assists", v146) )
                __debugbreak();
            }
            MSG_WriteBits(msg, v83, 2u);
            MSG_WriteByte(msg, v83 >> 2);
            if ( !v34->archived )
            {
              LODWORD(fmt) = v77;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "assists", v76, fmt);
            }
          }
          v84 = *((unsigned __int16 *)v40 + 416);
          v148 = v84;
          v85 = LOWORD(snapInfoa[1].oldEntitiesLoD.array[37]);
          v147 = v85;
          if ( v84 == v85 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v86 = MSG_GetField(&v148, -4);
            v87 = MSG_GetField(&v147, -4);
            v88 = v87;
            if ( v87 < 0 )
            {
              v90 = 15;
              v89 = -1 - v87;
            }
            else
            {
              v89 = v87;
              v90 = 16;
            }
            if ( 64 - (unsigned int)__lzcnt(v89) > v90 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v87, "extrascore0", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v88, "extrascore0", v146) )
                __debugbreak();
            }
            v91 = (unsigned __int16)(v86 ^ v88);
            if ( 64 - (unsigned int)__lzcnt(v91) > 0x10 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v91, "extrascore0", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v91, "extrascore0", v146) )
                __debugbreak();
            }
            v92 = 2i64;
            do
            {
              MSG_WriteByte(msg, v91);
              v91 >>= 8;
              --v92;
            }
            while ( v92 );
            if ( !v34->archived )
            {
              LODWORD(fmt) = v85;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "extrascore0", v84, fmt);
            }
          }
          v93 = *((unsigned __int16 *)v40 + 417);
          v148 = v93;
          v94 = HIWORD(snapInfoa[1].oldEntitiesLoD.array[37]);
          v147 = v94;
          if ( v94 > 0xFF )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v94, 255i64, "extrascore1");
          if ( v93 == v94 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v95 = MSG_GetField(&v148, -4);
            v96 = MSG_GetField(&v147, -4);
            v97 = v96;
            if ( v96 < 0 )
            {
              v99 = 7;
              v98 = -1 - v96;
            }
            else
            {
              v98 = v96;
              v99 = 8;
            }
            if ( 64 - (unsigned int)__lzcnt(v98) > v99 )
            {
              LODWORD(fmt) = 8;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v96, "extrascore1", fmt);
              LODWORD(v146) = 8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v97, "extrascore1", v146) )
                __debugbreak();
            }
            v100 = (unsigned __int8)(v95 ^ v97);
            if ( 64 - (unsigned int)__lzcnt(v100) > 8 )
            {
              LODWORD(fmt) = 8;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v100, "extrascore1", fmt);
              LODWORD(v146) = 8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v100, "extrascore1", v146) )
                __debugbreak();
            }
            MSG_WriteByte(msg, v100);
            if ( !v34->archived )
            {
              LODWORD(fmt) = v94;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "extrascore1", v93, fmt);
            }
          }
          v101 = *((unsigned __int16 *)v40 + 418);
          v148 = v101;
          v102 = LOWORD(snapInfoa[1].oldEntitiesLoD.array[38]);
          v147 = v102;
          if ( v101 == v102 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v103 = MSG_GetField(&v148, -4);
            v104 = MSG_GetField(&v147, -4);
            v105 = v104;
            if ( v104 < 0 )
            {
              v107 = 15;
              v106 = -1 - v104;
            }
            else
            {
              v106 = v104;
              v107 = 16;
            }
            if ( 64 - (unsigned int)__lzcnt(v106) > v107 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v104, "extrascore2", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v105, "extrascore2", v146) )
                __debugbreak();
            }
            v108 = (unsigned __int16)(v103 ^ v105);
            if ( 64 - (unsigned int)__lzcnt(v108) > 0x10 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v108, "extrascore2", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v108, "extrascore2", v146) )
                __debugbreak();
            }
            v109 = 2i64;
            do
            {
              MSG_WriteByte(msg, v108);
              v108 >>= 8;
              --v109;
            }
            while ( v109 );
            if ( !v34->archived )
            {
              LODWORD(fmt) = v102;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "extrascore2", v101, fmt);
            }
          }
          v110 = *((unsigned __int16 *)v40 + 419);
          v148 = v110;
          v111 = HIWORD(snapInfoa[1].oldEntitiesLoD.array[38]);
          v147 = v111;
          if ( v110 == v111 )
          {
            MSG_WriteBit0(msg);
            archived = v34->archived;
          }
          else
          {
            MSG_WriteBit1(msg);
            v112 = MSG_GetField(&v148, -4);
            v113 = MSG_GetField(&v147, -4);
            v114 = v113;
            if ( v113 < 0 )
            {
              v116 = 15;
              v115 = -1 - v113;
            }
            else
            {
              v115 = v113;
              v116 = 16;
            }
            if ( 64 - (unsigned int)__lzcnt(v115) > v116 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v113, "extrascore3", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v114, "extrascore3", v146) )
                __debugbreak();
            }
            v117 = (unsigned __int16)(v112 ^ v114);
            if ( 64 - (unsigned int)__lzcnt(v117) > 0x10 )
            {
              LODWORD(fmt) = 16;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v117, "extrascore3", fmt);
              LODWORD(v146) = 16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v117, "extrascore3", v146) )
                __debugbreak();
            }
            v118 = 2i64;
            do
            {
              MSG_WriteByte(msg, v117);
              v117 >>= 8;
              --v118;
            }
            while ( v118 );
            archived = v34->archived;
            if ( !archived )
            {
              LODWORD(fmt) = v111;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "extrascore3", v110, fmt);
            }
          }
          v119 = *((unsigned __int16 *)v40 + 421);
          v148 = v119;
          v120 = HIWORD(snapInfoa[1].oldEntitiesLoD.array[39]);
          v147 = v120;
          if ( v120 > 0x3F )
          {
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v120, 63i64, "adrenaline");
            archived = v34->archived;
          }
          if ( v119 == v120 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v121 = MSG_GetField(&v148, -4);
            v122 = MSG_GetField(&v147, -4);
            v123 = v122;
            if ( v122 < 0 )
            {
              v125 = 5;
              v124 = -1 - v122;
            }
            else
            {
              v124 = v122;
              v125 = 6;
            }
            if ( 64 - (unsigned int)__lzcnt(v124) > v125 )
            {
              LODWORD(fmt) = 6;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v122, "adrenaline", fmt);
              LODWORD(v146) = 6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v123, "adrenaline", v146) )
                __debugbreak();
            }
            v126 = (v121 ^ (unsigned __int8)v123) & 0x3F;
            if ( 64 - (unsigned int)__lzcnt(v126) > 6 )
            {
              LODWORD(fmt) = 6;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v126, "adrenaline", fmt);
              LODWORD(v146) = 6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v126, "adrenaline", v146) )
                __debugbreak();
            }
            MSG_WriteBits(msg, v126, 6u);
            archived = v34->archived;
            if ( !archived )
            {
              LODWORD(fmt) = v120;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "adrenaline", v119, fmt);
            }
          }
          v127 = *((unsigned __int16 *)v40 + 422);
          v148 = v127;
          v128 = LOWORD(snapInfoa[1].oldEntitiesLoD.array[40]);
          v147 = v128;
          if ( v128 > 0x3FF )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v128, 1023i64, "deathTimerLength");
          if ( v127 == v128 )
          {
            MSG_WriteBit0(msg);
          }
          else
          {
            MSG_WriteBit1(msg);
            v129 = MSG_GetField(&v148, -4);
            v130 = MSG_GetField(&v147, -4);
            v131 = v130;
            if ( v130 < 0 )
            {
              v133 = 9;
              v132 = -1 - v130;
            }
            else
            {
              v132 = v130;
              v133 = 10;
            }
            if ( 64 - (unsigned int)__lzcnt(v132) > v133 )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v130, "deathTimerLength", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v131, "deathTimerLength", v146) )
                __debugbreak();
            }
            v134 = (v129 ^ (unsigned __int16)v131) & 0x3FF;
            if ( 64 - (unsigned int)__lzcnt(v134) > 0xA )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v134, "deathTimerLength", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v134, "deathTimerLength", v146) )
                __debugbreak();
            }
            MSG_WriteBits(msg, v134, 2u);
            MSG_WriteByte(msg, v134 >> 2);
            archived = v34->archived;
            if ( !archived )
            {
              LODWORD(fmt) = v128;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "deathTimerLength", v127, fmt);
            }
          }
          v36 = v152;
        }
        v38 = v158 + 1;
        ++i;
        ++v158;
      }
      while ( i < (int)SvClient::ms_clientCount );
      LODWORD(v28) = 0;
    }
    if ( !archived )
      SV_LogSnapshotContent(v34->clientNum, "%d bytes written (after client scores)\n", (unsigned int)msg->cursize);
    if ( v149 )
    {
      MSG_WriteBit1(msg);
      if ( (int)SvClient::ms_clientCount > 0 )
      {
        clientScores = v154->clientScores;
        do
        {
          ping = clientScores->ping;
          v148 = ping;
          v137 = *(unsigned __int16 *)((char *)&clientScores->ping + (_QWORD)v156);
          v147 = v137;
          if ( v137 > 0x3FF )
            Com_PrintWarning(25, "%d exceeds max value of %d for scoreboard parameter '%s' may get truncated\n", v137, 1023i64, "ping");
          if ( ping == v137 )
          {
            MSG_WriteBit0(msg);
            archived = v34->archived;
          }
          else
          {
            MSG_WriteBit1(msg);
            v138 = MSG_GetField(&v148, -4);
            v139 = MSG_GetField(&v147, -4);
            v140 = v139;
            if ( v139 < 0 )
            {
              v142 = 9;
              v141 = -1 - v139;
            }
            else
            {
              v141 = v139;
              v142 = 10;
            }
            if ( 64 - (unsigned int)__lzcnt(v141) > v142 )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v139, "ping", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v140, "ping", v146) )
                __debugbreak();
            }
            v143 = (v138 ^ (unsigned __int16)v140) & 0x3FF;
            if ( 64 - (unsigned int)__lzcnt(v143) > 0xA )
            {
              LODWORD(fmt) = 10;
              Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", (unsigned int)v143, "ping", fmt);
              LODWORD(v146) = 10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v143, "ping", v146) )
                __debugbreak();
            }
            MSG_WriteBits(msg, v143, 2u);
            MSG_WriteByte(msg, v143 >> 2);
            archived = v34->archived;
            if ( !archived )
            {
              LODWORD(fmt) = v137;
              SV_LogSnapshotContent(v34->clientNum, "scoreboard value %s changed from %d to %d\n", "ping", ping, fmt);
            }
            LODWORD(v28) = v157;
          }
          v28 = (unsigned int)(v28 + 1);
          ++clientScores;
          v157 = v28;
        }
        while ( (int)v28 < (int)SvClient::ms_clientCount );
      }
      if ( !archived )
        SV_LogSnapshotContent(v34->clientNum, "%d bytes written (after ping scores)\n", (unsigned int)msg->cursize);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
    v144 = MSG_GetUsedBitCount(msg);
    SV_BandwidthProfile_AddScoreboardToSnapshot(v34, v144 - UsedBitCount);
  }
  else
  {
    MSG_WriteBit0(msg);
  }
}

/*
==============
MSG_WriteDeltaStruct
==============
*/
__int64 MSG_WriteDeltaStruct(SnapshotInfo *snapInfo, msg_t *msg, const int time, const unsigned __int8 *from, const unsigned __int8 *to, int force, int writeIndex, const int numFields, const int indexBits, const int indexSize, const NetField *stateFields, int skippedFieldBits, ServerEntityHeader *const outHeader)
{
  __int64 Field; 
  __int16 v16; 
  __int16 v18; 
  __int64 result; 
  __int64 v20; 
  __int64 v21; 
  __int16 v22; 
  __int16 v23; 
  int UsedBitCount; 
  int indexBitsa; 

  UsedBitCount = MSG_GetUsedBitCount(msg);
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3448, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3449, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  Field = MSG_GetField(to, indexSize);
  v16 = truncate_cast<short,__int64>(Field);
  v18 = v16;
  if ( v16 >= 1i64 << indexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3453, ASSERT_TYPE_ASSERT, "(entityIndex < (1ll << indexBits))", "%s\n\tto = %d, bits = %i", "entityIndex < (1ll << indexBits)", v16, indexBits) )
    __debugbreak();
  result = MSG_GetLastChangedField(snapInfo, from, to, numFields, stateFields, v18);
  indexBitsa = result;
  if ( (_DWORD)result )
  {
    if ( !snapInfo->archived )
    {
      SV_LogSnapshotContent(snapInfo->clientNum, "Struct had a delta\n");
      if ( !snapInfo->archived )
        SV_LogSnapshotContent(snapInfo->clientNum, "Writing 1 for bChangeBit\n");
    }
    MSG_WriteBit1(msg);
    if ( !snapInfo->archived )
    {
      v20 = MSG_GetField(to, indexSize);
      SV_LogSnapshotContent(snapInfo->clientNum, "%sWriting index number %lld\n", (const char *)&queryFormat.fmt + 3, v20);
    }
    v21 = MSG_GetField(to, indexSize);
    v22 = truncate_cast<short,__int64>(v21);
    v23 = v22;
    if ( writeIndex )
      MSG_WriteEntityIndex(snapInfo, msg, v22, indexBits);
    if ( !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Writing 0,1 to say it's not removed and we have a delta\n");
    MSG_WriteBit0(msg);
    MSG_WriteDeltaFields(snapInfo, msg, time, from, to, force, indexBitsa - 1, numFields, stateFields, skippedFieldBits, outHeader);
    SV_BandwidthProfile_AddSerializedEntityToSnapshot(snapInfo, v23, 0);
  }
  else
  {
    if ( !force )
      return result;
    if ( !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Struct %u did not change, but we're forcing a send to say this\n", *(unsigned int *)to);
    MSG_WriteBit1(msg);
    if ( writeIndex )
      MSG_WriteEntityIndex(snapInfo, msg, v18, indexBits);
    MSG_WriteBit0(msg);
    MSG_WriteBit0(msg);
  }
  return (unsigned int)(MSG_GetUsedBitCount(msg) - UsedBitCount);
}

/*
==============
MSG_WriteDeltaTime
==============
*/
void MSG_WriteDeltaTime(msg_t *msg, int timeBase, int time)
{
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 965, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( (unsigned int)(time - timeBase) >= 0xFFFFFF01 || time - timeBase == 0 )
  {
    MSG_WriteBit0(msg);
    MSG_WriteBits(msg, timeBase - time, 8u);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteLong(msg, time);
  }
}

/*
==============
MSG_WriteDeltaWeaponMapEntry
==============
*/
void MSG_WriteDeltaWeaponMapEntry(SnapshotInfo *snapInfo, msg_t *msg, const int weaponMapIndex, const WeaponMapEntry *from, const WeaponMapEntry *to)
{
  Weapon *p_weapon; 
  int UsedBitCount; 
  int v11; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5878, ASSERT_TYPE_ASSERT, "(snapInfo)", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5879, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( to )
  {
    p_weapon = &to->weapon;
    if ( !to->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5894, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( to->weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( to->weapon )") )
      __debugbreak();
    if ( !from )
      goto LABEL_21;
    if ( !from->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5895, ASSERT_TYPE_ASSERT, "((from == nullptr) || !BG_IsNullWeapon( from->weapon ))", (const char *)&queryFormat, "(from == nullptr) || !BG_IsNullWeapon( from->weapon )") )
      __debugbreak();
    if ( memcmp_0(&from->weapon, p_weapon, 0x3Cui64) )
    {
LABEL_21:
      UsedBitCount = MSG_GetUsedBitCount(msg);
      MSG_WriteWeaponMapEntry_Index(msg, weaponMapIndex);
      MSG_WriteBit0(msg);
      MSG_WriteWeapon(msg, p_weapon);
      v11 = MSG_GetUsedBitCount(msg);
      SV_BandwidthProfile_AddWeaponMapEntryToSnapshot(snapInfo, v11 - UsedBitCount);
    }
  }
  else if ( from )
  {
    if ( !from->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5885, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( from->weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( from->weapon )") )
      __debugbreak();
    MSG_WriteWeaponMapEntry_Index(msg, weaponMapIndex);
    MSG_WriteBit1(msg);
  }
}

/*
==============
MSG_WriteDynamicIndexField
==============
*/
void MSG_WriteDynamicIndexField(msg_t *msg, const NetField *field, const void *toF, const int bits)
{
  __int64 v8; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1732, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !toF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1733, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
    __debugbreak();
  v8 = MSG_GetField(toF, field->size);
  MSG_WriteValueNoXor(msg, v8, bits, field->name);
}

/*
==============
MSG_WriteEntity
==============
*/
char MSG_WriteEntity(SnapshotInfo *snapInfo, msg_t *msg, const int timeDeltaFrom, const int timeDeltaTo, const int time, const entityState_t *from, const entityState_t *to, ServerEntityHeader *const outHeader, bool force)
{
  unsigned __int64 v9; 
  const entityState_t *v10; 
  const entityState_t *v12; 
  const char *EntityTypeName; 
  PacketEntityType_e PacketEntityTypeForEType; 
  msg_t *v19; 
  entityType_s eType; 
  NetFieldLoD NewEntityLoD; 
  NetFieldLoD OldEntityLoD; 
  bool v23; 
  __m256i v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  __int16 v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  __m256i v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  __int16 v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  bool v44; 
  unsigned __int8 v45; 
  __int64 changeBit; 
  char v47[2]; 

  v9 = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64;
  v10 = from;
  v12 = to;
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 8) = msg;
  Profile_Begin(381);
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4087, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( outHeader )
  {
    if ( SV_SnapshotMP_GetNewEntityLoD(snapInfo, to->number) != NetFieldLoD_High && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4092, ASSERT_TYPE_ASSERT, "(( outHeader == nullptr ) || ( SV_SnapshotMP_GetNewEntityLoD( snapInfo, to->number ) == NetFieldLoD_High ))", "%s\n\tEntity %d `to` LoD should be set to NetFieldLoD_High when writing a server message\n", "( outHeader == nullptr ) || ( SV_SnapshotMP_GetNewEntityLoD( snapInfo, to->number ) == NetFieldLoD_High )", to->number) )
      __debugbreak();
    if ( SV_SnapshotMP_GetOldEntityLoD(snapInfo, to->number) != NetFieldLoD_High )
    {
      LODWORD(changeBit) = to->number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4093, ASSERT_TYPE_ASSERT, "(( outHeader == nullptr ) || ( SV_SnapshotMP_GetOldEntityLoD( snapInfo, to->number ) == NetFieldLoD_High ))", "%s\n\tEntity %d `from` LoD should be set to NetFieldLoD_High when writing a server message\n", "( outHeader == nullptr ) || ( SV_SnapshotMP_GetOldEntityLoD( snapInfo, to->number ) == NetFieldLoD_High )", changeBit) )
        __debugbreak();
    }
  }
  if ( snapInfo->packetIsDelta && snapInfo->entNeverChanges && !MSG_WriteNeverChangesEntity(snapInfo, from, to, outHeader) )
  {
    Profile_EndInternal(NULL);
    return 0;
  }
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4106, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !snapInfo->fromBaseline )
    SV_MsgMP_ValidateEntityState(from);
  if ( to )
  {
    SV_MsgMP_ValidateEntityState(to);
    eType = to->eType;
    *(_WORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 2) = eType;
    snapInfo->packetEntityType = MSG_GetPacketEntityTypeForEType(eType);
    if ( outHeader || (NewEntityLoD = SV_SnapshotMP_GetNewEntityLoD(snapInfo, to->number), OldEntityLoD = SV_SnapshotMP_GetOldEntityLoD(snapInfo, to->number), NewEntityLoD == OldEntityLoD) )
    {
      *(_BYTE *)v9 = 0;
      v23 = 0;
    }
    else
    {
      *(_BYTE *)v9 = 1;
      v23 = OldEntityLoD == NetFieldLoD_Low;
      if ( OldEntityLoD == NetFieldLoD_Low )
        goto LABEL_42;
    }
    if ( !timeDeltaFrom )
    {
LABEL_64:
      if ( timeDeltaTo )
      {
        v34 = *(__m256i *)((char *)&to->lerp.u.infoVolumeGrapple + 24);
        v35 = *(_QWORD *)&to->partBits.array[6];
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x140) = *(__m256i *)&to->number;
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x160) = *(__m256i *)&to->lerp.pos.trBase.y;
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x180) = *(__m256i *)to->lerp.apos.trBase.v;
        *(_OWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A0) = *(_OWORD *)&to->lerp.u.vehicle.bodyPitch;
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1B0) = v34;
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1D0) = *(__m256i *)&to->clientNum;
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1F0) = *(__m256i *)&to->events[2].eventType;
        *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x210) = *(__m256i *)&to->animInfo.selectAnim;
        *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x230) = v35;
        v36 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x154);
        if ( v36 )
          *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x154) = timeDeltaTo + v36;
        v37 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x178);
        if ( v37 )
          *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x178) = timeDeltaTo + v37;
        v38 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1C8);
        if ( v38 )
          *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1C8) = timeDeltaTo + v38;
        v39 = *(_WORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x148);
        if ( v39 == 4 && (v40 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A0)) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A0) = timeDeltaTo + v40;
        }
        else
        {
          v41 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x198);
          if ( v41 && (!v39 || v39 == 145) )
          {
            *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x198) = timeDeltaTo + v41;
          }
          else if ( v39 == 6 )
          {
            v42 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A8);
            if ( v42 )
              *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A8) = timeDeltaTo + v42;
            v43 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1AC);
            if ( v43 )
              *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1AC) = timeDeltaTo + v43;
          }
        }
        v12 = (const entityState_t *)(v9 + 320);
      }
      v44 = (*(_DWORD *)&v12->clientLinkInfo & 0x7FF) == 0 && (*(_DWORD *)&v10->clientLinkInfo & 0x7FF) != 0;
      v45 = *(_BYTE *)v9;
      snapInfo->entJustUnlinked = v44;
      if ( force || v45 || v44 || !v10 || memcmp_0(v10, v12, 0xF8ui64) )
      {
        MSG_WriteEntityDeltaForEType(snapInfo, *(msg_t **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 8), time, *(entityType_s *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 2), v10, v12, outHeader, force | v45);
      }
      else if ( outHeader )
      {
        outHeader->m_flags[0] |= 3u;
      }
      goto LABEL_96;
    }
LABEL_42:
    v24 = *(__m256i *)((char *)&from->lerp.u.infoVolumeGrapple + 24);
    v25 = *(_QWORD *)&from->partBits.array[6];
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x40) = *(__m256i *)&from->number;
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x60) = *(__m256i *)&from->lerp.pos.trBase.y;
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x80) = *(__m256i *)from->lerp.apos.trBase.v;
    *(_OWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA0) = *(_OWORD *)&from->lerp.u.vehicle.bodyPitch;
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xB0) = v24;
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xD0) = *(__m256i *)&from->clientNum;
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xF0) = *(__m256i *)&from->events[2].eventType;
    *(__m256i *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x110) = *(__m256i *)&from->animInfo.selectAnim;
    *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x130) = v25;
    if ( timeDeltaFrom )
    {
      v26 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x54);
      if ( v26 )
        *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x54) = timeDeltaFrom + v26;
      v27 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x78);
      if ( v27 )
        *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x78) = timeDeltaFrom + v27;
      v28 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC8);
      if ( v28 )
        *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC8) = timeDeltaFrom + v28;
      v29 = *(_WORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x48);
      if ( v29 == 4 && (v30 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA0)) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA0) = timeDeltaFrom + v30;
      }
      else
      {
        v31 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x98);
        if ( v31 && (!v29 || v29 == 145) )
        {
          *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0x98) = timeDeltaFrom + v31;
        }
        else if ( v29 == 6 )
        {
          v32 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA8);
          if ( v32 )
            *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA8) = timeDeltaFrom + v32;
          v33 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xAC);
          if ( v33 )
            *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 0xAC) = timeDeltaFrom + v33;
        }
      }
    }
    if ( v23 )
      MSG_ResetEntityToLowLoD((entityState_t *const)(v9 + 64));
    v10 = (const entityState_t *)(v9 + 64);
    goto LABEL_64;
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&from->lerp.eFlags, ACTIVE, 0x1Eu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4115, ASSERT_TYPE_ASSERT, "( !from->lerp.eFlags.TestFlagStrict( EntityStateFlagsMP::NEVERCHANGES ) )", (const char *)&queryFormat, "!from->lerp.eFlags.TestFlagStrict( EntityStateFlagsMP::NEVERCHANGES )") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4116, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( outHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4117, ASSERT_TYPE_ASSERT, "( outHeader == nullptr )", (const char *)&queryFormat, "outHeader == nullptr") )
    __debugbreak();
  if ( !snapInfo->archived )
  {
    EntityTypeName = BG_GetEntityTypeName((const entityType_s)from->eType);
    SV_LogSnapshotContent(snapInfo->clientNum, "Removing entity %i - object is type %i (%s)\n", (unsigned int)from->number, (unsigned int)from->eType, EntityTypeName);
  }
  PacketEntityTypeForEType = MSG_GetPacketEntityTypeForEType((const entityType_s)from->eType);
  v19 = *(msg_t **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0ui64) + 8);
  snapInfo->packetEntityType = PacketEntityTypeForEType;
  MSG_WriteEntityRemoval(snapInfo, v19, (const unsigned __int8 *)from, 11, 2, outHeader, 0);
LABEL_96:
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
MSG_WriteEntityDelta
==============
*/
__int64 MSG_WriteEntityDelta(SnapshotInfo *snapInfo, msg_t *msg, const int time, const entityState_t *fromES, const entityState_t *toES, const int forceEntitySerialization, ServerEntityHeader *const outHeader, const int numFields, const int indexBits, const NetField *stateFields)
{
  ServerEntityHeader *v10; 
  msg_t *v12; 
  int number; 
  NetFieldLoD NewEntityLoD; 
  const NetFieldList *v16; 
  const char *GameType; 
  int UsedBitCount; 
  int v19; 
  int lastChanged; 
  __int16 v21; 
  int v22; 
  NetFieldLoD *p_netfieldLoD; 
  bool v24; 
  int v25; 
  NetFieldLoD v26; 
  const char *v28; 
  const char *v29; 
  NetFieldLoD v30; 
  char v31; 
  char v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  __int16 val; 
  int vala; 
  int v38; 
  int v39; 
  int skippedNetfieldBits; 
  int fieldsChanged[2]; 
  int v45; 

  v10 = outHeader;
  v12 = msg;
  if ( !toES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3743, ASSERT_TYPE_ASSERT, "( toES != nullptr )", (const char *)&queryFormat, "toES != nullptr") )
    __debugbreak();
  if ( !fromES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3744, ASSERT_TYPE_ASSERT, "( fromES != nullptr )", (const char *)&queryFormat, "fromES != nullptr") )
    __debugbreak();
  if ( v12->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3745, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  number = toES->number;
  NewEntityLoD = NetFieldLoD_High;
  v39 = number;
  if ( number >= 1 << indexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3755, ASSERT_TYPE_ASSERT, "(entityIndex < (1 << indexBits))", "%s\n\tto = %i, bits = %i", "entityIndex < (1 << indexBits)", toES->number, indexBits) )
    __debugbreak();
  v16 = g_newNetFieldList[8];
  skippedNetfieldBits = g_newNetFieldList[8]->skippedNetfieldBits;
  GameType = SV_GameMP_GetGameType();
  if ( MSG_GetNetFieldList(GameType, NetFieldList_ID_entityStateFields)->count != v16->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3763, ASSERT_TYPE_ASSERT, "(MSG_GetNetFieldList( SV_GameMP_GetGameType(), NetFieldList_ID_entityStateFields )->count == netFieldList->count)", (const char *)&queryFormat, "MSG_GetNetFieldList( SV_GameMP_GetGameType(), NetFieldList_ID_entityStateFields )->count == netFieldList->count") )
    __debugbreak();
  if ( numFields > 68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3764, ASSERT_TYPE_ASSERT, "(numFields <= 68)", (const char *)&queryFormat, "numFields <= MAX_ENTITY_STATE_FIELDS") )
    __debugbreak();
  UsedBitCount = MSG_GetUsedBitCount(v12);
  v19 = -1;
  v38 = UsedBitCount;
  lastChanged = -1;
  v35 = -1;
  v21 = toES->number;
  val = toES->number;
  *(_QWORD *)fieldsChanged = 0i64;
  v45 = 0;
  if ( !outHeader )
  {
    NewEntityLoD = SV_SnapshotMP_GetNewEntityLoD(snapInfo, v21);
    v19 = -1;
  }
  v22 = 0;
  if ( numFields > 0 )
  {
    p_netfieldLoD = &stateFields->netfieldLoD;
    do
    {
      if ( NewEntityLoD == NetFieldLoD_Low && *p_netfieldLoD == NetFieldLoD_High )
        break;
      if ( MSG_ShouldSendEntityField(snapInfo, fromES, toES, (const NetField *)(p_netfieldLoD - 4)) )
      {
        if ( !snapInfo->fromBaseline && !snapInfo->archived )
          SV_TrackFieldChange(snapInfo->clientNum, (const PacketEntityType_e)snapInfo->packetEntityType, v22, val);
        lastChanged = v22;
        v24 = *p_netfieldLoD == NetFieldLoD_Low;
        fieldsChanged[(__int64)v22 >> 5] |= 1 << (v22 & 0x1F);
        v25 = v22;
        if ( !v24 )
          v25 = v35;
        v19 = v25;
        v35 = v25;
      }
      else
      {
        v19 = v35;
      }
      ++v22;
      p_netfieldLoD += 6;
    }
    while ( v22 < numFields );
    v10 = outHeader;
    v12 = msg;
    number = v39;
  }
  vala = v19;
  if ( lastChanged < -1 || lastChanged > numFields )
  {
    LODWORD(v34) = lastChanged;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3769, ASSERT_TYPE_ASSERT, "( ( lc >= -1 && lc <= numFields ) )", "%s\n\t( lc ) = %i", "( lc >= -1 && lc <= numFields )", v34) )
      __debugbreak();
  }
  if ( lastChanged >= 0 )
  {
    if ( !snapInfo->archived )
    {
      v28 = (char *)&queryFormat.fmt + 3;
      v29 = (char *)&queryFormat.fmt + 3;
      if ( snapInfo->entJustUnlinked )
        v29 = "(entJustUnlinked)";
      if ( snapInfo->fromBaseline )
        v28 = "fromBaseline ";
      SV_LogSnapshotContent(snapInfo->clientNum, "Send delta %sfor entityNum %i %s\n", v28, (unsigned int)number, v29);
    }
    if ( v10 )
    {
      v31 = v10->m_flags[0] & 0xE7 | 8;
      v10->m_flags[0] = v31;
      if ( v35 >= 0 )
      {
        v32 = v31 | 4;
      }
      else if ( forceEntitySerialization )
      {
        v32 = v31 & 0xFB;
      }
      else
      {
        v32 = v31 | 1;
      }
      v10->m_flags[0] = v32;
      v10->m_lastChangedField[0] = truncate_cast<short,int>(vala);
    }
    else
    {
      MSG_WriteEntityIndex(snapInfo, v12, number, indexBits);
      MSG_WriteBit0(v12);
      v30 = SV_SnapshotMP_GetNewEntityLoD(snapInfo, number);
      MSG_WriteEntityLoD(snapInfo, v12, v30);
      MSG_WriteBit1(v12);
    }
    v33 = fieldsChanged[(__int64)lastChanged >> 5];
    if ( !_bittest(&v33, lastChanged & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3806, ASSERT_TYPE_ASSERT, "( fieldsChangedBitField[lc >> 5] & ( 1 << ( lc & 31 ) ) )", (const char *)&queryFormat, "fieldsChangedBitField[lc >> 5] & ( 1 << ( lc & 31 ) )") )
      __debugbreak();
    g_outOfMapDebug.m_currEnt = number;
    MSG_WriteEntityDeltaFields(snapInfo, v12, time, fromES, toES, lastChanged, numFields, stateFields, fieldsChanged, v10, skippedNetfieldBits);
    g_outOfMapDebug.m_currEnt = -1;
    return (unsigned int)(MSG_GetUsedBitCount(v12) - v38);
  }
  if ( forceEntitySerialization )
  {
    if ( !snapInfo->archived )
      SV_LogSnapshotContent(snapInfo->clientNum, "Entity did not change, but we're forcing a send to say this\n");
    if ( v10 )
    {
      v10->m_flags[0] &= 0xE3u;
    }
    else
    {
      MSG_WriteEntityIndex(snapInfo, v12, number, indexBits);
      MSG_WriteBit0(v12);
      v26 = SV_SnapshotMP_GetNewEntityLoD(snapInfo, number);
      MSG_WriteEntityLoD(snapInfo, v12, v26);
      MSG_WriteBit0(v12);
    }
    return (unsigned int)(MSG_GetUsedBitCount(v12) - v38);
  }
  if ( v10 )
    v10->m_flags[0] |= 3u;
  return 0i64;
}

/*
==============
MSG_WriteEntityDeltaFields
==============
*/
void MSG_WriteEntityDeltaFields(SnapshotInfo *snapInfo, msg_t *msg, const int time, const entityState_t *fromES, const entityState_t *toES, int lastChanged, int numFields, const NetField *stateFields, int *fieldsChanged, ServerEntityHeader *const outHeader, const int skippedNetfieldBits)
{
  ServerEntityHeader *v11; 
  const entityState_t *v14; 
  bool entJustUnlinked; 
  char v16; 
  int v17; 
  __int64 v18; 
  const NetField *field; 
  int v20; 
  int lastChangedField; 
  int fieldNum; 
  int *v23; 
  int v24; 
  __int16 *p_bits; 
  __int64 v26; 
  int v27; 
  const unsigned __int8 *v28; 
  bool xorValue; 
  int bits; 
  const unsigned __int8 *v31; 
  bool v32; 
  int numFieldsa; 

  v11 = outHeader;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3293, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( lastChanged < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3294, ASSERT_TYPE_ASSERT, "( lastChanged >= 0 )", (const char *)&queryFormat, "lastChanged >= 0") )
    __debugbreak();
  if ( lastChanged >= numFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3295, ASSERT_TYPE_ASSERT, "( lastChanged < numFields )", (const char *)&queryFormat, "lastChanged < numFields") )
    __debugbreak();
  v14 = toES;
  SV_BandwidthProfile_AddSerializedEntityToSnapshot(snapInfo, toES->number, snapInfo->highPrecisionOrigin);
  entJustUnlinked = snapInfo->entJustUnlinked;
  if ( outHeader )
  {
    v16 = outHeader->m_flags[0];
    if ( entJustUnlinked )
      outHeader->m_flags[0] = v16 | 0x20;
    else
      outHeader->m_flags[0] = v16 & 0xDF;
  }
  else
  {
    MSG_WriteBool(msg, entJustUnlinked);
  }
  if ( !snapInfo->archived )
    SV_LogSnapshotContent(snapInfo->clientNum, "lastChanged netfield %i\n", (unsigned int)lastChanged);
  if ( numFields > 68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3303, ASSERT_TYPE_ASSERT, "(numFields <= 68)", (const char *)&queryFormat, "numFields <= MAX_ENTITY_STATE_FIELDS") )
    __debugbreak();
  if ( outHeader )
    outHeader->m_lastChangedField[1] = truncate_cast<short,int>(lastChanged);
  else
    MSG_WriteLastChangedField(snapInfo, msg, lastChanged, 68);
  v17 = 0;
  v18 = lastChanged;
  field = stateFields;
  v20 = -1;
  numFieldsa = -1;
  lastChangedField = -1;
  fieldNum = 0;
  if ( lastChanged >= 0i64 )
  {
    v23 = fieldsChanged;
    v24 = 1;
    p_bits = &stateFields->bits;
    v26 = 0i64;
    while ( (v24 & v23[(__int64)fieldNum >> 5]) == 0 || *((_BYTE *)p_bits + 2) == 2 && v26 != lastChanged )
    {
LABEL_44:
      ++fieldNum;
      v24 = __ROL4__(v24, 1);
      ++v26;
      p_bits += 12;
      if ( v26 > lastChanged )
      {
        field = stateFields;
        v17 = 0;
        v11 = outHeader;
        v14 = toES;
        v20 = -1;
        goto LABEL_46;
      }
    }
    if ( snapInfo->entJustUnlinked && ((v27 = *p_bits, v27 == -108) || (unsigned int)(v27 + 83) <= 5) )
    {
      v28 = (const unsigned __int8 *)fromES;
    }
    else
    {
      v28 = (const unsigned __int8 *)fromES;
      if ( fromES->eType == toES->eType && *p_bits != -77 )
      {
        xorValue = 1;
LABEL_36:
        if ( MSG_WriteDeltaField(snapInfo, msg, time, v28, (const unsigned __int8 *)toES, (const NetField *)(p_bits - 6), fieldNum, 1, xorValue, lastChangedField, skippedNetfieldBits, 1, outHeader) )
        {
          lastChangedField = fieldNum;
          numFieldsa = fieldNum;
          if ( outHeader && !*((_DWORD *)p_bits + 1) )
          {
            snapInfo->lastLowLoDBitWritten = MSG_GetUsedBitCount(msg);
            lastChangedField = fieldNum;
          }
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3343, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "We expected to send a field and it didn't send!") )
            __debugbreak();
          lastChangedField = numFieldsa;
        }
        v23 = fieldsChanged;
        goto LABEL_44;
      }
    }
    xorValue = 0;
    goto LABEL_36;
  }
LABEL_46:
  if ( lastChangedField != lastChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3347, ASSERT_TYPE_ASSERT, "(lastChanged == numFields)", (const char *)&queryFormat, "lastChanged == numFields") )
    __debugbreak();
  if ( (v11 || SV_SnapshotMP_GetNewEntityLoD(snapInfo, v14->number)) && lastChanged > 0i64 )
  {
    while ( field->changeHints != 2 )
    {
LABEL_64:
      ++v17;
      ++field;
      if ( !--v18 )
        return;
    }
    if ( snapInfo->entJustUnlinked && ((bits = field->bits, bits == -108) || (unsigned int)(bits + 83) <= 5) )
    {
      v31 = (const unsigned __int8 *)fromES;
    }
    else
    {
      v31 = (const unsigned __int8 *)fromES;
      if ( fromES->eType == v14->eType )
      {
        v32 = 1;
        goto LABEL_60;
      }
    }
    v32 = 0;
LABEL_60:
    if ( MSG_WriteDeltaField(snapInfo, msg, time, v31, (const unsigned __int8 *)v14, field, v17, 1, v32, v20, skippedNetfieldBits, 0, v11) )
    {
      v20 = v17;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "An ALWAYS_CHANGES field (%s) didn't have its delta written?", field->name) )
    {
      __debugbreak();
    }
    goto LABEL_64;
  }
}

/*
==============
MSG_WriteEntityDeltaForEType
==============
*/
void MSG_WriteEntityDeltaForEType(SnapshotInfo *snapInfo, msg_t *msg, const int time, entityType_s eType, const entityState_t *from, const entityState_t *to, ServerEntityHeader *const outHeader, const int force)
{
  entityType_s v11; 
  const NetFieldList *v12; 
  int numFields; 
  bool v14; 
  int v15; 
  int v16; 
  const dvar_t *v17; 
  __int64 number; 
  entityType_s v19; 
  const char *v20; 
  const char *v21; 
  int v22; 
  __int64 v23; 
  scr_string_t classname; 
  const char *v25; 
  __int64 v26; 
  __int16 v27; 
  unsigned __int16 model; 
  unsigned int v29; 
  const char *v30; 
  scr_string_t targetname; 
  __int64 v32; 
  __int64 forceEntitySerialization; 
  ServerEntityHeader *v34; 
  int timeb; 
  ServerEntityHeader *EntityTypeName; 
  entityState_t *fromES; 
  char dest[8]; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3870, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3871, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  v11 = ET_EVENTS;
  if ( eType < ET_EVENTS )
    v11 = eType;
  v12 = g_newEntityStateNetFieldList[v11];
  numFields = v12->count;
  v14 = to && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&to->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  snapInfo->highPrecisionOrigin = v14;
  if ( (unsigned __int16)v11 >= ET_COUNT )
  {
    LODWORD(forceEntitySerialization) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4642, ASSERT_TYPE_ASSERT, "(unsigned)( entType ) < (unsigned)( ( sizeof( *array_counter( orderInfo.entState ) ) + 0 ) )", "entType doesn't index ARRAY_COUNT( orderInfo.entState )\n\t%i not in [0, %i)", forceEntitySerialization, 30) )
      __debugbreak();
  }
  snapInfo->fieldChangesCount = 68;
  snapInfo->fieldChanges = orderInfo.entState[v11];
  v15 = MSG_WriteEntityDelta(snapInfo, msg, time, from, to, force, outHeader, numFields, 11, v12->array);
  v16 = v15;
  if ( !*(_WORD *)&snapInfo->fromBaseline )
    SV_TrackETypeBytes(eType, v15);
  v17 = DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled;
  if ( !DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_impulse_field_instrumentation_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    number = to->number;
    if ( g_entities[number].s.eType == ET_SCRIPTMOVER && (LOBYTE(g_entities[number].s.lerp.u.vehicle.bodyPitch) & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3897, ASSERT_TYPE_ASSERT, "((g_entities[to->number].s.eType != ET_SCRIPTMOVER) || !(g_entities[to->number].s.lerp.u.scriptMover.flags & (1 << 2)))", (const char *)&queryFormat, "(g_entities[to->number].s.eType != ET_SCRIPTMOVER) || !(g_entities[to->number].s.lerp.u.scriptMover.flags & SCRIPTMOVER_FLAG_IMPULSE_FIELD)") )
      __debugbreak();
  }
  if ( v16 )
  {
    v19 = to->eType;
    *(_QWORD *)dest = 0i64;
    v40 = 0i64;
    v41 = 0i64;
    v42 = 0i64;
    v43 = 0i64;
    v44 = 0i64;
    v45 = 0i64;
    v46 = 0i64;
    if ( v19 == ET_SCRIPTMOVER && to->staticState.player.stowedWeaponHandle.m_mapEntryId )
      Com_sprintf(dest, 0x40ui64, " - scriptable");
    if ( !snapInfo->archived )
    {
      v20 = (char *)&queryFormat.fmt + 3;
      v21 = (char *)&queryFormat.fmt + 3;
      if ( snapInfo->fromBaseline )
        v21 = "fromBaseline ";
      fromES = (entityState_t *)v21;
      EntityTypeName = (ServerEntityHeader *)BG_GetEntityTypeName(v19);
      v22 = v19;
      v23 = to->number;
      timeb = v22;
      classname = g_entities[v23].classname;
      if ( classname )
      {
        v26 = (unsigned int)(16 * classname);
        if ( (unsigned int)v26 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        {
          __debugbreak();
          LOWORD(v23) = to->number;
        }
        v25 = &scrMemTreePub.mt_buffer[v26 + 8];
      }
      else
      {
        v25 = (char *)&queryFormat.fmt + 3;
      }
      v27 = v23;
      model = g_entities[(__int16)v23].model;
      if ( model )
      {
        v29 = model;
        if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        {
          __debugbreak();
          v27 = to->number;
          LOWORD(v23) = to->number;
        }
        v30 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v29);
      }
      else
      {
        v30 = (char *)&queryFormat.fmt + 3;
      }
      targetname = g_entities[v27].targetname;
      if ( targetname )
      {
        v32 = (unsigned int)(16 * targetname);
        if ( (unsigned int)v32 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        {
          __debugbreak();
          LOWORD(v23) = to->number;
        }
        v20 = &scrMemTreePub.mt_buffer[v32 + 8];
      }
      LODWORD(v34) = timeb;
      SV_LogSnapshotContent(snapInfo->clientNum, "Entity %i (%s - %s - %s) type %i (%s%s) delta %stook %i bits\n", (unsigned int)(__int16)v23, v20, v30, v25, v34, EntityTypeName->m_flags, dest, (const char *)fromES, v16);
    }
  }
}

/*
==============
MSG_WriteEntityIndex
==============
*/
void MSG_WriteEntityIndex(const SnapshotInfo *snapInfo, msg_t *msg, const int index, const int indexBits)
{
  __int64 v5; 
  int UsedBitCount; 
  int v9; 
  __int64 v10; 
  bool v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 

  v5 = index;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 858, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  UsedBitCount = MSG_GetUsedBitCount(msg);
  if ( msg_printEntityNums->current.enabled && SV_IsSnapshotNetworkData() )
    Com_Printf(15, "Writing entity num %i\n", (unsigned int)v5);
  if ( (int)v5 - msg->lastEntityRef <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 876, ASSERT_TYPE_ASSERT, "(index - msg->lastEntityRef > 0)", "%s\n\tlastEntityReferenced is %i, index is %i", "index - msg->lastEntityRef > 0", msg->lastEntityRef, v5) )
    __debugbreak();
  if ( (_DWORD)v5 - msg->lastEntityRef == 1 )
  {
    if ( msg_printEntityNums->current.enabled && SV_IsSnapshotNetworkData() )
      Com_Printf(16, "Wrote entity num: 1 bit (inc)\n");
    MSG_WriteBit1(msg);
  }
  else
  {
    MSG_WriteBit0(msg);
    if ( indexBits == 11 && (int)v5 - msg->lastEntityRef < 512 )
    {
      if ( msg_printEntityNums->current.enabled && SV_IsSnapshotNetworkData() )
        Com_Printf(16, "Wrote entity num: %i bits (delta)\n", 11i64);
      if ( (int)v5 - msg->lastEntityRef <= 0 )
      {
        LODWORD(v14) = msg->lastEntityRef;
        LODWORD(v13) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 896, ASSERT_TYPE_ASSERT, "(index - msg->lastEntityRef > 0)", "%s\n\tindex was %i, lastEntityRef is %i", "index - msg->lastEntityRef > 0", v13, v14) )
          __debugbreak();
      }
      MSG_WriteBit0(msg);
      v9 = 9;
      v10 = (int)v5 - msg->lastEntityRef;
    }
    else
    {
      if ( msg_printEntityNums->current.enabled && SV_IsSnapshotNetworkData() )
        Com_Printf(16, "Wrote entity num: %i bits (full)\n", (unsigned int)(indexBits + 2));
      if ( indexBits == 11 )
        MSG_WriteBit1(msg);
      v10 = v5;
      v9 = indexBits;
    }
    MSG_WriteBits(msg, v10, v9);
  }
  v11 = !snapInfo->archived;
  msg->lastEntityRef = v5;
  if ( v11 )
  {
    v12 = MSG_GetUsedBitCount(msg);
    SV_BandwidthProfile_AddEntityIndexToSnapshot(snapInfo, v12 - UsedBitCount);
  }
}

/*
==============
MSG_WriteEntityLoD
==============
*/
void MSG_WriteEntityLoD(const SnapshotInfo *const snapInfo, msg_t *const msg, const NetFieldLoD lod)
{
  const char *v5; 
  int v6; 
  const char *v7; 

  if ( snapInfo->sendNetfieldLoDBit )
  {
    if ( lod == NetFieldLoD_Invalid )
    {
      v5 = "lod != NetFieldLoD_Invalid";
      v6 = 836;
      v7 = "( lod != NetFieldLoD_Invalid )";
    }
    else
    {
      if ( lod < NetFieldLoD_Count )
      {
LABEL_8:
        MSG_WriteBool(msg, lod != NetFieldLoD_Low);
        return;
      }
      v5 = "lod < NetFieldLoD_Count";
      v6 = 837;
      v7 = "( lod < NetFieldLoD_Count )";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
      __debugbreak();
    goto LABEL_8;
  }
  if ( lod != NetFieldLoD_High && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 845, ASSERT_TYPE_ASSERT, "( lod == NetFieldLoD_High )", (const char *)&queryFormat, "lod == NetFieldLoD_High") )
    __debugbreak();
}

/*
==============
MSG_WriteEntityRemoval
==============
*/
void MSG_WriteEntityRemoval(const SnapshotInfo *snapInfo, msg_t *msg, const unsigned __int8 *from, int indexBits, const int indexSize, ServerEntityHeader *const outHeader, const bool changeBit)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  __int64 Field; 
  __int16 v14; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3828, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3829, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  v11 = DVARINT_cl_shownet;
  if ( DVARINT_cl_shownet )
  {
    Dvar_CheckFrontendServerThread(DVARINT_cl_shownet);
    if ( v11->current.integer >= 2 )
      goto LABEL_13;
    v12 = DVARINT_cl_shownet;
    if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == -1 )
LABEL_13:
      Com_Printf(16, "W|%3i: #%-3i remove\n", (unsigned int)msg->cursize, *(unsigned int *)from);
  }
  if ( !snapInfo->archived )
    SV_LogSnapshotContent(snapInfo->clientNum, "Entity was removed\n");
  if ( changeBit )
    MSG_WriteBit1(msg);
  Field = MSG_GetField(from, indexSize);
  v14 = truncate_cast<short,__int64>(Field);
  if ( outHeader )
  {
    outHeader->m_flags[0] |= 0x10u;
  }
  else
  {
    MSG_WriteEntityIndex(snapInfo, msg, v14, indexBits);
    MSG_WriteBit1(msg);
  }
}

/*
==============
MSG_WriteEvent
==============
*/
void MSG_WriteEvent(SnapshotInfo *snapInfo, msg_t *msg, const unsigned __int8 *from, const unsigned __int8 *to, const NetField *field)
{
  __int64 offset; 
  const unsigned __int8 *v10; 
  const unsigned __int8 *v11; 
  int EventParamBits; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1785, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  offset = field->offset;
  v10 = &from[offset];
  v11 = &to[offset];
  if ( abs16(field->size) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1789, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toEvent ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toEvent )") )
    __debugbreak();
  EventParamBits = MSG_GetEventParamBits(*(_DWORD *)v11);
  v13 = EventParamBits;
  v14 = -1i64;
  if ( EventParamBits != 64 )
  {
    v14 = ~(-1i64 << EventParamBits);
    if ( EventParamBits > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1794, ASSERT_TYPE_ASSERT, "(bits <= 64)", (const char *)&queryFormat, "bits <= 64") )
      __debugbreak();
  }
  if ( *(_DWORD *)v10 == *(_DWORD *)v11 )
  {
    MSG_WriteBit0(msg);
    v15 = *((unsigned int *)v11 + 1);
    if ( v13 )
    {
      if ( (v14 & v15) != *((_DWORD *)v11 + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1809, ASSERT_TYPE_ASSERT, "((toEvent->eventParm & mask) == toEvent->eventParm)", "%s\n\tEvent %d requires %d bit parameter, but has more than %d bits set", "(toEvent->eventParm & mask) == toEvent->eventParm", *(_DWORD *)v11, v13, v13) )
        __debugbreak();
      MSG_WriteValueNoXor(msg, *((unsigned int *)v11 + 1), v13, field->name);
      if ( !*(_WORD *)&snapInfo->fromBaseline )
        SV_TrackEventSend(0, 1, 0, v13, 1);
    }
    else
    {
      if ( (_DWORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1803, ASSERT_TYPE_ASSERT, "(toEvent->eventParm == 0)", "%s\n\tEvent %d requires no parameter, but has a parameter set", "toEvent->eventParm == 0", *(_DWORD *)v11) )
        __debugbreak();
      if ( !snapInfo->archived && !snapInfo->fromBaseline )
        SV_TrackEventSend(0, 0, 0, 0, 1);
    }
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteByte(msg, *(int *)v11);
    v16 = *((unsigned int *)v11 + 1);
    if ( v13 )
    {
      if ( (v14 & v16) != *((_DWORD *)v11 + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1836, ASSERT_TYPE_ASSERT, "((toEvent->eventParm & mask) == toEvent->eventParm)", "%s\n\tEvent %d requires %d bit parameter, but has more than %d bits set", "(toEvent->eventParm & mask) == toEvent->eventParm", *(_DWORD *)v11, v13, v13) )
        __debugbreak();
      if ( ((unsigned int)v14 & *((_DWORD *)v10 + 1)) == (unsigned __int64)((unsigned int)v14 & *((_DWORD *)v11 + 1)) )
      {
        MSG_WriteBit0(msg);
        if ( !snapInfo->archived && !snapInfo->fromBaseline )
          SV_TrackEventSend(1, 0, 8, 0, 2);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteValueNoXor(msg, *((unsigned int *)v11 + 1), v13, field->name);
        if ( !*(_WORD *)&snapInfo->fromBaseline )
          SV_TrackEventSend(1, 1, 8, v13, 2);
      }
    }
    else
    {
      if ( (_DWORD)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1831, ASSERT_TYPE_ASSERT, "(toEvent->eventParm == 0)", "%s\n\tEvent %d requires no parameter, but has a parameter set", "toEvent->eventParm == 0", *(_DWORD *)v11) )
        __debugbreak();
      if ( !snapInfo->archived && !snapInfo->fromBaseline )
        SV_TrackEventSend(1, 0, 8, 0, 1);
    }
  }
}

/*
==============
MSG_WriteFloatByRangeAndBits
==============
*/
void MSG_WriteFloatByRangeAndBits(msg_t *msg, const float *fromF, const float *toF, float maxValue, unsigned int bitCount)
{
  float v6; 
  float v7; 
  __int64 v8; 
  int v9; 

  v6 = *toF;
  v7 = *fromF;
  if ( *toF == 0.0 )
  {
    MSG_WriteBit0(msg);
    if ( LODWORD(v6) == 0x80000000 )
      MSG_WriteBit1(msg);
    else
      MSG_WriteBit0(msg);
  }
  else
  {
    MSG_WriteBit1(msg);
    v8 = MSG_PackSignedFloat(v6, maxValue, bitCount);
    v9 = MSG_PackSignedFloat(v7, maxValue, bitCount);
    MSG_WriteBits(msg, v8 ^ v9, bitCount);
  }
}

/*
==============
MSG_WriteFloatCase
==============
*/
void MSG_WriteFloatCase(msg_t *msg, const int *fromF, const int *toF)
{
  int v3; 
  float v5; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int v13; 

  v3 = (int)*(float *)fromF;
  v5 = *(float *)toF;
  v8 = (int)*(float *)toF;
  if ( *(float *)toF == 0.0 )
  {
    MSG_WriteBit0(msg);
    if ( LODWORD(v5) == 0x80000000 )
      MSG_WriteBit1(msg);
    else
      MSG_WriteBit0(msg);
  }
  else
  {
    MSG_WriteBit1(msg);
    if ( LODWORD(v5) == 0x80000000 || (float)v8 != v5 || (v9 = v8 + 4096, v9 > 0x1FFF) || (v10 = v3 + 4096, v10 > 0x1FFF) )
    {
      MSG_WriteBit1(msg);
      MSG_WriteLong(msg, *toF ^ *fromF);
    }
    else
    {
      MSG_WriteBit0(msg);
      v11 = v9 ^ v10;
      if ( (unsigned int)v11 > 0x1FFF )
      {
        v13 = 0x1FFF;
        v12 = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1986, ASSERT_TYPE_ASSERT, "( 0 ) <= ( trunc ) && ( trunc ) <= ( (1 << 13) - 1 )", "trunc not in [0, (1 << FLOAT_INT_BITS) - 1]\n\t%i not in [%i, %i]", v12, 0i64, v13) )
          __debugbreak();
      }
      MSG_WriteBits(msg, v11, 5u);
      MSG_WriteByte(msg, (__int64)v11 >> 5);
    }
  }
}

/*
==============
MSG_WriteLastChangedField
==============
*/
void MSG_WriteLastChangedField(const SnapshotInfo *snapInfo, msg_t *msg, const int lastChangedFieldNum, const int numFields)
{
  __int64 v5; 
  int MinBitCountForNum; 

  v5 = lastChangedFieldNum;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 934, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( (int)v5 >= numFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 935, ASSERT_TYPE_ASSERT, "( lastChangedFieldNum < numFields )", (const char *)&queryFormat, "lastChangedFieldNum < numFields") )
    __debugbreak();
  MinBitCountForNum = GetMinBitCountForNum(numFields);
  MSG_WriteBits(msg, v5, MinBitCountForNum);
  if ( !snapInfo->archived )
    SV_BandwidthProfile_AddLastChangedFieldToSnapshot(snapInfo, MinBitCountForNum);
}

/*
==============
MSG_WriteNetConstString
==============
*/
void MSG_WriteNetConstString(msg_t *msg, const NetField *field, const void *toF, const NetConstStringType type)
{
  int BitsNeededForType; 
  __int64 v9; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1673, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !toF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1674, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
    __debugbreak();
  BitsNeededForType = NetConstStrings_GetBitsNeededForType(type);
  v9 = MSG_GetField(toF, field->size);
  MSG_WriteValueNoXor(msg, v9, BitsNeededForType, field->name);
}

/*
==============
MSG_WriteNeverChangesEntity
==============
*/
char MSG_WriteNeverChangesEntity(const SnapshotInfo *const snapInfo, const entityState_t *from, const entityState_t *to, ServerEntityHeader *const outHeader)
{
  entityType_s eType; 
  char v9; 
  const NetFieldList *v10; 
  unsigned int count; 
  const NetField *array; 
  __int64 v13; 
  __int64 offset; 
  char *fmt; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3999, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4000, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( from->number && !snapInfo->fromBaseline && memcmp_0(from, to, 0xF8ui64) )
  {
    eType = ET_EVENTS;
    if ( to->eType < ET_EVENTS )
      eType = to->eType;
    v9 = 0;
    v10 = g_newEntityStateNetFieldList[eType];
    count = v10->count;
    array = v10->array;
    if ( count )
    {
      v13 = count;
      do
      {
        if ( MSG_ShouldSendEntityField(snapInfo, from, to, array) )
        {
          offset = array->offset;
          LODWORD(fmt) = *(_DWORD *)((char *)&to->number + offset);
          Com_DPrintf(25, "Field %s changed from %i to %i\n", array->name, *(unsigned int *)((char *)&from->number + offset), fmt);
          v9 = 1;
        }
        ++array;
        --v13;
      }
      while ( v13 );
      if ( v9 )
        G_Debug_PrintEntityLineWithMessage(25, to, "is flagged as 'willNeverChange' but changed.  This won't show up in killcam. See log above for changed fields.");
    }
  }
  if ( outHeader )
  {
    outHeader->m_flags[0] |= 3u;
    return 0;
  }
  if ( SV_SnapshotMP_GetOldEntityLoD(snapInfo, to->number) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&from->lerp.eFlags, (EntityStateFlagsMP)30) )
    return 0;
  if ( SV_SnapshotMP_GetNewEntityLoD(snapInfo, to->number) != NetFieldLoD_High && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4025, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_GetNewEntityLoD( snapInfo, to->number ) == NetFieldLoD_High )", (const char *)&queryFormat, "SV_SnapshotMP_GetNewEntityLoD( snapInfo, to->number ) == NetFieldLoD_High") )
    __debugbreak();
  return 1;
}

/*
==============
MSG_WriteNoDeltaBit
==============
*/

void __fastcall MSG_WriteNoDeltaBit(msg_t *const msg)
{
  MSG_WriteBit0(msg);
}

/*
==============
MSG_WriteOriginExpGolomb
==============
*/
void MSG_WriteOriginExpGolomb(const SnapshotInfo *snapInfo, msg_t *msg, const int kBits, const unsigned int precisionBits)
{
  int UsedBitCount; 
  int v11; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 401, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  _XMM7 = 0i64;
  __asm
  {
    vroundss xmm0, xmm7, xmm3, 1
    vroundss xmm2, xmm7, xmm1, 1
  }
  UsedBitCount = MSG_GetUsedBitCount(msg);
  MSG_WriteSignedExpGolomb(msg, (int)*(float *)&_XMM2 - (int)*(float *)&_XMM0, kBits);
  if ( !snapInfo->fromBaseline && !snapInfo->archived )
  {
    v11 = MSG_GetUsedBitCount(msg);
    SV_TrackOriginExpGolombBits(v11 - UsedBitCount);
  }
}

/*
==============
MSG_WriteOriginFloat
==============
*/
void MSG_WriteOriginFloat(const SnapshotInfo *snapInfo, const vec3_t *mapCenter, msg_t *msg, int bits)
{
  unsigned __int64 v4; 
  __int64 v8; 
  unsigned int OriginExtraPrecisionBitsForField; 

  v4 = (unsigned int)(bits + 114);
  if ( (unsigned int)v4 > 0x20 || (v8 = 0x180C00303i64, !_bittest64(&v8, v4)) )
  {
    if ( (unsigned int)(bits + 39) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 445, ASSERT_TYPE_ASSERT, "(bits == (-92) || bits == (-83) || bits == (-106) || bits == (-113) || bits == (-91) || bits == (-82) || bits == (-105) || bits == (-114) || bits == (-39) || bits == (-38))", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGINX || bits == MSG_FIELD_ES_ORIGINX || bits == MSG_FIELD_MOVING_PLATFORM_ORIGINX || bits == MSG_FIELD_ORIGIN_PHYSICSX || bits == MSG_FIELD_ORIGINY || bits == MSG_FIELD_ES_ORIGINY || bits == MSG_FIELD_MOVING_PLATFORM_ORIGINY || bits == MSG_FIELD_ORIGIN_PHYSICSY || bits == MSG_FIELD_HIGH_PRECISION_ORIGINX || bits == MSG_FIELD_HIGH_PRECISION_ORIGINY") )
      __debugbreak();
  }
  OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField(bits);
  MSG_WriteOriginExpGolomb(snapInfo, msg, 4, OriginExtraPrecisionBitsForField);
}

/*
==============
MSG_WriteOriginPhysics
==============
*/
void MSG_WriteOriginPhysics(const SnapshotInfo *snapInfo, const vec3_t *mapCenter, msg_t *msg, int bits, float value, float oldValue)
{
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  bool v14; 

  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 608, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  _XMM7 = 0i64;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  v10 = (int)*(float *)&_XMM3 + 128;
  if ( (unsigned int)v10 > 0xFF )
  {
    MSG_WriteBit0(msg);
    if ( bits == -113 )
    {
      v12 = 0i64;
    }
    else
    {
      if ( bits != -114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 633, ASSERT_TYPE_ASSERT, "(bits == (-114))", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGIN_PHYSICSY") )
        __debugbreak();
      v12 = 1i64;
    }
    __asm { vroundss xmm0, xmm7, xmm2, 1 }
    v10 = 1048570 - (int)(float)((float)(value - (float)(int)*(float *)&_XMM0) * -10.0);
    v14 = v10 <= 2097140;
    if ( (unsigned int)v10 > 0x1FFFF4 )
    {
      Com_PrintError(1, "MSG_WriteOriginPhysics: Not enough range available for physics origin '%f' [%i]\n", value, v12);
      v14 = v10 <= 2097140;
    }
    if ( !v14 )
      v10 = 2097140;
    v11 = 21;
    if ( v10 < 0 )
      v10 = 0;
  }
  else
  {
    MSG_WriteBit1(msg);
    v11 = 8;
  }
  MSG_WriteBits(msg, v10, v11);
}

/*
==============
MSG_WriteReliableCommandDataToBuffer
==============
*/
__int64 MSG_WriteReliableCommandDataToBuffer(const unsigned __int8 *data, const unsigned int dataSize, char *pszBuffer, unsigned int iBufferSize)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 336, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( !pszBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 337, ASSERT_TYPE_ASSERT, "(pszBuffer)", (const char *)&queryFormat, "pszBuffer") )
    __debugbreak();
  if ( !iBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 338, ASSERT_TYPE_ASSERT, "(iBufferSize > 0)", (const char *)&queryFormat, "iBufferSize > 0") )
    __debugbreak();
  if ( dataSize <= iBufferSize )
  {
    if ( !dataSize )
      Com_PrintWarning(16, "WARNING: Empty reliable command\n");
  }
  else
  {
    Com_PrintWarning(16, "WARNING: Reliable command message is too long (%i/%i) and will be truncated.\n", dataSize, iBufferSize);
  }
  if ( dataSize > iBufferSize )
    dataSize = iBufferSize;
  memcpy_0(pszBuffer, data, dataSize);
  return dataSize;
}

/*
==============
MSG_WriteReliableCommandToBuffer
==============
*/
__int64 MSG_WriteReliableCommandToBuffer(const char *pszCommand, char *pszBuffer, unsigned int iBufferSize)
{
  __int64 v6; 
  __int64 v7; 
  char *v8; 
  signed __int64 v9; 
  char v10; 
  char v11; 

  if ( !pszCommand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(pszCommand)", (const char *)&queryFormat, "pszCommand") )
    __debugbreak();
  if ( !pszBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(pszBuffer)", (const char *)&queryFormat, "pszBuffer") )
    __debugbreak();
  if ( !iBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(iBufferSize > 0)", (const char *)&queryFormat, "iBufferSize > 0") )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( pszCommand[v6] );
  if ( (unsigned int)v6 < iBufferSize )
  {
    if ( !(_DWORD)v6 )
      Com_PrintWarning(16, "WARNING: Empty reliable command\n");
  }
  else
  {
    Com_PrintWarning(16, "WARNING: Reliable command is too long (%i/%i) and will be truncated: '%s'\n", (unsigned int)v6, iBufferSize, pszCommand);
  }
  v7 = 0i64;
  v8 = pszBuffer;
  if ( !iBufferSize )
    goto LABEL_22;
  v9 = pszCommand - pszBuffer;
  while ( 1 )
  {
    v10 = v8[v9];
    if ( !v10 )
      break;
    v11 = I_CleanChar(v10);
    *v8 = v11;
    if ( v11 == 37 )
      *v8 = 46;
    v7 = (unsigned int)(v7 + 1);
    ++v8;
    if ( (unsigned int)v7 >= iBufferSize )
      goto LABEL_22;
  }
  if ( (unsigned int)v7 < iBufferSize )
  {
    pszBuffer[v7] = 0;
    return (unsigned int)(v7 + 1);
  }
  else
  {
LABEL_22:
    pszBuffer[iBufferSize - 1] = 0;
    return iBufferSize;
  }
}

/*
==============
MSG_WriteValue
==============
*/
void MSG_WriteValue(msg_t *msg, const void *fromF, const void *toF, const int bits, const int size, const char *fieldName)
{
  __int64 Field; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  int fmt; 
  int v16; 

  Field = MSG_GetField(fromF, size);
  v10 = MSG_GetField(toF, size);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = bits - 1;
    v12 = -1 - v10;
  }
  else
  {
    v12 = v10;
    if ( bits >= 0 )
      v13 = bits;
    else
      v13 = abs32(bits) - 1;
  }
  if ( 64 - (unsigned int)__lzcnt(v12) > v13 )
  {
    fmt = bits;
    Com_PrintError(1, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v10, fieldName, fmt);
    v16 = bits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValue: Not enough bits written: %lld for %s (%d)\n", v11, fieldName, v16) )
      __debugbreak();
  }
  v14 = Field ^ v11;
  if ( bits >= 0 && bits != 64 )
    v14 &= (1i64 << bits) - 1;
  MSG_WriteValueNoXor(msg, v14, bits, fieldName);
}

/*
==============
MSG_WriteValueNoXor
==============
*/
void MSG_WriteValueNoXor(msg_t *msg, __int64 value, const int bits, const char *fieldName)
{
  __int64 v4; 
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  int v10; 
  int fmt; 
  int v12; 

  v4 = value;
  v7 = abs32(bits);
  if ( bits >= 0 )
  {
    v8 = value;
    if ( value < 0 )
    {
      v8 = ~value;
      v9 = v7 - 1;
    }
    else
    {
      v9 = v7 >= 0 ? v7 : abs32(v7) - 1;
    }
    if ( 64 - (unsigned int)__lzcnt(v8) > v9 )
    {
      fmt = v7;
      Com_PrintError(1, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", value, fieldName, fmt);
      v12 = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteValueNoXor: Not enough bits written: %lld for %s (%d)\n", v4, fieldName, v12) )
        __debugbreak();
    }
  }
  v10 = v7 & 7;
  if ( (v7 & 7) != 0 )
  {
    MSG_WriteBits(msg, v4, v7 & 7);
    v7 -= v10;
    v4 >>= v10;
  }
  for ( ; v7; v7 -= 8 )
  {
    MSG_WriteByte(msg, v4);
    v4 >>= 8;
  }
}

/*
==============
MSG_WriteWeaponMapEntry_Index
==============
*/
void MSG_WriteWeaponMapEntry_Index(msg_t *msg, const int itemIndex)
{
  __int64 v2; 
  int v4; 
  __int64 v5; 
  unsigned int RuntimeMapIndexBits; 
  __int64 v7; 

  v2 = itemIndex;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5820, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( (int)v2 < 0 )
    goto LABEL_26;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( (int)v2 > BgWeaponMap::ms_runtimeSize )
  {
LABEL_26:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5822, ASSERT_TYPE_ASSERT, "( 0 ) <= ( itemIndex ) && ( itemIndex ) <= ( BgWeaponMap::GetRuntimeSize() )", "itemIndex not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v7, 0i64, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  v4 = v2 - msg->lastEntityRef;
  if ( v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5825, ASSERT_TYPE_ASSERT, "( itemIndexDiff > 0 )", (const char *)&queryFormat, "itemIndexDiff > 0") )
    __debugbreak();
  if ( v4 == 1 )
  {
    MSG_WriteBit1(msg);
  }
  else
  {
    MSG_WriteBit0(msg);
    if ( v4 >= 8 )
    {
      MSG_WriteBit0(msg);
      RuntimeMapIndexBits = BgWeaponMap::GetRuntimeMapIndexBits();
      v5 = v2;
    }
    else
    {
      MSG_WriteBit1(msg);
      v5 = v4;
      RuntimeMapIndexBits = 3;
    }
    MSG_WriteBits(msg, v5, RuntimeMapIndexBits);
  }
  msg->lastEntityRef = v2;
}

/*
==============
Omnvar_HasChanged
==============
*/
bool Omnvar_HasChanged(const OmnvarDef *def, const OmnvarData *from, const OmnvarData *to)
{
  bool result; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5599, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5600, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5601, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( from->timeModified != to->timeModified && (def->flags & 0x40) != 0 )
    return 1;
  switch ( def->type )
  {
    case OMNVAR_TYPE_BOOL:
      result = from->current.enabled != to->current.enabled;
      break;
    case OMNVAR_TYPE_FLOAT:
      if ( to->current.value != from->current.value )
        return 1;
      goto LABEL_19;
    case OMNVAR_TYPE_INT:
    case OMNVAR_TYPE_UINT:
    case OMNVAR_TYPE_TIME:
    case OMNVAR_TYPE_NCS_LUI:
      result = from->current.integer != to->current.integer;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unrecognized Omnvar type") )
        __debugbreak();
LABEL_19:
      result = 0;
      break;
  }
  return result;
}

/*
==============
SV_MsgMP_InitAnimClassData
==============
*/
void SV_MsgMP_InitAnimClassData(void)
{
  AnimStateSnapData *v0; 
  unsigned __int8 (*animEntryCount)[1024]; 
  int i; 
  scr_string_t AnimsetNameByIndex; 
  scr_string_t v4; 
  unsigned __int16 NumStates; 
  int v6; 
  int v7; 
  unsigned __int8 (*v8)[1024]; 
  char NumEntriesForStateIndex; 

  v0 = &s_animStateSnapData;
  memset_0(&s_animStateSnapData, 0, sizeof(s_animStateSnapData));
  animEntryCount = s_animStateSnapData.animEntryCount;
  for ( i = 0; i < 64; ++i )
  {
    AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(i);
    v4 = AnimsetNameByIndex;
    if ( AnimsetNameByIndex )
    {
      NumStates = BG_Animset_GetNumStates(AnimsetNameByIndex);
      v6 = NumStates;
      v7 = 0;
      v0->animStateCount[0] = NumStates;
      if ( NumStates )
      {
        v8 = animEntryCount;
        do
        {
          NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(v4, v7++);
          *(_BYTE *)v8 = NumEntriesForStateIndex;
          v8 = (unsigned __int8 (*)[1024])((char *)v8 + 1);
        }
        while ( v7 < v6 );
      }
    }
    else
    {
      v0->animStateCount[0] = 0;
    }
    v0 = (AnimStateSnapData *)((char *)v0 + 2);
    ++animEntryCount;
  }
}

/*
==============
SV_MsgMP_ValidateEntityState
==============
*/
void SV_MsgMP_ValidateEntityState(const entityState_t *entState)
{
  int number; 
  int clientNum; 
  int v4; 
  bool v5; 

  switch ( entState->eType )
  {
    case ET_PLAYER:
      number = entState->number;
      clientNum = entState->clientNum;
      if ( number == clientNum )
        return;
      v4 = 368;
      goto LABEL_16;
    case ET_ITEM:
      if ( entState->weaponHandle.m_mapEntryId )
        return;
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 373, ASSERT_TYPE_ASSERT, "(!entState->weaponHandle.IsNull())", (const char *)&queryFormat, "!entState->weaponHandle.IsNull()");
      goto LABEL_17;
    case ET_SCRIPTMOVER:
    case ET_PLANE:
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entState->lerp.eFlags, ACTIVE, 1u) && !R_IsValidBrushModel(entState->index.brushModel) && !BG_IsValidCollMapBrushIndex(entState->index.brushModel) )
      {
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 382, ASSERT_TYPE_ASSERT, "(R_IsValidBrushModel( entState->index.brushModel ) || BG_IsValidCollMapBrushIndex( entState->index.brushModel ))", (const char *)&queryFormat, "R_IsValidBrushModel( entState->index.brushModel ) || BG_IsValidCollMapBrushIndex( entState->index.brushModel )");
        goto LABEL_17;
      }
      break;
    case ET_AGENT:
      number = entState->number;
      clientNum = entState->clientNum;
      if ( number != clientNum )
      {
        v4 = 389;
LABEL_16:
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", v4, ASSERT_TYPE_ASSERT, "( entState->number ) == ( entState->clientNum )", "%s == %s\n\t%i, %i", "entState->number", "entState->clientNum", number, clientNum);
LABEL_17:
        if ( v5 )
          __debugbreak();
      }
      break;
  }
}

