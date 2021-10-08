/*
==============
hknpShapeInstance::isEmpty
==============
*/

unsigned int __fastcall hknpShapeInstance::isEmpty(const hknpShapeInstance *shapeInstance)
{
  return ?isEmpty@hknpShapeInstance@@SAIAEBU1@@Z(shapeInstance);
}

/*
==============
hknpShapeInstance::isEmpty
==============
*/
__int64 hknpShapeInstance::isEmpty(const hknpShapeInstance *shapeInstance)
{
  return shapeInstance->m_isEmpty;
}

