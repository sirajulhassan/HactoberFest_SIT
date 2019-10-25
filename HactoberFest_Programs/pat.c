#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=0; i<rows; i++)
    {
        for(space=0; space < rows-i; space++)
            printf("  ");
        for(j=0; j < i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}