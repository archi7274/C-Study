//#define CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void mad() {
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	printf("%.2f", (double)((a + b + c) / 3));
//}
//
//void out() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("i\n");
//	}
//
//}
//
//void cho() {
//	int sec, n1, n2;
//	printf("메뉴를 선택하세요.\n1. 덧셈\n2. 뺄셈\n선택 :");
//	scanf_s("%d", &sec);
//	scanf_s("%d %d", &n1, &n2);
//	printf("%d - %d = %d", n1, n2, n1 - n2);
//}
//
//int year() {
//	int year;
//	scanf_s("%d", &year);
//	if (year % 4 == 0) {
//		if (year % 100 == 0 && year % 400 != 0) {
//			printf("%d년은 평년입니다.", year);
//			return 0;
//		}
//		else {
//			printf("%d년은 윤년입니다.", year);
//			return 0;
//		}
//		printf("%d년은 윤년입니다.", year);
//	}
//	else {
//		printf("%d년은 평년입니다.",year);
//	}
//	return 0;
//}
//
//
//void hap() {
//	int i, n, sum = 0;
//	printf("수를 입력하세요.");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum += i;
//	}
//	printf("%d", sum);
//}
//
//
//void dan() {
//	int i, n;
//	scanf_s("%d", &n);
//	for (i = 1; i <= 9; i++){
//		printf("%d * %d = %d\n", n, i, n * i);
//	}
//}
//
//void di() {
//	int i, n, sum = 0;
//	printf("N입력:"); scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			sum -= i;
//		}
//		else {
//			sum += i;
//		}
//	}
//
//}
//	
//
//
//
//int pibo() {
//	int cnt, n1 = 1, n2 = 1, n3, i;
//	scanf_s("%d", &cnt);
//	if (cnt == 1 || cnt == 2) {
//		printf("1");
//		return 0;
//	}
//	for (i = 0; i < cnt - 2; i++) {
//		n3 = n1 + n2;
//		n1 = n2;
//		n2 = n3;
//	}
//	printf("%d", n3);
//	return 0;
//
//
//}
//
//
//void max_n() {
//	int a[5];
//	int i, max;
//	for (i = 0; i < 5; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		if (a[i] > a[i + 1]) {
//			max = a[i];
//		}
//		printf("%d", a[i]);
//	}
//	printf("\n%d\n", max);
//
//
//}
//
//void pro11() {
//	int n, i, temp;
//	scanf_s("%d", &n);
//	int num[10], one[] = { 0,0,0,0,0,0,0,0,0,0 };
//	for (i = 0; i < n; i++) {
//		scanf_s("%d", &num[i]);
//		temp = num[i] % 10;
//		one[temp] += 1;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d", one[i]);
//	}
//
//}
//
//int main_1() {
//	srand(time(NULL));
//	int i,j,temp;
//	int arr[10];
//	for (i = 0; i < 10; i++) {
//		arr[i] = (rand()%100)+1;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
//
//
//int main_problem() {
//	int n, i;
//	char a[100];
//
//	scanf_s("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf_s("%c", &a[i]);
//		if (a[i] >= 65 && a[i] <= 90) {
//			a[i] += 32;
//		}
//		else if (a[i] >= 97 && a[i] <= 122) {
//			a[i] -= 32;
//		}
//	}
//	for (i = 0; i < n; i++) {
//		printf("%c", a[i]);
//	}
//
//
//
//	return 0;
//}
