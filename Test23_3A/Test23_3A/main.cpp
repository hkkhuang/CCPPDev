#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	//默认构造函数
	Parent()
	{
		printf("Parent: 创建 \n");
		a = b = 0;
	}
	Parent(int a, int b)
	{
		printf("Parent: 创建, 参数:a=%d, b=%d \n", a, b);
		this->a = a;
		this->b = b;
	}
	virtual ~Parent()
	{
		printf("Parent: 销毁 \n");
	}
public:
	int a, b;
};

class Child : public Parent
{
public:
	//Child()
	//{
	//	printf("Child: 创建 \n");
	//}
	Child():Parent(1,1) //显示调用父类构造函数
	{
		printf("Child: 创建 \n");
	}
	~Child()
	{
		printf("Child: 销毁 \n");
	}
};


int main()
{
	Child ch; 
	//Parent: 创建 
	//Child: 创建

	//当父类有多个构造函数，可以显式的调用其中的一个构造函数
	//Parent: 创建, 参数 : a = 1, b = 1
	//Child : 创建

	Parent* p = new Child();
	delete p;
	
	//Parent 析构函数没有virtual
	//Parent: 创建, 参数 : a = 1, b = 1
	//Child : 创建
	//Parent : 销毁

	//Parent 析构函数添加virtual
	//Parent: 创建, 参数 : a = 1, b = 1
	//Child : 创建
	//Child : 销毁
	//Parent : 销毁


	system("Pause");
	return 0;
}



