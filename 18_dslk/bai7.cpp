// [Linked List]. Bài 7. Lật ngược DSLK
// Cho DSLK đôi chứa các số nguyên, nhiệm vụ của bạn là lật ngược DSLK đôi này và in ra các node trong DSLK sau khi lật.

// Đầu vào
// Dòng đầu tiên là N : số lượng node trong DSLK

// Dòng thứ 2 gồm N số là các số trong DSLK

// Giới hạn
// 1<=N<=1000

// Các node trong DSLK là số nguyên không âm không quá 1000.

// Đầu ra
// In ra DSLK đôi sau khi lật ngược.

// Ví dụ :
// Input 01
// Copy
// 9
// 97 207 886 278 987 602 826 817 459
// Output 01
// Copy
// 459 817 826 602 987 278 886 207 97


#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node * next;
    void showInfor(){
        cout << data << " ";
    }
};

void getNode(node * head){
    while(head != NULL){
        head->showInfor();
        head = head->next;
    }
}

void reverseNode(node * &head){
    if(head == NULL){
        return;
    }

    node * curr = head;
    node * next = NULL;
    node * prev = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

node * makeNode(int x){
    node * newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void insertHead(node * &head, int x){
    node * newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void insertAss(node * &head, int x){
    if(head == NULL){
        insertHead(head, x);
        return;
    }
    node * newNode = makeNode(x);
    node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    node * head = NULL;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        insertAss(head, x);
    }
    reverseNode(head);

    getNode(head);
    return 0;
}