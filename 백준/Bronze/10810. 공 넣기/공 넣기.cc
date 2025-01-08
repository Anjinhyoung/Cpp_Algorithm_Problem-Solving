#include <cstdio>

int main() 
{
    int baskit, shoot;
    int a, b, c;
    scanf("%d %d", &baskit, &shoot);
    int array[101] = {0,};
    for (int i = 0; i < shoot; i++) 
    {
        scanf ("%d %d %d", &a, &b, &c);

        for (int j = a; j < b + 1; j++) 
        {
            array[j] = c;
        }
    }
    for (int i = 1; i < baskit + 1; i++) 
    {
        printf("%d ", array[i]);
    }
    return 0;
}