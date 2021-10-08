/*
==============
emit_message
==============
*/
void emit_message(jpeg_common_struct *cinfo, int msg_level)
{
  jpeg_error_mgr *err; 
  int num_warnings; 

  err = cinfo->err;
  if ( msg_level >= 0 )
  {
    if ( err->trace_level >= msg_level )
      ((void (*)(void))err->output_message)();
  }
  else
  {
    num_warnings = err->num_warnings;
    if ( !num_warnings || err->trace_level >= 3 )
    {
      ((void (*)(void))err->output_message)();
      num_warnings = err->num_warnings;
    }
    err->num_warnings = num_warnings + 1;
  }
}

/*
==============
error_exit
==============
*/
void error_exit(jpeg_common_struct *cinfo)
{
  cinfo->err->output_message(cinfo);
  j_jpeg_destroy(cinfo);
  cinfo->err->exit();
}

/*
==============
format_message
==============
*/
void format_message(jpeg_common_struct *cinfo, char *buffer)
{
  jpeg_error_mgr *err; 
  __int64 msg_code; 
  const char *v5; 
  const char *const *addon_message_table; 
  int first_addon_message; 
  char v8; 
  bool v9; 
  const char *v10; 
  char v11; 

  err = cinfo->err;
  msg_code = cinfo->err->msg_code;
  if ( (int)msg_code > 0 && (int)msg_code <= err->last_jpeg_message )
  {
    v5 = err->jpeg_message_table[msg_code];
    goto LABEL_8;
  }
  addon_message_table = err->addon_message_table;
  if ( addon_message_table )
  {
    first_addon_message = err->first_addon_message;
    if ( (int)msg_code >= first_addon_message && (int)msg_code <= err->last_addon_message )
    {
      v5 = addon_message_table[(int)msg_code - first_addon_message];
LABEL_8:
      if ( v5 )
        goto LABEL_10;
    }
  }
  err->msg_parm.i[0] = msg_code;
  v5 = *err->jpeg_message_table;
LABEL_10:
  v8 = *v5;
  v9 = 0;
  v10 = v5;
  if ( *v5 )
  {
    while ( 1 )
    {
      v11 = *++v10;
      if ( v8 == 37 )
        break;
      v8 = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    v9 = v11 == 115;
  }
LABEL_15:
  if ( v9 )
    j_sprintf(buffer, v5, &err->msg_parm);
  else
    j_sprintf(buffer, v5, (unsigned int)err->msg_parm.i[0], (unsigned int)err->msg_parm.i[1], err->msg_parm.i[2], err->msg_parm.i[3], err->msg_parm.i[4], err->msg_parm.i[5], err->msg_parm.i[6], err->msg_parm.i[7]);
}

/*
==============
jpeg_std_error
==============
*/
jpeg_error_mgr *jpeg_std_error(jpeg_error_mgr *err, void (*exit)(...), void (*printf)(char *))
{
  jpeg_error_mgr *result; 

  err->last_jpeg_message = 123;
  *(_QWORD *)&err->trace_level = 0i64;
  err->error_exit = error_exit;
  err->emit_message = emit_message;
  err->output_message = output_message;
  err->format_message = format_message;
  err->reset_error_mgr = reset_error_mgr;
  err->jpeg_message_table = jpeg_std_message_table;
  result = err;
  err->msg_code = 0;
  err->addon_message_table = NULL;
  *(_QWORD *)&err->first_addon_message = 0i64;
  err->exit = exit;
  err->printf = printf;
  return result;
}

/*
==============
output_message
==============
*/
void output_message(jpeg_common_struct *cinfo)
{
  char v2[208]; 

  cinfo->err->format_message(cinfo, v2);
  cinfo->err->printf(v2);
}

/*
==============
reset_error_mgr
==============
*/
void reset_error_mgr(jpeg_common_struct *cinfo)
{
  cinfo->err->num_warnings = 0;
  cinfo->err->msg_code = 0;
}

