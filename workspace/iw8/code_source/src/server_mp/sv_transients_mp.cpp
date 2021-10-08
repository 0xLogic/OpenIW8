/*
==============
SV_TransientsMP_IsTransientModel
==============
*/

bool __fastcall SV_TransientsMP_IsTransientModel(const char *name)
{
  return ?SV_TransientsMP_IsTransientModel@@YA_NPEBD@Z(name);
}

/*
==============
SV_TransientsMP_IsTransientModel
==============
*/
bool SV_TransientsMP_IsTransientModel(const char *name)
{
  return CL_TransientsMP_IsTransientAsset(name, ASSET_TYPE_XMODEL);
}

