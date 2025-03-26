// DFS 풀기

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int num;
int map[26][26];
bool visited[26][26];
int cnt;
std::vector<int> vec;

void dfs(int row, int column) 
{
    visited[row][column] = true;

    int rows[4] = { 0,1,0,-1 };
    int columns[4] = { 1,0,-1,0 };

    for (int i = 0; i < 4; i++) 
    {
        int nr = row + rows[i];
        int nc = column + columns[i];
        if (nr <= 0 || nr > num || nc <= 0 || nc > num) continue;
        if (map[nr][nc] == 1 && !visited[nr][nc]) 
        {
            cnt++;
            dfs(nr, nc);
        }
    }
}

int main() {
    std::cin >> num;
    std::string str;
    for (int i = 1; i <= num; i++)
    {
        std::cin >> str;
        for (int j = 0; j < str.size(); j++)  if (str[j] == '1') map[i][j + 1] = 1;
    }

    for (int i = 1; i <= num; i++) 
    {
        for (int j = 1; j <= num; j++) 
        {
            if (!visited[i][j] && map[i][j] == 1) 
            {
                cnt = 1;
                dfs(i, j);
                vec.push_back(cnt);
            }
        }
    }

    std::cout << vec.size() << '\n';
    
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++) std::cout << vec[i] << '\n';
}