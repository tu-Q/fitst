#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





int Xinqi(int day)
{
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	case 0:
		printf("�˳�ϵͳ��\n");
		exit(0);
	}
}
int main()
{
	int i;
	while(1)
	{
		printf("����������(0-7)��");
		scanf("%d", &i);
		if (i < 0 || i>7)
		{
			while (i < 0 || i>7)
			{
				printf("������������ȷ�����֣�0-7����");
				scanf("%d", &i);
				if (i >= 0 && i <= 7)
				{
					Xinqi(i);
				}
			}
		}
		else
		{			
			Xinqi(i);			
		}
	} 
	return 0;
}	





//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
	//���ýṹ������-����һ�������͵Ľṹ�����
	//struct Book b1 = { "C���Գ������",55 };
	//strcpy(b1.name,"C++");//strcpy-string copy - �ַ�������-�⺯��-string.h
	//printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	/*printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	*/
	//return 0;
//}



//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);/*
//	printf("%lf\n", *pd);*/
//	printf("%d\n", sizeof(pd));

	// int a = 10;
	////printf("%p\n", &a);
	//int* p = &a;//p��һ������-ָ�����
	////int*��ʾһ��int*���͵ı�������int�͵�ָ�������int��ʾ�������������ͣ����ͣ���*��ʾָ���������
	////printf("%p\n", p);
	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
	//printf("%d\n", a);
	//return 0;
//}



//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(pc));
//	return 0;
//}



//int main()
//{
//	int a = 10;//4���ֽ�
//	int *p = &a;//ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��---ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;   //* -- �����ò�����
//	printf("a = %d\n", a);
//	return 0;
//
//}



//#define �����ʶ������
//#define MAX 100
//#define���Զ����--������
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}





//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//static���ξֲ�����
//�ֲ��������������ڱ䳤
//static����ȫ�ֱ���
// �ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// ����Դ�ļ���û����ʹ����
// static���κ���
// �ı��˺�������������
// �ⲿ��������-->�ڲ���������
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//int main()
//{
//	//��  -��0
//	//��  - 0
//	//&&  -�߼���
//}



//int main()
//{
//	int a = (int)3.14;//double --- int
//	return 0;
// register int a = 10;//�����a�ŵ��Ĵ�������
//}



//int main()
//{
//	int a = 10;
//	//int b = a++;//����++
//	//int b = ++a;
//	int b = a--;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}



//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ����ͣ�
//	//~1����2���ƣ�λȡ��
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001      -1
//	printf("%d\n",b);//ʹ�õģ���ӡ�����������ԭ��  -1
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����-ԭ�룬���룬���� ��ͬ
//������
//ԭ��                              ����                            ����
//ֱ�Ӱ�������              ԭ��ķ���λ����                    ����+1
//д���Ķ���������          ����λ��λȡ���õ� 




//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}



//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}