#include <bits/stdc++.h>

using namespace std;

int main()
{
    double rs, rps, rgc, gm, ge, isa, ise, ic, md, gd, b, a, d;
    cout << fixed << setprecision(2);

    //Pt. 1: Leitura dos calculos
    cout << "Renda anual com salário: ";
    cin >> rs;
    cout << "Renda anual com prestação de serviço: ";
    cin >> rps;
    cout << "Renda anual com ganho de capital: ";
    cin >> rgc;
    cout << "Gastos médicos: ";
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

    //Pt. 3: Deducoes
    gd = ge+gm;
    b = isa+ise+ic;
    md = b*0.30;

    if(b>gd)
    {
      a = gd;
    }
    else
    {
      a = md;
    }
    d = b-a;

    return 0;
}
