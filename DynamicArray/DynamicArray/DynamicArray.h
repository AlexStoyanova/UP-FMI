#ifndef _DYNAMIC_ARRAY_
#define _DYNAMIC_ARRAY_
class DynamicArray
{
private:
	int size;
	int capacity;
	int* array;

	void resize();
public:
	DynamicArray();
	DynamicArray(int newCapacity);
	~DynamicArray();
	void pushBack(int element);
	void removeAt(int index);
	int getAt(int index);
	void setAt(int element, int index);
	void printInfo();
};

#endif