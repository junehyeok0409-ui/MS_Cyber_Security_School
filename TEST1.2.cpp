#include <stdio.h>
//#include <stdafx.h>

int main(void)
{
	int age, score; // 정수  변수 선언문
	
	//scanf("나이가 어떻게 되세요? :%d",age); 
	printf("My age : %d \n",age); scanf("%d",&age);
	printf("What is my point \n",score); scanf("%d",&score);
	
	printf("My age : %d \n",age);
	printf("%d is my point \n",score);
	printf("Good \nmorning \neverybody\n");
	//printf("My age : %d \n%d is my point \nGood \nmorning \neverybody\n",25,100);
	
	
	return 0;
}
