#include<iostream>
using namespace std;

int f(int num){
    if(num == 1) return 1;

    // int sum = f(num-1);
   
    // if (num % 2 ==0){
    //    sum -=num;
    // }else{
    //     sum += num;
    // }
    // return sum;
     return f(num - 1) + ((num%2==0) ? (-num) : (num));
}


int main(){
   cout << f(10);
    return 0;
}

// #include <iostream>
// using namespace std;

// int f(int num) {
//     if (num == 1) return 1; // Base case: return 1 when num reaches 1

//     int sum = f(num - 1); // Recursive call to get sum of previous numbers

//     if (num % 2 == 0) { // Even numbers are subtracted
//         sum -= num;
//     } else { // Odd numbers are added
//         sum += num;
//     }

//     return sum; // Return the computed sum
// }

// int main() {
//     int result = f(5); // Compute sum with alternating signs
//     cout << result; // Print the final result
//     return 0;
// }
