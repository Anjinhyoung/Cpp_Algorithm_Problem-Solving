#include <cstdio>

int main() {
    int student;
    int array[31] = {0,};
    for (int i = 1; i <= 28; i++) 
    {
        scanf("%d", &student);
        array[student] = student;
    }
    
    for (int i = 1; i <= 30; i++) 
    {
        if (array[i] == 0) 
        {
            printf("%d\n",i);
        }
    }  
}