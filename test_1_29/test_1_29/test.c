#define _CRT_SECURE_NO_WARNINGS 1

#include <assert.h>
#include <stdio.h>

//ģ��ʵ��strlen����

//size_t   ==  unsigned int

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str)
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
//	printf("len = %d\n", len);
//	return 0;
//}

#include <string.h>

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("С��\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	printf("%d\n", Fun(2));
//	return 0;
//}


//��Ŀ���ƣ�
//�ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
//

size_t my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char *left = str;
//	char* right = str+len-1;
//
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//		reverse_string(str+1);
//
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//��Ŀ���ƣ�
//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//��Ŀ���ݣ�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
//DigitSum(1729)
//DigitSum(172) + 9
//DigitSum(17) + 2+9 
//DigitSum(1) + 7 +2+9


//int DigitSum(size_t n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	size_t num = 0;
//	scanf("%u", &num);
//	size_t ret = DigitSum(num);
//	printf("%u\n", ret);
//	return 0;
//}
//
//
//��Ŀ���ƣ�
//�ݹ�ʵ��n��k�η�
//��Ŀ���ݣ�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n*Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n,k);
//	printf("%lf\n", ret);
//}
//
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص�����
//

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//
//����Ҫ�Ĳ���һ���ܳ��Ļ𳵣�Ҫ�������ʱ�䵽��һ����վ
//

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6 c=6
//	b = ++c, c++, ++a, a++;//c=8,a=8,b=7
//	b += a++ + c;//b=23 a=9
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	//����ת��
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//
//15
//1111

//ͳ�ƶ�������1�ĸ���
//int count_one_bit(size_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//n=15
//n = n&(n-1)
//����ı��ʽ��ʹ��n�Ķ����������ұߵ�1��ʧ
//
//1111-n
//1110
//1110-n
//1101-n-1
//1100-n
//1011-n-1
//1000-n

//�ȸ�
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//��д��������ôʹ�õ�
//	//TDD - ������������
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//	return 0;
//}

//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//дһ�����룬�ж�n�Ƿ�Ϊ2^m�η���

//8
//1000
//0100
//10000
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n&(n - 1) == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//
//
//void print(int m)
//{
//	//��ӡ����λ
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//00000000000000000000000000001010
//



//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//

//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//
//	char *pc = (char*)&a;
//	*pc = 0;
//
//	printf("%x\n", a);
//	return 0;
//}
//
//
#include < stdio.h >
//
//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//
//��Ŀ���ƣ�
//�������
//��Ŀ���ݣ�
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//��Ŀ���ƣ�
//����ˮ����
//��Ŀ���ݣ�
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//20
//	int total = 0;
//	int empty = 0;
//	total += money;
//	empty = money;
//
//	//�û�
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}
//


int main()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);//20
	if (money > 0)
		total = money * 2 - 1;

	printf("total = %d\n", total);
	return 0;
}




