#include "./DynamicArray.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	DynamicArray myArr(16);
	myArr.pushBack(8);
	myArr.pushBack(11);
	myArr.pushBack(5);
	myArr.pushBack(69);
	myArr.printInfo();
	myArr.pushBack(37);
	myArr.printInfo();
	myArr.removeAt(2);
	cout << "Should return 69 ;) : " << myArr.getAt(2) << endl;
	myArr.setAt(69, 1);
	myArr.pushBack(45);
	myArr.pushBack(46);
	myArr.pushBack(47);
	myArr.pushBack(48);
	myArr.pushBack(49);
	myArr.printInfo();
	return 0;
}