#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(string &s, int n, int i, string current, vector<string> &result ){
    if(i == n) {
        result.push_back(current);
        return ;
    }
    
    f(s, n, i+1, current + s[i], result);
    f(s, n, i+1, current, result);
}

int main(){
    string s = "abcd";
    int n = s.length();
    vector<string> result;

    f(s, n, 0, "", result);

    sort(result.begin(), result.end());

    for(int i = 0; i<result.size() ; i++){
        cout <<result[i]<<" ";
    }
return 0;
}