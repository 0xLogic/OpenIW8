/*
==============
Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64>
==============
*/

bool __fastcall Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64>(unsigned __int64 <args_0>, unsigned __int64 <args_1>, unsigned __int64 <args_2>)
{
  return ??$Co_AwaitAll@_K_K_K@@YA_N_K00@Z(<args_0>, <args_1>, <args_2>);
}

/*
==============
Co_AwaitAll<unsigned __int64,unsigned __int64>
==============
*/

bool __fastcall Co_AwaitAll<unsigned __int64,unsigned __int64>(unsigned __int64 <args_0>, unsigned __int64 <args_1>)
{
  return ??$Co_AwaitAll@_K_K@@YA_N_K0@Z(<args_0>, <args_1>);
}

/*
==============
Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64>
==============
*/

bool __fastcall Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64>(unsigned __int64 <args_0>, unsigned __int64 <args_1>, unsigned __int64 <args_2>, unsigned __int64 <args_3>)
{
  return ??$Co_AwaitAll@_K_K_K_K@@YA_N_K000@Z(<args_0>, <args_1>, <args_2>, <args_3>);
}

/*
==============
Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64>
==============
*/
bool Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64>(unsigned __int64 <args_0>, unsigned __int64 <args_1>, unsigned __int64 <args_2>)
{
  __int64 *v5; 
  bool result; 
  __int64 v7; 
  __int64 v8[3]; 

  v8[0] = Co_Await(<args_0>);
  v8[1] = Co_Await(<args_1>);
  v8[2] = Co_Await(<args_2>);
  v5 = v8;
  result = 1;
  v7 = 3i64;
  do
  {
    result = result && *v5++;
    --v7;
  }
  while ( v7 );
  return result;
}

/*
==============
Co_AwaitAll<unsigned __int64,unsigned __int64>
==============
*/
bool Co_AwaitAll<unsigned __int64,unsigned __int64>(unsigned __int64 <args_0>, unsigned __int64 <args_1>)
{
  __int64 *v3; 
  bool result; 
  __int64 v5; 
  __int64 v6[3]; 

  v6[0] = Co_Await(<args_0>);
  v6[1] = Co_Await(<args_1>);
  v3 = v6;
  result = 1;
  v5 = 2i64;
  do
  {
    result = result && *v3++;
    --v5;
  }
  while ( v5 );
  return result;
}

/*
==============
Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64>
==============
*/
bool Co_AwaitAll<unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64>(unsigned __int64 <args_0>, unsigned __int64 <args_1>, unsigned __int64 <args_2>, unsigned __int64 <args_3>)
{
  __int64 *v7; 
  bool result; 
  __int64 v9; 
  __int64 v10[4]; 

  v10[0] = Co_Await(<args_0>);
  v10[1] = Co_Await(<args_1>);
  v10[2] = Co_Await(<args_2>);
  v10[3] = Co_Await(<args_3>);
  v7 = v10;
  result = 1;
  v9 = 4i64;
  do
  {
    result = result && *v7++;
    --v9;
  }
  while ( v9 );
  return result;
}

