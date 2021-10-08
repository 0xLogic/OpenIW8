/*
==============
bdClansEventHandler::handlePushMessage
==============
*/

void __fastcall bdClansEventHandler::handlePushMessage(bdClansEventHandler *this, bdEventType event, bdReference<bdByteBuffer> message)
{
  ?handlePushMessage@bdClansEventHandler@@MEAAXW4bdEventType@@V?$bdReference@VbdByteBuffer@@@@@Z(this, event, message);
}

/*
==============
bdClansEventHandler::~bdClansEventHandler
==============
*/

void __fastcall bdClansEventHandler::~bdClansEventHandler(bdClansEventHandler *this)
{
  ??1bdClansEventHandler@@UEAA@XZ(this);
}

/*
==============
bdClansEventHandler::getEventTypes
==============
*/

void __fastcall bdClansEventHandler::getEventTypes(bdClansEventHandler *this, const bdEventType **events, unsigned int *count)
{
  ?getEventTypes@bdClansEventHandler@@MEAAXAEAPEBW4bdEventType@@AEAI@Z(this, events, count);
}

/*
==============
bdClansEventHandler::~bdClansEventHandler
==============
*/
void bdClansEventHandler::~bdClansEventHandler(bdClansEventHandler *this)
{
  this->__vftable = (bdClansEventHandler_vtbl *)&bdPushMessageHandler::`vftable';
}

/*
==============
bdClansEventHandler::getEventTypes
==============
*/
void bdClansEventHandler::getEventTypes(bdClansEventHandler *this, const bdEventType **events, unsigned int *count)
{
  *events = bdClansEventHandler::s_events;
  *count = 8;
}

/*
==============
bdClansEventHandler::handlePushMessage
==============
*/
void bdClansEventHandler::handlePushMessage(bdClansEventHandler *this, bdEventType event, bdReference<bdByteBuffer> message)
{
  bdByteBuffer *v5; 
  bdByteBuffer *v6; 
  bdByteBuffer *v7; 
  bdByteBuffer *v8; 
  bdByteBuffer *v9; 
  bdByteBuffer *v10; 
  bdByteBuffer *v11; 
  bdByteBuffer *v12; 
  bdReference<bdByteBuffer> v14; 
  bdReference<bdByteBuffer> buffer; 
  bdReference<bdByteBuffer> v16; 
  bdReference<bdByteBuffer> v17; 
  bdReference<bdByteBuffer> v18; 
  bdReference<bdByteBuffer> v19; 
  bdReference<bdByteBuffer> v20; 
  bdReference<bdByteBuffer> v21; 
  __int64 v22; 
  bdByteBuffer *m_ptr; 
  bdClansGroupIdentifier v24; 
  bdClansRemovedMembershipProposal v25; 
  bdClansMemberInfo v26; 
  bdClansMemberInfo v27; 
  bdClansMemberInfo v28; 
  bdClansMemberInfo v29; 
  bdClansGroupInfo v30; 
  bdClansGroupMembershipProposal v31; 

  v22 = -2i64;
  m_ptr = message.m_ptr;
  switch ( event )
  {
    case BD_MW4_CLANS_MEMBERSHIP_PROPOSAL:
      bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(&v31);
      v5 = (bdByteBuffer *)message.m_ptr->__vftable;
      buffer.m_ptr = v5;
      if ( v5 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&buffer, &v31) )
        this->onClansMembershipProposalCreated(this, &v31);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x32u, "Failed to deserialize bdClansGroupMembershipProposal");
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.m_group.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v31.m_group.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v31.m_targetUser._bytes_90);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v31.m_targetUser.gap79[7]);
      bdReferencable::~bdReferencable((bdReferencable *)v31.m_targetUser._bytes_90);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v31.m_proposingUser[128]);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v31.m_proposingUser[112]);
      bdReferencable::~bdReferencable((bdReferencable *)&v31.m_proposingUser[128]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v31.m_updatedTimestamp + 1));
      break;
    case BD_MW4_CLANS_MEMBER_ADDED:
      bdClansMemberInfo::bdClansMemberInfo(&v26);
      v6 = (bdByteBuffer *)message.m_ptr->__vftable;
      v16.m_ptr = v6;
      if ( v6 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v16, &v26) )
        this->onClansMemberAdded(this, &v26);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x40u, "Failed to deserialize bdClansMemberInfo");
      bdClansMemberInfo::`vbase destructor(&v26);
      break;
    case BD_MW4_CLANS_PROPOSAL_REMOVED:
      bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(&v25);
      v7 = (bdByteBuffer *)message.m_ptr->__vftable;
      v17.m_ptr = v7;
      if ( v7 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v17, &v25) )
        this->onClansProposalRemoved(this, &v25);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x4Eu, "Failed to deserialize bdClansRemovedMembershipProposal");
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v25.m_group.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v25.m_group.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v25.m_targetUser[136]);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v25.m_targetUser[120]);
      bdReferencable::~bdReferencable((bdReferencable *)&v25.m_targetUser[136]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v25.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v25.gapFC[4]);
      break;
    case BD_MW4_CLANS_MEMBER_REMOVED:
      bdClansMemberInfo::bdClansMemberInfo(&v27);
      v8 = (bdByteBuffer *)message.m_ptr->__vftable;
      v18.m_ptr = v8;
      if ( v8 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v18, &v27) )
        this->onClansMemberRemoved(this, &v27);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x5Cu, "Failed to deserialize bdClansMemberInfo");
      bdClansMemberInfo::`vbase destructor(&v27);
      break;
    case BD_MW4_CLANS_GROUP_DISBANDED:
      bdClansGroupIdentifier::bdClansGroupIdentifier(&v24);
      v9 = (bdByteBuffer *)message.m_ptr->__vftable;
      v19.m_ptr = v9;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v19, &v24) )
        this->onClansGroupDisbanded(this, &v24);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x6Au, "Failed to deserialize bdClansGroupIdentifier");
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v24.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v24.m_rootID + 1));
      break;
    case BD_MW4_CLANS_ACTIVE_GROUP_CHANGED:
      bdClansMemberInfo::bdClansMemberInfo(&v28);
      v10 = (bdByteBuffer *)message.m_ptr->__vftable;
      v20.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v20, &v28) )
        this->onClansActiveGroupChange(this, &v28);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x78u, "Failed to deserialize bdClansMemberInfo");
      bdClansMemberInfo::`vbase destructor(&v28);
      break;
    case BD_MW4_CLANS_GROUP_UPDATED:
      bdClansGroupInfo::bdClansGroupInfo(&v30);
      v11 = (bdByteBuffer *)message.m_ptr->__vftable;
      v21.m_ptr = v11;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v21, &v30) )
        this->onClansGroupUpdated(this, &v30);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x86u, "Failed to deserialize bdClansGroupInfo");
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v30.m_owner.m_value._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v30.m_owner.m_value.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v30.m_owner.m_value._bytes_48);
      bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>(&v30.m_uniqueTag);
      bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)(&v30.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v30.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)v30.gap2A8);
      break;
    case BD_MW4_CLANS_MEMBER_UPDATED:
      bdClansMemberInfo::bdClansMemberInfo(&v29);
      v12 = (bdByteBuffer *)message.m_ptr->__vftable;
      v14.m_ptr = v12;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      if ( bdStructBufferDeserializerHelpers::deserializeFromBuffer((bdReference<bdByteBuffer>)&v14, &v29) )
        this->onClansMemberUpdated(this, &v29);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x94u, "Failed to deserialize bdClansMemberInfo");
      bdClansMemberInfo::`vbase destructor(&v29);
      break;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdClans", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanseventhandler.cpp", "bdClansEventHandler::handlePushMessage", 0x99u, "Recived unhandled Clans event: %s", event);
      break;
  }
  if ( message.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&message.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( message.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))message.m_ptr->~bdReferencable)(message.m_ptr->__vftable, 1i64);
    message.m_ptr->__vftable = NULL;
  }
}

