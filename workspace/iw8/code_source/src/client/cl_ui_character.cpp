/*
==============
CL_UICharacter_QueueCharacterAnim
==============
*/

void __fastcall CL_UICharacter_QueueCharacterAnim(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *animName, const char *noteName, const float blendTime, const float startTime)
{
  ?CL_UICharacter_QueueCharacterAnim@@YAXW4LocalClientNum_t@@IPEBD1MM@Z(localClientNum, clientIndex, animName, noteName, blendTime, startTime);
}

/*
==============
CL_UICharacter_SetCharacterAkimbo
==============
*/

void __fastcall CL_UICharacter_SetCharacterAkimbo(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool useAkimbo)
{
  ?CL_UICharacter_SetCharacterAkimbo@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, clientIndex, useAkimbo);
}

/*
==============
CL_UICharacter_GetCurrentAnimName
==============
*/

const char *__fastcall CL_UICharacter_GetCurrentAnimName(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CL_UICharacter_GetCurrentAnimName@@YAPEBDW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CL_UICharacter_GetEntityNum
==============
*/

__int16 __fastcall CL_UICharacter_GetEntityNum(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CL_UICharacter_GetEntityNum@@YAFW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CL_UICharacter_SetEntityNum
==============
*/

void __fastcall CL_UICharacter_SetEntityNum(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const __int16 entityNum)
{
  ?CL_UICharacter_SetEntityNum@@YAXW4LocalClientNum_t@@IF@Z(localClientNum, clientIndex, entityNum);
}

/*
==============
CL_UICharacter_SetCharacterWeapons
==============
*/

void __fastcall CL_UICharacter_SetCharacterWeapons(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *heldWeapon, const char *stowWeapon, const char *accessoryWeapon)
{
  ?CL_UICharacter_SetCharacterWeapons@@YAXW4LocalClientNum_t@@IPEBD11@Z(localClientNum, clientIndex, heldWeapon, stowWeapon, accessoryWeapon);
}

/*
==============
CL_UICharacter_SetCharacterWeaponVisible
==============
*/

void __fastcall CL_UICharacter_SetCharacterWeaponVisible(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool isHeldWeaponVisible)
{
  ?CL_UICharacter_SetCharacterWeaponVisible@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, clientIndex, isHeldWeaponVisible);
}

/*
==============
CL_UICharacter_GetState
==============
*/

const UICharacterState *__fastcall CL_UICharacter_GetState(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CL_UICharacter_GetState@@YAPEBUUICharacterState@@W4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CL_UICharacter_Reset
==============
*/

void CL_UICharacter_Reset(void)
{
  ?CL_UICharacter_Reset@@YAXXZ();
}

/*
==============
CL_UICharacter_PlayCharacterAnim
==============
*/

void __fastcall CL_UICharacter_PlayCharacterAnim(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *animName, const float blendTime, const float startTime)
{
  ?CL_UICharacter_PlayCharacterAnim@@YAXW4LocalClientNum_t@@IPEBDMM@Z(localClientNum, clientIndex, animName, blendTime, startTime);
}

/*
==============
CL_UICharacter_GetCharacterModel
==============
*/

const char *__fastcall CL_UICharacter_GetCharacterModel(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const unsigned int modelIndex)
{
  return ?CL_UICharacter_GetCharacterModel@@YAPEBDW4LocalClientNum_t@@II@Z(localClientNum, clientIndex, modelIndex);
}

/*
==============
CL_UICharacter_SetCurrentQueueIndex
==============
*/

void __fastcall CL_UICharacter_SetCurrentQueueIndex(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const unsigned int currentQueueIndex)
{
  ?CL_UICharacter_SetCurrentQueueIndex@@YAXW4LocalClientNum_t@@II@Z(localClientNum, clientIndex, currentQueueIndex);
}

/*
==============
CL_UICharacter_SetCharacterVisible
==============
*/

void __fastcall CL_UICharacter_SetCharacterVisible(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool isVisible)
{
  ?CL_UICharacter_SetCharacterVisible@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, clientIndex, isVisible);
}

/*
==============
CL_UICharacter_SetCharacterModels
==============
*/

void __fastcall CL_UICharacter_SetCharacterModels(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char **models, const unsigned int modelCount)
{
  ?CL_UICharacter_SetCharacterModels@@YAXW4LocalClientNum_t@@IQEAPEBDI@Z(localClientNum, clientIndex, models, modelCount);
}

/*
==============
CL_UICharacter_SetCharacterOffset
==============
*/

void __fastcall CL_UICharacter_SetCharacterOffset(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const vec3_t *position)
{
  ?CL_UICharacter_SetCharacterOffset@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, clientIndex, position);
}

/*
==============
CL_UICharacter_Reset
==============
*/

void __fastcall CL_UICharacter_Reset(const LocalClientNum_t localClientNum)
{
  ?CL_UICharacter_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_UICharacter_SetCharacterRotation
==============
*/

void __fastcall CL_UICharacter_SetCharacterRotation(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const vec3_t *rotation)
{
  ?CL_UICharacter_SetCharacterRotation@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, clientIndex, rotation);
}

/*
==============
CL_UICharacter_ClearCharacterAnimQueue
==============
*/

void __fastcall CL_UICharacter_ClearCharacterAnimQueue(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  ?CL_UICharacter_ClearCharacterAnimQueue@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CL_UICharacter_PlayCharacterFacialAnim
==============
*/

void __fastcall CL_UICharacter_PlayCharacterFacialAnim(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *animName, const float blendTime, const float startTime)
{
  ?CL_UICharacter_PlayCharacterFacialAnim@@YAXW4LocalClientNum_t@@IPEBDMM@Z(localClientNum, clientIndex, animName, blendTime, startTime);
}

/*
==============
CL_UICharacter_ClearCharacterAnimQueue
==============
*/
void CL_UICharacter_ClearCharacterAnimQueue(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int animQueueEnd; 
  __int64 blendTime; 
  __int64 startTime; 
  int startTimea; 

  v2 = localClientNum;
  v3 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    startTimea = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, startTimea) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x14 )
  {
    LODWORD(startTime) = 20;
    LODWORD(blendTime) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", blendTime, startTime) )
      __debugbreak();
  }
  v4 = v3 + 20 * v2;
  animQueueEnd = s_clientCharacterState[0][v4].animState.animQueueEnd;
  s_clientCharacterState[0][v4].animState.animQueueStart = animQueueEnd;
  s_clientCharacterState[0][v4].animState.animQueueEnd = animQueueEnd + 1;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(startTime) = 2;
    LODWORD(blendTime) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", blendTime, startTime) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x14 )
  {
    LODWORD(startTime) = 20;
    LODWORD(blendTime) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", blendTime, startTime) )
      __debugbreak();
  }
  CL_UICharacter_SetAnimItem((const LocalClientNum_t)v2, v3, s_clientCharacterState[0][v4].animState.animQueueStart, &s_clientCharacterState[0][0].animState.animQueue[s_clientCharacterState[0][v4].animState.currentQueueIndex & 7].animName[v4 * 4856], NULL, 0.0, 0.0);
}

/*
==============
CL_UICharacter_GetCharacterModel
==============
*/
const char *CL_UICharacter_GetCharacterModel(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const unsigned int modelIndex)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  v4 = modelIndex;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 268, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v9) = 20;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 269, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 270, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( 8 )", "modelIndex doesn't index CLIENT_CHARACTER_MAX_BODY_MODELS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (char *)&s_clientCharacterState[v3][v5].modelState + 64 * v4;
}

/*
==============
CL_UICharacter_GetCurrentAnimName
==============
*/
UICharacterAnimItem *CL_UICharacter_GetCurrentAnimName(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_clientCharacterState[v2][v3].animState.animQueue[s_clientCharacterState[v2][v3].animState.currentQueueIndex & 7];
}

/*
==============
CL_UICharacter_GetEntityNum
==============
*/
__int64 CL_UICharacter_GetEntityNum(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 280, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (unsigned __int16)s_clientCharacterState[v2][v3].entityNum;
}

/*
==============
CL_UICharacter_GetState
==============
*/
UICharacterState *CL_UICharacter_GetState(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 34, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_clientCharacterState[v2][v3];
}

/*
==============
CL_UICharacter_PlayCharacterAnim
==============
*/
void CL_UICharacter_PlayCharacterAnim(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *animName, const float blendTime, const float startTime)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int animQueueEnd; 
  __int64 blendTimea; 
  __int64 v11; 

  v6 = clientIndex;
  v7 = localClientNum;
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 191, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(blendTimea) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 192, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", blendTimea, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x14 )
  {
    LODWORD(v11) = 20;
    LODWORD(blendTimea) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", blendTimea, v11) )
      __debugbreak();
  }
  v8 = v6 + 20 * v7;
  animQueueEnd = s_clientCharacterState[0][v8].animState.animQueueEnd;
  s_clientCharacterState[0][v8].animState.animQueueStart = animQueueEnd;
  s_clientCharacterState[0][v8].animState.animQueueEnd = animQueueEnd + 1;
  CL_UICharacter_SetAnimItem((const LocalClientNum_t)v7, v6, animQueueEnd, animName, NULL, blendTime, startTime);
}

/*
==============
CL_UICharacter_PlayCharacterFacialAnim
==============
*/
void CL_UICharacter_PlayCharacterFacialAnim(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *animName, const float blendTime, const float startTime)
{
  __int64 v6; 
  __int64 v7; 
  UICharacterAnimItem *p_facialAnim; 
  __int64 v9; 
  __int64 v10; 

  v6 = clientIndex;
  v7 = localClientNum;
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 236, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x14 )
  {
    LODWORD(v10) = 20;
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  p_facialAnim = &s_clientCharacterState[v7][v6].animState.facialAnim;
  Core_strcpy(p_facialAnim->animName, 0x40ui64, animName);
  I_strlwr(p_facialAnim->animName);
  p_facialAnim->blendTime = blendTime;
  p_facialAnim->startTime = startTime;
  p_facialAnim->startNoteName[0] = 0;
}

/*
==============
CL_UICharacter_QueueCharacterAnim
==============
*/
void CL_UICharacter_QueueCharacterAnim(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *animName, const char *noteName, const float blendTime, const float startTime)
{
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  unsigned int animQueueEnd; 
  __int64 v12; 
  __int64 v13; 

  v6 = clientIndex;
  v8 = localClientNum;
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 206, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x14 )
  {
    LODWORD(v13) = 20;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 208, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v10 = v6 + 20 * v8;
  animQueueEnd = s_clientCharacterState[0][v10].animState.animQueueEnd;
  s_clientCharacterState[0][v10].animState.animQueueEnd = animQueueEnd + 1;
  CL_UICharacter_SetAnimItem((const LocalClientNum_t)v8, v6, animQueueEnd, animName, noteName, blendTime, startTime);
}

/*
==============
CL_UICharacter_Reset
==============
*/
void CL_UICharacter_Reset(const LocalClientNum_t localClientNum)
{
  UICharacterState *v1; 

  v1 = s_clientCharacterState[localClientNum];
  memset_0(&v1->entityNum + 1, 0, 0x17B5Eui64);
  v1->entityNum = -1;
}

/*
==============
CL_UICharacter_Reset
==============
*/
void CL_UICharacter_Reset(void)
{
  memset_0(&s_clientCharacterState[0][0].entityNum + 1, 0, 0x17B5Eui64);
  s_clientCharacterState[0][0].entityNum = -1;
  memset_0(s_clientCharacterState[1], 0, sizeof(UICharacterState[20]));
  s_clientCharacterState[1][0].entityNum = -1;
}

/*
==============
CL_UICharacter_SetAnimItem
==============
*/
void CL_UICharacter_SetAnimItem(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const unsigned int itemIndex, const char *animName, const char *startNote, const float blendTime, const float startTime)
{
  __int64 v7; 
  __int64 v9; 
  UICharacterState *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v7 = clientIndex;
  v9 = localClientNum;
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 145, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(v13) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 0x14 )
  {
    LODWORD(v14) = 20;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v11 = &s_clientCharacterState[v9][v7];
  if ( v11->animState.animQueueStart > itemIndex || itemIndex > v11->animState.animQueueEnd - 1 )
  {
    LODWORD(v14) = v11->animState.animQueueStart;
    LODWORD(v13) = itemIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 150, ASSERT_TYPE_ASSERT, "( character->animState.animQueueStart ) <= ( itemIndex ) && ( itemIndex ) <= ( character->animState.animQueueEnd - 1 )", "itemIndex not in [character->animState.animQueueStart, character->animState.animQueueEnd - 1]\n\t%i not in [%i, %i]", v13, v14, v11->animState.animQueueEnd - 1) )
      __debugbreak();
  }
  v12 = (__int64)v11->animState.animQueue[itemIndex & 7].animName;
  Core_strcpy((char *)v12, 0x40ui64, animName);
  I_strlwr((char *)v12);
  if ( startNote )
    Core_strcpy((char *)(v12 + 64), 0x40ui64, startNote);
  else
    *(_BYTE *)(v12 + 64) = 0;
  *(const float *)(v12 + 132) = startTime;
  *(const float *)(v12 + 128) = blendTime;
}

/*
==============
CL_UICharacter_SetCharacterAkimbo
==============
*/
void CL_UICharacter_SetCharacterAkimbo(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool useAkimbo)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_clientCharacterState[v3][v5].modelState.useAkimbo = useAkimbo;
}

/*
==============
CL_UICharacter_SetCharacterModels
==============
*/
void CL_UICharacter_SetCharacterModels(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char **models, const unsigned int modelCount)
{
  __int64 v4; 
  const char **v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  UICharacterModelState *p_modelState; 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 

  v4 = modelCount;
  v5 = models;
  v6 = clientIndex;
  v7 = localClientNum;
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 43, ASSERT_TYPE_ASSERT, "(models)", (const char *)&queryFormat, "models") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x14 )
  {
    LODWORD(v13) = 20;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 46, ASSERT_TYPE_ASSERT, "( modelCount ) <= ( 8 )", "%s <= %s\n\t%i, %i", "modelCount", "CLIENT_CHARACTER_MAX_BODY_MODELS", v4, 8) )
    __debugbreak();
  v8 = v6 + 20 * v7;
  p_modelState = &s_clientCharacterState[0][v8].modelState;
  s_clientCharacterState[0][v8].modelState.bodyPartModelCount = v4;
  DebugWipe(p_modelState, 0x200ui64);
  if ( (_DWORD)v4 )
  {
    v10 = v4;
    do
    {
      v11 = *v5;
      if ( !**v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 57, ASSERT_TYPE_ASSERT, "(bodyPartModelName[0])", "%s\n\tShould not have empty string for body part", "bodyPartModelName[0]") )
        __debugbreak();
      Core_strcpy((char *)p_modelState, 0x40ui64, v11);
      p_modelState = (UICharacterModelState *)((char *)p_modelState + 64);
      ++v5;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
CL_UICharacter_SetCharacterOffset
==============
*/
void CL_UICharacter_SetCharacterOffset(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const vec3_t *position)
{
  __int64 v3; 
  __int64 v5; 
  UICharacterPoseState *p_poseState; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v8) = 20;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_poseState = &s_clientCharacterState[v3][v5].poseState;
  p_poseState->offset.v[0] = position->v[0];
  p_poseState->offset.v[1] = position->v[1];
  p_poseState->offset.v[2] = position->v[2];
}

/*
==============
CL_UICharacter_SetCharacterRotation
==============
*/
void CL_UICharacter_SetCharacterRotation(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const vec3_t *rotation)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_rotation; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v8) = 20;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 124, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_rotation = &s_clientCharacterState[v3][v5].poseState.rotation;
  p_rotation->v[0] = rotation->v[0];
  p_rotation->v[1] = rotation->v[1];
  p_rotation->v[2] = rotation->v[2];
}

/*
==============
CL_UICharacter_SetCharacterVisible
==============
*/
void CL_UICharacter_SetCharacterVisible(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool isVisible)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 135, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_clientCharacterState[v3][v5].modelState.isHidden = !isVisible;
}

/*
==============
CL_UICharacter_SetCharacterWeaponVisible
==============
*/
void CL_UICharacter_SetCharacterWeaponVisible(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool isHeldWeaponVisible)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_clientCharacterState[v3][v5].modelState.isHeldWeaponHidden = !isHeldWeaponVisible;
}

/*
==============
CL_UICharacter_SetCharacterWeapons
==============
*/
void CL_UICharacter_SetCharacterWeapons(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const char *heldWeapon, const char *stowWeapon, const char *accessoryWeapon)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v5 = localClientNum;
  v7 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x14 )
  {
    LODWORD(v12) = 20;
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v9 = v7 + 20 * v5;
  v10 = v9;
  if ( heldWeapon )
    Core_strcpy(s_clientCharacterState[0][v9].modelState.heldWeapon, 0x400ui64, heldWeapon);
  else
    s_clientCharacterState[0][v9].modelState.heldWeapon[0] = 0;
  if ( stowWeapon )
    Core_strcpy(s_clientCharacterState[0][v10].modelState.stowedWeapon, 0x400ui64, stowWeapon);
  else
    s_clientCharacterState[0][v10].modelState.stowedWeapon[0] = 0;
  if ( accessoryWeapon )
    Core_strcpy(s_clientCharacterState[0][v10].modelState.accessoryWeapon, 0x400ui64, accessoryWeapon);
  else
    s_clientCharacterState[0][v10].modelState.accessoryWeapon[0] = 0;
}

/*
==============
CL_UICharacter_SetCurrentQueueIndex
==============
*/
void CL_UICharacter_SetCurrentQueueIndex(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const unsigned int currentQueueIndex)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_clientCharacterState[v3][v5].animState.currentQueueIndex = currentQueueIndex;
}

/*
==============
CL_UICharacter_SetEntityNum
==============
*/
void CL_UICharacter_SetEntityNum(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const __int16 entityNum)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_character.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_UI_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_UI_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_clientCharacterState[v3][v5].entityNum = entityNum;
}

