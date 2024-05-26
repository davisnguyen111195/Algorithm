// [Linked List]. Bài 2. Xóa node
// Cho một DSLK, mỗi node trong DSLK là một số tự nhiên.

// Thực hiện xóa toàn bộ node có giá trị X trong DLKS.

// Ví dụ DSLK = {1, 2, 2, 3, 3, 2, 4} và X = 2 thì sau khi xóa DSLK sẽ là {1, 3, 3, 4}. Bài này các bạn phải cài đặt bằng DSLK và xây dựng hàm xóa node như sau

// Copy
// void deleteAll(node *&head, int X){
//     //code here
// }
// Đầu vào
// Dòng đầu tiên là N : số lượng node của DSLK và X là giá trị cần xóa.

// Dòng thứ 2 gồm N số lần lượt là các node trong DSLK.

// Giới hạn
// 1<=N<=1000

// Các node và X là số tự nhiên không quá 1000;

// Đầu ra
// In ra DSLK sau khi xóa hết các node có giá trị X.

// Nếu DSLK rỗng thì in ra EMPTY

// Ví dụ :
// Input 01
// Copy
// 8 7
// 6 7 1 9 4 5 4 7
// Output 01
// Copy
// 6 1 9 4 5 4

#include <bits/stdc++.h>

using namespace std;

struct node{
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

node * makeNode(int x){
    node * newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

int size(node * head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }

    return cnt;
}

void deleteAll(node * &head, int x){
    node * tmp = head;
    if(head == NULL) return;
    if(tmp->next == NULL){
        node * xoa = head;
        head = NULL;
        delete xoa; 
        return;
    }

    while(tmp->next != NULL){
        if(tmp->next->data == x){
            node * k1 = tmp;
            node * xoa = tmp->next;
            k1->next = xoa->next;
            delete xoa;
        } else {
            tmp = tmp->next;
        }
    }
}

void insertBegin(node * &head, int x){
    node * newNode = makeNode(x);
    head = newNode;
    newNode = head->next;
}


void insertAss(node * &head, int x){
    node * newNode = makeNode(x);
    node * tmp = head;
    if(head == NULL){
        insertBegin(head, x);
        return;
    }

    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, x;
    cin >> n >> x;
    int a[n];
    node * head = NULL;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        insertAss(head, a[i]);
    }

    deleteAll(head, x);

    if(size(head) == 0){
        cout << "EMPTY";
        return 0;
    } else {
        getNode(head);
    }



    return 0;
}