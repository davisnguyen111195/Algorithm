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
int main(){
    
    node* head = makeNode(100);
    head->data = 100;
    head->next = NULL;
    node* thu2 = new node;
    thu2->data = 200;
    thu2->next = NULL;
    head->next = thu2;
    return 0;
}