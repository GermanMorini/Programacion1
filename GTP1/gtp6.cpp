#include<iostream>
#include<cmath>

using namespace std;

void convert(int &h, int &m, int &s) {
        m += floor(s/60);
        s -= 60*floor(s/60);

        h += floor(m/60);
        m -= 60*floor(m/60);
}

int main(int argc, char *argv[]) {
        int h, m, s;

        cout << "Ingrese las horas: ";
        cin >> h;
        cout << "Ingrese los minutos: ";
        cin >> m;
        cout << "Ingrese los segundos: ";
        cin >> s;

        convert(h, m, s);

        cout << "El resultado es: " << h << ":" << m << ":" << s << endl;
        
	return 0;
}
