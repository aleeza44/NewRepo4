#include<stdio.h>
int main() {
	int n,count=0,num=2;
	printf("Enter a number:");
	scanf_s("%d", &n);
	printf("First %d prime numbers are:\n", n);
	while (count < n) {
		int isPrime = 1;
		for (int i = 2;i * i <= num;i++) {
			if (num % i == 0) {
				isPrime = 0;
				break;
			}
	}
		if (isPrime && num > 1) {
			printf("%d ", num);
			count++;
		}
		num++;
	}
	return 0;
}
