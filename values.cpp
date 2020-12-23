#include <string>

#include "values.h"

namespace Math_Interpreter {

std::string Number::str() const {
    return std::to_string(value);
}

} // namespace Math_Interpreter