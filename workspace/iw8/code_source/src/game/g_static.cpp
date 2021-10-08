/*
==============
GStatic::GetLeftHandIKTargetModel
==============
*/

XModel *__fastcall GStatic::GetLeftHandIKTargetModel(GStatic *this)
{
  return ?GetLeftHandIKTargetModel@GStatic@@UEBAPEAUXModel@@XZ(this);
}

/*
==============
GStatic::CreateWeaponPhysics
==============
*/

void __fastcall GStatic::CreateWeaponPhysics(GStatic *this, const DObj *obj, const Weapon *heldWeapon)
{
  ?CreateWeaponPhysics@GStatic@@UEAAXPEBUDObj@@AEBUWeapon@@@Z(this, obj, heldWeapon);
}

/*
==============
GStatic::WeaponModelLoadStatusMaybeDirtyThisFrame
==============
*/

bool __fastcall GStatic::WeaponModelLoadStatusMaybeDirtyThisFrame(GStatic *this)
{
  return ?WeaponModelLoadStatusMaybeDirtyThisFrame@GStatic@@UEBA_NXZ(this);
}

/*
==============
GStatic::IsClient
==============
*/

bool __fastcall GStatic::IsClient(GStatic *this)
{
  return ?IsClient@GStatic@@UEBA_NXZ(this);
}

/*
==============
GStatic::IsWeaponWorldModelLoaded
==============
*/

bool __fastcall GStatic::IsWeaponWorldModelLoaded(GStatic *this, const Weapon *r_weapon)
{
  return ?IsWeaponWorldModelLoaded@GStatic@@UEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
GStatic::GetOrigin
==============
*/

void __fastcall GStatic::GetOrigin(GStatic *this, int entIndex, vec3_t *outOrigin)
{
  ?GetOrigin@GStatic@@UEBAXHAEATvec3_t@@@Z(this, entIndex, outOrigin);
}

/*
==============
GStatic::GetDObj
==============
*/

DObj *__fastcall GStatic::GetDObj(GStatic *this, int handle)
{
  return ?GetDObj@GStatic@@UEBAPEAUDObj@@H@Z(this, handle);
}

/*
==============
GStatic::GetRightHandIKTargetModel
==============
*/

XModel *__fastcall GStatic::GetRightHandIKTargetModel(GStatic *this)
{
  return ?GetRightHandIKTargetModel@GStatic@@UEBAPEAUXModel@@XZ(this);
}

/*
==============
GStatic::CreateWeaponPhysics
==============
*/
void GStatic::CreateWeaponPhysics(GStatic *this, const DObj *obj, const Weapon *heldWeapon)
{
  unsigned __int16 v4; 

  if ( BG_IsRiotShield(heldWeapon, 0) )
  {
    v4 = 0;
    if ( obj->numModels )
    {
      while ( !BG_Weapons_IsRiotShieldModel(obj->models[v4]) )
      {
        if ( ++v4 >= obj->numModels )
          return;
      }
      G_Weapon_DestroyRiotShieldPhysics(obj->entnum - 1);
      G_Weapon_CreateRiotShieldPhysics(obj, v4, obj->entnum - 1);
    }
  }
}

/*
==============
GStatic::GetDObj
==============
*/
DObj *GStatic::GetDObj(GStatic *this, int handle)
{
  return Com_GetServerDObjForEntnum(handle);
}

/*
==============
GStatic::GetLeftHandIKTargetModel
==============
*/
XModel *GStatic::GetLeftHandIKTargetModel(GStatic *this)
{
  return level.tagIKTargetModelLeft;
}

/*
==============
GStatic::GetOrigin
==============
*/
void GStatic::GetOrigin(GStatic *this, int entIndex, vec3_t *outOrigin)
{
  __int64 v3; 
  gentity_s *v5; 
  int v7; 

  v3 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v7) )
      __debugbreak();
  }
  v5 = g_entities;
  outOrigin->v[0] = g_entities[v3].r.currentOrigin.v[0];
  outOrigin->v[1] = v5[v3].r.currentOrigin.v[1];
  outOrigin->v[2] = v5[v3].r.currentOrigin.v[2];
}

/*
==============
GStatic::GetRightHandIKTargetModel
==============
*/
XModel *GStatic::GetRightHandIKTargetModel(GStatic *this)
{
  return level.tagIKTargetModelRight;
}

/*
==============
GStatic::IsClient
==============
*/
bool GStatic::IsClient(GStatic *this)
{
  return 0;
}

/*
==============
GStatic::IsWeaponWorldModelLoaded
==============
*/
char GStatic::IsWeaponWorldModelLoaded(GStatic *this, const Weapon *r_weapon)
{
  return 1;
}

/*
==============
GStatic::WeaponModelLoadStatusMaybeDirtyThisFrame
==============
*/
bool GStatic::WeaponModelLoadStatusMaybeDirtyThisFrame(GStatic *this)
{
  return 0;
}

