//Programa que sume los primero N números naturales
//Athziri Zúñiga Méndez
//24-Octubre-2017
#include <iostream>
using namespace std;
int main()
{
  int N;
  int sum=0;
  cout<<"dame un número natural "<<endl;
  cin>>N;
  for(int i=1; i<=N; i++)
    {
      sum=sum+i;
	}
  cout<<"La suma es "<<sum<<endl;
  return 0;
}

