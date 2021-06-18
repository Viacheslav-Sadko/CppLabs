#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char* str = new char[255];
  int size,count=0;
  cout<<"Рядок: ";  
  cin.get(str,255);
  size=strlen(str);
  for(int i=0;i<size;i++)
  {
    if((int)str[i]>64&&(int)str[i]<95)
    {
      str[i]=(int)str[i]+32;
      count++;
    }
  }
  cout<<"Результат перетворень: "<<str;
  cout<<endl;
  cout<<"Кількість великих літер: "<<count<<endl;  
}
