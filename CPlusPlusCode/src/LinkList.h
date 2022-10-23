#pragma once

#include "pch.h"



template <class elemType>
class LinkList
{
private:
	template <class elemType>
	struct LinkNode
	{
		elemType _data;//数据
		LinkNode<elemType>* _next;//链指针（存储下一个节点的地址）
	};

public:
	LinkList();
	LinkList(const elemType array[], const int& n);
	~LinkList();

	// size
	int size_1(LinkNode<elemType>* p);	// 递归
	int size_2();	// 循环
	int size();		// 推荐方法

	// insert
	void insert(int index, elemType x);

	// remove
	elemType remove(int index);

	// find by index
	elemType findByKth(int index);

	// find by value
	int findByValue(elemType x);




private:
	LinkNode<elemType>* _head;//头结点
	int length;
};
