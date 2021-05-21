#include <stdio.h>
#include <stdlib.h>
int main()
{ int a=	system("vcgencmd measure_temp");
	printf("%d",a);
	return 0;
	
	}
