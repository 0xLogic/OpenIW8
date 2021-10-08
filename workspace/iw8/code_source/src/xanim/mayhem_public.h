/*
==============
MayhemObj::MayhemObj
==============
*/

void __fastcall MayhemObj::MayhemObj(MayhemObj *this)
{
  ??0MayhemObj@@QEAA@XZ(this);
}

/*
==============
MayhemObj::MayhemObj
==============
*/
void MayhemObj::MayhemObj(MayhemObj *this)
{
  cpose_t *pose; 
  __int64 v2; 

  pose = this->pose;
  v2 = 16i64;
  do
  {
    cpose_t::cpose_t(pose++);
    --v2;
  }
  while ( v2 );
}

