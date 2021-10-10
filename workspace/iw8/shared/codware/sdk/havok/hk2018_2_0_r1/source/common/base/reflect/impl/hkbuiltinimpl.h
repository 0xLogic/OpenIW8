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
  char *v6; 
  signed __int64 v7; 
  char *v8; 
  char *v9; 

  if ( num > 0 )
  {
    v4 = 0;
    v5 = num;
    v6 = (char *)source + 8;
    v7 = (_BYTE *)target - (_BYTE *)source;
    do
    {
      v8 = &v6[v7 - 8];
      if ( &v6[v7] != (char *)8 )
      {
        *(_QWORD *)v8 = hkReferencedObject::`vftable';
        hkPropertyBag::hkPropertyBag((hkPropertyBag *)&v6[v7], (const hkPropertyBag *)v6);
        *(_DWORD *)&v6[v7 + 8] = 0x1FFFF;
        *(_QWORD *)v8 = hkpConstraintData::`vftable';
        *(_QWORD *)&v6[v7 + 16] = *((_QWORD *)v6 + 2);
        *(_QWORD *)v8 = &HavokPhysicsVehiclePathConstraintData::`vftable';
        v9 = &v6[v7 + 24];
        *(_OWORD *)v9 = *(_OWORD *)(v6 + 24);
        *((_OWORD *)v9 + 1) = *(_OWORD *)(v6 + 40);
        *((_OWORD *)v9 + 2) = *(_OWORD *)(v6 + 56);
        *((_OWORD *)v9 + 3) = *(_OWORD *)(v6 + 72);
        *((_OWORD *)v9 + 4) = *(_OWORD *)(v6 + 88);
        *((_OWORD *)v9 + 5) = *(_OWORD *)(v6 + 104);
        *((_OWORD *)v9 + 6) = *(_OWORD *)(v6 + 120);
        *((_OWORD *)v9 + 7) = *(_OWORD *)(v6 + 136);
        *((_OWORD *)v9 + 8) = *(_OWORD *)(v6 + 152);
        *((_OWORD *)v9 + 9) = *(_OWORD *)(v6 + 168);
        *((_OWORD *)v9 + 10) = *(_OWORD *)(v6 + 184);
        *((_OWORD *)v9 + 11) = *(_OWORD *)(v6 + 200);
        *((_OWORD *)v9 + 12) = *(_OWORD *)(v6 + 216);
        *(_DWORD *)&v6[v7 + 232] = *((_DWORD *)v6 + 58);
      }
      ++v4;
      v6 += 256;
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

