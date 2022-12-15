#include <iostream>
#include <sstream> 
#include "Windows.h"
using namespace std;
void Count()
{
    int num;
    cout << "Ведіть число ";
    cin >> num;
    ostringstream os;
    os << num;
    cout << endl << "Кількість цифр: " << os.str().size();
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Count();
    system("pause");
    return 0;
}