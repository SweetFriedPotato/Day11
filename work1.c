#include <stdio.h>
#define SIZE 3

typedef struct product {
	char name[20];
	int price;
	int stock;
}PRODUCT;

int main() {
	PRODUCT item[SIZE];
	printf("%d���� ��ǰ ������ �Է��ϼ���\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("��ǰ��, ����, ���: ");
		scanf("%s %d %d", item[i].name, &item[i].price, item[i].stock);
	}

	printf("\n��ǰ��\t����\t���\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%-6s %6d %8d", item[i].name, item[i].price, item[i].stock);
		if (item[i].stock < 10)
			printf("==> ��� ����! �ֹ� �ʿ�\n");
		else
			printf("\n");
	}
}