#include<stdio.h>

int main()
{
	unsigned giveit = -1;
	int gotit = giveit;
	printf("%d %d %d %d\n", gotit, gotit + 1, giveit, giveit + 1);
	printf("%u %u %u %u", gotit, gotit + 1, giveit, giveit + 1);
}
