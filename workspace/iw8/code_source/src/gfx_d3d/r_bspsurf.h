/*
==============
R_SurfHasTessFactors
==============
*/

bool __fastcall R_SurfHasTessFactors(unsigned int tessellation)
{
  return ?R_SurfHasTessFactors@@YA_NI@Z(tessellation);
}

/*
==============
R_SurfHasTessFactors
==============
*/
bool R_SurfHasTessFactors(unsigned int tessellation)
{
  return ((tessellation - 1) & 0xFFFFFFFC) == 0 && tessellation != 2;
}

