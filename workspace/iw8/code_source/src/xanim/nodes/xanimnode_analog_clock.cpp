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
  const dvar_t *v9; 
  XAnimCalcBuffer *v10; 
  XAnimCalcAnimInfo *v12; 
  int v14; 
  scr_string_t **v15; 
  __int64 v16; 
  unsigned __int16 *boneIndex; 
  __int64 v18; 
  bool isSpringRootPresent; 
  const dvar_t *v23; 
  unsigned __int16 *v27; 
  unsigned __int64 v28; 
  bool v29; 
  const float4 *fmt; 
  float4 *outLocalQuat; 
  float4 *outLocalQuata; 
  float4 *outLocalTrans; 
  float outLocalTransa; 
  int outModelIndex[4]; 
  float4 v41; 
  float4 v42; 

  v9 = DCONST_DVARBOOL_xanim_disableAnalogClockNodes;
  v10 = destBuffer;
  v41.v.m128_u64[0] = (unsigned __int64)animCalcInfo;
  v12 = animCalcInfo;
  v42.v.m128_u64[0] = (unsigned __int64)destBuffer;
  _RSI = (XAnimAnalogClock *)nodeData;
  if ( !DCONST_DVARBOOL_xanim_disableAnalogClockNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableAnalogClockNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled && _RSI->initialized )
  {
    v14 = 0;
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_58], xmm7
    }
    if ( obj == _RSI->obj )
    {
      isSpringRootPresent = _RSI->isSpringRootPresent;
    }
    else
    {
      _RSI->obj = obj;
      v15 = (scr_string_t **)s_boneName;
      v16 = 0i64;
      boneIndex = _RSI->boneIndex;
      v18 = 13i64;
      do
      {
        *boneIndex = 254;
        DObjGetBoneAndModelIndexClient(obj, **v15, &_RSI->boneIndex[v16++], outModelIndex);
        ++boneIndex;
        ++v15;
        --v18;
      }
      while ( v18 );
      v10 = (XAnimCalcBuffer *)v42.v.m128_u64[0];
      v12 = (XAnimCalcAnimInfo *)v41.v.m128_u64[0];
      isSpringRootPresent = (unsigned __int16)(_RSI->boneIndex[4] - 254) > 1u;
      _RSI->isSpringRootPresent = isSpringRootPresent;
    }
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( isSpringRootPresent )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmulss  xmm0, xmm0, cs:__real@40c90fdb; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      v23 = DCONST_DVARFLT_xanim_analogClock_springScaleFactor;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARFLT_xanim_analogClock_springScaleFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_analogClock_springScaleFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vsubss  xmm7, xmm7, xmm0
      }
    }
    __asm { vmovss  xmm6, [rsp+0D8h+weightScale] }
    v27 = _RSI->boneIndex;
    do
    {
      v28 = *v27;
      if ( (unsigned int)(v28 - 254) > 1 )
      {
        if ( (unsigned __int8)((unsigned int)v28 >> 15) )
        {
          v29 = (v12->ignorePartBits.array[7] & 2) != 0;
        }
        else
        {
          if ( (unsigned int)v28 >= 0x100 )
          {
            LODWORD(outLocalTrans) = 256;
            LODWORD(outLocalQuat) = *v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outLocalQuat, outLocalTrans) )
              __debugbreak();
          }
          v29 = ((0x80000000 >> (v28 & 0x1F)) & v12->ignorePartBits.array[v28 >> 5]) != 0;
        }
        if ( !v29 )
        {
          XAnimSetPartBit(&v12->animPartBits, v28);
          __asm { vmovaps xmm3, xmm7; springScale }
          XAnimAnalogClock::GetBoneTransform(_RSI, v12, v10, *(float *)&_XMM3, (ClockBones)v14, &v41, &v42);
          __asm
          {
            vmovups xmm1, xmmword ptr [rsp+0D8h+var_78.v]
            vmovups xmm0, xmmword ptr [rsp+0D8h+var_88.v]
            vmovss  dword ptr [rsp+0D8h+outLocalTrans], xmm6
          }
          XAnimSetParentRelativeBoneTransform(v12, obj, v10, v28, fmt, outLocalQuata, outLocalTransa);
        }
      }
      ++v14;
      ++v27;
    }
    while ( v14 < 13 );
    __asm
    {
      vmovaps xmm7, [rsp+0D8h+var_58]
      vmovaps xmm6, [rsp+0D8h+var_48]
    }
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
  char *fmt; 
  double v22; 
  double v23; 

  v6 = size;
  _R15 = nodeData;
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
  {
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5OFF\n");
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+8]
      vmulss  xmm0, xmm0, cs:__real@be2aaaab
      vmovss  xmm1, dword ptr [r15+4]
      vmulss  xmm2, xmm1, cs:__real@be2aaaab
      vcvtss2sd xmm4, xmm0, xmm0
      vmovss  xmm0, dword ptr [r15]
      vmulss  xmm1, xmm0, cs:__real@bd088889
      vcvtss2sd xmm3, xmm2, xmm2
      vmovsd  [rsp+58h+var_28], xmm4
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+58h+var_30], xmm3
      vmovsd  [rsp+58h+fmt], xmm2
    }
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5hour: %.2f, minute: %.2f, second: %.2f\n", *(double *)&fmt, v22, v23);
  }
}

/*
==============
XAnimAnalogClock::GetBoneTransform
==============
*/

void __fastcall XAnimAnalogClock::GetBoneTransform(XAnimAnalogClock *this, const XAnimCalcAnimInfo *animCalcInfo, const XAnimCalcBuffer *buffer, double springScale, ClockBones clockBone, float4 *outLocalQuat, float4 *outLocalTrans)
{
  bool v24; 
  bool v25; 
  const dvar_t *v30; 
  const float4 *v35; 
  float4 *v36; 
  float4 *v43; 
  float4 *v44; 
  double v45; 

  _RBX = outLocalQuat;
  _RDI = outLocalTrans;
  _RSI = this;
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)clockBone >= COUNT_CLOCKHAND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( clockBone ) < (unsigned)( COUNT_CLOCKHAND )", "clockBone doesn't index COUNT_CLOCKHAND\n\t%i not in [0, %i)", clockBone, 13) )
    __debugbreak();
  if ( !outLocalQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 280, ASSERT_TYPE_ASSERT, "(outLocalQuat)", (const char *)&queryFormat, "outLocalQuat") )
    __debugbreak();
  if ( !outLocalTrans && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 281, ASSERT_TYPE_ASSERT, "(outLocalTrans)", (const char *)&queryFormat, "outLocalTrans") )
    __debugbreak();
  switch ( clockBone )
  {
    case CLOCKHAND_HOUR:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0; jumptable 0000000141909259 case 0
        vinsertps xmm0, xmm0, dword ptr [rsi], 10h
        vmulps  xmm0, xmm0, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
      }
      Float4RadianToQuat((float4 *)this, (const float4 *)0x140000000i64);
      goto LABEL_26;
    case CLOCKHAND_MINUTE:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0; jumptable 0000000141909259 case 1
        vinsertps xmm0, xmm0, dword ptr [rsi+4], 10h
        vmulps  xmm0, xmm0, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
      }
      Float4RadianToQuat((float4 *)this, (const float4 *)0x140000000i64);
      goto LABEL_26;
    case CLOCKHAND_SECOND:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0; jumptable 0000000141909259 case 2
        vinsertps xmm0, xmm0, dword ptr [rsi+8], 10h
        vmulps  xmm0, xmm0, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
      }
      Float4RadianToQuat((float4 *)this, (const float4 *)0x140000000i64);
      goto LABEL_26;
    case CLOCKHAND_BALANCEWHEEL:
      __asm { vmovss  xmm6, dword ptr [rsi+0Ch]; jumptable 0000000141909259 case 3 }
      v24 = outLocalQuat == NULL;
      if ( !outLocalQuat )
      {
        v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 239, ASSERT_TYPE_ASSERT, "(outLocalQuat)", (const char *)&queryFormat, "outLocalQuat");
        v24 = !v25;
        if ( v25 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
        vcomiss xmm6, cs:__real@3f800000
      }
      if ( !v24 )
      {
        __asm
        {
          vmovsd  xmm0, cs:__real@3ff0000000000000
          vmovsd  [rsp+88h+var_50], xmm0
          vxorpd  xmm1, xmm1, xmm1
          vmovsd  [rsp+88h+var_58], xmm1
          vcvtss2sd xmm2, xmm6, xmm6
          vmovsd  [rsp+88h+var_60], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 240, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( oscillationFraction ) && ( oscillationFraction ) <= ( 1.0f )", "oscillationFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v43, *(double *)&v44, v45) )
          __debugbreak();
      }
      __asm { vmulss  xmm0, xmm6, cs:__real@40c90fdb; X }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      v30 = DCONST_DVARFLT_xanim_analogClock_balanceWheelMaxHalfAngleDeg;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARFLT_xanim_analogClock_balanceWheelMaxHalfAngleDeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_analogClock_balanceWheelMaxHalfAngleDeg") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsi+28h]
        vxorps  xmm1, xmm1, xmm1
        vinsertps xmm1, xmm1, xmm0, 10h
        vmulps  xmm0, xmm1, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
      }
      Float4RadianToQuat(v36, v35);
      goto LABEL_26;
    case CLOCKHAND_SPRING_0:
    case CLOCKHAND_SPRING_1:
    case CLOCKHAND_SPRING_2:
    case CLOCKHAND_SPRING_3:
    case CLOCKHAND_SPRING_4:
    case CLOCKHAND_SPRING_5:
    case CLOCKHAND_SPRING_6:
    case CLOCKHAND_SPRING_7:
      __asm { vmovaps xmm3, xmm6; springScale }
      XAnimAnalogClock::GetSpringBoneTransform(_RSI, animCalcInfo, buffer, *(float *)&_XMM3, clockBone, outLocalQuat, outLocalTrans);
      goto LABEL_27;
    default:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; jumptable 0000000141909259 default case, case 4
        vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4, 10h; vec4_t const quat_identity
        vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8, 20h ; ' '; vec4_t const quat_identity
        vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch, 30h ; '0'; vec4_t const quat_identity
      }
LABEL_26:
      __asm
      {
        vmovups xmmword ptr [rbx], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rdi], xmm0
      }
LABEL_27:
      __asm { vmovaps xmm6, [rsp+88h+var_48] }
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
  int v19; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  _RBP = outLocalQuat;
  _RDI = outLocalTrans;
  __asm { vmovaps xmm6, xmm3 }
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
    v19 = this->boneIndex[clockBone];
    if ( v19 == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 266, ASSERT_TYPE_ASSERT, "(springBoneIndex != 254)", (const char *)&queryFormat, "springBoneIndex != UNDEFINED_BONEINDEX") )
      __debugbreak();
    if ( v19 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_analog_clock.cpp", 267, ASSERT_TYPE_ASSERT, "(springBoneIndex != 255)", (const char *)&queryFormat, "springBoneIndex != NO_BONEINDEX") )
      __debugbreak();
    XAnimGetParentRelativeBoneTransform(animCalcInfo, this->obj, buffer, v19, outLocalQuat, outLocalTrans);
    __asm
    {
      vmovaps xmm0, xmm6
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm0, xmm0, xmmword ptr [rdi]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4, 10h; vec4_t const quat_identity
      vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8, 20h ; ' '; vec4_t const quat_identity
      vinsertps xmm0, xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch, 30h ; '0'; vec4_t const quat_identity
      vmovups xmmword ptr [rbp+0], xmm0
      vxorps  xmm0, xmm0, xmm0
    }
  }
  __asm
  {
    vmovups xmmword ptr [rdi], xmm0
    vmovaps xmm6, [rsp+98h+var_48]
  }
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

