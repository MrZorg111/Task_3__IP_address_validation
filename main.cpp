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
        return  "Yes!";
    }else {
        return "No!";
    }
}
std::string chek_2 (std::string b) {
    bool good = true;
    char c_b;
    if (b.length() < 1 || b.length() > 3) {
        good = false;
    }
    for (int i = 0; i < b.length(); i++) {
        c_b = b[i];
        if (c_b < 48 || c_b > 57) {
            good = false;
            break;
        }
    }
    if(b.length() == 3 && good){
        if(b[0] == '0' || b[0] > '2') {
            good = false;
        }
        else if(b[0] == '2' && b[1] > '5') {
            good = false;
        }
        else if(b[0] == '2' && b[1] == '5' && b[2] > '5') {
            good = false;
        }
        else if((b[0] == '0' && b[1] == '0' && b[2] == '0') || (b[0] == '0' && b[1] == '0')) {
            good = false;
        }
    }
    if(b.length() == 2 && good) {
        if((b[0] == '0' && b[1] == '0') || (b[0] == '0')) {
            good = false;
        }
    }
    if(good) {
        return "Yes!";
    }else {
        return "No!";
    }
}
std::string chek_3 (std::string c) {
    bool good = true;
    char c_c;
    if (c.length() < 1 || c.length() > 3) {
        good = false;
    }
    for (int i = 0; i < c.length(); i++) {
        c_c = c[i];
        if (c_c < 48 || c_c > 57) {
            good = false;
            break;
        }
    }
    if(c.length() == 3 && good){
        if(c[0] == '0' || c[0] > '2') {
            good = false;
        }
        else if(c[0] == '2' && c[1] > '5') {
            good = false;
        }
        else if(c[0] == '2' && c[1] == '5' && c[2] > '5') {
            good = false;
        }
        else if((c[0] == '0' && c[1] == '0' && c[2] == '0') || (c[0] == '0' && c[1] == '0')) {
            good = false;
        }
    }
    if(c.length() == 2 && good) {
        if((c[0] == '0' && c[1] == '0') || (c[0] == '0')) {
            good = false;
        }
    }
    if(good) {
        return "Yes!";
    }else {
        return "No!";
    }
}
std::string chek_4 (std::string d) {
    bool good = true;
    char c_d;
    if (d.length() < 1 || d.length() > 3) {
        good = false;
    }
    for (int i = 0; i < d.length(); i++) {
        c_d = d[i];
        if (c_d < 48 || c_d > 57) {
            good = false;
            break;
        }
    }
    if(d.length() == 3 && good){
        if(d[0] == '0' || d[0] > '2') {
            good = false;
        }
        else if(d[0] == '2' && d[1] > '5') {
            good = false;
        }
        else if(d[0] == '2' && d[1] == '5' && d[2] > '5') {
            good = false;
        }
        else if((d[0] == '0' && d[1] == '0' && d[2] == '0') || (d[0] == '0' && d[1] == '0')) {
            good = false;
        }
    }
    if(d.length() == 2 && good) {
        if((d[0] == '0' && d[1] == '0') || (d[0] == '0')) {
            good = false;
        }
    }
    if(good) {
        return "Yes!";
    }else {
        return "No!";
    }
}

std::string chek_total (std::string a, std::string b, std::string c, std::string d) {
    bool good = true;
    if (chek_1(a) == "No!") {
        good = false;
    }
    if (chek_2(b) == "No!") {
        good = false;
    }
    if (chek_3(c) == "No!") {
        good = false;
    }
    if (chek_4(d) == "No!") {
        good = false;
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

    std::cout << chek_total (ip_1, ip_2, ip_3, ip_4);
    }
