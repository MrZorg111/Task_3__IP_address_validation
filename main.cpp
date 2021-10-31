#include <iostream>
#include <string>

int main() {

    std::string ip_address, ip_1, ip_2, ip_3, ip_4;
    std::cout << "Enter ip-address:\n";
    std::cin >> ip_address;

    for (int i = 0; i < ip_address.length(); i++) {
        if (ip_address[i] != '.') {
            ip_1 += ip_address[i];
        }
    }
    std::cout << ip_1;
}
