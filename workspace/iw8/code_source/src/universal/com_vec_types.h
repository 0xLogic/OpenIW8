/*
==============
base_vec4_t<int>::operator[]
==============
*/

int *__fastcall base_vec4_t<int>::operator[](base_vec4_t<int> *this, int idx)
{
  return ??A?$base_vec4_t@H@@QEAAAEAHH@Z(this, idx);
}

/*
==============
base_vec3_t<int>::operator[]
==============
*/

int *__fastcall base_vec3_t<int>::operator[](base_vec3_t<int> *this, int idx)
{
  return ??A?$base_vec3_t@H@@QEAAAEAHH@Z(this, idx);
}

/*
==============
base_vec3_t<int>::operator[]
==============
*/

int __fastcall base_vec3_t<int>::operator[](base_vec3_t<int> *this, int idx)
{
  return ??A?$base_vec3_t@H@@QEBAHH@Z(this, idx);
}

/*
==============
base_vec3_t<int>::operator[]
==============
*/
__int64 base_vec3_t<int>::operator[](base_vec3_t<int> *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx < 3 )
    return (unsigned int)this->v[idx];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 3) )
    __debugbreak();
  return (unsigned int)this->v[v2];
}

/*
==============
base_vec3_t<int>::operator[]
==============
*/
int *base_vec3_t<int>::operator[](base_vec3_t<int> *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 3) )
    __debugbreak();
  return (int *)((char *)this + 4 * v2);
}

/*
==============
base_vec4_t<int>::operator[]
==============
*/
int *base_vec4_t<int>::operator[](base_vec4_t<int> *this, int idx)
{
  __int64 v2; 

  v2 = idx;
  if ( (unsigned int)idx >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 61, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", idx, 4) )
    __debugbreak();
  return (int *)this + v2;
}

