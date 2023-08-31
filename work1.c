#include <stdio.h>
#define SIZE 3

typedef struct product {
	char name[20];
	int price;
	int stock;
}PRODUCT;

int main() {
	PRODUCT item[SIZE];
	printf("%d개의 상품 정보를 입력하세요\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("상품명, 가격, 재고량: ");
		scanf("%s %d %d", item[i].name, &item[i].price, item[i].stock);
	}

	printf("\n상품명\t가격\t재고량\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%-6s %6d %8d", item[i].name, item[i].price, item[i].stock);
		if (item[i].stock < 10)
			printf("==> 재고량 부족! 주문 필요\n");
		else
			printf("\n");
	}
}