// [Linked List]. Bài 3. Cài Đặt Ngăn Xếp Bằng DSLK
// Cài đặt cấu trúc dữ liệu ngăn lưu các số nguyên bằng DSLK.

// Ngăn xếp hỗ trợ 3 thao tác : Push, Pop, Show. Nếu thao tác là push bạn thêm 1 phần tử vào đỉnh ngăn xếp.

// Nếu thao tác là pop và ngăn xếp không rỗng thì bạn thực hiện xóa phần tử khỏi đỉnh ngăn xếp, nếu ngăn xếp rỗng thì không thực hiện xóa.

// Nếu thao tác là show thì bạn liệt kê các phần tử trong ngăn xếp theo thứ tự từ đỉnh trở xuống đáy ngăn xếp, trong trường hợp ngăn xếp rỗng thì in EMPTY và cách ra 1 dòng sau dòng EMPTY

// Đầu vào
// Dòng đầu tiên sẽ là N : số lượng thao tác.

// N dòng tiếp theo mô tả loại thao tác, nếu là push sẽ có thêm 1 số nguyên đi kèm.

// Giới hạn
// 1<=N<=1000

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 12
// pop
// show
// pop
// show
// show
// show
// show
// pop
// push 119
// push 433
// pop
// show
// Output 01
// Copy
// EMPTY

// EMPTY

// EMPTY

// EMPTY

// EMPTY

// 119

#include <bits/stdc++.h>

using namespace std;

struct StackLink{
    int data;
    StackLink * next;
    void showinfor(){ 
        cout << data << " ";
    }
};

void showStackLink(StackLink * head){
    while(head != NULL){
        head->showinfor();
        head = head->next;
    }
}

int size(StackLink * head){
    int cnt = 0;
    if(head == NULL){
        return 0;
    }
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insertHead(StackLink * &head, int x){
    StackLink * newNode = new StackLink;
    newNode->data = x;
    newNode->next = NULL;
    head = newNode;
}


//push chinh la them cuoi
void push(StackLink * &head, int x){
    StackLink * newNode = new StackLink;
    newNode->data = x;
    newNode->next = NULL;
    if(head == NULL){
        insertHead(head, x);
        return;
    } 

    StackLink * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
//pop chinh la xoa cuoi
void pop(StackLink * &head){
    int sz = size(head);
    if(head == NULL){
        return;
    }
    StackLink * tmp = head;
    for(int i = 1; i <= sz - 2; i++){
        tmp = tmp->next;
    }
    StackLink * del = tmp->next;
    tmp->next = NULL;
    delete del;
}

void show(StackLink * head){
    if(head == NULL){
        cout << "EMPTY" << endl;
        cout << " " << endl;
        return;
    }
    
    if(head->next == NULL){
        head->showinfor();
        cout << endl;
        return;
    }
    StackLink * curr = head;
    StackLink * prev = NULL;
    StackLink * next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    showStackLink(head);
    cout << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    StackLink * stack = NULL;
    cin.ignore();
    while(t--){
        
        string s;
        getline(cin, s);
        int sINT, x;
        if(s == "pop"){
            sINT = 1;
        } else if(s == "show"){
            sINT = 2;
        } else {
            stringstream ss(s);
            string w;
            while(ss >> w){
                if(isdigit(w[0])){
                    x = stoi(w);
                }
            }
            sINT = 3;
        }

        switch (sINT)
        {
        case 1:
            pop(stack);
            break;
        case 2:
            show(stack);
            break;
        default:
            
            push(stack, x);
            break;
        }
    }
    return 0;   
}