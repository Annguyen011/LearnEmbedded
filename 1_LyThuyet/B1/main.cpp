#include<iostream>

using namespace std;

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

int	main(int argc, char **argv)
{
    
    return 0;
}
