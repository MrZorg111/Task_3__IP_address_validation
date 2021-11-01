#include <iostream>
#include <string>

int main() {

    std::string ip_address, ip_1, ip_2, ip_3, ip_4;
    std::cout << "Enter ip-address:\n";
    std::cin >> ip_address;
    char check;
    bool good = true;
    for (int i = 0; i < ip_address.length(); i++) {
        check = ip_address[i];
        if (ip_address[i] == '.') {
            for (int t = 0; t < ip_address.length(); t++) {
                if (ip_address[t] == '.') {
                    for (int j = 0; j < ip_address.length(); j++) {
                        if (ip_address[j] == '.') {
                            for (int l = 0; l < ip_address.length(); l++) {
                                if (check < 48 || check > 57) {
                                    good = false;
                                    break;
                                }
                                ip_4 += ip_address[l];
                            }
                        }
                        ip_3 += ip_address[j];
                    }
                }
                ip_2 += ip_address[t];
            }
        }
        ip_1 += ip_address[i];
    }
    if (good) {
        std::cout << ip_1 << "\t" << ip_2 << "\t" << ip_3 << "\t" << ip_4 << "\n";
    }else {
        std::cout << "No!";
    }
}
