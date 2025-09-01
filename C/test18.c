#include <stdio.h>

char *name[] = {"박길석","박길은","박길혜","임길혁","이길빈" };
char *f[] = {"번호","이름","국어","영어","수학" };//문자열은 포인터타입
int kor[] = {10, 20, 30, 40, 50};
int eng[] = {60, 70, 80, 90, 99};
int mat[] = {70, 80, 90, 75, 60};

int main()
{
  for(int j = 0; j < 5; j++)
  {
   printf("%s\t", f[j]);
  }
  printf("\n");
  
 for(int i = 0; i < 5; i++)
 {
  printf("%2d\t%s\t%3d\t%3d\t%3d\n", i+1, name[i], kor[i], eng[i], mat[i]); // %2d앞에 0의 유무의 의미? -> 자리수가 남으면 0을 붙이면 0으로 채워짐
 }
}
