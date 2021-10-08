/*
==============
Mem_Ownership_CheckNone
==============
*/

void __fastcall Mem_Ownership_CheckNone(MemOwnershipType ownershipType)
{
  ?Mem_Ownership_CheckNone@@YAXW4MemOwnershipType@@@Z(ownershipType);
}

/*
==============
Mem_Ownership_AllocVerify
==============
*/

void __fastcall Mem_Ownership_AllocVerify(MemOwnershipType ownershipType)
{
  ?Mem_Ownership_AllocVerify@@YAXW4MemOwnershipType@@@Z(ownershipType);
}

/*
==============
Mem_Ownership_Reset
==============
*/

void Mem_Ownership_Reset(void)
{
  ?Mem_Ownership_Reset@@YAXXZ();
}

/*
==============
Mem_Ownership_AllocAcquire
==============
*/

void __fastcall Mem_Ownership_AllocAcquire(MemOwnershipType ownershipType)
{
  ?Mem_Ownership_AllocAcquire@@YAXW4MemOwnershipType@@@Z(ownershipType);
}

/*
==============
Mem_Ownership_AllocRelease
==============
*/

void __fastcall Mem_Ownership_AllocRelease(MemOwnershipType ownershipType)
{
  ?Mem_Ownership_AllocRelease@@YAXW4MemOwnershipType@@@Z(ownershipType);
}

/*
==============
Mem_Ownership_AllocAcquire
==============
*/
void Mem_Ownership_AllocAcquire(MemOwnershipType ownershipType)
{
  __int64 v1; 
  MemOwnershipHandle *v2; 
  __int32 v3; 
  bool v4; 
  __int32 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  volatile __int32 owner; 
  volatile __int32 v10; 
  volatile __int32 v11; 
  volatile __int32 v12; 

  v1 = (unsigned int)(char)ownershipType;
  if ( (unsigned int)v1 >= 3 )
  {
    v8 = 3;
    v6 = (char)ownershipType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( ownershipType ) < (unsigned)( static_cast<uint>( MemOwnershipType::COUNT ) )", "ownershipType doesn't index static_cast<uint>( MemOwnershipType::COUNT )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v2 = &s_memOwnershipTypeHandles[v1];
  if ( Sys_IsMainThread() )
  {
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_memOwnershipTypeHandles[v1]) )
      __debugbreak();
    v3 = _InterlockedExchange((volatile __int32 *)v2, 1);
    if ( v2->nesting )
    {
      if ( v3 == 1 )
        goto LABEL_25;
      owner = v2->owner;
      LODWORD(v7) = v1;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 55, ASSERT_TYPE_ASSERT, "(previousOwner == MEM_OWNER_CLIENT)", "%s\n\tMemory threading issue (%i). Expected client ownership, got '%i'.", "previousOwner == MEM_OWNER_CLIENT", v7, owner);
    }
    else
    {
      if ( !v3 )
        goto LABEL_25;
      v10 = v2->owner;
      LODWORD(v7) = v1;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 59, ASSERT_TYPE_ASSERT, "(previousOwner == MEM_OWNER_NONE)", "%s\n\tMemory threading issue (%i). Expected no ownership, got '%i'.", "previousOwner == MEM_OWNER_NONE", v7, v10);
    }
  }
  else if ( Sys_IsServerThread() )
  {
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_memOwnershipTypeHandles[v1]) )
      __debugbreak();
    v5 = _InterlockedExchange((volatile __int32 *)v2, 2);
    if ( v2->nesting )
    {
      if ( v5 == 2 )
        goto LABEL_25;
      v11 = v2->owner;
      LODWORD(v7) = v1;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 68, ASSERT_TYPE_ASSERT, "(previousOwner == MEM_OWNER_SERVER)", "%s\n\tMemory threading issue (%i). Expected server ownership, got '%i'.", "previousOwner == MEM_OWNER_SERVER", v7, v11);
    }
    else
    {
      if ( !v5 )
        goto LABEL_25;
      v12 = v2->owner;
      LODWORD(v7) = v1;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 72, ASSERT_TYPE_ASSERT, "(previousOwner == MEM_OWNER_NONE)", "%s\n\tMemory threading issue (%i). Expected no ownership, got '%i'.", "previousOwner == MEM_OWNER_NONE", v7, v12);
    }
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 78, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported thread for memory ownership");
  }
  if ( v4 )
    __debugbreak();
LABEL_25:
  ++v2->nesting;
}

/*
==============
Mem_Ownership_AllocRelease
==============
*/
void Mem_Ownership_AllocRelease(MemOwnershipType ownershipType)
{
  __int64 v1; 
  MemOwnershipHandle *v2; 
  bool v3; 
  __int32 v4; 
  int v5; 
  __int64 v6; 

  v1 = (unsigned int)(char)ownershipType;
  if ( (unsigned int)v1 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( ownershipType ) < (unsigned)( static_cast<uint>( MemOwnershipType::COUNT ) )", "ownershipType doesn't index static_cast<uint>( MemOwnershipType::COUNT )\n\t%i not in [0, %i)", (char)ownershipType, 3) )
    __debugbreak();
  v2 = &s_memOwnershipTypeHandles[v1];
  if ( !v2->nesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 89, ASSERT_TYPE_ASSERT, "(handle->nesting)", "%s\n\tNo thread ownership aquired. Missing Mem_Ownership Acquire", "handle->nesting") )
    __debugbreak();
  --v2->nesting;
  if ( !Sys_IsMainThread() )
  {
    if ( Sys_IsServerThread() )
    {
      if ( v2->nesting )
      {
        if ( v2->owner == 2 )
          return;
        LODWORD(v6) = v1;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 108, ASSERT_TYPE_ASSERT, "(handle->owner == MEM_OWNER_SERVER)", "%s\n\tMemory threading issue (%i). Expected server ownership, got '%i'.", "handle->owner == MEM_OWNER_SERVER", v6, v2->owner);
      }
      else
      {
        v5 = Sys_InterlockedExchange((volatile int *)&s_memOwnershipTypeHandles[v1], 0);
        if ( v5 == 2 )
          return;
        LODWORD(v6) = v1;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 113, ASSERT_TYPE_ASSERT, "(previousOwner == MEM_OWNER_SERVER)", "%s\n\tMemory threading issue (%i). Expected server ownership, got '%i'.", "previousOwner == MEM_OWNER_SERVER", v6, v5);
      }
    }
    else
    {
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 118, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported thread for memory ownership");
    }
    goto LABEL_23;
  }
  if ( v2->nesting )
  {
    if ( v2->owner == 1 )
      return;
    LODWORD(v6) = v1;
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 96, ASSERT_TYPE_ASSERT, "(handle->owner == MEM_OWNER_CLIENT)", "%s\n\tMemory threading issue (%i). Expected client ownership, got '%i'.", "handle->owner == MEM_OWNER_CLIENT", v6, v2->owner);
    goto LABEL_23;
  }
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_memOwnershipTypeHandles[v1]) )
    __debugbreak();
  v4 = _InterlockedExchange((volatile __int32 *)v2, 0);
  if ( v4 != 1 )
  {
    LODWORD(v6) = v1;
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 101, ASSERT_TYPE_ASSERT, "(previousOwner == MEM_OWNER_CLIENT)", "%s\n\tMemory threading issue (%i). Expected client ownership, got '%i'.", "previousOwner == MEM_OWNER_CLIENT", v6, v4);
LABEL_23:
    if ( v3 )
      __debugbreak();
  }
}

/*
==============
Mem_Ownership_AllocVerify
==============
*/
void Mem_Ownership_AllocVerify(MemOwnershipType ownershipType)
{
  __int64 v1; 
  MemOwnershipHandle *v2; 
  bool v3; 
  __int64 v4; 

  v1 = (unsigned int)(char)ownershipType;
  if ( (unsigned int)v1 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( ownershipType ) < (unsigned)( static_cast<uint>( MemOwnershipType::COUNT ) )", "ownershipType doesn't index static_cast<uint>( MemOwnershipType::COUNT )\n\t%i not in [0, %i)", (char)ownershipType, 3) )
    __debugbreak();
  v2 = &s_memOwnershipTypeHandles[v1];
  if ( !v2->nesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 131, ASSERT_TYPE_ASSERT, "(handle->nesting)", "%s\n\tNo thread ownership aquired. Certain memory allocations require Mem_Ownership_AllocAcquire/Release blocks", "handle->nesting") )
    __debugbreak();
  if ( !Sys_IsMainThread() )
  {
    if ( Sys_IsServerThread() )
    {
      if ( v2->owner == 2 )
        return;
      LODWORD(v4) = v2->owner;
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 146, ASSERT_TYPE_ASSERT, "(handle->owner == MEM_OWNER_SERVER)", "%s\n\tAttempting to allocate memory on the server thread that is not owned by the server (%i)", "handle->owner == MEM_OWNER_SERVER", v4);
    }
    else
    {
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 150, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported thread for memory ownership");
    }
    goto LABEL_16;
  }
  if ( !v2->owner )
  {
    Com_PrintWarning(16, "Mem_Ownership_AllocVerify: No allocation owner for type '%i', could not verify thread safety.\n", (unsigned int)v1);
    return;
  }
  if ( v2->owner != 1 )
  {
    LODWORD(v4) = v2->owner;
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 141, ASSERT_TYPE_ASSERT, "(handle->owner == MEM_OWNER_CLIENT)", "%s\n\tAttempting to allocate memory on the main thread that is not owned by the client (%i)", "handle->owner == MEM_OWNER_CLIENT", v4);
LABEL_16:
    if ( v3 )
      __debugbreak();
  }
}

/*
==============
Mem_Ownership_CheckNone
==============
*/
void Mem_Ownership_CheckNone(MemOwnershipType ownershipType)
{
  __int64 v1; 
  volatile int owner; 
  MemOwnershipHandle *v3; 
  int v4; 
  int v5; 

  v1 = (unsigned int)(char)ownershipType;
  if ( (unsigned int)v1 >= 3 )
  {
    v5 = 3;
    v4 = (char)ownershipType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( ownershipType ) < (unsigned)( static_cast<uint>( MemOwnershipType::COUNT ) )", "ownershipType doesn't index static_cast<uint>( MemOwnershipType::COUNT )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  owner = s_memOwnershipTypeHandles[v1].owner;
  v3 = &s_memOwnershipTypeHandles[v1];
  if ( owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 158, ASSERT_TYPE_ASSERT, "(handle->owner == MEM_OWNER_NONE)", "%s\n\tExpected no thread would be doing allocations at this point", "handle->owner == MEM_OWNER_NONE") )
    __debugbreak();
  if ( v3->nesting )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 159, ASSERT_TYPE_ASSERT, "(handle->nesting == 0)", "%s\n\tExpected no thread would be doing allocations at this point", "handle->nesting == 0") )
      __debugbreak();
  }
}

/*
==============
Mem_Ownership_Reset
==============
*/
void Mem_Ownership_Reset(void)
{
  unsigned int i; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 35, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  for ( i = 0; i < 3; ++i )
  {
    v1 = (unsigned int)(char)i;
    if ( (unsigned int)v1 >= 3 )
    {
      LODWORD(v3) = 3;
      LODWORD(v2) = (char)i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_ownership.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( ownershipType ) < (unsigned)( static_cast<uint>( MemOwnershipType::COUNT ) )", "ownershipType doesn't index static_cast<uint>( MemOwnershipType::COUNT )\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
    }
    s_memOwnershipTypeHandles[v1].owner = 0;
    s_memOwnershipTypeHandles[v1].nesting = 0;
  }
}

