/*
==============
DB_TransientFileType_IsWorld
==============
*/

bool __fastcall DB_TransientFileType_IsWorld(const TransientFileType transientType)
{
  return ?DB_TransientFileType_IsWorld@@YA_NW4TransientFileType@@@Z(transientType);
}

/*
==============
DB_TransientFileType_IsSP
==============
*/

bool __fastcall DB_TransientFileType_IsSP(const TransientFileType transientType)
{
  return ?DB_TransientFileType_IsSP@@YA_NW4TransientFileType@@@Z(transientType);
}

/*
==============
DB_TransientFileType_IsMPInfil
==============
*/

bool __fastcall DB_TransientFileType_IsMPInfil(const TransientFileType transientType)
{
  return ?DB_TransientFileType_IsMPInfil@@YA_NW4TransientFileType@@@Z(transientType);
}

/*
==============
DB_TransientFileType_IsMPCustomization
==============
*/

bool __fastcall DB_TransientFileType_IsMPCustomization(const TransientFileType transientType)
{
  return ?DB_TransientFileType_IsMPCustomization@@YA_NW4TransientFileType@@@Z(transientType);
}

/*
==============
DB_TransientFileType_IsMP
==============
*/

bool __fastcall DB_TransientFileType_IsMP(const TransientFileType transientType)
{
  return ?DB_TransientFileType_IsMP@@YA_NW4TransientFileType@@@Z(transientType);
}

/*
==============
DB_TransientFileType_IsMPCommon
==============
*/

bool __fastcall DB_TransientFileType_IsMPCommon(const TransientFileType transientType)
{
  return ?DB_TransientFileType_IsMPCommon@@YA_NW4TransientFileType@@@Z(transientType);
}

/*
==============
DB_TransientFileType_IsMP
==============
*/
bool DB_TransientFileType_IsMP(const TransientFileType transientType)
{
  return (unsigned __int8)transientType >= (unsigned int)COUNT && ((unsigned __int8)transientType <= 5u || (unsigned __int8)(transientType - 7) <= 6u);
}

/*
==============
DB_TransientFileType_IsMPCommon
==============
*/
bool DB_TransientFileType_IsMPCommon(const TransientFileType transientType)
{
  return (unsigned __int8)(transientType - 7) <= 6u;
}

/*
==============
DB_TransientFileType_IsMPCustomization
==============
*/
bool DB_TransientFileType_IsMPCustomization(const TransientFileType transientType)
{
  return (unsigned __int8)(transientType - 7) <= 2u;
}

/*
==============
DB_TransientFileType_IsMPInfil
==============
*/
bool DB_TransientFileType_IsMPInfil(const TransientFileType transientType)
{
  return (unsigned __int8)(transientType - 4) <= 1u;
}

/*
==============
DB_TransientFileType_IsSP
==============
*/
bool DB_TransientFileType_IsSP(const TransientFileType transientType)
{
  return (unsigned __int8)transientType == DODGE || (unsigned __int8)transientType == 6;
}

/*
==============
DB_TransientFileType_IsWorld
==============
*/
bool DB_TransientFileType_IsWorld(const TransientFileType transientType)
{
  return (unsigned __int8)transientType <= (unsigned int)COUNT;
}

