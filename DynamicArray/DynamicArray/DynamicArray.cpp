#include "DynamicArray.h"
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;



DynamicArray::DynamicArray(): size(0), capacity(8) {
	array = new int[capacity];
}


DynamicArray::DynamicArray(int newCapacity): size(0) {
	capacity = newCapacity;
	array = new int[capacity];
}


DynamicArray::~DynamicArray() {
	delete[] array;
}

void DynamicArray::resize() {
	int* newArray = new int[capacity * 2];
	for (size_t i = 0; i <capacity; i++)
	{
		newArray[i] = array[i];
	}
	capacity *= 2;
	delete[] array;
	array = newArray;
}

void DynamicArray::pushBack(int element) {
	if (size == capacity)
	{
		resize();
	}
	array[size] = element;
	size++;
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "Size: " << size << endl;
}
void DynamicArray::removeAt(int index) {
	for (size_t j = index; j < size-1; j++)
	{
		array[j] = array[j + 1];
	}
	size--;
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "Size: " << size << endl;
}
int DynamicArray::getAt(int index) {
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "Size: " << size << endl;
	if (index >= 0 && index <= size)
		return array[index];
	else {
		cout << "Fuck you, unvalid index!!!!" << endl;
		return -1;
	}
}
void DynamicArray::setAt(int element, int index) {
	if (index >= size && index <= capacity)
	{
		pushBack(element);
	}
	else if (index >= 0 && index < size)
	{
		array[index] = element;
	}
	else {
		cout << "Fuck you, unvalid index!!!!" << endl;
	}
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "Size: " << size << endl;
}

void DynamicArray::printInfo() {
	cout << "Address: " << this << endl <<
		"Address buff: " << array << endl <<
		"Size: " << size << endl <<
		"Capacity: " << capacity << endl;
}