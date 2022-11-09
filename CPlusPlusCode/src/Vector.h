#pragma once

// 
template <typename Object>
class Vector
{
public:
	explicit Vector(int initSize = 0)
		: theSize(initSize)
		, theCapacity(initSize + SPARE_CAPACITY)
	{
		objects = new Object[theCapacity];
	}

	Vector(const Vector& rhs)
		:objects(nullptr)
	{
		operator=(rhs);
	}

	const Vector& operator=(const Vector& rhs)
	{
		// 深拷贝
		if (this != &rhs)
		{
			delete[] objects;
			theSize = rhs.size();
			theCapacity = rhs.theCapacity;

			objects = new Object[theCapacity];
			for (int i = 0; i < sizeof(); i++) {
				objects[i] = rhs.objects[i];
			}
		}
		return *this;
	}

	~Vector()
	{
		if (objects)
			delete[] objects;
	}

	int size() const {
		return theSize;
	}
	bool empty() const {
		size() == 0;
	}

	void resize(int newSize)
	{
		if (newSize > theCapacity)
		{
			reserve(newSize * 2 + 1);
		}
		theSize = newSize;
	}
	

	Object& operator[](int index) {
		return objects[index]
	}

	Object& operator[](int index) const{
		return objects[index]
	}

	void reserve(int newCapacity)
	{
		if (newCapacity < theSize)
			return;

		Object* oldArray = objects;

		objects = new Object[newCapacity];
		for (int i = 0; i < sizeof(); i++) {
			objects[i] = oldArray[i];
		}

		theCapacity = newCapacity;

		delete[] oldArray;
	}
	//int capacity() const {
	//	return theCapacity
	//}
	enum { SPARE_CAPACITY = 16 };

	void push_back(const Object& x) {
		if (theSize == theCapacity) {
			reserve(2 * theCapacity + 1);
		}
		objects[theSize++] = x;
	}
	void pop_back() {
		theSize--;
	}
	const Object& back() const {
		return objects[theSize - 1];
	}

	typedef Object* iterator;
	typedef const Object* const_iterator;
	iterator begin() {
		return &objects[0];
	}
	const_iterator begin() const {
		return &objects[0];
	}
	
	iterator end {
		return &objects[size()];
	}
	const_iterator end() const {
		return &objects[size()];
	}

private:
	int theSize;
	int theCapacity;
	Object* objects;
};

