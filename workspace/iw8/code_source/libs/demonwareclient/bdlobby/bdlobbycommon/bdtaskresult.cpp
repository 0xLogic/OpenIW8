/*
==============
bdTaskResult::bdTaskResult
==============
*/

void __fastcall bdTaskResult::bdTaskResult(bdTaskResult *this)
{
  ??0bdTaskResult@@QEAA@XZ(this);
}

/*
==============
bdTaskResult::bdTaskResult
==============
*/

void __fastcall bdTaskResult::bdTaskResult(bdTaskResult *this, const bdTaskResult *__formal)
{
  ??0bdTaskResult@@IEAA@AEBV0@@Z(this, __formal);
}

/*
==============
bdTaskResult::~bdTaskResult
==============
*/

void __fastcall bdTaskResult::~bdTaskResult(bdTaskResult *this)
{
  ??1bdTaskResult@@UEAA@XZ(this);
}

/*
==============
bdTaskResult::bdTaskResult
==============
*/
void bdTaskResult::bdTaskResult(bdTaskResult *this, const bdTaskResult *__formal)
{
  this->__vftable = (bdTaskResult_vtbl *)&bdTaskResult::`vftable'{for `bdTaskResult'};
  *(bdTaskResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTaskResult_vtbl *)&bdTaskResult::`vftable'{for `bdReferencable'};
}

/*
==============
bdTaskResult::bdTaskResult
==============
*/
void bdTaskResult::bdTaskResult(bdTaskResult *this)
{
  this->__vftable = (bdTaskResult_vtbl *)&bdTaskResult::`vftable'{for `bdTaskResult'};
  *(bdTaskResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTaskResult_vtbl *)&bdTaskResult::`vftable'{for `bdReferencable'};
}

/*
==============
bdTaskResult::~bdTaskResult
==============
*/
void bdTaskResult::~bdTaskResult(bdTaskResult *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTaskResult::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 8) = &bdTaskResult::`vftable'{for `bdReferencable'};
}

