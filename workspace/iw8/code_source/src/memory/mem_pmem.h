/*
==============
PMem_ScopedBeginEndAlloc::~PMem_ScopedBeginEndAlloc
==============
*/

void __fastcall PMem_ScopedBeginEndAlloc::~PMem_ScopedBeginEndAlloc(PMem_ScopedBeginEndAlloc *this)
{
  ??1PMem_ScopedBeginEndAlloc@@QEAA@XZ(this);
}

/*
==============
PMem_ScopedBeginEndAlloc::~PMem_ScopedBeginEndAlloc
==============
*/
void PMem_ScopedBeginEndAlloc::~PMem_ScopedBeginEndAlloc(PMem_ScopedBeginEndAlloc *this)
{
  PMem_EndAlloc(this->_name, this->_stack);
}

