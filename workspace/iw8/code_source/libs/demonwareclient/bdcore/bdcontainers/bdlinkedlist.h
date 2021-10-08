/*
==============
bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node::operator delete
==============
*/

void __fastcall bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node::operator delete(void *p)
{
  ??3Node@?$bdLinkedList@VbdDataChannelPacket@bdDataChannelBase@@@@SAXPEAX@Z(p);
}

/*
==============
bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node::operator delete
==============
*/
void bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

