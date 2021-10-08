/*
==============
PIXCopyEventArgumentSlow
==============
*/

void __fastcall PIXCopyEventArgumentSlow(unsigned __int64 **destination, const unsigned __int64 *limit, const char *argument)
{
  ?PIXCopyEventArgumentSlow@@YAXAEAPEA_KPEB_KPEBD@Z(destination, limit, argument);
}

/*
==============
PIXCopyEventArgument<char const *>
==============
*/

void __fastcall PIXCopyEventArgument<char const *>(unsigned __int64 **destination, const unsigned __int64 *limit, const char *argument)
{
  ??$PIXCopyEventArgument@PEBD@@YAXAEAPEA_KPEB_KPEBD@Z(destination, limit, argument);
}

/*
==============
PIXCopyEventArgument<char const *>
==============
*/
void PIXCopyEventArgument<char const *>(unsigned __int64 **destination, const unsigned __int64 *limit, const char *argument)
{
  unsigned __int64 *v4; 

  v4 = *destination;
  if ( *destination < limit )
  {
    if ( argument )
    {
      if ( ((unsigned __int8)argument & 0xF) != 0 )
      {
        PIXCopyEventArgumentSlow(destination, limit, argument);
      }
      else
      {
        *v4 = 0x840000000000000i64;
        _RCX = ++*destination;
        __asm { vpxor   xmm1, xmm1, xmm1 }
        if ( *destination < limit )
        {
          if ( ((unsigned __int64)*destination & 0xF) != 0 )
          {
            do
            {
              __asm
              {
                vmovdqu xmm0, xmmword ptr [r8]
                vmovdqu xmmword ptr [rcx], xmm0
              }
              _RCX = *destination + 2;
              __asm
              {
                vpcmpeqb xmm0, xmm0, xmm1
                vpmovmskb eax, xmm0
              }
              *destination = _RCX;
              if ( _EAX )
                break;
              argument += 16;
            }
            while ( _RCX < limit );
          }
          else
          {
            do
            {
              __asm
              {
                vmovdqu xmm0, xmmword ptr [r8]
                vmovdqu xmmword ptr [rcx], xmm0
              }
              _RCX = *destination + 2;
              __asm
              {
                vpcmpeqb xmm0, xmm0, xmm1
                vpmovmskb eax, xmm0
              }
              *destination = _RCX;
              if ( _EAX )
                break;
              argument += 16;
            }
            while ( _RCX < limit );
          }
        }
      }
    }
    else
    {
      *v4 = 0i64;
      ++*destination;
    }
  }
}

/*
==============
PIXCopyEventArgumentSlow
==============
*/
void PIXCopyEventArgumentSlow(unsigned __int64 **destination, const unsigned __int64 *limit, const char *argument)
{
  const char *v4; 
  unsigned __int64 *v6; 
  unsigned __int64 v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  const char *v11; 
  unsigned __int64 v12; 
  __int64 v13; 

  v4 = argument;
  **destination = 0x440000000000000i64;
  v6 = *destination + 1;
  *destination = v6;
  if ( ((unsigned __int8)argument & 7) != 0 )
  {
    if ( v6 < limit )
    {
      v11 = argument + 2;
      while ( 1 )
      {
        v12 = *(v11 - 2);
        if ( !*(v11 - 2) )
          break;
        if ( !*(v11 - 1) || (v12 |= (__int64)*(v11 - 1) << 8, !*v11) || (v12 |= (__int64)*v11 << 16, !v11[1]) || (v12 |= (__int64)v11[1] << 24, !v11[2]) || (v12 |= (__int64)v11[2] << 32, !v11[3]) || (v12 |= (__int64)v11[3] << 40, !v11[4]) || (v12 |= (__int64)v11[4] << 48, (v13 = v11[5]) == 0) )
        {
          *v6 = v12;
          ++*destination;
          return;
        }
        v11 += 8;
        *v6 = v12 | (v13 << 56);
        v6 = ++*destination;
        if ( *destination >= limit )
          return;
      }
      *v6 = 0i64;
      ++*destination;
    }
  }
  else if ( v6 < limit )
  {
    do
    {
      v7 = *(_QWORD *)v4;
      v4 += 8;
      *v6 = v7;
      v6 = *destination + 1;
      *destination = v6;
      v8 = 0;
      if ( (v7 & 0xFF0000000000i64) != 0 )
        v8 = (v7 & 0xFF000000000000i64) != 0 && (v7 & 0xFF00000000000000ui64) != 0;
      v9 = 0;
      if ( (v7 & 0xFF000000) != 0 )
        v9 = (v7 & 0xFF00000000i64) != 0 && v8;
      v10 = 0;
      if ( (v7 & 0xFF00) != 0 )
        v10 = (v7 & 0xFF0000) != 0 && v9;
    }
    while ( v10 && (_BYTE)v7 != 0 && v6 < limit );
  }
}

