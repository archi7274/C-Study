#include<stdint.h>


void bubble1(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n-i; j++) {
			if (a[j - 1] > a[j]) {
				int t = a[j - 1];
				a[j - 1]=a[j];
				a[j] = t;
			}
		}
	}
}

void bubble2(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

int main() {
	int a[5] = { 5,2,3,4,1 };
	bubble1(a, 5);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

	return 0;
}