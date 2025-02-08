#include<iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) return x; // Base case: when remainder is 0, return x (GCD)
    return gcd(y, x % y); // Recursive step: gcd(b, a % b)
}

int main() {
    int result = gcd(12, 20);
    cout << "GCD: " << result << endl; // Output: GCD: 5
    return 0;
}


// #include<iostream>
// using namespace std;

// int f(int x, int y){
//     if(x==0 || y == 0){
//     return 1;   
//     } 

//     int n = f(x - 1, y);
    
//     if(x%n == y%n){
//         return n;
    
//     }

// }


// int main(){
//     int result = f(10,5);
//     cout<< result <<endl;
// }