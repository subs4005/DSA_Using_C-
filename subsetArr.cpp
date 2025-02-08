#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(int *arr, int n, int i, int sum, vector<int> &result ){
    if(i == n) {
        result.push_back(sum);
        return ;
    }
    
    f(arr, n, i+1, sum + arr[i], result);
    f(arr, n, i+1, sum, result);
}

int main(){
    int arr[] = {2, 4, 5};
    int n = 3;
    vector<int> result;

    f(arr, n, 0, 0, result);

    sort(result.begin(), result.end());

    for(int i = 0; i<result.size() ; i++){
        cout <<result[i]<<" ";
    }

}