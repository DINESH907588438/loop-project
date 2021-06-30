#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int stairs=0;
    printf("How many stairs do you want? ");
    scanf("%d",&stairs);
    for(i=0;i<stairs;i++)
    {
        for(j=0;j<=i;j++)
        {
        printf("01");
        }
    printf("\n");
    }
}
