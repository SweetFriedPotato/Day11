#include<stdio.h>
#include<string.h>

//����ü ����
struct student {
	int num;
	char name[10];
	double grade;
};

int main() {
	//����ü���� ����, �ʱ�ȭ
	struct student s1 = { 100, "����ȭ", 4.5 };
	struct student s2 = { 200, "����ȭ", 4.3 };
	printf("%d %s %.1f", s1.num, s1.name, s1.grade);
	printf("%d %s %.1f", s2.num, s2.name, s2.grade);

	//����ü ��� �� ����
	struct student s1;
	s1.num = 100;

}