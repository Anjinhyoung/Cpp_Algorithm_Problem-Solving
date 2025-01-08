#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int array[10000];
    for (int i = 0; i < a; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < a; i++) {
        if (array[i] < b) {
            printf("%d ", array[i]);
        }
    }
    return 0;
}