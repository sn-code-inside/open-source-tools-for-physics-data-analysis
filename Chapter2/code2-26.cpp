#include <iostream>
#include <list>
￼
int main() {
    std::list<int> mylist = {1, 2, 3, 4};
    for (int item : mylist) {
        std::cout << item << " ";
    }
    return 0;
}
