#include <stdio.h>

void print_row(int spaces, int brick);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while(height > 8);

    for(int i=1 ; i<=height; i++)
    {
        print_row(height - i, i);
    }
}

void print_row(int spaces, int bricks)
{
    for(int i=0; i<spaces; i++)
    {
        printf(" ");
    }

    for(int i=0; i<bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
