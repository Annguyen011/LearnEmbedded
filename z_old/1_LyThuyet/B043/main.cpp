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

class Point {
public:
    int x, y;

    // Toan tu + de cong hai diem
    Point operator+(const Point& other) const {
        return {x + other.x, y + other.y};
    }

    // Toan tu - de tru hai diem
    Point operator-(const Point& other) const {
        return {x - other.x, y - other.y};
    }

    // Toan tu * de nhan diem voi he so
    Point operator*(int scalar) const {
        return {x * scalar, y * scalar};
    }

    // Toan tu / de chia diem cho he so
    Point operator/(int scalar) const {
        return {x / scalar, y / scalar};
    }

    // Toan tu == de so sanh hai diem
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    // Toan tu != de so sanh hai diem
    bool operator!=(const Point& other) const {
        return !(*this == other);
    }
private:
    // Khong cho phep tao diem khong xac dinh
    Point() : x(0), y(0) {}
};


int main() {
    // lam viec voi file
    // freopen("input.txt", "r", stdin);  // Mo file input.txt de doc du lieu
    // freopen("output.txt", "w", stdout); // Mo file output.txt de ghi ket

    cout << "Nhap toa do diem thu nhat (x1 y1): ";
    return 0;
}
