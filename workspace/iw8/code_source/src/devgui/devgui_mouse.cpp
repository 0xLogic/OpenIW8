/*
==============
DevMouse::WasButtonReleased
==============
*/

bool __fastcall DevMouse::WasButtonReleased(DevMouse *this, DevMouse::MouseButton button)
{
  return ?WasButtonReleased@DevMouse@@QEBA_NW4MouseButton@1@@Z(this, button);
}

/*
==============
DevMouse::GetWheelDelta
==============
*/

int __fastcall DevMouse::GetWheelDelta(DevMouse *this)
{
  return ?GetWheelDelta@DevMouse@@QEBAHXZ(this);
}

/*
==============
DevMouse::RemoteMouseMove
==============
*/

void __fastcall DevMouse::RemoteMouseMove(DevMouse *this, int dx, int dy)
{
  ?RemoteMouseMove@DevMouse@@QEAAXHH@Z(this, dx, dy);
}

/*
==============
DevMouse::MouseScroll
==============
*/

void __fastcall DevMouse::MouseScroll(DevMouse *this, int delta)
{
  ?MouseScroll@DevMouse@@QEAAXH@Z(this, delta);
}

/*
==============
DevMouse::MouseButtonEvent
==============
*/

void __fastcall DevMouse::MouseButtonEvent(DevMouse *this, DevMouse::MouseButton button, int down)
{
  ?MouseButtonEvent@DevMouse@@QEAAXW4MouseButton@1@H@Z(this, button, down);
}

/*
==============
DevMouse::GetMousePos
==============
*/

void __fastcall DevMouse::GetMousePos(DevMouse *this, int *x, int *y)
{
  ?GetMousePos@DevMouse@@QEBAXPEAH0@Z(this, x, y);
}

/*
==============
DevMouse::DevMouse
==============
*/

void __fastcall DevMouse::DevMouse(DevMouse *this)
{
  ??0DevMouse@@QEAA@XZ(this);
}

/*
==============
DevMouse::SetMouseRange
==============
*/

void __fastcall DevMouse::SetMouseRange(DevMouse *this, int windowWidth, int windowHeight)
{
  ?SetMouseRange@DevMouse@@QEAAXHH@Z(this, windowWidth, windowHeight);
}

/*
==============
DevMouse::GetMousePosDeltaY
==============
*/

int __fastcall DevMouse::GetMousePosDeltaY(DevMouse *this)
{
  return ?GetMousePosDeltaY@DevMouse@@QEBAHXZ(this);
}

/*
==============
DevMouse::Update
==============
*/

void __fastcall DevMouse::Update(DevMouse *this)
{
  ?Update@DevMouse@@QEAAXXZ(this);
}

/*
==============
DevMouse::IsButtonDown
==============
*/

bool __fastcall DevMouse::IsButtonDown(DevMouse *this, DevMouse::MouseButton button)
{
  return ?IsButtonDown@DevMouse@@QEBA_NW4MouseButton@1@@Z(this, button);
}

/*
==============
DevMouse::WasButtonPressed
==============
*/

bool __fastcall DevMouse::WasButtonPressed(DevMouse *this, DevMouse::MouseButton button)
{
  return ?WasButtonPressed@DevMouse@@QEBA_NW4MouseButton@1@@Z(this, button);
}

/*
==============
DevMouse::GetMousePosDeltaX
==============
*/

int __fastcall DevMouse::GetMousePosDeltaX(DevMouse *this)
{
  return ?GetMousePosDeltaX@DevMouse@@QEBAHXZ(this);
}

/*
==============
DevMouse::Init
==============
*/

void __fastcall DevMouse::Init(DevMouse *this)
{
  ?Init@DevMouse@@QEAAXXZ(this);
}

/*
==============
DevMouse::DevMouse
==============
*/
void DevMouse::DevMouse(DevMouse *this)
{
  this->m_mouseX = 960;
  *(_QWORD *)&this->m_prevMouseButtons = 0i64;
  this->m_mouseScroll = 0;
  this->m_mouseY = 540;
  this->m_prevMouseX = 960;
  *(_QWORD *)&this->m_prevMouseY = 540i64;
  this->m_mouseMaxX = 1920;
  this->m_mouseMaxY = 1080;
}

/*
==============
DevMouse::GetMousePos
==============
*/
void DevMouse::GetMousePos(DevMouse *this, int *x, int *y)
{
  *x = this->m_mouseX;
  *y = this->m_mouseY;
}

/*
==============
DevMouse::GetMousePosDeltaX
==============
*/
__int64 DevMouse::GetMousePosDeltaX(DevMouse *this)
{
  return (unsigned int)(this->m_mouseX - this->m_prevMouseX);
}

/*
==============
DevMouse::GetMousePosDeltaY
==============
*/
__int64 DevMouse::GetMousePosDeltaY(DevMouse *this)
{
  return (unsigned int)(this->m_mouseY - this->m_prevMouseY);
}

/*
==============
DevMouse::GetWheelDelta
==============
*/
__int64 DevMouse::GetWheelDelta(DevMouse *this)
{
  return (unsigned int)(this->m_mouseScroll - this->m_prevMouseScroll);
}

/*
==============
DevMouse::Init
==============
*/
void DevMouse::Init(DevMouse *this)
{
  ;
}

/*
==============
DevMouse::IsButtonDown
==============
*/
bool DevMouse::IsButtonDown(DevMouse *this, DevMouse::MouseButton button)
{
  return (button & this->m_mouseButtons) != 0;
}

/*
==============
DevMouse::MouseButtonEvent
==============
*/
void DevMouse::MouseButtonEvent(DevMouse *this, DevMouse::MouseButton button, int down)
{
  unsigned int m_mouseButtons; 

  m_mouseButtons = this->m_mouseButtons;
  if ( down )
    this->m_mouseButtons = button | m_mouseButtons;
  else
    this->m_mouseButtons = m_mouseButtons & ~button;
}

/*
==============
DevMouse::MouseScroll
==============
*/
void DevMouse::MouseScroll(DevMouse *this, int delta)
{
  if ( ((delta + 1) & 0xFFFFFFFD) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_mouse.cpp", 52, ASSERT_TYPE_ASSERT, "(delta == -1 || delta == 1)", (const char *)&queryFormat, "delta == -1 || delta == 1") )
      __debugbreak();
    this->m_mouseScroll += delta;
  }
  else
  {
    this->m_mouseScroll += delta;
  }
}

/*
==============
DevMouse::RemoteMouseMove
==============
*/
void DevMouse::RemoteMouseMove(DevMouse *this, int dx, int dy)
{
  int v3; 
  int m_mouseMaxX; 
  int v5; 
  int m_mouseMaxY; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 

  v3 = dx + this->m_mouseX;
  m_mouseMaxX = this->m_mouseMaxX;
  v5 = dy + this->m_mouseY;
  if ( m_mouseMaxX < 0 )
  {
    v11 = this->m_mouseMaxX;
    v9 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v9, v11) )
      __debugbreak();
  }
  if ( m_mouseMaxX < v3 )
    v3 = m_mouseMaxX;
  m_mouseMaxY = this->m_mouseMaxY;
  if ( v3 < 0 )
    v3 = 0;
  if ( m_mouseMaxY < 0 )
  {
    LODWORD(v10) = this->m_mouseMaxY;
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v8, v10) )
      __debugbreak();
  }
  this->m_mouseX = v3;
  if ( m_mouseMaxY < v5 )
    v5 = m_mouseMaxY;
  if ( v5 < 0 )
    v5 = 0;
  this->m_mouseY = v5;
}

/*
==============
DevMouse::SetMouseRange
==============
*/
void DevMouse::SetMouseRange(DevMouse *this, int windowWidth, int windowHeight)
{
  this->m_mouseMaxX = windowWidth;
  this->m_mouseMaxY = windowHeight;
}

/*
==============
DevMouse::Update
==============
*/
void DevMouse::Update(DevMouse *this)
{
  int ControllerFromClient; 
  int x; 
  int m_mouseMaxX; 
  int y; 
  int m_mouseMaxY; 
  int m_mouseY; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  MouseCursorPos curPos; 

  this->m_prevMouseButtons = this->m_mouseButtons;
  this->m_prevMouseX = this->m_mouseX;
  this->m_prevMouseY = this->m_mouseY;
  this->m_prevMouseScroll = this->m_mouseScroll;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  IN_GetCursorPos(ControllerFromClient, &curPos);
  x = curPos.x;
  m_mouseMaxX = this->m_mouseMaxX;
  y = curPos.y;
  this->m_mouseX = curPos.x;
  this->m_mouseY = y;
  if ( m_mouseMaxX < 0 )
  {
    v11 = m_mouseMaxX;
    v9 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v9, v11) )
      __debugbreak();
  }
  if ( m_mouseMaxX < x )
    x = m_mouseMaxX;
  m_mouseMaxY = this->m_mouseMaxY;
  if ( x < 0 )
    x = 0;
  this->m_mouseX = x;
  m_mouseY = this->m_mouseY;
  if ( m_mouseMaxY < 0 )
  {
    LODWORD(v10) = m_mouseMaxY;
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v8, v10) )
      __debugbreak();
  }
  if ( m_mouseMaxY < m_mouseY )
    m_mouseY = m_mouseMaxY;
  if ( m_mouseY < 0 )
    m_mouseY = 0;
  this->m_mouseY = m_mouseY;
}

/*
==============
DevMouse::WasButtonPressed
==============
*/
bool DevMouse::WasButtonPressed(DevMouse *this, DevMouse::MouseButton button)
{
  return (button & this->m_mouseButtons) != 0 && (button & this->m_prevMouseButtons) == 0;
}

/*
==============
DevMouse::WasButtonReleased
==============
*/
bool DevMouse::WasButtonReleased(DevMouse *this, DevMouse::MouseButton button)
{
  return (button & this->m_mouseButtons) == 0 && (button & this->m_prevMouseButtons) != 0;
}

