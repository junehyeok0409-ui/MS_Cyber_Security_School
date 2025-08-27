#include <stdio.h>
#include <conio.h> //windows console only
#include <stdlib.h> //exit()사용
 
 int func1(char c); //function prototype
 int main()
 {
 	int k; 
	char c;
	printf(">"); c = getch();
	if((c >= 'A')  &&  (c<='Z'))      k = 1; //대문자인 경우 두 조건식 모두 만족해야함.
	else if((c >= 'a')  &&  (c<='z')) k = 2; //소문자
	else if((c >= '0')  &&  (c<='9')) k = 3; //숫자
	else                              k = 4; //특수문자
	 
	 
	while(1)
	{
		printf(">"); c =getch();
	
	
	 switch(func1(c)) 
 { 	
		case 0: printf("\n프로그램 종료\n");  exit(0);
 	 	case 1: printf("%c : 대문자\n", c); break;
	 	case 2: printf("%c : 소문자\n", c); break;
	 	case 3: printf("%c : 숫자\n", c);   break;
	 	case 4: printf("%c : 특수문자\n", c); break;
	 	
 }
}
	return 0;
 }
 
 int func1(char c)
 {
 	int k;
	if((c >= 'A')  &&  (c<='Z'))      k = 1; //대문자인 경우 두 조건식 모두 만족해야함.
	else if((c >= 'a')  &&  (c<='z')) k = 2; //소문자
	else if((c >= '0')  &&  (c<='9')) k = 3; //숫자
	else if(c==27r)                     k = 0; //종료문자 
	else                            k = 4; //특수문자
	
	return k;
 }
