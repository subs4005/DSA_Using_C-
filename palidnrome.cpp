#include <iostream>
using namespace std;

bool f(int num, int *temp){
    if(num>=0 && num<=9){
        int lastDigitOfTemp = (*temp)%10;
         (*temp) /=10;
        return (num == lastDigitOfTemp);
    }
    bool result = (f(num/10, temp) && (num%10) == ((*temp)%10));
    (*temp) /=10;
    return result;
}

int main(){
int num = 1221;
int anotherNum = num;
int *temp = &anotherNum;
cout<<f(num, temp);
return 0;
}

/*reverse the num then compare 

#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num = 1221;
    cout << isPalindrome(num);
    return 0;
}

*/


/* convert into string 


#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    string revStr = string(str.rbegin(), str.rend());
    return str == revStr;
}

int main() {
    int num = 1221;
    cout << isPalindrome(num);
    return 0;
}

*/

