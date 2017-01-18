//Palindrome Number
// Created by Linus Peng
// 2017-01-18
#include <stdio.h>

static  
int reverse(int x) {  
    long long val = 0;  
    do  
    {  
        val = val * 10 + x % 10;  
        x /= 10;  
    } while (x);  
      
    return (val > INT_MAX || val < INT_MIN) ? 0 : val;  
}  
  
bool  
isPalindrome(int x) {  
    if(x < 0) return false;  
    if(x < 10) return true;  
    int y = 0;  
    y = reverse(x);  
      
    return x == y;  
}
