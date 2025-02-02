#include<iostream>
using namespace std;

int f(int *arr, int idx, int n){

    if(idx == n-1){
        return arr[idx];
    }
    return min(arr[idx], f(arr, idx + 1, n));
}

int main(){

    int arr[] = {3,1,6,8,48,5};
    int n = 6;
    cout << f(arr, 0, n);
    return 0;
} 