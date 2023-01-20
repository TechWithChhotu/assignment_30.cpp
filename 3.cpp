/*Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator*/
#include <iostream>
using namespace std;

int main()
{
    float X, Y, Result = 0;
    cout << "Enter Numerator and Denominator: ";
    cin >> X >> Y;

    try
    {
        if (Y == 0)
            throw "!error Denominator can`t 0";
        if (Y == 1)
            throw 1;
        cout << "Ans = " << X / Y;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (int x)
    {
        cout << "O Bable tujhe pata nahi h kya! ANS = " << X << endl;
    }
    return 0;
}
