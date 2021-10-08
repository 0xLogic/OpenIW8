/*
==============
bdCypherSuites::getCypherFromSuite
==============
*/

bdCypherAlgorithms __fastcall bdCypherSuites::getCypherFromSuite(const unsigned __int16 suite)
{
  return ?getCypherFromSuite@bdCypherSuites@@SA?AW4bdCypherAlgorithms@@G@Z(suite);
}

/*
==============
bdCypherSuites::getHashFromSuite
==============
*/

bdHashAlgorithms __fastcall bdCypherSuites::getHashFromSuite(const unsigned __int16 suite)
{
  return ?getHashFromSuite@bdCypherSuites@@SA?AW4bdHashAlgorithms@@G@Z(suite);
}

/*
==============
bdCypherSuites::getCypherFromSuite
==============
*/
__int64 bdCypherSuites::getCypherFromSuite(const unsigned __int16 suite)
{
  int v1; 
  int v2; 

  v1 = suite;
  v2 = suite - 48385;
  if ( !v2 )
    return 0i64;
  if ( v2 == 1 )
    return 4i64;
  bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcyphersuites.cpp", "bdCypherSuites::getCypherFromSuite", 0x19u, "Invalid Cypher Suite [%d] for getCypherFromSuite()", v1);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcyphersuites.cpp", "bdCypherSuites::getCypherFromSuite", 0x19u, "Invalid Cypher Suite [%d] for getCypherFromSuite()", v1);
  return 7i64;
}

/*
==============
bdCypherSuites::getHashFromSuite
==============
*/
__int64 bdCypherSuites::getHashFromSuite(const unsigned __int16 suite)
{
  int v1; 
  int v3; 
  int v4; 

  v1 = suite;
  if ( (unsigned int)suite - 48385 <= 1 )
    return 0i64;
  v3 = suite;
  bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcyphersuites.cpp", "bdCypherSuites::getHashFromSuite", 0x29u, "Invalid Cypher Suite [%d] for getHashFromSuite()", v3);
  v4 = v1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcyphersuites.cpp", "bdCypherSuites::getHashFromSuite", 0x29u, "Invalid Cypher Suite [%d] for getHashFromSuite()", v4);
  return 6i64;
}

