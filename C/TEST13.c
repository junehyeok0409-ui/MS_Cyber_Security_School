#include <stdio.h>
#include <conio.h> //windows console only
#include <stdlib.h> //exit()���
 
 int func1(char c); //function prototype
 int main()
 {
 	int k; 
	char c;
	printf(">"); c = getch();
	if((c >= 'A')  &&  (c<='Z'))      k = 1; //�빮���� ��� �� ���ǽ� ��� �����ؾ���.
	else if((c >= 'a')  &&  (c<='z')) k = 2; //�ҹ���
	else if((c >= '0')  &&  (c<='9')) k = 3; //����
	else                              k = 4; //Ư������
	 
	 
	while(1)
	{
		printf(">"); c =getch();
	
	
	 switch(func1(c)) 
 { 	
		case 0: printf("\n���α׷� ����\n");  exit(0);
 	 	case 1: printf("%c : �빮��\n", c); break;
	 	case 2: printf("%c : �ҹ���\n", c); break;
	 	case 3: printf("%c : ����\n", c);   break;
	 	case 4: printf("%c : Ư������\n", c); break;
	 	
 }
}
	return 0;
 }
 
 int func1(char c)
 {
 	int k;
	if((c >= 'A')  &&  (c<='Z'))      k = 1; //�빮���� ��� �� ���ǽ� ��� �����ؾ���.
	else if((c >= 'a')  &&  (c<='z')) k = 2; //�ҹ���
	else if((c >= '0')  &&  (c<='9')) k = 3; //����
	else if(c==27r)                     k = 0; //���Ṯ�� 
	else                            k = 4; //Ư������
	
	return k;
 }
