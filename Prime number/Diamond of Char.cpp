#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int changeTonum(char inputcha) {
	return inputcha - 64;
}
int main(){
	int i, j, k,l;
	char input;
	scanf("%c",&input);
	if (input < 65 || input>90) { 
		printf("Error"); 
		return 0; 
	}
	int x = changeTonum(input);
	for (i = 0; i <x; i++){
			for (j = 1; j <= 2 * x - 1; j++) {
				if (j == x - i || j == x + i) {
					printf("%c", 64 + i + 1);
				}
				else {
					printf(".");
				}
			}
			printf("\n");
	}
	for (k = x-1; k>0; k--){
		for (l = 1; l <= 2 * x - 1; l++)
		{
			if (l == x - k+1 || l == x + k-1)
			{
				printf("%c", 64 + i-1);
			}
			else
			{
				printf(".");
			}
		}
		i--;
		printf("\n");
	}
	return 0;
}