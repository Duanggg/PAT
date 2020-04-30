#include <iostream>
#include <cctype>
#include <regex>
#include <string>

// using namespace std;
int main(){
    std::string s = "zheshi.wode-pw";
std::regex qq_reg("([0-9]|[a-z]|[A-Z]|[.])*");
bool ret = std::regex_match(s, qq_reg);
std::cout << (ret ? "valid" : "invalid") << std::endl;
}
