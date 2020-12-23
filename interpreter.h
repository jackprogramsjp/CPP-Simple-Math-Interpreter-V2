#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <memory>

#include "values.h"
#include "nodes.h"

namespace Math_Interpreter {

class Interpreter {
public:
    Interpreter() = default;
    Number visit(const std::unique_ptr<Node>& node);
    Number visit(Node *node);
    Number visit(NumberNode *node);
    Number visit(AddNode *node);
    Number visit(SubtractNode *node);
    Number visit(MultiplyNode *node);
    Number visit(DivideNode *node);
    Number visit(PlusNode *node);
    Number visit(MinusNode *node);
};

} // namespace Math_Interpreter


#endif // INTERPRETER_H