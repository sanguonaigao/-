#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>





//
//int main()
//{
//	int n = 9;
//	//
//	//0 00000000 00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0 * 1.001*2^3
//	//S=0
//	//M=1.001
//	//E=3     +127
//	//01000001000100000000000000000000
//	//
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.0
//	return 0;
//}
//

//
//9.5
//1001.1
//1.0011*2^3
//(-1)^0 * 1.0011 * 2^3
//S=0
//M=1.0011
//E=3
//

//0.5
//0.1 - ������
//1.0 * 2^-1
//(-1)^0 *1.0*2^-1
//S=0
//M=1.0
//E=-1
//

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	char* p = "abcdef";//����ġ�abcdef����һ�������ַ���
//	//printf("%c\n", *p);
//	printf("%s\n", p);
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//int main()
//{
//	const char*p = "abcdef";
//
//	return 0;
//}


//
//ָ������ - ����
//���ָ������飬����ָ������
//

//int main()
//{
//	int* arr[10];
//	char** ch[20];
//
//	return 0;
//}
//


//����ָ�� - ָ��
//�ú��� -����

//����ָ�� - ָ�����ε�ָ��
//int a = 10;
//int* p = &a;
//�ַ�ָ�� - ָ���ַ���ָ��
//����ָ�� - ָ�������ָ��
//

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char ch = 'w';
//	char* pc = &ch; 
//
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;//����ĵ�ַ
//	//pa����һ��ָ�������ָ�� - ����ָ��
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//
//	//&arr ���������������飬ȡ����������ĵ�ַ
//	//&arr arr �Ա�
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int*p1 = arr;//������Ԫ�صĵ�ַ
//	int(*p2)[10] = &arr;//����ĵ�ַ
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	//
//	//&������
//	//sizeof(������)
//	//��������2�����֮��-��������������������������Ԫ�صĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;
//	// *p <==> arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p)+i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	// *p <==> arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//	printf("%d ", (*p)[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p) + i));
//
//		//printf("%d ", p[0][i]);
//		//printf("%d ", *(*(p) + i));
//	}
//	return 0;
//}

//
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////
////
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		//*(p + i) - ��i�У�i��0��ʼ
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
////void print3(int*p, int sz)
////{
////}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//��ά���鴫�Σ�������Ҳ����Ԫ�صĵ�ַ����ά�������Ԫ���ǵ�һ��
//	//����ȥ�ľ��ǵ�һ�еĵ�ַ
//	/*int a[5];
//	print3(a, 5);*/
//
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}
//
//

//void test(int *p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int arr[10] = {0};
//	test(&a);
//	test(pa);
//	test(arr);
//
//	return 0;
//}



//void test(int **p)
//{
//	
//}
//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	int ** ppa = &pa;
//	int* arr[10];
//
//	test(&pa);
//	test(ppa);
//	test(arr);
//
//	return 0;
//}




