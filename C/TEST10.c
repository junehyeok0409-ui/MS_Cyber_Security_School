#include <stdio.h>
#include <conio.h> // getch 함수를 사용하기 위해 

int main(void){
	
	int v1 = 0, v2 = 0;
	char k; 
	
	printf("value1 ? : "); scanf("%d", &v1);
	printf("value2 ? : "); scanf("%d", &v2);

/*		
	while(1){
		k = getch();
		
		if(k == '+') {
			printf("%d %c %d = %d\n", v1, k, v2, v1+v2);
			
		} else if(k == '-') {
			printf("%d %c %d = %d\n", v1, k, v2, v1-v2);
			
		} else if(k == '*') { 
			printf("%d %c %d = %d\n", v1, k, v2, v1*v2);
		
		} else if(k == '/') {
			printf("%d %c %d = %f\n", v1, k, v2, (double)v1/(double)v2);
			
		}
		else break;
	}
*/
	k = getch();
		
	switch(k){
		case '+':
			printf("%d %c %d = %d\n", v1, k, v2, v1+v2);
			break;
			
		case '-':
			printf("%d %c %d = %d\n", v1, k, v2, v1-v2);
			break;
			
		case '*':
			printf("%d %c %d = %d\n", v1, k, v2, v1*v2);
			break;
		
		case '/':
			printf("%d %c %d = %f\n", v1, k, v2, (double)v1/(double)v2);
			break;
		
		default:
			break;
	}
	return 0;
}
