//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//char hexF[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//
//void change_hex(int num, int hex) {
//	if (num > 0) {
//		change_hex(num / hex, hex);
//		printf("%c", hexF[num % hex]);
//	}
//}
//
//void main() {
//	int input_num;
//	scanf_s("%d", &input_num);
//	change_hex(input_num, 2);
//	printf("(2)\n");
//	change_hex(input_num, 8);
//	printf("(8)\n");
//	change_hex(input_num, 16);
//	printf("(16)\n");
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	double input_min, input_max, input_count;
//	int input_a, input_b, input_c;
//	double output_sum = 0;
//	scanf_s("%lf %lf %lf", &input_min, &input_max, &input_count);
//	scanf_s("%d %d %d", &input_a, &input_b, &input_c);
//
//	for (; input_min <= input_max; input_min += input_count) {
//		double y = input_a * input_min * input_min + input_b * input_min + input_c;
//		output_sum = output_sum + ((y > 0 ? y : -y) * input_count);
//	}
//	printf("%d", (int)(output_sum + 0.5));
//	
//	return 0;
//}
