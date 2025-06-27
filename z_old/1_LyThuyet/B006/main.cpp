//#region Thư viện C++ chuẩn
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <cassert>
#include <climits>
#include <cctype>
#include <cstring>
using namespace std;
//#endregion

int main() {
    // Bien cuc bo
    int n;
    // Nhap so nguyen n
    cout << "Nhap so nguyen n: ";
    cin >> n;
    // Kiem tra n la so chan hay le
    if (n % 2 == 0) {
        cout << n << " la so chan." << endl;
    } else {
        cout << n << " la so le." << endl;
    }
    // Kiem tra n la so nguyen to
    bool isPrime = true;
    if (n < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << n << " la so nguyen to." << endl;
    } else {
        cout << n << " khong phai la so nguyen to." << endl;
    }
    // Vi du ve biến cục bô
    int a = 5, b = 10;
    cout << "Bien cuc bo a: " << a << ", b: " << b << endl;
    // Thay doi gia tri cua bien a
    a = 15;
    cout << "Sau khi thay doi, bien cuc bo a: " << a << ", b: " << b << endl;
    // Thay doi gia tri cua bien b
    b = 20;
    cout << "Sau khi thay doi, bien cuc bo a: " << a << ", b: " << b << endl;
    
    return 0;
}
