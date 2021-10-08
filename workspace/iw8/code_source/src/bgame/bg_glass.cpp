/*
==============
BG_Glass_RecordChanges
==============
*/

void __fastcall BG_Glass_RecordChanges(const CG_GlassPieceChangeWithIndex *pieceChangeArray, const unsigned int pieceChangeCount)
{
  ?BG_Glass_RecordChanges@@YAXPEBUCG_GlassPieceChangeWithIndex@@I@Z(pieceChangeArray, pieceChangeCount);
}

/*
==============
BG_Glass_ReadChanges
==============
*/

unsigned int __fastcall BG_Glass_ReadChanges(msg_t *msg, CG_GlassPieceChangeWithIndex *pieceChangeArray, const unsigned int pieceChangeArraySize)
{
  return ?BG_Glass_ReadChanges@@YAIPEAUmsg_t@@PEAUCG_GlassPieceChangeWithIndex@@I@Z(msg, pieceChangeArray, pieceChangeArraySize);
}

/*
==============
BG_Glass_ReadChanges
==============
*/
__int64 BG_Glass_ReadChanges(msg_t *msg, CG_GlassPieceChangeWithIndex *pieceChangeArray, const unsigned int pieceChangeArraySize)
{
  bool v6; 
  bool v7; 
  unsigned int i; 
  __int64 Bits; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  CG_GlassPieceChangeWithIndex *v13; 
  __int64 v15; 
  unsigned int j; 
  __int64 v17; 
  __int64 v18; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 43, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->overflowed )
    return 0i64;
  v6 = MSG_ReadBit(msg) != 0;
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 52, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", "%s\n\tBad glass piece message (overflowed glassChangesSent)", "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  if ( !v6 )
    return 0i64;
  v7 = MSG_ReadBit(msg) != 0;
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 58, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", "%s\n\tBad glass piece message (overflowed separatePiecesSent)", "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  if ( v7 )
  {
    for ( i = 0; ; ++i )
    {
      Bits = MSG_ReadBits(msg, 0x10u);
      v10 = truncate_cast<unsigned int,__int64>(Bits);
      v11 = v10;
      if ( msg->overflowed )
      {
        LODWORD(v18) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 73, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", "%s\n\tBad glass piece message (overflowed piece index %i) in glass state", "!MSG_IsOverflowed( msg )", v18) )
          __debugbreak();
      }
      v12 = v11 < 0xFDF0;
      if ( v11 > 0xFDF0 )
      {
        LODWORD(v17) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 74, ASSERT_TYPE_ASSERT, "( ( pieceIndex <= 65008 ) )", "( pieceIndex ) = %i", v17) )
          __debugbreak();
        v12 = v11 < 0xFDF0;
      }
      if ( !v12 )
        break;
      if ( i > pieceChangeArraySize )
      {
        Com_PrintError(14, "BG_Glass_ReadChanges: Too many pieces received (%u) when separately sent\n", i);
        goto LABEL_25;
      }
      v13 = &pieceChangeArray[i];
      v13->pieceIndex = truncate_cast<unsigned short,unsigned int>(v11);
      BG_Glass_ReadPieceChange(msg, &v13->pieceChange);
    }
    goto LABEL_34;
  }
  v15 = MSG_ReadBits(msg, 0x10u);
  i = truncate_cast<unsigned int,__int64>(v15);
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 104, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", "%s\n\tBad glass piece message (overflowed piece count) in glass state", "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  if ( i <= pieceChangeArraySize )
  {
    for ( j = 0; j < i; ++pieceChangeArray )
    {
      pieceChangeArray->pieceIndex = truncate_cast<unsigned short,unsigned int>(j);
      BG_Glass_ReadPieceChange(msg, &pieceChangeArray->pieceChange);
      ++j;
    }
LABEL_34:
    if ( !msg->overflowed )
      return i;
    Com_PrintError(14, "BG_Glass_ReadChanges: Overflowed while reading pieces (%u)\n", i);
    goto LABEL_25;
  }
  Com_PrintError(14, "BG_Glass_ReadChanges: Invalid piece count (%u)\n", i);
LABEL_25:
  MSG_Discard(msg);
  return 0i64;
}

/*
==============
BG_Glass_ReadPieceChange
==============
*/
void BG_Glass_ReadPieceChange(msg_t *msg, CG_GlassPieceChange *pieceChange)
{
  __int64 Bits; 
  unsigned __int8 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !pieceChange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_glass.cpp", 27, ASSERT_TYPE_ASSERT, "(pieceChange)", (const char *)&queryFormat, "pieceChange") )
    __debugbreak();
  Bits = MSG_ReadBits(msg, 2u);
  v5 = truncate_cast<unsigned char,__int64>(Bits);
  pieceChange->state = v5;
  if ( v5 == 2 )
  {
    if ( MSG_ReadBit(msg) )
    {
      pieceChange->impactDir = MSG_ReadByte(msg);
      v6 = MSG_ReadBits(msg, 6u);
      pieceChange->impactPos[0] = truncate_cast<unsigned char,__int64>(v6);
      v7 = MSG_ReadBits(msg, 6u);
      pieceChange->impactPos[1] = truncate_cast<unsigned char,__int64>(v7);
    }
    else
    {
      *(_WORD *)&pieceChange->impactDir = 255;
      pieceChange->impactPos[1] = 0;
    }
  }
}

/*
==============
BG_Glass_RecordChanges
==============
*/
void BG_Glass_RecordChanges(const CG_GlassPieceChangeWithIndex *pieceChangeArray, const unsigned int pieceChangeCount)
{
  __int64 v3; 

  if ( pieceChangeCount )
  {
    v3 = pieceChangeCount;
    do
    {
      CG_Glass_RecordPieceChange(pieceChangeArray++);
      --v3;
    }
    while ( v3 );
  }
}

