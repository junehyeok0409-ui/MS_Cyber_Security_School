#include <stdio.h> 

int main(void){
	
	int val = 0;
		
	printf("위에 해당하는 번호를 누르세요 : ");
	
	while(1){
		scanf("%d",&val);
		switch(val) {
			case 1:
				printf(">1 : One\n");
				break;
			case 2:
				printf(">2 : Two\n");
				break;
			case 3:
				printf(">3 : Three\n");
				break;
			case 4:
				printf(">4 : Four\n");
				break;
			case 5:
				printf(">5 : Five\n");
				break;
			case 6:
				printf(">6 : Six\n");
				break;
			case 7:
				printf(">7 : Seven\n");
				break;
			case 8:
				printf(">8 : Eight\n");
				break;
			case 9:
				printf(">9 : Nine\n");
				break;
			case 0:
				printf(">0 : Zero\n");
				break;
			default:
				break;
		}
	}
	
	return 0;
}
