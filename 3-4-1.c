#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
//int main()
//void main()
//{
//	int a[10], i;
//	for (i = 0; i < 10; i++)
//		a[i] = i;//��ַ
//	for (i = 0; i < 10; i++)
//		printf("a[%d]=%d\n", i, a[i]);
//	return 0;
//}
//void main()
//{
//	int a[10], i;
//	for (i = 0; i < 10; i++)
//		*(a + i) = i;//��ַ
//	for (i = 0; i < 10; i++)
//		printf("a[%d]=%d\n",i, *(a + i));
//}
//void main()
//{
//	int a[10], i,*p;
//	p = a;
//	for (i = 0; i < 10; i++)
//		*(p + i) = i;//��ַ
//	for (i = 0; i < 10; i++)
//		printf("a[%d]=%d\n",i, *(p + i));
//}
//void main()
//{
//	int a[10], i, *p = a;
//	for (i = 0; i < 10;)
//	{
//		*p = i;
//		printf("a[%d]=%d\n", i++, *p++);
//	}
//}
//*(p+i)+j//i��j��
//*(*(p+i)+j)//i��j��
#include<stdio.h>
//void main()
//{
//	char* string = "i love china !";
//	printf("%s\n", string);
//
//}

//void main()
//{
//	char* ps = "this is a book!";
//	int n = 10;
//	ps = ps + n;
//	printf("%s\n", ps);
//}
//void main()
//{
//	char* cp = "i love china!", cstr[] = "l love china!!!";
//	cp=cp+7;
//	printf("%s\n", cp);
//	cp = cp - 7;
//	printf("%s\n", cp);
//	printf("%c %c\n", cp[7], *(cp + 7));
//	cp = cstr;
//	cp[7] = 'c'; cstr[7] = 'C';
//	*(cp + 7) = 'c'; *(cstr + 7) = 'C';
//	printf("%s\n", cstr);
//}
//����ָ�����
//ָ���ͺ���
//�༶ָ��
//ָ��ָ�������ָ�룬ָ���ά�����ָ�루��ָ�룩��ָ��ָ���ָ��
//ָ������
//int* pa[3];
//#include <stdio.h>
//void main()
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9, };
//	int* pa[3] = { a[0],a[1],a[2] };
//	int(*pr)[3] = a;
//	int* pc = a[0];
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d %d %d\n", a[i][2 - i], *a[i], *(*(a + i) + i));
//	}
//	for (i = 0; i < 3; i++)
//		printf("%d %d %d\n", *pa[i], pc[i], *(pc + i));
//	for (i = 0; i < 3; i++)
//		//printf("%d %d %d\n", (*(pr + i))[0], (*(pr + i))[1], (*(pr + i))[2]);
//		printf("%d %d %d\n", *(*(pr + i)+0), (*(pr + i))[1], (*(pr + i))[2]);
//}
//ָ��ָ���ָ��
//char** p;
//void main()
//{
//	char* name[] = { "Follow me","basic","grea wall","fortran","comruter","designed" };
//	char** p; int i;
//	for (i = 0; i < 5; i++)
//	{
//		p = name + i;
//		printf("%s\n", *p);
//		printf("%c\n", **p);
//	}
//}
//#include <stdio.h>
//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	float score;
//};
//struct student stu1, stu2;
//#define STU struct student
//STU
//{
//	int num;
//	char name[20];
//	char sex;
//	float score;
//};
//STU stu1,stu2
////�ṹ�������.��Ա��

//stu1.num stu2.sex
//stu1.birthday.month
#include<stdio.h>
//void main()
//{
//	struct student
//	{
//		int num;
//		char* name;
//		char sex;
//		float score;
//	}stu1, stu2;
//	
//
//	stu1.num = 102;
//	stu1.name = "zhang ping ";
//	printf("input sex and score\n");
//	scanf("%c%f", &stu1.sex, &stu1.score);
//	stu2 = stu1;
//	printf("%d\n%s\n", stu2.num, stu2.name);
//	printf("%c%f", stu2.sex, stu2.score);
//}
//ָ��ṹ�������ָ��
//struct student *pstu;
//pstu=&stu1;
//������(*pstu).num ����->��ͷ pstu->num;
//ָ��ṹ�������ָ��
//struct student stu[]
//struct student *ps;
// ps=stu//��Ϊָ������//����˵���������׵�ַ
// ps=&stu[0]//��ͬ�ڸ���0��Ԫ���׵�ַ
// �ṹ��ָ���������������
// void aver(struct student *ps)
// c���Զ�̬�洢����
// �����ڴ�ռ亯��malloc
// (����*)malloc(size)
// ��char*��malloc(100)//
// �����ڴ�ռ亯��calloc
//(����˵����*)calloc(n,size)
// ps=(struct student*)callon(2,sizeof(struct student));
// �ͷ��ڴ溯��free
// free(void*ptr);
// 
//

