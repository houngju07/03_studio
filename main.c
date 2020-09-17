#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b; // change b as float( its ok for only change b
	
	printf("분자를 입력하세요.: ");
	scanf("%i", &a);
	
	printf("분모를 입력하세요.: ");
	scanf("%i", &b);
	
	printf("나누기의 결과는 %f 입니다.\n", (float)a/b); // type change 

	return 0;
}
