#include <iostream>
using namespace std;
double DegToRad(double degrees);
void proc31();
bool CheckInput(int a, int b, int c);
bool CheckPositivity(int a, int b, int c);
void boolean12();
void Integer19();
int InputSeconds();
int CalculateHours(int seconds);
void OutputResult(int hours);
int main()
{

    cout << "Enter task number:" << endl;
    int menu;
    cin >> menu;
   
        switch (menu)
        {
        case 1:
            proc31();
            break;
        case 2:
            boolean12();
            break;
        case 3:
            Integer19();
            break;
        default:
            cout << "Only 1,2 and 3" << endl;
            break;
        }
   
    system("pause");
    return 0;
}

double DegToRad(double degrees) {
    // Переведення градусів в радіани за вказаною формулою
    const double pi = 3.14;
    return degrees * (pi / 180.0);
}
void proc31() {
    // Виклик функції та виведення результатів
    int a1=0, a2=0, a3=0, a4=0, a5=0;
    cout << "a1:" << endl;
    cin >> a1;
    cout << "2:" << endl;
    cin >> a2;
    cout << "a3:" << endl;
    cin >> a3;
    cout << "a4:" << endl;
    cin >> a4;
    cout << "a5:" << endl;
    cin >> a5;

    cout << "Conversion of degrees to radians:\n";
   cout << "Angle 1 in degrees: " << DegToRad(a1) << "\n";
    cout << "Angle 2 in degrees:  " << DegToRad(a2) << "\n";
   cout << "Angle 3 in degrees:  " << DegToRad(a3) << "\n";
    cout << "Angle 4 in degrees: " << DegToRad(a4) << "\n";
    cout << "Angle 5 in degrees:" << DegToRad(a5) << "\n";
}
// Визначення функції для перевірки коректності введених даних
bool CheckInput(int a, int b, int c) {
    return true; // Можна додати додаткові перевірки, якщо потрібно
}

// Визначення функції для розрахунку результату
bool CheckPositivity(int a, int b, int c) {
    return (a > 0) && (b > 0) && (c > 0);
}
void boolean12() {
    // Введення даних
    int a, b, c;
    cout << "Enter three integers (A, B, C): ";
    cin >> a >> b >> c;

    // Перевірка коректності введених даних
    if (CheckInput(a, b, c)) {
        // Розрахунок та виведення результату
        if (CheckPositivity(a, b, c)) {
            cout << "Each of the numbers A, B, C is positive.\n";
        }
        else {
        cout << "Not every number A, B, C is positive.\n";
        }
    }
    else {
       cout << "The data entered is incorrect. Check the input values.\n";
    }
}
// Функція введення вхідних значень з консолі
int InputSeconds() {
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    return seconds;
}

// Функція підрахунку результату
int CalculateHours(int seconds) {
    const int secondsPerHour = 3600;  // 1 година = 3600 секунд
    return seconds / secondsPerHour;
}

// Функція виведення результату в консоль
void OutputResult(int hours) {
    cout << "A day has passed since the beginning of the day " << hours << " hours.\n";
}
void Integer19() {
    // Введення вхідних значень
    int n = InputSeconds();

    // Перевірка коректності введених даних та розрахунок результату
    if (n >= 0) {
        int hours = CalculateHours(n);

        // Виведення результату
        OutputResult(hours);
    }
    else {
       cout << "The entered value is incorrect. Please enter a non-negative number.\n";
    }
}
