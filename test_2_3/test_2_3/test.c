#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void qsort(void *base, //����������ݵ���ʼλ��
//	      size_t num,  //�����Ԫ�ظ���
//		  size_t width, //ÿ��Ԫ�صĿ��
//		  int(*cmp)(const void *e1, const void *e2));//����ָ��-���Ƚϵ�2��Ԫ�صıȽϺ���
#include <stdlib.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}

//1.��������������sizeof()�ڲ�����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&����������������ʾ�������飬ȡ��������������ĵ�ַ
//������2�����֮�⣬���е�����������������Ԫ�صĵ�ַ

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16 - ��������������sizeof�ڲ���������������ܴ�С
//	printf("%d\n", sizeof(a + 0));//4/8   a+0 �ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));//*a ��������a����Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8   a+1 ������ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4 a[1]��������ĵڶ���Ԫ��
//	printf("%d\n", sizeof(&a));  //4/8  &a ������ĵ�ַ�������ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*&a)); //16 sizeof(a)
//	//&a    int(*)[4]
//	printf("%d\n", sizeof(&a + 1));//4/8 &a + 1 ��һ����ַ��ָ��������֮��Ŀռ�
//	printf("%d\n", sizeof(&a[0]));//4/8 ��Ԫ�صĵ�ַ 
//	printf("%d\n", sizeof(&a[0] + 1));//����ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}


//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", strlen(arr));//���ֵ-��Ϊarr�����б���û��\0���ͻ�������arr�������\0��
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//
//	printf("%d\n", sizeof(arr));//6-������arr����������sizeof�ڲ�
//	printf("%d\n", sizeof(arr + 0));//4/8 arr��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));   //1 - *arr ������Ԫ�� 
//	printf("%d\n", sizeof(arr[1])); //1 - arr[1]����ĵڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));   //4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ���ǵ�ַ��С����4/8�ֽ�
//	printf("%d\n", sizeof(&arr + 1)); //4/8 &arr+1�������������飬ָ��������֮�󣬵����ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//
//
//	return 0;
//}
//
//sizeof(������)  ������ �������������ռ�ռ�Ĵ�С��
//���ͣ�����������
//�����С��ʱ�򣬲��ں��ڴ��зŵ�ֵ
//
//strlen - ���ַ��������ȵ�
//ֻʹ���ڣ��ַ������ַ����飬�󳤶ȵ�ʱ�򣬹�ע'\0'
//�⺯��
//

//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	printf("%d\n", sizeof(arr));//7 �����arr������ܴ�С
//	printf("%d\n", sizeof(arr + 0));//4/8-  arr+0������arr����Ԫ�ص�
//	printf("%d\n", sizeof(*arr));   //1
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr����ĵ�ַ
//	printf("%d\n", sizeof(&arr + 1));//4/8 �ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	printf("%d\n", sizeof(p));    //4/8 - p���Ǹ�ָ�����
//	printf("%d\n", sizeof(p + 1));//4/8  p+1���ַ�'b'�ĵ�ַ
//	printf("%d\n", sizeof(*p));   //1  p���ַ�ָ�룬*p����һ���ֽ�
//	printf("%d\n", sizeof(p[0])); //1 p[0]  == *(p+0) == *p
//	printf("%d\n", sizeof(&p));//4/8   &p �ǵ�ַ
//	printf("%d\n", sizeof(&p + 1)); //4/8 &p+1 ��ָ��p��ߵĿռ�ĵ�ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0]+1 ���ǵ�ַ
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0]+1);
//	//���ڶ�ά����
//	printf("%d\n", sizeof(a));//48-��������������sizeof�ڲ�����������ʾ���������������������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]�Ƕ�ά�����һ�е�������
//	//��һ�е���������������sizeof�ڲ���������ǵ�һ�����������ܴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4/8 - arr[0]��Ϊ��һ�е�����������û�е�������sizeof�ڲ�
//	//�����������൱��������Ԫ�صĵ�ַ�����ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//a[0]+1 - ��һ�еڶ���Ԫ�صĵ�ַ
//	
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1)); //4/8 - a��Ϊ��ά���������������û��&��Ҳû�е�������sizeof�ڲ�
//	//��ô������a������Ԫ�أ���1�У��ĵ�ַ
//	//����a+1,���ǵ�2�еĵ�ַ
//	//int(*)[4]
//
//	printf("%d\n", sizeof(*(a + 1)));//16 �ڶ��еĴ�С  *(a+1) == a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &arr[0]�ǵ�һ�еĵ�ַ��+1�����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  ������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(*a));  //16 - *a ==> *(a+0) ==> a[0]
//	//a�Ƕ�ά�������������û��&��û��������sizeof�ڲ�
//	//����a�Ƕ�ά������Ԫ�صĵ�ַ,���ǵ�һ�еĵ�ַ
//	//*s���ǵ�һ��
//
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3] - ��ȷ�����;Ϳ��Լ����С
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//


//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//
//	printf("%p\n", p + 0x1);//p�ǽṹ���ָ�룬0x100000+20 = 0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000+1 = 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000+4 = 0x100004
//
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { 1, 3, 5 };
//	//1 3
//	//5 0 
//	//0 0
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


#include <stdio.h>

int main()
{
	char *a[] = { "work", "at", "alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}













