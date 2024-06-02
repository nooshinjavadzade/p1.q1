#include <iostream>
#include <string>
#include <string.h>
using namespace std;
bool x(string input[100], int i, int k) {
    while (input[i][k] == ' ' || input[i][k] == '_' || input[i][k] == '-' || input[i][k] == '!' || input[i][k] == '@' || input[i][k] == ')' || input[i][k] == '(' || input[i][k] == '%' || (input[i][k] < 58 && input[i][k] > 47)) {
        return false;
    }
    return true;
}

void sort(string arr[200][200], string input[100], int size) {
   int index2 = 0;
    for (int i = 0; i < size; i++) {
        int k = 0;
        while (!x(input, i, k)) {
            k++;
        }

        char firstChar = tolower(input[i][k]);
        for (int j = 97; j < 123; j++) {
            if (j == firstChar) {
               arr[j][index2] = input[i];
               index2++;
            }
        }
    }
}
void chap_first(string alephba[200][200],int i,int k){
   int m = 0;
   while (alephba[i][k][m]== ' ')
   {
      m++;
   }
   if (alephba[i][k][m]== '_')
   {
      cout<<alephba[i][k]<<endl;
   }
}
int main(){
   int size;
   string input[100];
   scanf("%d",&size);
   for (int i = 0; i < size+1; i++)
   {
      getline(cin ,input[i]);
   }
   string sort_shode[200][200];
   sort(sort_shode , input , size+1);
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            chap_first(sort_shode,i,j);
         }
         
      }
      
   }
   
   return 0;
}