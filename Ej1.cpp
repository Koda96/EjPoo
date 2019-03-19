#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

clock_t clock(void);

template <class T> void imprimir ( T v[], int cantidad )  {
    for ( int i=0 ; i < cantidad ; i++ )
        cout << v[ i ] << " ";
}

float FloatRand( float MaxVal ){
	return ((float)rand()/((float)RAND_MAX+1.0))*MaxVal;
}

template <class O> void ordenar ( O v[], int cantidad )  {
    for (int i=0 ; i <= cantidad ; i++)
      {
         O aux=v[i];
         int pos=i;
         while ((pos>0)&&(v[pos-1]>aux))
              {
                                      v[pos]=v[pos-1];
                                      pos--;
              }
         v[pos]=aux;
      }
}

int main(){
	int cantidad=0;
	double tiempo1, dtiempo;
	tiempo1=(double) clock();
	tiempo1=tiempo1 / CLOCKS_PER_SEC;
	cout << "Ingrese la cantidad de numeros" << endl;
	cin >> cantidad;
    int* v1 = new int [cantidad];
    for(int i=0;i<cantidad;i++)
    	v1[i]=rand()%100+1;
    float* v2 = new float [cantidad];
	for(int i=0;i<cantidad;i++)
    	v2[i]=FloatRand(99);
    ordenar(v1,cantidad);
    ordenar(v2,cantidad);
    imprimir(v1,cantidad);
    cout << endl;
    imprimir(v2,cantidad);
    dtiempo=(((double) clock())/CLOCKS_PER_SEC)-tiempo1;
    cout << "\n\n\nTiempo de ejecucion: " << dtiempo << " segundos." << endl;
    return 0;
}
