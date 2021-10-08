/*
==============
hkProcess::postStep
==============
*/

void __fastcall hkProcess::postStep(hkProcess *this)
{
  ?postStep@hkProcess@@UEAAXXZ(this);
}

/*
==============
hkProcess::getConsumableCommands
==============
*/

void __fastcall hkProcess::getConsumableCommands(hkProcess *this, unsigned __int8 **commands, int *numCommands)
{
  ?getConsumableCommands@hkProcess@@UEAAXAEAPEAEAEAH@Z(this, commands, numCommands);
}

/*
==============
hkProcess::onProcessOptionsChanged
==============
*/

void __fastcall hkProcess::onProcessOptionsChanged(hkProcess *this, const hkHashMap<hkStringPtr,hkReflect::Var> *valuesChanged)
{
  ?onProcessOptionsChanged@hkProcess@@MEBAXAEBV?$hkHashMap@VhkStringPtr@@UVar@hkReflect@@@@@Z(this, valuesChanged);
}

/*
==============
hkProcess::consumeCommand
==============
*/

void __fastcall hkProcess::consumeCommand(hkProcess *this, unsigned __int8 cmdType)
{
  ?consumeCommand@hkProcess@@UEAAXE@Z(this, cmdType);
}

/*
==============
hkProcess::getType
==============
*/

hkProcess::ProcessType __fastcall hkProcess::getType(hkProcess *this)
{
  return ?getType@hkProcess@@UEBA?AW4ProcessType@1@XZ(this);
}

/*
==============
hkProcess::getProcessOptions
==============
*/

const hkReflect::Var *__fastcall hkProcess::getProcessOptions(hkProcess *this, const hkReflect::Var *result)
{
  return ?getProcessOptions@hkProcess@@UEBA?BUVar@hkReflect@@XZ(this, result);
}

/*
==============
hkProcess::consumeCommand
==============
*/
void hkProcess::consumeCommand(hkProcess *this, unsigned __int8 cmdType)
{
  ;
}

/*
==============
hkProcess::getConsumableCommands
==============
*/
void hkProcess::getConsumableCommands(hkProcess *this, unsigned __int8 **commands, int *numCommands)
{
  *commands = NULL;
  *numCommands = 0;
}

/*
==============
hkProcess::getProcessOptions
==============
*/
const hkReflect::Var *hkProcess::getProcessOptions(hkProcess *this, const hkReflect::Var *result)
{
  result->m_addr = NULL;
  result->m_type.m_type = NULL;
  result->m_impl.m_ptrAndInt = NULL;
  return result;
}

/*
==============
hkProcess::getType
==============
*/
__int64 hkProcess::getType(hkProcess *this)
{
  return 0xFFFFFFFFi64;
}

/*
==============
hkProcess::onProcessOptionsChanged
==============
*/
void hkProcess::onProcessOptionsChanged(hkProcess *this, const hkHashMap<hkStringPtr,hkReflect::Var> *valuesChanged)
{
  ;
}

/*
==============
hkProcess::postStep
==============
*/
void hkProcess::postStep(hkProcess *this)
{
  ;
}

