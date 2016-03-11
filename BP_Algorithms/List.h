#pragma once
#include <iostream>
#include <cstdio>

struct NODE {
	int data;
	struct NODE *next;

};

class LinkedList {
private:
	NODE * Head;
	void recursivePrintList(NODE *temp);
	void recursiveReversePrintList(NODE *temp);

public:
	void init();
	void addNode(int input);
	void printList();
	void recursivePrintList();
	void recursiveReversePrintList();
	void delNode();
	int getNode();
};