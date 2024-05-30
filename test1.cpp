#include <iostream>
#include <string>
#include <string.h>
#include <random>
using namespace std;
void sort(string alephba[25][10],string input[],int size, int aski1, int aski2){
   int j =0;
   for (int i = 0; i < size; i++)
   {
      int k=0;
      while (input[i][k]==' ')
      {
         k++;
      }
      if(input[i][k] == aski1 || input[i][k]==aski2){
         alephba[aski1-65][j];
         j++;
      }
   }
}
int main(){
   string x[25][10];
   x[0][0]="hi babe";
   if (x[0][0].empty())
   {
      cout << 1;
   }
   else
   {
      cout << 0;
   }
   
   
   /*for (int i = 0; i < 4; i++)
   {
      
   }*/
   
   
   return 0;
}