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
    // Nap chong toan tu trong struct
    struct Point {
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
    };

    // Toan tu == de so sanh hai diem
    bool operator==(const Point& a, const Point& b) {
        return a.x == b.x && a.y == b.y;
    }
    // Toan tu != de so sanh hai diem
    bool operator!=(const Point& a, const Point& b) {
        return !(a == b);
    }
    return 0;
}
