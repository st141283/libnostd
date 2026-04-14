#include <string>

namespace cs {
    std::string dec2hex(unsigned int decimal) {
        std::string hexdecimal;
        const char hex_digits[] = "0123456789ABCDEF";
        do {
            hexdecimal = hex_digits[decimal % 16] + hexdecimal;
            decimal >>= 4;
        } while (decimal > 0)
        return hexdecimal;
    }

    unsigned int hex2dec(const std::string& hexademal) {
        unsigned int decimal = 0;
        for (const char ch : hexademal) {
            decimal = decimal * 16 + ((std::isdigit(ch)) ? (ch - '0') : (std::toupper(ch) - 'A' + 10));
        }
        return decimal;
    }
}