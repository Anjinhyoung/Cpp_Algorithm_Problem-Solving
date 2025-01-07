#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int input, find;
    std::cin >> input;
    std::vector<int>vec (input);

    for (int& element : vec) {
        std::cin >> element;
    }

    std::cin >> find;

    int count = std::count(vec.begin(), vec.end(), find);
    
    std::cout << count;


    return 0;
}