/*
==============
SecureInt::~SecureInt
==============
*/

void __fastcall SecureInt::~SecureInt(SecureInt *this)
{
  ??1SecureInt@@QEAA@XZ(this);
}

/*
==============
SecureVec2::~SecureVec2
==============
*/

void __fastcall SecureVec2::~SecureVec2(SecureVec2 *this)
{
  ??1SecureVec2@@QEAA@XZ(this);
}

/*
==============
SecureVec3::operator[]
==============
*/

float *__fastcall SecureVec3::operator[](SecureVec3 *this, int idx)
{
  return ??ASecureVec3@@QEAAAEAMH@Z(this, idx);
}

/*
==============
SecureVec3::~SecureVec3
==============
*/

void __fastcall SecureVec3::~SecureVec3(SecureVec3 *this)
{
  ??1SecureVec3@@QEAA@XZ(this);
}

/*
==============
SecureVec3::SecureVec3
==============
*/

void __fastcall SecureVec3::SecureVec3(SecureVec3 *this)
{
  ??0SecureVec3@@QEAA@XZ(this);
}

/*
==============
SecureVec3::~SecureVec3
==============
*/
void SecureVec3::~SecureVec3(SecureVec3 *this)
{
  memset(this, 0, sizeof(SecureVec3));
}

/*
==============
SecureVec3::operator[]
==============
*/
float *SecureVec3::operator[](SecureVec3 *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 3) )
    __debugbreak();
  return (float *)((char *)this + 4 * v2);
}

/*
==============
SecureInt::~SecureInt
==============
*/
void SecureInt::~SecureInt(SecureInt *this)
{
  memset(this, 0, sizeof(SecureInt));
}

/*
==============
SecureVec2::~SecureVec2
==============
*/
void SecureVec2::~SecureVec2(SecureVec2 *this)
{
  memset(this, 0, sizeof(SecureVec2));
}

/*
==============
SecureVec3::SecureVec3
==============
*/
void SecureVec3::SecureVec3(SecureVec3 *this)
{
  ;
}

