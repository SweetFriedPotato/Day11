#include<stdio.h>
int main() {
	//���ڿ� �迭
	char s[] = "Hello World";
	char* p = "Hello World";
	printf("%s\n", s);
	printf("%s\n", p);

	s[0] = 'h'; //�� ���� �� ���� ���� ����
	//p[0] = 'h'; //���� �Ұ���. 

	s[0] = 'h';
	s[6] = 'w';

	p = "hello C";//����Ű�� ���ڿ� ���� �޸��� �� ����. 
}