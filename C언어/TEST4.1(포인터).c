#include <stdio.h>
int main()
{
	int a = 0x1234;
	char *pc;   //1byte
	int *pi;   //4byte
	double *pd; //8byte
	
	printf("&a:%08x  %08x\n\n\n", &a, a); //before
	
	pi = &a;
	pc = pi;
	pd = pi;

	
	printf("&a:%08x  %08x\n", &a, a);	
	printf("p:%08x   %08x  %08x\n", pi, pc, pd);  //after
	printf("p+1:%08x %08x  %08x\n", pi+1, pc+1, pd+1);
	printf("p+2:%08x %08x  %08x\n", pi+2, pc+2, pd+2);
	
}
