#include <iostream>

using namespace std;

int liczbauczniow, liczbacukierkow,x,y;

int main()
{
    cout << "Podaj liczbe uczniow:";
    cin >> liczbauczniow ;

    cout << "Podaj liczbe cukierkow:";
    cin >> liczbacukierkow ;

        x = liczbacukierkow/(liczbauczniow-1);
    cout << endl;
    cout << "Daj "<<x <<" cukierkow dla kazdego ucznia"<<endl;
        y = liczbacukierkow- ((liczbauczniow-1)*x) ;
    cout <<endl;
    cout << "Zostanie Ci "<<y <<" cukierkow" <<endl;
    return 0;
}
