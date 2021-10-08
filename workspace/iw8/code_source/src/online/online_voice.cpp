/*
==============
Voice_HandlePacket
==============
*/

void __fastcall Voice_HandlePacket(PartyData *party, const LocalClientNum_t localClientNum, msg_t *msg)
{
  ?Voice_HandlePacket@@YAXPEAUPartyData@@W4LocalClientNum_t@@PEAUmsg_t@@@Z(party, localClientNum, msg);
}

/*
==============
Voice_HandlePacket
==============
*/
void Voice_HandlePacket(PartyData *party, const LocalClientNum_t localClientNum, msg_t *msg)
{
  LocalClientNum_t v4; 
  __int64 Byte; 
  int v7; 
  unsigned int v9; 
  int i; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  __m256i *v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  __m256i *v18; 
  unsigned int v19; 
  __m256i *p_buffer; 
  int v21; 
  __m256i *j; 
  const char *MemberName; 
  const char *v24; 
  NetConnection *MemberConnection; 
  __int64 voiceData; 
  __int64 canRelay; 
  __int64 v28; 
  __int64 v29; 
  char v30; 
  msg_t buf; 
  __int64 v33[4]; 
  __m256i v34; 
  __m256i buffer; 
  unsigned __int8 v36; 
  char v37[142]; 
  unsigned __int8 data[2480]; 

  v4 = localClientNum;
  if ( party->inParty )
  {
    Byte = MSG_ReadByte(msg);
    v7 = Sys_Milliseconds();
    Party_SetLastVoicePacketTime(party, Byte, v7);
    if ( (unsigned int)Byte > 0xC7 )
    {
      Com_Printf(25, "Invalid voice packet - talker was %i\n", (unsigned int)Byte);
    }
    else if ( Party_IsMemberRegistered(party, Byte) )
    {
      if ( Party_MemberHasLoopbackAddr(party, Byte) )
      {
        Com_Printf(25, "Received voice packet from a local client (but not ourself)  (talker num is %i)\n", (unsigned int)Byte);
      }
      else
      {
        MSG_ReadData(msg, 32, &buffer, 32);
        __asm { vmovups ymm0, ymmword ptr [rbp+0A70h+buffer] }
        v9 = 0;
        v30 = 0;
        __asm { vmovups [rbp+0A70h+var_AC0], ymm0 }
        for ( i = 0; i < 200; ++i )
        {
          if ( Party_IsMemberPresent(party, i) && Party_MemberHasLoopbackAddr(party, i) )
          {
            if ( (_DWORD)Byte == i )
            {
              Com_Printf(25, "Received voice packet from ourself?\n");
              return;
            }
            if ( (unsigned int)i >= 0x100 )
            {
              LODWORD(v29) = 256;
              LODWORD(v28) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
                __debugbreak();
            }
            v30 = 1;
            v34.m256i_i32[(unsigned __int64)(unsigned int)i >> 5] &= ~(0x80000000 >> (i & 0x1F));
          }
        }
        v11 = MSG_ReadByte(msg);
        v12 = v11;
        if ( v11 - 1 > 0x27 )
        {
          Com_Printf(25, "Received invalid number of packets in a voice packet: %i\n", v11);
        }
        else
        {
          MSG_Init(&buf, data, 2474);
          v13 = 0;
          v14 = &v34;
          while ( !v14->m256i_i32[0] )
          {
            ++v13;
            v14 = (__m256i *)((char *)v14 + 4);
            if ( v13 >= 8 )
              goto LABEL_24;
          }
          MSG_WriteString(&buf, "v");
          MSG_WriteByte(&buf, Byte);
          memset(v33, 0, sizeof(v33));
          MSG_WriteData(&buf, v33, 32);
          MSG_WriteByte(&buf, (unsigned __int8)v12);
LABEL_24:
          v15 = 0;
          if ( v12 <= 0 )
          {
LABEL_43:
            v21 = 0;
            for ( j = &v34; !j->m256i_i32[0]; j = (__m256i *)((char *)j + 4) )
            {
              if ( (unsigned int)++v21 >= 8 )
                return;
            }
            do
            {
              if ( v9 >= 0x100 )
              {
                LODWORD(canRelay) = 256;
                LODWORD(voiceData) = v9;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", voiceData, canRelay) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (v9 & 0x1F)) & v34.m256i_i32[(unsigned __int64)v9 >> 5]) != 0 )
              {
                if ( Party_IsMemberRegistered(party, v9) )
                {
                  if ( Party_MemberHasLoopbackAddr(party, v9) )
                  {
                    Com_PrintWarning(25, "Invalid relay voice packet - we were asked to relay voice to local client %i in session %s\n", v9, party->partyName);
                  }
                  else
                  {
                    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
                    {
                      MemberName = Party_GetMemberName(party, Byte);
                      v24 = Party_GetMemberName(party, v9);
                      LODWORD(voiceData) = Byte;
                      Com_Printf(25, "relaying voice: %i to client %i (%s) from client %i (%s)\n", (unsigned int)buf.cursize, v9, v24, voiceData, MemberName);
                    }
                    if ( PeerMesh_IsEnabled(party) )
                    {
                      PeerMesh_Send(party, v4, v9, buf.data, buf.cursize, 1, 0);
                    }
                    else
                    {
                      MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v9);
                      if ( NetConnection::IsOpened(MemberConnection) )
                        NetConnection::SendUnreliable(MemberConnection, buf.data, buf.cursize, 0x10u);
                      else
                        Com_PrintWarning(25, "[NET] Received voice packet relay request for client %d when connection closed\n", v9);
                    }
                  }
                }
                else
                {
                  Com_PrintWarning(25, "Invalid relay voice packet - we were asked to relay voice to unregistered client %i in session %s\n", v9, party->partyName);
                }
              }
              ++v9;
            }
            while ( (int)v9 < 200 );
          }
          else
          {
            while ( 1 )
            {
              MSG_ReadData(msg, 1, &v36, 1);
              if ( msg->overflowed || (unsigned __int8)(v36 - 3) > 0x7Du )
                break;
              v16 = v36;
              MSG_ReadData(msg, v36 - 1, v37, 127);
              v17 = 0;
              v18 = &v34;
              while ( !v18->m256i_i32[0] )
              {
                ++v17;
                v18 = (__m256i *)((char *)v18 + 4);
                if ( v17 >= 8 )
                  goto LABEL_32;
              }
              MSG_WriteData(&buf, &v36, v16);
LABEL_32:
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_voice_mute, "cl_voice_mute") && !CL_IsPlayerMuted(party, Byte) )
              {
                v19 = 0;
                p_buffer = &buffer;
                while ( !p_buffer->m256i_i32[0] )
                {
                  ++v19;
                  p_buffer = (__m256i *)((char *)p_buffer + 4);
                  if ( v19 >= 8 )
                    goto LABEL_39;
                }
                if ( !v30 )
                  goto LABEL_41;
LABEL_39:
                if ( !Party_IsMemberHeadless(party, Byte) )
                  Voice_IncomingVoiceData(party, Byte, &v36, v16, localClientNum);
              }
LABEL_41:
              if ( ++v15 >= v12 )
              {
                v4 = localClientNum;
                goto LABEL_43;
              }
            }
            Com_PrintWarning(25, "Corrupt voice packet, packet size was %d\n", v36);
          }
        }
      }
    }
    else
    {
      Com_Printf(25, "Can't process voice packets, talker %i is not registered in the session.\n", (unsigned int)Byte);
    }
  }
  else
  {
    Com_Printf(25, "Received voice packet when not in voice session party\n");
  }
}

