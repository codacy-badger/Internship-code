#include <stdio.h>
int main()
{
    int n=3003, reversedInteger = 0, remainder, originalInteger;
    
    originalInteger = n;

    // reversed integer is stored in variable
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);

    return 0;
}
