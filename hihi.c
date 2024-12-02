#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

Node* addToTail(Node* head, int value) {
	Node* newNode = createNode(value);
	if(head == NULL){
		return newNode;
	}
	Node* temp = head;
	while(temp->next != NULL) {
	 temp = temp->next;
	}
	
	temp->next = newNode;
	return head;
}


Node* addToHead(Node* head, int value) {
	Node* newNode = createNode(value);
	newNode->next = head;
	return newNode;
}

int summarySquareOfN(int n) {
	if(n < 2) return 1;
	return n*n + summarySquareOfN(n - 1);
}

void reverseNumber(int n) {
	printf("%d", n % 10);
    if (n / 10 != 0) {
        reverseNumber(n / 10);
    }else{
    	printf("\n");
	}
}
int main () {
//	int n, x;
//	printf("Type the value of n do you want "); 
//	scanf("%d",&n);
//	int sum = summarySquareOfN(n);
//	printf("The value of summary from 1 to %d = %d",n, sum );
//	reverseNumber(n);
}