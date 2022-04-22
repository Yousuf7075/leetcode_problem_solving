#include <iostream>
using namespace std;

bool isPalindrome(int x){
    //if number is negative number it's a palindrome number
    if(x<0) return false;

    long int num = x, rem =0, rev = 0;
    while (x != 0)
    {
        rem = x % 10;
        rev =  rev * 10 + rem;
        x = x / 10;
    }
    
    if(num == rev)
        return true;
    else
    return false;
}

int main()
{
     int num;
     cout << "Enter a positive number: ";
     cin >> num;
     bool result = isPalindrome(num);

     if (result == true)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}

