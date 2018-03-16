#include<stdio.h>
#include <stdlib.h>

void printNum(const int* p, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d \n", *p); // 可以读
		p = p + 1; // 没问题 	/*const只是封禁的是星号操作，不允许写内存;但对于普通的指针加减是没关系的* /
	}
}


int main()
{
	//1、不加const
	//int a = 10;
	//int* p = &a;
	//*p = 11; // 可写
	//int b = *p; // 可读

	//2、加上const修饰
	//int a = 10;
	//const int* p = &a;
	////*p = 11; // 错误! 不可写
	//int b = *p; // 可读

	//所以，const的作用是封禁（限制）星号操作里的写内存功能
	//称为：只读的ReadOnly，这块内存只能读不能写

	/*const只是封禁的是星号操作，不允许写内存;
	但对于普通的指针加减是没关系的*/

	int arr[4] = { 2,4,6,8};
	printNum(arr, 4);

	system("Pause");
	return 0;
}