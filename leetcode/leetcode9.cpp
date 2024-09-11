#include <iostream>
// Leetcode #9: Palindrome Number

/*
Given an integer x, return true if x is a
palindrome, and false otherwise.

Follow up: Could you solve it without converting the integer to a string?
 */
bool isPalindrome(int x) {
        long int check = 0;
        for(long int i = x; i > 0; i /= 10){
            check = i % 10 + check * 10;
        }
        return check == x;
}
int main(int argc, char *argv[]){
    if(argc <= 1) return 0; printf("isPalindrome: " + (isPalindrome(*argv[1]))? "True" : "False");
    return 0;
}