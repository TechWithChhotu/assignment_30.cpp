/*Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.
*/
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter Your Mobile number:    ";
    cin >> str;
    try
    {
        if (str.length() != 10)
            throw "Invalid Mobile number";
        cout << "Valid Mobile number" << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}
