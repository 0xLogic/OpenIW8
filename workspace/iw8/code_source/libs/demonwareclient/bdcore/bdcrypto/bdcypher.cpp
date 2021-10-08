/*
==============
bdCypher::~bdCypher
==============
*/

void __fastcall bdCypher::~bdCypher(bdCypher *this)
{
  ??1bdCypher@@UEAA@XZ(this);
}

/*
==============
bdCypher::bdCypher
==============
*/

void __fastcall bdCypher::bdCypher(bdCypher *this, unsigned int blockSize, bdCypherModes cypherMode)
{
  ??0bdCypher@@IEAA@IW4bdCypherModes@@@Z(this, blockSize, cypherMode);
}

/*
==============
bdCypher::bdCypher
==============
*/
void bdCypher::bdCypher(bdCypher *this, unsigned int blockSize, bdCypherModes cypherMode)
{
  __int64 v4; 

  this->m_blockSize = blockSize;
  this->__vftable = (bdCypher_vtbl *)&bdCypher::`vftable';
  this->m_cypherMode = cypherMode;
  bdHandleAssert(blockSize <= 0x10, "(blockSize <= BD_CYPHER_BLOCK_SIZE_MAX)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypher.cpp", "bdCypher::bdCypher", 0x16u, "BD_CYPHER_BLOCK_SIZE_MAX too small for cypher of block size[%d]", blockSize);
  LODWORD(v4) = this->m_cypherMode;
  bdHandleAssert((unsigned int)(v4 - 1) <= 1, "(m_cypherMode == BD_CYPHER_MODE_CBC || m_cypherMode == BD_CYPHER_MODE_GCM)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypher.cpp", "bdCypher::bdCypher", 0x18u, "Invalid cypher mode[%d]", v4);
}

/*
==============
bdCypher::~bdCypher
==============
*/
void bdCypher::~bdCypher(bdCypher *this)
{
  this->__vftable = (bdCypher_vtbl *)&bdCypher::`vftable';
}

