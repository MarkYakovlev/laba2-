#include <stdio.h>
#include "zagolovok.h"
int main()
{
	char str[256], glasn[] = "AEYOUI";
	printf("Enter the string: ");
	fgets(str, 256, stdin);
	func(str, glasn);
	return 0;
}