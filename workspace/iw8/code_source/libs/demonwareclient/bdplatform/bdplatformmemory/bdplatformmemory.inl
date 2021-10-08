/*
==============
bdMemset
==============
*/

void *__fastcall bdMemset(void *const s, const int c, const unsigned __int64 len)
{
  return ?bdMemset@@YAPEAXQEAXH_K@Z(s, c, len);
}

/*
==============
bdMemset
==============
*/
void *bdMemset(void *const s, const int c, const unsigned __int64 len)
{
  memset_0(s, c, len);
  return s;
}

