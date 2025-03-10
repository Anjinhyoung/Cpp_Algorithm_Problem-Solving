#include <iostream>
#include <vector>
#include <algorithm>

int main() {




    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    
    int num, num2;
    std::vector<int>  vec;
    
    
    std::cin >> num;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        vec.push_back(num2);
    }

    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());

    for (int i = 0; i < num; i++) 
    {
        std::cout << vec.back() << "\n";
        vec.pop_back();
    }
}