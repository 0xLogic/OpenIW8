/*
==============
bdCompression::compressBound
==============
*/

int __fastcall bdCompression::compressBound(int srcLen)
{
  return ?compressBound@bdCompression@@SAHH@Z(srcLen);
}

/*
==============
bdCompression::compress
==============
*/

int __fastcall bdCompression::compress(unsigned __int8 *des, int *desLen, const unsigned __int8 *src, int srcLen)
{
  return ?compress@bdCompression@@SAHPEAEPEAHPEBEH@Z(des, desLen, src, srcLen);
}

/*
==============
bdCompression::uncompress
==============
*/

int __fastcall bdCompression::uncompress(unsigned __int8 *des, int *desLen, const unsigned __int8 *src, int srcLen)
{
  return ?uncompress@bdCompression@@SAHPEAEPEAHPEBEH@Z(des, desLen, src, srcLen);
}

/*
==============
bdCompression::compress
==============
*/
__int64 bdCompression::compress(unsigned __int8 *des, int *desLen, const unsigned __int8 *src, int srcLen)
{
  unsigned int v6; 
  bdDeflate v8; 
  int srcLena; 

  srcLena = srcLen;
  if ( !desLen )
    return 0i64;
  bdDeflate::bdDeflate(&v8, des, *desLen, 14);
  v6 = bdDeflate::deflate(&v8, src, &srcLena, BD_FLUSH_CLOSE);
  *desLen = bdDeflate::size(&v8);
  if ( srcLena )
    v6 = -5;
  bdDeflate::~bdDeflate(&v8);
  return v6;
}

/*
==============
bdCompression::compressBound
==============
*/
__int64 bdCompression::compressBound(int srcLen)
{
  return (unsigned int)srcLen;
}

/*
==============
bdCompression::uncompress
==============
*/
__int64 bdCompression::uncompress(unsigned __int8 *des, int *desLen, const unsigned __int8 *src, int srcLen)
{
  unsigned int v6; 
  bdInflate v8; 
  int srcLena; 

  srcLena = srcLen;
  if ( !desLen )
    return 4294967292i64;
  bdInflate::bdInflate(&v8, des, *desLen);
  v6 = bdInflate::inflate(&v8, src, &srcLena, BD_FLUSH_CLOSE);
  *desLen = bdInflate::size(&v8);
  if ( srcLena )
    v6 = -5;
  bdInflate::~bdInflate(&v8);
  return v6;
}

