#define _CRT_SECURE_NO_WARNINGS 1
//malloc
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//int main()
//{
//	int arr[10] = {0};//��ջ����������40���ֽڵĿռ�
//
//	//��̬�ڴ濪�� - ������
//  //INT_MAX
//  int* p = (int*)malloc(INT_MAX);//����ʧ�ܵ����
//	int* p = (int*)malloc(40);//ϣ����40���ֽڵ���һ��10�����͵�����
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��\n");
//	}
//	else
//	{
//		//���ٳɹ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//����ʹ��pָ��Ķ�̬�ڴ�
//		//�ֶ��ͷŶ�̬���ٵ��ڴ�
//
//		free(p);
//		p = NULL;
//
//		//......
//	}
//
//	return 0;
//}

#include <string.h>
#include <errno.h>
//
//int main()
//{
//	//int arr[10];
//	//����һ�������Ŀռ�
//	//malloc���ٵĿռ䲻��ʼ��
//	//malloc����ֻ��1��
//	//calloc���ٵĿռ��ǳ�ʼ����
//	//calloc������2��
//
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//		//�ռ䲻���ˣ����ӿռ�
//		int*ptr = (int*)realloc(p, 44);//�����ռ��С��
//		if (ptr != NULL)
//		{
//			p = ptr;
//			return 1;
//		}
//
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//
//		//�ͷ�
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//1. ��NULLָ��Ľ����ò���
//������֣���malloc/calloc/realloc�����ķ���ֵ�����
//
//int main()
//{
//	int*p = (int*)malloc(INT_MAX);
//	//p���п���ΪNULLָ��ģ���ΪNULL��ʱ��*p���ǷǷ������ڴ�
//
//	*p = 0;
//
//	return 0;
//}
//2. �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//Խ��
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = 0;
//		}
//
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//..
//	free(p);
//	p = NULL;
//	return 0;
//}

//4. ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//err
//		for (i = 0; i <5; i++)
//		{
//			*p++ = 0;
//		}
//		//�ͷ�
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//5. ��ͬһ�鶯̬�ڴ����ͷ�
//
//
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//err
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = 0;
//		}
//		//����ͷŻ�������
//		free(p);
//		
//		free(p);
//
//		p = NULL;
//		
//
//	}
//
//	return 0;
//}

//6.�����ͷ�
//�ڴ�й©������

