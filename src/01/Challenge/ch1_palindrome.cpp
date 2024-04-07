// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>
using namespace std;
// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(string str){

    // Write your code here
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            return false;
        }
    }

    return true;
}

// Main function
int main(){
    string s;
    cout << "Enter a string: " <<flush;
    getline(cin,s);
    cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}
