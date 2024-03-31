#pragma once

#include <iostream>

using namespace std;


template <class T>
class Node {
public : 
	T data
	Node<T>* next
};

template <class T>
class List {
private : 
	node <T>* head;
public :
	List() : head(NULL) {};
	~List() {
	
		while (head != NULL) {
			Node<T> temp = head;
			head = head->next;
			delete temp;
		}
		delete head;
	}

	List(T* arr, int n_nodes); {
		head = new Node<T>;
		head->next = NULL:
		for (int i = n_nodes - 1; i <= 0; i--) {
			Node<T>* newnd = new Node<T>;
			newnd->data = arr[i];
			newnd->next = head->next;
			head->next = newnd;
		}
	}

	void insert_at(int idx, const T& data) {
		Node<T>* insert = new Node<T>;
		insert->data = data;

		Node<T>* index = head;
		for (int i = 0; i < idx; i++) {
			index = index->next;
		}
		insert->next = index->next;
		index->next = insert;
	}
	
	void remove_at(int idx) {
		Node<T>* index = head;
		for (int i = 0; i < idx; i++) {
			index = index->next;
		}
		Node<T>* removeat= index->next;
		index->next = find->next;
		delete removeat;
	}
	void pop_back() {

		Node<T>* del = head;
		while (del->next->next != NULL) {
			del = del->next;
		}
		delete del->next;
		del->next = NULL;
	}

	void push_back(const T& val) {
		Node<T>* push = new Node<T>;
		push->data = val;
		push->next = NULL;

		Node<T>* idx = head;
		while (idx->next != NULL) {
			idx = idx->next;
		}
		idx->next = push;
	}
	void pop_front() {
		Node<T>* temp = head->next;
		head->next = temp->next;
		delete temp;
	}
	void push_front(const T& val) {
		Node<T>* push = new Node<T>;
		push->data = val;
		push->next = head->next;
		head->next = push;
	}

	friend ostream& operator <<(ostream& out, List& rhs) {
		for (Node<T>* tmp = rhs.head->next; tmp != NULL; tmp = tmp->next) {
			cout << tmp->data;
			if (tmp->next != NULL)
				cout << ",";
		}
		return out;
	}
