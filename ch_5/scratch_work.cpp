#include <iostream>
#include <vector>

int main() {
    std::vector<int> data;
    int d;
    while (std::cin>>d)
        data.push_back(d);

    std::cout << data[1] + data[2] << "\n";
}