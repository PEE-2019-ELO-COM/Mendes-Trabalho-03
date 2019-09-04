#include <iostream>
using namespace std;

int main(){
int i,j;
float notas[10], pesos[9];
float mediave=0, media=0;
cout << "\t\tCalculo da nota necessaria para VF\n\n";
cout << "Nota da VC:";
cin >> notas[0];
cout << "\n" << "Quantas VE's foram realizadas:";
cin >> i;
cout << "\n\n";
cout << "Coloque o peso como sendo um valor de 0 a 1\n\n";

for(j=1;j<=i;j++){
    cout << "Nota da VE " << j <<":";
    cin >> notas[j];
    cout << "Peso da VE "<<j<<":";    ///Calcula média de VE
    cin >> pesos[j-1];
    mediave+=notas[j]*pesos[j-1];
    cout <<"\n\n";
}
media=notas[0]+mediave;

if(media>=12){
   cout << "A nota necessaria na VF e 4\n\n";
}
else{
    cout <<"A nota necessaria na VF e "<<(20-media)/2<<"\n\n";
}

return 0;
}
