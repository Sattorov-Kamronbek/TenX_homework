#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float a, b, c, x1, x2, d;
    cout << "A ga son kiriting :";cin >>a;
    cout << "B ga son kiriting :"; cin >> b;
    cout << "C ga son kiriting :"; cin >> c;
    d = pow(b,2)-4*a*b ;
    if( d > 0 ){
        x1 = ( -b + d )/2*a;
        x2 = ( -b - d )/2*a;
        cout << "X1 = " << x1 ;
        cout << "X2 = " << x2 ;
    }
    if( d == 0 ){
        x1 = -b/2*a;
        cout << "x1 = x2 = " << x1;
    }
    if ( d < 0 ){
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
        cout << "Yechimga ega emas\n";
    }

    return 0;
}
