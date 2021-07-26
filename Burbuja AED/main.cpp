#include <iostream>
using namespace std;
//PASO 1
void burbuja(int a[], int n);



// PASO 3
int main(void){
    int a[6]={1,5,8,2,9,4};
    burbuja(a,6);
    for (int i=0;i<6;i++){
        cout<<"["<< a  [i] <<"]";
        }
}

//PASO 2
void burbuja(int a[], int n)
{
    int m = n-1;
    bool cambio= true;
    while (cambio)
    {
      cambio= false;
      for (int i= 0; i<m; i++)
      {

        if (a[i]>a[i+1])
        {
          // intercambiar
          int aux= a[i];
          a[i]= a[i+1];
          a[i+1]= aux;
          cambio= true;
        }
      }
      m--;
    }
  }
