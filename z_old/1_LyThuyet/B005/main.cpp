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
    
    // Cac kieu du lieu co ban
    int a = 10; // Kieu so nguyen
    double b = 3.14; // Kieu so thuc
    char c = 'A'; // Kieu ky tu
    string d = "Hello"; // Kieu chuoi
    bool e = true; // Kieu logic
    // Cac kieu du lieu cau truc
    vector<int> vec = {1, 2, 3, 4, 5}; // Vector
    pair<int, string> p = {1, "One"}; // Pair
    map<int, string> m; // Map
    m[1] = "One"; // Them phan tu vao map
    set<int> s = {1, 2, 3}; // Set
    unordered_map<int, string> um; // Unordered Map
    um[1] = "One"; // Them phan tu vao unordered map
    unordered_set<int> us = {1, 2, 3}; // Unordered Set
    stack<int> st; // Stack
    st.push(1); // Them phan tu vao stack
    queue<int> q; // Queue
    q.push(1); // Them phan tu vao queue
    deque<int> deq; // Deque
    deq.push_back(1); // Them phan tu vao cuoi deque
    bitset<8> bs; // Bitset
    bs.set(0); // Dat bit thu nhat
    bs.set(1); // Dat bit thu hai
    bs.reset(0); // Dat lai bit thu nhat ve 0
    return 0;
}
