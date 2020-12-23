#ifndef VALUES_H
#define VALUES_H

#include <string>

namespace Math_Interpreter {

class Number {
public:
    double value;

    Number(double value) : value(value) {}

    std::string str() const;
};

} // namespace Math_Interpreter


#endif // VALUES_H