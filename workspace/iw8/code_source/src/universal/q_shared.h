/*
==============
Com_GetUserCommandTime
==============
*/

int __fastcall Com_GetUserCommandTime(const usercmd_s *const cmd)
{
  return ?Com_GetUserCommandTime@@YAHQEBUusercmd_s@@@Z(cmd);
}

/*
==============
BobCycle::BobCycle
==============
*/

void __fastcall BobCycle::BobCycle(BobCycle *this, const int (*packedBobCycle)[2])
{
  ??0BobCycle@@QEAA@AEAY01$$CBH@Z(this, packedBobCycle);
}

/*
==============
Com_CopyAndStripExtension<256>
==============
*/

void __fastcall Com_CopyAndStripExtension<256>(char (*dest)[256], const char *inPath)
{
  ??$Com_CopyAndStripExtension@$0BAA@@@YAXAEIAY0BAA@DPEIBD@Z(dest, inPath);
}

/*
==============
Com_IsRagdollTrajectory
==============
*/

bool __fastcall Com_IsRagdollTrajectory(const trajectory_t_secure *trajectory)
{
  return ?Com_IsRagdollTrajectory@@YA_NPEBUtrajectory_t_secure@@@Z(trajectory);
}

/*
==============
Com_GetOtherAttachmentId
==============
*/

unsigned __int8 __fastcall Com_GetOtherAttachmentId(unsigned int otherIndex)
{
  return ?Com_GetOtherAttachmentId@@YAEI@Z(otherIndex);
}

/*
==============
Com_CopyAndStripExtension<260>
==============
*/

void __fastcall Com_CopyAndStripExtension<260>(char (*dest)[260], const char *inPath)
{
  ??$Com_CopyAndStripExtension@$0BAE@@@YAXAEIAY0BAE@DPEIBD@Z(dest, inPath);
}

/*
==============
Com_CopyAndStripExtension<256>
==============
*/
void Com_CopyAndStripExtension<256>(char (*dest)[256], const char *inPath)
{
  Com_CopyAndStripExtension((char *)dest, 0x100ui64, inPath);
}

/*
==============
Com_GetOtherAttachmentId
==============
*/
unsigned __int8 Com_GetOtherAttachmentId(unsigned int otherIndex)
{
  int v4; 

  if ( otherIndex >= 0x10 )
  {
    v4 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", otherIndex, v4) )
      __debugbreak();
  }
  return truncate_cast<unsigned char,unsigned int>(otherIndex + 13);
}

/*
==============
Com_IsRagdollTrajectory
==============
*/
bool Com_IsRagdollTrajectory(const trajectory_t_secure *trajectory)
{
  if ( !trajectory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  return (unsigned int)(trajectory->trType - 23) <= 5;
}

/*
==============
BobCycle::BobCycle
==============
*/
void BobCycle::BobCycle(BobCycle *this, const int (*packedBobCycle)[2])
{
  int v4; 
  int v5; 
  int v10; 
  int v11; 
  bool v15; 
  bool v16; 
  bool v17; 
  bool v20; 

  v4 = (*packedBobCycle)[1];
  v5 = (*packedBobCycle)[0] >> 9;
  this->animCycle = (*packedBobCycle)[0] & 0x1FF;
  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3b808081
  }
  v10 = v4 & 0xF;
  __asm { vmovss  dword ptr [rcx+0Ch], xmm1 }
  this->generation = v10;
  this->isAnimDecreasing = BYTE1(v5) & 1;
  v11 = (v4 >> 4) & 0xF;
  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  _RBX->maxGeneration = v11;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vmulss  xmm1, xmm0, cs:__real@3a802008
    vmovss  dword ptr [rbx+10h], xmm1
  }
  if ( v10 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5281, ASSERT_TYPE_ASSERT, "(0 <= generation && generation <= maxGeneration)", (const char *)&queryFormat, "0 <= generation && generation <= maxGeneration") )
    __debugbreak();
  v15 = _RBX->animCycle < 0x1FFu;
  v16 = _RBX->animCycle <= 0x1FFu;
  if ( _RBX->animCycle > 0x1FFu )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5282, ASSERT_TYPE_ASSERT, "(0 <= animCycle && animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= animCycle && animCycle <= MAX_BOB_CYCLE");
    v15 = 0;
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( v15 )
    goto LABEL_18;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !v16 )
  {
LABEL_18:
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5283, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f");
    v16 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5284, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f") )
    __debugbreak();
  __asm { vmovaps xmm7, [rsp+48h+var_18] }
}

/*
==============
Com_CopyAndStripExtension<260>
==============
*/
void Com_CopyAndStripExtension<260>(char (*dest)[260], const char *inPath)
{
  Com_CopyAndStripExtension((char *)dest, 0x104ui64, inPath);
}

/*
==============
Com_GetUserCommandTime
==============
*/
__int64 Com_GetUserCommandTime(const usercmd_s *const cmd)
{
  if ( cmd )
    return (unsigned int)cmd->commandTime;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  return MEMORY[0x10];
}

