#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printStringsStartingWithUpperCase(const string strings[], int size) {
    string upperCaseStrings[size];
    int count = 0;

    // پیدا کردن رشته‌هایی که حرف اول آن‌ها بزرگ است
    for (int i = 0; i < size; i++) {
        
        if (!strings[i].empty() && islower(strings[i][0])) {
            upperCaseStrings[count++] = strings[i];
        }
    }

    // مرتب‌سازی رشته‌ها بر اساس طولشان
    sort(upperCaseStrings, upperCaseStrings + count, [](const string& a, const string& b) {
        return a.size() < b.size();
    });

    // چاپ رشته‌های حرف اول آن‌ها بزرگ
    for (int i = 0; i < count; i++) {
        cout << upperCaseStrings[i] << endl;
    }
}

int main() {
    string strings[] = {"Hello", "appleeeeee", "baaanana", "world", "Car"};
    int size = sizeof(strings) / sizeof(strings[0]);

    printStringsStartingWithUpperCase(strings, 10);

    return 0;
}

