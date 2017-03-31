#include <stdio.h>

int main(void)
{
    int i, j, rows = 0;
    printf("Height: ");
    scanf("%i", &rows);
    for(i = 0; i < rows; ++i){
        for(j = 0; j < rows; ++j){
            if(j < rows - 1 - i)
                printf(" ");
            else
                printf("#");
        }
        printf("#\n");
    }
    return 0;

}
