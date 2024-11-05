#pragma once
#include <cmath>
#include <iostream>

// Макрос для обчислення квадрата числа
#define SQR(x) ((x) * (x))

// Макрос для обчислення максимуму з двох значень
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

// Макрос для обчислення мінімуму з двох значень
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

// Макрос для виведення дійсного числа
#define PRINTR(w) std::cout << "w = " << (w) << std::endl
#pragma once
