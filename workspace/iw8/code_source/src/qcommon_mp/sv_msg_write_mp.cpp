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
      _R11 = &to[v13];
      v16 = abs16(*p_size);
      if ( v16 > 0x10 )
        goto LABEL_22;
      __asm
      {
        vmovdqu xmm1, xmmword ptr [r11]
        vpcmpeqb xmm1, xmm1, xmmword ptr [r10]
      }
      v19 = (1 << v16) - 1;
      __asm { vpmovmskb eax, xmm1 }
      if ( (v19 & _EAX) != v19 )
      {
LABEL_22:
        if ( !MSG_ValuesAreEqualPost(v14, _R11, p_size[2], *p_size) )
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
      _R11 = (char *)to + offset;
      v11 = abs32(size);
      if ( v11 > 0x10 )
        goto LABEL_13;
      __asm
      {
        vmovdqu xmm1, xmmword ptr [r11]
        vpcmpeqb xmm1, xmm1, xmmword ptr [r10]
      }
      v14 = (1 << v11) - 1;
      __asm { vpmovmskb eax, xmm1 }
      if ( (v14 & _EAX) == v14 )
        result = 0;
      else
LABEL_13:
        result = !MSG_ValuesAreEqualPost(v9, _R11, bits, size);
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
  _R11 = (char *)ps + offset;
  v16 = abs16(field->size);
  if ( v16 > 0x10 )
    return !MSG_ValuesAreEqualPost(v14, _R11, field->bits, field->size);
  __asm
  {
    vmovdqu xmm1, xmmword ptr [r11]
    vpcmpeqb xmm1, xmm1, xmmword ptr [r10]
  }
  v19 = 1 << v16;
  __asm { vpmovmskb eax, xmm1 }
  return ((v19 - 1) & _EAX) != v19 - 1 && !MSG_ValuesAreEqualPost(v14, _R11, field->bits, field->size);
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
  bool archived; 
  __int64 offset; 
  unsigned int v27; 
  int v29; 
  PacketEntityType_e packetEntityType; 
  bool fromBaseline; 
  const char *EntityTypeString; 
  int v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  int bits; 
  msg_t *v40; 
  unsigned int OriginExtraPrecisionBitsForField; 
  int v57; 
  bool v59; 
  bool v60; 
  signed int v63; 
  __int64 v64; 
  __int16 v65; 
  int v68; 
  bool v70; 
  bool v71; 
  signed int v75; 
  int v89; 
  int v92; 
  int v93; 
  __int16 *v94; 
  int v95; 
  unsigned int v97; 
  __int64 v104; 
  int v108; 
  int v109; 
  char v110; 
  __int16 v111; 
  __int64 v112; 
  int v113; 
  __int64 v114; 
  int v115; 
  unsigned int MinBitCountForNum; 
  __int16 size; 
  __int64 v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  unsigned int v123; 
  signed int v124; 
  __int16 v125; 
  __int64 v126; 
  __int64 v127; 
  const unsigned __int8 *v128; 
  const unsigned __int8 *v129; 
  int v130; 
  int RuntimeMapIndexBits; 
  __int64 v132; 
  __int16 v133; 
  unsigned int v138; 
  unsigned int v150; 
  int v159; 
  bool v160; 
  int v163; 
  int v164; 
  unsigned int v165; 
  bool v166; 
  bool v167; 
  bool v168; 
  bool v169; 
  bool v174; 
  bool v180; 
  unsigned __int8 v182; 
  __int64 v184; 
  unsigned __int8 v185; 
  unsigned int BitsNeededForType; 
  __int64 v192; 
  unsigned int BitCount; 
  int v194; 
  __int64 v195; 
  unsigned int ClientAttachTagBits; 
  __int64 v197; 
  int EntityStateIndexBits; 
  int v199; 
  unsigned int v200; 
  unsigned int i; 
  unsigned int v202; 
  bool v203; 
  bool v204; 
  __int64 v236; 
  int v237; 
  __int64 v238; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  const unsigned __int8 *v247; 
  int v248; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  __int64 oldValue; 
  float oldValuea; 
  float oldValueb; 
  float oldValuec; 
  float oldValued; 
  float oldValuee; 
  double oldValuef; 
  __int64 dataBits; 
  double dataBitsa; 
  double v264; 
  double v265; 
  int fromF; 
  int v268; 
  int v269; 
  int UsedBitCount; 
  __int64 v271; 
  ServerEntityHeader *v272; 
  const unsigned __int8 *v273; 
  vec3_t outQuatPacked; 
  char v275[32]; 
  char string[32]; 

  v268 = fieldNum;
  v272 = outHeader;
  fromF = time;
  UsedBitCount = 0;
  v269 = 0;
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
  _RBP = &from[offset];
  v271 = 0i64;
  _RSI = &to[offset];
  _RBX = &v271;
  v273 = &to[offset];
  if ( xorValue )
    _RBX = (__int64 *)_RBP;
  *(_QWORD *)outQuatPacked.v = _RBX;
  if ( sendSkippedFields )
  {
    if ( skippedFieldBits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2413, ASSERT_TYPE_ASSERT, "( skippedFieldBits > 0 )", (const char *)&queryFormat, "skippedFieldBits > 0") )
      __debugbreak();
    if ( !forceSend )
    {
      v27 = abs16(field->size);
      if ( v27 <= 0x10 )
      {
        __asm
        {
          vmovdqu xmm1, xmmword ptr [rbp+0]
          vpcmpeqb xmm1, xmm1, xmmword ptr [rsi]
        }
        v29 = (1 << v27) - 1;
        __asm { vpmovmskb eax, xmm1 }
        if ( (v29 & _EAX) == v29 )
          return 0;
      }
      if ( MSG_ValuesAreEqualPost(_RBP, _RSI, field->bits, field->size) )
        return 0;
    }
    if ( field->changeHints == 1 )
    {
      packetEntityType = snapInfo->packetEntityType;
      if ( packetEntityType > ANALYZE_DATATYPE_ENTITYTYPE_TEMPENTITY || *((_WORD *)from + 4) == *((_WORD *)to + 4) )
      {
        fromBaseline = snapInfo->fromBaseline;
        if ( !fromBaseline || v268 )
        {
          MSG_PrintNetFieldValue(_RBX, field, string, 0x20ui64);
          MSG_PrintNetFieldValue(_RSI, field, v275, 0x20ui64);
          EntityTypeString = SV_GetEntityTypeString(packetEntityType);
          LODWORD(fmt) = fromBaseline;
          Com_PrintError(15, "Field %s changed for eType %s when we thought it never would (baseline = %d): from %s to %s\n", field->name, EntityTypeString, fmt, string, v275);
        }
      }
    }
    v35 = v268 - lastChangedField;
    if ( v268 - lastChangedField <= 0 )
    {
      LODWORD(oldValue) = v268 - lastChangedField;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1538, ASSERT_TYPE_ASSERT, "( ( numFieldsSkipped > 0 ) )", "( numFieldsSkipped ) = %i", oldValue) )
        __debugbreak();
    }
    if ( skippedFieldBits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1539, ASSERT_TYPE_ASSERT, "(skippedFieldBits > 0)", (const char *)&queryFormat, "skippedFieldBits > 0") )
      __debugbreak();
    archived = snapInfo->archived;
    if ( !*(_WORD *)&snapInfo->fromBaseline )
      SV_TrackNumFieldsSkipped((const PacketEntityType_e)snapInfo->packetEntityType, v35, v272, field);
    if ( skippedFieldBits == 1 )
    {
      if ( v35 > 1 )
      {
        v36 = (unsigned int)(v35 - 1);
        do
        {
          MSG_WriteBit0(msg);
          --v36;
        }
        while ( v36 );
      }
    }
    else if ( v35 != 1 )
    {
      MSG_WriteBit0(msg);
      v37 = v35 - 1;
      v38 = 1 << skippedFieldBits;
      if ( v37 >= (1 << skippedFieldBits) - 1 )
      {
        do
        {
          MSG_WriteBits(msg, -1i64, skippedFieldBits);
          v37 += 1 - v38;
        }
        while ( v37 >= v38 - 1 );
        _RSI = v273;
        _RBX = *(__int64 **)outQuatPacked.v;
      }
      MSG_WriteBits(msg, v37, skippedFieldBits);
      goto LABEL_57;
    }
    MSG_WriteBit1(msg);
LABEL_57:
    if ( !archived )
      v269 = MSG_GetUsedBitCount(msg);
  }
  if ( !archived && !snapInfo->fromBaseline )
  {
    if ( (unsigned int)v268 >= snapInfo->fieldChangesCount )
      CrashReport_TriggerNow();
    Sys_InterlockedIncrement(&snapInfo->fieldChanges[v268]);
    archived = snapInfo->archived;
  }
  bits = field->bits;
  __asm
  {
    vmovaps [rsp+178h+var_58], xmm6
    vmovaps [rsp+178h+var_68], xmm7
    vmovaps [rsp+178h+var_78], xmm8
    vmovaps [rsp+178h+var_88], xmm9
  }
  switch ( bits )
  {
    case -115:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2803, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]
        vmovss  xmm8, dword ptr [rbx]
      }
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 659, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      __asm
      {
        vsubss  xmm0, xmm6, xmm8
        vmulss  xmm1, xmm0, cs:__real@41200000
        vmovss  xmm8, cs:__real@3f000000
        vaddss  xmm2, xmm1, xmm8
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm3, xmm7, xmm2, 1
        vcvttss2si ebx, xmm3
      }
      v150 = _EBX + 128;
      if ( v150 > 0xFF )
      {
        MSG_WriteBit0(msg);
        __asm
        {
          vaddss  xmm2, xmm8, dword ptr [r13+14h]
          vroundss xmm0, xmm7, xmm2, 1
          vcvttss2si eax, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm6, xmm0
          vmulss  xmm2, xmm1, cs:__real@c1200000
          vcvttss2si eax, xmm2
        }
        v159 = 1048570 - _EAX;
        v160 = 1048570 - _EAX <= 2097140;
        if ( (unsigned int)(1048570 - _EAX) > 0x1FFFF4 )
        {
          __asm
          {
            vcvtss2sd xmm2, xmm6, xmm6
            vmovq   r8, xmm2
          }
          Com_PrintError(1, "MSG_WriteOriginPhysicsZ: Not enough range available for physics origin '%f''\n", _R8);
          v160 = v159 <= 2097140;
        }
        if ( !v160 )
          v159 = 2097140;
        if ( v159 < 0 )
          v159 = 0;
        MSG_WriteBits(msg, v159, 0x15u);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, (int)v150, 8u);
      }
      goto LABEL_386;
    case -114:
    case -113:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2793, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rsi]
        vmovss  [rsp+178h+oldValue], xmm0
        vmovss  dword ptr [rsp+178h+fmt], xmm1
      }
      MSG_WriteOriginPhysics(snapInfo, &snapInfo->mapCenter, msg, (__int16)bits, fmte, oldValuee);
      goto LABEL_386;
    case -112:
      v40 = msg;
      if ( ((*_RSI ^ *(_BYTE *)_RBX) & 0x3F) == 0 )
        goto LABEL_384;
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, *(_DWORD *)_RSI & 0x3F, 6u);
      goto LABEL_386;
    case -111:
      RuntimeMapIndexBits = BgWeaponMap::GetRuntimeMapIndexBits();
      MSG_WriteValue(msg, _RBX, _RSI, RuntimeMapIndexBits, field->size, field->name);
      goto LABEL_386;
    case -110:
      if ( ((*_RSI ^ *(_BYTE *)_RBX) & 0x3F) != 0 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, *(_DWORD *)_RSI & 0x3F, 6u);
      }
      else
      {
        MSG_WriteBit0(msg);
      }
      MSG_WriteBits(msg, (*(_DWORD *)_RSI >> 6) & 1, 1u);
      MSG_WriteBits(msg, (*(_DWORD *)_RSI >> 7) & 3, 2u);
      goto LABEL_386;
    case -109:
      if ( field->size != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2846, ASSERT_TYPE_ASSERT, "(field->size == 4)", (const char *)&queryFormat, "field->size == 4") )
        __debugbreak();
      v40 = msg;
      if ( !*(_DWORD *)_RSI )
        goto LABEL_384;
      goto LABEL_94;
    case -108:
    case 0:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2500, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteFloatCase(msg, (const int *)_RBX, (const int *)_RSI);
      goto LABEL_386;
    case -107:
      MSG_WriteAnimData(msg, (const int *)_RBX, (const int *)_RSI);
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
      __asm { vmovss  xmm6, dword ptr [rbx] }
      MSG_GetOriginExtraPrecisionBitsForField((__int16)bits);
      v59 = !snapInfo->highPrecisionOrigin;
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
        vdivss  xmm7, xmm0, xmm5
        vmovss  [rsp+178h+fromF], xmm7
      }
      if ( v59 && Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
      {
        MSG_WriteBit0(msg);
        __asm { vmovss  xmm6, dword ptr [rsi] }
        if ( (__int16)bits == -104 || (__int16)bits == -37 )
        {
          OriginExtraPrecisionBitsForField = MSG_GetOriginExtraPrecisionBitsForField((__int16)bits);
          __asm
          {
            vmovss  [rsp+178h+oldValue], xmm7
            vmovss  dword ptr [rsp+178h+fmt], xmm6
          }
          MSG_WriteOriginExpGolomb(snapInfo, msg, 2, OriginExtraPrecisionBitsForField, fmtb, oldValueb);
        }
        else
        {
          __asm
          {
            vmovss  [rsp+178h+oldValue], xmm7
            vmovss  dword ptr [rsp+178h+fmt], xmm6
          }
          MSG_WriteOriginFloat(snapInfo, &snapInfo->mapCenter, msg, (__int16)bits, fmta, oldValuea);
        }
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteFloatCase(msg, &fromF, (const int *)_RSI);
      }
      goto LABEL_386;
    case -103:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2659, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v109 = *(_DWORD *)_RSI;
      v108 = v109 / 50;
      if ( v109 < 800 && v109 == 50 * v108 )
        goto LABEL_160;
      MSG_WriteBit1(msg);
      MSG_WriteBits(msg, v109, 0x10u);
      goto LABEL_386;
    case -102:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2641, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v108 = *(_DWORD *)_RSI / 250;
      if ( *(int *)_RSI < 4000 && *(_DWORD *)_RSI == 250 * v108 )
      {
LABEL_160:
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, v108, 4u);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, *(int *)_RSI, 0x10u);
      }
      goto LABEL_386;
    case -101:
      v64 = MSG_GetField(_RSI, field->size);
      v65 = truncate_cast<short,__int64>(v64);
      v40 = msg;
      if ( !v65 )
        goto LABEL_384;
      MSG_WriteBit1(msg);
      MSG_WriteShort(msg, v65);
      goto LABEL_386;
    case -100:
    case -79:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2608, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm
      {
        vmovss  xmm7, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rbx]
        vmulss  xmm1, xmm0, cs:__real@43360b61
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm0, xmm7, cs:__real@43360b61
        vxorps  xmm6, xmm6, xmm6
        vroundss xmm3, xmm6, xmm2, 1
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vcvttss2si eax, xmm3
      }
      v89 = (__int16)_EAX;
      __asm
      {
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si eax, xmm0
      }
      v92 = (__int16)_EAX - v89;
      v93 = abs32(v92);
      v94 = g_commonAngleDeltas;
      v95 = 0;
      break;
    case -99:
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]
        vcvttss2si r15d, dword ptr [rbx]
      }
      v68 = abs16(field->size);
      __asm { vcvttss2si ebp, xmm6 }
      v70 = v68 == 4;
      if ( v68 != 4 )
      {
        v71 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2574, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4");
        v70 = !v71;
        if ( v71 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm6, xmm0
      }
      if ( !v70 )
        goto LABEL_112;
      __asm { vmovss  [rsp+178h+fromF], xmm6 }
      if ( fromF == 0x80000000 )
      {
LABEL_112:
        MSG_WriteBit1(msg);
        __asm { vmovss  [rsp+178h+fromF], xmm6 }
        if ( fromF == 0x80000000 )
          goto LABEL_116;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebp
          vucomiss xmm0, xmm6
        }
        if ( fromF != 0x80000000 || (v75 = _EBP + 2048, (unsigned int)v75 > 0xFFF) )
        {
LABEL_116:
          MSG_WriteBit1(msg);
          MSG_WriteLong(msg, *(_DWORD *)_RSI ^ *(_DWORD *)_RBX);
        }
        else
        {
          MSG_WriteBit0(msg);
          MSG_WriteBits(msg, v75 ^ (unsigned __int64)(_ER15 + 2048), 4u);
          MSG_WriteByte(msg, (__int64)(v75 ^ (unsigned __int64)(_ER15 + 2048)) >> 4);
        }
      }
      else
      {
        MSG_WriteBit0(msg);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vaddss  xmm1, xmm0, cs:__real@45000000
        vcvttss2si rax, xmm1
      }
      if ( (unsigned int)_RAX >= 0x1000 )
      {
        __asm { vcvttss2si eax, xmm1 }
        LODWORD(dataBits) = 4096;
        LODWORD(oldValue) = _EAX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2601, ASSERT_TYPE_ASSERT, "(unsigned)( *(float *)toF + (1<<(12-1)) ) < (unsigned)( 1 << 12 )", "*(float *)toF + HUDELEM_COORD_BIAS doesn't index 1 << HUDELEM_COORD_BITS\n\t%i not in [0, %i)", oldValue, dataBits) )
          __debugbreak();
      }
      goto LABEL_386;
    case -98:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2732, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v120 = *(_DWORD *)_RSI;
      v121 = *(_DWORD *)_RBX;
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 985, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      v122 = (v120 ^ v121) & 0x3FFFFFFF;
      if ( !v122 || ((v122 - 1) & v122) != 0 )
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, v120, 0x1Eu);
      }
      else
      {
        v123 = __lzcnt(v122);
        v124 = 31 - v123;
        if ( 31 - v123 > 0x1D )
        {
          LODWORD(dataBits) = 31 - v123;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "( ( changedBitIndex >= 0 && changedBitIndex < 30 ) )", "%s\n\t( changedBitIndex ) = %i", "( changedBitIndex >= 0 && changedBitIndex < 30 )", dataBits) )
            __debugbreak();
        }
        if ( v122 != 1 << v124 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1002, ASSERT_TYPE_ASSERT, "( ( ((oldFlags ^ newFlags) & ((1 << 30) - 1)) ^ (1 << changedBitIndex)) == 0 )", (const char *)&queryFormat, "( ((oldFlags ^ newFlags) & MASK_EFLAGS) ^ (1 << changedBitIndex)) == 0") )
          __debugbreak();
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, v124, 5u);
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
      v118 = MSG_GetField(_RSI, size);
      v119 = truncate_cast<int,__int64>(v118);
      MSG_WriteDeltaTime(msg, fromF, v119);
      goto LABEL_386;
    case -96:
      v125 = field->size;
      if ( abs16(v125) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2739, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
      {
        __debugbreak();
        v125 = field->size;
      }
      v126 = MSG_GetField(_RSI, v125);
      v127 = truncate_cast<int,__int64>(v126);
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1018, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      if ( (_DWORD)v127 == 2046 )
        goto LABEL_301;
      MSG_WriteBit0(msg);
      if ( !(_DWORD)v127 )
        goto LABEL_301;
      MSG_WriteBit0(msg);
      MSG_WriteBits(msg, v127, 3u);
      MSG_WriteByte(msg, (int)v127 >> 3);
      goto LABEL_386;
    case -95:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2813, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        archived = snapInfo->archived;
      }
      v163 = *(_DWORD *)_RSI;
      if ( !archived )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending %i as playerstate timer value (%ims granularity)\n", (unsigned int)v163, 100i64);
      MSG_WriteBits(msg, v163 / 100, 7u);
      goto LABEL_386;
    case -94:
      v128 = from;
      v129 = to;
      MSG_WriteEvent(snapInfo, msg, from, to, field);
      goto LABEL_387;
    case -93:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2750, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      v130 = *(_DWORD *)_RSI;
      if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1057, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      MSG_WriteLong(msg, v130);
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
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rsi]
        vmovss  [rsp+178h+oldValue], xmm0
        vmovss  dword ptr [rsp+178h+fmt], xmm1
      }
      MSG_WriteOriginFloat(snapInfo, &snapInfo->mapCenter, msg, (__int16)bits, fmtc, oldValuec);
      goto LABEL_386;
    case -90:
    case -81:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2783, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
      {
        __debugbreak();
        LOWORD(bits) = field->bits;
      }
      __asm
      {
        vmovss  xmm7, dword ptr [rsi]
        vmovss  xmm6, dword ptr [rbx]
      }
      v138 = MSG_GetOriginExtraPrecisionBitsForField((__int16)bits);
      __asm
      {
        vmovss  [rsp+178h+oldValue], xmm6
        vmovss  dword ptr [rsp+178h+fmt], xmm7
      }
      MSG_WriteOriginExpGolomb(snapInfo, msg, 2, v138, fmtd, oldValued);
      goto LABEL_386;
    case -89:
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]
        vcvttss2si r15d, dword ptr [rbx]
      }
      v57 = abs16(field->size);
      __asm { vcvttss2si ebp, xmm6 }
      v59 = v57 == 4;
      if ( v57 != 4 )
      {
        v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2514, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4");
        v59 = !v60;
        if ( v60 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vucomiss xmm0, xmm6
      }
      if ( !v59 )
        goto LABEL_93;
      __asm { vmovss  [rsp+178h+fromF], xmm6 }
      if ( fromF == 0x80000000 || (v63 = _EBP + 4096, (unsigned int)v63 > 0x1FFF) )
      {
LABEL_93:
        v40 = msg;
LABEL_94:
        MSG_WriteBit1(v40);
        MSG_WriteLong(msg, *(_DWORD *)_RSI ^ *(_DWORD *)_RBX);
      }
      else
      {
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, v63 ^ (unsigned __int64)(_ER15 + 4096), 5u);
        MSG_WriteByte(msg, (__int64)(v63 ^ (unsigned __int64)(_ER15 + 4096)) >> 5);
      }
      goto LABEL_386;
    case -88:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2560, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteLong(msg, *(_DWORD *)_RSI ^ *(_DWORD *)_RBX);
      goto LABEL_386;
    case -87:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2618, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm1, dword ptr [rsi]; f }
      MSG_WriteAngle16(msg, *(float *)&_XMM1);
      goto LABEL_386;
    case -86:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2626, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rsi]
        vmulss  xmm0, xmm5, cs:__real@41200000
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vcvttss2si eax, xmm4
      }
      v104 = (int)_RAX;
      _RAX = (int)_RAX;
      if ( (int)_RAX < 0i64 )
        _RAX = ~(__int64)(int)_RAX;
      if ( 64 - (unsigned int)__lzcnt(_RAX) > (unsigned int)(v104 >= 0) + 5 )
      {
        __asm
        {
          vcvtss2sd xmm2, xmm5, xmm5
          vmovq   r8, xmm2
        }
        Com_PrintError(15, "MSG_WriteDeltaField: Not enough bits written for fontScale %f\n", _R8);
      }
      MSG_WriteBits(msg, v104, 6u);
      goto LABEL_386;
    case -85:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2680, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( *toColor ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( *toColor )") )
        __debugbreak();
      v110 = *((_BYTE *)_RBX + 3);
      if ( v110 == -1 )
      {
        if ( _RSI[3] )
          goto LABEL_173;
      }
      else if ( v110 || _RSI[3] != 0xFF )
      {
        goto LABEL_173;
      }
      if ( *(_WORD *)_RBX == *(_WORD *)_RSI && *((_BYTE *)_RBX + 2) == _RSI[2] )
        goto LABEL_301;
LABEL_173:
      MSG_WriteBit0(msg);
      if ( *(_BYTE *)_RBX == *_RSI && *((_BYTE *)_RBX + 1) == _RSI[1] && *((_BYTE *)_RBX + 2) == _RSI[2] )
      {
        MSG_WriteBit1(msg);
      }
      else
      {
        MSG_WriteBit0(msg);
        MSG_WriteByte(msg, *_RSI);
        MSG_WriteByte(msg, _RSI[1]);
        MSG_WriteByte(msg, _RSI[2]);
      }
      MSG_WriteBits(msg, _RSI[3], 8u);
      goto LABEL_386;
    case -84:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2716, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteBits(msg, *(int *)_RSI, 0x1Du);
      goto LABEL_386;
    case -80:
    case -78:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2538, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      MSG_WriteLong(msg, *(_DWORD *)_RSI);
      goto LABEL_386;
    case -77:
      v132 = MSG_GetField(_RSI, field->size);
      v133 = v132;
      if ( (unsigned __int64)(v132 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,__int64>(__int64)", "signed", (__int16)v132, "signed", v132) )
        __debugbreak();
      MSG_WriteValueNoXor(msg, v133, 8, field->name);
      goto LABEL_386;
    case -76:
      if ( abs16(field->size) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2824, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 2)", (const char *)&queryFormat, "abs( field->size ) == 2") )
      {
        __debugbreak();
        archived = snapInfo->archived;
      }
      v164 = *(__int16 *)_RSI - *(__int16 *)_RBX;
      if ( !archived && !snapInfo->fromBaseline )
        SV_TrackMovementDirDelta(v164);
      if ( (int)abs32(v164) >= 8 )
      {
        MSG_WriteBit0(msg);
        MSG_WriteValue(msg, _RBX, _RSI, 8, field->size, field->name);
      }
      else
      {
        MSG_WriteBit1(msg);
        MSG_WriteBits(msg, v164 + 8, 4u);
      }
      goto LABEL_386;
    case -75:
      v111 = field->size;
      if ( abs16(v111) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2709, ASSERT_TYPE_ASSERT, "(abs( field->size ) <= 4)", (const char *)&queryFormat, "abs( field->size ) <= 4") )
      {
        __debugbreak();
        v111 = field->size;
        archived = snapInfo->archived;
      }
      v112 = MSG_GetField(_RSI, v111);
      v113 = truncate_cast<int,__int64>(v112);
      v114 = MSG_GetField(_RBX, v111);
      v115 = v113 - truncate_cast<int,__int64>(v114);
      if ( (unsigned int)(v115 - 1) > 0xF )
      {
        if ( !archived && !snapInfo->fromBaseline )
          SV_TrackEventSeqFullSend(v115);
        MSG_WriteBit0(msg);
        MSG_WriteValue(msg, _RBX, _RSI, 8, v111, field->name);
      }
      else
      {
        if ( !archived && !snapInfo->fromBaseline )
          SV_TrackEventSeqDeltaSend(v115);
        MSG_WriteBit1(msg);
        MinBitCountForNum = GetMinBitCountForNum(0x10u);
        MSG_WriteBits(msg, v115 - 1, MinBitCountForNum);
      }
      goto LABEL_386;
    case -73:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_HINTSTRING);
      goto LABEL_386;
    case -72:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_LOCSTRING);
      goto LABEL_386;
    case -71:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_XMODEL);
      goto LABEL_386;
    case -69:
      v165 = abs16(field->size);
      v166 = v165 < 4;
      v167 = v165 == 4;
      v168 = v165 <= 4;
      if ( v165 != 4 )
      {
        v169 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2860, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4");
        v166 = 0;
        v167 = !v169;
        v168 = !v169;
        if ( v169 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm8, cs:__real@3f800000
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm0, xmm7
      }
      if ( v166 )
        goto LABEL_404;
      __asm { vcomiss xmm0, xmm8 }
      if ( !v168 )
      {
LABEL_404:
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+178h+var_138], xmm0
        }
        v174 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2863, ASSERT_TYPE_ASSERT, "(0.f <= *newValue && *newValue <= 1.f)", "%s\n\tnetfield %s can't be serialized with bits %d, value %f is not within range\n", "0.f <= *newValue && *newValue <= 1.f", field->name, field->bits, v265);
        v167 = !v174;
        v168 = !v174;
        if ( v174 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rsi]
        vcomiss xmm6, xmm7
        vmovss  xmm9, dword ptr [rbx]
        vcomiss xmm6, xmm8
      }
      if ( !v168 )
      {
        __asm
        {
          vmovsd  xmm0, cs:__real@3ff0000000000000
          vmovsd  [rsp+178h+var_140], xmm0
          vxorpd  xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+178h+dataBits], xmm1
          vcvtss2sd xmm2, xmm6, xmm6
          vmovsd  qword ptr [rsp+178h+oldValue], xmm2
        }
        v180 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2006, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( newValue ) && ( newValue ) <= ( 1.f )", "newValue not in [0.f, 1.f]\n\t%g not in [%g, %g]", oldValuef, dataBitsa, v264);
        v167 = !v180;
        if ( v180 )
          __debugbreak();
      }
      __asm { vucomiss xmm6, xmm7 }
      if ( v167 )
      {
        MSG_WriteBit0(msg);
        __asm { vmovss  [rsp+178h+fromF], xmm6 }
        v40 = msg;
        if ( fromF == 0x80000000 )
LABEL_301:
          MSG_WriteBit1(msg);
        else
LABEL_384:
          MSG_WriteBit0(v40);
      }
      else
      {
        MSG_WriteBit1(msg);
        __asm { vmovaps xmm0, xmm6; value }
        v182 = QuantizeRange01ToByte(*(const float *)&_XMM0);
        __asm { vmovaps xmm0, xmm9; value }
        v184 = v182;
        v185 = QuantizeRange01ToByte(*(const float *)&_XMM0);
        MSG_WriteByte(msg, v184 ^ v185);
      }
      goto LABEL_386;
    case -68:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2870, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm3, cs:__real@461c4000; maxValue }
      MSG_WriteFloatByRangeAndBits(msg, (const float *)_RBX, (const float *)_RSI, *(float *)&_XMM3, 0xEu);
      goto LABEL_386;
    case -67:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2877, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm3, cs:__real@40a00000; maxValue }
      MSG_WriteFloatByRangeAndBits(msg, (const float *)_RBX, (const float *)_RSI, *(float *)&_XMM3, 0xCu);
      goto LABEL_386;
    case -66:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2884, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm3, cs:__real@41300000; maxValue }
      MSG_WriteFloatByRangeAndBits(msg, (const float *)_RBX, (const float *)_RSI, *(float *)&_XMM3, 0xEu);
      goto LABEL_386;
    case -65:
      v202 = abs16(field->size);
      v203 = v202 <= 0x24;
      if ( v202 != 36 )
      {
        v204 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3024, ASSERT_TYPE_ASSERT, "(abs( field->size ) == sizeof( toBasis ))", (const char *)&queryFormat, "abs( field->size ) == sizeof( toBasis )");
        v203 = !v204;
        if ( v204 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm2, dword ptr [rsi+4]
        vmovss  xmm3, dword ptr [rsi+8]
        vmovsd  xmm4, cs:__real@3d719799812dea11
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcvtss2sd xmm0, xmm2, xmm2
        vcomisd xmm0, xmm4
      }
      if ( !v203 )
        goto LABEL_371;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  xmm2, dword ptr [rsi+10h]
        vmovss  xmm3, dword ptr [rsi+14h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcvtss2sd xmm0, xmm2, xmm2
        vcomisd xmm0, xmm4
      }
      if ( !v203 )
        goto LABEL_371;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+18h]
        vmovss  xmm2, dword ptr [rsi+1Ch]
        vmovss  xmm3, dword ptr [rsi+20h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcvtss2sd xmm0, xmm2, xmm2
        vcomisd xmm0, xmm4
      }
      if ( v203 )
      {
        MSG_WriteBit0(msg);
      }
      else
      {
LABEL_371:
        MSG_WriteBit1(msg);
        AxisToPackedQuat((const tmat33_t<vec3_t> *)_RSI, &outQuatPacked);
        __asm { vmovss  xmm1, dword ptr [rsp+178h+outQuatPacked]; f }
        MSG_WriteFloat(msg, *(float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rsp+178h+outQuatPacked+4]; f }
        MSG_WriteFloat(msg, *(float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rsp+178h+outQuatPacked+8]; f }
        MSG_WriteFloat(msg, *(float *)&_XMM1);
      }
      goto LABEL_386;
    case -64:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2898, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm3, cs:__real@42b40000; maxValue }
      MSG_WriteFloatByRangeAndBits(msg, (const float *)_RBX, (const float *)_RSI, *(float *)&_XMM3, 0xBu);
      goto LABEL_386;
    case -63:
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1696, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      BitsNeededForType = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VEHICLES);
      v192 = MSG_GetField(_RSI, field->size);
      MSG_WriteValueNoXor(msg, v192, BitsNeededForType + 7, field->name);
      goto LABEL_386;
    case -62:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_HEADICON);
      goto LABEL_386;
    case -61:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_SHOCK);
      goto LABEL_386;
    case -60:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_CLIENT_TAGS);
      goto LABEL_386;
    case -59:
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
      v197 = MSG_GetField(_RSI, field->size);
      MSG_WriteValueNoXor(msg, v197, ClientAttachTagBits + 11, field->name);
      goto LABEL_386;
    case -58:
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      BitCount = LerpEntityStateBeamScript::GetBitCount();
      goto LABEL_347;
    case -57:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_SUIT);
      goto LABEL_386;
    case -56:
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "( toF )", (const char *)&queryFormat, "toF") )
        __debugbreak();
      BitCount = AgentAttachModelData::GetBitCount();
LABEL_347:
      v194 = BitCount;
      v195 = MSG_GetField(_RSI, field->size);
      MSG_WriteValueNoXor(msg, v195, v194, field->name);
      goto LABEL_386;
    case -55:
      EntityStateIndexBits = BgDynamicLimits::GetEntityStateIndexBits();
      goto LABEL_357;
    case -54:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_MATERIAL);
      goto LABEL_386;
    case -53:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_ANIM);
      goto LABEL_386;
    case -52:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_VISIONSET);
      goto LABEL_386;
    case -51:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_VFX);
      goto LABEL_386;
    case -50:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_MINIMAPICON);
      goto LABEL_386;
    case -49:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_OBJECTIVEICON);
      goto LABEL_386;
    case -48:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_LUI);
      goto LABEL_386;
    case -47:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_IMAGE);
      goto LABEL_386;
    case -46:
      EntityStateIndexBits = ComCharacterLimits::GetClientBits();
      goto LABEL_357;
    case -45:
      fromF = 0;
      MSG_WriteDeltaClientBitsKey(msg, &fromF, _RBX, _RSI);
      goto LABEL_386;
    case -44:
      EntityStateIndexBits = ComCharacterLimits::GetCharacterBits();
LABEL_357:
      MSG_WriteDynamicIndexField(msg, field, _RSI, EntityStateIndexBits);
      goto LABEL_386;
    case -43:
      v199 = *(_DWORD *)_RSI;
      v200 = *(_DWORD *)_RSI >> 29;
      MSG_WriteBits(msg, v200, 3u);
      for ( i = 0; i < v200; ++i )
        MSG_WriteBits(msg, (unsigned __int64)(v199 & (unsigned int)(15 << (4 * i))) >> (4 * (unsigned __int8)i), 4u);
      goto LABEL_386;
    case -42:
      MSG_WriteNetConstString(msg, field, _RSI, NETCONSTSTRINGTYPE_CARRYOBJECT);
      goto LABEL_386;
    case -41:
      v236 = MSG_GetField(_RSI, field->size);
      if ( (v236 < 0 || (unsigned __int64)v236 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v236, "signed", v236) )
        __debugbreak();
      MSG_WriteBits(msg, (unsigned int)(v236 + 1), 0x12u);
      goto LABEL_386;
    case -40:
      if ( abs16(field->size) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 2891, ASSERT_TYPE_ASSERT, "(abs( field->size ) == 4)", (const char *)&queryFormat, "abs( field->size ) == 4") )
        __debugbreak();
      __asm { vmovss  xmm3, cs:__real@41a00000; maxValue }
      MSG_WriteFloatByRangeAndBits(msg, (const float *)_RBX, (const float *)_RSI, *(float *)&_XMM3, 0xAu);
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
      v237 = field->size;
      v238 = MSG_GetField(_RSI, v237);
      v40 = msg;
      if ( !v238 )
        goto LABEL_384;
      MSG_WriteBit1(msg);
      MSG_WriteValue(msg, _RBX, _RSI, field->bits, v237, field->name);
      goto LABEL_386;
  }
  do
  {
    if ( *v94 == v93 )
    {
      MSG_WriteBit1(msg);
      if ( v92 >= 0 )
        MSG_WriteBit0(msg);
      else
        MSG_WriteBit1(msg);
      v97 = GetMinBitCountForNum(7u);
      MSG_WriteBits(msg, v95, v97);
      goto LABEL_386;
    }
    ++v95;
    ++v94;
  }
  while ( (__int64)v94 < (__int64)&unk_147EF2566 );
  MSG_WriteBit0(msg);
  if ( v93 && v93 < 4096 )
  {
    if ( !snapInfo->archived && !snapInfo->fromBaseline )
      SV_TrackAngleDeltaBits(v92);
    MSG_WriteBit1(msg);
    if ( v92 >= 0 )
      MSG_WriteBit0(msg);
    else
      MSG_WriteBit1(msg);
    MSG_WriteBits(msg, v93, 0xCu);
  }
  else
  {
    if ( !snapInfo->archived && !snapInfo->fromBaseline )
      SV_TrackAngleFullSend();
    MSG_WriteBit0(msg);
    __asm { vmovaps xmm1, xmm7; f }
    MSG_WriteAngle16(msg, *(float *)&_XMM1);
  }
LABEL_386:
  v128 = from;
  v129 = to;
LABEL_387:
  __asm
  {
    vmovaps xmm9, [rsp+178h+var_88]
    vmovaps xmm8, [rsp+178h+var_78]
    vmovaps xmm7, [rsp+178h+var_68]
    vmovaps xmm6, [rsp+178h+var_58]
  }
  if ( !snapInfo->archived )
  {
    v243 = MSG_GetUsedBitCount(msg);
    v244 = v269;
    if ( !sendSkippedFields )
      v244 = UsedBitCount;
    v245 = v269 - UsedBitCount;
    v246 = v243 - v244;
    if ( !sendSkippedFields )
      v245 = 0;
    if ( snapInfo->fromBaseline )
    {
      v248 = v268;
    }
    else
    {
      v247 = v128;
      v248 = v268;
      SV_TrackFieldWritten(snapInfo->clientNum, (const PacketEntityType_e)snapInfo->packetEntityType, v268, v247, v129, v245, v246);
    }
    if ( v246 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 3126, ASSERT_TYPE_ASSERT, "( dataBits > 0 )", (const char *)&queryFormat, "dataBits > 0") )
      __debugbreak();
    if ( snapInfo->clientNum == -1 )
      SV_BandwidthProfile_AddNetFieldToServerMsg(snapInfo, *(_WORD *)v129, v248, v245, v246);
    else
      SV_BandwidthProfile_AddNetFieldToSnapshot(snapInfo, v248, v245, v246);
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
          _R14 = &v25[offset];
          v27 = abs16(v22->size);
          if ( v27 > 0x10 )
            goto LABEL_70;
          __asm
          {
            vmovdqu xmm1, xmmword ptr [r14]
            vpcmpeqb xmm1, xmm1, xmmword ptr [rsi]
          }
          v30 = (1 << v27) - 1;
          __asm { vpmovmskb eax, xmm1 }
          if ( (v30 & _EAX) != v30 )
          {
LABEL_70:
            if ( !MSG_ValuesAreEqualPost(v24, _R14, v22->bits, array[v20].size) )
            {
              if ( !snapInfo->archived && msg_hudelemspew->current.enabled )
              {
                BitCount = MSG_GetBitCount((bool *)&count, fromData, (const unsigned __int8 *)toa + (_QWORD)fromData, v22);
                v33 = (char *)&queryFormat.fmt + 3;
                if ( (_BYTE)count )
                  v33 = "(est)";
                LODWORD(sendSkippedFields) = BitCount;
                LODWORD(lastChangedField) = *(_DWORD *)_R14;
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
    _R11 = (char *)to + v13;
    v16 = abs16(*p_size);
    if ( v16 > 0x10 )
      goto LABEL_8;
    __asm
    {
      vmovdqu xmm1, xmmword ptr [r11]
      vpcmpeqb xmm1, xmm1, xmmword ptr [r10]
    }
    v19 = (1 << v16) - 1;
    __asm { vpmovmskb eax, xmm1 }
    if ( (v19 & _EAX) == v19 )
      v21 = 1;
    else
LABEL_8:
      v21 = MSG_ValuesAreEqualPost(v14, _R11, p_size[2], *p_size);
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
  char v20[32]; 
  char dest[32]; 

  _R14 = from;
  _RSI = to;
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
        Com_sprintf(v20, 0x20ui64, "%d", to->current.enabled);
      }
      MSG_WriteBool(msg, to->current.enabled);
      break;
    case OMNVAR_TYPE_FLOAT:
      if ( !snapInfo->archived )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [r14+4]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x20ui64, "%f", *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+4]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_sprintf(v20, 0x20ui64, "%f", *(double *)&_XMM3);
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
        Com_sprintf(v20, 0x20ui64, "%d", to->current.unsignedInteger);
      }
      MSG_WriteValue(msg, &from->current, &to->current, def->numbits, -4, def->name);
      break;
    case OMNVAR_TYPE_TIME:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%d", from->current.unsignedInteger);
        Com_sprintf(v20, 0x20ui64, "%d", to->current.unsignedInteger);
      }
      MSG_WriteDeltaTime(msg, timeBase, to->current.integer);
      break;
    case OMNVAR_TYPE_NCS_LUI:
      if ( !snapInfo->archived )
      {
        Com_sprintf(dest, 0x20ui64, "%u", from->current.unsignedInteger);
        Com_sprintf(v20, 0x20ui64, "%u", to->current.unsignedInteger);
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
    SV_LogSnapshotContent(snapInfo->clientNum, "Omnvar - (%s, %d bits, flags: %d, type %d) from %s to %s\n", def->name, def->numbits, fmt, fieldName, dest, v20);
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
  const playerState_s *v11; 
  msg_t *v12; 
  int UsedBitCount; 
  bool archived; 
  int clientNum; 
  __int16 v23; 
  const SvClientPredictedOrigin *predictedResult; 
  const SvClientMP *client; 
  bool v39; 
  bool v40; 
  unsigned int vehicleTargetEntity; 
  bool v58; 
  int v60; 
  int v61; 
  NetField *field; 
  signed int count; 
  unsigned int v64; 
  __int64 v65; 
  const dvar_t *v66; 
  bool v67; 
  const char *name; 
  const char *v69; 
  __int64 v70; 
  signed __int64 v71; 
  char v72; 
  __int64 v73; 
  char v74; 
  int BitCount; 
  const char *v76; 
  int v77; 
  NetField *v78; 
  int v79; 
  int lastChangedField; 
  int v81; 
  NetField *v82; 
  int fieldNum; 
  int v84; 
  __int64 v85; 
  unsigned __int8 changeHints; 
  bool xorValue; 
  int i; 
  int v89; 
  playerState_s *v90; 
  unsigned __int8 *v91; 
  int v92; 
  bool v93; 
  const Weapon *v94; 
  NetField *v95; 
  __int64 v96; 
  int *v97; 
  __int64 v98; 
  playerState_s *v99; 
  __int64 v100; 
  signed __int64 v101; 
  bool v102; 
  int v103; 
  int v104; 
  int v105; 
  _DWORD *v106; 
  PlayerEquippedWeaponState *weapEquippedData; 
  char v108; 
  unsigned __int8 *v109; 
  SnapshotInfo *v110; 
  PlayerEquippedWeaponState *v111; 
  PlayerEquippedWeaponState *v112; 
  unsigned __int8 *v113; 
  unsigned __int8 *v114; 
  signed __int64 v115; 
  __int64 j; 
  const Weapon *v117; 
  int v118; 
  SnapshotInfo *v119; 
  int *v120; 
  signed __int64 v121; 
  bool v122; 
  int v123; 
  int v124; 
  unsigned __int8 *v125; 
  ObjectiveView *objectives; 
  unsigned __int8 *v127; 
  const NetFieldList *v128; 
  int v129; 
  const NetField *array; 
  __int64 v131; 
  int v132; 
  const unsigned __int8 *v133; 
  int v134; 
  int v135; 
  int v136; 
  playerState_s *v137; 
  bool v138; 
  int v139; 
  int v140; 
  const OmnvarDef *PlayerStateDefs; 
  unsigned int v142; 
  unsigned int v143; 
  int v144; 
  unsigned int v145; 
  int v146; 
  unsigned __int8 *v147; 
  HeadIconView *headIcons; 
  unsigned int v149; 
  const NetField *v150; 
  __int64 v151; 
  int v152; 
  const unsigned __int8 *v153; 
  int v154; 
  int v155; 
  int v156; 
  unsigned __int8 *v157; 
  HeadIconExtendedView *headIconsExtendedData; 
  unsigned int v159; 
  const NetField *v160; 
  __int64 v161; 
  int v162; 
  const unsigned __int8 *v163; 
  int v164; 
  int v165; 
  int v166; 
  unsigned __int8 *v167; 
  TargetMarkerGroupView *targetMarkerGroups; 
  unsigned int v169; 
  const NetField *v170; 
  __int64 v171; 
  int v172; 
  const unsigned __int8 *v173; 
  int v174; 
  int v175; 
  int v176; 
  unsigned __int8 *v177; 
  CalloutMarkerPingView *calloutMarkerPings; 
  unsigned int v179; 
  const NetField *v180; 
  __int64 v181; 
  int v182; 
  const unsigned __int8 *v183; 
  int v184; 
  int v185; 
  int v186; 
  int v187; 
  char *fmt; 
  char v189; 
  int skippedFieldBits; 
  int v192; 
  int skippedNetfieldBits; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  bool estimate; 
  int timea; 
  int lc; 
  playerState_s *oldPs; 
  const Weapon *v202; 
  unsigned __int8 *toData; 
  NetField *v204; 
  int v205; 
  SnapshotInfo *snapInfoa; 
  __int64 v207; 
  unsigned __int8 *v208; 
  playerState_s v209; 
  __int64 v210[10]; 
  char *v211; 
  int v212; 
  __int16 v213; 
  char v214; 

  _EBX = 0;
  _RSI = to;
  v11 = from;
  v12 = msg;
  oldPs = (playerState_s *)from;
  timea = time;
  v207 = (__int64)msg;
  snapInfoa = snapInfo;
  toData = (unsigned __int8 *)to;
  v209.meleeReaction.m_packed = 0;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4742, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  memset(v210, 0, 72);
  __asm
  {
    vmovss  xmm2, cs:__real@38d1b717
    vmovd   xmm1, ebx
  }
  _EAX = BG_IsPlayerPositionQuantized(to);
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3c23d70a
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  [rsp+5550h+var_54DC], xmm0
  }
  Profile_Begin(376);
  UsedBitCount = MSG_GetUsedBitCount(v12);
  archived = snapInfo->archived;
  v205 = UsedBitCount;
  if ( !archived )
    SV_LogSnapshotContent(snapInfo->clientNum, "Writing playerstate for client #%i to->clientNum %d\n", (unsigned int)snapInfo->clientNum, (unsigned int)to->clientNum);
  snapInfo->packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_PLAYERSTATE;
  if ( !v11 )
  {
    v11 = &v209;
    oldPs = &v209;
    memset_0(&v209, 0, sizeof(v209));
    BG_InitPlayerState_PrepareForUseAsDelta(&v209, 0, 1);
  }
  __asm { vmovaps [rsp+5550h+var_60], xmm7 }
  if ( archived || snapInfo->demoSnapshot )
  {
    v58 = 1;
    v189 = 1;
    MSG_WriteBit1(v12);
    MSG_WriteBit1(v12);
  }
  else
  {
    clientNum = to->clientNum;
    __asm
    {
      vmovaps [rsp+5550h+var_50], xmm6
      vmovaps [rsp+5550h+var_70], xmm8
    }
    v23 = truncate_cast<short,int>(clientNum);
    SV_BandwidthProfile_AddSerializedEntityToSnapshot(snapInfo, v23, 0);
    predictedResult = snapInfo->predictedResult;
    __asm
    {
      vmovss  xmm7, [rsp+5550h+var_54DC]
      vxorps  xmm8, xmm8, xmm8
    }
    if ( predictedResult )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+30h]
        vsubss  xmm3, xmm0, dword ptr [rbx+8]
        vmovss  xmm1, dword ptr [rsi+34h]
        vmovss  xmm0, dword ptr [rsi+38h]
        vsubss  xmm2, xmm1, dword ptr [rbx+0Ch]
        vsubss  xmm4, xmm0, dword ptr [rbx+10h]
      }
      client = snapInfo->client;
      __asm
      {
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
      }
      if ( !snapInfo->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4788, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( client->isForceMispredict )
      {
        __asm { vaddss  xmm6, xmm7, cs:__real@3f800000 }
        client->isForceMispredict = 0;
      }
    }
    else
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    v39 = v11 == NULL;
    v40 = v11 == NULL;
    if ( v11 )
    {
      v39 = predictedResult == NULL;
      v40 = predictedResult == NULL;
      if ( predictedResult )
        __asm { vcomiss xmm6, xmm7 }
    }
    _RAX = msg_logPredictionPositionErrors;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vcomiss xmm0, xmm8
    }
    if ( !v39 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
    }
    __asm { vcomiss xmm6, xmm7 }
    if ( v40 )
    {
      if ( !predictedResult )
        SV_TrackPSOriginServerTimeSend();
    }
    else
    {
      SV_TrackPSOriginPredictionSend();
    }
    MSG_WriteBit1(v12);
    __asm
    {
      vmovaps xmm8, [rsp+5550h+var_70]
      vmovaps xmm6, [rsp+5550h+var_50]
    }
    if ( to->vehicleState.entity == 2047 )
      goto LABEL_33;
    if ( !v11 )
      goto LABEL_32;
    if ( !predictedResult )
      goto LABEL_32;
    if ( !predictedResult->hasVehicleData )
      goto LABEL_32;
    vehicleTargetEntity = predictedResult->vehicleTargetEntity;
    if ( vehicleTargetEntity != to->vehicleState.targetEntity )
      goto LABEL_32;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+12Ch]
      vsubss  xmm3, xmm0, dword ptr [rbx+14h]
      vmovss  xmm1, dword ptr [rsi+130h]
      vsubss  xmm2, xmm1, dword ptr [rbx+18h]
      vmovss  xmm0, dword ptr [rsi+134h]
      vsubss  xmm4, xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm7
    }
    if ( vehicleTargetEntity <= to->vehicleState.targetEntity )
    {
LABEL_33:
      MSG_WriteBit0(v12);
      v58 = 0;
      v189 = 0;
    }
    else
    {
LABEL_32:
      MSG_WriteBit1(v12);
      v58 = 1;
      v189 = 1;
    }
  }
  __asm { vmovaps xmm7, [rsp+5550h+var_60] }
  v60 = -1;
  v61 = 0;
  field = (NetField *)g_newNetFieldList[2]->array;
  skippedFieldBits = g_newNetFieldList[2]->skippedNetfieldBits;
  count = g_newNetFieldList[2]->count;
  v64 = -1;
  lc = -1;
  LODWORD(v202) = count;
  v204 = field;
  if ( count > 0 )
  {
    v65 = 0i64;
    do
    {
      if ( MSG_ShouldSendPSField(snapInfo, 1, v58, _RSI, oldPs, field) )
      {
        if ( !snapInfo->archived && !snapInfo->fromBaseline )
        {
          SV_TrackFieldChange(snapInfo->clientNum, ANALYZE_DATATYPE_ENTITYTYPE_PLAYERSTATE, v61, _RSI->clientNum);
          v66 = DVARBOOL_sv_debugPlayerstate;
          v67 = 0;
          if ( !DVARBOOL_sv_debugPlayerstate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPlayerstate") )
          {
            __debugbreak();
            v67 = snapInfo->archived;
          }
          Dvar_CheckFrontendServerThread(v66);
          if ( v66->current.enabled && !v67 )
          {
            name = field->name;
            v69 = "commandTime";
            v70 = 0x7FFFFFFFi64;
            if ( !field->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v71 = name - "commandTime";
            while ( 1 )
            {
              v72 = v69[v71];
              v73 = v70;
              v74 = *v69;
              --v70;
              ++v69;
              if ( !v73 )
              {
LABEL_52:
                _RSI = (const playerState_s *)toData;
                goto LABEL_53;
              }
              if ( v72 != v74 )
                break;
              if ( !v72 )
                goto LABEL_52;
            }
            _RSI = (const playerState_s *)toData;
            BitCount = MSG_GetBitCount(&estimate, (const unsigned __int8 *)oldPs, toData, field);
            v76 = (char *)&queryFormat.fmt + 3;
            if ( estimate )
              v76 = "(est)";
            LODWORD(fmt) = BitCount;
            Com_Printf(16, "PS field %d %s changed, %d bits%s\n", (unsigned int)v61, field->name, fmt, v76);
          }
LABEL_53:
          v58 = v189;
        }
        *((_DWORD *)v210 + (v65 >> 5)) |= 1 << (v61 & 0x1F);
        v64 = v61;
        lc = v61;
      }
      else
      {
        v64 = lc;
      }
      ++v61;
      ++v65;
      ++field;
    }
    while ( v61 < (int)v202 );
    v12 = (msg_t *)v207;
    v60 = -1;
  }
  v39 = !snapInfo->archived;
  snapInfo->fieldChanges = orderInfo.playerState;
  snapInfo->fieldChangesCount = 575;
  if ( v39 )
    SV_LogSnapshotContent(snapInfo->clientNum, "Writing byte for number of fields changed (%i)\n", v64);
  v77 = lc;
  if ( lc < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4905, ASSERT_TYPE_ASSERT, "(lc >= -1)", (const char *)&queryFormat, "lc >= -1") )
    __debugbreak();
  MSG_WriteLastChangedField(snapInfo, v12, v77 + 1, (_DWORD)v202 + 1);
  v78 = v204;
  v79 = lc;
  lastChangedField = -1;
  v81 = -1;
  v82 = v204;
  fieldNum = 0;
  if ( lc >= 0 )
  {
    v84 = 1;
    v85 = 0i64;
    do
    {
      changeHints = v82->changeHints;
      if ( changeHints != 2 || fieldNum == v79 )
      {
        if ( (v84 & *((_DWORD *)v210 + (v85 >> 5))) != 0 )
        {
          xorValue = snapInfo->archived || ((changeHints - 3) & 0xFA) != 0 || changeHints == 8;
          if ( !MSG_WriteDeltaField(snapInfo, v12, timea, (const unsigned __int8 *)oldPs, toData, v82, fieldNum, 1, xorValue, lastChangedField, skippedFieldBits, 1, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4933, ASSERT_TYPE_ASSERT, "(sent)", "%s\n\tfield %s changed but wasn't sent to the client\n", "sent", v82->name) )
            __debugbreak();
          v79 = lc;
          lastChangedField = fieldNum;
        }
      }
      else
      {
        v81 = fieldNum;
      }
      ++fieldNum;
      v84 = __ROL4__(v84, 1);
      ++v85;
      ++v82;
    }
    while ( fieldNum <= v79 );
    if ( v79 >= 0 && lastChangedField != v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4939, ASSERT_TYPE_ASSERT, "(lastChanged == lc)", (const char *)&queryFormat, "lastChanged == lc") )
      __debugbreak();
    v78 = v204;
    v60 = -1;
  }
  for ( i = 0; i <= v81; ++v78 )
  {
    if ( v78->changeHints == 2 && MSG_WriteDeltaField(snapInfo, v12, timea, (const unsigned __int8 *)oldPs, toData, v78, i, 1, 1, v60, skippedFieldBits, 0, NULL) )
      v60 = i;
    ++i;
  }
  if ( v60 > lc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 4957, ASSERT_TYPE_ASSERT, "(lastChanged <= lc)", (const char *)&queryFormat, "lastChanged <= lc") )
    __debugbreak();
  v89 = MSG_GetUsedBitCount(v12);
  SV_TrackPSBitsForSegment(snapInfo, v89 - v205, PLAYERSTATE_SEGMENT_FIRST);
  v90 = oldPs;
  v91 = toData;
  v92 = *((_DWORD *)toData + 150) != oldPs->stats[0];
  if ( *((_DWORD *)toData + 151) != oldPs->stats[1] )
    v92 |= 2u;
  if ( *((_DWORD *)toData + 152) != oldPs->stats[2] )
    v92 |= 4u;
  if ( *((_DWORD *)toData + 153) != oldPs->stats[3] )
    v92 |= 8u;
  if ( *((_DWORD *)toData + 154) != oldPs->stats[4] )
    v92 |= 0x10u;
  v93 = snapInfo->archived;
  if ( v92 )
  {
    if ( !v93 )
      SV_LogSnapshotContent(snapInfo->clientNum, "Sending player stats changes - bit 1 to say it changed, %i bits for which changed\n", 5i64);
    MSG_WriteBit1(v12);
    MSG_WriteBits(v12, v92, 5u);
    if ( (v92 & 1) != 0 )
    {
      if ( !v93 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player health stat (value is %i)\n", *((unsigned int *)v91 + 150));
      MSG_WriteShort(v12, *((_DWORD *)v91 + 150));
    }
    if ( (v92 & 2) != 0 )
    {
      if ( !v93 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player dead yaw stat (value is %i)\n", *((unsigned int *)v91 + 151));
      MSG_WriteShort(v12, *((_DWORD *)v91 + 151));
    }
    if ( (v92 & 4) != 0 )
    {
      if ( !v93 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player maximum health stat (value is %i)\n", *((unsigned int *)v91 + 152));
      MSG_WriteShort(v12, *((_DWORD *)v91 + 152));
    }
    if ( (v92 & 8) != 0 )
    {
      if ( !v93 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player spawn count stat (value is %i)\n", *((unsigned int *)v91 + 153));
      MSG_WriteByte(v12, *((int *)v91 + 153));
    }
    if ( (v92 & 0x10) != 0 )
    {
      if ( !v93 )
        SV_LogSnapshotContent(snapInfo->clientNum, "Sending player killer vehicle (value is %i)\n", *((unsigned int *)v91 + 154));
      MSG_WriteShort(v12, *((_DWORD *)v91 + 154));
    }
  }
  else
  {
    if ( !v93 )
      SV_LogSnapshotContent(snapInfo->clientNum, "Writing 0 to say no player stats changed\n");
    MSG_WriteBit0(v12);
  }
  v192 = MSG_GetUsedBitCount(v12);
  SV_TrackPSBitsForSegment(snapInfo, v192 - v89, PLAYERSTATE_SEGMENT_STATS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(snapInfo, v192 - v89, 1);
  estimate = snapInfo->archived;
  if ( !estimate )
    SV_LogSnapshotContent(snapInfo->clientNum, "sending ammo and weapons\n");
  v94 = (const Weapon *)(v91 + 2932);
  v95 = NULL;
  v202 = (const Weapon *)(v91 + 2932);
  v96 = (char *)v90 - (char *)(v91 + 2932);
  v204 = NULL;
  v97 = (int *)(v91 + 2996);
  v211 = (char *)v96;
  v98 = 15i64;
  v208 = v91 + 2996;
  v207 = 15i64;
  do
  {
    if ( memcmp_0(v94, &v94[48].attachmentVariationIndices[v96 + 25], 0x58ui64) )
    {
      MSG_WriteBit1(v12);
      MSG_WriteBits(v12, (const __int64)v95, 4u);
      MSG_WriteBits(v12, *(v97 - 1), 1u);
      MSG_WriteWeapon(v12, v94);
      v99 = v90;
      v100 = 2i64;
      v101 = (char *)v99 - (char *)v91;
      v102 = estimate;
      do
      {
        if ( *v97 == *(int *)((char *)v97 + v101) )
        {
          MSG_WriteBit0(v12);
        }
        else
        {
          MSG_WriteBit1(v12);
          v103 = *v97;
          if ( *v97 > 31 )
            v103 = 31;
          if ( v103 < 0 )
            v103 = 0;
          MSG_WriteBits(v12, v103, 5u);
        }
        if ( v97[2] == *(int *)((char *)v97 + v101 + 8) )
        {
          MSG_WriteBit0(v12);
        }
        else
        {
          MSG_WriteBit1(v12);
          v104 = v97[2];
          if ( v104 > 31 )
            v104 = 31;
          if ( v104 < 0 )
            v104 = 0;
          MSG_WriteBits(v12, v104, 5u);
        }
        if ( v97[4] == *(int *)((char *)v97 + v101 + 16) )
        {
          MSG_WriteBit0(v12);
        }
        else
        {
          MSG_WriteBit1(v12);
          v105 = v97[4];
          if ( v105 >= 512 )
          {
            v105 = 511;
            if ( !v102 )
              Com_Printf(15, "Clip ammo clamped to %i when packed into message.\n", 511i64);
          }
          MSG_WriteBits(v12, v105, 9u);
        }
        ++v97;
        --v100;
      }
      while ( v100 );
      v91 = toData;
      v94 = v202;
      v97 = (int *)v208;
      v95 = v204;
      v98 = v207;
      v90 = oldPs;
    }
    v96 = (__int64)v211;
    v95 = (NetField *)((char *)v95 + 1);
    v94 = (const Weapon *)((char *)v94 + 88);
    v204 = v95;
    v97 += 22;
    v202 = v94;
    --v98;
    v208 = (unsigned __int8 *)v97;
    v207 = v98;
  }
  while ( v98 );
  MSG_WriteBit0(v12);
  v106 = v91 + 1480;
  v211 = NULL;
  weapEquippedData = v90->weapEquippedData;
  v212 = 0;
  v108 = 0;
  v213 = 0;
  v214 = 0;
  if ( *((_DWORD *)v91 + 370) != v90->weaponsEquipped[0].m_mapEntryId || (v109 = v91 + 1540, *(_QWORD *)(v91 + 1540) != *(_QWORD *)&weapEquippedData->usedBefore) || *(_QWORD *)(v91 + 1548) != *(_QWORD *)&v90->weapEquippedData[0].thermalEnabled )
  {
    LOBYTE(v211) = 1;
    v109 = v91 + 1540;
    v108 = 1;
  }
  v110 = snapInfoa;
  if ( *((_DWORD *)v91 + 371) != v90->weaponsEquipped[1].m_mapEntryId || *((_QWORD *)v109 + 2) != *(_QWORD *)&v90->weapEquippedData[1].usedBefore || *((_QWORD *)v109 + 3) != *(_QWORD *)&v90->weapEquippedData[1].thermalEnabled )
  {
    BYTE1(v211) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 372) != v90->weaponsEquipped[2].m_mapEntryId || *((_QWORD *)v109 + 4) != *(_QWORD *)&v90->weapEquippedData[2].usedBefore || *((_QWORD *)v109 + 5) != *(_QWORD *)&v90->weapEquippedData[2].thermalEnabled )
  {
    BYTE2(v211) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 373) != v90->weaponsEquipped[3].m_mapEntryId || *((_QWORD *)v109 + 6) != *(_QWORD *)&v90->weapEquippedData[3].usedBefore || *((_QWORD *)v109 + 7) != *(_QWORD *)&v90->weapEquippedData[3].thermalEnabled )
  {
    BYTE3(v211) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 374) != v90->weaponsEquipped[4].m_mapEntryId || *((_QWORD *)v109 + 8) != *(_QWORD *)&v90->weapEquippedData[4].usedBefore || *((_QWORD *)v109 + 9) != *(_QWORD *)&v90->weapEquippedData[4].thermalEnabled )
  {
    BYTE4(v211) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 375) != v90->weaponsEquipped[5].m_mapEntryId || *((_QWORD *)v109 + 10) != *(_QWORD *)&v90->weapEquippedData[5].usedBefore || *((_QWORD *)v109 + 11) != *(_QWORD *)&v90->weapEquippedData[5].thermalEnabled )
  {
    BYTE5(v211) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 376) != v90->weaponsEquipped[6].m_mapEntryId )
  {
    v111 = v90->weapEquippedData;
LABEL_186:
    BYTE6(v211) = 1;
    v113 = v91 + 1540;
    v108 = 1;
    v112 = v111;
    goto LABEL_187;
  }
  v111 = v90->weapEquippedData;
  v112 = v90->weapEquippedData;
  v113 = v109;
  if ( *((_QWORD *)v109 + 12) != *(_QWORD *)&v90->weapEquippedData[6].usedBefore || *((_QWORD *)v109 + 13) != *(_QWORD *)&v90->weapEquippedData[6].thermalEnabled )
    goto LABEL_186;
LABEL_187:
  if ( *((_DWORD *)v91 + 377) != v90->weaponsEquipped[7].m_mapEntryId || (v112 = v90->weapEquippedData, v113 = v109, *((_QWORD *)v109 + 14) != *(_QWORD *)&v90->weapEquippedData[7].usedBefore) || *((_QWORD *)v109 + 15) != *(_QWORD *)&v90->weapEquippedData[7].thermalEnabled )
  {
    HIBYTE(v211) = 1;
    v108 = 1;
    weapEquippedData = v112;
    v109 = v113;
  }
  if ( *((_DWORD *)v91 + 378) != v90->weaponsEquipped[8].m_mapEntryId || *((_QWORD *)v109 + 16) != *(_QWORD *)&weapEquippedData[8].usedBefore || *((_QWORD *)v109 + 17) != *(_QWORD *)&weapEquippedData[8].thermalEnabled )
  {
    LOBYTE(v212) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 379) != v90->weaponsEquipped[9].m_mapEntryId || *((_QWORD *)v109 + 18) != *(_QWORD *)&weapEquippedData[9].usedBefore || *((_QWORD *)v109 + 19) != *(_QWORD *)&weapEquippedData[9].thermalEnabled )
  {
    BYTE1(v212) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 380) != v90->weaponsEquipped[10].m_mapEntryId || *((_QWORD *)v109 + 20) != *(_QWORD *)&weapEquippedData[10].usedBefore || *((_QWORD *)v109 + 21) != *(_QWORD *)&weapEquippedData[10].thermalEnabled )
  {
    BYTE2(v212) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 381) != v90->weaponsEquipped[11].m_mapEntryId || *((_QWORD *)v109 + 22) != *(_QWORD *)&weapEquippedData[11].usedBefore || *((_QWORD *)v109 + 23) != *(_QWORD *)&weapEquippedData[11].thermalEnabled )
  {
    HIBYTE(v212) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 382) != v90->weaponsEquipped[12].m_mapEntryId || *((_QWORD *)v109 + 24) != *(_QWORD *)&weapEquippedData[12].usedBefore || *((_QWORD *)v109 + 25) != *(_QWORD *)&weapEquippedData[12].thermalEnabled )
  {
    LOBYTE(v213) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 383) != v90->weaponsEquipped[13].m_mapEntryId || *((_QWORD *)v109 + 26) != *(_QWORD *)&weapEquippedData[13].usedBefore || *((_QWORD *)v109 + 27) != *(_QWORD *)&weapEquippedData[13].thermalEnabled )
  {
    HIBYTE(v213) = 1;
    v108 = 1;
  }
  if ( *((_DWORD *)v91 + 384) == v90->weaponsEquipped[14].m_mapEntryId && *((_QWORD *)v109 + 28) == *(_QWORD *)&weapEquippedData[14].usedBefore && *((_QWORD *)v109 + 29) == *(_QWORD *)&weapEquippedData[14].thermalEnabled )
  {
    if ( !v108 )
    {
      MSG_WriteBit0(v12);
      goto LABEL_246;
    }
  }
  else
  {
    v214 = 1;
  }
  MSG_WriteBit1(v12);
  v114 = v91 + 1541;
  v115 = (char *)v90 - (char *)v91;
  for ( j = 0i64; j < 15; ++j )
  {
    if ( !*((_BYTE *)&v211 + j) )
      goto LABEL_243;
    MSG_WriteBit1(v12);
    if ( *v106 == *(_DWORD *)((char *)v106 + v115) )
    {
      MSG_WriteBit0(v12);
    }
    else
    {
      MSG_WriteBit1(v12);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 235, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      MSG_WriteBits(v12, (unsigned int)*v106, BgWeaponMap::ms_runtimeIndexBits);
    }
    if ( *(v114 - 1) )
      MSG_WriteBit1(v12);
    else
      MSG_WriteBit0(v12);
    if ( *v114 )
      MSG_WriteBit1(v12);
    else
      MSG_WriteBit0(v12);
    if ( v114[1] )
      MSG_WriteBit1(v12);
    else
      MSG_WriteBit0(v12);
    MSG_WriteBits(v12, *(int *)(v114 + 3), 2u);
    MSG_WriteBits(v12, v114[9], 3u);
    MSG_WriteBits(v12, *(int *)(v114 + 11), 3u);
    if ( v114[7] )
      MSG_WriteBit1(v12);
    else
      MSG_WriteBit0(v12);
    if ( v114[8] )
      MSG_WriteBit1(v12);
    else
LABEL_243:
      MSG_WriteBit0(v12);
    ++v106;
    v114 += 16;
  }
  v110 = snapInfoa;
  v91 = toData;
LABEL_246:
  v117 = (const Weapon *)(v91 + 1912);
  v118 = 0;
  snapInfoa = NULL;
  v119 = NULL;
  v120 = (int *)(v91 + 1976);
  v121 = (char *)oldPs - (char *)(v91 + 1912);
  v211 = (char *)v121;
  do
  {
    if ( memcmp_0(v117, &v117[31].attachmentVariationIndices[v121 + 25], 0x44ui64) )
    {
      v122 = v110->archived;
      if ( !v122 )
      {
        LODWORD(fmt) = *v120;
        SV_LogSnapshotContent(v110->clientNum, "ammo changed, sending %d bits as flag bit, %i bit index (value is %i) followed by the ammo value as short\n", 10i64, (unsigned int)v118, fmt);
      }
      MSG_WriteBit1(v12);
      MSG_WriteBits(v12, (const __int64)v119, 4u);
      MSG_WriteBits(v12, *(v120 - 1), 1u);
      MSG_WriteWeapon(v12, v117);
      v123 = *v120;
      if ( *v120 >= 1024 )
      {
        v123 = 1023;
        if ( !v122 )
          Com_Printf(15, "Stored ammo clamped to %i when packed into message.\n", 1023i64);
      }
      MSG_WriteBits(v12, v123, 0xAu);
      v119 = snapInfoa;
    }
    v121 = (signed __int64)v211;
    v119 = (SnapshotInfo *)((char *)v119 + 1);
    ++v118;
    snapInfoa = v119;
    v117 = (const Weapon *)((char *)v117 + 68);
    v120 += 17;
  }
  while ( v118 < 15 );
  MSG_WriteBit0(v12);
  LODWORD(v202) = MSG_GetUsedBitCount(v12);
  v124 = (_DWORD)v202 - v192;
  SV_TrackPSBitsForSegment(v110, (_DWORD)v202 - v192, PLAYERSTATE_SEGMENT_AMMO);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v124, 2);
  v125 = toData;
  objectives = oldPs->objectives;
  v127 = toData + 4720;
  if ( !memcmp_0(oldPs->objectives, toData + 4720, 0x1580ui64) )
  {
    MSG_WriteBit0(v12);
  }
  else
  {
    v128 = g_newNetFieldList[3];
    v110->fieldChangesCount = 47;
    v129 = v128->count;
    array = v128->array;
    skippedNetfieldBits = v128->skippedNetfieldBits;
    v110->fieldChanges = orderInfo.objective;
    MSG_WriteBit1(v12);
    v131 = v127 - (unsigned __int8 *)objectives;
    v132 = 0;
    v211 = (char *)v131;
    do
    {
      if ( !v110->archived )
        SV_LogSnapshotContent(v110->clientNum, "sending objective %i\n", (unsigned int)v132);
      v133 = (const unsigned __int8 *)objectives + v131;
      lc = MSG_GetLastChangedField(v110, (const unsigned __int8 *)objectives, v133, v129, array, v132);
      MSG_WriteDeltaFields(v110, v12, timea, (const unsigned __int8 *)objectives, v133, 0, lc - 1, v129, array, skippedNetfieldBits, NULL);
      v131 = (__int64)v211;
      ++v132;
      ++objectives;
    }
    while ( v132 < 32 );
    v125 = toData;
  }
  v134 = MSG_GetUsedBitCount(v12);
  v135 = v134 - (_DWORD)v202;
  v136 = v134;
  SV_TrackPSBitsForSegment(v110, v134 - (_DWORD)v202, PLAYERSTATE_SEGMENT_OBJECTIVES);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v135, 3);
  v137 = oldPs;
  v138 = v110->archived;
  if ( !memcmp_0(&oldPs->hud, v125 + 12152, 0x2058ui64) )
  {
    if ( !v138 )
      SV_LogSnapshotContent(v110->clientNum, "no hudelems changed\n");
    MSG_WriteBit0(v12);
  }
  else
  {
    if ( !v138 )
      SV_LogSnapshotContent(v110->clientNum, "hudelems changed\n");
    MSG_WriteBit1(v12);
    if ( !v138 )
      SV_LogSnapshotContent(v110->clientNum, "sending archived hudelems\n");
    v139 = timea;
    MSG_WriteDeltaHudElems(v110, v12, timea, v137->hud.archival, (const hudelem_t *)(v125 + 17672), 15, 4);
    if ( !v110->archived )
      SV_LogSnapshotContent(v110->clientNum, "sending current hudelems\n");
    MSG_WriteDeltaHudElems(v110, v12, v139, v137->hud.current, (const hudelem_t *)(v125 + 12152), 30, 5);
  }
  v140 = MSG_GetUsedBitCount(v12) - v136;
  SV_TrackPSBitsForSegment(v110, v140, PLAYERSTATE_SEGMENT_HUDELEMS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v140, 4);
  PlayerStateDefs = BG_Omnvar_GetPlayerStateDefs();
  v142 = BG_Omnvar_PerPlayerstateCount();
  v143 = BG_Omnvar_PerPlayerstateMinBitsForIndex();
  v144 = MSG_GetUsedBitCount(v12);
  v145 = MSG_WriteDeltaOmnvars_Internal(v110, v12, timea, v142, v143, oldPs->rxvOmnvars, (const OmnvarData *)v125 + 2554, PlayerStateDefs);
  v146 = MSG_GetUsedBitCount(v12);
  SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot(v110, v146 - v144, v145);
  v147 = v125 + 10224;
  headIcons = oldPs->headIcons;
  LODWORD(v202) = MSG_GetUsedBitCount(v12);
  v110->fieldChangesCount = 6;
  v110->fieldChanges = orderInfo.headIcon;
  if ( !memcmp_0(headIcons, v125 + 10224, 0x300ui64) )
  {
    MSG_WriteBit0(v12);
  }
  else
  {
    v149 = g_newNetFieldList[4]->count;
    v150 = g_newNetFieldList[4]->array;
    v194 = g_newNetFieldList[4]->skippedNetfieldBits;
    MSG_WriteBit1(v12);
    v151 = v147 - (unsigned __int8 *)headIcons;
    v152 = 0;
    v211 = (char *)v151;
    do
    {
      v153 = (const unsigned __int8 *)headIcons + v151;
      v154 = MSG_GetLastChangedField(v110, (const unsigned __int8 *)headIcons, v153, v149, v150, v152);
      MSG_WriteDeltaFields(v110, v12, timea, (const unsigned __int8 *)headIcons, v153, 0, v154 - 1, v149, v150, v194, NULL);
      v151 = (__int64)v211;
      ++v152;
      ++headIcons;
    }
    while ( v152 < 32 );
    v125 = toData;
  }
  v155 = MSG_GetUsedBitCount(v12);
  v156 = v155 - (_DWORD)v202;
  SV_TrackPSBitsForSegment(v110, v155 - (_DWORD)v202, PLAYERSTATE_SEGMENT_HEADICONS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v156, 5);
  v157 = v125 + 10992;
  headIconsExtendedData = oldPs->headIconsExtendedData;
  LODWORD(v202) = MSG_GetUsedBitCount(v12);
  v110->fieldChangesCount = 5;
  v110->fieldChanges = orderInfo.headIconExtendedData;
  if ( !memcmp_0(headIconsExtendedData, v125 + 10992, 0x200ui64) )
  {
    MSG_WriteBit0(v12);
  }
  else
  {
    v159 = g_newNetFieldList[5]->count;
    v160 = g_newNetFieldList[5]->array;
    v195 = g_newNetFieldList[5]->skippedNetfieldBits;
    MSG_WriteBit1(v12);
    v161 = v157 - (unsigned __int8 *)headIconsExtendedData;
    v162 = 0;
    v211 = (char *)v161;
    do
    {
      v163 = (const unsigned __int8 *)headIconsExtendedData + v161;
      v164 = MSG_GetLastChangedField(v110, (const unsigned __int8 *)headIconsExtendedData, v163, v159, v160, v162);
      MSG_WriteDeltaFields(v110, v12, timea, (const unsigned __int8 *)headIconsExtendedData, v163, 0, v164 - 1, v159, v160, v195, NULL);
      v161 = (__int64)v211;
      ++v162;
      ++headIconsExtendedData;
    }
    while ( v162 < 32 );
    v125 = toData;
  }
  v165 = MSG_GetUsedBitCount(v12);
  v166 = v165 - (_DWORD)v202;
  SV_TrackPSBitsForSegment(v110, v165 - (_DWORD)v202, PLAYERSTATE_SEGMENT_HEADICONS_EXTENDED);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v166, 6);
  v167 = v125 + 11504;
  targetMarkerGroups = oldPs->targetMarkerGroups;
  LODWORD(v202) = MSG_GetUsedBitCount(v12);
  v110->fieldChangesCount = 62;
  v110->fieldChanges = orderInfo.targetMarkers;
  if ( !memcmp_0(targetMarkerGroups, v125 + 11504, 0xB0ui64) )
  {
    MSG_WriteBit0(v12);
  }
  else
  {
    v169 = g_newNetFieldList[6]->count;
    v170 = g_newNetFieldList[6]->array;
    v196 = g_newNetFieldList[6]->skippedNetfieldBits;
    MSG_WriteBit1(v12);
    v171 = v167 - (unsigned __int8 *)targetMarkerGroups;
    v172 = 0;
    v211 = (char *)v171;
    do
    {
      v173 = (const unsigned __int8 *)targetMarkerGroups + v171;
      v174 = MSG_GetLastChangedField(v110, (const unsigned __int8 *)targetMarkerGroups, v173, v169, v170, v172);
      MSG_WriteDeltaFields(v110, v12, timea, (const unsigned __int8 *)targetMarkerGroups, v173, 0, v174 - 1, v169, v170, v196, NULL);
      v171 = (__int64)v211;
      ++v172;
      ++targetMarkerGroups;
    }
    while ( v172 < 2 );
    v125 = toData;
  }
  v175 = MSG_GetUsedBitCount(v12);
  v176 = v175 - (_DWORD)v202;
  SV_TrackPSBitsForSegment(v110, v175 - (_DWORD)v202, PLAYERSTATE_SEGMENT_TARGETMARKERS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v176, 7);
  v177 = v125 + 11680;
  calloutMarkerPings = oldPs->calloutMarkerPings;
  LODWORD(v202) = MSG_GetUsedBitCount(v12);
  v110->fieldChangesCount = 8;
  v110->fieldChanges = orderInfo.calloutMarkers;
  if ( !memcmp_0(calloutMarkerPings, v125 + 11680, 0x1A0ui64) )
  {
    MSG_WriteBit0(v12);
  }
  else
  {
    v179 = g_newNetFieldList[10]->count;
    v180 = g_newNetFieldList[10]->array;
    v197 = g_newNetFieldList[10]->skippedNetfieldBits;
    MSG_WriteBit1(v12);
    v181 = v177 - (unsigned __int8 *)calloutMarkerPings;
    v182 = 0;
    v211 = (char *)v181;
    do
    {
      v183 = (const unsigned __int8 *)calloutMarkerPings + v181;
      v184 = MSG_GetLastChangedField(v110, (const unsigned __int8 *)calloutMarkerPings, v183, v179, v180, v182);
      MSG_WriteDeltaFields(v110, v12, timea, (const unsigned __int8 *)calloutMarkerPings, v183, 0, v184 - 1, v179, v180, v197, NULL);
      v181 = (__int64)v211;
      ++v182;
      ++calloutMarkerPings;
    }
    while ( v182 < 52 );
  }
  v185 = MSG_GetUsedBitCount(v12);
  v186 = v185 - (_DWORD)v202;
  SV_TrackPSBitsForSegment(v110, v185 - (_DWORD)v202, PLAYERSTATE_SEGMENT_CALLOUTMARKERS);
  SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(v110, v186, 8);
  v187 = MSG_GetUsedBitCount(v12);
  SV_TrackPSBitsForSegment(v110, v187 - v205, PLAYERSTATE_SEGMENT_LAST);
  if ( !v110->archived && !v110->fromBaseline )
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
  const char *EntityTypeName; 
  PacketEntityType_e PacketEntityTypeForEType; 
  msg_t *v19; 
  entityType_s eType; 
  NetFieldLoD NewEntityLoD; 
  NetFieldLoD OldEntityLoD; 
  bool v23; 
  __int64 v26; 
  int v35; 
  int v36; 
  int v37; 
  __int16 v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  __int64 v45; 
  int v54; 
  int v55; 
  int v56; 
  __int16 v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  bool v62; 
  unsigned __int8 v63; 
  __int64 changeBit; 
  char v65[2]; 

  v9 = (unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64;
  _RDI = from;
  _RSI = to;
  *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 8) = msg;
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
    *(_WORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 2) = eType;
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
        __asm
        {
          vmovups ymm0, ymmword ptr [rsi]
          vmovups ymm1, ymmword ptr [rsi+70h]
        }
        v45 = *(_QWORD *)&to->partBits.array[6];
        _RCX = v9 + 320;
        __asm
        {
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rsi+20h]
          vmovups ymmword ptr [rcx+20h], ymm0
          vmovups ymm0, ymmword ptr [rsi+40h]
          vmovups ymmword ptr [rcx+40h], ymm0
          vmovups xmm0, xmmword ptr [rsi+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
          vmovups ymmword ptr [rcx+70h], ymm1
          vmovups ymm1, ymmword ptr [rsi+90h]
        }
        _RCX = v9 + 448;
        __asm
        {
          vmovups ymmword ptr [rcx+10h], ymm1
          vmovups ymm1, ymmword ptr [rsi+0B0h]
          vmovups ymmword ptr [rcx+30h], ymm1
          vmovups ymm1, ymmword ptr [rsi+0D0h]
          vmovups ymmword ptr [rcx+50h], ymm1
        }
        *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x230) = v45;
        v54 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x154);
        if ( v54 )
          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x154) = timeDeltaTo + v54;
        v55 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x178);
        if ( v55 )
          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x178) = timeDeltaTo + v55;
        v56 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1C8);
        if ( v56 )
          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1C8) = timeDeltaTo + v56;
        v57 = *(_WORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x148);
        if ( v57 == 4 && (v58 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A0)) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A0) = timeDeltaTo + v58;
        }
        else
        {
          v59 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x198);
          if ( v59 && (!v57 || v57 == 145) )
          {
            *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x198) = timeDeltaTo + v59;
          }
          else if ( v57 == 6 )
          {
            v60 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A8);
            if ( v60 )
              *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1A8) = timeDeltaTo + v60;
            v61 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1AC);
            if ( v61 )
              *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1AC) = timeDeltaTo + v61;
          }
        }
        _RSI = (const entityState_t *)(v9 + 320);
      }
      v62 = (*(_DWORD *)&_RSI->clientLinkInfo & 0x7FF) == 0 && (*(_DWORD *)&_RDI->clientLinkInfo & 0x7FF) != 0;
      v63 = *(_BYTE *)v9;
      snapInfo->entJustUnlinked = v62;
      if ( force || v63 || v62 || !_RDI || memcmp_0(_RDI, _RSI, 0xF8ui64) )
      {
        MSG_WriteEntityDeltaForEType(snapInfo, *(msg_t **)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 8), time, *(entityType_s *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 2), _RDI, _RSI, outHeader, force | v63);
      }
      else if ( outHeader )
      {
        outHeader->m_flags[0] |= 3u;
      }
      goto LABEL_96;
    }
LABEL_42:
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymm1, ymmword ptr [rdi+70h]
    }
    v26 = *(_QWORD *)&from->partBits.array[6];
    _RCX = v9 + 64;
    __asm
    {
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rdi+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
      vmovups ymmword ptr [rcx+70h], ymm1
      vmovups ymm1, ymmword ptr [rdi+90h]
    }
    _RCX = v9 + 192;
    __asm
    {
      vmovups ymmword ptr [rcx+10h], ymm1
      vmovups ymm1, ymmword ptr [rdi+0B0h]
      vmovups ymmword ptr [rcx+30h], ymm1
      vmovups ymm1, ymmword ptr [rdi+0D0h]
      vmovups ymmword ptr [rcx+50h], ymm1
    }
    *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x130) = v26;
    if ( timeDeltaFrom )
    {
      v35 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x54);
      if ( v35 )
        *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x54) = timeDeltaFrom + v35;
      v36 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x78);
      if ( v36 )
        *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x78) = timeDeltaFrom + v36;
      v37 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC8);
      if ( v37 )
        *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC8) = timeDeltaFrom + v37;
      v38 = *(_WORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x48);
      if ( v38 == 4 && (v39 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA0)) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA0) = timeDeltaFrom + v39;
      }
      else
      {
        v40 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x98);
        if ( v40 && (!v38 || v38 == 145) )
        {
          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0x98) = timeDeltaFrom + v40;
        }
        else if ( v38 == 6 )
        {
          v41 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA8);
          if ( v41 )
            *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xA8) = timeDeltaFrom + v41;
          v42 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xAC);
          if ( v42 )
            *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 0xAC) = timeDeltaFrom + v42;
        }
      }
    }
    if ( v23 )
      MSG_ResetEntityToLowLoD((entityState_t *const)(v9 + 64));
    _RDI = (const entityState_t *)(v9 + 64);
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
  v19 = *(msg_t **)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0ui64) + 8);
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

void __fastcall MSG_WriteFloatByRangeAndBits(msg_t *msg, const float *fromF, const float *toF, double maxValue, unsigned int bitCount)
{
  int v16; 
  __int64 v19; 
  int v20; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [r8]
    vmovaps [rsp+58h+var_28], xmm7
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, dword ptr [rdx]
    vmovaps xmm7, xmm3
  }
  MSG_WriteBit1(msg);
  __asm
  {
    vmovaps xmm1, xmm7; maxAbsValueSize
    vmovaps xmm0, xmm6; value
  }
  v16 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, bitCount);
  __asm
  {
    vmovaps xmm1, xmm7; maxAbsValueSize
    vmovaps xmm0, xmm8; value
  }
  v19 = v16;
  v20 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, bitCount);
  MSG_WriteBits(msg, v19 ^ v20, bitCount);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
MSG_WriteFloatCase
==============
*/
void MSG_WriteFloatCase(msg_t *msg, const int *fromF, const int *toF)
{
  const int *v6; 
  const int *v9; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  int v18; 
  int v19; 
  int v21; 

  __asm
  {
    vcvttss2si ebx, dword ptr [rdx]
    vmovaps [rsp+68h+var_28], xmm6
  }
  v6 = toF;
  __asm
  {
    vmovss  xmm6, dword ptr [r8]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  v9 = fromF;
  __asm { vcvttss2si esi, xmm6 }
  MSG_WriteBit1(msg);
  __asm { vmovss  [rsp+68h+arg_8], xmm6 }
  if ( v21 == 0x80000000 )
    goto LABEL_9;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vucomiss xmm0, xmm6
  }
  if ( v21 != 0x80000000 || (v14 = _ESI + 4096, v14 > 0x1FFF) || (v15 = _EBX + 4096, v15 > 0x1FFF) )
  {
LABEL_9:
    MSG_WriteBit1(msg);
    MSG_WriteLong(msg, *v6 ^ *v9);
  }
  else
  {
    MSG_WriteBit0(msg);
    v16 = v14 ^ v15;
    if ( (unsigned int)v16 > 0x1FFF )
    {
      v19 = 0x1FFF;
      v18 = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 1986, ASSERT_TYPE_ASSERT, "( 0 ) <= ( trunc ) && ( trunc ) <= ( (1 << 13) - 1 )", "trunc not in [0, (1 << FLOAT_INT_BITS) - 1]\n\t%i not in [%i, %i]", v18, 0i64, v19) )
        __debugbreak();
    }
    MSG_WriteBits(msg, v16, 5u);
    MSG_WriteByte(msg, (__int64)v16 >> 5);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
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
  int v21; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 401, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vxorps  xmm7, xmm7, xmm7
    vmulss  xmm0, xmm6, [rsp+58h+value]
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vmulss  xmm0, xmm6, [rsp+58h+oldValue]
    vaddss  xmm3, xmm0, cs:__real@3f000000
    vroundss xmm0, xmm7, xmm3, 1
    vroundss xmm2, xmm7, xmm1, 1
  }
  UsedBitCount = MSG_GetUsedBitCount(msg);
  __asm
  {
    vcvttss2si eax, xmm0
    vcvttss2si edx, xmm2
  }
  MSG_WriteSignedExpGolomb(msg, _EDX - _EAX, kBits);
  if ( !snapInfo->fromBaseline && !snapInfo->archived )
  {
    v21 = MSG_GetUsedBitCount(msg);
    SV_TrackOriginExpGolombBits(v21 - UsedBitCount);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
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
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  bool v29; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
  }
  _RBP = mapCenter;
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 608, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+68h+value]
    vsubss  xmm0, xmm6, [rsp+68h+oldValue]
    vmulss  xmm1, xmm0, cs:__real@41200000
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm3, xmm7, xmm2, 1
    vcvttss2si ebx, xmm3
  }
  v18 = _EBX + 128;
  if ( (unsigned int)v18 > 0xFF )
  {
    MSG_WriteBit0(msg);
    if ( bits == -113 )
    {
      v20 = 0;
    }
    else
    {
      if ( bits != -114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 633, ASSERT_TYPE_ASSERT, "(bits == (-114))", (const char *)&queryFormat, "bits == MSG_FIELD_ORIGIN_PHYSICSY") )
        __debugbreak();
      v20 = 1;
    }
    _RAX = v20;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rax*4+0]
      vaddss  xmm2, xmm0, cs:__real@3f000000
      vroundss xmm0, xmm7, xmm2, 1
      vcvttss2si eax, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm2, xmm1, cs:__real@c1200000
      vcvttss2si eax, xmm2
    }
    v18 = 1048570 - _RAX;
    v29 = 1048570 - (int)_RAX <= 2097140;
    if ( (unsigned int)(1048570 - _RAX) > 0x1FFFF4 )
    {
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      Com_PrintError(1, "MSG_WriteOriginPhysics: Not enough range available for physics origin '%f' [%i]\n", _R8);
      v29 = v18 <= 2097140;
    }
    if ( !v29 )
      v18 = 2097140;
    v19 = 21;
    if ( v18 < 0 )
      v18 = 0;
  }
  else
  {
    MSG_WriteBit1(msg);
    v19 = 8;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  MSG_WriteBits(msg, v18, v19);
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
  bool v6; 
  bool result; 

  _RBX = to;
  _RDI = from;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5599, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5600, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\sv_msg_write_mp.cpp", 5601, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  v6 = _RDI->timeModified == _RBX->timeModified;
  if ( _RDI->timeModified != _RBX->timeModified )
  {
    v6 = (def->flags & 0x40) == 0;
    if ( (def->flags & 0x40) != 0 )
      return 1;
  }
  switch ( def->type )
  {
    case OMNVAR_TYPE_BOOL:
      result = _RDI->current.enabled != _RBX->current.enabled;
      break;
    case OMNVAR_TYPE_FLOAT:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]; jumptable 000000014144712D case 1
        vucomiss xmm0, dword ptr [rdi+4]
      }
      if ( !v6 )
        return 1;
      goto LABEL_19;
    case OMNVAR_TYPE_INT:
    case OMNVAR_TYPE_UINT:
    case OMNVAR_TYPE_TIME:
    case OMNVAR_TYPE_NCS_LUI:
      result = _RDI->current.integer != _RBX->current.integer;
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

