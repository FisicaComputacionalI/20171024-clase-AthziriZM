//Programa que te dice si un numero es primo
//Athziri Zúñiga Méndez
//24-Octubre-2017
#include <iostream>
using namespace std;
int main()
{
  long N=12;
  long flag=0;
  long divisor=0;
  cout<<"inserte un número "<<endl;
  cin>>N;
  for(long i=2; i<N/2; i++)
   {    
     if(N%i==0){
       flag=1;
       divisor=i;
       break;
     }
   }
  if(flag==1){
    cout<<"Tú número NO es primo "<<endl;
    cout<<"porque se divide entre "<<divisor<<endl;
  }
 else
   cout<<"Tú número es primo "<<endl;
 return 0;
}
// El número 23657 no es primo porque se divide entre 41.
// El número 12345678901 no es primo porque es divisible entre 857.
