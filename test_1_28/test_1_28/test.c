#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ϵ�
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = Add(2, 3);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//


//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//
//

//
//int main()
//{
//	int n = 0;
//	//��n�Ľ׳�
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	return 0;
//}
//




//ģ��ʵ��strcpy����
//1. �˽�strcpy����
//2. ģ��ʵ��

//char *strcpy(char *strDestination, const char *strSource);

//1
//void my_strcpy(char* dest, char*src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//2
//void my_strcpy(char* dest, char*src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//
//assert- ���� - �����еı��ʽΪ�棬ʲô���������������еı��ʽΪ�٣��ͻᱨ��
//
#include <assert.h>
//3
//char* my_strcpy(char* dest, char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}


//4
//char* my_strcpy(char* dest, const char *src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//  //����srcָ������ݵ�destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy - string copy
//	char arr1[20] = "qqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	char*p2 = arr2;
//	//my_strcpy
//	printf("%s\n", my_strcpy(arr1, p2));//abcdef
//
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	//num = 20;
//	int* p = &num;
//	*p = 20;
//
//	printf("%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	//const���ε�num�Ǿ��г����Եı��������г����Ե���˼���ǲ���ֱ���޸�
//	const int num = 10;
//	int n = 100;
//	const  int* const p = &num;
//
//
//	//*p = 20;
//	//p = &n;
//	printf("%d\n", num);
//	//const����ָ�룬����*���ұߣ����ε���ָ���������ʹ��ָ������������޸�
//	//����ָ��ָ������ݿ���ͨ��ָ�����ı��ǿ����޸ĵ�
//
//	//num = 20;
//	//const int* p = &num;
//	//*p = 20;//err
//	//p = &n;//ok
//	//const����ָ�룬����*����ߣ����ε���ָ��ָ������ݣ�ʹ��ָ��ָ������ݣ�����ͨ��ָ�����ı�
//	//����ָ����������ǿ����޸ĵ�
//
//
//	//printf("%d\n", num);
//	return 0;
//}

//1. const ������ͨ����
//2. const ����ָ��

//
//��׳��
//³����
//


#include <string.h>

int main()
{
	int len = _mbstrlen("abc");
	printf("%d\n", len);
	return 0;
}