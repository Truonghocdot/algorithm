#include <stdio.h>
#include <stdlib.h>

// Cấu trúc một nút trong danh sách
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Hàm tạo một nút mới
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Hàm thêm một nút vào đầu danh sách
Node* addToHead(Node* head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

// Hàm thêm một nút vào cuối danh sách
Node* addToTail(Node* head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Hàm in danh sách
void printList(Node* head) {
    Node* temp = head;
    printf("Danh sach lien ket: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Thêm nút vào đầu danh sách
    head = addToHead(head, 10);
    head = addToHead(head, 20);
    head = addToHead(head, 30);

    // Thêm nút vào cuối danh sách
    head = addToTail(head, 40);
    head = addToTail(head, 50);

    // In danh sách
    printList(head);

    return 0;
}
