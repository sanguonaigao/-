#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

//
//int main()
//{
//	int a = 10;
//	int * p = &a;//ָ�����
//	*p = 20;
//	p = 100;//
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	//���p������ָ�룬�����÷�����4���ֽ�
//	int* p = &a;
//	*p = 0;
//	//���p���ַ�ָ�룬�����÷�����1���ֽ�
//	char* p = &a;//int*
//	*p = 0;
//	//ָ������͵ĵ�һ�����þ��ǣ�������ָ��ķ���Ȩ�ޣ�Ҳ�����ܷ��ʼ����ֽڡ�
//	//int* -- 4
//	//char*  -- 1
//	//short*  -- 2
//	//double* -- 8
//
//	return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;//������-��Ԫ�صĵ�ַ
//	char*pc = arr;
//	//printf("%p\n", arr);
//	printf("%p\n", pa);
//	printf("%p\n", pa-4);
//	printf("---------------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc-4);
//	//
//	//ָ�����;�����ָ��+/-1���߶��ľ���
//	//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//��ϣ����arr��10�����εĿռ䣬����40���ֽڵĿռ�
//	//��ÿ���ֽڷ�һ���ַ���ȥ
//	char*pc = arr;
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(pc + i) = 'x';
//	}
//
//	//int*p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//}
//

//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//Ұ��
//	//Ұָ�� - 
//	//p�õ��ĵ�ַ֮�󣬵�ַָ��Ŀռ��Ѿ��ͷ��ˣ��������ʱ���p����Ұָ��
//	//
//	int*p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}


//int main()
//{
//	//p��Ұָ��
//	int* p;//û���κγ�ʼ��-���ֵ
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	//Խ����ʻᵼ��Ұָ�������
//	for (i = 0; i < 11; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	////NULL - ��ָ��
//	//int *q = NULL;
//
//	//int arr[10] = { 0 };
//	//int p2 = arr;
//	////p2.....
//	////p2��������ָ��arr��
//	//p2 = NULL;
//
//	//NULLָ��Ŀռ��ǲ��ܷ��ʵ�
//	int* p = NULL;
//	if (p != NULL)
//		*p = 20;
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//ָ��-ָ��

//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d\n", &arr[0] - &arr[9]);
//	char ch[5] = {0};
//	//ָ��-ָ��   ����ֵ����ָ���ָ��֮���Ԫ�ظ���
//	printf("%d\n", &arr[9] - &ch[3]);//err
//	//ָ��-ָ�� �����ǰ�������ǣ�����ָ��ָ�����ͬһ�������Ŀռ��
//	return 0;
//}

//1. �������ķ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.�ݹ�İ汾
//3. ָ��-ָ���д��

//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("&arr[%d] = %p < === > %p\n", i, &arr[i], p+i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = {0};
//
//	arr;//��ά�����������Ҳ��������Ԫ�صĵ�ַ
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int * p = &a;//p��һ��ָ��
//	int * * pp = &p;//pp�Ƕ���ָ��
//
//	**pp = 20;
//	printf("%d\n", a);//
//	//int*** ppp = &pp;
//	//int**** pppp = &ppp;
//
//	return 0;
//}

//ָ������

//
//����
//�������� - ������ε�����
//�ַ����� - ����ַ�������
//ָ������ - ��ŵ�ָ��
//
//
//int main()
//{
//	//int arr[10] = {0};//��������
//	//char ch[5] = { 'a', 'b' };//�ַ�����
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr����ָ������
//	//�������ָ�������
//	int* arr[3] = { &a, &b, &c };//int* 
//	char* ch[5];//����ַ�ָ�������
//
//	return 0;
//}

//int main()
//{
//	//char*p = "abcdef";
//	//printf("%s\n", p);
//
//	//�ַ�ָ�������
//	char* arr[] = {"abcdef", "hello", "bit"};
//	//arr[0]  arr[1]  arr[2]
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//
//����һ��ѧ��
//����
//����
//�绰
//�Ա�

//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;
//struct Stu s3;//ȫ��
////s1,s2��ȫ�ֵ�
//
//int main()
//{
//	struct Stu s;//ѧ��
//	//�ֲ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	char arr[10];
//	struct Point p;
//	double d;
//	int *ptr;
//};
//
//int main()
//{
//	//struct Point p = {1, 2};
//	//printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//	struct S s = { "abcdef", {2, 3},  3.14, &a};
//	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y, s.d, *(s.ptr));
//
//	return 0;
//}
//

//
//struct S
//{
//	char arr[1000];
//	int num;
//	double d;
//};
//void print1(struct S ss)
//{
//	printf("%s %d %lf\n", ss.arr, ss.num, ss.d);
//}
////���Ҫ��
//void print2(struct S* ps)
//{
//	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
//}
//
//int main()
//{
//	struct S s = {"hello bit", 100, 99.8};
//	print1(s);//print��������ӡ�ṹ�������
//	print2(&s);
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}