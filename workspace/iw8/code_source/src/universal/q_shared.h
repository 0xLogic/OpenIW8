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
  int v2; 
  int v3; 
  char v5; 
  int v6; 
  int v7; 
  float amplitudeRatio; 
  float amplitudeRatioGun; 

  v2 = (*packedBobCycle)[1];
  v3 = (*packedBobCycle)[0] >> 9;
  this->animCycle = (*packedBobCycle)[0] & 0x1FF;
  v5 = v2;
  v2 >>= 4;
  v6 = v5 & 0xF;
  this->amplitudeRatio = (float)(unsigned __int8)v3 * 0.0039215689;
  this->generation = v6;
  this->isAnimDecreasing = BYTE1(v3) & 1;
  v7 = v2 & 0xF;
  this->maxGeneration = v7;
  this->amplitudeRatioGun = (float)((v2 >> 4) & 0x3FF) * 0.00097751711;
  if ( v6 > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5281, ASSERT_TYPE_ASSERT, "(0 <= generation && generation <= maxGeneration)", (const char *)&queryFormat, "0 <= generation && generation <= maxGeneration") )
    __debugbreak();
  if ( this->animCycle > 0x1FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5282, ASSERT_TYPE_ASSERT, "(0 <= animCycle && animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= animCycle && animCycle <= MAX_BOB_CYCLE") )
    __debugbreak();
  amplitudeRatio = this->amplitudeRatio;
  if ( (amplitudeRatio < 0.0 || amplitudeRatio > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5283, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f") )
    __debugbreak();
  amplitudeRatioGun = this->amplitudeRatioGun;
  if ( (amplitudeRatioGun < 0.0 || amplitudeRatioGun > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5284, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f") )
    __debugbreak();
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

