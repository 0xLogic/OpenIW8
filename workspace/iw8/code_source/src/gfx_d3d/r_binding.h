/*
==============
R_SetDescriptorInRange
==============
*/

void __fastcall R_SetDescriptorInRange(GfxDescriptorState *descState, GfxDescriptorRangeIndex rangeIndex, unsigned int slot, unsigned int descriptor)
{
  ?R_SetDescriptorInRange@@YAXPEAUGfxDescriptorState@@W4GfxDescriptorRangeIndex@@II@Z(descState, rangeIndex, slot, descriptor);
}

/*
==============
R_ClearDescriptorRangeSlots
==============
*/

void __fastcall R_ClearDescriptorRangeSlots(GfxDescriptorState *descState, GfxDescriptorRangeIndex rangeIndex, unsigned int startSlot, unsigned int numSlots)
{
  ?R_ClearDescriptorRangeSlots@@YAXPEAUGfxDescriptorState@@W4GfxDescriptorRangeIndex@@II@Z(descState, rangeIndex, startSlot, numSlots);
}

/*
==============
R_LockDescriptorPool
==============
*/

void __fastcall R_LockDescriptorPool(GfxDescriptorPool *descHeapPool)
{
  ?R_LockDescriptorPool@@YAXPEAUGfxDescriptorPool@@@Z(descHeapPool);
}

/*
==============
R_ReleaseDescriptor
==============
*/

void __fastcall R_ReleaseDescriptor(GfxDescriptorPool *descHeapPool, unsigned int descriptor)
{
  ?R_ReleaseDescriptor@@YAXPEAUGfxDescriptorPool@@I@Z(descHeapPool, descriptor);
}

/*
==============
R_SetDescriptorInRange
==============
*/
void R_SetDescriptorInRange(GfxDescriptorState *descState, GfxDescriptorRangeIndex rangeIndex, unsigned int slot, unsigned int descriptor)
{
  GfxDescriptorRangeIndex v5; 
  char *v7; 
  __int64 v8; 
  _QWORD *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( descriptor )
  {
    v5 = rangeIndex;
    if ( rangeIndex == PS_VIEW_RANGE )
      v5 = 4 - (slot < descState->ranges[3].numSlots);
    v7 = (char *)descState + 32 * v5;
    v8 = slot - *((_DWORD *)v7 + 2);
    if ( *((_DWORD *)v7 + 4) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 625, ASSERT_TYPE_ASSERT, "(range->type != DESCRIPTOR_RANGE_BUFFER)", (const char *)&queryFormat, "range->type != DESCRIPTOR_RANGE_BUFFER") )
      __debugbreak();
    if ( (unsigned int)v8 >= *((_DWORD *)v7 + 3) )
    {
      LODWORD(v11) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 627, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( range->numSlots )", "slot doesn't index range->numSlots\n\t%i not in [0, %i)", v11, *((_DWORD *)v7 + 3)) )
        __debugbreak();
    }
    if ( *((_DWORD *)v7 + 3) <= 0x28u )
    {
      v9 = (_QWORD *)*((_QWORD *)v7 + 4);
      v10 = 1i64 << v5;
      if ( *((_DWORD *)v9 + v8 + 2) == descriptor )
        LODWORD(v10) = 0;
      descState->dirtyDescriptorRangeMask |= v10;
      *v9 |= 1i64 << v8;
      *((_DWORD *)v9 + v8 + 2) = descriptor;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 630, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_SetDescriptorInRange cannot be called on persistent table") )
    {
      __debugbreak();
    }
  }
}

/*
==============
R_ClearDescriptorRangeSlots
==============
*/
void R_ClearDescriptorRangeSlots(GfxDescriptorState *descState, GfxDescriptorRangeIndex rangeIndex, unsigned int startSlot, unsigned int numSlots)
{
  char *v5; 
  __int64 v6; 
  _QWORD *v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 

  if ( rangeIndex == PS_VIEW_RANGE )
    rangeIndex = 4 - (startSlot < descState->ranges[3].numSlots);
  v5 = (char *)descState + 32 * rangeIndex;
  v6 = startSlot - *((_DWORD *)v5 + 2);
  v7 = (_QWORD *)*((_QWORD *)v5 + 4);
  if ( v7 )
  {
    if ( !numSlots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 573, ASSERT_TYPE_ASSERT, "(numSlots > 0)", (const char *)&queryFormat, "numSlots > 0") )
      __debugbreak();
    v8 = *((_DWORD *)v5 + 4);
    if ( v8 < 0 )
    {
LABEL_24:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 602, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled descriptor range type.") )
        __debugbreak();
      return;
    }
    if ( v8 > 1 )
    {
      if ( v8 == 2 )
      {
        if ( (unsigned int)v6 < numSlots )
        {
          v9 = __ROL8__(1i64, v6);
          v10 = 2i64 * (unsigned int)v6;
          do
          {
            if ( v7[v10 + 1] )
            {
              v11 = 2i64 * (unsigned int)v6;
              v7[v11 + 1] = 0i64;
              v7[v11 + 2] = 0i64;
              *v7 &= ~v9;
            }
            LODWORD(v6) = v6 + 1;
            v9 = __ROL8__(v9, 1);
            v10 += 2i64;
          }
          while ( (unsigned int)v6 < numSlots );
        }
        return;
      }
      goto LABEL_24;
    }
    if ( *((_DWORD *)v5 + 3) <= 0x28u )
    {
      v12 = v6 + numSlots;
      if ( (unsigned int)v6 < (unsigned int)v6 + numSlots )
      {
        v13 = 4 * v6 + 8;
        v14 = __ROL8__(1i64, v6);
        do
        {
          if ( *(_DWORD *)((char *)v7 + v13) )
          {
            *((_DWORD *)v7 + v6 + 2) = 0;
            *v7 &= ~v14;
          }
          v6 = (unsigned int)(v6 + 1);
          v14 = __ROL8__(v14, 1);
          v13 += 4i64;
        }
        while ( (unsigned int)v6 < v12 );
      }
    }
    else
    {
      **((_QWORD **)v5 + 4) = 0i64;
    }
  }
}

/*
==============
R_LockDescriptorPool
==============
*/
void R_LockDescriptorPool(GfxDescriptorPool *descHeapPool)
{
  volatile int *p_lock; 
  __int64 v2; 

  p_lock = &descHeapPool->lock;
  v2 = ((_BYTE)descHeapPool + 40) & 3;
  while ( 1 )
  {
    if ( v2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_lock) )
        __debugbreak();
    }
    if ( !_InterlockedCompareExchange(p_lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
}

/*
==============
R_ReleaseDescriptor
==============
*/
void R_ReleaseDescriptor(GfxDescriptorPool *descHeapPool, unsigned int descriptor)
{
  __int64 v2; 
  D3D12_DESCRIPTOR_HEAP_TYPE heapType; 
  __int32 v5; 
  __int32 v6; 
  unsigned int *v7; 
  volatile int *p_lock; 

  v2 = descriptor;
  if ( !descHeapPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 509, ASSERT_TYPE_ASSERT, "(descHeapPool)", (const char *)&queryFormat, "descHeapPool") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    heapType = descHeapPool->handle.parent->heapType;
    if ( heapType == D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV )
    {
      if ( (unsigned int)(v2 - 1) <= 3 )
        return;
      goto LABEL_14;
    }
    v5 = heapType - 2;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
LABEL_14:
        R_LockDescriptorPool(descHeapPool);
        v7 = &descHeapPool->nextSlot[v2];
        if ( !*v7 )
        {
          *v7 = descHeapPool->freeSlot;
          --descHeapPool->handle.used;
          descHeapPool->freeSlot = v2;
        }
        p_lock = &descHeapPool->lock;
        if ( ((unsigned __int8)p_lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_lock) )
          __debugbreak();
        _InterlockedExchange(p_lock, 0);
        return;
      }
      if ( v6 != 1 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled heap type.") )
          __debugbreak();
        goto LABEL_14;
      }
    }
    if ( (_DWORD)v2 == 1 )
      return;
    goto LABEL_14;
  }
}

