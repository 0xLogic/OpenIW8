/*
==============
vec4_t::operator[]
==============
*/

const float *__fastcall vec4_t::operator[](vec4_t *this, int idx)
{
  return ??Avec4_t@@QEBAAEBMH@Z(this, idx);
}

/*
==============
tmat43_t<vec3_t>::operator[]
==============
*/

const vec3_t *__fastcall tmat43_t<vec3_t>::operator[](tmat43_t<vec3_t> *this, int idx)
{
  return ??A?$tmat43_t@Tvec3_t@@@@QEBAAEBTvec3_t@@H@Z(this, idx);
}

/*
==============
vec3_t::operator[]
==============
*/

const float *__fastcall vec3_t::operator[](vec3_t *this, int idx)
{
  return ??Avec3_t@@QEBAAEBMH@Z(this, idx);
}

/*
==============
vec2_t::operator[]
==============
*/

float *__fastcall vec2_t::operator[](vec2_t *this, int idx)
{
  return ??Avec2_t@@QEAAAEAMH@Z(this, idx);
}

/*
==============
vec3_t::operator[]
==============
*/

float *__fastcall vec3_t::operator[](vec3_t *this, int idx)
{
  return ??Avec3_t@@QEAAAEAMH@Z(this, idx);
}

/*
==============
vec4_t::operator[]
==============
*/

float *__fastcall vec4_t::operator[](vec4_t *this, int idx)
{
  return ??Avec4_t@@QEAAAEAMH@Z(this, idx);
}

/*
==============
vec2_t::operator[]
==============
*/

const float *__fastcall vec2_t::operator[](vec2_t *this, int idx)
{
  return ??Avec2_t@@QEBAAEBMH@Z(this, idx);
}

/*
==============
vec3_t::operator[]
==============
*/
float *vec3_t::operator[](vec3_t *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 3) )
    __debugbreak();
  return (float *)((char *)this + 4 * v2);
}

/*
==============
tmat43_t<vec3_t>::operator[]
==============
*/
const vec3_t *tmat43_t<vec3_t>::operator[](tmat43_t<vec3_t> *this, int idx)
{
  __int64 v2; 
  int v6; 

  v2 = idx;
  if ( (unsigned int)idx >= 4 )
  {
    v6 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", idx, v6) )
      __debugbreak();
  }
  return (const vec3_t *)((char *)this + 12 * v2);
}

/*
==============
vec3_t::operator[]
==============
*/
const float *vec3_t::operator[](vec3_t *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 3) )
    __debugbreak();
  return (const float *)((char *)this + 4 * v2);
}

/*
==============
vec4_t::operator[]
==============
*/
float *vec4_t::operator[](vec4_t *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 4) )
    __debugbreak();
  return (float *)this + v2;
}

/*
==============
vec4_t::operator[]
==============
*/
const float *vec4_t::operator[](vec4_t *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 4) )
    __debugbreak();
  return (const float *)this + v2;
}

/*
==============
vec2_t::operator[]
==============
*/
float *vec2_t::operator[](vec2_t *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 2) )
    __debugbreak();
  return (float *)this + v2;
}

/*
==============
vec2_t::operator[]
==============
*/
const float *vec2_t::operator[](vec2_t *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 2) )
    __debugbreak();
  return (const float *)this + v2;
}

