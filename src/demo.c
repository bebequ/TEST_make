#include <stdio.h>
#include <stdlib.h>
#include "myadd.h"
#include "mysub.h"
#include "mymul.h"
#include "mydiv.h"

int main(int argc, char* argv[])
{
	printf("test\n");
	if(argc > 2)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d + %d = %d \n", a, b, myadd(a,b));
		printf("%d - %d = %d \n", a, b, mysub(a,b));
		printf("%d x %d = %d \n", a, b, mymul(a,b));
		printf("%d / %d = %d \n", a, b, mydiv(a,b));
	}
	else 
	{
		printf("two numbers are needed\n");
	}
	return 0;
}
