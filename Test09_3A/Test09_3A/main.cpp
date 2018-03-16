#include <stdio.h>
#include <stdlib.h> 

//void fun(int* p) //参数类型是一个指针
//{
//	printf("old value：a=%d \n", *p);
//	*p += 10; //传过来的参数是地址 在这个函数中进行的操作会影响到原来变量
//}

//***********
//求两数的和
void sum(int* a, int* b, int* r)
{
	int result = *a + *b; // 读取输入
	*r = result; // sum保存输出, 不使用返回值
}

//交换两个数值
void swap(int*a, int*b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

//******传递数组作为参数
double avg(int* p, int len)
{
	double sum = 0;
	for(int i = 0; i < len; i ++)
	{
		sum += p[i];
	}
	return sum / len;
}

//写一个函数，求出一个数组的最小值和最大值
void  max_min(int* p, int len, int* max, int* min)
{
	int MyMax = p[0];
	int MyMin = p[0];
	for (int i = 1; i < len; i++)
	{
		if (p[i] > MyMax)
		{
			MyMax = p[i];
		}
		if (p[i] < MyMin)
		{
			MyMin = p[i];
		}
	}
	*max = MyMax;
	*min = MyMin;

}



//注：把用于输入的参数称为输入参数，如p, len
//把用于输出的参数称为输出参数，如max, min


int main()
{
	//int a = 10;
	//fun(&a); //将变量a的地址作为参数传递

	//printf("new value: a=%d \n", a);  //输出结果为20

	//**********
	//int a = 2, b = 3;
	//int r = 0;
	//sum(&a, &b, &r);
	//printf("%d + %d = %d", a, b, r); 

	//**********
	//int a = 1;
	//int b = 2;
	//printf("before swap: a=%d,b=%d \n", a, b); //before swap : a = 1, b = 2
	//swap(&a, &b);
	//printf("after swap: a=%d,b=%d \n", a, b); //after swap : a = 2, b = 1

	//***************
	//int arr[] = { 1,2,3,4 };
	//double ret;

	//ret = avg(arr, 4); //从arr[0]到arr[3]
	//printf("ret=%0.2f \n", ret); 
	//ret = avg(arr, 3); // arr[0] .. arr[2]
	//printf("ret=%0.2f \n", ret);
	//ret = avg(arr + 1, 3); // arr[1] .. arr[3]
	//printf("ret=%0.2f \n", ret);

	//***********
	int arr[5] = { 2,3,8,4,6 };
	int* p = arr;
	int max=0, min=0;
	max_min(arr, 5, &max, &min);
	printf("max=%d,min=%d\n", max, min); //可以一次返回多个值


	system("Pause");
	return 0;
}

//使用指针作为参数，可以实现两种功能：
//可以读取上一层函数中变量的值 *p
//可以修改上一层函数中变量的值 *p(普通的参数无法实现）
