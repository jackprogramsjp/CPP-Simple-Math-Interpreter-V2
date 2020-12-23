# C++ - Simple Math Interpreter V2

I made this for fun, so there may or may not be some bad practice or anything like that! If there is an issue, I'm willing to fix it, but I do not have a lot of knowledge with C++.

An interpreter, written in C++, that can evaluate simple math calculations.

This is written in C++11.

## V1

My first simple math interpreter:

https://github.com/jackprogramsjp/CPP-Simple-Math-Interpreter

## V2 (this)

Improvements:

* Smart pointers instead of raw pointers.
* More similar to CodePulse's Python Simple Math Interpreter code
* Inheritance with classes, including use of virtual functions (polymorphism)
* CMakeLists.txt added to build with CMake
* In general, more use of C++11 features

V2 does not have the power operator like in V1.

## Credits

Credits to [CodePulse](https://www.youtube.com/channel/UCUVahoidFA7F3Asfvamrm7w) for the Simple Math interpreter written in Python and credits to [CoolDeveloper101](https://github.com/CoolDeveloper101) for his Simple Math Interpreter written in C#.

Here is CodePulse's [simple math interpreter](https://github.com/davidcallanan/py-simple-math-interpreter).
Here is CoolDeveloper101's [simple math interpreter](https://github.com/CoolDeveloper101/simple-math-interpreter) and [this](https://gitlab.com/CoolDeveloper101/math-interpreter/-/tree/master/).

# Running the program

If you are using G++ (GNU Compiler Collection), there is a [compile.txt](https://github.com/jackprogramsjp/CPP-Simple-Math-Interpreter-V2/blob/main/compile.txt), so you can compile the interpreter into an executable file.

You can also build with CMake. In a terminal, go to the root directory and run
```bash
cmake .
make
./CPP-Simple-Math-Interpreter
```
to compile and execute the math interpreter.
