#include <iostream>
#include <string>

std::string check(std::string a, std::string b, std::string c, std::string d) {
    bool good = true;
    if ((a.length() > 3 || b.length() > 3 || c.length() > 3 || d.length() > 3) ||
            (a.length() < 1 || b.length() < 1 || c.length() < 1 || d.length() < 1)){
        good = false;
    }
}

int main() {

    std::string ip_address, ip_1, ip_2, ip_3, ip_4;
    int i, t, j, l;
    std::cout << "Enter ip-address:\n";
    std::cin >> ip_address;

    for (i = 0; i <= ip_address.length() - 1; i++) {
        if (ip_address[i] == '.') {
            break;
        }
        ip_1 += ip_address[i];
        }
    for (t = i + 1; t <= ip_address.length() - 1; t++) {
        if (ip_address[t] == '.') {
            break;
        }
        ip_2 += ip_address[t];
        }
    for (j = t + 1; j <= ip_address.length() - 1; j++) {
        if (ip_address[j] == '.') {
            break;
        }
        ip_3 += ip_address[j];
       }
    for (l = j + 1; l <= ip_address.length() - 1; l++) {
        if (ip_address[l] == '.') {
            break;
        }
        ip_4 += ip_address[l];
        }

    std::cout << check(ip_1, ip_2, ip_3, ip_4);
}
