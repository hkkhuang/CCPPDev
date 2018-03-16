#include <stdio.h>
#include <stdlib.h>
#include <string>

class Tutorial
{
public:
	char name[32];
	char author[16];
public:
	void ShowInfo()
	{
		printf("Tutorial: %s, %s \n", name, author);
	}
};

class VideoTutorial : public Tutorial
{
public:
	void Play(); // 播放
public:
	char url[128]; // 在线观看的URL地址 
	int visits; // 播放量
};


class Parent
{
private:
	int ddd;
	//问题：父类的private成员变量也会出现在内存中吗？
	//	是的，父类的所有成员变量都在子类对象中，只是编译器限制了访问。


public:
	Parent()
	{
		ddd = 0x33333333;
	}
	int a;
};

class Child :public Parent
{
public:
	int b;
};


int main()
{
	//VideoTutorial  cpp_guide;
	//strcpy_s(cpp_guide.name, "C/C++学习指南");
	//strcpy_s(cpp_guide.author, "邵发");
	//cpp_guide.ShowInfo();

	//strcpy_s(cpp_guide.url, "http://www.hkkhuang.cn");
	//cpp_guide.visits = 20000;

	Child c;
	c.a = 0x11111111;
	c.b = 0x22222222;
	//在内存上描述父类和子类的关系: 子类对象的前半部分就是父类对象。
	//(1)用sizeof验证
	//(2)在内存窗口中直接观测


	system("Pause");
	return 0;
}