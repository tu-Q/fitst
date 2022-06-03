#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





int Xinqi(int day)
{
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	case 0:
		printf("退出系统！\n");
		exit(0);
	}
}
int main()
{
	int i;
	while(1)
	{
		printf("请输入数字(0-7)：");
		scanf("%d", &i);
		if (i < 0 || i>7)
		{
			while (i < 0 || i>7)
			{
				printf("请重新输入正确的数字（0-7）：");
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
	//利用结构体类型-创建一个该类型的结构体变量
	//struct Book b1 = { "C语言程序设计",55 };
	//strcpy(b1.name,"C++");//strcpy-string copy - 字符串拷贝-库函数-string.h
	//printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
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
	//int* p = &a;//p是一个变量-指针变量
	////int*表示一个int*类型的变量，即int型的指针变量。int表示基本的数据类型（整型）；*表示指针操作符。
	////printf("%p\n", p);
	//*p = 20;//* - 解引用操作符/间接访问操作符
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
//	int a = 10;//4个字节
//	int *p = &a;//取地址
//	//有一种变量是用来存放地址的---指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;   //* -- 解引用操作符
//	printf("a = %d\n", a);
//	return 0;
//
//}



//#define 定义标识符常量
//#define MAX 100
//#define可以定义宏--带参数
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}





//声明外部函数
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
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//static修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量
// 改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用
// 出了源文件就没法再使用了
// static修饰函数
// 改变了函数的链接属性
// 外部链接属性-->内部链接属性
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
//	//真  -非0
//	//假  - 0
//	//&&  -逻辑与
//}



//int main()
//{
//	int a = (int)3.14;//double --- int
//	return 0;
// register int a = 10;//建议把a放到寄存器里面
//}



//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++
//	//int b = ++a;
//	int b = a--;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}



//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整型，
//	//~1按（2进制）位取反
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001      -1
//	printf("%d\n",b);//使用的，打印的是这个数的原码  -1
//}
//只要是整数，内存中存储的都是二进制的补码
//正数-原码，反码，补码 相同
//负数：
//原码                              反码                            补码
//直接按照正负              原码的符号位不变                    反码+1
//写出的二进制序列          其他位按位取反得到 




//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
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