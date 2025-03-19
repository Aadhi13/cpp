#include <iostream>

using namespace std;

int strLength(const char* str){
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

void strCpy(char* dest, const char* src) {
    while (*src != '\0') 
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void strConcat(char* dest, const char* src) {
    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main (){
    char str1[100], str2[100], strcpy[100];

    cout << "str 1: ";
    cin.getline(str1, 100);

    cout << "str 2: ";
    cin.getline(str2, 100);

    cout << "Length of str1: " << strLength(str1) << endl;
    cout << "Length of str2: " << strLength(str2) << endl;

    strCpy(strcpy, str1);
    cout << "strcpy: " << strcpy << endl;

    strConcat(strcpy, str2);
    cout << "Strconcate: " << strcpy << endl;
    return 0;
}