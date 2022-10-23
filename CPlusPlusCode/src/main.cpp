#include "pch.h"

#include "SeqArray.h"
#include "SeqArray.cpp"

#include "LinkList.h"
#include "LinkList.cpp"

void test_SeqArray();
void test_LinkList();

int main()
{
	test_SeqArray();
	test_LinkList();
}

void test_SeqArray()
{
	std::cout << "~~~~~~~~show seq array~~~~~~~~~~~~" << std::endl;
	SeqArray<int> nonelist;//无参构造得到的线性表
	std::cout << "the size is: " << nonelist.size() << std::endl;
	int a[] = { 1, 2, 3, 4, 0, 7 , 7, 9, 10, 21};
	//cout << sizeof(a)/4 << endl;
	SeqArray<int> list(a, 10);
	std::cout << "the size is: " << list.size() << std::endl;
	list.printData();
	std::cout << "按值查询，返回其位置 " << list.findByValue(1) << std::endl;
	list.insert(10, 2);
	list.printData();
	list.deleteByIndex(list.findByValue(3));
	list.printData();
}

void test_LinkList()
{
	std::cout << "~~~~~~~~show link list~~~~~~~~~~~~" << std::endl;
	LinkList<int> nollist;//无参构造得到的链表
	int aa[] = { 9, 7, 6, 5 };
	LinkList<int> llist(aa, 4);

	//std::cout << "Link list size method 1 is : " << llist.size_1(&llist) << std::endl;

	std::cout << "Link list size method 2 is : " << llist.size_2() << std::endl;


	std::cout << "Link list size method recommend is : " << llist.size() << std::endl;
}