/*
    Hackerrank problem:
    https://www.hackerrank.com/challenges/vector-erase/problem
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() 
{
    int n, start, number, startDelete, endDelete;
    std::vector<int> v;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> number;
        v.push_back(number);
}

    std::cin >> start;    
    if( start < v.size() ) v.erase(v.begin() + start - 1); 
    
    std::cin >> startDelete >> endDelete;    
    if( startDelete < endDelete && endDelete < v.size() ) v.erase(v.begin() + startDelete - 1, v.begin() + endDelete - 1);

    std::cout << v.size() << std::endl;

    for(auto _v : v) std::cout << _v << " ";
    std::cout << std::endl;
}
