#include "SeqArray.h"



template<class elemType>
inline void SeqArray<elemType>::insert(elemType x, Position index)
{
	if (Last == MAXSIZE - 1)
	{
		std::cout << "the array is full��" << std::endl; 
		return;
	}
	if (index < 0 || index>(Last + 2)) 
	{ 
		std::cout << "the array index is fault!" << std::endl; 
		return;
	}
	for (int end = Last; end >= index - 1; end--) 
	{
		Data[end + 1] = Data[end];//����ѭ���������һ��ֵ����������һ��,�൱�ڽ���������� index������������������һ��
	}
	Data[index - 1] = x;//index-1 ����Ϊ��0 ��ʼ
	Last++;//���³���
	return;
}

template<class elemType>
inline void SeqArray<elemType>::deleteByIndex(Position index)
{
	if (Last == MAXSIZE - 1) { 
		std::cout << "the array is full��" << std::endl;
		return;
	}
	if (index < 0 || index>(Last + 2)) { 
		std::cout << "the array index is fault!" << std::endl;
		return;
	}
	for (; index < Last; index++) {
		Data[index - 1] = Data[index];
	}
	Last--;
	return;
}

template<class elemType>
inline Position SeqArray<elemType>::findByValue(elemType x)
{
	Position i = 0;
	while (i <= Last && Data[i] != x)
		i++;
	if (i > Last) 
		return -1;
	else 
		return i;
}

template<class elemType>
void SeqArray<elemType>::printData()
{
	std::cout << "print data: " << std::endl;
	for (Position i = 0; i < Last; i++) {
		std::cout << "index = " << i << ", the data = " << Data[i] << std::endl;
	}
}
