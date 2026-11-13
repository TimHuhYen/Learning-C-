$ g++ -std=c++17 -Wall -Wextra .\input.cpp -o input

Kept on giving an error. Did some research.
Compile both programs into one. The error is that the linker is looking for main.

$ g++ -std=c++17 -Wall -Wextra .\main.cpp .\input.cpp -o program