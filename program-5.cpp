#include <iostream>

using namespace std;

int strLength(const char* str){
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void strCopy(char* dest, char* src){
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void strConcat(char* dest, char* src){
    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main (){
    char str1[100], str2[100], strCpy[100];

    cout << "Enter string 1: ";
    cin >> str1;

    cout << "Enter string 2: ";
    cin >> str2;

    cout << "Length of String 1: " << strLength(str1) << endl;
    cout << "Length of String 2: " << strLength(str2) << endl;
    strCopy(strCpy, str1);
    cout << "Copied string: " << strCpy << endl;
    strConcat(strCpy, str2);
    cout << "Concatenated string: " << strCpy << endl;

    return 0;
}