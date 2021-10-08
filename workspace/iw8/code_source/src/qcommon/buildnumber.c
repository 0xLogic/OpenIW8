/*
==============
getBuildNumber
==============
*/
char *getBuildNumber()
{
  j_sprintf_s(buf, 0x80ui64, "%d %s", 7891135i64, "Sun Aug  9 12:16:19 2020");
  return buf;
}

/*
==============
getBuildNumberAsInt
==============
*/
__int64 getBuildNumberAsInt()
{
  return 7891135i64;
}

