/*
==============
AutomatedInput_KeyBits::AutomatedInput_KeyBits
==============
*/

void __fastcall AutomatedInput_KeyBits::AutomatedInput_KeyBits(AutomatedInput_KeyBits *this, int keyNum)
{
  ??0AutomatedInput_KeyBits@@QEAA@H@Z(this, keyNum);
}

/*
==============
AutomatedInput_KeyBits::AutomatedInput_KeyBits
==============
*/
void AutomatedInput_KeyBits::AutomatedInput_KeyBits(AutomatedInput_KeyBits *this, int keyNum)
{
  unsigned __int64 v2; 

  v2 = (unsigned int)keyNum;
  *(_QWORD *)this->keyBits.array = 0i64;
  *(_QWORD *)&this->keyBits.array[2] = 0i64;
  *(_QWORD *)&this->keyBits.array[4] = 0i64;
  this->keyBits.array[6] = 0;
  if ( keyNum )
  {
    if ( (unsigned int)keyNum >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", keyNum, 224) )
      __debugbreak();
    this->keyBits.array[v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
  }
}

