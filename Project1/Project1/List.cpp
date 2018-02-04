#include "List.h"

#include <iostream>

List::List() : mHead (nullptr)
{

}

List::~List()
{
	// trailing iterator
	Node * victim = nullptr;
	for (Node * i = mHead; i != nullptr; i = i->mNext) {
		delete victim;
		victim = i;
	}
	delete victim;
	mHead = nullptr;
}
void List::Insert(int aValue) {
	// insert Front
	// 1) keep track of old head
	Node * oldHead = mHead;
	// 2) create new mHead
	mHead = new Node();
	mHead->mData = aValue;

	// 3) ....
	mHead->mNext = oldHead;
	// 4) profit??
}
void List::Remove(int aValue) {
	Node *prev = nullptr;
	Node* victim;
	// find node to remove; all node that point to it (prev)
	for (victim = mHead; victim != nullptr; victim = victim->mNext) {
		if (victim->mData == aValue) {
			break;
		}
		prev = victim;
	}
	if (victim == nullptr) {
		return;
	}
	else if (victim != mHead) {
		prev->mNext = victim->mNext;
		delete victim;
	}
	else {
		mHead = mHead->mNext;
		delete victim;
	}
}
bool List::Find(int aValue) const {
	for (Node* i = mHead; i != nullptr; i = i->mNext) {
		if(mHead->mData == aValue) 
			return true;
	}
}
void List::Print() const {
	for (Node* i = mHead; i != nullptr; i = i->mNext) {
		std::cout << i->mData << " -> ";
	}
	std::printf("x");
}
void List::Print(Node* current) const {
	Node* (temps) = current;
	for (Node* i = current; i->mNext != nullptr; i = i->mNext) {
		std::cout << i->mData << " -> ";
	}
	std::printf("x");
}
void List::Sort() {
	Node *temp = mHead;
	for (Node* i = mHead; i != nullptr ; i = i->mNext ) {
			if ((temp->mData) < (i->mData)) {
				temp->mData = j->mData;


			}
			else if (i->mData < j->mData) {
				temp->mData = i->mData;
			}
			else
				continue;
		}
	Print(temp);
}
Node List::operator=(const Node& b) {
	Node _temp;
	_temp =  b;
	return _temp;
}
