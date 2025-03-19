#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char file1[20], file2[20], mergedFile[20];
    char ch;

    cout << "Enter first file name: ";
    cin >> file1;
    cout << "Enter second file name: ";
    cin >> file2;
    cout << "Enter merged file name: ";
    cin >> mergedFile;

    ifstream fin1(file1), fin2(file2);
    ofstream fout(mergedFile);

    if (!fin1 || !fin2 || !fout) {
        cout << "Error opening files!\n";
        return 1;
    }

    while (fin1.get(ch)) fout.put(ch);
    fin1.close();

    while (fin2.get(ch)) fout.put(ch);
    fin2.close();

    fout.close();
    cout << "Files merged successfully into " << mergedFile << endl;

    return 0;
}
