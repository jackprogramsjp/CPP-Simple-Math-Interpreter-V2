#include <iostream>
#include <string>

#include "tokens.h"
#include "lexer.h"
#include "parser.h"
#include "interpreter.h"

int main() {
    std::string text;

    while (true) {
        try {
            std::cout << "calc > " << std::flush;
            std::getline(std::cin, text);

            if (std::cin.bad()) {
                std::cerr << "IO error\n";
                break;
            } else if (std::cin.eof()) {
                break;
            }

            Math_Interpreter::Lexer lexer(text);
            std::vector<Math_Interpreter::Token> tokens = lexer.generate_tokens();

            //Math_Interpreter::print_tokens(tokens);

            Math_Interpreter::Parser parser(tokens);
            std::unique_ptr<Math_Interpreter::Node> tree = parser.parse();

            if (!tree) {
                continue;
            }

            //std::cout << tree->str() << '\n';

            Math_Interpreter::Interpreter interpreter;
            Math_Interpreter::Number value = interpreter.visit(tree);

            std::cout << value.str() << '\n';
        } catch (const std::string& e) {
            std::cerr << e << '\n';
        }
    }
}