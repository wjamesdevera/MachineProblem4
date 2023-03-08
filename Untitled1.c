#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[100], m2[100];
	int i;
	printf("Enter a message: ");
	gets(m1);
	
	strcpy(m2, strrev(m1));
	for (i = 0; i < strlen(m2); i++) {
		if (m2[i] == ' ') {
			printf("\n");
		} else {
			printf("%c", m2[i]);
		}
	}
}
