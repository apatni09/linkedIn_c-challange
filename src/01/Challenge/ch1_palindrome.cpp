// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>

// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(std::string str){

    // Write your code here
    // int n=str.length();
    // for(int i=0;i<n/2;i++)
    // {
    //     if(str[i]!=str[n-1-i])
    //     {
    //         return false;
    //     }
    // }
    // return true;
    std::transform(str.begin(), str.end(), str.begin(),tolower);
    std::string rev=str;
    std::reverse(rev.begin(),rev.end());
    return str==rev;
    

}

// Main function
int main(){
    std::string s;
    std::cout << "Enter a string: " <<std::flush;
    std::getline(std::cin,s);
    std::cout << "\n\"" << s <<(is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}
