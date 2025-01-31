#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp)
{
    if (comp == you)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
        (number > 66);
    comp = 'g';

    printf("Enter s for Snake ,w for Water and g for Gun:\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Draw");
    }
    if (result == 1)
    {
        printf("You Win\n");
    }
    else
    {
        printf("You lost\n");
    }
    printf("you Item is :%c\n", you);
    printf("computer Item is :%c\n", comp);
    return 0;
}