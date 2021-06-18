#include <iostream>
#include <cstdlib> 
using namespace std;
int search_max(int max, int* res, int n, int k);
int search_min(int min, int* res, int n, int l);
void output(int** matrix, int n);
int main()
{
int n,c=0, count=0, k=0,l=0, m;
cout<<"Порядок матриці: ";
cin>>n;
cout<<endl;
int **matrix=new int* [n];
  for(int i=0; i<n;i++)
    {
      matrix[i]=new int[n];
    }
int *res=new int [n];
srand(time(NULL));
  for(int i=0; i<n;i++){
    for(int j=0;j<n;j++){
      matrix[i][j]=-2+rand() % 3;
      }
  }
cout<<"Вихідний масив: "<<endl<<endl;
output(matrix, n);
  for(int j=0; j<n;j++){
    for(int i=0;i<n;i++){
    if(matrix[i][j]==0)
      {
        count++;
      }
    }
    res[j]=count;
    count=0;
  }
int min = res[0],max=0; 
k=search_max(max,res, n, k);
l=search_min(min,res, n, l);
cout<<endl<<"Найбільша кількість ненульових елементів у "<<l+1<<" стовпчику."<<endl;
  cout<<"Введіть число, яке потрібно додати: ";
  cin>>m;
  cout<<endl;
  for(int i=0;i<n;i++){
    matrix[i][l]+=m;
  }
cout<<endl<<"Новий масив: "<<endl<<endl;
  for(int i=0; i<n;i++){
      for(int j=0;j<n;j++){
      cout<<matrix[i][j]<<"\t";
    }
  cout<<endl;
  }
cout<<endl;
  for(int i=0; i<n; i++){
    delete [] matrix[i];
  }
  delete [] res;
}
void output(int **matrix, int n)
{
  for(int i=0; i<n;i++){
      for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<"\t";
      }
    cout<<endl;
   }
}
int search_max(int max, int* res, int n, int k)
{
  for (int i = 0; i < n; ++i) {
    if (res[i] > max) {
              max = res[i];
              k = i ;
          }
    }
    return k;
}
int search_min(int min, int* res, int n, int l)
{
  for (int i = 0; i < n; i++) {
    if (min > res[i] )
    {
      min = res[i];
      l = i;
    }
  
  }
  return l;
}
