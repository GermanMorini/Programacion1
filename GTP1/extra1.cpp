#include<iostream>
#include<cmath>
#include<time.h>
#include<unistd.h>

using namespace std;

void set_seed() __attribute__((constructor));
void set_seed() { srand(time(NULL)); }

// Variables globales
int count = 0, n, r1, r2, r3;

void randomize() {
        r1 = rand()%2;
        r2 = rand()%2;
        r3 = rand()%2;
}

int get_result() {
        return (r1+r2+r3) >= 2;
}

void print_results(int n) {
        cout << "J K M" << endl << "-----" << endl;

        do {
                randomize();
                cout << r1 << " " << r2 << " " << r3 << endl;
                count += get_result();
                n--;
        }
        while(n > 0);

        cout << "La cantidad de problemas resueltos es: " << count << endl;
}

int main() {
        cout << "Ingrese la cantidad de problemas a resolver: ";
        cin >> n;

        cout << "La votación comenzó..." << endl;
        sleep(3);
        
        cout << "Los resultados son: " << endl;
        print_results(n);

        return 0;
}