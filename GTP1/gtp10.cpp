#include<iostream>
#include<cmath>

using namespace std;

// int sum(int n) {
//         if(n != 0) {
//                 return n%10 + sum(floor(n/10));
//         } else {
//                 return 0;
//         }
// }

int sum(int n) {
        int sum = 0;

        while(n != 0) {
                sum += n%10;
                n = trunc(n/10);
        }

        return sum;
}

int main() {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        cout << "La sumatoria de sus digitos es: " << sum(n) << endl;

        return 0;
}
