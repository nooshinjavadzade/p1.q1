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
void behine(string x[200][200],int i, int k , char y){
   int m = 0;
   while (x[i][k][m]== ' ')
   {
      m++;
   }
   if (x[i][k][m]== y)
   {
      cout<<x[i][k]<<endl;
   }
}
struct str {
    string x;
    int length;
};
void length_sort1(string sorted[100], string in[200][200],int k) {
    str reshte[10];
    for (int i = 0; i < 10; i++) {
        if (!in[k][i].empty()) {
            reshte[i].x = in[k][i];
            int count = 0;
            for (int j = 0; j < reshte[i].x.length(); j++) {
                if (reshte[i].x[j] == ' ') {
                    count++;
                }
            }
            reshte[i].length = reshte[i].x.length() - count;
        }
    }
    int index = 0;
    for (int i = 1; i <= 20; i++) {
        for (int m = 0; m < 10; m++) {
            int s =0;
            while (reshte[m].x[s]==' ')
            {
                s++;
            }
            if (!reshte[m].x.empty() && reshte[m].length == i && isupper(reshte[m].x[s])) {
                sorted[index] = reshte[m].x;
                index++;
            }
        }
    }
}
void length_sort2(string sorted[100], string in[200][200],int k) {
    str reshte[10];
    for (int i = 0; i < 10; i++) {
        if (!in[k][i].empty()) {
            reshte[i].x = in[k][i];
            int count = 0;
            for (int j = 0; j < reshte[i].x.length(); j++) {
                if (reshte[i].x[j] == ' ') {
                    count++;
                }
            }
            reshte[i].length = reshte[i].x.length() - count;
        }
    }
    int index = 0;
    for (int i = 1; i <= 20; i++) {
        for (int m = 0; m < 10; m++) {
            int s =0;
            while (reshte[m].x[s]==' ')
            {
                s++;
            }
            if (!reshte[m].x.empty() && reshte[m].length == i && islower(reshte[m].x[s])) {
                sorted[index] = reshte[m].x;
                index++;
            }
        }
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
            behine(sort_shode,i,j,'_');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            behine(sort_shode,i,j,'-');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            behine(sort_shode,i,j,'!');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            behine(sort_shode,i,j,'@');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            behine(sort_shode,i,j,')');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            behine(sort_shode,i,j,'(');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      for (int j = 0; j < size+1; j++)
      {
         if (!sort_shode[i][j].empty())
         {
            behine(sort_shode,i,j,'%');
            
         }
         
      }
      
   }
   for (int i = 97; i < 123; i++)
   {
      string captal_sort[50];
      length_sort1(captal_sort,sort_shode,i);
      for (int m = 0; m < size; m++) {
        if (!captal_sort[m].empty()) {
            cout << captal_sort[m] << endl;
        }
    }
   }
   for (int i = 97; i < 123; i++)
   {
      string small_sort[50];
      length_sort2(small_sort , sort_shode , i);
      for (int j = 0; j < size; j++)
      {
         if (!small_sort[j].empty())
         {
            cout << small_sort[j]<<endl;
         }
         
      }
   }
   
   
   return 0;
}