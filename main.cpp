#include <bits/stdc++.h>

using namespace std;

int main()
{
    double rs, rps, rgc, gm, ge, isa, ise, ic;
    cout << fixed << setprecision(2);

    //Pt. 1: Leitura dos calculos
    cout << "Renda anual com sal�rio: ";
    cin >> rs;
    cout << "Renda anual com presta��o de servi�o: ";
    cin >> rps;
    cout << "Renda anual com ganho de capital: ";
    cin >> rgc;
    cout << "Gastos m�dicos: ";
    cin >> gm;
    cout << "Gastos educacionais: ";
    cin >> ge;

    //Pt. 2: Consolidado de renda
    rs = rs/12;
    if (rs<3000.00)
    {
        isa = 0.00;
    }
    else if (rs>=3000.00&&rs<5000.00)
    {
        isa = rs*0.10;
    }
    else if (rs>=5000.00)
    {
        isa = rs*0.20;
    }
    isa = isa*12;
    ise = rps*0.15;
    ic = rgc*0.20;

    return 0;
}
