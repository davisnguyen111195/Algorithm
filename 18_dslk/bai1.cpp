// [Linked List]. Bài 1. Insert
// Cho danh sách liên kết đơn mỗi node trong DSLK lưu thông tin của 1 sinh viên gồm có : Mã sinh viên (chuỗi có không quá 20 kí tự), Họ tên (chuỗi không quá 50 kí tự) và điểm gpa.

// Có 3 thao tác sau :

// Thêm 1 sinh viên vào đầu danh sách

// Thêm 1 sinh viên vào cuối danh sách

// Thêm 1 sinh viên vào vị trí K trong danh sách.

// Bạn hãy thực hiện in ra danh sách liên kết sau khi thực hiện 1 loạt thao tác ở trên.

// Đầu vào
// Dòng đầu tiên là N : số lượng thao tác cần thực hiện.

// Các dòng tiếp theo mô tả thao tác, mỗi thao tác gồm 4 dòng.

// Dòng 1 là loại thao tác(1, 2, 3), nếu thao tác là 3 thì số tiếp theo sau là vị trí chèn K, dòng 2 là mã sinh viên, dòng 3 là họ tên, dòng 4 là điểm gpa của sinh viên cần thêm vào DSLK.

// Đối với thao tác loại 3 khi kích thước của DSLK là N và chèn vào vị trí N + 1 tức là bạn thêm node đó vào cuối.

// Giới hạn
// 1<=N<=1000

// 0<=X<=1000

// 1<=K<=Size(DSLK) + 1

// Đầu ra
// In ra DSLK sau khi thực hiện N thao tác chèn, mỗi sinh viên in ra trên 1 dòng, các thông tin viết cách nhau một dấu cách và gpa lấy 2 số sau dấu phẩy.

// Ví dụ :
// Input 01
// Copy
// 7
// 1
// CNTT1
// Le Van Long
// 2.40
// 1
// CNTT2
// Le Van Long
// 1.20
// 1
// CNTT3
// Vuong Hoang Manh
// 1.20
// 1
// CNTT4
// Le Hoang Nam
// 2.80
// 2
// CNTT5
// Vuong Van Phuoc
// 2.60
// 1
// CNTT6
// Pham Xuan Manh
// 3.10
// 3 2
// CNTT7
// Le Xuan Phuoc
// 2.40
// Output 01
// Copy
// CNTT6 Pham Xuan Manh 3.10
// CNTT7 Le Xuan Phuoc 2.40
// CNTT4 Le Hoang Nam 2.80
// CNTT3 Vuong Hoang Manh 1.20
// CNTT2 Le Van Long 1.20
// CNTT1 Le Van Long 2.40
// CNTT5 Vuong Van Phuoc 2.60

#include <bits/stdc++.h>

using namespace std;

struct Student{
    string m_Code;
    string m_Name;
    double m_Gpa;
    Student(string code, string name, double gpa){
        m_Code = code;
        m_Name = name;
        m_Gpa = gpa;
    }
    Student(){

    }
    void showInfor(){
        cout << m_Code << " " << m_Name << " ";
        cout << fixed << setprecision(2) << m_Gpa << endl;
    }
};

struct node{
    Student sv;
    node* next;
};

node* makeNode(Student st){
    node* head = new node;
    head->sv = st;
    head->next = NULL;
    return head;
}

void insertHead(node *&st, Student s){
    node *head = makeNode(s);
    head->next = st;
    st = head;

}
void insertAss(node *&st, Student s){
    node *tmp = st;
    node *newNode = makeNode(s);
    if(tmp == NULL){
        st = newNode;
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int sz(node *st){
    int cnt = 0; 
    while(st != NULL){
        cnt++;
        st = st->next;
    }
    return cnt;
}
void insertK(node *&st, Student s, int k){
    int size = sz(st);
    node *newNode = makeNode(s);
    node *tmp = st;
    if(k <= 1){
        insertHead(st, s);
        return;
    } else if(k >= size + 1){
        insertAss(st, s);
        return;
    }
    
    
    for(int i = 1; i <= k - 2; i++){
        tmp = tmp->next;
    }
   
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void duyet(node *st){
    while(st != NULL){
        st->sv.showInfor();
        st = st->next;
    }
}
void nhap(Student &sv){
    cin.ignore();
    string code; getline(cin, code);

    string name; getline(cin, name);
        
    double gpa; cin >> gpa;
    
    sv.m_Code = code;
    sv.m_Name = name;
    sv.m_Gpa = gpa;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        int b;
        cin >> b;
        Student sv;
        switch (b)
        {
        case 1:
            nhap(sv);
            insertHead(head, sv);
            break;
        case 2:
            nhap(sv);
            insertAss(head, sv);
            break;
        default:
            int k; cin >> k;
            nhap(sv);
            insertK(head, sv, k);
            break;
        }
    }
    duyet(head);
    return 0;
}