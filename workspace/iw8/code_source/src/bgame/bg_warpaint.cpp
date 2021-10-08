/*
==============
BG_WarPaint_EncodeClientLoadout
==============
*/

unsigned __int16 __fastcall BG_WarPaint_EncodeClientLoadout(const unsigned int client, const unsigned int uniqueClient, const unsigned int paintId)
{
  return ?BG_WarPaint_EncodeClientLoadout@@YAGIII@Z(client, uniqueClient, paintId);
}

/*
==============
BG_WarPaint_DecodeClientLoadout
==============
*/

void __fastcall BG_WarPaint_DecodeClientLoadout(unsigned __int16 clientLoadout, unsigned int *outClient, unsigned int *outUniqueClient, unsigned int *outPaintId)
{
  ?BG_WarPaint_DecodeClientLoadout@@YAXGPEAI00@Z(clientLoadout, outClient, outUniqueClient, outPaintId);
}

/*
==============
BG_WarPaint_DecodeClientLoadout
==============
*/
void BG_WarPaint_DecodeClientLoadout(unsigned __int16 clientLoadout, unsigned int *outClient, unsigned int *outUniqueClient, unsigned int *outPaintId)
{
  unsigned int v8; 

  if ( !outClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_warpaint.cpp", 13, ASSERT_TYPE_ASSERT, "(outClient)", (const char *)&queryFormat, "outClient") )
    __debugbreak();
  if ( !outUniqueClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_warpaint.cpp", 14, ASSERT_TYPE_ASSERT, "(outUniqueClient)", (const char *)&queryFormat, "outUniqueClient") )
    __debugbreak();
  if ( !outPaintId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_warpaint.cpp", 15, ASSERT_TYPE_ASSERT, "(outPaintId)", (const char *)&queryFormat, "outPaintId") )
    __debugbreak();
  v8 = (unsigned __int16)(clientLoadout - 1);
  *outPaintId = ((_BYTE)clientLoadout - 1) & 0x3F;
  *outUniqueClient = (v8 >> 6) & 0x1F;
  *outClient = v8 >> 11;
}

/*
==============
BG_WarPaint_EncodeClientLoadout
==============
*/
__int64 BG_WarPaint_EncodeClientLoadout(const unsigned int client, const unsigned int uniqueClient, const unsigned int paintId)
{
  unsigned __int16 v6; 
  __int16 v7; 
  unsigned __int16 v8; 
  int v9; 
  int v10; 
  unsigned __int16 v11; 

  v6 = truncate_cast<unsigned short,unsigned int>(paintId);
  v7 = truncate_cast<unsigned short,unsigned int>(uniqueClient << 6) + v6;
  v8 = v7 + truncate_cast<unsigned short,unsigned int>(client << 11);
  v9 = v8 & 0x3F;
  v10 = (v8 >> 6) & 0x1F;
  v11 = v8 + 1;
  if ( v8 >> 11 != client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_warpaint.cpp", 44, ASSERT_TYPE_ASSERT, "(testClient == client)", (const char *)&queryFormat, "testClient == client") )
    __debugbreak();
  if ( v10 != uniqueClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_warpaint.cpp", 45, ASSERT_TYPE_ASSERT, "(testUniqueClient == uniqueClient)", (const char *)&queryFormat, "testUniqueClient == uniqueClient") )
    __debugbreak();
  if ( v9 != paintId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_warpaint.cpp", 46, ASSERT_TYPE_ASSERT, "(testPaintId == paintId)", (const char *)&queryFormat, "testPaintId == paintId") )
    __debugbreak();
  return v11;
}

