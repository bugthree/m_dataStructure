#include "LinkList.h"

template<class elemType>
LinkList<elemType>::LinkList()
	: _head(new LinkNode<elemType>)
	, length(0)
{
	_head->_next = nullptr;
}

template<class elemType>
LinkList<elemType>::LinkList(const elemType array[], const int& n)
	: _head(new LinkNode<elemType>)
	, length(0)
{
	_head->_next = nullptr;
	for (int i = 0; i < n; i++) {
		LinkNode<elemType>* p = new LinkNode<elemType>;
		p->_data = array[i];
		p->_next = _head->_next;// ½«nullptr ¸³Öµ¸ø p->_next 
		_head->_next = p;//update
		length++;
	}
}

template<class elemType>
LinkList<elemType>::~LinkList()
{
	while (_head != nullptr)
	{
		LinkNode<elemType>* q = _head;
		_head = _head->_next;
		delete q;
	}
}

template<class elemType>
int LinkList<elemType>::size_1(LinkNode<elemType>* p)
{
	if (p->_next = nullptr) {
		return 1;
	}
	return (1 + size(p->_next));
}


template<class elemType>
int LinkList<elemType>::size_2()
{
	LinkNode<elemType>* p = _head->_next;
	int length = 0;
	while (p != nullptr)
	{
		p = p->_next;
		length++;
	}
	return length;
}

template<class elemType>
int LinkList<elemType>::size()
{
	return length;
}

template<class elemType>
void LinkList<elemType>::insert(int index, elemType x)
{
}

template<class elemType>
elemType LinkList<elemType>::remove(int index)
{
	return elemType();
}

template<class elemType>
elemType LinkList<elemType>::findByKth(int index)
{
	return elemType();
}

template<class elemType>
int LinkList<elemType>::findByValue(elemType x)
{
	return 0;
}
