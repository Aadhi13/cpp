#include <iostream>

using namespace std;


class Matrix {
    public:
        void sumMatrix (int A[2][2], int B[2][2]) {
            int sum[2][2];

            cout << "sum of Integer matrix: \n";
            for(int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    sum[i][j] = A[i][j] + B[i][j];
                    cout << sum[i][j] << " ";
                }

                cout << endl;
            }
        }

        void sumMatrix (float A[2][2], float B[2][2]) {
            int sum[2][2];

            cout << "Sum of float matrix: \n";
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    sum[i][j] = A[i][j] + B[i][j];
                    cout << sum[i][j] << " ";
                }
                cout << endl;
            }
        }
};


int main (){
    Matrix m;
    int A[2][2], B[2][2];
    float C[2][2], D[2][2];

    cout << "enter ineger matrix A (2x2): \n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }
    cout << "enter ineger matrix B (2x2): \n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    cout << "enter float matrix C (2x2): \n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> C[i][j];
        }
    }
    cout << "enter float matrix D (2x2): \n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> D[i][j];
        }
    }


    m.sumMatrix(A, B);
    m.sumMatrix(C, D);

    return 0;


}