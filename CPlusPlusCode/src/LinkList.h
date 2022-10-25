#pragma once

#include "pch.h"
namespace LinkList_namespace {
	template <class elemType>
	struct LinkNode
	{
		LinkNode() {
			//	_data = -999;
			// _next = nullptr;
		}
		elemType _data;//����
		LinkNode<elemType>* _next;//��ָ�루�洢��һ���ڵ�ĵ�ַ��
	};

	template <class elemType>
	class LinkList
	{

	public:
		LinkList();
		LinkList(const elemType array[], const int& n);
		//LinkList(const LinkNode<elemType>* )// ʹ�ýڵ㹹��
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
}

