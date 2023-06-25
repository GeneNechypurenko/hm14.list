#pragma once
#include <iostream>

using namespace std;

template <typename T>
class List
{
private:

	struct Node	{

		T data;
		Node* next;
	};

	Node* head;
	int length;

public:

	List()
		:head{ nullptr }, length{ 0 } {}

	~List() {

		RemoveAll();
	}

	void AddToHead(const T& data) {
		
		Node* node = new Node;

		node->data = data;
		node->next = head;

		head = node;

		length++;
	}

	void AddToTail(const T& data)	{

		Node* node = new Node;

		node->data = data;
		node->next = nullptr;

		if (head == nullptr)
			head = node;

		else	{

			Node* current = head;

			while (current->next != nullptr)
				current = current->next;

			current->next = node;
		}

		length++;
	}

	void RemoveFromHead() {

		if (length != 0) {

			Node* current = head;

			head = head->next;

			delete current;
			length--;
		}
	}

	void RemoveFromTail() {

		if (length != 0) {

			if (length == 1)
				RemoveFromHead();

			else {

				Node* current = head;
				Node* last = nullptr;

				while (current->next != nullptr) {

					last = current;
					current = current->next;
				}

				last->next = nullptr;

				delete current;
				length--;
			}
		}
	}

	void RemoveAll() {

		while (head != nullptr) {

			Node* current = head;

			head = head->next;

			delete current;
		}

		head = nullptr;
		length = 0;
	}

	void Display()
	{
		Node* current = head;

		while (current != nullptr)	{

			cout << "data-> " << current->data << endl;
			cout << "node-> " << current << endl;
			cout << "next-> " << current->next << endl;
			cout << endl;

			current = current->next;
		}
	}
};