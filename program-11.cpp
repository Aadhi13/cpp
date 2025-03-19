#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char filename[20], data[80];
    int lineNo = 1;
    cout << "Enter filename to create: ";
    cin >> filename;
    // Write to file
    ofstream fout(filename);
    cout << "\nEnter file contents (Enter '@' to stop):\n";
    while (1)
    {
        cin.getline(data, 80);
        if (data[0] == '@')
            break;
        fout << data << endl;
    }
    fout.close();
    // Read and display with line numbers
    ifstream fin(filename);
    cout << "\nFile contents with line numbers:\n";
    while (fin.getline(data, 80))
        cout << lineNo++ << ": " << data << endl;
    fin.close();

    return 0;
}