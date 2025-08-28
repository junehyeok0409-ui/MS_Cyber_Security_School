#include <stdio.h>

int main(void){
	int startIndex = 0, endIndex = 0, result = 0;
	
	printf("인덱스 시작값은? : ");
	scanf("%d", &startIndex);
	
	printf("인덱스 종료값은? : ");
	scanf("%d", &endIndex);
	
	for(; startIndex<endIndex; startIndex+=2) {
		result += startIndex;
		printf("%4d, %4d\n", result, startIndex);
	}
	
	
	
//	int index1 = 0, index2=0, val = 0;
//	
//	printf("인덱스 시작값은? : ");
//	scanf("%d", &index1);
//	
//	printf("인덱스 종료값은? : ");
//	scanf("%d", &index2);
//	
//	while(index1 < index2){
//		
//		val += index1;
//		printf("%4d, %4d\n", val, index1);
//		index1 += 2;
//	}
}
