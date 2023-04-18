/*

#include <iostream>
#include "doublyLinkedList.h"

using namespace std;

int main() 
{
	LinkedList myList;
	int x;

	if (myList.isEmpty()) cout << "List is empty" << endl;
	else cout << "List is not empty" << endl;

	//Add 5 random numbers to list
	for (int i = 0; i < 5; i++)
		myList.add(rand() % 20); cout << endl;
	

	myList.display(); cout << endl;
	myList.displayInReverse(); cout << endl;

	if (myList.isEmpty()) cout << "List is empty" << endl;
	else cout << "List is not empty" << endl;

	myList.add(70);
	myList.add(77);
	myList.add(79);
	myList.display(); cout << endl;
	myList.remove(70);
	myList.remove(77);
	myList.remove(79);
	cout << "Integers removed" << endl;
	myList.display(); cout << endl;
	cout << "Ints added to end" << endl;
	myList.addEnd(80);
	myList.addEnd(88);
	myList.addEnd(89);
	myList.display(); cout << endl;
	myList.remove(80);
	myList.remove(88);
	myList.remove(89);
	cout << "Integers removed" << endl;
	myList.display(); cout << endl;
}
*/