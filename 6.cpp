// Write a C++ program to accept area pin code and throw an exception if it does not
// contain 6 digits.
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter Your area pin:    ";
    cin >> str;
    try
    {
        if (str.length() != 6)
            throw "Invalid PIN Code";
        cout << "Valid PIN Code" << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}
