#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[100], *left, *right;
    int flag = 1;

    cout << "Enter a string: ";
    cin >> str;

    left = str;
    right = str + strlen(str) - 1;

    while(left < right) {
        if(*left != *right) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if(flag == 1) {
        cout << "Palin";
    } else {
        cout << "Not a palin";
    }
    
    return 0;
}