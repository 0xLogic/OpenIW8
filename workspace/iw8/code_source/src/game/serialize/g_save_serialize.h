/*
==============
GSaveSerialize<3>::SerializeType<trajectory_t_secure>
==============
*/

void __fastcall GSaveSerialize<3>::SerializeType<trajectory_t_secure>(GSaveSerialize<3> *this, trajectory_t_secure *traj)
{
  ??$SerializeType@Utrajectory_t_secure@@@?$GSaveSerialize@$02@@QEAAXAEAUtrajectory_t_secure@@@Z(this, traj);
}

/*
==============
GSaveSerialize<2>::SerializeInternal
==============
*/

void __fastcall GSaveSerialize<2>::SerializeInternal(GSaveSerialize<2> *this, void *data, const unsigned int dataSize)
{
  ?SerializeInternal@?$GSaveSerialize@$01@@AEAAXPEAXI@Z(this, data, dataSize);
}

/*
==============
GSaveSerialize<3>::SerializeInternal
==============
*/

void __fastcall GSaveSerialize<3>::SerializeInternal(GSaveSerialize<3> *this, void *data, const unsigned int dataSize)
{
  ?SerializeInternal@?$GSaveSerialize@$02@@AEAAXPEAXI@Z(this, data, dataSize);
}

/*
==============
GSaveSerialize<1>::SerializeInternal
==============
*/

void __fastcall GSaveSerialize<1>::SerializeInternal(GSaveSerialize<1> *this, void *data, const unsigned int dataSize)
{
  ?SerializeInternal@?$GSaveSerialize@$00@@AEAAXPEAXI@Z(this, data, dataSize);
}

/*
==============
GSaveSerialize<1>::SerializeType<trajectory_t_secure>
==============
*/

void __fastcall GSaveSerialize<1>::SerializeType<trajectory_t_secure>(GSaveSerialize<1> *this, trajectory_t_secure *traj)
{
  ??$SerializeType@Utrajectory_t_secure@@@?$GSaveSerialize@$00@@QEAAXAEAUtrajectory_t_secure@@@Z(this, traj);
}

/*
==============
GSaveSerialize<0>::SerializeInternal
==============
*/

void __fastcall GSaveSerialize<0>::SerializeInternal(GSaveSerialize<0> *this, void *data, const unsigned int dataSize)
{
  ?SerializeInternal@?$GSaveSerialize@$0A@@@AEAAXPEAXI@Z(this, data, dataSize);
}

/*
==============
GSaveSerialize<1>::SerializeType<trajectory_t_secure>
==============
*/
void GSaveSerialize<1>::SerializeType<trajectory_t_secure>(GSaveSerialize<1> *this, trajectory_t_secure *traj)
{
  vec3_t data; 

  GSaveSerialize<1>::SerializeInternal(this, traj, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &traj->trTime, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &traj->trDuration, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &traj->trDelta, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &traj->trDelta.y, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &traj->trDelta.z, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &data, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &data.y, 4u);
  GSaveSerialize<1>::SerializeInternal(this, &data.z, 4u);
  Trajectory_SetTrBase(traj, &data);
}

/*
==============
GSaveSerialize<3>::SerializeType<trajectory_t_secure>
==============
*/
void GSaveSerialize<3>::SerializeType<trajectory_t_secure>(GSaveSerialize<3> *this, trajectory_t_secure *traj)
{
  vec3_t trBase; 

  GSaveSerialize<3>::SerializeInternal(this, traj, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &traj->trTime, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &traj->trDuration, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &traj->trDelta, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &traj->trDelta.y, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &traj->trDelta.z, 4u);
  Trajectory_GetTrBase(traj, &trBase);
  GSaveSerialize<3>::SerializeInternal(this, &trBase, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &trBase.y, 4u);
  GSaveSerialize<3>::SerializeInternal(this, &trBase.z, 4u);
}

/*
==============
GSaveSerialize<1>::SerializeInternal
==============
*/
void GSaveSerialize<1>::SerializeInternal(GSaveSerialize<1> *this, void *data, const unsigned int dataSize)
{
  size_t v4; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int m_bufferSize; 

  v4 = dataSize;
  v6 = dataSize + this->m_bufferUseCount;
  if ( v6 > this->m_bufferSize )
  {
    m_bufferSize = this->m_bufferSize;
    v7 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 252, ASSERT_TYPE_ASSERT, "( m_bufferUseCount + dataSize ) <= ( m_bufferSize )", "m_bufferUseCount + dataSize <= m_bufferSize\n\t%i, %i", v7, m_bufferSize) )
      __debugbreak();
  }
  memcpy_0(data, &this->m_buffer[this->m_bufferUseCount], v4);
  this->m_bufferUseCount += v4;
}

/*
==============
GSaveSerialize<2>::SerializeInternal
==============
*/
void GSaveSerialize<2>::SerializeInternal(GSaveSerialize<2> *this, void *data, const unsigned int dataSize)
{
  MemFile_WriteData(this->m_memFile, dataSize, data);
}

/*
==============
GSaveSerialize<3>::SerializeInternal
==============
*/
void GSaveSerialize<3>::SerializeInternal(GSaveSerialize<3> *this, void *data, const unsigned int dataSize)
{
  size_t v4; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int m_bufferSize; 

  v4 = dataSize;
  v6 = dataSize + this->m_bufferUseCount;
  if ( v6 > this->m_bufferSize )
  {
    m_bufferSize = this->m_bufferSize;
    v7 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\serialize\\g_save_serialize.h", 246, ASSERT_TYPE_ASSERT, "( m_bufferUseCount + dataSize ) <= ( m_bufferSize )", "m_bufferUseCount + dataSize <= m_bufferSize\n\t%i, %i", v7, m_bufferSize) )
      __debugbreak();
  }
  memcpy_0(&this->m_buffer[this->m_bufferUseCount], data, v4);
  this->m_bufferUseCount += v4;
}

/*
==============
GSaveSerialize<0>::SerializeInternal
==============
*/
void GSaveSerialize<0>::SerializeInternal(GSaveSerialize<0> *this, void *data, const unsigned int dataSize)
{
  MemFile_ReadData(this->m_memFile, dataSize, data);
}

