#pragma once

#include "pch.h"



template <class elemType>
class LinkList
{
private:
	template <class elemType>
	struct LinkNode
	{
		elemType _data;//����
		LinkNode<elemType>* _next;//��ָ�루�洢��һ���ڵ�ĵ�ַ��
	};

public:
	LinkList();
	LinkList(const elemType array[], const int& n);
	~LinkList();

	// size
	int size_1(LinkNode<elemType>* p);	// �ݹ�
	int size_2();	// ѭ��
	int size();		// �Ƽ�����

	// insert
	void insert(int index, elemType x);

	// remove
	elemType remove(int index);

	// find by index
	elemType findByKth(int index);

	// find by value
	int findByValue(elemType x);




private:
	LinkNode<elemType>* _head;//ͷ���
	int length;
};
