#define _crt_secure_no_warnings 1
#include<stdio.h>
int main() {
	int n1, n2, n3;
	printf("Enter number: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("The most valuable number is ");
	if (n1 > n2 && n1 > n3) {
		printf("%d", n1);
	}
	else if (n2 > n1 && n2 > n3) {
		printf("%d", n2);
	}
	else if (n3 > n1 && n3 > n2) {
		printf("%d", n3);
	}
	else printf("Equal");
	return 0;
}