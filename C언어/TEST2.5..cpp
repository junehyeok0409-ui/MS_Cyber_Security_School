#include <stdio.h>

int main()
{
	// 시작값, 종료값 입력 
	int sval, eval, rval;
	printf("시작값을 입력하세요"); scanf("%d", &sval);
	printf("종료값을 입력하세요"); scanf("%d", &eval); 
	
	rval = 0;
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
