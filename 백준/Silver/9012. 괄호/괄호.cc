#include <iostream>
#include <stack>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num;
    std::cin >> num;

    for (int i = 0; i < num; i++) 
    {
        std::string str;
        std::stack<char> st;

        std::cin >> str;

        for (int index = 0; index < str.size(); index++) 
        {
            if (str[index] == '(') st.push(str[index]);
            else 
            {
                // 첫 번째로 ')'가 나왔으면
                if (st.empty())
                {
                    st.push(')');
                    break;
                }
                else if (st.top() == '(') st.pop();
            }
        }

        if (st.empty()) std::cout << "YES" << "\n";
        else std::cout << "NO" << "\n";
    }
}