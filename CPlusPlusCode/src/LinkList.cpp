#include "LinkList.h"
namespace LinkList_namespace {

	template<class elemType>
	LinkList<elemType>::LinkList()
		: _head(new LinkNode<elemType>)
		, length(0)
	{
		_head->_data = -999;
		_head->_next = nullptr;
	}

	template<class elemType>
	LinkList<elemType>::LinkList(const elemType array[], const int& n)
		: _head(new LinkNode<elemType>)
		, length(0)
	{
		_head->_data = -999;
		_head->_next = nullptr;
		for (int i = 0; i < n; i++) {
			LinkNode<elemType>* p = new LinkNode<elemType>;
			p->_data = array[i];
			p->_next = _head->_next;// ��nullptr ��ֵ�� p->_next 
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
		if (p->_next == nullptr) {
			return 1;
		}
		auto a = p->_next;
		return (1 + size_1(p->_next));
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
		LinkNode<elemType>* p = _head->_next;
		LinkNode<elemType>* new_p = new LinkNode<elemType>;
		int count = 1;// ������1����Ϊ�и�ͷ���
		while (p != nullptr) {
			if (index == count - 1) {
				break;
			}
			p = p->_next;
			count++;
		}
		new_p->_data = x;

		new_p->_next = p->_next;// ��p����һ���ڵ�(��ַ)��ֵ���½ڵ�new_p(��ַ)
		p->_next = new_p;// ���½ڵ�(��ַ)��ֵ����index�µ�p
	}

	template<class elemType>
	elemType LinkList<elemType>::remove(int index)
	{
		LinkNode<elemType>* p = _head;
		LinkNode<elemType>* temp = new LinkNode<elemType>;
		int count = 1;// ������1	
		while (p != nullptr) {
			if (index == count - 1) { 
				break; 
			}
			p = p->_next;//�ҵ���i-1������ p
			count++;
		}
		if (p == nullptr || p->_next == nullptr) throw "Location";
		else {
			q = p->_next;// ��ʱ���汻ɾ�����ĵ�ַ���Ա��ͷ�
			elemType x = temp->_data;// ����Ҫɾ���Ľ��ֵ
			p->_next = temp->_next;//��p->_next ָ��index �ĺ�̽��
			delete(temp);
			return x;
		}
	}

	template<class elemType>
	elemType LinkList<elemType>::findByKth(int index)
	{
		LinkNode<elemType>* p = _head->_next;
		int count = 0;
		while (p != nullptr && count < index) {
			p = p->_next;
			count++;
		}
		return p->_data;
		if (count == index) {
			return p->_data;
		}// �ҵ�����ָ��p ����ַ
	}

	template<class elemType>
	int LinkList<elemType>::findByValue(elemType x)
	{
		LinkNode<elemType>* p = _head->_next;
		int count = 0;
		while (p != nullptr && p->_data != x) {
			p = p->_next;
			count++;
		}
		return count;
	}
}

