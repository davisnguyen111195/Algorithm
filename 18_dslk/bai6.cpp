// [Linked List]. Bài 6. Đếm tần suất
// Cho DSLK lưu các từ và tần suất của nó, nhiệm vụ của bạn là sử dụng DSLK để lưu các từ kèm theo tần suất xuất hiện của nó trong một đoạn văn.

// Đối với ngôn ngữ lập trình C, cấu trúc node sẽ là :

// Copy
// struct node{
//     char data[100];
//     int fre;
// };
// Đối với ngôn ngữ lập trình C++, cấu trúc node sẽ là :

// Copy
// struct node{
//     string data;
//     int fre;
// };
// Đầu vào
// Gồm nhiều dòng, mỗi dòng có thể có nhiều từ.

// Giới hạn
// Có tất cả không quá 10000 từ, mỗi từ có độ dài không quá 20 kí tự.

// Đầu ra
// In ra các từ kèm theo tần suất của nó theo thứ tự xuất hiện.

// Ví dụ :
// Input 01
// Copy
// java    
// python python backend    programming 28tech 
// python
// Output 01
// Copy
// java 1
// python 3
// backend 1
// programming 1
// 28tech 1


#include <bits/stdc++.h>

using namespace std;

struct node {
    string data;
    int fre;
    node * next;
    void showInfor(){
        cout << data << " " << fre << endl;
    }
};

node * makeNode(string x, int y){
    node * newNode = new node;
    newNode->data = x;
    newNode->fre = y;
    newNode->next = NULL;
    return newNode;
}

void insertHead(node * &head, string x, int y){
    node * newNode = makeNode(x, y);
    newNode->next = head;
    head = newNode;
}

int size(node * head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insertAss(node * &head, string x, int y){
    if(head == NULL){
        insertHead(head, x, y);
        return;
    }
    node * newNode = makeNode(x, y);
    node * tmp = head;
    while(tmp->next != NULL){

        tmp = tmp->next;
    }

    tmp->next = newNode;
}
void showNode(node * head){
    while(head != NULL){
        head->showInfor();
        head = head->next;
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<string, int> mS;
    vector<string> vS;
    while(getline(cin, s)){
        stringstream ss(s);
        string w;
        while(ss >> w){
            if(mS[w] == 0){
                vS.push_back(w);
            }
            mS[w]++;

        }
    }
    node * head = NULL;
    for(auto item: vS){
        insertAss(head, item, mS[item]);
    }
    showNode(head);
    return 0;
}