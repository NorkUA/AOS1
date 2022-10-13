// AOS1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <chrono>
#pragma optimaze("", off )

using namespace std;
using namespace chrono;


const long n = 100000;

double int_assign_time() {
    int a = 1, b = 2, c = 3, d = 4, e = 5, f =6, g = 7, h = 8, j =9, k = 10;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f; f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_int_assign() {
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += int_assign_time();
    }
    return gen_time / 10;
}


double long_assign_time() {
    int a = 100000, b = a + 1, c = b + 1, d = c + 1, e = d + 1, f = e + 1, g = f + 1, h = g + 1, j = h + 1, k = j + 1;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f; f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_long_assign() {
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += long_assign_time();
    }
    return gen_time / 10;
}


double double_assign_time() {
    double a = 1.234, b = a + 1, c = b + 1, d = c + 1, e = d + 1, f = e + 1, g = f + 1, h = g + 1, j = h + 1, k = j + 1;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f; f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_double_assign() {
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += double_assign_time();
    }
    return gen_time / 10;
}


double float_assign_time() {
    double a = 1.23, b = a + 1, c = b + 1, d = c + 1, e = d + 1, f = e + 1, g = f + 1, h = g + 1, j = h + 1, k = j + 1;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f; f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_float_assign() {
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += float_assign_time();
    }
    return gen_time / 10;
}

double char_assign_time() {
    char a, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, j = 9, k = 0;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f; f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}

double avg_char_assign() {
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += char_assign_time();
    }
    return gen_time / 10;
}


/*
 * a - adding
 * s - subtraction
 * m - multiplication
 * d - division
*/


double int_a(double int_as) {
    int a, b, c, d, e, f, g, h, j = 34, k = 12;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j + k; b = k + a; c = a + b; d = b + c; e = c + d;
        f = d + e; g = e + f; h = f + g; j = g + h; k = h + j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double int_s(double int_as) {
    int a, b, c, d, e, f, g, h, j = 34, k = 12;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j - k; b = k - a; c = a - b; d = b - c; e = c - d;
        f = d - e; g = e - f; h = f - g; j = g - h; k = h - j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double int_m(double int_as) {
    int a, b, c, d, e, f, g, h, j = 34, k = 12;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j * k; b = k * a; c = a * b; d = b * c; e = c * d;
        f = d * e; g = e * f; h = f * g; j = g * h; k = h * j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double int_d(double int_as) {
    int a, b, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        j = 19683, k = 3;
        a = j / k; b = a / k; c = b / k; d = c / k; e = d / k;
        f = e / k; g = f / k; h = g / k; j = h / k; k = j / k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as * 1.2);
}


double long_a(double long_as) {
    long a, b, c, d, e, f, g, h, j = 123456, k = 54321;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j + k; b = k + a; c = a + b; d = b + c; e = c + d;
        f = d + e; g = e + f; h = f + g; j = g + h; k = h + j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double long_s(double long_as) {
    long a, b, c, d, e, f, g, h, j = 123456, k = 54321;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j - k; b = k - a; c = a - b; d = b - c; e = c - d;
        f = d - e; g = e - f; h = f - g; j = g - h; k = h - j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double long_m(double long_as) {
    long a, b, c, d, e, f, g, h, j = 123456, k = 54321;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j * k; b = k * a; c = a * b; d = b * c; e = c * d;
        f = d * e; g = e * f; h = f * g; j = g * h; k = h * j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double long_d(double long_as) {
    long a, b, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        j = 4782969, k = 3;
        a = j / k; b = a / k; c = b / k; d = c / k; e = d / k;
        f = e / k; g = f / k; h = g / k; j = h / k; k = j / k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as * 1.2);
}


double double_a(double double_as) {
    double a, b, c, d, e, f, g, h, j = 12.345, k = 67.89;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j + k; b = k + a; c = a + b; d = b + c; e = c + d;
        f = d + e; g = e + f; h = f + g; j = g + h; k = h + j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as);
}


double double_s(double double_as) {
    double a, b, c, d, e, f, g, h, j = 12.345, k = 67.89;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j - k; b = k - a; c = a - b; d = b - c; e = c - d;
        f = d - e; g = e - f; h = f - g; j = g - h; k = h - j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as);
}


double double_m(double double_as) {
    double a, b, c, d, e, f, g, h, j = 12.345, k = 67.89;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j * k; b = k * a; c = a * b; d = b * c; e = c * d;
        f = d * e; g = e * f; h = f * g; j = g * h; k = h * j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as);
}


double double_d(double double_as) {
    double a, b, c, d, e, f, g, h, j = 125.25, k = 50.15;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j / k; b = k / a; c = a / b; d = c / b; e = c / d;
        f = d / e; g = f / e; h = f / g; j = f / h; k = j / h;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as * 1.2);
}


double float_a(double float_as) {
    float a, b, c, d, e, f, g, h, j = 54.321, k = 98.76;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j + k; b = k + a; c = a + b; d = b + c; e = c + d;
        f = d + e; g = e + f; h = f + g; j = g + h; k = h + j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double float_s(double float_as) {
    double a, b, c, d, e, f, g, h, j = 54.321, k = 98.76;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j - k; b = k - a; c = a - b; d = b - c; e = c - d;
        f = d - e; g = e - f; h = f - g; j = g - h; k = h - j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double float_m(double float_as) {
    double a, b, c, d, e, f, g, h, j = 54.321, k = 98.76;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j * k; b = k * a; c = a * b; d = b * c; e = c * d;
        f = d * e; g = e * f; h = f * g; j = g * h; k = h * j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double float_d(double float_as) {
    double a, b, c, d, e, f, g, h, j = 50.5, k = 2.5;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j / k; b = k / a; c = a / b; d = c / b; e = c / d;
        f = d / e; g = f / e; h = f / g; j = f / h; k = j / h;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as * 1.2);
}


double char_a(double char_as) {
    char a, b, c, d, e, f, g, h, j = 3, k = 12;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j + k; b = k + a; c = a + b; d = b + c; e = c + d;
        f = d + e; g = e + f; h = f + g; j = g + h; k = h + j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
}


double char_s(double char_as) {
    char a, b, c, d, e, f, g, h, j = 8, k = 11;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j - k; b = k - a; c = a - b; d = b - c; e = c - d;
        f = d - e; g = e - f; h = f - g; j = g - h; k = h - j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
}


double char_m(double char_as) {
    char a, b, c, d, e, f, g, h, j = 6, k = 13;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = j * k; b = k * a; c = a * b; d = b * c; e = c * d;
        f = d * e; g = e * f; h = f * g; j = g * h; k = h * j;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
}


double char_d(double char_as) {
    char a, b, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        j = 25, k = 5;
        a = j / k; b = k / a; c = a / b; d = c / b; e = c / d;
        f = d / e; g = f / e; h = f / g; j = f / h; k = j / h;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as * 1.2);
}


double max_v(const double vls[20]) {
    double res_max = 0;
    for (int i = 0; i < 20; i++) {
        if (vls[i] > res_max) {
            res_max = vls[i];
        }
    }
    return res_max;
}


void output(double vls[20], double res_max) {
    char op[4] = { '+', '-', '*', '/' };
    string types[5] = { "   int    ", "   long   ", "  double  ", "  float   ", "   char   " };
    for (int i = 0; i < 20; i++) {
        cout << op[i % 4] << types[i / 4];
        printf("%e", vls[i]);

        cout << ' ';

        for (int j = 0; j < int(100 * (vls[i] / res_max)) / 2; j++) {
            cout << '|';
        }

        cout << ' ';

        for (int j = 0; j < 50 - int(100 * (vls[i] / res_max)) / 2; j++) {
            cout << ' ';
        }

        cout << int(100 * (vls[i] / res_max)) << " % " << endl;
    }
}


int main() {
    double avg_int_as = avg_int_assign();
    double avg_long_as = avg_long_assign();
    double avg_double_as = avg_double_assign();
    double avg_float_as = avg_float_assign();
    double avg_char_as = avg_char_assign();

    double times[20];

    times[0] = int_a(avg_int_as);
    times[1] = int_s(avg_int_as);
    times[2] = int_m(avg_int_as);
    times[3] = int_d(avg_int_as);

    times[4] = long_a(avg_long_as);
    times[5] = long_s(avg_long_as);
    times[6] = long_m(avg_long_as);
    times[7] = long_d(avg_long_as);

    times[8] = double_a(avg_double_as);
    times[9] = double_s(avg_double_as);
    times[10] = double_m(avg_double_as);
    times[11] = double_d(avg_double_as);

    times[12] = float_a(avg_float_as);
    times[13] = float_s(avg_float_as);
    times[14] = float_m(avg_float_as);
    times[15] = float_d(avg_float_as);

    times[16] = char_a(avg_char_as);
    times[17] = char_s(avg_char_as);
    times[18] = char_m(avg_char_as);
    times[19] = char_d(avg_char_as);

    double m_v = max_v(times);
    output(times, m_v);

    return 0;
}
