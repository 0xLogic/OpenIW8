/*
==============
bdDynamicHash::getHash
==============
*/

bdHash *__fastcall bdDynamicHash::getHash(bdDynamicHash *this)
{
  return ?getHash@bdDynamicHash@@QEAAAEAVbdHash@@XZ(this);
}

/*
==============
bdDynamicCypher::getCypher
==============
*/

bdCypher *__fastcall bdDynamicCypher::getCypher(bdDynamicCypher *this)
{
  return ?getCypher@bdDynamicCypher@@QEAAAEAVbdCypher@@XZ(this);
}

/*
==============
bdDynamicCypher::getCypher
==============
*/
bdCypher *bdDynamicCypher::getCypher(bdDynamicCypher *this)
{
  bdHandleAssert(this->m_cypher != NULL, "(m_cypher != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicCypher::getCypher", 0x77u, "Cypher Object is NULL");
  return this->m_cypher;
}

/*
==============
bdDynamicHash::getHash
==============
*/
bdHash *bdDynamicHash::getHash(bdDynamicHash *this)
{
  bdHandleAssert(this->m_hash != NULL, "(m_hash != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHash::getHash", 0x97u, "Hash Object is NULL");
  return this->m_hash;
}

