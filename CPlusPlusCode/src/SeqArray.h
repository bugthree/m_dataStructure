#pragma once

#include "pch.h"

// 线性顺序表实现

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

	// 按照x和其位置，插入
	void insert(elemType x, Position index);

	// 按照索引，删除
	void deleteByIndex(Position index);
	
	// 查找每个x 出现的第一个位置，并返回其索引
	Position findByValue(elemType x);

	// 返回其大小
	int size() {
		return Last;
	}

	void printData();

private:
	elemType Data[MAXSIZE];
	int Last;
};


