#include <stdio.h>
#include <stdlib.h>


//���������д�Ӹ���̳ж����ĺ��� ��overwriting)
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
		//�����д��ʱ�򣬻���ҪǶ�����һ�¸���ĺ�������ô��
		Parent::Test(); // ��ʽ�ص��ø���ĺ���

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
	//ch.Test(); // ���õ��������Test()����

	//����ָ��ָ���������
	Child ch;
	Parent* ch2;
	ch2 = &ch;

	//�ں�����д�������� ֻ�ܵ��ø��෽��
	ch2->Test(); //ֻ��Parent test...

	Parent* ch3 = new Child(); 
	ch3->Test2(); //Virtual Child test2...

	system("Pause");
	return 0;
}