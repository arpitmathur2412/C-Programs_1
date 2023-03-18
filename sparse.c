#include <stdio.h>
int main()
{
    int r, c, count = 0;
    printf("enter the number of rows:");
    scanf("%d", &r);

    printf("enter the number of rows:");
    scanf("%d", &c);

    int a[r][c], index = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                count++;
            }
        }
    }
    int sr[count], sc[count], v[count];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                sr[index] = i;
                sc[index] = j;
                v[index] = a[i][j];
                index++;
            }
        }
    }
    printf("row:    ");
    for (int i = 0; i < index; i++)
    {
        printf("%d ", sr[i]);
    }
    printf("\n");
    printf("column: ");
    for (int i = 0; i < index; i++)
    {
        printf("%d ", sc[i]);
    }
    printf("\n");
    printf("value:  ");
    for (int i = 0; i < index; i++)
    {
        printf("%d ", v[i]);
    }
    char name[50];
    printf("enter your name:");
    scanf("%s", name);
    return 0;
    
}