/*
==============
bdGetRandomUChar8
==============
*/

void __fastcall bdGetRandomUChar8(unsigned __int8 *in, const unsigned int length)
{
  ?bdGetRandomUChar8@@YAXQEAEI@Z(in, length);
}

/*
==============
bdGetRandomUChar8
==============
*/
void bdGetRandomUChar8(unsigned __int8 *in, const unsigned int length)
{
  NTSTATUS v2; 
  const char *v3; 

  v2 = BCryptGenRandom_0(s_provider, in, length, 0);
  if ( v2 )
  {
    if ( v2 == -1073741816 )
    {
      OutputDebugStringA("bdPlatformTrulyRandom Invalid Handle passed to bcrypt\n");
    }
    else
    {
      v3 = "bdPlatformTrulyRandom Invalid Parameter passed to bcrypt\n";
      if ( v2 != -1073741811 )
        v3 = "bdPlatformTrulyRandom Problem with BCrypt RNG";
      OutputDebugStringA(v3);
    }
  }
}

