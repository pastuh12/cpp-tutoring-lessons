﻿// lesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


using namespace std;

//const int con = 5;
//const int n = 3;



//int main(int arg)
//{
// //   ////int a = 1;
// //   ////int f = 4;
// //   ////int b = 4;
// //   ////long int l = 8;
//
// //   ////char c = 'd';
//
// //   ////bool q = false;
//
// //   ////const int PI = 12;
//
// //   ////float del = 12.3;
//
// //   ////int result = 4 * ++a;//8
//
// //   ////a = 100;
//
//
// //   ////for (char i = 0; i < 10; i += 1) {
// //   ////    cout << i << endl;
//
// //   ////}
// //   //    
// //   ////int number = 5;
// //   ////const int& refNumber = number;
// //   ////std::cout << refNumber << std::endl; // 5
// //   ////number += 2;
// //   ////cout << refNumber; // 7
//
// //   ////int arr[] = { 1,2,3 };
// //   ////int arr2[3];
// //   ////cout << arr2[0] << endl;
// //   ////arr2[0] = 'f';
// //   ////cout << arr2[0];
//
// //   ///*
// //   //cout << endl << "size" << size << endl;*/
//
//
// //   ////int size = sizeof(arr) / sizeof(arr[0]);
// //   ////for(int i = 0; i < size; i++) {
// //   ////    cout << arr2[i];
// //   ////}
// //   //const int n = 100;
// //   //int a = 0; 
// //   //int arr[n] = {};
// //   //int i = 0;
// //   //cin >> a;
//
//
// //   //int size = sizeof(arr) / sizeof(arr[0]);
//
// //   //for (int j = 0; j < size; j++) {
// //   //    arr[j] = -10;
// //   //}
//
// //   //while (a > 0) {
// //   //    arr[i] =  a % 10;
// //   //    a /= 10;
// //   //    i += 1;
// //   //}
//
// //   //for (int j = 0; j < i; j++) {
// //   //    //if (arr[j] < 0) {
// //   //    //    break;
// //   //    //}
// //   //    cout << arr[j] << endl;
//
// //   //}
//
// ////   char string[255];
// ////   char input = ' ';
// ////   int i = 0;
// /////*   char string2[] = "dfghj";*/
//
// ////   cin >> input;
// ////   while (input != '0') {
// ////       string[i] = input;
// ////       i += 1;
// ////       cin >> input;
// ////   }
// ////   string[i] = '\0';
//
// ////   cout << endl << strlen(string);
//
// //   //int matrix[n][n];
//
// //   //for (int i = 0; i < n; i++) {
// //   //    for (int j = 0; j < n; j++) {
// //   //        cin >> matrix[i][j];
// //   //    }
// //   //}
//
// //   //string str = "f";
// //   //str.append("df");
// //   //int size = str.length();
// //   //for (int i = 0; i < size; i++) {
// //   //    cout << str[i];
// //   //    cout << endl;
// //   //}
//
//    int arra[] = { 1, 2, 3, 4 };
//
//    cout << sizeof(*arra);
//    return 0;
//}

void print(int[]);
void newPrint(int[]);
string GetString();

int main() {
    setlocale(LC_ALL, "Russian");
    int result = 2;
    int& ulr = result;
    int* p = &result;
    int arr[] = { 1,2,3,4,5 };

    cout << ulr << endl;

    ulr += 4;

    //cout << result << endl;

    //cout << arr[0];


    //newPrint(arr);
    //cout << arr[0];

    print(arr);

}

void newPrint(int x[]) {
    x[0] = 1234;
    cout << "Новое " << x << endl;
}

string GetString()
{
    return "sdfhj,k.,mnvgcdxfbnm,mnv";
}

void print(int p[], int len) {
    for (int i; i < len; i++) {
        p[i];
    }
}


switch (x)
{
case '_':
    cout << '5';
    break;
case '/':
    cout << '6';
    break;
default:
    break;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
