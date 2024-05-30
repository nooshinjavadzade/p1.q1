#include <iostream>
#include <string>
#include <string.h>
#include <random>
using namespace std;


int main(){
   int size;
   string input[100];
   scanf("%d\n",&size);
   for (int i = 0; i < size; i++)
   {
      getline(cin ,input[i]);
   }

   
   return 0;
}