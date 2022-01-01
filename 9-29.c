//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main() {
//	int input_num;
//	int ab, cd, e, fg;
//	int count = 0;
//
//	scanf("%d", &input_num);
//
//	/*
//	for (ab = 11; ab <= 99; ab++) {
//		for (cd = 11; cd <= 99; cd++) {
//			for (e = 1; e <= 9; e++) {
//				for (fg = 10; fg <= 99; fg++) {
//					if ((ab + cd * e - fg == input_num) && (ab % 10 != 0) && (cd % 10 != 0) && (fg%10 !=0)) {
//						printf("%d%d%d%d\n", ab, cd, e, fg);
//						count++;
//					}
//				}
//			}
//		}
//	}
//	*/
//
//	for (ab = 11; ab <= 99; ab++) {
//		if (input_num - ab >= -88 && input_num - ab <= 880) {
//			for (cd = 11; cd <= 99; cd++) {
//				if (cd % 10 == 0) continue;
//				for (e = 1; e <= 9; e++) {
//					fg = (cd * e) + ab - input_num;
//					if (fg >= 11 && fg <= 99 && fg % 10 != 0) {
//						printf("%d%d%d%d\n", ab, cd, e, fg);
//						count++;
//					}
//				}
//			}
//		}
//	}
//	printf("%d", count);
//}