#include<stdio.h>

main()
{
 char *p;
 short *q;
 long *r;
 p=0;
 q=0;
 r=0;
 p++;
 q++;
 r++;
 printf("%p...%p...%p",p,q,r);
}
