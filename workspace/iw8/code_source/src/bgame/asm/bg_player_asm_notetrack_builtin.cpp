/*
==============
PlayerASM_DoSingleNotetrack
==============
*/

int __fastcall PlayerASM_DoSingleNotetrack(const PlayerASM_Context *context, const PlayerASM_Parameters *parameters)
{
  return ?PlayerASM_DoSingleNotetrack@@YAHPEBUPlayerASM_Context@@PEBUPlayerASM_Parameters@@@Z(context, parameters);
}

/*
==============
PlayerASM_DoFootNotetrack
==============
*/

int __fastcall PlayerASM_DoFootNotetrack(const PlayerASM_Context *context, const PlayerASM_Parameters *parameters)
{
  return ?PlayerASM_DoFootNotetrack@@YAHPEBUPlayerASM_Context@@PEBUPlayerASM_Parameters@@@Z(context, parameters);
}

/*
==============
PlayerASM_DoSingleNotetrack
==============
*/
__int64 PlayerASM_DoSingleNotetrack(const PlayerASM_Context *context, const PlayerASM_Parameters *parameters)
{
  BgPlayer_Asm *pAsm; 
  PlayerASM_Instance *InstanceBySlot; 
  PlayerASM_Instance *v5; 
  const ASM_State *State; 

  pAsm = parameters->pAsm;
  InstanceBySlot = BgPlayer_Asm::GetInstanceBySlot(parameters->pAsm, context, (const PlayerASM_AnimSlot)(unsigned __int8)parameters->slot[0]);
  v5 = InstanceBySlot;
  if ( InstanceBySlot )
  {
    State = Common_Asm::Utils::GetState(InstanceBySlot->m_pASM, InstanceBySlot->m_CurState);
    if ( State )
    {
      if ( State->m_Name == parameters->stateName )
        pAsm->FireEvent(pAsm, v5, (const scr_string_t)parameters->noteName);
    }
  }
  return 0i64;
}

/*
==============
PlayerASM_DoFootNotetrack
==============
*/
__int64 PlayerASM_DoFootNotetrack(const PlayerASM_Context *context, const PlayerASM_Parameters *parameters)
{
  BgPlayer_Asm *pAsm; 
  PlayerASM_Instance *InstanceBySlot; 
  PlayerASM_Instance *v6; 
  const ASM_State *State; 
  PlayerASM_Instance *v8; 
  unsigned __int8 m_NumEvents; 
  char v10; 
  __int64 v11; 
  int m_Time; 
  ASM_Event *i; 
  characterInfo_t *ci; 
  unsigned __int64 v15; 

  pAsm = parameters->pAsm;
  InstanceBySlot = BgPlayer_Asm::GetInstanceBySlot(parameters->pAsm, context, (const PlayerASM_AnimSlot)(unsigned __int8)parameters->slot[0]);
  v6 = InstanceBySlot;
  if ( InstanceBySlot )
  {
    State = Common_Asm::Utils::GetState(InstanceBySlot->m_pASM, InstanceBySlot->m_CurState);
    if ( State )
    {
      if ( State->m_Name == parameters->stateName )
        pAsm->FireEvent(pAsm, v6, (const scr_string_t)parameters->noteName);
    }
  }
  v8 = BgPlayer_Asm::GetInstanceBySlot(parameters->pAsm, context, (const PlayerASM_AnimSlot)(unsigned __int8)parameters->slot[0]);
  if ( v8 )
  {
    m_NumEvents = v8->m_NumEvents;
    if ( m_NumEvents )
    {
      v10 = 0;
      v11 = m_NumEvents;
      m_Time = -1;
      for ( i = v8->m_EventTable; ; ++i )
      {
        if ( i->m_Time > m_Time )
        {
          if ( i->m_Name == scr_const.notetrack_leftfootforward )
          {
            v10 = 1;
LABEL_14:
            m_Time = i->m_Time;
            goto LABEL_15;
          }
          if ( i->m_Name == scr_const.notetrack_rightfootforward )
          {
            v10 = 0;
            goto LABEL_14;
          }
        }
LABEL_15:
        if ( !--v11 )
        {
          if ( m_Time > -1 )
          {
            ci = parameters->ci;
            if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_notetrack_builtin.cpp", 69, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
              __debugbreak();
            v15 = 1i64;
            if ( !v10 )
              v15 = 2i64;
            BG_SetConditionValue(ci, 47, v15);
          }
          return 0i64;
        }
      }
    }
  }
  return 0i64;
}

