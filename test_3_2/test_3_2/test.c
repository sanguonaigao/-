#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0x11223344;
//
//	//int* pa = &a;
//	//*pa = 0;//��pa�Ľ����ò���������4���ֽ�
//
//	
//	char*pc = &a;
//	*pc = 0;//��pcָ��Ľ����ò���������1���ֽ�
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
//	int* pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	float f = 0.087;
//	printf("%f\n", f);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	int a = 3;
//	int b = 5;
//	int c = a + b;
//
//	const char* ps = "abcdef";
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10];//��������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = {&a, &b, &c};//ָ������ - ����ָ������� - ��ŵĶ�������ָ��
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ��a��a�����Σ���ʱpa������ָ��
//
//	//����ָ��
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int* p1 = arr;
//	int (*p2)[10] = &arr;//p2����һ������ָ��
//
//	//printf("%p\n", arr);//������ - ��Ԫ�صĵ�ַ
//	//printf("%p\n", &arr);//�õ���������ĵ�ַ
//
//	//arr + 1;//������Ԫ�صĵ�ַ+1,��������һ��Ԫ��
//	//&arr + 1;//����ĵ�ַ+1,��������һ������
//
//
//	return 0;
//}

//
//ָ�� - ��ַ
//ָ�����
//

#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int sum = Add(2, 3); 
//	//printf("%d\n", sum);
//	//�����ĵ�ַ
//	//�Ѻ����ĵ�ַ�洢����������Ҫ�����һ��ָ������� - ����ָ�����
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//pf����һ������ָ��
//	int (*pf)(int, int) = Add;
//	//int sum = (*pf)(3, 4);
//	//int sum = (pf)(3, 4);
//	int sum = Add(3, 4);
//	printf("%d\n", sum);
//	//����ָ������ - pfArr
//	int(*pfArr[4])(int, int);
//	//ָ����ָ�������ָ�� - ppfArr
//	int(*(*ppfArr)[4])(int, int);
//	return 0;
//}

//
//struct Book
//{
//	//��Ա����
//	char name[20];
//	char author[20];
//	short price;
//}b2,b3,b4;

//typedef struct Book
//{
//	//��Ա����
//	char name[20];
//	char author[20];
//	short price;
//}Book;
//
//int main()
//{
//	struct Book b1 = {"C���Գ������", "̷��ǿ", 55};
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	Book b2 = {"C++�������", "����", 45};
//
//	return 0;
//}

//
//struct S
//{
//	char c;
//	int a;
//	short s;
//}s;
//
//
//int main()
//{
//	struct S s2;
//	return 0;
//}



//�����ṹ������
//struct
//{
//	char c;
//	int a;
//	short s;
//}s;
//
//struct
//{
//	char c;
//	int a;
//	short s;
//}* ps;
//
//
//int main()
//{
//	ps = &s;
//
//	return 0;
//}

//err
//struct Node
//{
//	int data;//4
//	struct Node n;//
//};

//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};

//err
//typedef struct
//{
//	int data;//������
//	Node* next;//ָ����
//}Node;

//typedef struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//}Node;

struct S
{
	int a;
	int b;
	double d;
};

struct B
{
	char c;
	struct S s;
	short ss;
};

int main()
{
	struct B b = { 'a', {100, 200, 3.14},  5};
	printf("%lf\n", b.s.d);

	return 0;
}
