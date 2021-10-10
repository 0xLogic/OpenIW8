/*
==============
Pow2TexturePacker<6,512>::GetOffset
==============
*/

unsigned int __fastcall Pow2TexturePacker<6,512>::GetOffset(Pow2TexturePacker<6,512> *this, unsigned int level)
{
  return ?GetOffset@?$Pow2TexturePacker@$05$0CAA@@@QEAAII@Z(this, level);
}

/*
==============
Pow2TexturePacker<6,512>::Reset
==============
*/

void __fastcall Pow2TexturePacker<6,512>::Reset(Pow2TexturePacker<6,512> *this)
{
  ?Reset@?$Pow2TexturePacker@$05$0CAA@@@QEAAXXZ(this);
}

/*
==============
Pow2TexturePacker<6,512>::GetOffset
==============
*/

unsigned int __fastcall Pow2TexturePacker<6,512>::GetOffset(Pow2TexturePacker<6,512> *this)
{
  return ?GetOffset@?$Pow2TexturePacker@$05$0CAA@@@QEAAIXZ(this);
}

/*
==============
Pow2TexturePacker<6,512>::GetUVs
==============
*/

bool __fastcall Pow2TexturePacker<6,512>::GetUVs(Pow2TexturePacker<6,512> *this, unsigned int level, unsigned int *textureOffset, float *u, float *v, float *d)
{
  return ?GetUVs@?$Pow2TexturePacker@$05$0CAA@@@QEAA_NIPEAIPEAM11@Z(this, level, textureOffset, u, v, d);
}

/*
==============
Pow2TexturePacker<6,512>::GetOffset
==============
*/
unsigned int Pow2TexturePacker<6,512>::GetOffset(Pow2TexturePacker<6,512> *this, unsigned int level)
{
  __int64 v2; 
  unsigned int v4; 
  unsigned int result; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 

  v2 = level;
  if ( level >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_lightmap_packer.h", 70, ASSERT_TYPE_ASSERT, "(level < LEVELS)", (const char *)&queryFormat, "level < LEVELS") )
    __debugbreak();
  v4 = this->m_count[v2];
  if ( v4 )
  {
    if ( (_DWORD)v2 == 5 )
    {
      v7 = this->m_count[5];
      this->m_count[5] = v7 - 1;
      return 32 * (((256 - v7) >> 4) + ((-(char)v7 & 0xF) << 16));
    }
    else
    {
      v8 = v4 - 1;
      this->m_count[v2] = v8;
      return this->m_offsets[v2][v8];
    }
  }
  else if ( (unsigned int)(v2 + 1) >= 6 )
  {
    return -1;
  }
  else
  {
    result = Pow2TexturePacker<6,512>::GetOffset(this, v2 + 1);
    if ( result != -1 )
    {
      this->m_count[v2] = 3;
      v6 = v2;
      this->m_offsets[v6][2] = (1 << v2 << 16) + result;
      this->m_offsets[v6][1] = (1 << v2) + result;
      this->m_offsets[v2][0] = result + 65537 * (1 << v2);
    }
  }
  return result;
}

/*
==============
Pow2TexturePacker<6,512>::GetOffset
==============
*/
__int64 Pow2TexturePacker<6,512>::GetOffset(Pow2TexturePacker<6,512> *this)
{
  unsigned int v1; 

  v1 = this->m_count[5];
  this->m_count[5] = v1 - 1;
  return 32 * (((256 - v1) >> 4) + ((-(char)v1 & 0xF) << 16));
}

/*
==============
Pow2TexturePacker<6,512>::GetUVs
==============
*/
char Pow2TexturePacker<6,512>::GetUVs(Pow2TexturePacker<6,512> *this, unsigned int level, unsigned int *textureOffset, float *u, float *v, float *d)
{
  char v8; 
  unsigned int Offset; 
  float v10; 
  float v11; 

  v8 = level;
  Offset = Pow2TexturePacker<6,512>::GetOffset(this, level);
  if ( Offset == -1 )
    return 0;
  v10 = (float)HIWORD(Offset);
  *u = (float)(v10 * 0.001953125) + 0.0009765625;
  v11 = (float)(unsigned __int16)Offset;
  *v = (float)(v11 * 0.001953125) + 0.0009765625;
  *d = (float)((float)(1 << v8) * 0.001953125) - 0.001953125;
  *textureOffset = Offset;
  return 1;
}

/*
==============
Pow2TexturePacker<6,512>::Reset
==============
*/
void Pow2TexturePacker<6,512>::Reset(Pow2TexturePacker<6,512> *this)
{
  *(_QWORD *)this->m_count = 0i64;
  *(_QWORD *)&this->m_count[2] = 0i64;
  this->m_count[4] = 0;
  this->m_count[5] = 256;
  *(_OWORD *)&this->m_offsets[0][0] = 0ui64;
  *(_QWORD *)&this->m_offsets[1][1] = 0i64;
  *(_OWORD *)&this->m_offsets[2][0] = 0ui64;
  *(_QWORD *)&this->m_offsets[3][1] = 0i64;
  *(_QWORD *)&this->m_offsets[4][0] = 0i64;
  this->m_offsets[4][2] = 0;
}

