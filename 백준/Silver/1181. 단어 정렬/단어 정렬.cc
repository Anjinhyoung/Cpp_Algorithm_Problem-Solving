#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

int main() {
    

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num;
    std::string str;

    std::cin >> num;

    std::vector<std::pair<int, std::string>> vec;
    std::set<std::string> set;
    for (int i = 0; i < num; i++) 
    {
        std::cin >> str;
        
        
        if (set.find(str) == set.end()) 
        {
            set.insert(str);
            vec.push_back({ str.size(), str });
        }
    }
    
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++) std::cout << vec[i].second << "\n";
}