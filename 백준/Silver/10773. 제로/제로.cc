#include <iostream>
#include <vector>

int main() {
    int num, num2, sum = 0;
    std::cin >> num;

    std::vector<int> vec;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        if (num2 != 0) 
        {
            vec.push_back(num2);
        }
        else 
        {
            vec.pop_back();
        }
    }

    for (int i = 0; i < vec.size(); i++) 
    {
        sum += vec[i];
    }

    std::cout << sum;
}