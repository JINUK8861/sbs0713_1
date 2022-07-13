#include <stdio.h>

int add(int a, int b); //선언부


void hello() {

	printf("Hello world!");
	//hello world 단어 출력하는 함수
	//특별한 입력도 없고 콘솔창에 출력하고 함수 종료

	//이후에 무언가를 받아와서 추가로 하는 작업이 없는 상태
	//즉, 입출력이 없는 상태로 기능만 수행하는 함수
}
 
int main(void) {

	hello();
	printf("%d", add(3, 5));

	return 0;
}
	int add(int a, int b)  { //선언부

		return a + b; //정의부
	}