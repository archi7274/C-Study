#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//malloc,free
//���Ḯ��Ʈ, ��ũ�帮��Ʈ,
typedef struct NODE ND;
struct NODE { //���� ����Ʈ�� ��� ����ü
	ND* next; //���� ����� �ּҸ� ������ ������
	int data; //�����͸� ������ ���
};

int main_linked() {
	ND* head = (ND*)malloc(sizeof(ND)); //�Ӹ� ��� ����
	ND* node1 = (ND*)malloc(sizeof(ND)); //ù ��° ���
	head->next = node1;
	node1->data = 10;

	free(node1);

	return 0;	
}




