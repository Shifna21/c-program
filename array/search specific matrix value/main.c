#include <stdio.h>

int main()
{
    int matrix[3][3] = {{5, 10, 15},{20, 25, 30},{35, 40, 45}};
    int target = 25,searchValue= 0,i,j; 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == target)
            {
                printf("Value %d found at position: Row %d, Column %d\n", target, i, j);
                searchValue= 1; 
                break;   
            }
        }
        if (searchValue)
        {
            break; 
        }
    }
    if (!searchValue)
    {
        printf("Value %d not found in the matrix.\n", target);
    }

    return 0;
}
