#include <stdio.h>
#include <stdlib.h>


//子类可以重写从父类继承而来的函数 （overwriting)
class Parent
{
public:
	void Test()
	{
		printf("Parent test1...\n");
	}

	virtual void Test2()
	{
		printf("Virtual Parent test2...\n");
	}
};
class Child : public Parent
{
public:
	void Test()
	{
		//如果重写的时候，还是要嵌入调用一下父类的函数，怎么办
		Parent::Test(); // 显式地调用父类的函数

		printf("Child test...\n");
	}

	void Test2()
	{
		printf("Virtual Child test2...\n");
	}
};

int main()
{
	//Child ch;
	//ch.Test(); // 调用的是子类的Test()函数

	//父类指针指向子类对象
	Child ch;
	Parent* ch2;
	ch2 = &ch;

	//在函数重写上有问题 只能调用父类方法
	ch2->Test(); //只有Parent test...

	Parent* ch3 = new Child(); 
	ch3->Test2(); //Virtual Child test2...

	system("Pause");
	return 0;
}