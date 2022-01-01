//// 문제 5번 선생님이 짜신 코드
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//
//void main() {
//	int input_num1, input_num2, input_num3;
//
//	scanf("%d %d %d", &input_num1, &input_num2, &input_num3);
//
//	// (12000 / input_num1) 총 그룹 수
//	// (input_num3 / input_num1) 발견하는 그룹 전까지의 그룹 수
//	// ((12000 / input_num1) - (input_num3 / input_num1) - 1) 발견 이후의 그룹 수
//	// (input_num3 % input_num1) 발견하는 그룹에서 방문할 봉우리 수
//	// (input_num3 % input_num1 / input_num2 * input_num2)  발견하는 그룹 이후 그룹부터 그룹별 방문할 봉우리 수
//	// ((input_num3 % input_num1 / input_num2 * input_num2) + input_num2) 발견하는 그룹 이전 그룹까지 그룹별 방문할 봉우리 수
//	printf("%d", (input_num3 % input_num1) +											// 발견 그룹 방문 봉우리 수
//		((input_num3 % input_num1 / input_num2 * input_num2) + input_num2) * (input_num3 / input_num1) +		// 발견 이전 그룹 방문 봉우리 총 수
//		(input_num3 % input_num1 / input_num2 * input_num2) * ((12000 / input_num1) - (input_num3 / input_num1) - 1));  // 발견 이후 그룹 방문 봉우리 총 수
//
//
//
//}
//
//// 문제6번 선생님이 짜신 코드
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdbool.h>		// bool 자료형
//#include <math.h>			// sqrt(제곱근) 함수
//
//// 소수 여부 체크 함수, return 0 소수 아님, 1 소수
//bool check_primefactor(int n) {
//	// 2는 소수임
//	if (n == 2) {
//		return 1;
//	}
//	// 1은 소수 아님 or 2로 나누어지면 소수 아님
//	if ((n == 1) || (n % 2 == 0)) {
//		return 0;
//	}
//
//	// i 제곱근 까지의 수가 n보다 작거나 같을때까지만 체크
//	// 짝수는 2로 나누어지기 때문에 체크 불필요, 홀수만 체크
//	for (int i = 3; i <= sqrt(n);i += 2)
//	{
//		// 나누어 떨어지면 소수 아님
//		if (n % i == 0) {
//			return 0;
//		}
//	}
	// 나누어떨어지는 수가 없으면 소수임
//	return 1;
//}
//
//void main() {
//	int input_num;
//	int max = 0, num;
//
//	scanf("%d", &input_num);
//
//	for (int i = 2; i <= input_num; i++) {
//		// 시작값이 소인수 인 경우만 체크
//		if (check_primefactor(i)) {
//			int count = 1;
//			int n = i;
//			// 2*p+1이 소인수 인경우 카운트 증가
//			while (check_primefactor(2 * n + 1)) {
//				count++;
//				n = 2 * n + 1;  // 다음 소인수 값으로 변경
//			}
//
//			// 총 소인수 갯수가 기존 값보다 큰 경우 결과 값 변경
//			if (count > max) {
//				max = count;		// 총 제르밍 소수 갯수 값 변경
//				num = i;			// 시작 값 변경
//			}
//		}
//	}
//	printf("%d %d", num, max);
//}