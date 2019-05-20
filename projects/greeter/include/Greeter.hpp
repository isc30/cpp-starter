#include <iostream>
#include <string_view>

class Greeter
{
public:
    std::string greet(const std::string_view& name) const noexcept;
};
