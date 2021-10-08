/*
==============
G_ClientFieldsSP_Init
==============
*/

void G_ClientFieldsSP_Init(void)
{
  ?G_ClientFieldsSP_Init@@YAXXZ();
}

/*
==============
GScr_ClientFieldsSP_GetCurrentWeapon
==============
*/
void GScr_ClientFieldsSP_GetCurrentWeapon(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  GScr_ClientFields_GetCurrentWeapon(scrContext, pSelf, 0, 1, pField);
}

/*
==============
GScr_ClientFieldsSP_GetCurrentPrimaryWeapon
==============
*/
void GScr_ClientFieldsSP_GetCurrentPrimaryWeapon(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  GScr_ClientFields_GetCurrentWeapon(scrContext, pSelf, 1, 1, pField);
}

/*
==============
G_ClientFieldsSP_Init
==============
*/
void G_ClientFieldsSP_Init(void)
{
  GScr_ClientFields_InitFields(s_clientSP_fields, 0x14u);
}

