#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> GenerarVector(vector<int>& V, int N);
void MostrarVector(vector<int>& V);

int main() {
	int n;
	float c;
    vector<int> A;   
    cout<<"Ingrese la cantidad de elementos del vector"<<endl;
    cin>>n;
    A = GenerarVector(A, n);
    MostrarVector(A);
    c = PromedioVector(A);
    cout<<c;
    return 0;
}

vector<int> GenerarVector(vector<int>& V, int N) {
    srand(time(NULL));
    int e, i;
    for (i = 0; i < N; i++) {
        e = rand() % 32000;
        V.push_back(e);

    }
    return V;
}

void MostrarVector(vector<int>& V) {
    int i;
    for (i = 0; i < V.size(); i++) {
        cout << V[i] << "/";
    }
    cout << endl;
}

float PromedioVector(vector<int>& A){
	int i;
	float c;
	for(i=0;i<A.size();i++){
		c=c+A[i];
		c=c/A.size();
	}
	return c;

}


