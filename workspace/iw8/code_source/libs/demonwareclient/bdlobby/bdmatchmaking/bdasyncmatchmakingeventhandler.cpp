/*
==============
bdAsyncMatchMakingEventHandler::handlePushMessage
==============
*/

void __fastcall bdAsyncMatchMakingEventHandler::handlePushMessage(bdAsyncMatchMakingEventHandler *this, bdEventType event, bdReference<bdByteBuffer> message)
{
  ?handlePushMessage@bdAsyncMatchMakingEventHandler@@MEAAXW4bdEventType@@V?$bdReference@VbdByteBuffer@@@@@Z(this, event, message);
}

/*
==============
bdAsyncMatchMakingEventHandler::msgLobbyDisbanded
==============
*/

void __fastcall bdAsyncMatchMakingEventHandler::msgLobbyDisbanded(bdAsyncMatchMakingEventHandler *this, unsigned __int64 lobbyID, bdAsyncMatchMakingEventHandler::LobbyDisbandedReason __formal)
{
  ?msgLobbyDisbanded@bdAsyncMatchMakingEventHandler@@MEAAX_KW4LobbyDisbandedReason@1@@Z(this, lobbyID, __formal);
}

/*
==============
bdAsyncMatchMakingEventHandler::getEventTypes
==============
*/

void __fastcall bdAsyncMatchMakingEventHandler::getEventTypes(bdAsyncMatchMakingEventHandler *this, const bdEventType **events, unsigned int *count)
{
  ?getEventTypes@bdAsyncMatchMakingEventHandler@@MEAAXAEAPEBW4bdEventType@@AEAI@Z(this, events, count);
}

/*
==============
bdAsyncMatchMakingEventHandler::msgLobbyNotFound
==============
*/

void __fastcall bdAsyncMatchMakingEventHandler::msgLobbyNotFound(bdAsyncMatchMakingEventHandler *this, unsigned __int64 mmID, bdAsyncMatchMakingEventHandler::LobbyNotFoundCause cause, const char *__formal)
{
  ?msgLobbyNotFound@bdAsyncMatchMakingEventHandler@@MEAAX_KW4LobbyNotFoundCause@1@PEBD@Z(this, mmID, cause, __formal);
}

/*
==============
bdAsyncMatchMakingEventHandler::getEventTypes
==============
*/
void bdAsyncMatchMakingEventHandler::getEventTypes(bdAsyncMatchMakingEventHandler *this, const bdEventType **events, unsigned int *count)
{
  *events = bdAsyncMatchMakingEventHandler::s_events;
  *count = 13;
}

/*
==============
bdAsyncMatchMakingEventHandler::handlePushMessage
==============
*/
void bdAsyncMatchMakingEventHandler::handlePushMessage(bdAsyncMatchMakingEventHandler *this, bdEventType event, bdReference<bdByteBuffer> message)
{
  bdByteBuffer **m_ptr; 
  bdEventType v4; 
  void *v6; 
  bdNetImpl *v7; 
  bdNetImpl *v8; 
  bdSingletonRegistryImpl *Instance; 
  bool v10; 
  unsigned __int64 v11; 
  _QWORD *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  bool v16; 
  bdCommonAddr *v17; 
  void *v18; 
  __int64 v19; 
  _QWORD *v20; 
  __int64 v21; 
  bdCommonAddr *v22; 
  bdReference<bdCommonAddr> *LocalCommonAddr; 
  bool v24; 
  unsigned int v25; 
  bool v26; 
  unsigned int v27; 
  bool v28; 
  char *v29; 
  __int64 v30; 
  char *v31; 
  char *v32; 
  bool v33; 
  char *v34; 
  char *v35; 
  char *v36; 
  bool v37; 
  char *v38; 
  bool v39; 
  char *v40; 
  char *v41; 
  char *v42; 
  bool v43; 
  char *v44; 
  char *v45; 
  bool v46; 
  char *v47; 
  bool v48; 
  char *v49; 
  char *v50; 
  bool v51; 
  bool v52; 
  char *v53; 
  char *v54; 
  bool StringLength; 
  char *v56; 
  char *v57; 
  __int64 v58; 
  unsigned __int16 v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  void *p; 
  __int64 v74; 
  unsigned int v75; 
  unsigned int v76; 
  size_t Size; 
  unsigned __int64 v78; 
  unsigned int v79; 
  unsigned int length; 
  unsigned __int64 v81; 
  unsigned __int64 v82; 
  unsigned __int64 v83; 
  unsigned __int64 v84; 
  unsigned __int64 v85; 
  unsigned __int64 v86; 
  unsigned __int64 v87; 
  unsigned __int64 v88; 
  unsigned __int64 v89; 
  unsigned __int64 v90; 
  unsigned __int64 v91; 
  unsigned __int64 v92; 
  unsigned __int64 v93; 
  unsigned __int64 v94; 
  unsigned __int64 v95; 
  unsigned __int64 v96; 
  unsigned __int64 v97; 
  unsigned __int64 v98; 
  unsigned __int64 v99; 
  unsigned __int64 v100; 
  bdNetImpl *v101; 
  unsigned __int64 u; 
  bdByteBuffer *v103; 
  _QWORD *v104; 
  bdCommonAddr *v105; 
  bdReference<bdCommonAddr> result; 
  __int64 v107; 
  bdByteBuffer *v108; 
  __int64 v109; 
  bdSecurityID other; 
  bdSecurityKey v111; 
  unsigned __int8 Src[8]; 
  unsigned __int8 v113[16]; 
  unsigned __int8 blob[96]; 

  v107 = -2i64;
  m_ptr = (bdByteBuffer **)message.m_ptr;
  v103 = message.m_ptr;
  v4 = event;
  v108 = message.m_ptr;
  v6 = NULL;
  switch ( event )
  {
    case BD_QOS_HOSTS:
      u = 0i64;
      v78 = 0i64;
      if ( bdSingleton<bdNetImpl>::m_instance )
        goto LABEL_12;
      v7 = (bdNetImpl *)bdMemory::allocate(0x6020ui64);
      v101 = v7;
      if ( v7 )
        bdNetImpl::bdNetImpl(v7);
      else
        v8 = NULL;
      bdSingleton<bdNetImpl>::m_instance = v8;
      if ( !v8 )
        goto LABEL_11;
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdNetImpl>::destroyInstance) )
      {
        if ( bdSingleton<bdNetImpl>::m_instance )
          ((void (__fastcall *)(bdNetImpl *, __int64))bdSingleton<bdNetImpl>::m_instance->~bdNetImpl)(bdSingleton<bdNetImpl>::m_instance, 1i64);
        bdSingleton<bdNetImpl>::m_instance = NULL;
LABEL_11:
        DebugBreak();
      }
LABEL_12:
      v101 = bdSingleton<bdNetImpl>::m_instance;
      v109 = 0i64;
      bdSecurityID::bdSecurityID(&other);
      bdSecurityKey::bdSecurityKey(&v111);
      v60 = 5;
      v10 = bdByteBuffer::readUInt64(*m_ptr, &u) && bdByteBuffer::readUInt64(*m_ptr, &v78);
      p = NULL;
      v11 = v78;
      LODWORD(v74) = v78;
      HIDWORD(v74) = v78;
      if ( (_DWORD)v78 )
      {
        v12 = bdMemory::allocate(32i64 * (unsigned int)v78);
        p = v12;
        v13 = v74;
        v104 = v12;
        v14 = 0;
        v79 = 0;
        if ( (_DWORD)v74 )
        {
          do
          {
            v105 = (bdCommonAddr *)v12;
            if ( v12 )
            {
              *v12 = v109;
              if ( v109 )
                _InterlockedExchangeAdd((volatile signed __int32 *)(v109 + 8), 1u);
              bdSecurityID::bdSecurityID((bdSecurityID *)v12 + 1, &other);
              bdSecurityKey::bdSecurityKey((bdSecurityKey *)v12 + 1, &v111);
            }
            v79 = ++v14;
            v12 += 4;
          }
          while ( v14 < v13 );
          v6 = NULL;
        }
        v11 = v78;
      }
      v15 = 0;
      if ( !v10 )
        goto LABEL_48;
      break;
    case BD_JOIN_LOBBY:
      v84 = 0i64;
      v83 = 0i64;
      v63 = 0;
      v62 = 0;
      if ( bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v84) && bdByteBuffer::readUInt64(*m_ptr, &v83) && bdByteBuffer::getStringLength(*m_ptr, &v63) )
        LOBYTE(v6) = 1;
      v31 = (char *)bdMemory::allocate(v63 + 1);
      v32 = v31;
      v33 = (_BYTE)v6 && bdByteBuffer::readString(*m_ptr, v31, v63 + 1) && bdByteBuffer::getStringLength(*m_ptr, &v62);
      v34 = (char *)bdMemory::allocate(v62 + 1);
      v35 = v34;
      v28 = v33 && bdByteBuffer::readString(*m_ptr, v34, v62 + 1);
      this->msgJoinLobby(this, v84, v83, v32, v63, v35, v62);
      goto LABEL_85;
    case BD_LOBBY_DISBANDED:
      v86 = 0i64;
      v85 = 0i64;
      v28 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v86) && bdByteBuffer::readUInt64(*m_ptr, &v85);
      this->msgLobbyDisbanded(this, v86, (bdAsyncMatchMakingEventHandler::LobbyDisbandedReason)v85);
      goto LABEL_63;
    case BD_MATCHMAKING_SEARCH_STATUS:
      v90 = 0i64;
      v66 = 0;
      v39 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v90) && bdByteBuffer::getStringLength(*m_ptr, &v66);
      v40 = (char *)bdMemory::allocate(v66 + 1);
      v41 = v40;
      v28 = v39 && bdByteBuffer::readString(*m_ptr, v40, v66 + 1);
      this->msgMatchMakingSearchStatus(this, v90, v41, v66);
      bdMemory::deallocate(v41);
      v6 = NULL;
      goto LABEL_63;
    case BD_LOBBY_NOT_FOUND:
      v82 = 0i64;
      v81 = 0i64;
      v75 = 0;
      v28 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v82) && bdByteBuffer::readUInt64(*m_ptr, &v81);
      if ( (*m_ptr)->m_size + LODWORD((*m_ptr)->m_data) - LODWORD((*m_ptr)->m_readPtr) && (bdByteBuffer::getStringLength(*m_ptr, &v75), v6 = bdMemory::allocate(v75 + 1), bdByteBuffer::readString(*m_ptr, (char *const)v6, v75 + 1), v6) )
      {
        this->msgLobbyNotFound(this, v82, (bdAsyncMatchMakingEventHandler::LobbyNotFoundCause)v81, (const char *)v6);
LABEL_122:
        bdMemory::deallocate(v6);
        v6 = NULL;
      }
      else
      {
        this->msgLobbyNotFound(this, v82, (bdAsyncMatchMakingEventHandler::LobbyNotFoundCause)v81, (char *)&queryFormat.fmt + 3);
      }
LABEL_63:
      if ( !v28 )
      {
        LODWORD(v58) = v4;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdAsyncMatchMaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdasyncmatchmakingeventhandler.cpp", "bdAsyncMatchMakingEventHandler::handlePushMessage", 0x142u, "Failed to deserialize bdAsyncMatchMaking event %d", v58);
      }
LABEL_65:
      if ( *m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&(*m_ptr)->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( *m_ptr )
          ((void (__fastcall *)(bdByteBuffer *, __int64))(*m_ptr)->~bdReferencable)(*m_ptr, 1i64);
        *m_ptr = (bdByteBuffer *)v6;
      }
      return;
    case BD_CREATE_NEW_LOBBY:
      v93 = 0i64;
      v92 = 0i64;
      v91 = 0i64;
      v68 = 0;
      v67 = 0;
      if ( bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v93) && bdByteBuffer::readUInt64(*m_ptr, &v92) && bdByteBuffer::readUInt64(*m_ptr, &v91) && bdByteBuffer::getStringLength(*m_ptr, &v68) )
        LOBYTE(v6) = 1;
      v42 = (char *)bdMemory::allocate(v68 + 1);
      v32 = v42;
      v43 = (_BYTE)v6 && bdByteBuffer::readString(*m_ptr, v42, v68 + 1) && bdByteBuffer::getStringLength(*m_ptr, &v67);
      v44 = (char *)bdMemory::allocate(v67 + 1);
      v35 = v44;
      v28 = v43 && bdByteBuffer::readString(*m_ptr, v44, v67 + 1);
      this->msgCreateNewLobby(this, v93, v92, v91, v32, v68, v35, v67);
      goto LABEL_85;
    case BD_UPDATED_LOBBY_DOCUMENT:
      v95 = 0i64;
      v94 = 0i64;
      v70 = 0;
      v69 = 0;
      if ( bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v95) && bdByteBuffer::readUInt64(*m_ptr, &v94) && bdByteBuffer::getStringLength(*m_ptr, &v70) )
        LOBYTE(v6) = 1;
      v45 = (char *)bdMemory::allocate(v70 + 1);
      v32 = v45;
      v46 = (_BYTE)v6 && bdByteBuffer::readString(*m_ptr, v45, v70 + 1) && bdByteBuffer::getStringLength(*m_ptr, &v69);
      v47 = (char *)bdMemory::allocate(v69 + 1);
      v35 = v47;
      v28 = v46 && bdByteBuffer::readString(*m_ptr, v47, v69 + 1);
      this->msgUpdateLobbyDocument(this, v95, v94, v32, v70, v35, v69);
      goto LABEL_85;
    case BD_EXPECT_GAME:
      v96 = 0i64;
      v71 = 0;
      v48 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v96) && bdByteBuffer::getStringLength(*m_ptr, &v71);
      v49 = (char *)bdMemory::allocate(v71 + 1);
      v50 = v49;
      v28 = v48 && bdByteBuffer::readString(*m_ptr, v49, v71 + 1);
      this->msgExpectGame(this, v96, v50, v71);
      bdMemory::deallocate(v50);
      v6 = NULL;
      goto LABEL_63;
    case BD_MERGE_INTO_LOBBY:
      v89 = 0i64;
      v88 = 0i64;
      v87 = 0i64;
      v65 = 0;
      v64 = 0;
      if ( bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v89) && bdByteBuffer::readUInt64(*m_ptr, &v88) && bdByteBuffer::readUInt64(*m_ptr, &v87) && bdByteBuffer::getStringLength(*m_ptr, &v65) )
        LOBYTE(v6) = 1;
      v36 = (char *)bdMemory::allocate(v65 + 1);
      v32 = v36;
      v37 = (_BYTE)v6 && bdByteBuffer::readString(*m_ptr, v36, v65 + 1) && bdByteBuffer::getStringLength(*m_ptr, &v64);
      v38 = (char *)bdMemory::allocate(v64 + 1);
      v35 = v38;
      v28 = v37 && bdByteBuffer::readString(*m_ptr, v38, v64 + 1);
      this->msgMergeIntoLobby(this, v89, v88, v87, v32, v65, v35, v64);
LABEL_85:
      bdMemory::deallocate(v32);
      bdMemory::deallocate(v35);
      v6 = NULL;
      goto LABEL_62;
    case BD_JOIN_TOURNAMENT:
      v97 = 0i64;
      v51 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v97);
      v61 = 0;
      v52 = v51 && bdByteBuffer::getStringLength(*m_ptr, &v61);
      v53 = (char *)bdMemory::allocate(v61 + 1);
      v54 = v53;
      v28 = v52 && bdByteBuffer::readString(*m_ptr, v53, v61 + 1);
      this->msgJoinTournament(this, v97, v54, v61);
      bdMemory::deallocate(v54);
      v6 = NULL;
      goto LABEL_63;
    case BD_UPDATE_TOURNAMENT:
      v72 = 0;
      StringLength = bdByteBuffer::getStringLength((bdByteBuffer *)message.m_ptr->__vftable, &v72);
      v56 = (char *)bdMemory::allocate(v72 + 1);
      v57 = v56;
      v28 = StringLength && bdByteBuffer::readString(*m_ptr, v56, v72 + 1);
      this->msgUpdateTournament(this, v57, v72);
      bdMemory::deallocate(v57);
      v6 = NULL;
LABEL_62:
      v4 = event;
      goto LABEL_63;
    case BD_TOURNAMENT_FORMATION_LOBBY_DISBANDED:
      v98 = 0i64;
      v28 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v98);
      this->msgTournamentFormationLobbyDisbanded(this, v98);
      goto LABEL_63;
    case BD_TOURNAMENT_DISBANDED:
      v100 = 0i64;
      v99 = 0i64;
      v76 = 0;
      v28 = bdByteBuffer::readUInt64((bdByteBuffer *)message.m_ptr->__vftable, &v100) && bdByteBuffer::readUInt64(*m_ptr, &v99) && bdByteBuffer::getStringLength(*m_ptr, &v76);
      v6 = bdMemory::allocate(v76 + 1);
      bdByteBuffer::readString(*m_ptr, (char *const)v6, v76 + 1);
      this->msgTournamentDisbanded(this, v100, (bdAsyncMatchMakingEventHandler::TournamentDisbandedReason)v99, (const char *)v6);
      goto LABEL_122;
    default:
      goto LABEL_65;
  }
  while ( v15 < v11 )
  {
    length = 84;
    Size = 0x1000000008i64;
    v16 = bdByteBuffer::readBlob(*m_ptr, blob, &length);
    v17 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
    v105 = v17;
    if ( v17 )
    {
      bdCommonAddr::bdCommonAddr(v17);
      v6 = v18;
    }
    bdHandleAssert(v15 < HIDWORD(v74), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    v19 = 32i64 * v15;
    v20 = (char *)p + v19;
    v21 = *(_QWORD *)((char *)p + v19);
    if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 && *v20 )
      (**(void (__fastcall ***)(_QWORD, __int64))*v20)(*v20, 1i64);
    *v20 = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 1u);
    v24 = 0;
    if ( v16 )
    {
      bdHandleAssert(v15 < HIDWORD(v74), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      v22 = (bdCommonAddr *)*((_QWORD *)p + 4 * v15);
      LocalCommonAddr = bdNetImpl::getLocalCommonAddr(v101, &result);
      if ( bdCommonAddr::deserialize(v22, (bdReference<bdCommonAddr>)LocalCommonAddr, blob) && bdByteBuffer::readBlob(*m_ptr, Src, (unsigned int *)&Size) )
        v24 = 1;
    }
    v25 = Size;
    bdHandleAssert(v15 < HIDWORD(v74), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    memcpy_0((char *)p + v19 + 8, Src, v25);
    v26 = v24 && bdByteBuffer::readBlob(*m_ptr, v113, (unsigned int *)&Size + 1);
    v27 = HIDWORD(Size);
    bdHandleAssert(v15 < HIDWORD(v74), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    memcpy_0((char *)p + v19 + 16, v113, v27);
    ++v15;
    v6 = NULL;
    if ( !v26 )
      goto LABEL_48;
    v11 = v78;
  }
  if ( bdByteBuffer::readUInt16(*m_ptr, &v60) )
    v28 = 1;
  else
LABEL_48:
    v28 = 0;
  this->msgQoSHosts(this, u, (bdArray<bdQoSRemoteAddr> *)&p, v60);
  if ( HIDWORD(v74) )
  {
    v29 = (char *)p;
    v30 = HIDWORD(v74);
    do
    {
      bdSecurityKey::~bdSecurityKey((bdSecurityKey *)v29 + 1);
      bdSecurityID::~bdSecurityID((bdSecurityID *)v29 + 1);
      if ( *(_QWORD *)v29 && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v29 + 8i64), 0xFFFFFFFF) == 1 )
      {
        if ( *(_QWORD *)v29 )
          (***(void (__fastcall ****)(_QWORD, __int64))v29)(*(_QWORD *)v29, 1i64);
        *(_QWORD *)v29 = 0i64;
      }
      v29 += 32;
      --v30;
    }
    while ( v30 );
    m_ptr = (bdByteBuffer **)v103;
    v6 = NULL;
  }
  bdMemory::deallocate(p);
  p = NULL;
  v74 = 0i64;
  bdSecurityKey::~bdSecurityKey(&v111);
  bdSecurityID::~bdSecurityID(&other);
  if ( v109 && _InterlockedExchangeAdd((volatile signed __int32 *)(v109 + 8), 0xFFFFFFFF) == 1 && v109 )
    (**(void (__fastcall ***)(__int64, __int64))v109)(v109, 1i64);
  goto LABEL_62;
}

/*
==============
bdAsyncMatchMakingEventHandler::msgLobbyDisbanded
==============
*/
void bdAsyncMatchMakingEventHandler::msgLobbyDisbanded(bdAsyncMatchMakingEventHandler *this, unsigned __int64 lobbyID, __int64 __formal)
{
  ((void (__fastcall *)(bdAsyncMatchMakingEventHandler *, unsigned __int64, __int64))this->msgLobbyDisbanded)(this, lobbyID, __formal);
}

/*
==============
bdAsyncMatchMakingEventHandler::msgLobbyNotFound
==============
*/
void bdAsyncMatchMakingEventHandler::msgLobbyNotFound(bdAsyncMatchMakingEventHandler *this, unsigned __int64 mmID, __int64 cause, const char *__formal)
{
  ((void (__fastcall *)(bdAsyncMatchMakingEventHandler *, unsigned __int64, __int64, const char *))this->msgLobbyNotFound)(this, mmID, cause, __formal);
}

