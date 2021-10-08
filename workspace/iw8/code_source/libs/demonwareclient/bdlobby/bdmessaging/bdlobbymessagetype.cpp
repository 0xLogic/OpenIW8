/*
==============
bdNotificationTypeToString
==============
*/

const char *__fastcall bdNotificationTypeToString(const bdNotificationType code)
{
  return ?bdNotificationTypeToString@@YAPEBDW4bdNotificationType@@@Z(code);
}

/*
==============
bdEventTypeToString
==============
*/

const char *__fastcall bdEventTypeToString(const bdEventType code)
{
  return ?bdEventTypeToString@@YAPEBDW4bdEventType@@@Z(code);
}

/*
==============
bdEventTypeToString
==============
*/
const char *bdEventTypeToString(const bdEventType code)
{
  char v1; 
  const char *v2; 
  __int64 v3; 

  v1 = 0;
  v2 = "Unknown bdEventType";
  v3 = 0i64;
  do
  {
    if ( (unsigned int)v3 >= 0x6A )
      break;
    if ( bdEventTypeLookup[v3] == code )
    {
      v2 = bdEventTypeStrings[v3];
      v1 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v1 );
  return v2;
}

/*
==============
bdNotificationTypeToString
==============
*/
const char *bdNotificationTypeToString(const bdNotificationType code)
{
  char v1; 
  const char *v2; 
  __int64 v3; 

  v1 = 0;
  v2 = "Unknown bdNotificationType";
  v3 = 0i64;
  do
  {
    if ( (unsigned int)v3 >= 0x15 )
      break;
    if ( bdNotificationTypeLookup[v3] == code )
    {
      v2 = bdNotificationTypeStrings[v3];
      v1 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v1 );
  return v2;
}

