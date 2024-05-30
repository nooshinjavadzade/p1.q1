#include <iostream>
#include <string>
using namespace std;

void sort(string alephba[200][10], string input[], int size) {
    for (int i = 0; i < size; i++) {
        if (static_cast<int>(input[i][0])== '-')
        {
            int ascii = static_cast<int>(input[i][1]); // Convert first character to ASCII code
            alephba[ascii][0] = input[i];
        }
        else
        {
            int ascii = static_cast<int>(input[i][0]); // Convert first character to ASCII code
            alephba[ascii][0] = input[i];
        }
        
        
       
    }
}

int main() {
    string x[200][10];
    string in[10];
    for (int i = 0; i < 4; i++) {
        cin >> in[i];
    }

    sort(x, in, 4);

    for (int i = 0; i < 200; i++) {
        if (!x[i][0].empty()) {
            cout << x[i][0] << endl;
        }
    }

    return 0;
}