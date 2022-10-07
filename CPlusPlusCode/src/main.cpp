#include "pch.h"
#include "SeqArray.h"
#include "SeqArray.cpp"

void test_SeqArray();

int main()
{
	test_SeqArray();
	
}

void test_SeqArray()
{
	SeqArray<int> nonelist;//无参构造得到的线性表
	std::cout << "the size is: " << nonelist.size() << std::endl;
	int a[] = { 1, 2, 3 };
	//cout << sizeof(a)/4 << endl;
	SeqArray<int> list(a, 3);
	std::cout << "the size is: " << list.size() << std::endl;
	list.printData();
	std::cout << "按值查询，返回其位置 " << list.findByValue(1) << std::endl;
	list.insert(10, 2);
	list.printData();
	list.deleteByIndex(list.findByValue(3));
	list.printData();
}