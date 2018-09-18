
#include<stdio.h>
long int rev(long int n)
{
    if(n==0)
        return 0;
    return 1+rev(n/10);

}
int main()
{
    printf("%ld",rev(9482390887256611));
}
