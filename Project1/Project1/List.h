#pragma once
#include "Node.h"
class List
{
public:
	List();
	~List();
	void Insert(int aValue);
	void Remove(int aValue);
	void Sort();
	bool Find(int aValue) const;
	void Print() const;
	void Print(Node* current) const;
	Node operator=(const Node& b);
private:
	Node * mHead;
};




