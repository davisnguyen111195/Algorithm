#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
};
node* makeNode(int x){
    node* newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyetNode(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void themDauNode(node *&head, int x){
    node *newNode = makeNode(x);
    //cho node moi tro vao node dau tien trong dslk
    newNode->next = head;
    //cap nhat node head thanh newNode
    head = newNode;
}
void themCuoiNode(node *&head, int x){
    
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    node *head = NULL;
    for(int i = 1; i <= 5; i++){
        themDauNode(head, i);
    }

    duyetNode(head);
    return 0;
}