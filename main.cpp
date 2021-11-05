#include <iostream>
#include <string>

std::string chek_1 (std::string a) {
    bool good = true;
    char c_a;
    if (a.length() < 1 || a.length() > 3) {
        good = false;
    }
    for (int i = 0; i < a.length(); i++) {
        c_a = a[i];
        if (c_a < 48 || c_a > 57) {
            good = false;
            break;
        }
    }
    if(a.length() == 3 && good){
        if(a[0] == '0' || a[0] > '2') {
            good = false;
            }
        else if(a[0] == '2' && a[1] > '5') {
            good = false;
            }
        else if(a[0] == '2' && a[1] == '5' && a[2] > '5') {
            good = false;
            }
        else if((a[0] == '0' && a[1] == '0' && a[2] == '0') || (a[0] == '0' && a[1] == '0')) {
            good = false;
        }
    }
    if(a.length() == 2 && good) {
        if((a[0] == '0' && a[1] == '0') || (a[0] == '0')) {
            good = false;
        }
    }
    if(good) {
        return "Yes!";
    }else {
        return "No!";
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

    }
