#include <iostream>
#include <string>

int main() {

    std::string ip_address, ip_1, ip_2, ip_3, ip_4;
    std::cout << "Enter ip-address:\n";
    std::cin >> ip_address;
    char check;
    bool good = true;
    for (int i = 0; i <= ip_address.length() - 1; i++) {
        check = ip_address[i];
        if (ip_address[i] == '.') {
            for (int t = i + 1; t <= ip_address.length() - 1; t++) {
                if (ip_address[t] == '.') {
                    for (int j = t + 1; j <= ip_address.length() - 1; j++) {
                        if (ip_address[j] == '.') {
                            for (int l = j + 1; l <= ip_address.length() - 1; l++) {
                                /*if (check < 48 || check > 57) {
                                    good = false;
                                    break;
                                }*/
                                ip_4 += ip_address[l];
                                std::cout << ip_4 << "\n";
                                std::cout << "L" << l << "\n";
                                std::cout << "Длинна " << ip_address.length() - 1 << "\n";
                            }
                        }
                        ip_3 += ip_address[j];
                        std::cout << ip_3 << "\n";
                    }
                }
                ip_2 += ip_address[t];
                std::cout << ip_2 << "\n";
            }
        }
        ip_1 += ip_address[i];
        std::cout << ip_1 << "\n";
    }
    if (good) {
        std::cout << ip_1 << "\t" << ip_2 << "\t" << ip_3 << "\t" << ip_4 << "\n";
    }else {
        std::cout << "No!";
    }
}
