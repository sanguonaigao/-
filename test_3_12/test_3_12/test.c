#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}

//�ڴ�й©������

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//} 
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct St
//{
//	int n;//4
//	char c;//1
//	//3
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	//�ڼ�����������������Ա�Ľṹ��Ĵ�С��ʱ�򣬲��������������Ա
//	printf("%d\n", sizeof(struct St));
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//��������ָ�����������Ĵ�С�����Կɱ��
//};
//
//int main()
//{
//	//struct S s;//���Ǵ�����
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//  //�ͷ�
//  free(ps);
//  ps = NULL;
//	return 0;
//}

//
//typedef struct S
//{
//	int n;
//	int *arr;
//}S;
//
//int main()
//{
//	S* ps = (S*)malloc(sizeof(S));
//	ps->arr = (int*)malloc(10*sizeof(int));
//	//ʹ��
//
//	//�ͷ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

#include<string.h>
#include <errno.h>

int main()
{
	//���·��
	//.. ��ʾ��һ��Ŀ¼
	//. ��ǰĿ¼
	//FILE* pf = fopen("../data.txt", "r");
	//����·��
	//./hehe/test.txt
	//../../
	FILE* pf = fopen("../../data.txt", "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		printf("%s\n", strerror(errno));
		return 1;//ʧ�ܷ���
	}
	//���ļ��ɹ�
	printf("���ļ��ɹ�\n");
	//��д�ļ�
	//...

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
