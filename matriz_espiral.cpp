#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int filas, columnas, iniciofila, iniciocolum, finalfila, finalcolum, cont=1;
	cin >> filas >> columnas;
	int matriz[filas][columnas];
	
	iniciofila = 0;
	iniciocolum = 0;
	finalfila = filas - 1; 
	finalcolum = columnas -1;
	
	if( (filas >= 1 && filas <=100) && (columnas >= 1 && columnas <= 100) ){

		while(iniciofila <= finalfila && iniciocolum <= finalcolum){
			
			if(filas == 1){
				for(int i=0; i<=finalcolum; i++){
					matriz[iniciofila][i] = cont;
					cont++;
				}
				break;
			}else{
					
				for(int i=iniciocolum; i<=finalcolum; i++){
					matriz[iniciofila][i] = cont;
					cont++;
				}
	
				for(int i=iniciofila+1; i<=finalfila; i++){
					matriz[i][finalcolum] = cont;
					cont++;
				}
		
				for(int i=finalcolum-1; i>=iniciocolum; i--){
					matriz[finalfila][i] = cont;
					cont++;
				}

				for(int i=finalfila-1; i>=iniciofila+1; i--){
					matriz[i][iniciocolum] = cont;
					cont++;
				}
					
				iniciofila++;
				iniciocolum++;
				finalfila--;
				finalcolum--;
			}

		}
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				cout << left << setw(4) << matriz[i][j];
			}
			cout << endl;
		}
	}
}


