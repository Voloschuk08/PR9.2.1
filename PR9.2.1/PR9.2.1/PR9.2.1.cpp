#include <iostream>
#include "macros.h"  // Включення власного заголовного файлу

using namespace std;

int main() {
    double x, y, z, w;

    // Введення значень користувачем
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    // Обчислення виразу w залежно від значення z
#if (0 < z && z < 5)
    w = MAX(SQR(x) + y + z, x * y * z);
#elif (z <= 0 || z >= 5)
    w = MIN(SQR(x) + SQR(y + z), x * y);
#else
    w = 0;  // За замовчуванням, якщо жодна умова не виконується
#endif

    // Виведення результату
    PRINTR(w);

    return 0;
}
