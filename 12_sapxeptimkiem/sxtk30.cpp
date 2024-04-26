// [Sắp xếp - Tìm Kiếm]. Bài 30. Đèn lồng
// Vanya đi bộ vào ban đêm dọc theo một con đường thẳng dài có độ dài l, được thắp sáng bởi n chiếc đèn lồng. Xét hệ trục tọa độ với điểm đầu của đường phố tương ứng với điểm 0 và điểm cuối của nó tương ứng với điểm l. Khi đó đèn lồng thứ i ở điểm ai. Đèn lồng chiếu sáng tất cả các điểm trên đường phố cách nó nhiều nhất là d, trong đó d là một số dương, chung cho tất cả các đèn lồng. Vanya tự hỏi: bán kính ánh sáng tối thiểu d mà những chiếc đèn lồng phải có để thắp sáng cả con phố?

// Input Format

// Dòng đầu tiên chứa hai số nguyên n, l (1 ≤ n ≤ 10^5, 1 ≤ l ≤ 10^9) - số lượng đèn lồng và chiều dài đường phố tương ứng. Dòng tiếp theo chứa n số nguyên ai (0 ≤ ai ≤ l). Nhiều đèn lồng có thể được đặt tại cùng một điểm. Đèn lồng có thể nằm ở cuối phố.

// Constraints

// 1 ≤ n ≤ 10^5, 1 ≤ l ≤ 10^9; 0 ≤ ai ≤ l;

// Output Format

// In bán kính ánh sáng tối thiểu d, cần thiết để chiếu sáng cả đường phố. In ra kết quả với độ chính xác là 10 số sau dấu phây

// Sample Input 0

// 7 15
// 15 5 3 7 9 14 0
// Sample Output 0

// 2.5000000000

#include 