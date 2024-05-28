// [Hai Con Trỏ]. Bài 4. Phát quà Noel
// Nhân dịp lễ Giáng Sinh 2024, 28Tech tổ chức phát quà cho các bạn nhỏ. Có N món quà được xếp thành hàng ngang, mỗi món quà đều có khối lượng cho trước. Tèo là một đứa trẻ cũng như nhiều đứa trẻ khác chỉ muốn có càng nhiều phần quà càng tốt, không cần biết tới khối lượng của từng mốn quà nặng nhẹ ra sao.

// Tuy nhiên chiếc túi của Tèo chỉ mảng được trọng lượng tối đa là S. Bạn hãy xác định xem số lượng phần quà mà Tèo có thể lựa chọn tối đa là bao nhiêu để có thể không vượt quá trọng lượng tối đa mà cái túi có thể chịu được. Ngoài ra trong lúc chọn quà Tèo chỉ có thể chọn các phần quà xếp cạnh nhau mà thôi.

// Gợi ý : Bài này là tìm dãy con liên tiếp dài nhất mà có tổng <= S. Bạn duyệt các chỉ số từ 0 tới N - 1 trong mảng gọi là chỉ số right, và tính tổng các phần tử này vào biến sum, sau khi cho sum += a[right], nếu sum <= S thì bạn cập nhật đáp án với right - left + 1, left ban đầu được khởi tạo bằng 0. Nếu sau khi sum += a[right] mà sum > S thì bạn dùng 1 vòng lặp while để tăng chỉ số left lên, đồng thới cho sum -= a[left]

// Copy
// while(sum > S){
//     sum -= a[left];
//     ++left;
// }
// Sau vòng while này sẽ đảm bảo được đoạn [left, right] có tổng <= S khi đó bạn chọn ra đoạn left, right dài nhất

// Đầu vào
// • Dòng đầu tiên là N và S

// • Dòng thứ 2 là trọng lượng của N phần quà

// Giới hạn
// • 1<=N<=10^6

// • 1<=S<=10^9

// • Trọng lượng các phần quà là số nguyên dương không quá 10^6

// Đầu ra
// In ra số phần quà tối đa mà Tèo có thể lấy được

// Ví dụ :
// Input 01
// Copy
// 11 10
// 3 1 4 1 5 3 4 1 5 2 2
// Output 01
// Copy
// 4


#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int &x: a){
        cin >> x;
    }

    int l = 0;
    long long sum = 0;
    int cnt = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        if(sum <= s){
            cnt = max(cnt, r - l + 1);
        } else {
            while(sum > s){
                sum -= a[l];
                l++;
            }
        }
    }
    cout << cnt;

    return 0;
}