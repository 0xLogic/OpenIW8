/*
==============
XAnimAnalogClock::GetSpringBoneTransform
==============
*/

void __fastcall XAnimAnalogClock::GetSpringBoneTransform(XAnimAnalogClock *this, const XAnimCalcAnimInfo *animCalcInfo, const XAnimCalcBuffer *buffer, float springScale, ClockBones clockBone, float4 *outLocalQuat, float4 *outLocalTrans)
{
  ?GetSpringBoneTransform@XAnimAnalogClock@@QEBAXPEBUXAnimCalcAnimInfo@@PEBUXAnimCalcBuffer@@MW4ClockBones@@PEAUfloat4@@3@Z(this, animCalcInfo, buffer, springScale, clockBone, outLocalQuat, outLocalTrans);
}

/*
==============
XAnimAnalogClock::Reset
==============
*/

void __fastcall XAnimAnalogClock::Reset(XAnimAnalogClock *this)
{
  ?Reset@XAnimAnalogClock@@QEAAXXZ(this);
}

/*
==============
XAnimAnalogClock_Register
==============
*/

void XAnimAnalogClock_Register(void)
{
  ?XAnimAnalogClock_Register@@YAXXZ();
}

/*
==============
XAnimAnalogClock::GetBoneTransform
==============
*/

void __fastcall XAnimAnalogClock::GetBoneTransform(XAnimAnalogClock *this, const XAnimCalcAnimInfo *animCalcInfo, const XAnimCalcBuffer *buffer, float springScale, ClockBones clockBone, float4 *outLocalQuat, float4 *outLocalTrans)
{
  ?GetBoneTransform@XAnimAnalogClock@@QEBAXPEBUXAnimCalcAnimInfo@@PEBUXAnimCalcBuffer@@MW4ClockBones@@PEAUfloat4@@3@Z(this, animCalcInfo, buffer, springScale, clockBone, outLocalQuat, outLocalTrans);
}

/*
==============
XAnimAnalogClock_Init
==============
*/
void XAnimAnalogClock_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_QWORD *)nodeData = 0i64;
  *((_QWORD *)nodeData + 1) = 0i64;
  *((_QWORD *)nodeData + 2) = 0i64;
  *((_DWORD *)nodeData + 6) = 16646398;
  *((_DWORD *)nodeData + 7) = 16646398;
  *((_DWORD *)nodeData + 8) = 16646398;
  *((_DWORD *)nodeData + 9) = 16646398;
  *((_DWORD *)nodeData + 10) = 16646398;
  *((_DWORD *)nodeData + 11) = 16646398;
  *((_DWORD *)nodeData + 12) = 16777470;
}

/*
==============
XAnimAnalogClock_Destroy
==============
*/
void XAnimAnalogClock_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimAnalogClock_Update
==============
*/
void XAnimAnalogClock_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 82, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 83, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 84, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !*((_BYTE *)nodeData + 51) )
  {
    *(_QWORD *)nodeData = 0i64;
    *((_QWORD *)nodeData + 1) = 0i64;
    *((_QWORD *)nodeData + 2) = 0i64;
    *((_DWORD *)nodeData + 6) = 16646398;
    *((_DWORD *)nodeData + 7) = 16646398;
    *((_DWORD *)nodeData + 8) = 16646398;
    *((_DWORD *)nodeData + 9) = 16646398;
    *((_DWORD *)nodeData + 10) = 16646398;
    *((_DWORD *)nodeData + 11) = 16646398;
    *((_DWORD *)nodeData + 12) = 16777470;
  }
}

/*
==============
XAnimAnalogClock_Calc
==============
*/
void XAnimAnalogClock_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v7; 
  XAnimCalcBuffer *v8; 
  XAnimCalcAnimInfo *v10; 
  int v12; 
  scr_string_t **v13; 
  __int64 v14; 
  _WORD *v15; 
  __int64 v16; 
  char v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  unsigned __int16 *v21; 
  unsigned __int64 v22; 
  bool v23; 
  const float4 *fmt; 
  float4 *outLocalQuat; 
  float4 *outLocalQuata; 
  float4 *outLocalTrans; 
  int outModelIndex[4]; 
  float4 v29; 
  float4 v30; 

  v7 = DCONST_DVARBOOL_xanim_disableAnalogClockNodes;
  v8 = destBuffer;
  v29.v.m128_u64[0] = (unsigned __int64)animCalcInfo;
  v10 = animCalcInfo;
  v30.v.m128_u64[0] = (unsigned __int64)destBuffer;
  if ( !DCONST_DVARBOOL_xanim_disableAnalogClockNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableAnalogClockNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled && *((_BYTE *)nodeData + 51) )
  {
    v12 = 0;
    if ( obj == *((const DObj **)nodeData + 2) )
    {
      v17 = *((_BYTE *)nodeData + 50);
    }
    else
    {
      *((_QWORD *)nodeData + 2) = obj;
      v13 = (scr_string_t **)s_boneName;
      v14 = 0i64;
      v15 = (char *)nodeData + 24;
      v16 = 13i64;
      do
      {
        *v15 = 254;
        DObjGetBoneAndModelIndexClient(obj, **v13, (unsigned __int16 *)((char *)nodeData + v14 + 24), outModelIndex);
        v14 += 2i64;
        ++v15;
        ++v13;
        --v16;
      }
      while ( v16 );
      v8 = (XAnimCalcBuffer *)v30.v.m128_u64[0];
      v10 = (XAnimCalcAnimInfo *)v29.v.m128_u64[0];
      v17 = (unsigned __int16)(*((_WORD *)nodeData + 16) - 254) > 1u;
      *((_BYTE *)nodeData + 50) = v17;
    }
    v18 = FLOAT_1_0;
    if ( v17 )
    {
      v19 = sinf_0(*((float *)nodeData + 3) * 6.2831855);
      v20 = DCONST_DVARFLT_xanim_analogClock_springScaleFactor;
      if ( !DCONST_DVARFLT_xanim_analogClock_springScaleFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_analogClock_springScaleFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      v18 = 1.0 - (float)(v19 * v20->current.value);
    }
    v21 = (unsigned __int16 *)((char *)nodeData + 24);
    do
    {
      v22 = *v21;
      if ( (unsigned int)(v22 - 254) > 1 )
      {
        if ( (unsigned __int8)((unsigned int)v22 >> 15) )
        {
          v23 = (v10->ignorePartBits.array[7] & 2) != 0;
        }
        else
        {
          if ( (unsigned int)v22 >= 0x100 )
          {
            LODWORD(outLocalTrans) = 256;
            LODWORD(outLocalQuat) = *v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outLocalQuat, outLocalTrans) )
              __debugbreak();
          }
          v23 = ((0x80000000 >> (v22 & 0x1F)) & v10->ignorePartBits.array[v22 >> 5]) != 0;
        }
        if ( !v23 )
        {
          XAnimSetPartBit(&v10->animPartBits, v22);
          XAnimAnalogClock::GetBoneTransform((XAnimAnalogClock *)nodeData, v10, v8, v18, (ClockBones)v12, &v29, &v30);
          XAnimSetParentRelativeBoneTransform(v10, obj, v8, v22, fmt, outLocalQuata, weightScale);
        }
      }
      ++v12;
      ++v21;
    }
    while ( v12 < 13 );
  }
}

/*
==============
XAnimAnalogClock_Read
==============
*/
void XAnimAnalogClock_Read(void *nodeData, MemoryFile *memFile)
{
  *(_QWORD *)nodeData = 0i64;
  *((_QWORD *)nodeData + 1) = 0i64;
  *((_QWORD *)nodeData + 2) = 0i64;
  *((_DWORD *)nodeData + 6) = 16646398;
  *((_DWORD *)nodeData + 7) = 16646398;
  *((_DWORD *)nodeData + 8) = 16646398;
  *((_DWORD *)nodeData + 9) = 16646398;
  *((_DWORD *)nodeData + 10) = 16646398;
  *((_DWORD *)nodeData + 11) = 16646398;
  *((_DWORD *)nodeData + 12) = 16777470;
}

/*
==============
XAnimAnalogClock_Write
==============
*/
void XAnimAnalogClock_Write(void *nodeData, MemoryFile *memFile)
{
  ;
}

/*
==============
XAnimAnalogClock_PostParse
==============
*/
char XAnimAnalogClock_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimAnalogClock_PrintDebug
==============
*/
void XAnimAnalogClock_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  __int64 v10; 
  const dvar_t *v11; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 180, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 181, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 182, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 183, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 184, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( depth > 0 )
  {
    v10 = (unsigned int)depth;
    do
    {
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
      --v10;
    }
    while ( v10 );
  }
  v11 = DCONST_DVARBOOL_xanim_disableAnalogClockNodes;
  if ( !DCONST_DVARBOOL_xanim_disableAnalogClockNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableAnalogClockNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5OFF\n");
  else
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5hour: %.2f, minute: %.2f, second: %.2f\n", (float)(*(float *)nodeData * -0.033333335), (float)(*((float *)nodeData + 1) * -0.16666667), (float)(*((float *)nodeData + 2) * -0.16666667));
}

/*
==============
XAnimAnalogClock::GetBoneTransform
==============
*/
void XAnimAnalogClock::GetBoneTransform(XAnimAnalogClock *this, const XAnimCalcAnimInfo *animCalcInfo, const XAnimCalcBuffer *buffer, float springScale, ClockBones clockBone, float4 *outLocalQuat, float4 *outLocalTrans)
{
  float clockOscillationFraction; 
  const dvar_t *v20; 
  const float4 *v23; 
  float4 *v24; 

  if ( (unsigned int)clockBone >= COUNT_CLOCKHAND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( clockBone ) < (unsigned)( COUNT_CLOCKHAND )", "clockBone doesn't index COUNT_CLOCKHAND\n\t%i not in [0, %i)", clockBone, 13) )
    __debugbreak();
  if ( !outLocalQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 280, ASSERT_TYPE_ASSERT, "(outLocalQuat)", (const char *)&queryFormat, "outLocalQuat") )
    __debugbreak();
  if ( !outLocalTrans && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 281, ASSERT_TYPE_ASSERT, "(outLocalTrans)", (const char *)&queryFormat, "outLocalTrans") )
    __debugbreak();
  switch ( clockBone )
  {
    case CLOCKHAND_HOUR:
      _XMM0 = 0i64;
      __asm { vinsertps xmm0, xmm0, dword ptr [rsi], 10h }
      _XMM0.v = _mm128_mul_ps(_XMM0, g_degreeToRadian.v);
      Float4RadianToQuat((float4 *)this, (const float4 *)0x140000000i64);
      goto LABEL_27;
    case CLOCKHAND_MINUTE:
      _XMM0 = 0i64;
      __asm { vinsertps xmm0, xmm0, dword ptr [rsi+4], 10h }
      _XMM0.v = _mm128_mul_ps(_XMM0, g_degreeToRadian.v);
      Float4RadianToQuat((float4 *)this, (const float4 *)0x140000000i64);
      goto LABEL_27;
    case CLOCKHAND_SECOND:
      _XMM0 = 0i64;
      __asm { vinsertps xmm0, xmm0, dword ptr [rsi+8], 10h }
      _XMM0.v = _mm128_mul_ps(_XMM0, g_degreeToRadian.v);
      Float4RadianToQuat((float4 *)this, (const float4 *)0x140000000i64);
      goto LABEL_27;
    case CLOCKHAND_BALANCEWHEEL:
      clockOscillationFraction = this->clockOscillationFraction;
      if ( !outLocalQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 239, ASSERT_TYPE_ASSERT, "(outLocalQuat)", (const char *)&queryFormat, "outLocalQuat") )
        __debugbreak();
      if ( clockOscillationFraction < 0.0 || clockOscillationFraction > 1.0 )
      {
        __asm { vxorpd  xmm1, xmm1, xmm1 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 240, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( oscillationFraction ) && ( oscillationFraction ) <= ( 1.0f )", "oscillationFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", clockOscillationFraction, *(double *)&_XMM1, DOUBLE_1_0) )
          __debugbreak();
      }
      sinf_0(clockOscillationFraction * 6.2831855);
      v20 = DCONST_DVARFLT_xanim_analogClock_balanceWheelMaxHalfAngleDeg;
      if ( !DCONST_DVARFLT_xanim_analogClock_balanceWheelMaxHalfAngleDeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_analogClock_balanceWheelMaxHalfAngleDeg") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      _XMM1 = 0i64;
      __asm { vinsertps xmm1, xmm1, xmm0, 10h }
      _XMM0.v = _mm128_mul_ps(_XMM1, g_degreeToRadian.v);
      Float4RadianToQuat(v24, v23);
      goto LABEL_27;
    case CLOCKHAND_SPRING_0:
    case CLOCKHAND_SPRING_1:
    case CLOCKHAND_SPRING_2:
    case CLOCKHAND_SPRING_3:
    case CLOCKHAND_SPRING_4:
    case CLOCKHAND_SPRING_5:
    case CLOCKHAND_SPRING_6:
    case CLOCKHAND_SPRING_7:
      XAnimAnalogClock::GetSpringBoneTransform(this, animCalcInfo, buffer, springScale, clockBone, outLocalQuat, outLocalTrans);
      return;
    default:
      _XMM0 = LODWORD(quat_identity.v[0]);
      __asm
      {
        vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4, 10h; vec4_t const quat_identity
        vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8, 20h ; ' '; vec4_t const quat_identity
        vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch, 30h ; '0'; vec4_t const quat_identity
      }
LABEL_27:
      *outLocalQuat = (float4)_XMM0.v;
      *outLocalTrans = 0i64;
      return;
  }
}

/*
==============
XAnimAnalogClock::GetSpringBoneTransform
==============
*/

void __fastcall XAnimAnalogClock::GetSpringBoneTransform(XAnimAnalogClock *this, const XAnimCalcAnimInfo *animCalcInfo, const XAnimCalcBuffer *buffer, double springScale, ClockBones clockBone, float4 *outLocalQuat, float4 *outLocalTrans)
{
  float4 v14; 
  int v15; 

  if ( (unsigned int)clockBone >= COUNT_CLOCKHAND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( clockBone ) < (unsigned)( COUNT_CLOCKHAND )", "clockBone doesn't index COUNT_CLOCKHAND\n\t%i not in [0, %i)", clockBone, 13) )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 252, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !this->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 253, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 254, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !outLocalQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 255, ASSERT_TYPE_ASSERT, "(outLocalQuat)", (const char *)&queryFormat, "outLocalQuat") )
    __debugbreak();
  if ( !outLocalTrans && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 256, ASSERT_TYPE_ASSERT, "(outLocalTrans)", (const char *)&queryFormat, "outLocalTrans") )
    __debugbreak();
  if ( this->isSpringRootPresent )
  {
    v15 = this->boneIndex[clockBone];
    if ( v15 == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 266, ASSERT_TYPE_ASSERT, "(springBoneIndex != 254)", (const char *)&queryFormat, "springBoneIndex != UNDEFINED_BONEINDEX") )
      __debugbreak();
    if ( v15 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 267, ASSERT_TYPE_ASSERT, "(springBoneIndex != 255)", (const char *)&queryFormat, "springBoneIndex != NO_BONEINDEX") )
      __debugbreak();
    XAnimGetParentRelativeBoneTransform(animCalcInfo, this->obj, buffer, v15, outLocalQuat, outLocalTrans);
    v14.v = _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&springScale, *(__m128 *)&springScale, 0), outLocalTrans->v);
  }
  else
  {
    _XMM0 = LODWORD(quat_identity.v[0]);
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4, 10h; vec4_t const quat_identity
      vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8, 20h ; ' '; vec4_t const quat_identity
      vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch, 30h ; '0'; vec4_t const quat_identity
    }
    *outLocalQuat = (float4)_XMM0.v;
    v14.v = 0i64;
  }
  *outLocalTrans = (float4)v14.v;
}

/*
==============
XAnimAnalogClock::Reset
==============
*/
void XAnimAnalogClock::Reset(XAnimAnalogClock *this)
{
  *(_QWORD *)&this->clockHourAngle = 0i64;
  *(_QWORD *)&this->clockSecondAngle = 0i64;
  this->obj = NULL;
  *(_DWORD *)this->boneIndex = 16646398;
  *(_DWORD *)&this->boneIndex[2] = 16646398;
  *(_DWORD *)&this->boneIndex[4] = 16646398;
  *(_DWORD *)&this->boneIndex[6] = 16646398;
  *(_DWORD *)&this->boneIndex[8] = 16646398;
  *(_DWORD *)&this->boneIndex[10] = 16646398;
  *(_DWORD *)&this->boneIndex[12] = 16777470;
}

/*
==============
XAnimAnalogClock_Register
==============
*/
void XAnimAnalogClock_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimAnalogClock>::ms_typeInfo);
}

