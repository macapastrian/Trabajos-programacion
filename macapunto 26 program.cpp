#include<iostream>
using namespace std;

class Cnumber{
	private: 
	int pares;
	int impares;
	int n1;
	int n2;
	int n3;
	int mayor;
	int menor;
	int promedio;
	
	public:
		Cnumber(int n1, int n2, int n3, int p, int i, int ma, int me, int promedio);
		int calcularmay(int n1, int n2, int n3, int ma);
		int calcularmen(int n1, int n2, int n3, int me);
		float calcularprom(int n1, int n2, int n3, int promedio);
		int caclularpares(int n1, int n2, int n3, int p);
		int calcilarimpares(int n1, int n2, int n3, int i);
};

Cnumber::Cnumber(int n1, int n2, int n3, int p, int i, int ma, int me, int promedio){
	pares = p;
	impares = i;
	n1 = n1;
	n2 = n2;
	n3 = n3;
	mayor = ma;
	menor = me;
	promedio = promedio;
}

int Cnumber::calcularmay(int n1, int n2, int n3, int ma) {
    int mayor;
    
    if (n1 > n2 && n1 > n3) {
        mayor = n1;
    }
    else if (n2 > n1 && n2 > n3) {
        mayor = n2;
    }
    else {
        mayor = n3;
    }
    return mayor;
}

int Cnumber::calcularmen(int n1, int n2, int n3, int me) {
    int menor;
    
    if (n1 < n2 && n1 < n3) {
        menor = n1;
    }
    else if (n2 < n1 && n2 < n3) {
        menor = n2;
    }
    else {
        menor = n3;
    }
    return menor;
}


float Cnumber::calcularprom(int n1, int n2, int n3, int promedio){
	float promedio1;
	
	promedio1 = n1 + n2 + n3 / 3.0;
	
	return promedio1;
}

int Cnumber::caclularpares(int n1, int n2, int n3, int p){
	int par = 0;
	
	if( n1 % 2 == 0){
		par = par + 1;}
	
	if( n2 % 2 == 0){
		par = par + 1;}
	
	if( n3 % 2 == 0){
	    par = par + 1;}
	    
	return par;
}

int Cnumber::calcilarimpares(int n1, int n2, int n3, int i){
	int impar = 0;
	
	if( n1 % 2 != 0){
		impar = impar + 1;}
		
	if ( n2 % 2 != 0){
		impar = impar + 1;}
	
	if( n3 % 2 != 0){
		impar = impar + 1;}		
	
	return impar;
}

int main(){
	int n1 = 3;
	int n2 = 6;
	int n3 = 8;
	float promedio;
	int mayor;
	int menor;
	int par;
	int impar;
	
	Cnumber formas(n1, n2, n3, impar, par, menor, mayor, promedio);
	
	promedio = formas.calcularprom(n1, n2, n3, promedio);
	mayor = formas.calcularmay(n1, n2, n3, mayor);
	menor = formas.calcularmen(n1, n2, n3, menor);
	par = formas.caclularpares(n1, n2, n3, par);
	impar = formas.calcilarimpares(n1, n2, n3, impar);
		
	cout<<"Promedio:"<<promedio<<endl;
	cout<<"Mayor:"<<mayor<<endl;
	cout<<"Menor:"<<menor<<endl;
	cout<<"Pares:"<<par<<endl;
	cout<<"impar"<<impar<<endl;
	
	return 0;
}


