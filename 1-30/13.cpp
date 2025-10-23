#include <iostream>
#include <string>

int main() {
    long long ans = 0;
    std::string input;
    
    for (int i = 0; i < 100; ++i) {
        std::cin >> input;

        long long num = 0;
        for (char c : input) {
            num = num * 10 + (c - '0');
        }

        ans += num;
    }

    // Convert long long to string
    std::string result;
    while (ans > 0) {
        result = char('0' + (ans % 10)) + result;
        ans /= 10;
    }

    std::cout << result.substr(0, 10) << std::endl;
    return 0;
}
