#include <fstream>
#include <iostream>
#include <string>
#include "List.h"
int main() {
	//List list;
	//int num;
	//for (int i = 0; i < 4; ++i) {
	//	std::cin >> num;
	//	list.Insert(num);
	//}
	//list.Print();
	List list;
	for (int i = 0; i < 10; ++i) {
		int rans = rand() % 100;
		list.Insert(rans);
	}
	int Sentinel = 0;
	int num;
	char choice;
		while (Sentinel != 9) {
			std::cout << " Linked List" << std::endl;
			std::cout << "Press I to insert and then a number to insert" << std::endl;
			std::cout << "Press F to find and then a number which we'll be finding" << std::endl;
			std::cout << "Press R to remove and then a number which number to remove" << std::endl;
			std::cout << "Press P to print" << std::endl;
			std::cout << "Press S to sort" << std::endl;
			std::cout << "Enter Your Menu Choice: " << std::endl;
			std::cin >> choice >> num;
			std::cin.clear();
			std::cin.ignore(INT32_MAX, '\n');
			switch (choice) {
			case 'i':
				list.Insert(num);
				break;
			case 'f':
				list.Find(num);
				break;
			case 'r':
				list.Remove(num);
				break;
			case 'p':
				list.Print();
				break;
			case 's':
				
				list.Sort();
				break;
			case 'e':
				Sentinel = 9;
				break;
			default:
				std::cout << std::endl << "Invalid Menu choice \n" << std::endl;
				break;
			}
		}
	return 0;
}