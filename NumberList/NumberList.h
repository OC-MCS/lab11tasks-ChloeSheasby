// Specification file for the NumberList class
#pragma once
#include<iostream>
using namespace std;

class NumberList
{
private:
	// Declare a structure for the list
	struct ListNode
	{
		int value;           // The value in this node
		struct ListNode *next;  // To point to the next node
	};

	ListNode *head;            // List head pointer
	ListNode *tail;			   // List tail pointer

public:
	// Constructor
	NumberList()
	{
		head = nullptr;
		tail = nullptr;
	}

	// copy constructor
	NumberList(const NumberList &other);

	// Destructor
	~NumberList();

	// Linked list operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void displayList() const;

	// overloaded assignment operator
	NumberList operator = (const NumberList& other);
};

