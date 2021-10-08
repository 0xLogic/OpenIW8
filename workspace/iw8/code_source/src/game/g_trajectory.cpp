/*
==============
GTrajectory::GetDObj
==============
*/

DObj *__fastcall GTrajectory::GetDObj(GTrajectory *this)
{
  return ?GetDObj@GTrajectory@@QEBAPEAUDObj@@XZ(this);
}

/*
==============
GTrajectory::GetPhysicsWorld
==============
*/

int __fastcall GTrajectory::GetPhysicsWorld(GTrajectory *this)
{
  return ?GetPhysicsWorld@GTrajectory@@UEBAHXZ(this);
}

/*
==============
GTrajectory::GetTargetPos
==============
*/

bool __fastcall GTrajectory::GetTargetPos(GTrajectory *this, vec3_t *outPos)
{
  return ?GetTargetPos@GTrajectory@@UEBA_NAEATvec3_t@@@Z(this, outPos);
}

/*
==============
GTrajectory::GTrajectory
==============
*/

void __fastcall GTrajectory::GTrajectory(GTrajectory *this, const gentity_s *ent)
{
  ??0GTrajectory@@QEAA@PEBUgentity_s@@@Z(this, ent);
}

/*
==============
GTrajectory::IsClient
==============
*/

bool __fastcall GTrajectory::IsClient(GTrajectory *this)
{
  return ?IsClient@GTrajectory@@UEBA_NXZ(this);
}

/*
==============
GTrajectory::GTrajectory
==============
*/
void GTrajectory::GTrajectory(GTrajectory *this, const gentity_s *ent)
{
  BgTrajectory::BgTrajectory(this);
  this->m_ent = ent;
  this->__vftable = (GTrajectory_vtbl *)&GTrajectory::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trajectory.cpp", 26, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  this->m_es = &ent->s.lerp;
}

/*
==============
GTrajectory::GetDObj
==============
*/
DObj *GTrajectory::GetDObj(GTrajectory *this)
{
  __int64 number; 
  __int64 v4; 

  if ( !this->m_ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trajectory.cpp", 39, ASSERT_TYPE_ASSERT, "(m_ent)", (const char *)&queryFormat, "m_ent") )
    __debugbreak();
  number = this->m_ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v4) = this->m_ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trajectory.cpp", 40, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( m_ent->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( m_ent->s.number )") )
    __debugbreak();
  return Com_GetServerDObjForEnt(this->m_ent);
}

/*
==============
GTrajectory::GetPhysicsWorld
==============
*/
__int64 GTrajectory::GetPhysicsWorld(GTrajectory *this)
{
  return 0i64;
}

/*
==============
GTrajectory::GetTargetPos
==============
*/
char GTrajectory::GetTargetPos(GTrajectory *this, vec3_t *outPos)
{
  const gentity_s *m_ent; 
  unsigned int m_mapEntryId; 
  unsigned __int64 v6; 
  gentity_s *v7; 
  char result; 
  __int64 v9; 
  int v10; 

  if ( !this->m_ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trajectory.cpp", 53, ASSERT_TYPE_ASSERT, "(m_ent)", (const char *)&queryFormat, "m_ent") )
    __debugbreak();
  m_ent = this->m_ent;
  if ( m_ent->s.eType != ET_MISSILE || (m_mapEntryId = m_ent->s.lerp.u.player.executionWeaponHandle.m_mapEntryId, m_mapEntryId == 2047) )
  {
    result = 0;
    *(_QWORD *)outPos->v = 0i64;
    outPos->v[2] = 0.0;
  }
  else
  {
    if ( m_mapEntryId >= 0x800 )
    {
      v10 = 2048;
      LODWORD(v9) = m_mapEntryId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trajectory.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( m_ent->s.lerp.u.missile.targetEnt ) < (unsigned)( ( 2048 ) )", "m_ent->s.lerp.u.missile.targetEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v6 = this->m_ent->s.lerp.u.anonymous.data[5];
    v7 = g_entities;
    outPos->v[0] = g_entities[v6].r.currentOrigin.v[0];
    outPos->v[1] = v7[v6].r.currentOrigin.v[1];
    outPos->v[2] = v7[v6].r.currentOrigin.v[2];
    return 1;
  }
  return result;
}

/*
==============
GTrajectory::IsClient
==============
*/
bool GTrajectory::IsClient(GTrajectory *this)
{
  return 0;
}

