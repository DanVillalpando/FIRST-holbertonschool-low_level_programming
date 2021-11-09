/***Version del printf de GNU 
 * utilizando vfprintf
 */

_printf (const char *format, ...)
{
  va_list arg;
  int fin;

  va_start (arg, format);
  fin = vfprintf (stdout, format, arg);
  va_end (arg);

  return(fin);
}
