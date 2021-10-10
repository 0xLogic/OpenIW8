/*
==============
bdMax<float>
==============
*/

const float *__fastcall bdMax<float>(const float *first, const float *second)
{
  return ??$bdMax@M@@YAAEBMAEBM0@Z(first, second);
}

/*
==============
bdMax<float>
==============
*/
const float *bdMax<float>(const float *first, const float *second)
{
  if ( *first < *second )
    return second;
  return first;
}

