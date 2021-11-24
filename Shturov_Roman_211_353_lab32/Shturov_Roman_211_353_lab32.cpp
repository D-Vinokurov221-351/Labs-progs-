#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void task1(int *arr, int arr_size) {
    cout << "Введите массив ";
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
}

void task2(int *arr, int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void task3() {

}

int main()
{
    setlocale(LC_ALL, "Russian");
    int choise;
    int arr_size;
    cout << "Введите длину массива "; cin >> arr_size;
    int *arr = new int[arr_size];
    while (true)
    {
        std::cout << "Что вы хотите выполнить?" "\n" << "1. задание 1" "\n" << "2. задание 2" "\n" << "3. задание 3" "\n" << "4. выход" "\n";
        cin >> choise;
        
        switch (choise)
        {
        case 1:
            task1(arr,arr_size);
            break;
         case 2:
            task2(arr, arr_size);
            break;
        case 3:
            task3();
            break;
        case 4:
            cout << "Всего хорошего";
         default:
            break;
        }
    }
    delete[] arr;
    return 0;
}