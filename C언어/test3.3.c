#include <stdio.h>
#include <conio.h>

int Rectangle(int x, int y);
double Triangle(int x, int y);

void main(){
	int x = 0, y = 0;
	int r = 0;
	double t = 0.0;
	
	printf("x, y 값을 입력해주세요. : "); scanf("%d %d", &x, &y);
	
	r = Rectangle(x, y);
	t = Triangle(x, y);
	
	printf("밑변이 %d이고, 높이가 %d인 4각형의 면적은 %d입니다.\n", x, y ,r);
	printf("밑변이 %d이고, 높이가 %d인 3각형의 면적은 %f입니다.", x, y ,t);
	
}
int Rectangle(int x, int y){	
	return x*y;
}

double Triangle(int x, int y){	
	return ( (double)x * (double)y ) / 2.0;
}
