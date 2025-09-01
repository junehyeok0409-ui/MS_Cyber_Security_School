#include <stdio.h>
#include <string.h>
char *name[] = {"박길석","박길은","박길혜","임길혁","이길빈" };
char *f[] = {"번호","이름","국어","영어","수학" };//문자열은 포인터타입
int kor[] = {10, 20, 30, 40, 50};
int eng[] = {60, 70, 80, 90, 99};
int mat[] = {70, 80, 90, 75, 60};
void swap(int *i, int *j); //swap 함수 prototype
//
// t20 [<번호>]  
//      번호에 해당하는 학생의 이름과 과목 성적으 화면에 출력
//      <default>All

int main(int n, char *s[])  //Command Line Interface  //**s=*s[]
{
  int start = 0,  end = 5;
  if(n > 1)          //"1" "2" ,n은 기본적으로 값을 가진다. 커맨드라인에 들어가는 단어의 개수 
  {
    if(strcmp(s[1],"--help") == 0) //'--help'가 적용 됐다는 뜻
    {
    printf("\n\n t21 [<번호>] [<--help>]\n");
    printf("  번호에 해당하는 학생의 이름과 과목 성적으 화면에 출력합니다.\n");
    printf("  <default>All  \n\n\n");
    exit(1);
    }
    
    start = atoi(s[1]) -1;     //  s[1][0] - '0' -1; // 문자 '1' ==> 숫자 1로 바꾸는 작업
    end = start + 1;
  }
  for(int i = start; i < end; i++)
  {
   if(i == start) // f line 출력
   {
    for(int j=0; j<5;j++)
      printf("%s\t",f[j]); 
    printf("\n");
   }
  printf("%2d\t%s\t%3d\t%3d\t%3d\n", i+1, name[i], kor[i], eng[i], mat[i]); // %2d앞에 0의 유무의 의미? -> 자리수가 남으면 0을 붙이면 0으로 채워짐
  }
  int i = 10, j = 20, k;

  swap(&i,&j);

  //swap(&i,&j);
}
//함수화
void swap(int *i, int *j)  
{
 int k;
 k = *i; *i = *j; *j = k;
} 

