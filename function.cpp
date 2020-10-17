#include <stdio.h>
int func(char* str, char* glasn)
{
	int k = 0, c = 0, i = 0, boo = 0;
	while (*(str + i) != '\0') {
		if ((*(str + i) >= 'A' && *(str + i) <= 'Z') || (*(str + i) >= 'a' && *(str + i) < 'z')) {
			k++;
		}
		else {
			for (int j = 0; j < 12; j++) {
				if ((*(str + (i - k)) == *(glasn + j)) || (*(str + (i - k)) == *(glasn + j) + 32)) {
					boo = 1;
					c = i;
					for (i = i - k; i <= c - 1; i++) {
						printf("%c", *(str + i));
					}
					printf("\n");
				}
				else boo = 0;
			}
			k = 0;
		}
		i++;
	}
	return (boo);
}
