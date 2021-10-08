/*
==============
GetBucketMatch
==============
*/

unsigned int __fastcall GetBucketMatch(unsigned int parentId, unsigned int name)
{
  return ?GetBucketMatch@@YAIII@Z(parentId, name);
}

/*
==============
ChildVariableValue::GetName
==============
*/

unsigned int __fastcall ChildVariableValue::GetName(ChildVariableValue *this)
{
  return ?GetName@ChildVariableValue@@QEBAIXZ(this);
}

/*
==============
ObjectVariableValue::GetSelf
==============
*/

unsigned int __fastcall ObjectVariableValue::GetSelf(ObjectVariableValue *this)
{
  return ?GetSelf@ObjectVariableValue@@QEBAIXZ(this);
}

/*
==============
GetBucketMatch
==============
*/
__int64 GetBucketMatch(unsigned int parentId, unsigned int name)
{
  if ( (name & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 243, ASSERT_TYPE_ASSERT, "( !(static_cast< unsigned >( name ) & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(static_cast< unsigned >( name ) & ~VAR_NAME_LOW_MASK)") )
    __debugbreak();
  return (parentId << 14) | (name >> 10) & 0x3FFF;
}

/*
==============
ChildVariableValue::GetName
==============
*/
__int64 ChildVariableValue::GetName(ChildVariableValue *this)
{
  if ( this->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
    __debugbreak();
  return ((this->k.match & 0x3FFF) << 10) + (*(_WORD *)&this->tn >> 6);
}

/*
==============
ObjectVariableValue::GetSelf
==============
*/
__int64 ObjectVariableValue::GetSelf(ObjectVariableValue *this)
{
  if ( (unsigned __int8)(LOBYTE(this->w.type) - 17) <= 3u )
    return this->u.f.next;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 193, ASSERT_TYPE_ASSERT, "( GetType() == VAR_THREAD || GetType() == VAR_TIME_THREAD || GetType() == VAR_CHILD_THREAD || GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "GetType() == VAR_THREAD || GetType() == VAR_TIME_THREAD || GetType() == VAR_CHILD_THREAD || GetType() == VAR_NOTIFY_THREAD") )
    __debugbreak();
  return this->u.f.next;
}

