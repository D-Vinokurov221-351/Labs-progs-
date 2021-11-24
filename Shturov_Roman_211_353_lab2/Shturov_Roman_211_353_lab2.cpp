#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int trio()
{    
    int i;
    cin >> i, "\n";
    int c = 0;
    int count = 1;
    int r = 0;
    while( r != i+1)
        if (c != count)
        {
            cout << c;
            c+=1;
        }
        else
        {
            cout << "\n";
            r = c;
            count += 1;
            c = 0;
        }

    return 0;
}
int cord()
{
    double coord;        
    cin >> coord;
    double count = 0, count1 = 0;
    while (coord != 0)
        if (coord != 0)
        {
            count += 1;
            count1 += coord;
            cin >> coord;
        }

    cout << count1 / count << endl;
    return 0;
}
int Binom()
{
    int n, k;
    cin >> n;
    cin >> k;
    double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    cout << res + 0.01 << endl;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int choise;
    while (true)
    {
        std::cout << "Что вы хотите выполнить?" "\n" << "1. задание 1" "\n" << "2. задание 2" "\n" << "3. задание 3" "\n" << "4. выход" "\n";
        cin >> choise;
        switch (choise)
        {
        case 1:
            trio();
            break;
        case 2:
            Binom();
            break;
        case 3:
            cord();
            break;
        case 4:
            cout << "Всего хорошего";

        default:
            break;
        }
    }
}
