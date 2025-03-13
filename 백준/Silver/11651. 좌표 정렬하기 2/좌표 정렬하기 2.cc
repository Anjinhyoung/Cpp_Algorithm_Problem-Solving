#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int num, x,y;
    std::cin >> num;

    std::vector<std::pair<int, int>> vec;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> x >> y;
        vec.push_back({ y,x });
    }

    std::sort(vec.begin(), vec.end());
    
    for (int i = 0; i < num; i++) 
    {
        std::swap(vec[i].first, vec[i].second);
    }

    for (int i = 0; i < num; i++) 
    {
        std::cout << vec[i].first << " " << vec[i].second << "\n";
    }

}