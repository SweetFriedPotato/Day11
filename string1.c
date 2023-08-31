#include<stdio.h>
int main() {
	//문자열 배열
	char s[] = "Hello World";
	char* p = "Hello World";
	printf("%s\n", s);
	printf("%s\n", p);

	s[0] = 'h'; //한 문자 한 문자 변경 가능
	//p[0] = 'h'; //변경 불가능. 

	s[0] = 'h';
	s[6] = 'w';

	p = "hello C";//가리키는 문자열 방향 달리할 수 있음. 
}