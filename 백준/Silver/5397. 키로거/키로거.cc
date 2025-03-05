#include <iostream>
#include <list>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num;
    std::cin >> num;

    std::string str;
    for (int i = 0; i < num; i++) 
    {
        std::cin >> str;
        // container는 원소가 아무것도 없을 때 반복자 begin()과 end()는 같은 위치에 있다.
        std::list<char> lst;
        
        // 이게 아주 중요한 역할을 한다.
        auto itr = lst.begin();

        for (char& c : str) 
        {
            if (c == '<') 
            {
                if (itr != lst.begin()) itr--;
            }
            else if (c == '>') 
            {
                if (itr != lst.end()) itr++;
            }

            else if (c == '-') 
            {
                if (itr != lst.begin()) itr = lst.erase(--itr);
            }

            else 
            {
                lst.insert(itr, c);
            }
        }

        for (auto& itr2 : lst) 
        {
            std::cout << itr2;
        }

        std::cout << "\n";
    }
}