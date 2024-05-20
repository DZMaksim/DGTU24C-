

#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;
//7.2.1
int submain14()
{
    unsigned char flags = 0x00;
    printf("The original meaning: 0x%02X\n", flags);

    // Маска для взведения флагов с индексами 3 и 5 (0x20 - бит 5, 0x08 - бит 3)
    unsigned char mask1 = 0x28;

    // Взводим флаги с индексами 3 и 5 путем применения маски
    flags |= mask1;
    printf("Mask for raising flags 3 and 5: 0x%02X\n", mask1);
    printf("The value after raising flags 3 and 5: 0x%02X\n", flags);

    // Маска для инвертирования флагов с индексами 0, 2 и 3 (0x0D - биты 0, 2 и 3)
    unsigned char mask2 = 0x0D;
    flags ^= mask2;
    printf("Mask for inverting flags 0, 2 and 3: 0x%02X\n", mask2);
    printf("The value after inverting flags 0, 2 and 3: 0x%02X\n", flags);
    unsigned char mask3 = 0xFB;
    flags &= mask3;
    printf("Flag reset mask 2: 0x%02X\n", mask3);
    printf("The value after the flag is reset 2: 0x%02X\n", flags);
    return 0;



}
// 7.2
int submain13()
{
    unsigned char flags = 0;
    unsigned char mask1 = 0b00000001; // первый бит
    unsigned char mask2 = 0b00000010; // второй бит
    unsigned char mask3 = 0b00000100; // третий бит
    unsigned char mask4 = 0b00001000; // четвертый бит
    unsigned char mask5 = 0b00010000; // пятый бит
    unsigned char mask6 = 0b00100000; // шестой бит
    unsigned char mask7 = 0b01000000; // седьмой бит
    unsigned char mask8 = 0b10000000; // восьмой бит
    unsigned char reseter = 0b11111101; // битовый ресетер


    flags |= mask3; // установка 3 бита
    flags |= mask5; // установка 5 бита
    if (flags & mask3)
        cout << "3 set" << endl;

    if ((flags & mask5))
        cout << "5 set" << endl;

    if (!(flags & mask6))
        cout << "6 not set" << endl;

    flags ^= mask1; // инверсия
    flags ^= mask2; // инверсия
    flags ^= mask3; // инверсия

    if (flags & mask1)
        cout << "1 set" << endl;

    if (flags & mask2)
        cout << "2 set" << endl;

    if (flags & mask3) 
        cout << "3 set" << endl;

    flags &= reseter; // сброс
    if (!(flags & mask2))
        cout << "2 not set" << endl;

    cout << "\n------------------------------------------\n" << endl;
    submain14();

    return 0;



}
// 7.1
int submain12()
{

    bitset<8> flags;

    cout << "The original value of the bitset: " << flags << endl;

    flags.set(3);
    flags.set(5);


    cout << "The value of the bitset after raising the flags: " << flags << endl;


    flags.flip(0);
    flags.flip(2);
    flags.flip(3);


    cout << "The value of the bitset after inverting the flags: " << flags << endl;


    flags.reset(2);

    cout << "The value of the bitset after the flag is reset: " << flags << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain13();

    return 0;



}

//6.2
int submain11()
{
    int length;

    cout << "Enter the length of the arrays: ";
    cin >> length;

    int* arr1 = new int[length];
    int* arr2 = new int[length];

    for (int i = 0; i < length; i++) {
        arr1[i] = i;
    }

    for (int i = 0; i < length; i++) {
        arr2[i] = length - 1 - i;
    }

    int* arr3 = new int[length];
    for (int i = 0; i < length; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
    cout << "The result of adding arrays: ";
    for (int i = 0; i < length; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // Освобождаем выделенную память
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    cout << "\n------------------------------------------\n" << endl;
    submain12();

    return 0;



}
//6.1.1
int submain10()
{
    int array1[10] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 };
    int array2[10] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 };
    int sumArray[10];
    for (int i = 0; i < 10; i++) {
        array1[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        array2[i] = 9 - i;
    }
    for (int i = 0; i < 10; i++) {
        sumArray[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << sumArray[i] << " ";
    }
    cout << "\n------------------------------------------\n" << endl;
    submain11();

    return 0;



}
//6.1
int submain9()
{
    int array1[10];
    int array2[10];
    int sumArray[10];
    for (int i = 0; i < 10; i++) {
        array1[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        array2[i] = 9 - i;
    }
    for (int i = 0; i < 10; i++) {
        sumArray[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << sumArray[i] << " ";
    }
    cout << "\n------------------------------------------\n" << endl;
    submain10();

    return 0;



}

//5.2
int submain8()
{
    // Объявляем указатели и присваиваем им адреса соответствующих переменных
    int* ptr1 = new int(10);
    int* ptr2 = new int(20);
    int* ptr3 = new int(30);

    // Выводим старые значения на печать
    cout << "Old values:" << endl;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    // Выделяем новую память под переменные и присваиваем указателям новые значения
    delete ptr1; // Освобождаем старую память
    ptr1 = new int(40);
    delete ptr2;
    ptr2 = new int(50);
    delete ptr3;
    ptr3 = new int(60);

    // Выводим новые значения на печать
    cout << "New values:" << endl;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    // Освобождаем выделенную память
    delete ptr1;
    delete ptr2;
    delete ptr3;
    cout << "\n------------------------------------------\n" << endl;
    submain9();

    return 0;



}

//5.1
int submain7()
{
    int* pInt = new int;
    double* pDouble = new double;

    // Произвольно инициализируем переменные
    *pInt = 10;
    *pDouble = 3.14;

    // Выводим адреса и значения переменных
    cout << "Address of the type variable int: " << pInt << endl;
    cout << "The value of a type variable int: " << *pInt << endl;
    cout << "Address of the type variable double: " << pDouble << endl;
    cout << "The value of a type variable double: " << *pDouble << endl;

    // Освобождаем выделенную память
    delete pInt;
    delete pDouble;
    cout << "\n------------------------------------------\n" << endl;
    submain8();

    return 0;



}

//4.1 | 4.2
int submain6()
{
    int num1 = 5;
    int num2 = 10;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "Original values:" << endl;
    cout << "num1 = " << *ptr1 << endl;
    cout << "num2 = " << *ptr2 << endl;

    // Меняем указатели на другие переменные
    ptr1 = &num2;
    ptr2 = &num1;

    cout << "Modified values:" << endl;
    cout << "num1 = " << *ptr1 << endl;
    cout << "num2 = " << *ptr2 << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain7();
    return 0;



}

//3.2
int submain5()
{
    // Задаем значения числителя и знаменателя
    int numerator = -17; // отрицательное значение числителя
    int denominator = -5; // отрицательное значение знаменателя
    cout << "Result (floating number / floating number)%: " << numerator % abs(denominator) << endl;
    cout << "Result (floating number / floating number)%: " << abs(numerator) % abs(denominator) << endl;
    cout << "Result (floating number / floating number)%: " << abs(numerator) % denominator << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain6();


    return 0;



}

// 3.1
int submain4()
{
    int num1 = 10;
    float num2 = 33.14;
    float result;
    result = num1 / num2;
    cout << "Result (integer/floating number): " << result << endl;
    result = num2 / num1;
    cout << "Result(floating number / integer) : " << result << endl;
    result = num2 / num2;
    cout << "Result (floating number / floating number): " << result << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain5();

    return 0;



}

//2.2.2
int submain3()
{
    int a = 0;
    float b = 0.0;
    double c = 0.0;
    char d = '\0';

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << " d: " << d << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain4();

    return 0;



}

//2.2.1
int submain2()
{
    int a = 5;
    int b = 10;
    float c = 2.5;
    float d = 1.3;
    bool e = true;
    char f = 'A';

    cout << "Int:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nFloat:" << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    cout << "\nBool:" << endl;
    cout << "e = " << boolalpha << e << endl;

    cout << "\nChar:" << endl;
    cout << "f = " << f << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain3();
    return 0;



}
//2.2
int submain()
{
    int integerVariable;
    float floatVariable;
    double doubleVariable;
    char charVariable;
    bool boolVariable;
    string stringVariable;
    integerVariable = 10;
    floatVariable = 3.14f;
    doubleVariable = 3.14159265359;
    charVariable = 'A';
    boolVariable = true;
    stringVariable = "Hello, world!";
    cout << "integerVariable: " << integerVariable << endl;
    cout << "floatVariable: " << floatVariable << endl;
    cout << "doubleVariable: " << doubleVariable << endl;
    cout << "charVariable: " << charVariable << endl;
    cout << "boolVariable: " << boolVariable << endl;
    cout << "stringVariable: " << stringVariable << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain2();

    return 0;



}
//1.1.1 | 2.1
int submain0()
{
    cout << "He\nllo Wor\nld" << endl;
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of short: " << sizeof(short) << " byte(s)" << endl;
    cout << "\n------------------------------------------\n" << endl;
    submain();
    return 0;



}
int main()
{

    submain0();

    return 0;
}



