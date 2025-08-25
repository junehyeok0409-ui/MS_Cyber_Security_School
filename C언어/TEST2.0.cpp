#include <stdio.h>

int main()     //main은 약속된 함수 
{	
	int a;        //반드시 변수 선언이 먼저여야 한다. 
	int b;
	
	a=10;         //변수로 선언된 수는 상수로 취급한다. 
	b=20;

	printf("%d %d \n", a, b);    //""로 묶여져 있는 것도 상수로 취급한다. 
	return 0;
}


