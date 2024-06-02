#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    cin.ignore(); // پاک کردن بوفر ورودی
    
    string arr[n];
    
    // دریافت و ذخیره رشته‌ها
    for(int i = 0; i < n; ++i){
        getline(cin, arr[i]);
    }
    
    // مرتب کردن رشته‌ها بر اساس طول آن‌ها
    sort(arr, arr + n, [](const string& a, const string& b){
        return a.size() < b.size();
    });
    
    // چاپ رشته‌ها بر اساس ترتیب طولشان بدون در نظر گرفتن فاصله‌ها
    for(int i = 0; i < n; ++i){
        string trimmedString = "";
        for(int j=0; j<arr[i].size();j++){  //char ch : arr[i]
            if(arr[i][j] != ' ') {              //ch != ' '
                trimmedString += arr[i][j];   //+= ch
            }
        }
        cout << trimmedString << endl;
    }
    
    return 0;
}

