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
    // TODO: Viết code ở đây

    // Cấp phát động
    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Nhập " << n << " số nguyên: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Các số nguyên bạn đã nhập là: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}
