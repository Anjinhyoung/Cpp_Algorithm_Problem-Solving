#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int num, num2, num3;
    std::cin >> num >> num2;
    std::vector<int> vec;


    for (int i = 0; i < num; i++) 
    {
        std::cin >> num3;
        vec.push_back(num3);
    }

    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < num2 - 1; i++) 
    {
       
        vec.pop_back();
    }

    std::cout << vec.back();
}

