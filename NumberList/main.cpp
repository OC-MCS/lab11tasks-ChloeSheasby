#include <iostream>
#include <fstream>
#include <string>
#include "NumberList.h"
using namespace std;

int main()
{
	// shows basic demonstration of the NumberList functions into list
	NumberList list;
	list.insertNode(10);
	list.appendNode(40);
	list.appendNode(100);
	list.insertNode(101);
	list.insertNode(30);
	list.insertNode(25);
	list.deleteNode(30);
	list.deleteNode(101);
	list.appendNode(15);
	list.displayList();
	cout << endl;

	// reads numbers from a text file into another NumberList
	NumberList another;
	fstream file;
	int tempNum;
	file.open("Text.txt");
	while (file >> tempNum)
	{
		another.insertNode(tempNum);
	}
	another.displayList();
	cout << endl;

	NumberList listA, listB;
	listA.appendNode(10);
	listA.appendNode(20);
	listB.appendNode(15);
	listB.appendNode(40);
	cout << "list A before assign: " << endl;
	listA.displayList();
	cout << "list B before assign: " << endl;
	listB.displayList();
	listA = listB;	// assign B to A
	listA.insertNode(34);
	listA.appendNode(90);
	listB.appendNode(50);
	cout << "list A after assign: " << endl;
	listA.displayList();
	cout << "list B after assign: " << endl;
	listB.displayList();
	cout << endl;

	NumberList test;
	test.appendNode(30);
	test.insertNode(210);
	test.insertNode(120);
	test.insertNode(90);
	test.appendNode(150);
	test.deleteNode(210);
	test.appendNode(210);
	test.displayList();

	return 0;
}