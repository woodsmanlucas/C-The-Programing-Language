#include <stdio.h>

main()
{
	int c;
	
	c = getchar();
	if((c != EOF) == 0) {
		printf("0");
	}
	else if ((c != EOF) == 1) {
		printf("1");
	}
	else {
		printf("other");
	}

	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	putchar(EOF);	
}
