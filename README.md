# stm32-bluepill-template
STM32 development template for VS Code, cubemx hal and both C and CPP source


## After CubeMX code generation

rename the main() in Core\Src\main.c to main2
add int main2() in Core\Inc\main.h to make it accessible in C++.
check that main2() function still breaks in the mainloop.


## Makefile
Changed to support CPP files