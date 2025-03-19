#include <iostream>

using namespace std;

class Test {
    public:
        int num = 10;
};

int main(){
    Test obj;
    cout << obj.num;

    return 0;
}