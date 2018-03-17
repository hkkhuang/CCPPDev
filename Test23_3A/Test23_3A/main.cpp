#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	//Ĭ�Ϲ��캯��
	Parent()
	{
		printf("Parent: ���� \n");
		a = b = 0;
	}
	Parent(int a, int b)
	{
		printf("Parent: ����, ����:a=%d, b=%d \n", a, b);
		this->a = a;
		this->b = b;
	}
	virtual ~Parent()
	{
		printf("Parent: ���� \n");
	}
public:
	int a, b;
};

class Child : public Parent
{
public:
	//Child()
	//{
	//	printf("Child: ���� \n");
	//}
	Child():Parent(1,1) //��ʾ���ø��๹�캯��
	{
		printf("Child: ���� \n");
	}
	~Child()
	{
		printf("Child: ���� \n");
	}
};


int main()
{
	Child ch; 
	//Parent: ���� 
	//Child: ����

	//�������ж�����캯����������ʽ�ĵ������е�һ�����캯��
	//Parent: ����, ���� : a = 1, b = 1
	//Child : ����

	Parent* p = new Child();
	delete p;
	
	//Parent ��������û��virtual
	//Parent: ����, ���� : a = 1, b = 1
	//Child : ����
	//Parent : ����

	//Parent �����������virtual
	//Parent: ����, ���� : a = 1, b = 1
	//Child : ����
	//Child : ����
	//Parent : ����


	system("Pause");
	return 0;
}



