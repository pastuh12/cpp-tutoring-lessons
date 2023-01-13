// lesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



using namespace std;

const int con = 5;

int main(int arg)
{
    //int a = 1;
    //int f = 4;
    //int b = 4;
    //long int l = 8;

    //char c = 'd';

    //bool q = false;

    //const int PI = 12;

    //float del = 12.3;

    //int result = 4 * ++a;//8

    //a = 100;


    //for (char i = 0; i < 10; i += 1) {
    //    cout << i << endl;

    //}
        
    //int number = 5;
    //const int& refNumber = number;
    //std::cout << refNumber << std::endl; // 5
    //number += 2;
    //cout << refNumber; // 7

    //int arr[] = { 1,2,3 };
    //int arr2[3];
    //cout << arr2[0] << endl;
    //arr2[0] = 'f';
    //cout << arr2[0];

    /*
    cout << endl << "size" << size << endl;*/


    //int size = sizeof(arr) / sizeof(arr[0]);
    //for(int i = 0; i < size; i++) {
    //    cout << arr2[i];
    //}
    const int n = 100;
    int a = 0; 
    int arr[n] = {};
    int i = 0;
    cin >> a;


    int size = sizeof(arr) / sizeof(arr[0]);

    for (int j = 0; j < size; j++) {
        arr[j] = -10;
    }

    while (a > 0) {
        arr[i] =  a % 10;
        a /= 10;
        i += 1;
    }

    for (int j = 0; j < i; j++) {
        //if (arr[j] < 0) {
        //    break;
        //}
        cout << arr[j] << endl;

    }


    return 0;


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
