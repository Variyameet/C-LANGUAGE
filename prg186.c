// find area of squear
// no pera and no return
// with pera no return
// with pera with return
// no pera with return  ==>

#include<stdio.h>

int area()
{
    int l;

    printf("enter the length");
    scanf("%d",&l);
    
    return l*l;
}

int main()
{
    int area();
    printf("simple intrest : %d",area());
    return 0;
}
