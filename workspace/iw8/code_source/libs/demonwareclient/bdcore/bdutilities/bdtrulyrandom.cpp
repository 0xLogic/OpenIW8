/*
==============
bdTrulyRandomImpl::bdTrulyRandomImpl
==============
*/

void __fastcall bdTrulyRandomImpl::bdTrulyRandomImpl(bdTrulyRandomImpl *this)
{
  ??0bdTrulyRandomImpl@@IEAA@XZ(this);
}

/*
==============
bdTrulyRandomImpl::getRandomUByte8
==============
*/

void __fastcall bdTrulyRandomImpl::getRandomUByte8(bdTrulyRandomImpl *this, unsigned __int8 *in, const unsigned int length)
{
  ?getRandomUByte8@bdTrulyRandomImpl@@QEBAXQEAEI@Z(this, in, length);
}

/*
==============
bdTrulyRandomImpl::getRandomUInt64
==============
*/

unsigned __int64 __fastcall bdTrulyRandomImpl::getRandomUInt64(bdTrulyRandomImpl *this)
{
  return ?getRandomUInt64@bdTrulyRandomImpl@@QEBA_KXZ(this);
}

/*
==============
bdTrulyRandomImpl::getRandomUInt
==============
*/

unsigned int __fastcall bdTrulyRandomImpl::getRandomUInt(bdTrulyRandomImpl *this)
{
  return ?getRandomUInt@bdTrulyRandomImpl@@QEBAIXZ(this);
}

/*
==============
bdTrulyRandomImpl::bdTrulyRandomImpl
==============
*/
void bdTrulyRandomImpl::bdTrulyRandomImpl(bdTrulyRandomImpl *this)
{
  ;
}

/*
==============
bdTrulyRandomImpl::getRandomUByte8
==============
*/
void bdTrulyRandomImpl::getRandomUByte8(bdTrulyRandomImpl *this, unsigned __int8 *in, const unsigned int length)
{
  bdGetRandomUChar8(in, length);
}

/*
==============
bdTrulyRandomImpl::getRandomUInt64
==============
*/
__int64 bdTrulyRandomImpl::getRandomUInt64(bdTrulyRandomImpl *this)
{
  __int64 in; 

  in = 0i64;
  bdGetRandomUChar8((unsigned __int8 *)&in, 8u);
  return in;
}

/*
==============
bdTrulyRandomImpl::getRandomUInt
==============
*/
__int64 bdTrulyRandomImpl::getRandomUInt(bdTrulyRandomImpl *this)
{
  unsigned int in; 

  in = 0;
  bdGetRandomUChar8((unsigned __int8 *)&in, 4u);
  return in;
}

