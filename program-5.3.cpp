#include <iostream>

using namespace std;

int strLength(char* str){
    int length = 0;
    while(*str != '\0') {
        length++;
        str++;
    }

    return length;
}

void strCopy(char* dest, char* src) {
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void strConcat(char* dest, char* src) {
    while(*dest != '\0') {
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

    cin >> str1;
    cin >> str2;

    cout << strLength(str1) << endl;
    cout << strLength(str1) << endl;

    strCopy(strcpy, str1);
    cout << strcpy << endl;
    strConcat(strcpy, str2);
    cout << strcpy << endl;

    return 0;

}