/*
==============
VoiceCodec_Init
==============
*/

void VoiceCodec_Init(void)
{
  ?VoiceCodec_Init@@YAXXZ();
}

/*
==============
VoiceCodec_Decode_SampleFloat
==============
*/

int __fastcall VoiceCodec_Decode_SampleFloat(unsigned int decoderIndex, const unsigned __int8 *buffer, int maxLength, float *out, int frame_size)
{
  return ?VoiceCodec_Decode_SampleFloat@@YAHIPEBEHPEAMH@Z(decoderIndex, buffer, maxLength, out, frame_size);
}

/*
==============
VoiceCodec_Encode_Allocate
==============
*/

bool __fastcall VoiceCodec_Encode_Allocate(LocalClientNum_t localClientNum, int quality)
{
  return ?VoiceCodec_Encode_Allocate@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, quality);
}

/*
==============
VoiceCodec_Decode_Sample
==============
*/

int __fastcall VoiceCodec_Decode_Sample(unsigned int decoderIndex, const unsigned __int8 *buffer, int maxLength, __int16 *out, int frame_size)
{
  return ?VoiceCodec_Decode_Sample@@YAHIPEBEHPEAFH@Z(decoderIndex, buffer, maxLength, out, frame_size);
}

/*
==============
VoiceCodec_Decode_Allocate
==============
*/

bool __fastcall VoiceCodec_Decode_Allocate(unsigned int decoderIndex)
{
  return ?VoiceCodec_Decode_Allocate@@YA_NI@Z(decoderIndex);
}

/*
==============
VoiceCodec_Encode_SampleFloat
==============
*/

int __fastcall VoiceCodec_Encode_SampleFloat(LocalClientNum_t localClientNum, const float *buffer_in, int samples_in, unsigned __int8 *buffer_out, int maxLength)
{
  return ?VoiceCodec_Encode_SampleFloat@@YAHW4LocalClientNum_t@@PEBMHPEAEH@Z(localClientNum, buffer_in, samples_in, buffer_out, maxLength);
}

/*
==============
VoiceCodec_Shutdown
==============
*/

void VoiceCodec_Shutdown(void)
{
  ?VoiceCodec_Shutdown@@YAXXZ();
}

/*
==============
VoiceCodec_Encode_Sample
==============
*/

int __fastcall VoiceCodec_Encode_Sample(LocalClientNum_t localClientNum, const __int16 *buffer_in, int samples_in, unsigned __int8 *buffer_out, int maxLength)
{
  return ?VoiceCodec_Encode_Sample@@YAHW4LocalClientNum_t@@PEBFHPEAEH@Z(localClientNum, buffer_in, samples_in, buffer_out, maxLength);
}

/*
==============
VoiceCodec_Decode_Allocate
==============
*/
bool VoiceCodec_Decode_Allocate(unsigned int decoderIndex)
{
  __int64 v1; 
  bool v2; 
  OpusDecoder **v3; 
  int v6; 

  v1 = decoderIndex;
  if ( decoderIndex >= 5 )
  {
    v6 = 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( decoderIndex ) < (unsigned)( ( sizeof( *array_counter( s_decoder ) ) + 0 ) )", "decoderIndex doesn't index ARRAY_COUNT( s_decoder )\n\t%i not in [0, %i)", decoderIndex, v6) )
      __debugbreak();
  }
  v2 = s_decoder[v1] == NULL;
  v3 = &s_decoder[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 185, ASSERT_TYPE_ASSERT, "(s_decoder[decoderIndex] != 0)", (const char *)&queryFormat, "s_decoder[decoderIndex] != NULL") )
    __debugbreak();
  return j_opus_decoder_init(*v3, 16000, 1) == 0;
}

/*
==============
VoiceCodec_Decode_Sample
==============
*/
int VoiceCodec_Decode_Sample(unsigned int decoderIndex, const unsigned __int8 *buffer, int maxLength, __int16 *out, int frame_size)
{
  __int64 v5; 
  __int64 decode_fec; 

  v5 = decoderIndex;
  if ( decoderIndex >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( decoderIndex ) < (unsigned)( ( sizeof( *array_counter( s_decoder ) ) + 0 ) )", "decoderIndex doesn't index ARRAY_COUNT( s_decoder )\n\t%i not in [0, %i)", decoderIndex, 5) )
    __debugbreak();
  if ( !s_decoder[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 199, ASSERT_TYPE_ASSERT, "(s_decoder[decoderIndex] != 0)", (const char *)&queryFormat, "s_decoder[decoderIndex] != NULL") )
    __debugbreak();
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 202, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  if ( frame_size <= 0 )
  {
    LODWORD(decode_fec) = frame_size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 203, ASSERT_TYPE_ASSERT, "( ( frame_size > 0 ) )", "( frame_size ) = %i", decode_fec) )
      __debugbreak();
  }
  return j_opus_decode(s_decoder[v5], buffer, maxLength, out, frame_size, 0);
}

/*
==============
VoiceCodec_Decode_SampleFloat
==============
*/
int VoiceCodec_Decode_SampleFloat(unsigned int decoderIndex, const unsigned __int8 *buffer, int maxLength, float *out, int frame_size)
{
  __int64 v5; 
  __int64 decode_fec; 

  v5 = decoderIndex;
  if ( decoderIndex >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 213, ASSERT_TYPE_ASSERT, "(unsigned)( decoderIndex ) < (unsigned)( ( sizeof( *array_counter( s_decoder ) ) + 0 ) )", "decoderIndex doesn't index ARRAY_COUNT( s_decoder )\n\t%i not in [0, %i)", decoderIndex, 5) )
    __debugbreak();
  if ( !s_decoder[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 214, ASSERT_TYPE_ASSERT, "(s_decoder[decoderIndex] != 0)", (const char *)&queryFormat, "s_decoder[decoderIndex] != NULL") )
    __debugbreak();
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 217, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  if ( frame_size <= 0 )
  {
    LODWORD(decode_fec) = frame_size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 218, ASSERT_TYPE_ASSERT, "( ( frame_size > 0 ) )", "( frame_size ) = %i", decode_fec) )
      __debugbreak();
  }
  return j_opus_decode_float(s_decoder[v5], buffer, maxLength, out, frame_size, 0);
}

/*
==============
VoiceCodec_Encode_Allocate
==============
*/
bool VoiceCodec_Encode_Allocate(LocalClientNum_t localClientNum, int quality)
{
  __int64 v2; 
  bool v4; 
  OpusEncoder **v5; 
  unsigned int EncodeBitrate; 
  bool result; 
  int v9; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 115, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_encoder ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_encoder )\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  v4 = s_encoder[v2] == NULL;
  v5 = &s_encoder[v2];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 116, ASSERT_TYPE_ASSERT, "(s_encoder[localClientNum] != 0)", (const char *)&queryFormat, "s_encoder[localClientNum] != NULL") )
    __debugbreak();
  result = 0;
  if ( !j_opus_encoder_init(*v5, 16000, 1, 2048) && !j_opus_encoder_ctl(*v5, 4024, 3001i64) )
  {
    VoiceCodec_GetEncodeBitrate(quality);
    EncodeBitrate = VoiceCodec_GetEncodeBitrate(quality);
    if ( !j_opus_encoder_ctl(*v5, 4002, EncodeBitrate) && !j_opus_encoder_ctl(*v5, 4010, 0i64) && !j_opus_encoder_ctl(*v5, 4004, 1103i64) && !j_opus_encoder_ctl(*v5, 4036, 16i64) )
      return 1;
  }
  return result;
}

/*
==============
VoiceCodec_Encode_Sample
==============
*/
int VoiceCodec_Encode_Sample(LocalClientNum_t localClientNum, const __int16 *buffer_in, int samples_in, unsigned __int8 *buffer_out, int maxLength)
{
  __int64 v5; 
  __int64 v10; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_encoder ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_encoder )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_encoder[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 155, ASSERT_TYPE_ASSERT, "(s_encoder[localClientNum] != 0)", (const char *)&queryFormat, "s_encoder[localClientNum] != NULL") )
    __debugbreak();
  if ( !buffer_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 156, ASSERT_TYPE_ASSERT, "(buffer_in)", (const char *)&queryFormat, "buffer_in") )
    __debugbreak();
  if ( samples_in <= 0 )
  {
    LODWORD(v10) = samples_in;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 157, ASSERT_TYPE_ASSERT, "( ( samples_in > 0 ) )", "( samples_in ) = %i", v10) )
      __debugbreak();
  }
  if ( !buffer_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 158, ASSERT_TYPE_ASSERT, "(buffer_out)", (const char *)&queryFormat, "buffer_out") )
    __debugbreak();
  if ( maxLength <= 0 )
  {
    LODWORD(v10) = maxLength;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 159, ASSERT_TYPE_ASSERT, "( ( maxLength > 0 ) )", "( maxLength ) = %i", v10) )
      __debugbreak();
  }
  return j_opus_encode(s_encoder[v5], buffer_in, samples_in, buffer_out, maxLength);
}

/*
==============
VoiceCodec_Encode_SampleFloat
==============
*/
int VoiceCodec_Encode_SampleFloat(LocalClientNum_t localClientNum, const float *buffer_in, int samples_in, unsigned __int8 *buffer_out, int maxLength)
{
  __int64 v5; 
  __int64 v10; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_encoder ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_encoder )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_encoder[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 170, ASSERT_TYPE_ASSERT, "(s_encoder[localClientNum] != 0)", (const char *)&queryFormat, "s_encoder[localClientNum] != NULL") )
    __debugbreak();
  if ( !buffer_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 171, ASSERT_TYPE_ASSERT, "(buffer_in)", (const char *)&queryFormat, "buffer_in") )
    __debugbreak();
  if ( samples_in <= 0 )
  {
    LODWORD(v10) = samples_in;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 172, ASSERT_TYPE_ASSERT, "( ( samples_in > 0 ) )", "( samples_in ) = %i", v10) )
      __debugbreak();
  }
  if ( !buffer_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 173, ASSERT_TYPE_ASSERT, "(buffer_out)", (const char *)&queryFormat, "buffer_out") )
    __debugbreak();
  if ( maxLength <= 0 )
  {
    LODWORD(v10) = maxLength;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 174, ASSERT_TYPE_ASSERT, "( ( maxLength > 0 ) )", "( maxLength ) = %i", v10) )
      __debugbreak();
  }
  return j_opus_encode_float(s_encoder[v5], buffer_in, samples_in, buffer_out, maxLength);
}

/*
==============
VoiceCodec_GetEncodeBitrate
==============
*/
__int64 VoiceCodec_GetEncodeBitrate(int quality)
{
  __int64 result; 

  switch ( quality )
  {
    case 1:
      goto $LN4_162;
    case 2:
      result = 6000i64;
      break;
    case 3:
    case 4:
      result = 8000i64;
      break;
    case 5:
    case 6:
      result = 11000i64;
      break;
    case 7:
    case 8:
      result = 15000i64;
      break;
    case 9:
    case 10:
      result = 20000i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 63, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnknown quality %d", "false", quality) )
        __debugbreak();
$LN4_162:
      result = 4000i64;
      break;
  }
  return result;
}

/*
==============
VoiceCodec_Init
==============
*/
void VoiceCodec_Init(void)
{
  unsigned int v0; 
  unsigned __int8 *v1; 
  unsigned int v2; 
  OpusEncoder **v3; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  OpusDecoder **v6; 
  OpusDecoder *v7; 

  if ( s_encoder[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 72, ASSERT_TYPE_ASSERT, "(s_encoder[0] == 0)", (const char *)&queryFormat, "s_encoder[0] == NULL") )
    __debugbreak();
  if ( j_opus_encoder_get_size(1) != 43572 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 73, ASSERT_TYPE_ASSERT, "(s_opusEncoderSize == opus_encoder_get_size( 1 ))", (const char *)&queryFormat, "s_opusEncoderSize == opus_encoder_get_size( VOICE_CODEC_CHANNELS )") )
    __debugbreak();
  v0 = 0;
  v1 = s_opusEncoderMemory;
  v2 = 0;
  v3 = &s_encoder[1];
  do
  {
    *(v3 - 1) = (OpusEncoder *)v1;
    v3 += 2;
    v4 = v1 + 43572;
    v2 += 2;
    *(v3 - 2) = (OpusEncoder *)v4;
    v1 = v4 + 43572;
  }
  while ( v2 < 2 );
  if ( s_decoder[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 83, ASSERT_TYPE_ASSERT, "(s_decoder[0] == 0)", (const char *)&queryFormat, "s_decoder[0] == NULL") )
    __debugbreak();
  if ( j_opus_decoder_get_size(1) != 18228 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 84, ASSERT_TYPE_ASSERT, "(s_opusDecoderSize == opus_decoder_get_size( 1 ))", (const char *)&queryFormat, "s_opusDecoderSize == opus_decoder_get_size( VOICE_CODEC_CHANNELS )") )
    __debugbreak();
  v5 = &s_opusDecoderMemory[36456];
  v6 = &s_decoder[1];
  do
  {
    v6[1] = (OpusDecoder *)v5;
    *(v6 - 1) = (OpusDecoder *)(v5 - 36456);
    v6 += 5;
    v0 += 5;
    *(v6 - 5) = (OpusDecoder *)(v5 - 18228);
    *(v6 - 3) = (OpusDecoder *)(v5 + 18228);
    v7 = (OpusDecoder *)(v5 + 36456);
    v5 += 91140;
    *(v6 - 2) = v7;
  }
  while ( v0 < 5 );
}

/*
==============
VoiceCodec_Shutdown
==============
*/
void VoiceCodec_Shutdown(void)
{
  OpusEncoder **v0; 
  unsigned int v1; 
  unsigned int v2; 
  OpusDecoder **v3; 

  if ( !s_encoder[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 98, ASSERT_TYPE_ASSERT, "(s_encoder[0] != 0)", (const char *)&queryFormat, "s_encoder[0] != NULL") )
    __debugbreak();
  if ( !s_decoder[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_codec_opus.cpp", 99, ASSERT_TYPE_ASSERT, "(s_decoder[0] != 0)", (const char *)&queryFormat, "s_decoder[0] != NULL") )
    __debugbreak();
  v0 = &s_encoder[1];
  v1 = 0;
  do
  {
    v1 += 2;
    *(v0 - 1) = NULL;
    *v0 = NULL;
    v0 += 2;
  }
  while ( v1 < 2 );
  v2 = 0;
  v3 = &s_decoder[1];
  do
  {
    v2 += 5;
    *(v3 - 1) = NULL;
    *v3 = NULL;
    v3[1] = NULL;
    v3[2] = NULL;
    v3[3] = NULL;
    v3 += 5;
  }
  while ( v2 < 5 );
}

