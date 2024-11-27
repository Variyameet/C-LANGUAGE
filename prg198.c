// enter no and find square(2*2=4) or qube(2*2*2=8)

#include<stdio.h>

void Squ()
{
    int n;

    printf("enter the no");
    scanf("%d",&n);

    printf("square of no is:%d",n*n);


}
void qub()
{
     int n;

    printf("\nenter the no");
    scanf("%d",&n);

    printf("qube of no is:%d",n*n*n);

}
int main()
{
    void Squ();
    void qub();

    Squ();
    qub();
}
