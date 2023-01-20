/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.
*/
#include <iostream>
using namespace std;

int main()
{
    float N, Result = 0;
    cout << "Enter a Number: ";
    cin >> N;

    try
    {
        if (N == 0)
            throw "Tujhe pata nahi h kya tum 0 enter kiya h";
        if (N == 1)
            throw 1;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (int x)
    {
        cout << "Tumhe pata nahi h kya tum one enter kiya h" << endl;
    }
    return 0;
}
