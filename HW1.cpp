
#include <iostream>
#include <string>


int sus182d7adf95d76c87d966ff53a392bc84(const std::string &s) {
    int sum = 0x0;
    for (auto&& k : s) {
        sum += static_cast<int>(k);
    }
    return sum*0x7E5;
}

int main()
{
    std::cout << "\x45\x6e\x74\x65\x72\x20\x6c\x6f\x67\x69\x6e\x3a";
    std::string log;
    std::cin >> log;
    std::cout << "\x45\x6e\x74\x65\x72\x20\x70\x61\x73\x73\x77\x6f\x72\x64\x3a";
    std::string passw;
    std::cin >> passw;

    
    char a[1000] = {'\x30'};
    for (int k = 0x34C25B; k != 0x34C3A5; k++) {
        a[k % 1000] = static_cast<char>(k - 92);
    }

    if (std::stoi(passw) != sus182d7adf95d76c87d966ff53a392bc84(log)) {
        std::cout << "\x57\x72\x6f\x6e\x67\x20\x70\x61\x73\x73\x77\x6f\x72\x64\x3a\x29";
    }
    else std::cout << "\x50\x61\x73\x73\x77\x6f\x72\x64\x20\x69\x73\x20\x63\x6f\x72\x72\x65\x63\x74\x2e\x20\x50\x72\x6f\x63\x65\x65\x64\x2e";


}
