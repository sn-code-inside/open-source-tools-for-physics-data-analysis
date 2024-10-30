#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map to store dictionary
    std::map<std::string, std::string> dictionary;

    // Insert key-value pairs into the map
    dictionary["newton"] = "The unit of force in the SI.";
    dictionary["ampere"] = "The unit of electric current in the SI.";
    dictionary["second"] = "The unit of time in the SI.";

    // Access and print values using keys
    std::cout << "Newton: " << dictionary["newton"] << std::endl;
    std::cout << "Ampere: " << dictionary["ampere"] << std::endl;
    std::cout << "Second: " << dictionary["second"] << std::endl;

    return 0;
}
