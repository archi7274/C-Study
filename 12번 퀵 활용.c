//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void Quick_Sort(int Key[], int Left_Poi, int Right_Poi);
//int main_Quick() {
//	int num[10];
//
//	srand((unsigned int)time(NULL));
//
//	// 10���� 1~100 ������ ���� �߻� 
//	for (int i = 0; i < 10; i++) {
//		num[i] = rand() % 99 + 1;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//
//	/*
//	// ����
//	for (int i = 0; i < 10; i++) {
//		for(int j=i+1;j<10;j++){
//			if (num[i] > num[j]) {
//				int temp = num[j];
//				num[j] = num[i];
//				num[i] = temp;
//			}
//		}
//	}
//
//
//	*/
//	Quick_Sort(num, 0, 9);
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", num[i]);
//	}
//}
//
//void Quick_Sort(int Key[], int Left_Poi, int Right_Poi) { //Left_Poi�� ���� ��ġ, Right_Poi�� �� ��ġ
//	int i, j, temp;
//	i = Left_Poi; //�۾��� ����Ʈ ��
//	j = Right_Poi + 1; //�۾��� ����Ʈ �� --j���� ��� Right_Poi���� üũ�ϱ� ���ؼ�
//	if (Left_Poi < Right_Poi) { //Left_Poi>=Right_Poi�� �� ������ 1�������� ������ ���� �κ����� �ǹ�
//		do {
//			while (Key[++i] <= Key[Left_Poi]);  //���ʺ��� Ű ������ ū �� ã��
//			while (Key[--j] > Key[Left_Poi]); //�����ʺ��� Ű ������ ���� �� ã��
//			if (i < j) {  //������ ������ j�� i�� ��ġ�� �ٲ�� ��찡 ������(�ƴ� ��츸 �ٲ�)
//				temp = Key[i];
//				Key[i] = Key[j];
//				Key[j] = temp;
//			}
//		} while (i < j); //i�� j�� ��ġ�� �ٲ�� ������ ������ �Ϸ� �� �ݺ��� ����
//		temp = Key[Left_Poi]; //Ű���� �߰� �� ��ġ�� �ٲٱ�
//		Key[Left_Poi] = Key[j];
//		Key[j] = temp;
//		Quick_Sort(Key, Left_Poi, j - 1); //���� ������ ����
//		Quick_Sort(Key, j + 1, Right_Poi); //������ ������ ����
//	}