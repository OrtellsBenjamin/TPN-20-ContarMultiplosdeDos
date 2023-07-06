#include <bits/stdc++.h>

using namespace std;

vector<int> GenerarVector(vector<int> V, int n);
int ContarMultiplosdeDos(vector<int> V);
void MostrarVector(vector<int> V);

int main() {
    int n = 100;
    vector<int> V;
    
    V = GenerarVector(V, n);
    
    MostrarVector(V);
    
    int contar = ContarMultiplosdeDos(V);
    
    cout << "Los múltiplos de 2 en el vector son: " << contar << endl;
    
    return 0;
}

vector<int> GenerarVector(vector<int> V, int n) {
    srand(time(NULL));
    int e;
    for (int i = 0; i < n; i++) {
        e = rand() % 150;
        V.push_back(e);
    }
    return V;
}

int ContarMultiplosdeDos(vector<int> V) {
    int contador = 0;
    for (int i = 0; i < V.size(); i++) {
        if (V[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}

void MostrarVector(vector<int> V) {
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << "/";
    }
    cout << endl;
}





