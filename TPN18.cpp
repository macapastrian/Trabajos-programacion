#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> GenerarVector(vector<int>& A, int N);
void MostrarVector(vector<int>& V);
vector<int> ExtraerPares(vector<int>& A);

int main() {
    vector<int> A,C;
    A = GenerarVector(A, 10);
    MostrarVector(A);
    C = ExtraerPares(A);
    MostrarVector(C);
    return 0;
}
    
vector<int> GenerarVector(vector<int>& A, int N){
    srand(time(NULL));
    int e, i;
    for (i = 0; i < N; i++) {
        e = rand() % 100;
        A.push_back(e);
    }
    return A;
	}


void MostrarVector(vector<int>& V) {
    int i;
    for (i = 0; i < V.size(); i++) {
        cout << V[i] << "/";
    }
    cout << endl;
}

vector<int> ExtraerPares(vector<int>& A) {
    int i;
    vector<int> C;
    for (i = 0; i < A.size(); i++) {
       if(A[i] % 2 == 0){
       	 C.push_back(A[i]);
	   }
       
    }
    return C;
}
