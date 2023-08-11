#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> GenerarVector(vector<int>& V, int N);
void MostrarVector(vector<int>& V);
vector<int> SumarVector(vector<int>& V);

int main() {
    vector<int> A, C;
    A = GenerarVector(A, 30);
    MostrarVector(A);
    C = SumarVector(A); 
    MostrarVector(C); 

    return 0;
}

vector<int> GenerarVector(vector<int>& V, int N) {
    srand(time(NULL));
    int e, i;
    for (i = 0; i < N; i++) {
        e = rand() % 30;
        V.push_back(e);
    }
    return V;
}

vector<int> SumarVector(vector<int>& V) { 
    vector<int> vectorAcumulado;
    int acumulado = 0;
    for (int i = 0; i < V.size(); i++) { 
        acumulado += V[i];
        vectorAcumulado.push_back(acumulado);
    }
    return vectorAcumulado;
}

void MostrarVector(vector<int>& V) {
    int i;
    for (i = 0; i < V.size(); i++) {
        cout << V[i] << "/";
    }
    cout << endl;
}

