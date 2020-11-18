#include   <stdio.h>
#include   <conio.h>
#include <windows.h>  
/**********found**********/
void  fun ( int  a, b )
{ int   t;
/**********found**********/
  t = b;  b = a ;   a = t;
}
main ( )
{  int    a, b;
   system("cls");printf ( "Enter  a , b :  "); scanf ( "%d%d", &a, &b );
   fun ( &a , &b ) ; printf (" a = %d   b = %d\n ", a, b );}
