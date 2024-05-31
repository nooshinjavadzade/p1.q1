#include <iostream>
#include <string>
using namespace std;

void sort(string alephba[200], string input[], int size) {
    int x = 0;
    for (int i = 0; i < size; i++) {
        int k = 0;
        while (input[i][k] == ' ' || input[i][k] == 33 || input[i][k] == 37 || input[i][k] == 95 || input[i][k] == 45 || input[i][k] == 64 || input[i][k] == 41 || input[i][k] == 40 || (static_cast<int>(input[i][k]) > 47 && static_cast<int>(input[i][k]) < 58)) {
            k++;
        }
        char letter = tolower(input[i][k]); // Convert the letter to lowercase
        if (alephba[static_cast<int>(letter)].empty())
        {
            alephba[static_cast<int>(letter)] = input[i];
        }
        else
        {
            while (alephba[static_cast<int>(letter)].empty())
            {
                x++;
            }
            
            alephba[static_cast<int>(letter)+x] = input[i];
            
        }
    }
}

int main() {
    string x[200];
    string in[10];
    for (int i = 0; i < 4; i++) {
        cin >> in[i];
    }

    sort(x, in, 4);

    for (int i = 0; i < 200; i++) {
        if (!x[i].empty()) {
            cout << x[i] << endl;
        }
    }

    return 0;
}

