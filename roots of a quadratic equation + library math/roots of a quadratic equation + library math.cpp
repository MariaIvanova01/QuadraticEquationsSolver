#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, determinant, root1, root2, realPart, ImaginaryPart;

    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;

    determinant = b * b - 4 * b * c;

    if (determinant > 0 )
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        cout << " root1 = " << root1 << " and root2 = " << root2 << endl;
    }
    else if (determinant == 0) // korena e edin i su6t
    {
        root1 = root2 = -b / (2 * a);

        cout << " root1 = root2 = " << root1 << endl;
    }
    else if (determinant < 0)
    {
        realPart = -b / (2 * a);
        ImaginaryPart = sqrt(-determinant) / (2 * a);

        cout << " root1 = " << realPart << "," << " root2 = " << ImaginaryPart << endl;
    }

    system("PAUSE");
    return 0;
}

