#pragma region LIBRARIES
#include<iostream>
#include<iomanip>
using namespace std;
#pragma endregion

void printMessage(const string &message)
{
    cout << "Hello World!" << endl;
    cout << "This is my first C++ program." << endl;
    int a = 5;
    int b = 10;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    // int c;
    // cin >> c;
    // cout << "You entered: " << c << endl;
    // cout << "Press any key to continue..." << endl;
    // Wait for user input before closing the console window
    system("pause");
}

void hocToanTuSoSanh()
{
    int a = 5, b = 10;
    if (a < b)
        cout << "a is less than b" << endl;
    else if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "a is equal to b" << endl;
}

void hocReNhanh()
{
    int a = 5, b = 10;
    if (a < b)
        cout << "a is less than b" << endl;
    else if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "a is equal to b" << endl;
}

int	main(int argc, char **argv)
{
    double pi = 3.14159;
    cout << fixed << setprecision(5);
    cout << "Value of pi: " << pi << endl;
    
    return 0;
}
