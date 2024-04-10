#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void thaydoi(int* x){
    *x = 500;
}

void swap(int* x, int* y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int n = 102;
    // cout << "Address " << &n << endl;

    // int* ptr = &n;

    // cout << ptr << endl;
    // cout << *ptr << endl;


    // int x = 1000, y = 2000;
    // int* ptr1 = &x;
    // int* ptr2 = &y;
    // ptr2 = ptr1;
    // *ptr2 = 2000;
    // cout << x << " " << y << endl;

    // int z = 20;
    // thaydoi(&z);

    // cout << z << " " << endl;

    // int a = 1, b = 2;
    // swap(&a, &b);
    // cout << a << " " << b << endl;

    // int q = 100;
    // int* ptr3 = &q;
    // int m = 200;
    // int* ptr4 = &m;
    // ptr3 = ptr4;
    // thaydoi(ptr3);
    // cout << q << " " << m << endl;


    int a[10] = {3, 2, 1, 4, 7, 3, 2, 5, 9, 10};
    // cout << a << endl;
    // for(int i = 0; i < 5; i++){
    //     cout << a + i << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < 5; i++){
    //     cout << *(a+i) << " ";
    // }
    // cout << endl;
    // int* ptr = &a[2];
    // ++ptr;
    // cout << *ptr << endl;
    int* ptr = &a[3];
    ptr += a[0];
    cout << *ptr << endl;
    return 0;
}