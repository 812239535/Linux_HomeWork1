#include <stdio.h>

#include "include/sum.h"
#include "include/subtract.h"
#include "include/multiply.h"
#include "include/divide.h"

int main(void) {
	int x, y;
	char s;

	scanf("%d %c %d", &x, &s, &y);

	if(s == '+')
		printf("%d + %d = %d\n", x, y, sum(x, y));
	
	if(s == '-')
		printf("%d - %d = %d\n", x, y, subtract(x, y));

	if(s == '*')
		printf("%d * %d = %d\n", x, y, multiply(x, y));

	if(s == '/')
		printf("%d / %d = %d\n", x, y, divide(x, y));
	

	return 0;
}
