#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	return 0;
//}

//Ԥ�������
//int main()
//{
//	//printf("%s\n", __FILE__);//��ǰ�ļ���ַ
//	//printf("%d\n", __LINE__);//��ǰ��������
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//д��־�ļ�
//	int arr[10] = { 0 };
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	printf("%s\n", __FUNCTION__);
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//�����
//#define SQUARE(X) X*X
//#define SQUARE(X) (X)*(X)

//int main()
//{
//	int ret = SQUARE(5);
//	//�����滻�Ķ��Ǵ��ε�
//	int ret = SQUARE(5+1);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//#define MAX 100
//#define DOUBLE(X) ((X)+(X))

//int main()
//{
//	int a = 5;
//	//int ret = 10 * DOUBLE(a);
//	int ret = 10 * DOUBLE(MAX);
//	printf("%d\n", ret);
//	return 0;
//}

//�������:��ΰѲ������뵽�ַ�����
//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//
//	return 0;
//}

//#��ʹ��
//#define PRINT(X) printf("the value of "#X" is %d\n", X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//
//	return 0;
//}

//##��ʹ��
#define CAT(X,Y) X##Y
int main()
{
	int Class50 = 2019;
	//printf("%d\n", Class50);
	printf("%d\n", CAT(Class, 50));
	return 0;
}