#include <stdio.h>
int main()
{
    int n, revnum, rem=0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n%10;
        revnum = revnum*10 + rem;
        n /= 10;
    }

    printf("lexographical order = %d", revnum);

    return 0;
}
