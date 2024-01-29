#include <bits/stdc++.h>
using namespace std;
 
string isPalindrome(string S) // Palindome Function
{

    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        return "Yes";
    }
   
    else {
        return "No";
    }
}

int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}
