#include <iostream>
#include <list>
￼
int main() {
    // Define a list and print it
    std::list<int> mylist = {1, 2, 3, 4};
    std::cout << "The elements of the list are: ";
    for (int item : mylist) {
        std::cout << item << " " ;
    }
￼
    std::cout << '\n';
￼
    //Print the size of the list
    std::cout << "The size of 'mylist' is: " << mylist.size() << " " << std::endl; // Output: 4
￼
    // Add 6 to the end of the list
    mylist.push_back(6);
    std::cout << "Adding '6' to the list..." << std::endl; //
￼
    //Print the elements of the list
    std::cout << "The elements of the list are: ";
    for (int item : mylist) {
        std::cout << item << " " ;
    }
￼
    std::cout << '\n';
￼
    //Print the new size of the list
    std::cout << "The new size of 'mylist' is: " << mylist.size() << " " << std::endl; // Output: 5
￼
    std::cout << '\n';
￼
    //Print the last element of the list
    std::cout << "The last element of the list is: " << mylist.back() << " " << std::endl;   // Output: 6;
￼
    // Create an iterator to point to the first element of the list
    std::list<int>::iterator itr = mylist.begin();
￼
    // Increment itr to point to the 2nd element
    ++itr;
￼
    //Display the 2nd element
    std::cout << "Second element of 'mylist': " << *itr << std::endl;
￼
    return 0;
}
