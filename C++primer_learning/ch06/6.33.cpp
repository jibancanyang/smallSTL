#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>


void print(std::vector<int> &V, std::vector<int>::const_iterator it) {
    if (it == V.end()) {
        std::cout << std::endl;
        return;
    } else {
        std::cout << *it++ << " ";
        print(V, it);
    }
}

int main() 
{
    std::vector<int> V = {2, 3, 5, 7, 11, 13};
    print(V, V.begin());
    return 0;
}
