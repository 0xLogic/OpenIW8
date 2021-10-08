/*
==============
hkpConstraintData::isBuildJacobianCallbackRequired
==============
*/

hkBool *__fastcall hkpConstraintData::isBuildJacobianCallbackRequired(hkpConstraintData *this, hkBool *result)
{
  return ?isBuildJacobianCallbackRequired@hkpConstraintData@@UEBA?AVhkBool@@XZ(this, result);
}

/*
==============
hkpConstraintData::isBuildJacobianCallbackRequired
==============
*/
hkBool *hkpConstraintData::isBuildJacobianCallbackRequired(hkpConstraintData *this, hkBool *result)
{
  result->m_bool = 0;
  return result;
}

