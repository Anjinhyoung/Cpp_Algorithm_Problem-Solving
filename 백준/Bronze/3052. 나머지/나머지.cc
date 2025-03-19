#include <cstdio>

int main() {

    int array[42] = {0,};

    for (int i = 0; i < 10; i++) 
    {
        int a;
        scanf("%d", &a);
        array[a % 42]++;
    }

    int count = 0;

    for (int i = 0; i < 42; i++)
    {
        if (array[i] != 0) count += 1;
    }

    printf("%d", count);
}