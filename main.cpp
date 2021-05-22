#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 0, j = 1, cont = 0, sub = 2, cont2 = 0, defi = 0;
    while (cont2 == 0){
        if (defi == 0){
            while (cont < 3){
                cout << "I=" << i << " J=" << j <<endl;
                j++;
                cont++;
            }
            cont = 0;
            j = j - 3;
            defi = 1;
            if (i == 2){
                cont2 = 1;
            }
        }else{
            while (cont < 3){
                cout << "I=" << i << "." << sub << " J=" << j << "." << sub <<endl;
                j++;
                cont++;
            }
            cont = 0;
            j = j - 3;
            sub = sub + 2;
            if (sub == 10){
                sub = 2;
                i++;
                j++;
                defi = 0;
            }
        }
    }
    return 0;
}
