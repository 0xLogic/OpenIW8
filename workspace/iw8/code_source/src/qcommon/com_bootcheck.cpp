/*
==============
Com_BootCheck_ForceDelete
==============
*/

void Com_BootCheck_ForceDelete(void)
{
  ?Com_BootCheck_ForceDelete@@YAXXZ();
}

/*
==============
Com_BootCheck_CorruptSaveDataDialogClosed
==============
*/

void Com_BootCheck_CorruptSaveDataDialogClosed(void)
{
  ?Com_BootCheck_CorruptSaveDataDialogClosed@@YAXXZ();
}

/*
==============
Com_BootCheck_ShouldBlockUI
==============
*/

bool __fastcall Com_BootCheck_ShouldBlockUI()
{
  return ?Com_BootCheck_ShouldBlockUI@@YA_NXZ();
}

/*
==============
Com_BootCheck_IsActive
==============
*/

bool __fastcall Com_BootCheck_IsActive()
{
  return ?Com_BootCheck_IsActive@@YA_NXZ();
}

/*
==============
Com_BootCheck_Reset
==============
*/

void Com_BootCheck_Reset(void)
{
  ?Com_BootCheck_Reset@@YAXXZ();
}

/*
==============
Com_BootCheck_Activate
==============
*/

void Com_BootCheck_Activate(void)
{
  ?Com_BootCheck_Activate@@YAXXZ();
}

/*
==============
Com_BootCheck_IsCorruptSaveDataDetected
==============
*/

bool __fastcall Com_BootCheck_IsCorruptSaveDataDetected()
{
  return ?Com_BootCheck_IsCorruptSaveDataDetected@@YA_NXZ();
}

/*
==============
Com_BootCheck_Update
==============
*/

void Com_BootCheck_Update(void)
{
  ?Com_BootCheck_Update@@YAXXZ();
}

/*
==============
Com_BootCheck_Activate
==============
*/
void Com_BootCheck_Activate(void)
{
  ;
}

/*
==============
Com_BootCheck_CorruptSaveDataDialogClosed
==============
*/
void Com_BootCheck_CorruptSaveDataDialogClosed(void)
{
  ;
}

/*
==============
Com_BootCheck_ForceDelete
==============
*/
void Com_BootCheck_ForceDelete(void)
{
  g_bootCheckForceDelete = 1;
}

/*
==============
Com_BootCheck_IsActive
==============
*/
bool Com_BootCheck_IsActive()
{
  return g_bootCheckState != INACTIVE;
}

/*
==============
Com_BootCheck_IsCorruptSaveDataDetected
==============
*/
bool Com_BootCheck_IsCorruptSaveDataDetected()
{
  return g_bootCheckState == 2;
}

/*
==============
Com_BootCheck_Reset
==============
*/
void Com_BootCheck_Reset(void)
{
  ;
}

/*
==============
Com_BootCheck_ShouldBlockUI
==============
*/
bool Com_BootCheck_ShouldBlockUI()
{
  return g_bootCheckState > ACTIVE;
}

/*
==============
Com_BootCheck_Update
==============
*/
void Com_BootCheck_Update(void)
{
  ;
}

