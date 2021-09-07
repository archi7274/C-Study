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
////이것도 가능
//
//
////typedef struct stu {
////	char name[10];
////	int age;
////}stu;
//
//int main() {
//	stu* student;
//	////student->name = "KIM" 틀림
//	//strcpy(student->name, "KIM");
//	//student->age = 17;
//	////(*student).age = 17;
//
//	//printf("%s", student->name);
//	//printf("%d", student->age);
//
//	student = (stu*)malloc(sizeof(stu)); //void -> 형변환
//
//	student->age = 17;
//	strcpy(student->name, "SEO");
//
//	printf("이름 : %s 나이 : %d", student->name, student->age);
//	free(student); //malloc로 만들고 free로 메모리 해제
//
//	return 0;
//}