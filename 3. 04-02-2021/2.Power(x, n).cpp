// Write a program to calculate pow(x, n)

// Given two integers x and n,
// Write a function to compute xn.We may assume that x and n are small and overflow doesn’t happen.

//     =  x^n/2 * x^n/2  if n is even

// x^n =  x * x^n-1      if n is odd

//     =  1              if n = 0

#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0) // even
    {
        int y = pow(x, n / 2); // recursion tree halfs
        return y * y;
    }
    else // odd
        return x *
               pow(x, n - 1);
}
int main()
{
    cout << pow(2, 5);
}