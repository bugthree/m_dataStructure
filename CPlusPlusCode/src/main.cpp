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
	SeqArray<int> nonelist;//�޲ι���õ������Ա�
	std::cout << "the size is: " << nonelist.size() << std::endl;
	int a[] = { 1, 2, 3, 4, 0, 7 , 7, 9, 10, 21};
	//cout << sizeof(a)/4 << endl;
	SeqArray<int> list(a, 10);
	std::cout << "the size is: " << list.size() << std::endl;
	list.printData();
	std::cout << "��ֵ��ѯ��������λ�� " << list.findByValue(1) << std::endl;
	list.insert(10, 2);
	list.printData();
	list.deleteByIndex(list.findByValue(3));
	list.printData();
}

void test_LinkList()
{
	std::cout << "~~~~~~~~show link list~~~~~~~~~~~~" << std::endl;
	LinkList_namespace::LinkList<int> nollist;//�޲ι���õ�������
	int aa[] = { 9, 7, 6, 5 };
	LinkList_namespace::LinkList<int> llist(aa, 4);
	
	LinkList_namespace::LinkNode<int>* lnode0 = new LinkList_namespace::LinkNode<int>;
	LinkList_namespace::LinkNode<int>* lnode1 = new LinkList_namespace::LinkNode<int>;
	LinkList_namespace::LinkNode<int>* lnode2 = new LinkList_namespace::LinkNode<int>;

	lnode0->_data = 100;
	lnode1->_data = 101;
	lnode2->_data = 102;
	lnode2->_next = nullptr;

	lnode1->_next = lnode2;
	lnode0->_next = lnode1;

	std::cout << "Link list size method 1 is : " << llist.size_1(lnode0) << std::endl;
	delete lnode0;
	delete lnode1;
	delete lnode2;

	std::cout << "Link list size method 2 is : " << llist.size_2() << std::endl;


	std::cout << "Link list size method recommend is : " << llist.size() << std::endl;

	// test insert:
	llist.insert(1, 99);

	// test remove
	llist.remove(2);

	// test
	std::cout << "Link list find index 1 ,the value is : " << llist.findByKth(1) << std::endl;

	//test 
	std::cout << "Link list find valus 5 ,the index is : " << llist.findByValue(5) << std::endl;
}