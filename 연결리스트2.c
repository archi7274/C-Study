//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct stu stu;
//struct stu {
//	char name[10];
//	int age;
//};
//
////�̰͵� ����
//
//
////typedef struct stu {
////	char name[10];
////	int age;
////}stu;
//
//int main() {
//	stu* student;
//	////student->name = "KIM" Ʋ��
//	//strcpy(student->name, "KIM");
//	//student->age = 17;
//	////(*student).age = 17;
//
//	//printf("%s", student->name);
//	//printf("%d", student->age);
//
//	student = (stu*)malloc(sizeof(stu)); //void -> ����ȯ
//
//	student->age = 17;
//	strcpy(student->name, "SEO");
//
//	printf("�̸� : %s ���� : %d", student->name, student->age);
//	free(student); //malloc�� ����� free�� �޸� ����
//
//	return 0;
//}