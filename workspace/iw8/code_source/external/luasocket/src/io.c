/*
==============
io_init
==============
*/
void io_init(t_io_ *io, int (*send)(void *, const char *, unsigned __int64, unsigned __int64 *, t_timeout_ *), int (*recv)(void *, char *, unsigned __int64, unsigned __int64 *, t_timeout_ *), const char *(*error)(void *, int), void *ctx)
{
  io->ctx = ctx;
  io->send = send;
  io->recv = recv;
  io->error = error;
}

/*
==============
io_strerror
==============
*/
const char *io_strerror(int err)
{
  if ( err == -2 )
    return "closed";
  if ( err == -1 )
    return "timeout";
  if ( err )
    return "unknown error";
  return 0i64;
}

