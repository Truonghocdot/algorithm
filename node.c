#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* createNode (int value ) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Khong the cap phat bo nho");
		exit(1);
	}
	newNode->data = value;
	newNode->next = NULL;
	
	return newNode;
}

Node* addToHead(Node* head ,int value) {
	Node* newNode = createNode(value);
	newNode->next = head;
	return newNode;
}

Node* addToTail(Node* head, int value) {
	Node* newNode = createNode(value);
	if(head == NULL) {
		return newNode;
	}
	
	Node* temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	
	temp->next = newNode;
	
	return head;
}

void printList(Node* head) {
	printf("Danh sach lien ket: ");
	Node* temp = head;
	
	while(temp->next ){
		printf("%d->",temp->data);
		temp = temp->next;
	}
	
	printf("NULL\n");
}
	
void printReverse(int a) {
	
	printf("%d",a%10);
	if(a/10) printReverse(a/10);
	
	printf("\n");
	
}
int main () {
	Node* head = NULL;
	
	head = addToHead(head,10);
	head =addToHead(head,12);
	head =addToHead(head,16);
	head =addToHead(head,18);
	
	head =addToTail(head,24);
	head =addToTail(head,28);
	head =addToTail(head,32);
	head =addToTail(head,44);
	
	printList(head);
	printReverse(123456);
}