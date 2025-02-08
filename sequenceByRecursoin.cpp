#include <iostream>
using namespace std;

// int f(int num){
//     if( num == 0  ){
//         return num;
//     }
//    f(num -1);
//    cout<<num<<" ";
// }

int num = 10;
void f(int k) {
    if (k < 1) {
        return;
    }
    f(k - 1); // Recursive call to reach the base case first
    cout << k * num << " "; // Print the multiple of 10
}

int main() {
    f(3);
    return 0;
}
