#include <stdio.h>

int add(int a, int b); //�����


void hello() {

	printf("Hello world!");
	//hello world �ܾ� ����ϴ� �Լ�
	//Ư���� �Էµ� ���� �ܼ�â�� ����ϰ� �Լ� ����

	//���Ŀ� ���𰡸� �޾ƿͼ� �߰��� �ϴ� �۾��� ���� ����
	//��, ������� ���� ���·� ��ɸ� �����ϴ� �Լ�
}
 
int main(void) {

	hello();
	printf("%d", add(3, 5));

	return 0;
}
	int add(int a, int b)  { //�����

		return a + b; //���Ǻ�
	}