#include <stdio.h>

int main()
{
	// 시작값, 종료값 입력 
	int sval, eval, rval;
	printf("시작값을 입력하세요"); scanf("%d", &sval);
	printf("종료값을 입력하세요"); scanf("%d", &eval); 
	
	rval = 0;
	//while문은 1.초기값 2.수행조건 3.증감 으로 이루어진다. 
	//초기값은 최초 시작값을 정해주는 것
	int index = sval;
	while((index >= sval) && ( index <=eval)) //수행조건
	{
		
	}
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
	rval = rval + sval; sval++;
}
