#pragma once

#include "pch.h"

// ����˳���ʵ��

// typedef class LNode* List;
typedef int Position;// using Position = int;
const int MAXSIZE = 100;
//#define int ERROR = -1;
template <class elemType>
class SeqArray
{
public:
	SeqArray() {
		Last = 0;
	}

	SeqArray(const elemType array[], const int& n)
	{
		if (n > MAXSIZE) { 
			std::cout << "The array is so large!" << std::endl; 
		}
		else {
			for (int i = 0; i < n; i++) {
				Data[i] = array[i];
			}
			Last = n;
		}
	}

	~SeqArray() {
	
	}

	// ����x����λ�ã�����
	void insert(elemType x, Position index);

	// ����������ɾ��
	void deleteByIndex(Position index);
	
	// ����ÿ��x ���ֵĵ�һ��λ�ã�������������
	Position findByValue(elemType x);

	// �������С
	int size() {
		return Last;
	}

	void printData();

private:
	elemType Data[MAXSIZE];
	int Last;
};


