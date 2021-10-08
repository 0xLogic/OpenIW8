/*
==============
Online_VideoStreaming::Online_VideoStreaming
==============
*/

void __fastcall Online_VideoStreaming::Online_VideoStreaming(Online_VideoStreaming *this)
{
  ??0Online_VideoStreaming@@AEAA@XZ(this);
}

/*
==============
Online_VideoStreaming::Init
==============
*/

bool __fastcall Online_VideoStreaming::Init(Online_VideoStreaming *this)
{
  return ?Init@Online_VideoStreaming@@UEAA_NXZ(this);
}

/*
==============
Online_VideoStreaming::Reset
==============
*/

void __fastcall Online_VideoStreaming::Reset(Online_VideoStreaming *this)
{
  ?Reset@Online_VideoStreaming@@AEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::Uninit
==============
*/

void __fastcall Online_VideoStreaming::Uninit(Online_VideoStreaming *this)
{
  ?Uninit@Online_VideoStreaming@@UEAAXXZ(this);
}

/*
==============
VS_Play_f
==============
*/

void __fastcall VS_Play_f()
{
  ?VS_Play_f@@YAXXZ();
}

/*
==============
Online_VideoStreaming::GetInstance
==============
*/

Online_VideoStreaming *__fastcall Online_VideoStreaming::GetInstance()
{
  return ?GetInstance@Online_VideoStreaming@@SAAEAV1@XZ();
}

/*
==============
Online_VideoStreaming::OutputCurrentState
==============
*/

void __fastcall Online_VideoStreaming::OutputCurrentState(Online_VideoStreaming *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_VideoStreaming@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_VideoStreaming::StopVideo
==============
*/

bool __fastcall Online_VideoStreaming::StopVideo(Online_VideoStreaming *this, bool immediate, bool playQueue)
{
  return ?StopVideo@Online_VideoStreaming@@QEAA_N_N0@Z(this, immediate, playQueue);
}

/*
==============
Online_VideoStreaming::SetRendererTexturesToFrame
==============
*/

void __fastcall Online_VideoStreaming::SetRendererTexturesToFrame(Online_VideoStreaming *this, GfxCmdBufInput *cmdBufInput)
{
  ?SetRendererTexturesToFrame@Online_VideoStreaming@@QEAAXPEAUGfxCmdBufInput@@@Z(this, cmdBufInput);
}

/*
==============
Online_VideoStreaming::StartVideo
==============
*/

bool __fastcall Online_VideoStreaming::StartVideo(Online_VideoStreaming *this, const char *movieURL, bool queue)
{
  return ?StartVideo@Online_VideoStreaming@@QEAA_NPEBD_N@Z(this, movieURL, queue);
}

/*
==============
Online_VideoStreaming::OnUnregistered
==============
*/

void __fastcall Online_VideoStreaming::OnUnregistered(Online_VideoStreaming *this)
{
  ?OnUnregistered@Online_VideoStreaming@@UEAAXXZ(this);
}

/*
==============
VS_Mute_f
==============
*/

void __fastcall VS_Mute_f()
{
  ?VS_Mute_f@@YAXXZ();
}

/*
==============
Online_VideoStreaming::Frame
==============
*/

void __fastcall Online_VideoStreaming::Frame(Online_VideoStreaming *this)
{
  ?Frame@Online_VideoStreaming@@UEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::OnRegistered
==============
*/

void __fastcall Online_VideoStreaming::OnRegistered(Online_VideoStreaming *this)
{
  ?OnRegistered@Online_VideoStreaming@@UEAAXXZ(this);
}

/*
==============
VS_Pause_f
==============
*/

void __fastcall VS_Pause_f()
{
  ?VS_Pause_f@@YAXXZ();
}

/*
==============
Online_VideoStreaming::GetVideoResolution
==============
*/

void __fastcall Online_VideoStreaming::GetVideoResolution(Online_VideoStreaming *this, unsigned int *width, unsigned int *height)
{
  ?GetVideoResolution@Online_VideoStreaming@@QEAAXAEAI0@Z(this, width, height);
}

/*
==============
Online_VideoStreaming::GetInstancePtr
==============
*/

Online_VideoStreaming *__fastcall Online_VideoStreaming::GetInstancePtr()
{
  return ?GetInstancePtr@Online_VideoStreaming@@SAPEAV1@XZ();
}

/*
==============
Online_VideoStreaming::~Online_VideoStreaming
==============
*/

void __fastcall Online_VideoStreaming::~Online_VideoStreaming(Online_VideoStreaming *this)
{
  ??1Online_VideoStreaming@@UEAA@XZ(this);
}

/*
==============
VS_Stop_f
==============
*/

void __fastcall VS_Stop_f()
{
  ?VS_Stop_f@@YAXXZ();
}

/*
==============
Online_VideoStreaming::RegisterLuaFunctions
==============
*/

void __fastcall Online_VideoStreaming::RegisterLuaFunctions(Online_VideoStreaming *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_VideoStreaming@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_VideoStreaming::OnSignedIn
==============
*/

void __fastcall Online_VideoStreaming::OnSignedIn(Online_VideoStreaming *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_VideoStreaming@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_VideoStreaming::ControllerFrame
==============
*/

void __fastcall Online_VideoStreaming::ControllerFrame(Online_VideoStreaming *this, const int controllerIndex)
{
  ?ControllerFrame@Online_VideoStreaming@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
VS_Display_f
==============
*/

void __fastcall VS_Display_f()
{
  ?VS_Display_f@@YAXXZ();
}

/*
==============
Online_VideoStreaming::OnSignedOut
==============
*/

void __fastcall Online_VideoStreaming::OnSignedOut(Online_VideoStreaming *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_VideoStreaming@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_VideoStreaming::OnDisconnect
==============
*/

void __fastcall Online_VideoStreaming::OnDisconnect(Online_VideoStreaming *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_VideoStreaming@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
LUI_LiveStream_LuaCall_StopVideo
==============
*/
__int64 LUI_LiveStream_LuaCall_StopVideo(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( Online_VideoStreaming::s_instance.m_vidStreamLogEnabled && Online_VideoStreaming::s_instance.m_vidStreamLogEnabled->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo: \n");
  Online_VideoStreaming::s_instance.m_stopCause = eSC_Manual;
  if ( Online_VideoStreaming::IsPlayerActive(&Online_VideoStreaming::s_instance) )
  {
    if ( !Online_VideoStreaming::CanStop(&Online_VideoStreaming::s_instance) )
    {
      v2 = 0;
      goto LABEL_12;
    }
    Online_VideoStreaming::s_instance.m_queuedVideo[0] = 0;
    if ( Online_VideoStreaming::s_instance.m_vidStreamLogEnabled && Online_VideoStreaming::s_instance.m_vidStreamLogEnabled->current.integer > 1 )
      Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo - Requested \n");
    Online_VideoStreaming::s_instance.m_requestStopSeq = VS_STOP_REQUESTED;
  }
  v2 = 1;
LABEL_12:
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
Online_VideoStreaming::Online_VideoStreaming
==============
*/
void Online_VideoStreaming::Online_VideoStreaming(Online_VideoStreaming *this)
{
  ntl::heap_allocator<ntl::solitary_buffer_allocator> *p_s_decodeAllocator; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<40> *v4; 
  ntl::internal::pool_allocator_freelist<40> *v5; 
  ntl::internal::pool_allocator_freelist<40> *v6; 

  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (Online_VideoStreaming_vtbl *)&Online_VideoStreaming::`vftable';
  p_s_decodeAllocator = &this->s_decodeAllocator;
  ntl::nxheap::nxheap(&this->s_decodeAllocator.m_heap);
  p_s_decodeAllocator->m_data.m_buffer = NULL;
  p_s_decodeAllocator->m_data.m_size = 0i64;
  ntl::nxheap_region::nxheap_region(&p_s_decodeAllocator->m_region);
  p_s_decodeAllocator->m_allocator.m_data.m_buffer = NULL;
  p_s_decodeAllocator->m_allocator.m_data.m_size = 0i64;
  p_m_freelist = &this->m_availableBuffers.m_freelist;
  v4 = &this->m_availableBuffers.m_freelist;
  do
  {
    v4 -= 5;
    v4->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v4;
  }
  while ( v4 > (ntl::internal::pool_allocator_freelist<40> *)&this->m_availableBuffers );
  this->m_availableBuffers.m_freelist.m_head.mp_next = &v4->m_head;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_availableBuffers.m_listHead.m_sentinel.mp_prev = &this->m_availableBuffers.m_listHead.m_sentinel;
  this->m_availableBuffers.m_listHead.m_sentinel.mp_next = &this->m_availableBuffers.m_listHead.m_sentinel;
  v5 = &this->m_decodedBuffers.m_freelist;
  v6 = &this->m_decodedBuffers.m_freelist;
  do
  {
    v6 -= 5;
    v6->m_head.mp_next = &v5->m_head;
    v5 = v6;
  }
  while ( v6 > (ntl::internal::pool_allocator_freelist<40> *)&this->m_decodedBuffers );
  this->m_decodedBuffers.m_freelist.m_head.mp_next = &v6->m_head;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_decodedBuffers.m_listHead.m_sentinel.mp_prev = &this->m_decodedBuffers.m_listHead.m_sentinel;
  this->m_decodedBuffers.m_listHead.m_sentinel.mp_next = &this->m_decodedBuffers.m_listHead.m_sentinel;
  this->m_StreamError = 0;
  Online_VideoStreaming::Reset(this);
}

/*
==============
Online_VideoStreaming::~Online_VideoStreaming
==============
*/
void Online_VideoStreaming::~Online_VideoStreaming(Online_VideoStreaming *this)
{
  Online_VideoStreaming *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  Online_VideoStreaming *m_nextSystem; 
  Online_VideoStreaming *v5; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v6; 
  Online_VideoStreaming *v7; 
  ntl::heap_allocator<ntl::solitary_buffer_allocator> *p_s_decodeAllocator; 
  char *m_buffer; 
  char *v10; 

  this->__vftable = (Online_VideoStreaming_vtbl *)&Online_VideoStreaming::`vftable';
  mp_next = (Online_VideoStreaming *)this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_decodedBuffers.m_listHead;
  if ( mp_next != (Online_VideoStreaming *)&this->m_decodedBuffers.m_listHead )
  {
    do
    {
      m_nextSystem = (Online_VideoStreaming *)mp_next->m_nextSystem;
      mp_next->__vftable = (Online_VideoStreaming_vtbl *)this->m_decodedBuffers.m_freelist.m_head.mp_next;
      this->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      mp_next = m_nextSystem;
    }
    while ( m_nextSystem != (Online_VideoStreaming *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  p_m_listHead->m_sentinel.mp_next = &p_m_listHead->m_sentinel;
  v5 = (Online_VideoStreaming *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  v6 = &this->m_availableBuffers.m_listHead;
  if ( v5 != (Online_VideoStreaming *)&this->m_availableBuffers.m_listHead )
  {
    do
    {
      v7 = (Online_VideoStreaming *)v5->m_nextSystem;
      v5->__vftable = (Online_VideoStreaming_vtbl *)this->m_availableBuffers.m_freelist.m_head.mp_next;
      this->m_availableBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v5;
      v5 = v7;
    }
    while ( v7 != (Online_VideoStreaming *)v6 );
  }
  v6->m_sentinel.mp_prev = &v6->m_sentinel;
  this->m_availableBuffers.m_listHead.m_sentinel.mp_next = &this->m_availableBuffers.m_listHead.m_sentinel;
  p_s_decodeAllocator = &this->s_decodeAllocator;
  ntl::nxheap::shutdown(&this->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&p_s_decodeAllocator->m_region);
  m_buffer = p_s_decodeAllocator->m_data.m_buffer;
  if ( m_buffer )
  {
    v10 = p_s_decodeAllocator->m_allocator.m_data.m_buffer;
    if ( m_buffer != v10 && v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )", -2i64) )
      __debugbreak();
    p_s_decodeAllocator->m_data.m_buffer = NULL;
    p_s_decodeAllocator->m_data.m_size = 0i64;
  }
  ntl::nxheap_region::~nxheap_region(&p_s_decodeAllocator->m_region);
  ntl::nxheap::~nxheap(&p_s_decodeAllocator->m_heap);
}

/*
==============
Online_VideoStreaming::ControllerFrame
==============
*/
void Online_VideoStreaming::ControllerFrame(Online_VideoStreaming *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_VideoStreaming::Frame
==============
*/
void Online_VideoStreaming::Frame(Online_VideoStreaming *this)
{
  const dvar_t *m_vidStreamLogEnabled; 

  Online_VideoStreaming::FrameInternal(this);
  if ( !Online_VideoStreaming::IsPlayerActive(this) && this->m_requestStopSeq == VS_STOP_NONE && this->m_queuedVideo[0] )
  {
    m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
    if ( m_vidStreamLogEnabled )
    {
      if ( m_vidStreamLogEnabled->current.integer > 1 )
        Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming: starting queued video %s \n", this->m_queuedVideo);
    }
    Online_VideoStreaming::StartVideo(this, this->m_queuedVideo, 0);
    this->m_queuedVideo[0] = 0;
  }
}

/*
==============
Online_VideoStreaming::GetInstance
==============
*/
Online_VideoStreaming *Online_VideoStreaming::GetInstance()
{
  return &Online_VideoStreaming::s_instance;
}

/*
==============
Online_VideoStreaming::GetInstancePtr
==============
*/
Online_VideoStreaming *Online_VideoStreaming::GetInstancePtr()
{
  return &Online_VideoStreaming::s_instance;
}

/*
==============
Online_VideoStreaming::GetVideoResolution
==============
*/
void Online_VideoStreaming::GetVideoResolution(Online_VideoStreaming *this, unsigned int *width, unsigned int *height)
{
  *width = this->m_videoWidth;
  *height = this->m_videoHeight;
}

/*
==============
Online_VideoStreaming::Init
==============
*/
char Online_VideoStreaming::Init(Online_VideoStreaming *this)
{
  Cmd_AddCommandInternal("vs_play", VS_Play_f, &VS_Play_f_VAR);
  Cmd_AddCommandInternal("vs_stop", VS_Stop_f, &VS_Stop_f_VAR);
  Cmd_AddCommandInternal("vs_pause", VS_Pause_f, &VS_Pause_f_VAR);
  Cmd_AddCommandInternal("vs_mute", VS_Mute_f, &VS_Mute_f_VAR);
  Cmd_AddCommandInternal("vs_display", VS_Display_f, &VS_Display_f_VAR);
  Online_VideoStreaming::InitSpecific(this);
  Online_VideoStreaming::Reset(this);
  return 1;
}

/*
==============
Online_VideoStreaming::OnDisconnect
==============
*/
void Online_VideoStreaming::OnDisconnect(Online_VideoStreaming *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_VideoStreaming::OnRegistered
==============
*/
void Online_VideoStreaming::OnRegistered(Online_VideoStreaming *this)
{
  ;
}

/*
==============
Online_VideoStreaming::OnSignedIn
==============
*/
void Online_VideoStreaming::OnSignedIn(Online_VideoStreaming *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_VideoStreaming::OnSignedOut
==============
*/
void Online_VideoStreaming::OnSignedOut(Online_VideoStreaming *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_VideoStreaming::OnUnregistered
==============
*/
void Online_VideoStreaming::OnUnregistered(Online_VideoStreaming *this)
{
  ;
}

/*
==============
Online_VideoStreaming::OutputCurrentState
==============
*/
void Online_VideoStreaming::OutputCurrentState(Online_VideoStreaming *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_VideoStreaming::RegisterLuaFunctions
==============
*/
void Online_VideoStreaming::RegisterLuaFunctions(Online_VideoStreaming *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "LiveStreaming", LiveStreaming_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_VideoStreaming::Reset
==============
*/
void Online_VideoStreaming::Reset(Online_VideoStreaming *this)
{
  this->m_currentVideo[0] = 0;
  *(_QWORD *)&this->m_videoHeight = 0i64;
  this->m_videoStarted = 0;
  this->m_currentTime = 0i64;
  this->m_durationTime = 0i64;
  this->m_llTimeAudio = 0i64;
  this->m_llTimeVideo = 0i64;
  this->m_forceCleanup = 0;
  this->m_curVideoframe.lumaImage = rgp.blackImage;
  this->m_curVideoframe.chromaImage = rgp.blackImage;
  this->m_curVideoframe.alphaImage = rgp.blackImage;
  Online_VideoStreaming::ResetSpecific(this);
}

/*
==============
Online_VideoStreaming::SetRendererTexturesToFrame
==============
*/
void Online_VideoStreaming::SetRendererTexturesToFrame(Online_VideoStreaming *this, GfxCmdBufInput *cmdBufInput)
{
  GfxImage *lumaImage; 
  GfxImage *alphaImage; 

  if ( !cmdBufInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\online_videostreaming.cpp", 210, ASSERT_TYPE_ASSERT, "(cmdBufInput)", (const char *)&queryFormat, "cmdBufInput") )
    __debugbreak();
  if ( this->m_curVideoframe.lumaImage )
  {
    if ( !this->m_curVideoframe.chromaImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\online_videostreaming.cpp", 214, ASSERT_TYPE_ASSERT, "(frameTextures->chromaImage)", (const char *)&queryFormat, "frameTextures->chromaImage") )
      __debugbreak();
    lumaImage = this->m_curVideoframe.lumaImage;
    if ( !cmdBufInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    cmdBufInput->codeImages[13] = lumaImage;
    cmdBufInput->codeImages[18] = this->m_curVideoframe.chromaImage;
  }
  alphaImage = this->m_curVideoframe.alphaImage;
  if ( alphaImage )
  {
    if ( !cmdBufInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    cmdBufInput->codeImages[16] = alphaImage;
  }
}

/*
==============
Online_VideoStreaming::StartVideo
==============
*/
char Online_VideoStreaming::StartVideo(Online_VideoStreaming *this, const char *movieURL, bool queue)
{
  const dvar_t *m_vidStreamLogEnabled; 
  bool v7; 
  const dvar_t *v8; 
  char v9; 
  const dvar_t *v10; 
  __int64 v12; 
  char *m_currentVideo; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  int v21; 

  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StartVideo: %s \n", movieURL);
  v7 = !this->m_canAllocateResources;
  this->m_StreamError = 0;
  if ( v7 && !this->m_resourcesAllocated )
    return 0;
  if ( !Online_VideoStreaming::IsPlayerActive(this) )
  {
    this->m_stopCause = eSC_Unknown;
    v21 = Online_VideoStreaming::Initialize(this, movieURL);
    if ( v21 >= 0 )
      return 1;
    this->m_stopCause = eSC_Error;
    Com_PrintError(25, "[OnlineVidStreaming] StartVideo: %s failed with 0x%08x\n", movieURL, (unsigned int)v21);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\online_videostreaming.cpp", 142, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize StreamingVideo. Check logs.") )
      __debugbreak();
    return 0;
  }
  v8 = this->m_vidStreamLogEnabled;
  if ( v8 && v8->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::Already playing movie %s!\n", this->m_currentVideo);
  v9 = 0;
  if ( !queue )
  {
    v10 = this->m_vidStreamLogEnabled;
    if ( v10 && v10->current.integer > 1 )
    {
      Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming: Queue disabled, ignoring request");
      return 0;
    }
    return 0;
  }
  v12 = 0x7FFFFFFFi64;
  m_currentVideo = this->m_currentVideo;
  if ( !movieURL && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( this == (Online_VideoStreaming *)-1096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v14 = (const char *)(movieURL - m_currentVideo);
  while ( 1 )
  {
    v15 = m_currentVideo[(_QWORD)v14];
    v16 = v12;
    v17 = *m_currentVideo++;
    --v12;
    if ( !v16 )
      break;
    if ( v15 != v17 )
    {
      v18 = this->m_vidStreamLogEnabled;
      v19 = v18;
      if ( v18 && v18->current.integer > 1 )
      {
        Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming - Queued %s, stoping current playback\n", movieURL);
        v19 = this->m_vidStreamLogEnabled;
      }
      if ( v19 && v19->current.integer > 1 )
        Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo: \n");
      this->m_stopCause = eSC_Manual;
      if ( Online_VideoStreaming::IsPlayerActive(this) )
      {
        if ( !Online_VideoStreaming::CanStop(this) )
        {
          Com_PrintWarning(25, "Online_VideoStreaming: Unable to stop video, skipping queue\n");
          return 0;
        }
        v20 = this->m_vidStreamLogEnabled;
        if ( v20 && v20->current.integer > 1 )
          Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo - Requested \n");
        this->m_requestStopSeq = VS_STOP_REQUESTED;
      }
      v9 = 1;
      Core_strcpy(this->m_queuedVideo, 0x400ui64, movieURL);
      return v9;
    }
    if ( !v15 )
      return 0;
  }
  return v9;
}

/*
==============
Online_VideoStreaming::StopVideo
==============
*/
char Online_VideoStreaming::StopVideo(Online_VideoStreaming *this, bool immediate, bool playQueue)
{
  const dvar_t *m_vidStreamLogEnabled; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v10; 

  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo: \n");
  this->m_stopCause = eSC_Manual;
  if ( immediate )
  {
    v7 = this->m_vidStreamLogEnabled;
    if ( v7 )
    {
      if ( v7->current.integer > 1 )
        Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo - Immediate \n");
    }
    this->m_queuedVideo[0] = 0;
    v8 = Online_VideoStreaming::Finalize(this);
    if ( v8 < 0 )
    {
      Com_PrintError(25, "[OnlineVidStreaming] StopVideo:Finalize: failed with 0x%08x\n", (unsigned int)v8);
      return 0;
    }
  }
  else if ( Online_VideoStreaming::IsPlayerActive(this) )
  {
    if ( !Online_VideoStreaming::CanStop(this) )
      return 0;
    if ( !playQueue )
      this->m_queuedVideo[0] = 0;
    v10 = this->m_vidStreamLogEnabled;
    if ( v10 && v10->current.integer > 1 )
      Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo - Requested \n");
    this->m_requestStopSeq = VS_STOP_REQUESTED;
  }
  return 1;
}

/*
==============
Online_VideoStreaming::Uninit
==============
*/
void Online_VideoStreaming::Uninit(Online_VideoStreaming *this)
{
  Cmd_RemoveCommand("vs_play");
  Cmd_RemoveCommand("vs_stop");
  Cmd_RemoveCommand("vs_pause");
  Cmd_RemoveCommand("vs_mute");
  Cmd_RemoveCommand("vs_display");
}

/*
==============
VS_Display_f
==============
*/
void VS_Display_f(void)
{
  int v0; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_ArgInt(1);
    Online_VideoStreaming::SetDisplayStatus(&Online_VideoStreaming::s_instance, v0 != 0);
  }
  else
  {
    Com_Printf(25, "online video streaming: Cmd usage 'vs_display <state 0 or 1>' \n");
  }
}

/*
==============
VS_Mute_f
==============
*/
void VS_Mute_f(void)
{
  int v0; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_ArgInt(1);
    Online_VideoStreaming::SetMuteStatus(&Online_VideoStreaming::s_instance, v0 != 0);
  }
  else
  {
    Com_Printf(25, "online video streaming: Cmd usage 'vs_mute <state 0 or 1>' \n");
  }
}

/*
==============
VS_Pause_f
==============
*/
void VS_Pause_f(void)
{
  int v0; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_ArgInt(1);
    Online_VideoStreaming::SetPauseStatus(&Online_VideoStreaming::s_instance, v0 != 0);
  }
  else
  {
    Com_Printf(25, "online video streaming: Cmd usage 'vs_pause <state 0 or 1>' \n");
  }
}

/*
==============
VS_Play_f
==============
*/
void VS_Play_f(void)
{
  const char *v0; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_Argv(1);
    if ( !Online_VideoStreaming::StartVideo(&Online_VideoStreaming::s_instance, v0, 0) )
      Com_Printf(25, "online video streaming: Failed to play. Ensure video not already playing. \n");
  }
  else
  {
    Com_Printf(25, "online video streaming: Cmd usage 'vs_play <mp4 file url>' \n");
  }
}

/*
==============
VS_Stop_f
==============
*/
void VS_Stop_f(void)
{
  if ( Online_VideoStreaming::s_instance.m_vidStreamLogEnabled && Online_VideoStreaming::s_instance.m_vidStreamLogEnabled->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo: \n");
  Online_VideoStreaming::s_instance.m_stopCause = eSC_Manual;
  if ( Online_VideoStreaming::IsPlayerActive(&Online_VideoStreaming::s_instance) && Online_VideoStreaming::CanStop(&Online_VideoStreaming::s_instance) )
  {
    Online_VideoStreaming::s_instance.m_queuedVideo[0] = 0;
    if ( Online_VideoStreaming::s_instance.m_vidStreamLogEnabled )
    {
      if ( Online_VideoStreaming::s_instance.m_vidStreamLogEnabled->current.integer > 1 )
        Com_Printf(25, "[OnlineVidStreaming] Online_VideoStreaming::StopVideo - Requested \n");
    }
    Online_VideoStreaming::s_instance.m_requestStopSeq = VS_STOP_REQUESTED;
  }
}

