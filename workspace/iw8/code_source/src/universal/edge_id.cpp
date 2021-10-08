/*
==============
EdgeId::Set
==============
*/

void __fastcall EdgeId::Set(EdgeId *this, unsigned int edgeIndex)
{
  ?Set@EdgeId@@QEAAXI@Z(this, edgeIndex);
}

/*
==============
EdgeId::Set
==============
*/

void __fastcall EdgeId::Set(EdgeId *this, unsigned int edgeIndex, unsigned int entityIndex)
{
  ?Set@EdgeId@@QEAAXII@Z(this, edgeIndex, entityIndex);
}

/*
==============
EdgeId::GetEntityIndex
==============
*/

unsigned int __fastcall EdgeId::GetEntityIndex(EdgeId *this)
{
  return ?GetEntityIndex@EdgeId@@QEBAIXZ(this);
}

/*
==============
EdgeId::GetEdgeIndex
==============
*/

unsigned int __fastcall EdgeId::GetEdgeIndex(EdgeId *this)
{
  return ?GetEdgeIndex@EdgeId@@QEBAIXZ(this);
}

/*
==============
EdgeId::IsValid
==============
*/

bool __fastcall EdgeId::IsValid(EdgeId *this)
{
  return ?IsValid@EdgeId@@QEBA_NXZ(this);
}

/*
==============
EdgeId::GetIsDynamic
==============
*/

bool __fastcall EdgeId::GetIsDynamic(EdgeId *this)
{
  return ?GetIsDynamic@EdgeId@@QEBA_NXZ(this);
}

/*
==============
EdgeId::Clear
==============
*/

void __fastcall EdgeId::Clear(EdgeId *this)
{
  ?Clear@EdgeId@@QEAAXXZ(this);
}

/*
==============
EdgeId::Clear
==============
*/
void EdgeId::Clear(EdgeId *this)
{
  this->m_edgeIndex = 0xFFFFF;
  this->m_entityIndex = 2047;
}

/*
==============
EdgeId::GetEdgeIndex
==============
*/
__int64 EdgeId::GetEdgeIndex(EdgeId *this)
{
  return this->m_edgeIndex;
}

/*
==============
EdgeId::GetEntityIndex
==============
*/
__int64 EdgeId::GetEntityIndex(EdgeId *this)
{
  return this->m_entityIndex;
}

/*
==============
EdgeId::GetIsDynamic
==============
*/
bool EdgeId::GetIsDynamic(EdgeId *this)
{
  return this->m_entityIndex != 2047;
}

/*
==============
EdgeId::IsValid
==============
*/
bool EdgeId::IsValid(EdgeId *this)
{
  return this->m_edgeIndex != 0xFFFFF;
}

/*
==============
EdgeId::Set
==============
*/
void EdgeId::Set(EdgeId *this, unsigned int edgeIndex)
{
  this->m_edgeIndex = edgeIndex;
  this->m_entityIndex = 2047;
}

/*
==============
EdgeId::Set
==============
*/
void EdgeId::Set(EdgeId *this, unsigned int edgeIndex, unsigned int entityIndex)
{
  int v7; 

  if ( entityIndex < 0x7A920 )
  {
    this->m_edgeIndex = edgeIndex;
    this->m_entityIndex = entityIndex;
  }
  else
  {
    v7 = 502048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_id.cpp", 22, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "entityIndex doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", entityIndex, v7) )
      __debugbreak();
    this->m_edgeIndex = edgeIndex;
    this->m_entityIndex = entityIndex;
  }
}

