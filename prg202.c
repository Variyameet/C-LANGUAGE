
/*

1
2
3
3
2
1

*/
#include<stdio.h>
int recur(int n)
{
    printf(" \n before  %d",n);
     if(n<3)
     recur(n+1);
     
     printf("\n after %d",n);

}
int main()
{
    int a=1;
    recur(a);//3
    return 0;
}
