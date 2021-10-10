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
  unsigned int v8; 
  int i; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  __m256i *v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  __m256i *v17; 
  unsigned int v18; 
  __m256i *p_buffer; 
  int v20; 
  __m256i *j; 
  const char *MemberName; 
  const char *v23; 
  NetConnection *MemberConnection; 
  __int64 voiceData; 
  __int64 canRelay; 
  __int64 v27; 
  __int64 v28; 
  char v29; 
  msg_t buf; 
  __int64 v32[4]; 
  __m256i v33; 
  __m256i buffer; 
  unsigned __int8 v35; 
  char v36[142]; 
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
        v8 = 0;
        v29 = 0;
        v33 = buffer;
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
              LODWORD(v28) = 256;
              LODWORD(v27) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v28) )
                __debugbreak();
            }
            v29 = 1;
            v33.m256i_i32[(unsigned __int64)(unsigned int)i >> 5] &= ~(0x80000000 >> (i & 0x1F));
          }
        }
        v10 = MSG_ReadByte(msg);
        v11 = v10;
        if ( v10 - 1 > 0x27 )
        {
          Com_Printf(25, "Received invalid number of packets in a voice packet: %i\n", v10);
        }
        else
        {
          MSG_Init(&buf, data, 2474);
          v12 = 0;
          v13 = &v33;
          while ( !v13->m256i_i32[0] )
          {
            ++v12;
            v13 = (__m256i *)((char *)v13 + 4);
            if ( v12 >= 8 )
              goto LABEL_24;
          }
          MSG_WriteString(&buf, "v");
          MSG_WriteByte(&buf, Byte);
          memset(v32, 0, sizeof(v32));
          MSG_WriteData(&buf, v32, 32);
          MSG_WriteByte(&buf, (unsigned __int8)v11);
LABEL_24:
          v14 = 0;
          if ( v11 <= 0 )
          {
LABEL_43:
            v20 = 0;
            for ( j = &v33; !j->m256i_i32[0]; j = (__m256i *)((char *)j + 4) )
            {
              if ( (unsigned int)++v20 >= 8 )
                return;
            }
            do
            {
              if ( v8 >= 0x100 )
              {
                LODWORD(canRelay) = 256;
                LODWORD(voiceData) = v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", voiceData, canRelay) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (v8 & 0x1F)) & v33.m256i_i32[(unsigned __int64)v8 >> 5]) != 0 )
              {
                if ( Party_IsMemberRegistered(party, v8) )
                {
                  if ( Party_MemberHasLoopbackAddr(party, v8) )
                  {
                    Com_PrintWarning(25, "Invalid relay voice packet - we were asked to relay voice to local client %i in session %s\n", v8, party->partyName);
                  }
                  else
                  {
                    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
                    {
                      MemberName = Party_GetMemberName(party, Byte);
                      v23 = Party_GetMemberName(party, v8);
                      LODWORD(voiceData) = Byte;
                      Com_Printf(25, "relaying voice: %i to client %i (%s) from client %i (%s)\n", (unsigned int)buf.cursize, v8, v23, voiceData, MemberName);
                    }
                    if ( PeerMesh_IsEnabled(party) )
                    {
                      PeerMesh_Send(party, v4, v8, buf.data, buf.cursize, 1, 0);
                    }
                    else
                    {
                      MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v8);
                      if ( NetConnection::IsOpened(MemberConnection) )
                        NetConnection::SendUnreliable(MemberConnection, buf.data, buf.cursize, 0x10u);
                      else
                        Com_PrintWarning(25, "[NET] Received voice packet relay request for client %d when connection closed\n", v8);
                    }
                  }
                }
                else
                {
                  Com_PrintWarning(25, "Invalid relay voice packet - we were asked to relay voice to unregistered client %i in session %s\n", v8, party->partyName);
                }
              }
              ++v8;
            }
            while ( (int)v8 < 200 );
          }
          else
          {
            while ( 1 )
            {
              MSG_ReadData(msg, 1, &v35, 1);
              if ( msg->overflowed || (unsigned __int8)(v35 - 3) > 0x7Du )
                break;
              v15 = v35;
              MSG_ReadData(msg, v35 - 1, v36, 127);
              v16 = 0;
              v17 = &v33;
              while ( !v17->m256i_i32[0] )
              {
                ++v16;
                v17 = (__m256i *)((char *)v17 + 4);
                if ( v16 >= 8 )
                  goto LABEL_32;
              }
              MSG_WriteData(&buf, &v35, v15);
LABEL_32:
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_voice_mute, "cl_voice_mute") && !CL_IsPlayerMuted(party, Byte) )
              {
                v18 = 0;
                p_buffer = &buffer;
                while ( !p_buffer->m256i_i32[0] )
                {
                  ++v18;
                  p_buffer = (__m256i *)((char *)p_buffer + 4);
                  if ( v18 >= 8 )
                    goto LABEL_39;
                }
                if ( !v29 )
                  goto LABEL_41;
LABEL_39:
                if ( !Party_IsMemberHeadless(party, Byte) )
                  Voice_IncomingVoiceData(party, Byte, &v35, v15, localClientNum);
              }
LABEL_41:
              if ( ++v14 >= v11 )
              {
                v4 = localClientNum;
                goto LABEL_43;
              }
            }
            Com_PrintWarning(25, "Corrupt voice packet, packet size was %d\n", v35);
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

