#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node * next;
    node * prev;
    
    void showInfor(){
        cout << data << " ";
    }
};

int sz(node * head){
    int cnt = 0;
    while(head->next != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}
node * makeNode(int x){
    node * newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void duyet(node * head){
    while(head != NULL){
        head->showInfor();
        head = head->next;
    }
}

void insertHead(node * &head, int x){
    node * newNode = makeNode(x);
    newNode->next = head;
    if(head != NULL){
        head->prev = newNode;
    }
    
    head = newNode;
}

void insertMid(node * &head, int x, int k){
    node * newNode = makeNode(x);
    int size = sz(head);
    if(k < 1 || k > size + 1) return;
    node * tmp = head;
    for(int i = 1; i <= k-1; i++){
        tmp = tmp->next;
    }
    
    newNode->next = tmp;
    tmp->prev->next = newNode;
    newNode->prev = tmp->prev;
    tmp->prev = newNode;
    
    
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    node * head = NULL;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        insertHead(head, x);
    }
    insertMid(head, 156, 3);
    duyet(head);
    return 0;
}