#include <stdio.h>

int main()
{
	int n=5.25;    //소수부분의 손실
	double d=3;    //값의 표현이 넓은 범위로 변환 
	char c=129;    //상위 비트의 손실
	 
	
	printf("n:%d  d:%f  c:%d\n", n, d, c); 
}

