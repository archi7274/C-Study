//#include<stdio.h>
//
//int main() {
//	int i, j;
//	int n;
//	scanf_s("%d", &n);
//	int n1=1, n2=1, n3=0;
//	for (i = 0;i < n-2;i++) {
//		if (n == 0) {
//			printf("0");
//			break;
//		}
//		if (n == 1 && n==2) {
//			printf("1");
//			break;
//		}
//		n3 = n1 + n2;
//		n1 = n2;
//		n2 = n3;
//	}
//
//	printf("%d", n3);
//	return 0;
//}



#include<stdio.h>
#include<string.h>
#define Max_size 100

int main() {
	int key,t;
	char pass[Max_size];

	scanf_s("%d", &key);
	scanf_s("%s", pass);
	
	for (int i = 0; i < strlen(pass);i++) {
		key *= key;
		t = (key % 1000)/100;
		pass[i] += i;
	}
	return 0;
}