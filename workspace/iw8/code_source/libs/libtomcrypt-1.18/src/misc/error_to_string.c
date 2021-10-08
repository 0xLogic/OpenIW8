/*
==============
error_to_string
==============
*/
const char *error_to_string(int err)
{
  if ( (unsigned int)err > 0x19 )
    return "Invalid error code.";
  else
    return err_2_str[err];
}

