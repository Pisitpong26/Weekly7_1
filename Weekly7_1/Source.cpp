#include<stdio.h>
void mean(float x, float y) {
	float z = x / y;
	printf("\nThe Maen High of Children is %.2f ", z);
}
int main() {
	float a[10];
	int x = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			printf("Enter Hieght of Children %d : ", i + 1);
			scanf_s("%f", &a[i]);
			printf("\nThe Height of children %d is %.2f\n", (i + 1), a[i]);
			x = x + a[i];
		}
		else {
			printf("\nEnter Hieght of Children %d : ", i + 1);
			scanf_s("%f", &a[i]);
			printf("\nThe Height of children %d is %.2f\n", (i + 1), a[i]);
			x = x + a[i];
		}
	}
	mean(x, 10);
	return 0;
}