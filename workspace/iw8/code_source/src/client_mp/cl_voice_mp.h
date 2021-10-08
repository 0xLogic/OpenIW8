/*
==============
CL_GetLocalClientVoiceCommunication
==============
*/

voiceCommunication_t *__fastcall CL_GetLocalClientVoiceCommunication(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientVoiceCommunication@@YAPEAUvoiceCommunication_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetLocalClientVoiceCommunication
==============
*/
voiceCommunication_t *CL_GetLocalClientVoiceCommunication(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &cl_voiceCommunication[v1];
}

