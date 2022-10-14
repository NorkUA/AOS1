
#include <iostream>
#include <string>
#include <chrono>
#pragma optimaze("", off )

using namespace std;
using namespace chrono;


const long n = 100000;

double int_assign_time() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int f = 1, g = 2, h = 3, j = 4, k = 5;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f;
        f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}

double avg_int_assign() { //pseudo 100 percent for int numbers
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += int_assign_time();
    }
    return gen_time / 10;
}

double long_assign_time() {
    int a = 123456, b = 123457, c = 123458, d = 123459, e = 200000;
    int f = 123456, g = 123457, h = 123458, j = 123459, k = 200000;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f;
        f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_long_assign() { //pseudo 100 percent for long numbers
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += long_assign_time();
    }
    return gen_time / 10;
}

double double_assign_time() {
    double a = 1.234, b = 1.235, c = 1.236, d = 1.237, e = 1.238;
    double f = 1.234, g = 1.235, h = 1.236, j = 1.237, k = 1.238;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f;
        f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_double_assign() {//pseudo 100 percent for double numbers
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += double_assign_time();
    }
    return gen_time / 10;
}


double float_assign_time() {
    double a = 1.1, b = 1.2, c = 1.3, d = 1.4, e = 1.5;
    double f = 1.1, g = 1.2, h = 1.3, j = 1.4, k = 1.5;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f;
        f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}


double avg_float_assign() {//pseudo 100 percent for float numbers
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += float_assign_time();
    }
    return gen_time / 10;
}

double char_assign_time() {
    char a = 1, b = 2, c = 3, d = 4, e = 5;
    char f = 1, g = 2, h = 3, j = 4, k = 5;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = b; b = c; c = d; d = e; e = f;
        f = g; g = h; h = j; j = k; k = a;
    }
    auto finish = high_resolution_clock::now();
    return (double)(finish - start).count();
}

double avg_char_assign() {//pseudo 100 percent for сhar numbers
    double gen_time = 0;
    for (int i = 0; i < 10; i++) {
        gen_time += char_assign_time();
    }
    return gen_time / 10;
}


double int_sum(double int_as) {// the time it takes to calculate sum of integer 
    int a = 1, b = 2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a + b; d = b + c; e = d + c; f = e + d; g = f + e;
        h = g + f; j = g + h; k = h + j; a = k + j; b = a + k;
    }
    auto end = high_resolution_clock::now();
    return n*10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double int_subtraction(double int_as) {// the time it takes to calculate subtraction of integer 
    int a = 2, b = 1, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a - b; d = b - c; e = d - c; f = e - d; g = f - e;
        h = g - f; j = g - h; k = h - j; a = k - j; b = a - k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double int_multiplication(double int_as) {//the time it takes to calculate multiplication of integer 
    int a = 2, b = 1, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a * b; d = b * c; e = d * c; f = e * d; g = f * e;
        h = g * f; j = g * h; k = h * j; a = k * j; b = a * k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double int_division(double int_as) {//the time it takes to calculate division of integer 
    int a = 2, b = 1, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = 25, b = 2;
        c = a / b; d = c / b; e = d / b; f = e / b; g = f / b;
        h = g / b; j = h / b; k = j / b; a = k / b; b = a / b;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - int_as);
}


double long_sum(double long_as) {
    long a = 100000, b = 2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a + b; d = b + c; e = d + c; f = e + d; g = f + e;
        h = g + f; j = g + h; k = h + j; a = k + j; b = a + k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double long_subtraction(double long_as) {
    long a = 100000, b = 2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a - b; d = b - c; e = d - c; f = e - d; g = f - e;
        h = g - f; j = g - h; k = h - j; a = k - j; b = a - k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double long_multiplication(double long_as) {
    long a = 100000, b = 2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a * b; d = b * c; e = d * c; f = e * d; g = f * e;
        h = g * f; j = g * h; k = h * j; a = k * j; b = a * k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double long_division(double long_as) {
    long a, b, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = 100000, b = 2;
        c = a / b; d = c / b; e = d / b; f = e / b; g = f / b;
        h = g / b; j = h / b; k = j / b; a = k / b; b = a / b;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - long_as);
}


double double_sum(double double_as) {
    double a = 1.111, b = 2.222, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a + b; d = b + c; e = d + c; f = e + d; g = f + e;
        h = g + f; j = g + h; k = h + j; a = k + j; b = a + k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as);
}


double double_subtraction(double double_as) {
    double a = 1.111, b = 2.222, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a - b; d = b - c; e = d - c; f = e - d; g = f - e;
        h = g - f; j = g - h; k = h - j; a = k - j; b = a - k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as);
}


double double_multiplication(double double_as) {
    double a = 1.111, b = 2.222, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a * b; d = b * c; e = d * c; f = e * d; g = f * e;
        h = g * f; j = g * h; k = h * j; a = k * j; b = a * k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as);
}


double double_division(double double_as) {
    double a = 1.111, b = 2.222, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a / b; d = c / b; e = d / b; f = e / b; g = f / b;
        h = g / b; j = h / b; k = j / b; a = k / b; b = a / b;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - double_as );
}


double float_sum(double float_as) {
    float a = 37.1, b = 3.2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a + b; d = b + c; e = d + c; f = e + d; g = f + e;
        h = g + f; j = g + h; k = h + j; a = k + j; b = a + k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double float_subtraction(double float_as) {
    float a = 37.1, b = 3.2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a - b; d = b - c; e = d - c; f = e - d; g = f - e;
        h = g - f; j = g - h; k = h - j; a = k - j; b = a - k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double float_multiplication(double float_as) {
    float a = 37.1, b = 3.2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a * b; d = a * c; e = d * c; f = e * d; g = f * e;
        h = g * f; j = g * h; k = h * j; a = k * j; b = a * k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double float_division(double float_as) {
    double a = 37.1, b = 3.2, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a / b; d = c / b; e = d / b; f = e / b; g = f / b;
        h = g / b; j = h / b; k = j / b; a = k / b; b = a / b;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - float_as);
}


double char_sum(double char_as) {
    char a = 2, b = 5, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a + b; d = b + c; e = d + c; f = e + d; g = f + e;
        h = g + f; j = g + h; k = h + j; a = k + j; b = a + k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
}


double char_subtraction(double char_as) {
    char a = 2, b = 5, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a - b; d = b - c; e = d - c; f = e - d; g = f - e;
        h = g - f; j = g - h; k = h - j; a = k - j; b = a - k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
}


double char_multiplication(double char_as) {
    char a = 2, b = 5, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        c = a * b; d = b * c; e = d * c; f = e * d; g = f * e;
        h = g * f; j = g * h; k = h * j; a = k * j; b = a * k;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
}


double char_division(double char_as) {
    char a, b, c, d, e, f, g, h, j, k;
    auto beginning = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        a = 2, b = 5;
        c = a / b; d = c / b; e = d / b; f = e / b; g = f / b;
        h = g / b; j = h / b; k = j / b; a = k / b; b = a / b;
    }
    auto end = high_resolution_clock::now();
    return n * 10 * 1e9 / ((double)(end - beginning).count() - char_as);
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


void output(double vls[20], double  m_v) {
    char op[4] = { '+', '-', '*', '/' };
    string types[5] = { "   int    ", "   long   ", "  double  ", "  float   ", "   char   " };
    for (int i = 0; i < 20; i++) {
        cout << op[i % 4] << types[i / 4];
        printf("%e", vls[i]);

        cout << ' ';

        for (int j = 0; j < int(100 * (vls[i] / m_v)) / 2; j++) {
            cout << '|';
        }

        cout << ' ';

        for (int j = 0; j < 50 - int(100 * (vls[i] / m_v)) / 2; j++) {
            cout << ' ';
        }

        cout << int(100 * (vls[i] / m_v)) << " % " << endl;
    }
}


int main() {
    // We create this variables for optimize system 
    double avg_int_as = avg_int_assign();
    double avg_long_as = avg_long_assign();
    double avg_double_as = avg_double_assign();
    double avg_float_as = avg_float_assign();
    double avg_char_as = avg_char_assign();
    //for otputing 
    double times[20];

    times[0] = int_sum(avg_int_as);
    times[1] = int_subtraction(avg_int_as);
    times[2] = int_multiplication(avg_int_as);
    times[3] = int_division(avg_int_as);

    times[4] = long_sum(avg_long_as);
    times[5] = long_subtraction(avg_long_as);
    times[6] = long_multiplication(avg_long_as);
    times[7] = long_division(avg_long_as);

    times[8] = double_sum(avg_double_as);
    times[9] = double_subtraction(avg_double_as);
    times[10] = double_multiplication(avg_double_as);
    times[11] = double_division(avg_double_as);

    times[12] = float_sum(avg_float_as);
    times[13] = float_subtraction(avg_float_as);
    times[14] = float_multiplication(avg_float_as);
    times[15] = float_division(avg_float_as);

    times[16] = char_sum(avg_char_as);
    times[17] = char_subtraction(avg_char_as);
    times[18] = char_multiplication(avg_char_as);
    times[19] = char_division(avg_char_as);

    double m_v = max_v(times);
    output(times, m_v);

    return 0;
}
