#include<iostream>
using namespace std;

int mainNUL() {
	
	//空指针
	//1. 空指针用于给指针变量进行初始化
	int* p = NULL;

	//2. 空指针是不可以进行访问的
	//0~255 内存编号是系统占用，不可以访问
	//*p = 100;

	// 野指针
	// 在程序中避免出现野指针
	//int* p = (int*)0x1100;

	cout << "p`s adress："<< endl;

	system("pause");
	return 0;
}

