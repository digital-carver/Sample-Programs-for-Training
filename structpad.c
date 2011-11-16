#include<stdio.h>

struct s 
{
    char c; short int i; long l;
}svar;

main()
{
    printf("%d\n", sizeof(svar.l));
	printf("%d", sizeof(svar));
}
