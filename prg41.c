
//consol and vovel
#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the cha
    r :");
    scanf("%c",&ch);

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf(" wovel %c\n", ch);
    }
    else
    {
        printf("consonrt %c\n",ch);
     }
        return 0;

}
