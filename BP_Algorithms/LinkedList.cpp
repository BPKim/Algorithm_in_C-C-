#include"List.h"

using namespace std;

void LinkedList::init() {
	Head = (NODE*)malloc(sizeof(NODE));

	Head->data = -1;
	Head->next = NULL;
}
void LinkedList::addNode(int input) {
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	NODE * temp = Head;
	newNode->data = input;
	newNode->next = NULL;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	//cout<<"new data"+newNode->data +" /"+new+"/"
}
void LinkedList::printList() {
	NODE *temp;
	temp = Head;

	while (temp->next != NULL) {
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << temp->data +" ";

}
/* 1.2 연결리스트 출력하기 */
/* 재귀 호출을 이용한 리스트 출력 */
void LinkedList::recursivePrintList(NODE *temp) {

	if (temp->next == NULL) {
		cout << temp->data << endl;

		return;
	}
	cout << temp->data << " ";
	recursivePrintList(temp->next);
		
}

void LinkedList::recursivePrintList() {
	
	recursivePrintList(Head);
}

/* 재귀 호출을 이용한 리스트 역순 출력 */
void LinkedList::recursiveReversePrintList(NODE *temp) {

	if (temp->next == NULL) {
		//cout << temp->data << endl;
		printf("%d", temp->data);

		return;
	}

	recursiveReversePrintList(temp->next);

	printf("%d", temp->data);

}

void LinkedList::recursiveReversePrintList() {

	recursivePrintList(Head);
}