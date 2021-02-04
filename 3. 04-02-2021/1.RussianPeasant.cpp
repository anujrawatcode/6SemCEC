// Russian Peasant (Multiply two numbers using bitwise operators)
// Given two integers, write a function to multiply them without using multiplication operator.
// There are many other ways to multiply two numbers (For example, see this). One interesting method is the Russian peasant algorithm. The idea is to double the first number and halve the second number repeatedly till the second number doesn’t become 1. In the process, whenever the second number become odd, we add the first number to result (result is initialized as 0)
// The following is simple algorithm.

// Let the two given numbers be 'a' and 'b'
// 1) Initialize result 'res' as 0.
// 2) Do following while 'b' is greater than 0
//    a) If 'b' is odd, add 'a' to 'res'
//    b) Double 'a' and halve 'b'
// 3) Return 'res'.

//         19      25
//         b   *   a

// odd     19      25   Add
// odd     9       50   Add
// even    4       100
// even    2       200
// odd     1       400  Add
//             -----------
//                 475

#include <bits/stdc++.h>
using namespace std;

int RussianPeasantMultiply(int a, int b)
{
    int res = 0;
    while (b)
    {
        if (b % 2 != 0) //odd
            res = res + a;
        b = b >> 1; // divide by 2 (right shift 1)
        a = a << 1; // multiply by 2 (left shift 1)
    }
    return res;
}
int main()
{
    cout << RussianPeasantMultiply(19, 25);
}