#include <iostream>

int main() {

    int array[8] = { 0, };

    for (int i = 0; i < 5; i+=2) 
    {
        std::cin >> array[i] >> array[i + 1];
    }

    if (array[0] == array[2]) 
    {
        array[6] = array[4];
        if (array[1] == array[3]) 
        {
            array[7] = array[5];
        }
        else if (array[1] == array[5]) 
        {
            array[7] = array[3];
        }
        else 
        {
            array[7] = array[1];
        }
    }
    else if (array[0] == array[4]) 
    {
        array[6] = array[2];
        if (array[1] == array[3])
        {
            array[7] = array[5];
        }
        else if (array[1] == array[5])
        {
            array[7] = array[3];
        }
        else
        {
            array[7] = array[1];
        }
    }
    // array[2] == array[4]
    else 
    {
        array[6] = array[0];
        if (array[1] == array[3])
        {
            array[7] = array[5];
        }
        else if (array[1] == array[5])
        {
            array[7] = array[3];
        }
        else
        {
            array[7]=array[1];
        }
    }

    std::cout << array[6] << " " << array[7];
}