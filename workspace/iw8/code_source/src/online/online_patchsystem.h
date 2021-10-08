/*
==============
Online_PatchStreamer::~Online_PatchStreamer
==============
*/

void __fastcall Online_PatchStreamer::~Online_PatchStreamer(Online_PatchStreamer *this)
{
  ??1Online_PatchStreamer@@UEAA@XZ(this);
}

/*
==============
psManifestActionResults_t::Reset
==============
*/

void __fastcall psManifestActionResults_t::Reset(psManifestActionResults_t *this, const CCSPatchType patchType)
{
  ?Reset@psManifestActionResults_t@@QEAAXW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
psDownloadInfo_t::psDownloadInfo_t
==============
*/

void __fastcall psDownloadInfo_t::psDownloadInfo_t(psDownloadInfo_t *this)
{
  ??0psDownloadInfo_t@@QEAA@XZ(this);
}

/*
==============
Online_PatchStreamer::ShowLogOutput
==============
*/

bool __fastcall Online_PatchStreamer::ShowLogOutput(Online_PatchStreamer *this)
{
  return ?ShowLogOutput@Online_PatchStreamer@@UEAA_NXZ(this);
}

/*
==============
Online_PatchStreamer::ShowLogOutput
==============
*/
bool Online_PatchStreamer::ShowLogOutput(Online_PatchStreamer *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_patchSystemDebug;
  if ( !DVARINT_patchSystemDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchSystemDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer != 0;
}

/*
==============
psDownloadInfo_t::psDownloadInfo_t
==============
*/
void psDownloadInfo_t::psDownloadInfo_t(psDownloadInfo_t *this)
{
  this->valid = 0;
  *(_QWORD *)&this->patchFilesNeeded = 0i64;
  *(_QWORD *)&this->streamedPatchBytesTotal = 0i64;
}

/*
==============
Online_PatchStreamer::~Online_PatchStreamer
==============
*/
void Online_PatchStreamer::~Online_PatchStreamer(Online_PatchStreamer *this)
{
  Online_PatchStreamer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t> > *p_m_listHead; 
  Online_PatchStreamer *m_nextSystem; 

  this->__vftable = (Online_PatchStreamer_vtbl *)&Online_PatchStreamer::`vftable';
  mp_next = (Online_PatchStreamer *)this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_currentActions.actionInfoList.m_listHead;
  if ( mp_next != (Online_PatchStreamer *)&this->m_currentActions.actionInfoList.m_listHead )
  {
    do
    {
      m_nextSystem = (Online_PatchStreamer *)mp_next->m_nextSystem;
      mp_next->__vftable = (Online_PatchStreamer_vtbl *)this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next;
      this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      mp_next = m_nextSystem;
    }
    while ( m_nextSystem != (Online_PatchStreamer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next = &this->m_currentActions.actionInfoList.m_listHead.m_sentinel;
}

/*
==============
psManifestActionResults_t::Reset
==============
*/
void psManifestActionResults_t::Reset(psManifestActionResults_t *this, const CCSPatchType patchType)
{
  ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node<psManifestActionInfo_t> *v6; 

  this->valid[patchType] = 0;
  p_m_listHead = &this->actionInfoList.m_listHead;
  this->downloadActionContexts[patchType] = 0;
  this->allActions[patchType] = 0;
  mp_next = this->actionInfoList.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::list_node_base *)&this->actionInfoList.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( HIDWORD(mp_next[41].mp_next) == patchType )
      {
        v6 = (ntl::internal::list_node<psManifestActionInfo_t> *)mp_next;
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t>>::remove(p_m_listHead, v6);
        v6->mp_prev = (ntl::internal::list_node_base *)this->actionInfoList.m_freelist.m_head.mp_next;
        this->actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6;
      }
      else
      {
        mp_next = mp_next->mp_next;
      }
    }
    while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
  }
}

