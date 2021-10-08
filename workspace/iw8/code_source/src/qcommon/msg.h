/*
==============
MSG_WriteAlign
==============
*/

void __fastcall MSG_WriteAlign(msg_t *const msg)
{
  ?MSG_WriteAlign@@YAXQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_ReadAlign
==============
*/

void __fastcall MSG_ReadAlign(msg_t *const msg)
{
  ?MSG_ReadAlign@@YAXQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_GetField
==============
*/

__int64 __fastcall MSG_GetField(const void *i, const int size)
{
  return ?MSG_GetField@@YA_JPEBXH@Z(i, size);
}

/*
==============
MSG_SetField
==============
*/

void __fastcall MSG_SetField(void *i, const int size, const __int64 value)
{
  ?MSG_SetField@@YAXPEAXH_J@Z(i, size, value);
}

/*
==============
MSG_GetField
==============
*/
__int64 MSG_GetField(const void *i, const int size)
{
  __int64 result; 

  switch ( size )
  {
    case -8:
    case 8:
      result = *(_QWORD *)i;
      break;
    case -4:
      result = *(int *)i;
      break;
    case -2:
      result = *(__int16 *)i;
      break;
    case -1:
      result = *(char *)i;
      break;
    case 1:
      result = *(unsigned __int8 *)i;
      break;
    case 2:
      result = *(unsigned __int16 *)i;
      break;
    case 4:
      result = *(unsigned int *)i;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 370, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown field size %d\n", size) )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
MSG_SetField
==============
*/
void MSG_SetField(void *i, const int size, const __int64 value)
{
  bool v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 

  switch ( size )
  {
    case -8:
    case 8:
      *(_QWORD *)i = value;
      break;
    case -4:
    case 4:
      *(_DWORD *)i = value;
      break;
    case -2:
      *(_WORD *)i = value;
      if ( value != (__int16)value && value != (unsigned __int16)value )
      {
        v6 = (__int16)value;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 386, ASSERT_TYPE_ASSERT, "((value == *static_cast<short*>(i) || value == *static_cast<unsigned short*>(i)))", "%s\n\tvalue %lld != *static_cast<short*>(i) %d", "(value == *static_cast<short*>(i) || value == *static_cast<unsigned short*>(i))", value, v6);
        goto LABEL_15;
      }
      break;
    case -1:
      *(_BYTE *)i = value;
      if ( value != (char)value && value != (unsigned __int8)value )
      {
        v8 = (char)value;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 388, ASSERT_TYPE_ASSERT, "((value == *static_cast<char*>(i) || value == *static_cast<unsigned char*>(i)))", "%s\n\tvalue %lld != *static_cast<char*>(i) %d", "(value == *static_cast<char*>(i) || value == *static_cast<unsigned char*>(i))", value, v8);
        goto LABEL_15;
      }
      break;
    case 1:
      *(_BYTE *)i = value;
      if ( value != (unsigned __int8)value )
      {
        v7 = (unsigned __int8)value;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 387, ASSERT_TYPE_ASSERT, "(value == *static_cast<unsigned char*>(i))", "%s\n\tvalue %lld != *static_cast<unsigned char*>(i) %u", "value == *static_cast<unsigned char*>(i)", value, v7);
        goto LABEL_15;
      }
      break;
    case 2:
      *(_WORD *)i = value;
      if ( value != (unsigned __int16)value )
      {
        v5 = (unsigned __int16)value;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 385, ASSERT_TYPE_ASSERT, "(value == *static_cast<unsigned short*>(i))", "%s\n\tvalue %lld != *static_cast<unsigned short*>(i) %u", "value == *static_cast<unsigned short*>(i)", value, v5);
        goto LABEL_15;
      }
      break;
    default:
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 389, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown field size %d\n", size);
LABEL_15:
      if ( v3 )
        __debugbreak();
      break;
  }
}

/*
==============
MSG_ReadAlign
==============
*/
void MSG_ReadAlign(msg_t *const msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 245, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  msg->bit = 8 * msg->readcount;
}

/*
==============
MSG_WriteAlign
==============
*/
void MSG_WriteAlign(msg_t *const msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 238, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 239, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  msg->bit = 8 * msg->cursize;
}

