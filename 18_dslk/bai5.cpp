// [Linked List]. Bài 5. Sắp xếp DSLK
// Cho DSLK các số nguyên, hãy thực hiện sắp xếp các node trong DSLK theo thứ tự tăng dần, giảm dần rồi in ra màn hình.

// Đầu vào
// Dòng đầu tiên là N : Số lượng node trong DSLK

// Dòng thứ 2 gồm N số lần lượt là các node trong DSLK.

// Giới hạn
// 1<=N<=100

// Các node trong DSLK là số nguyên không âm không vượt quá 1000

// Đầu ra
// Dòng 1 in ra DSLK được sắp xếp tăng dần

// Dòng 2 in ra DSLK được sắp xếp giảm dần

// Ví dụ :
// Input 01
// Copy
// 9
// 59 92 13 13 35 52 17 3 26
// Output 01
// Copy
// 3 13 13 17 26 35 52 59 92 
// 92 59 52 35 26 17 13 13 3


#include <bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node * next;

    void showInfor(){
        cout << data << " ";
    }
};

node * makeNode(int x){
    node * newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void insertBeginNode(node * &head, int x){
    node * newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}
//sap xep giam dan
void sortGiam(node * &head){
    for(node * i = head; i != NULL; i = i->next){
        node * minNode = i;
        for(node * j = i->next; j != NULL; j=j->next){
            if(minNode->data >= j->data){
                minNode = j;
            }
        }
        int tmp = minNode->data;
        minNode->data = i->data;
        i->data = tmp;
    }
}

//sap xep tang dan
void sortTang(node * &head){
    for(node * i = head; i != NULL; i = i->next){
        node * maxNode = i;
        for(node * j = i->next; j != NULL; j=j->next){
            if(maxNode->data < j->data){
                maxNode = j;
            }
        }
        int tmp = maxNode->data;
        maxNode->data = i->data;
        i->data = tmp;
    }
}

void getNode(node * head){
    while(head != NULL){
        head->showInfor();
        head = head->next;
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    node * head = NULL;
    while(t--){
        int x;
        cin >> x;
        insertBeginNode(head, x);
    } 
    sortGiam(head);
    getNode(head);
    cout << endl;
    sortTang(head);
    getNode(head);
    return 0;
}
