//// ���� 5�� �������� ¥�� �ڵ�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//
//void main() {
//	int input_num1, input_num2, input_num3;
//
//	scanf("%d %d %d", &input_num1, &input_num2, &input_num3);
//
//	// (12000 / input_num1) �� �׷� ��
//	// (input_num3 / input_num1) �߰��ϴ� �׷� �������� �׷� ��
//	// ((12000 / input_num1) - (input_num3 / input_num1) - 1) �߰� ������ �׷� ��
//	// (input_num3 % input_num1) �߰��ϴ� �׷쿡�� �湮�� ���츮 ��
//	// (input_num3 % input_num1 / input_num2 * input_num2)  �߰��ϴ� �׷� ���� �׷���� �׷캰 �湮�� ���츮 ��
//	// ((input_num3 % input_num1 / input_num2 * input_num2) + input_num2) �߰��ϴ� �׷� ���� �׷���� �׷캰 �湮�� ���츮 ��
//	printf("%d", (input_num3 % input_num1) +											// �߰� �׷� �湮 ���츮 ��
//		((input_num3 % input_num1 / input_num2 * input_num2) + input_num2) * (input_num3 / input_num1) +		// �߰� ���� �׷� �湮 ���츮 �� ��
//		(input_num3 % input_num1 / input_num2 * input_num2) * ((12000 / input_num1) - (input_num3 / input_num1) - 1));  // �߰� ���� �׷� �湮 ���츮 �� ��
//
//
//
//}
//
//// ����6�� �������� ¥�� �ڵ�
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdbool.h>		// bool �ڷ���
//#include <math.h>			// sqrt(������) �Լ�
//
//// �Ҽ� ���� üũ �Լ�, return 0 �Ҽ� �ƴ�, 1 �Ҽ�
//bool check_primefactor(int n) {
//	// 2�� �Ҽ���
//	if (n == 2) {
//		return 1;
//	}
//	// 1�� �Ҽ� �ƴ� or 2�� ���������� �Ҽ� �ƴ�
//	if ((n == 1) || (n % 2 == 0)) {
//		return 0;
//	}
//
//	// i ������ ������ ���� n���� �۰ų� ������������ üũ
//	// ¦���� 2�� ���������� ������ üũ ���ʿ�, Ȧ���� üũ
//	for (int i = 3; i <= sqrt(n);i += 2)
//	{
//		// ������ �������� �Ҽ� �ƴ�
//		if (n % i == 0) {
//			return 0;
//		}
//	}
	// ����������� ���� ������ �Ҽ���
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
//		// ���۰��� ���μ� �� ��츸 üũ
//		if (check_primefactor(i)) {
//			int count = 1;
//			int n = i;
//			// 2*p+1�� ���μ� �ΰ�� ī��Ʈ ����
//			while (check_primefactor(2 * n + 1)) {
//				count++;
//				n = 2 * n + 1;  // ���� ���μ� ������ ����
//			}
//
//			// �� ���μ� ������ ���� ������ ū ��� ��� �� ����
//			if (count > max) {
//				max = count;		// �� ������ �Ҽ� ���� �� ����
//				num = i;			// ���� �� ����
//			}
//		}
//	}
//	printf("%d %d", num, max);
//}