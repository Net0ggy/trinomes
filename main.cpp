#include <iostream>
#include "input.h"
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;

getValue1(a);
getValue2(b);
getValue3(c);

if (a == 0)
{
    cout << "Ce n'est pas un trinome " << "\n";
    return 1;
}



double discriminant = b*b - (4*a*c);
double racine = sqrt(discriminant);


if (discriminant > 0)
{
    cout << "Deux solution réelles distinctes" << "\n";
    cout << "x1 = " << (-b + racine)/(2*a) << "\n";
    cout << "x2 = " << (-b - racine)/(2*a) << "\n";
}  
else if (discriminant == 0)
{
  cout << "Une solution réelle: " << "\n";
  cout << "x= " << -b/(2*a) << "\n";
}


else
{
    double partieReelle = -b / (2 * a);
    double partieImaginaire = sqrt(-discriminant) / (2 * a);
    cout << "Pas de solution réelle, solutions complexes :" << endl;
    cout << "x1 = " << partieReelle << " + " << partieImaginaire << "i" << endl;
    cout << "x2 = " << partieReelle << " - " << partieImaginaire << "i" << endl;
}

return 0;
}