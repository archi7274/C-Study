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
//	// 10개의 1~100 사이의 난수 발생 
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
//	// 정렬
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
//void Quick_Sort(int Key[], int Left_Poi, int Right_Poi) { //Left_Poi는 시작 위치, Right_Poi는 끝 위치
//	int i, j, temp;
//	i = Left_Poi; //작업용 포인트 값
//	j = Right_Poi + 1; //작업용 포인트 값 --j했을 경우 Right_Poi부터 체크하기 위해서
//	if (Left_Poi < Right_Poi) { //Left_Poi>=Right_Poi는 부 파일이 1개씩으로 정렬이 끝난 부분임을 의미
//		do {
//			while (Key[++i] <= Key[Left_Poi]);  //왼쪽부터 키 값보다 큰 값 찾기
//			while (Key[--j] > Key[Left_Poi]); //오른쪽부터 키 값보다 작은 값 찾기
//			if (i < j) {  //정렬이 끝나서 j와 i의 위치가 바뀌는 경우가 존재함(아닐 경우만 바꿈)
//				temp = Key[i];
//				Key[i] = Key[j];
//				Key[j] = temp;
//			}
//		} while (i < j); //i와 j의 위치가 바뀌면 부파일 생성이 완료 됨 반복문 종료
//		temp = Key[Left_Poi]; //키값과 중간 값 위치를 바꾸기
//		Key[Left_Poi] = Key[j];
//		Key[j] = temp;
//		Quick_Sort(Key, Left_Poi, j - 1); //왼쪽 부파일 시작
//		Quick_Sort(Key, j + 1, Right_Poi); //오른쪽 부파일 시작
//	}