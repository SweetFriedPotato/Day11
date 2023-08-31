#include<stdio.h>
#include<string.h>

//구조체 정의
struct student {
	int num;
	char name[10];
	double grade;
};

int main() {
	//구조체변수 선언, 초기화
	struct student s1 = { 100, "나이화", 4.5 };
	struct student s2 = { 200, "나이화", 4.3 };
	printf("%d %s %.1f", s1.num, s1.name, s1.grade);
	printf("%d %s %.1f", s2.num, s2.name, s2.grade);

	//구조체 멤버 값 변경
	struct student s1;
	s1.num = 100;

}