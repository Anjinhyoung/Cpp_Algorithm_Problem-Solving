#include <cstdio>

int main() {
    int basket[101];

    for (int i = 1; i <= 100; i++) 
    {
        basket[i] = i;
    }

    int a, b, c, d;
    scanf("%d %d",& a, &b);

    int temp;

    for (int i = 1; i <= b; i++) 
    {
        scanf("%d %d", &c, &d);

        temp = basket[d];
        basket[d] = basket[c];
        basket[c] = temp;
    }

    for (int i = 1; i <= a; i++) 
    {
        printf("%d ", basket[i]);
    }
}