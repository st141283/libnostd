#ifndef LIBNOSTD_CD_CORE_HPP
#define LIBNOSTD_CD_CORE_HPP
#include <string>

namespace cs {
    std::string dec2hex(unsigned int);
    unsigned int hex2dec(const std::string&);
}