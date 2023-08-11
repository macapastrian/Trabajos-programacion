#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> GenerarVec(int N);
vector<int> SumarVec(const vector<int>& V);
void MostrarVec(const vector<int>& V);

int main() {
    vector<int> M, K;
    M = GenerarVec(6);

    MostrarVec(M);

    K = SumarVec(M);
    MostrarVec(K);

    return 0;
}

vector<int> GenerarVec(int N) {
    srand(time(NULL));
    vector<int> V;
    int e;
    for (int i = 0; i < N; i++) {
        e = rand() % 30;
        V.push_back(e);
    }
    return V;
}

void MostrarVec(const vector<int>& V) {
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << "/";
    }
    cout << endl;
}

vector<int> SumarVec(const vector<int>& V) {
    vector<int> K;
    int suma = 0;
    for (int i = 0; i < V.size(); i++) {
        suma += V[i];
    }
    K.push_back(suma);
    return K;
}

