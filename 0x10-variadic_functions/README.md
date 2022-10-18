/**
***** include stdarg.h header to use variadic functions
  Variadic functionn takes an unlimuted numbers of arguments as parameter
  the unlimited parameters aree denoted by ...
  although an initial character must be included first
  *
  * variadic parameter list can be assessed using var_list name
  var_start is used to initialise the arbument list
##Example
#include stdarg.h
#include stdio.h

int add_em_up(int count, ...)
va_list ap;
int i, sum;
 var_statrt (ap, count)
 sum = 0;
  for i = 0; i<count; i = var_arg(ap, int)
  sum += va_arg(ap, int)
  
  va_end (ap)
  return sum;

int main
printf("%d\n", add_em_up(3, 1, 2, 3)) /* prints 6*/
