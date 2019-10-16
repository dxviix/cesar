#include <stdio.h>

int main()
{
	int numero, i, j, shift;
	char letra[51];
	
	scanf("%d", &numero);
	
	for(i=0; i < numero; i++) {
		scanf("%s", &letra);
		scanf("%d", &shift);
		
		for(j=0; j < 51 && string[j] != '\0'; j++) {
			if((string[j] - shift) < 65) {
				string[j] = 91 - (65 - (string[j] - shift));
			}
			else {
				string[j] = string[j] - shift;
			}
			printf("%c", string[j]);
		}
		printf("\n");	
	}
	return 0;
}

