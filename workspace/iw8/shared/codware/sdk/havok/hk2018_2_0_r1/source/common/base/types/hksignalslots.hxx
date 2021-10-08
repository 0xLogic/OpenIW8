/*
==============
hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot::~Slot
==============
*/

void __fastcall hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot::~Slot(hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot *this)
{
  ??1Slot@?$hkSignal3@PEAVhknpWorld@@PEBUhknpBodyId@@H@@UEAA@XZ(this);
}

/*
==============
hkSignal2<hclWorld *,float>::fire
==============
*/

void __fastcall hkSignal2<hclWorld *,float>::fire(hkSignal2<hclWorld *,float> *this, hclWorld *p0, float p1)
{
  ?fire@?$hkSignal2@PEAVhclWorld@@M@@QEAAXPEAVhclWorld@@M@Z(this, p0, p1);
}

/*
==============
hkSignal3<hknpWorld *,hknpBodyId const *,int>::fire
==============
*/

void __fastcall hkSignal3<hknpWorld *,hknpBodyId const *,int>::fire(hkSignal3<hknpWorld *,hknpBodyId const *,int> *this, hknpWorld *p0, const hknpBodyId *p1, int p2)
{
  ?fire@?$hkSignal3@PEAVhknpWorld@@PEBUhknpBodyId@@H@@QEAAXPEAVhknpWorld@@PEBUhknpBodyId@@H@Z(this, p0, p1, p2);
}

/*
==============
hkSignal1<hknpShape const *>::fire
==============
*/

void __fastcall hkSignal1<hknpShape const *>::fire(hkSignal1<hknpShape const *> *this, const hknpShape *p0)
{
  ?fire@?$hkSignal1@PEBVhknpShape@@@@QEAAXPEBVhknpShape@@@Z(this, p0);
}

/*
==============
hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot::~Slot
==============
*/

void __fastcall hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot::~Slot(hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot *this)
{
  ??1Slot@?$hkSignal2@AEBUhknpEventHandlerInput@@AEBUhknpEvent@@@@UEAA@XZ(this);
}

/*
==============
hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot::~Slot
==============
*/
void hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot::~Slot(hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot *this)
{
  this->__vftable = (hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::Slot_vtbl *)hkSlot::`vftable';
}

/*
==============
hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot::~Slot
==============
*/
void hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot::~Slot(hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot *this)
{
  this->__vftable = (hkSignal3<hknpWorld *,hknpBodyId const *,int>::Slot_vtbl *)hkSlot::`vftable';
}

/*
==============
hkSignal3<hknpWorld *,hknpBodyId const *,int>::fire
==============
*/
void hkSignal3<hknpWorld *,hknpBodyId const *,int>::fire(hkSignal3<hknpWorld *,hknpBodyId const *,int> *this, hknpWorld *p0, const hknpBodyId *p1, int p2)
{
  hkSignal3<hknpWorld *,hknpBodyId const *,int> *v5; 
  unsigned __int64 v6; 
  hkSignal3<hknpWorld *,hknpBodyId const *,int> *v10; 
  hkSignal3<hknpWorld *,hknpBodyId const *,int> *v11; 
  hkSlot *m_ptrAndInt; 
  unsigned __int64 v13; 

  v5 = this;
  v6 = (unsigned __int64)this->m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64 | 1;
  this->m_slots.m_ptrAndInt = (hkSlot *)v6;
  v10 = (hkSignal3<hknpWorld *,hknpBodyId const *,int> *)(v6 & 0xFFFFFFFFFFFFFFFCui64);
  if ( (v6 & 0xFFFFFFFFFFFFFFFCui64) != 0 )
  {
    do
    {
      v11 = v10 + 1;
      m_ptrAndInt = v10->m_slots.m_ptrAndInt;
      v13 = (unsigned __int64)v10[1].m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64;
      if ( ((__int64)v10[1].m_slots.m_ptrAndInt & 3) != 0 )
      {
        ((void (__fastcall *)(hkSignal3<hknpWorld *,hknpBodyId const *,int> *, __int64))m_ptrAndInt->__vftable)(v10, 1i64);
        v5->m_slots.m_ptrAndInt = (hkSlot *)(v13 | (__int64)v5->m_slots.m_ptrAndInt & 3);
      }
      else
      {
        ((void (__fastcall *)(hkSignal3<hknpWorld *,hknpBodyId const *,int> *, hknpWorld *, const hknpBodyId *, _QWORD))m_ptrAndInt->m_object)(v10, p0, p1, (unsigned int)p2);
        v5 = v11;
      }
      v10 = (hkSignal3<hknpWorld *,hknpBodyId const *,int> *)v13;
    }
    while ( v13 );
    v6 = (unsigned __int64)this->m_slots.m_ptrAndInt;
  }
  this->m_slots.m_ptrAndInt = (hkSlot *)(v6 & 0xFFFFFFFFFFFFFFFCui64);
}

/*
==============
hkSignal1<hknpShape const *>::fire
==============
*/
void hkSignal1<hknpShape const *>::fire(hkSignal1<hknpShape const *> *this, const hknpShape *p0)
{
  hkSignal1<hknpShape const *> *v3; 
  unsigned __int64 m_ptrAndInt; 
  unsigned __int64 v6; 
  hkSignal1<hknpShape const *> *v7; 
  void (__fastcall **v8)(unsigned __int64, __int64); 
  unsigned __int64 v9; 

  v3 = this;
  m_ptrAndInt = (unsigned __int64)this->m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64 | 1;
  this->m_slots.m_ptrAndInt = (hkSlot *)m_ptrAndInt;
  v6 = m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64;
  if ( (m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64) != 0 )
  {
    do
    {
      v7 = (hkSignal1<hknpShape const *> *)(v6 + 8);
      v8 = *(void (__fastcall ***)(unsigned __int64, __int64))v6;
      v9 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFFCui64;
      if ( (*(_QWORD *)(v6 + 8) & 3) != 0 )
      {
        (*v8)(v6, 1i64);
        v3->m_slots.m_ptrAndInt = (hkSlot *)(v9 | (__int64)v3->m_slots.m_ptrAndInt & 3);
      }
      else
      {
        v8[2](v6, (__int64)p0);
        v3 = v7;
      }
      v6 = v9;
    }
    while ( v9 );
    m_ptrAndInt = (unsigned __int64)this->m_slots.m_ptrAndInt;
  }
  this->m_slots.m_ptrAndInt = (hkSlot *)(m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64);
}

/*
==============
hkSignal2<hclWorld *,float>::fire
==============
*/

void __fastcall hkSignal2<hclWorld *,float>::fire(hkSignal2<hclWorld *,float> *this, hclWorld *p0, double p1)
{
  unsigned __int64 m_ptrAndInt; 
  hkSignal2<hclWorld *,float> *v6; 
  unsigned __int64 v9; 
  hkSignal2<hclWorld *,float> *v10; 
  void (__fastcall **v11)(unsigned __int64, __int64); 
  unsigned __int64 v12; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  m_ptrAndInt = (unsigned __int64)this->m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64 | 1;
  v6 = this;
  this->m_slots.m_ptrAndInt = (hkSlot *)m_ptrAndInt;
  __asm { vmovaps xmm6, xmm2 }
  v9 = m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64;
  if ( (m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64) != 0 )
  {
    do
    {
      v10 = (hkSignal2<hclWorld *,float> *)(v9 + 8);
      v11 = *(void (__fastcall ***)(unsigned __int64, __int64))v9;
      v12 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFFCui64;
      if ( (*(_QWORD *)(v9 + 8) & 3) != 0 )
      {
        (*v11)(v9, 1i64);
        v6->m_slots.m_ptrAndInt = (hkSlot *)(v12 | (__int64)v6->m_slots.m_ptrAndInt & 3);
      }
      else
      {
        __asm { vmovaps xmm2, xmm6 }
        v11[2](v9, (__int64)p0);
        v6 = v10;
      }
      v9 = v12;
    }
    while ( v12 );
    m_ptrAndInt = (unsigned __int64)this->m_slots.m_ptrAndInt;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  this->m_slots.m_ptrAndInt = (hkSlot *)(m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64);
}

