/*
==============
hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsAsset>::func
==============
*/

void __fastcall hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsAsset>::func(void *p, const hkReflect::Type *__formal, int num)
{
  ?func@?$ExplicitWrapper@$0EA@VHavokPhysicsAsset@@@Detail@hkReflect@@SAXPEAXPEBVType@3@H@Z(p, __formal, num);
}

/*
==============
hkReflect::Detail::ExplicitWrapper<512,HavokPhysicsVehiclePathConstraintData>::func
==============
*/

void __fastcall hkReflect::Detail::ExplicitWrapper<512,HavokPhysicsVehiclePathConstraintData>::func(void *p, const hkReflect::Type *__formal, int num)
{
  ?func@?$ExplicitWrapper@$0CAA@VHavokPhysicsVehiclePathConstraintData@@@Detail@hkReflect@@SAXPEAXPEBVType@3@H@Z(p, __formal, num);
}

/*
==============
hkReflect::Detail::ExplicitWrapper<128,HavokPhysicsVehiclePathConstraintData>::func
==============
*/

void __fastcall hkReflect::Detail::ExplicitWrapper<128,HavokPhysicsVehiclePathConstraintData>::func(void *target, const void *source, const hkReflect::Type *__formal, int num)
{
  ?func@?$ExplicitWrapper@$0IA@VHavokPhysicsVehiclePathConstraintData@@@Detail@hkReflect@@SAXPEAXPEBXPEBVType@3@H@Z(target, source, __formal, num);
}

/*
==============
hkReflect::Detail::ReflectConstructionWrapper<HavokPhysicsVehiclePathConstraintData>::func
==============
*/

void __fastcall hkReflect::Detail::ReflectConstructionWrapper<HavokPhysicsVehiclePathConstraintData>::func(void *p, const hkReflect::Type *__formal, int num)
{
  ?func@?$ReflectConstructionWrapper@VHavokPhysicsVehiclePathConstraintData@@@Detail@hkReflect@@SAXPEAXPEBVType@3@H@Z(p, __formal, num);
}

/*
==============
hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsVehiclePathConstraintData::Atoms>::func
==============
*/

void __fastcall hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsVehiclePathConstraintData::Atoms>::func(void *p, const hkReflect::Type *__formal, int num)
{
  ?func@?$ExplicitWrapper@$0EA@UAtoms@HavokPhysicsVehiclePathConstraintData@@@Detail@hkReflect@@SAXPEAXPEBVType@3@H@Z(p, __formal, num);
}

/*
==============
hkReflect::Detail::ExplicitWrapper<128,HavokPhysicsVehiclePathConstraintData>::func
==============
*/
void hkReflect::Detail::ExplicitWrapper<128,HavokPhysicsVehiclePathConstraintData>::func(void *target, const void *source, const hkReflect::Type *__formal, int num)
{
  int v4; 
  __int64 v5; 
  signed __int64 v7; 
  char *v8; 

  if ( num > 0 )
  {
    v4 = 0;
    v5 = num;
    _RBX = (const hkPropertyBag *)((char *)source + 8);
    v7 = (_BYTE *)target - (_BYTE *)source;
    do
    {
      v8 = (char *)&_RBX[-1] + v7;
      if ( (const hkPropertyBag *)((char *)_RBX + v7) != (const hkPropertyBag *)8 )
      {
        *(_QWORD *)v8 = hkReferencedObject::`vftable';
        hkPropertyBag::hkPropertyBag((hkPropertyBag *)((char *)_RBX + v7), _RBX);
        *(_DWORD *)((char *)&_RBX[1].m_bag + v7) = 0x1FFFF;
        *(_QWORD *)v8 = hkpConstraintData::`vftable';
        *(const hkPropertyBag *)((char *)_RBX + v7 + 16) = _RBX[2];
        *(_QWORD *)v8 = &HavokPhysicsVehiclePathConstraintData::`vftable';
        _RCX = (__int64)&_RBX[3] + v7;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+18h]
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rbx+28h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [rbx+38h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [rbx+48h]
          vmovups xmmword ptr [rcx+30h], xmm1
          vmovups xmm0, xmmword ptr [rbx+58h]
          vmovups xmmword ptr [rcx+40h], xmm0
          vmovups xmm1, xmmword ptr [rbx+68h]
          vmovups xmmword ptr [rcx+50h], xmm1
          vmovups xmm0, xmmword ptr [rbx+78h]
          vmovups xmmword ptr [rcx+60h], xmm0
          vmovups xmm1, xmmword ptr [rbx+88h]
          vmovups xmmword ptr [rcx+70h], xmm1
          vmovups xmm0, xmmword ptr [rbx+98h]
          vmovups xmmword ptr [rcx+80h], xmm0
          vmovups xmm1, xmmword ptr [rbx+0A8h]
          vmovups xmmword ptr [rcx+90h], xmm1
          vmovups xmm0, xmmword ptr [rbx+0B8h]
          vmovups xmmword ptr [rcx+0A0h], xmm0
          vmovups xmm1, xmmword ptr [rbx+0C8h]
          vmovups xmmword ptr [rcx+0B0h], xmm1
          vmovups xmm0, xmmword ptr [rbx+0D8h]
          vmovups xmmword ptr [rcx+0C0h], xmm0
        }
        *(_DWORD *)((char *)&_RBX[29].m_bag + v7) = _RBX[29].m_bag;
      }
      ++v4;
      _RBX += 32;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
hkReflect::Detail::ExplicitWrapper<512,HavokPhysicsVehiclePathConstraintData>::func
==============
*/
void hkReflect::Detail::ExplicitWrapper<512,HavokPhysicsVehiclePathConstraintData>::func(void *p, const hkReflect::Type *__formal, int num)
{
  int v3; 
  char *v4; 
  char *v5; 

  v3 = num - 1;
  if ( num - 1 >= 0 )
  {
    v4 = (char *)p + 256 * (__int64)v3;
    v5 = v4;
    do
    {
      (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v4 + 8i64))(v5, 0i64);
      v5 -= 256;
      v4 -= 256;
      --v3;
    }
    while ( v3 >= 0 );
  }
}

/*
==============
hkReflect::Detail::ReflectConstructionWrapper<HavokPhysicsVehiclePathConstraintData>::func
==============
*/
void hkReflect::Detail::ReflectConstructionWrapper<HavokPhysicsVehiclePathConstraintData>::func(void *p, const hkReflect::Type *__formal, int num)
{
  __int64 v3; 
  int v4; 
  char *v5; 

  v3 = num;
  v4 = 0;
  if ( num > 0 )
  {
    v5 = (char *)p + 180;
    do
    {
      if ( v5 != (char *)180 )
      {
        *(_QWORD *)(v5 - 172) = 0i64;
        *((_DWORD *)v5 - 41) = 0x1FFFF;
        *(_QWORD *)(v5 - 156) = 0i64;
        *(_QWORD *)(v5 - 180) = &HavokPhysicsVehiclePathConstraintData::`vftable';
        *((_WORD *)v5 - 74) = 2;
        *((_WORD *)v5 - 2) = 23;
        *(v5 - 2) = 0;
        *(_DWORD *)v5 = 2139095022;
        *((_DWORD *)v5 + 1) = 2139095022;
        *((_DWORD *)v5 + 2) = 1602224112;
        *((_WORD *)v5 + 6) = 7;
        *((_DWORD *)v5 + 4) = -1082130432;
        *((_DWORD *)v5 + 5) = -1082130432;
        *((_WORD *)v5 + 14) = 7;
        *((_DWORD *)v5 + 8) = -1082130432;
        *((_DWORD *)v5 + 9) = -1082130432;
        *((_WORD *)v5 + 22) = 13;
        *((_DWORD *)v5 + 13) = -1082130432;
        *((_DWORD *)v5 + 14) = -1082130432;
      }
      ++v4;
      v5 += 256;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsVehiclePathConstraintData::Atoms>::func
==============
*/
void hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsVehiclePathConstraintData::Atoms>::func(void *p, const hkReflect::Type *__formal, int num)
{
  int v3; 
  __int64 v4; 
  char *v5; 

  v3 = 0;
  v4 = num;
  if ( num > 0 )
  {
    v5 = (char *)p + 148;
    do
    {
      if ( v5 != (char *)148 )
      {
        *((_WORD *)v5 - 74) = 2;
        *((_WORD *)v5 - 2) = 23;
        *(v5 - 2) = 0;
        *(_DWORD *)v5 = 2139095022;
        *((_DWORD *)v5 + 1) = 2139095022;
        *((_DWORD *)v5 + 2) = 1602224112;
        *((_WORD *)v5 + 6) = 7;
        *((_DWORD *)v5 + 4) = -1082130432;
        *((_DWORD *)v5 + 5) = -1082130432;
        *((_WORD *)v5 + 14) = 7;
        *((_DWORD *)v5 + 8) = -1082130432;
        *((_DWORD *)v5 + 9) = -1082130432;
        *((_WORD *)v5 + 22) = 13;
        *((_DWORD *)v5 + 13) = -1082130432;
        *((_DWORD *)v5 + 14) = -1082130432;
      }
      ++v3;
      v5 += 208;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsAsset>::func
==============
*/
void hkReflect::Detail::ExplicitWrapper<64,HavokPhysicsAsset>::func(void *p, const hkReflect::Type *__formal, int num)
{
  int v3; 
  __int64 v4; 
  char *v5; 

  if ( num > 0 )
  {
    v3 = 0;
    v4 = num;
    v5 = (char *)p + 28;
    do
    {
      if ( v5 != (char *)28 )
      {
        *((_DWORD *)v5 - 7) = 0;
        *(_QWORD *)(v5 - 20) = 0i64;
        *(_QWORD *)(v5 - 12) = 0i64;
        *((_DWORD *)v5 - 1) = 0;
        *(_DWORD *)v5 = 0x80000000;
        *(_QWORD *)(v5 + 4) = 0i64;
        *((_DWORD *)v5 + 3) = 0;
        *((_DWORD *)v5 + 4) = 0x80000000;
        *(_QWORD *)(v5 + 20) = 0i64;
        *((_DWORD *)v5 + 7) = 0;
        *((_DWORD *)v5 + 8) = 0x80000000;
        *(_QWORD *)(v5 + 36) = 0i64;
        *((_DWORD *)v5 + 11) = 0;
        *((_DWORD *)v5 + 12) = 0x80000000;
        *(_QWORD *)(v5 + 52) = 0i64;
        *((_DWORD *)v5 + 15) = 0;
        *((_DWORD *)v5 + 16) = 0x80000000;
        *(_QWORD *)(v5 + 68) = 0i64;
        *((_DWORD *)v5 + 19) = 0;
        *((_DWORD *)v5 + 20) = 0x80000000;
        *(_QWORD *)(v5 + 84) = 0i64;
        *((_DWORD *)v5 + 23) = 0;
        *((_DWORD *)v5 + 24) = 0x80000000;
        *(_QWORD *)(v5 + 100) = 0i64;
        *((_DWORD *)v5 + 27) = 0;
        *((_DWORD *)v5 + 28) = 0x80000000;
        *(_QWORD *)(v5 + 116) = 0i64;
        *((_DWORD *)v5 + 31) = 0;
        *((_DWORD *)v5 + 32) = 0x80000000;
        *(_QWORD *)(v5 + 132) = 0i64;
        *((_DWORD *)v5 + 35) = 0;
        *((_DWORD *)v5 + 36) = 0x80000000;
        *(_QWORD *)(v5 + 148) = 0i64;
        *((_DWORD *)v5 + 39) = 0;
        *((_DWORD *)v5 + 40) = 0x80000000;
        *(_QWORD *)(v5 + 164) = 0i64;
        *((_DWORD *)v5 + 43) = 0;
        *((_DWORD *)v5 + 44) = 0x80000000;
        hkHashMapDetail::Index::setSentinel((hkHashMapDetail::Index *)(v5 + 180));
      }
      ++v3;
      v5 += 224;
      --v4;
    }
    while ( v4 );
  }
}

