/*
==============
CL_Pose_GetPrevSkelTimeStamp
==============
*/

int __fastcall CL_Pose_GetPrevSkelTimeStamp()
{
  return ?CL_Pose_GetPrevSkelTimeStamp@@YAHXZ();
}

/*
==============
CL_Pose_DObjCreateSkelForBones
==============
*/

int __fastcall CL_Pose_DObjCreateSkelForBones(const DObj *obj, DObjPartBits *partBits)
{
  return ?CL_Pose_DObjCreateSkelForBones@@YAHPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
CL_Pose_DObjCreateSkelForBones
==============
*/

int __fastcall CL_Pose_DObjCreateSkelForBones(const DObj *obj, DObjPartBits *partBits, DObjAnimMat **pMatOut)
{
  return ?CL_Pose_DObjCreateSkelForBones@@YAHPEBUDObj@@PEAUDObjPartBits@@PEAPEAUDObjAnimMat@@@Z(obj, partBits, pMatOut);
}

/*
==============
CL_Pose_GetSkelTimeStamp
==============
*/

int __fastcall CL_Pose_GetSkelTimeStamp()
{
  return ?CL_Pose_GetSkelTimeStamp@@YAHXZ();
}

/*
==============
CL_Pose_AllocSkelMemory
==============
*/

char *__fastcall CL_Pose_AllocSkelMemory(const DObj *obj, unsigned int size)
{
  return ?CL_Pose_AllocSkelMemory@@YAPEADPEBUDObj@@I@Z(obj, size);
}

/*
==============
CL_Pose_AllocSkelMemory
==============
*/
char *CL_Pose_AllocSkelMemory(const DObj *obj, unsigned int size)
{
  unsigned int skelMemPoolSize; 
  unsigned int v5; 
  int v6; 
  char *v7; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 16, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( !cls.skelMemoryStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 17, ASSERT_TYPE_ASSERT, "(cls.skelMemoryStart)", (const char *)&queryFormat, "cls.skelMemoryStart") )
    __debugbreak();
  skelMemPoolSize = cls.skelMemPoolSize;
  if ( !cls.skelMemPoolSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", cls.skelMemPoolSize + 18, ASSERT_TYPE_ASSERT, "(cls.skelMemPoolSize > 0)", (const char *)&queryFormat, "cls.skelMemPoolSize > 0") )
      __debugbreak();
    skelMemPoolSize = cls.skelMemPoolSize;
  }
  v5 = (size + 15) & 0xFFFFFFF0;
  if ( v5 > skelMemPoolSize - 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 21, ASSERT_TYPE_ASSERT, "( size ) <= ( cls.skelMemPoolSize - 16 )", "%s <= %s\n\t%i, %i", "size", "cls.skelMemPoolSize - SKEL_MEM_ALIGNMENT", v5, skelMemPoolSize - 16) )
    __debugbreak();
  if ( ((unsigned __int8)&cls.skelMemPos & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &cls.skelMemPos) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(&cls.skelMemPos, v5);
  v7 = &cls.skelMemoryStart[v6];
  if ( v6 + v5 > cls.skelMemPoolSize - 16 )
  {
    CL_Debug_DumpSkeletonMemoryData();
    return 0i64;
  }
  else
  {
    CL_Debug_TrackAllocSkeletonMemory(obj, v5, v6);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 30, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    return v7;
  }
}

/*
==============
CL_Pose_DObjCreateSkelForBones
==============
*/
int CL_Pose_DObjCreateSkelForBones(const DObj *obj, DObjPartBits *partBits)
{
  DObjAnimMat *pMatOut; 

  return CL_Pose_DObjCreateSkelForBones(obj, partBits, &pMatOut);
}

/*
==============
CL_Pose_DObjCreateSkelForBones
==============
*/
int CL_Pose_DObjCreateSkelForBones(const DObj *obj, DObjPartBits *partBits, DObjAnimMat **pMatOut)
{
  int skelTimeStamp; 
  DObjAnimMat *mat; 
  int AllocSkelSize; 
  unsigned int skelMemPoolSize; 
  unsigned int v11; 
  int v12; 
  DObjAnimMat *v13; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 75, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjTotalNumBones(obj) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 76, ASSERT_TYPE_ASSERT, "(DObjTotalNumBones( obj ) > 0)", (const char *)&queryFormat, "DObjTotalNumBones( obj ) > 0") )
    __debugbreak();
  if ( !cls.skelValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 42, ASSERT_TYPE_ASSERT, "(cls.skelValid)", (const char *)&queryFormat, "cls.skelValid") )
    __debugbreak();
  skelTimeStamp = cls.skelTimeStamp;
  if ( DObjSkelExists(obj, cls.skelTimeStamp) )
  {
    mat = obj->skel.mat;
    *pMatOut = mat;
    if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 83, ASSERT_TYPE_ASSERT, "(*pMatOut)", (const char *)&queryFormat, "*pMatOut") )
      __debugbreak();
    return DObjSkelAreBonesUpToDate(obj, partBits);
  }
  else
  {
    AllocSkelSize = DObjGetAllocSkelSize(obj);
    if ( !AllocSkelSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 16, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
      __debugbreak();
    if ( !cls.skelMemoryStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 17, ASSERT_TYPE_ASSERT, "(cls.skelMemoryStart)", (const char *)&queryFormat, "cls.skelMemoryStart") )
      __debugbreak();
    skelMemPoolSize = cls.skelMemPoolSize;
    if ( !cls.skelMemPoolSize )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", cls.skelMemPoolSize + 18, ASSERT_TYPE_ASSERT, "(cls.skelMemPoolSize > 0)", (const char *)&queryFormat, "cls.skelMemPoolSize > 0") )
        __debugbreak();
      skelMemPoolSize = cls.skelMemPoolSize;
    }
    v11 = (AllocSkelSize + 15) & 0xFFFFFFF0;
    if ( v11 > skelMemPoolSize - 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 21, ASSERT_TYPE_ASSERT, "( size ) <= ( cls.skelMemPoolSize - 16 )", "%s <= %s\n\t%i, %i", "size", "cls.skelMemPoolSize - SKEL_MEM_ALIGNMENT", v11, skelMemPoolSize - 16) )
      __debugbreak();
    if ( ((unsigned __int8)&cls.skelMemPos & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &cls.skelMemPos) )
      __debugbreak();
    v12 = _InterlockedExchangeAdd(&cls.skelMemPos, v11);
    v13 = (DObjAnimMat *)&cls.skelMemoryStart[v12];
    if ( v12 + v11 > cls.skelMemPoolSize - 16 )
    {
      CL_Debug_DumpSkeletonMemoryData();
    }
    else
    {
      CL_Debug_TrackAllocSkeletonMemory(obj, v11, v12);
      if ( v13 )
      {
        *pMatOut = v13;
        DObjCreateSkel(obj, (char *)v13, skelTimeStamp);
        return 0;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 30, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
        __debugbreak();
    }
    *pMatOut = NULL;
    Sys_Error((const ObfuscateErrorText)&stru_1441EC9C0);
    return 1;
  }
}

/*
==============
CL_Pose_GetPrevSkelTimeStamp
==============
*/
__int64 CL_Pose_GetPrevSkelTimeStamp()
{
  if ( !cls.skelValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 50, ASSERT_TYPE_ASSERT, "(cls.skelValid)", (const char *)&queryFormat, "cls.skelValid") )
    __debugbreak();
  return (unsigned int)cls.skelPrevFrameTimeStamp;
}

/*
==============
CL_Pose_GetSkelTimeStamp
==============
*/
__int64 CL_Pose_GetSkelTimeStamp()
{
  if ( !cls.skelValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_pose.cpp", 42, ASSERT_TYPE_ASSERT, "(cls.skelValid)", (const char *)&queryFormat, "cls.skelValid") )
    __debugbreak();
  return (unsigned int)cls.skelTimeStamp;
}

