#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;


/*int main() {
    int a, sum = 0;
    cout << "Введіть значення a: ";
    cin >> a;

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "Сума чисел від " << a << " до 500: " << sum << endl;
    return 0;
}
*/
/*int main() {
    int x, y;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;

    double result = pow(x, y);

    cout << x << " у степені " << y << " дорівнює: " << result << endl;
    return 0;
}
*/
/*
int main() {
    int sum = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }

    double average = sum / 1000.0;

    cout << "Середнє арифметичне чисел від 1 до 1000: " << average << endl;
    return 0;
}*/

/*int main() {
    int a;
    long long product = 1;

    cout << "Введіть значення a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Неправильне значення a. Будь ласка, введіть число від 1 до 20." << endl;
        return 1;
    }

    for (int i = a; i <= 20; i++) {
        product *= i;
    }

    cout << "Добуток чисел від " << a << " до 20: " << product << endl;
    return 0;
}*/
/*int main() {
    int k;
    cout << "Enter the variant number (k): ";
    cin >> k;

    cout << "Multiplication table for " << k << ":\n";
    for (int i = 2; i <= 10; i++) {
        cout << k << " x " << i << " = " << k * i << endl;
    }

    return 0;
}
*/
/*int main() {
    int count = 0;

    for (int i = 100; i <= 999; i++) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if ((hundreds == tens && hundreds != units) ||
            (hundreds == units && hundreds != tens) ||
            (tens == units && tens != hundreds)) {
            count++;
        }
    }


    cout << "The number of integers between 100 and 999 with two identical digits is: " << count << endl;

    return 0;
}
*/

/*int main() {
    int count = 0;

    for (int i = 100; i <= 999; i++) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds != tens && hundreds != units && tens != units) {
            count++;
        }
    }

    cout << "The number of integers between 100 and 999 with all different digits is: " << count << endl;

    return 0;
}*/
/*int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int result = 0, place = 1;
    number = abs(number);

    while (number > 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result += digit * place;
            place *= 10;
        }
        number /= 10;
    }

    cout << "Result after removing 3 and 6: " << result << endl;
    return 0;
}
*/

/*int main() {
    int A;
    cout << "Enter an integer A: ";
    cin >> A;

    for (int B = 1; B * B <= A; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }

    cout << endl;
    return 0;
}*/
/*int main() {
     int A;
    cout << "Enter an integer A: ";
    cin >> A;

    int sum_of_digits = 0, temp = abs(A);

    while (temp > 0) {
        sum_of_digits += temp % 10;
        temp /= 10;
    }

    if (pow(sum_of_digits, 3) == A * A) {
        cout << "The cube of the sum of digits equals A * A." << endl;
    }
    else {
        cout << "The cube of the sum of digits does not equal A * A." << endl;
    }

    return 0;
}*/
// Це завдання скалдено не коректно, математично не правильно.
/*int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "Numbers that " << number << " is divisible by without a remainder:\n";
    for (int i = 1; i <= abs(number); i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}*/
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int limit = min(abs(num1), abs(num2));

    cout << "Numbers that both " << num1 << " and " << num2 << " are divisible by without a remainder:\n";
    for (int i = 1; i <= limit; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}