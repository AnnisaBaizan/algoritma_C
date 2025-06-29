#include <stdio.h>

int main() {

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == j){
                printf("*");
            }
            else {
                printf("%d",j);
            }     
        }
        printf("\n");  
    }

    printf("\n\n");

    for (int a = 1; a < 8; a++)
    {
        for (int b = 1; b <= a; b++){
            printf("*");
        }
        printf("\n");
    }
    
    for (int x = 1; x < 8; x++)
    {
        for (int y = 0; y < x; y++)
        {
            if (x == y) {
                printf(" ");
            } else {
                printf("%d", y + 1);
            }
            
        }
        
    }
    

    
}