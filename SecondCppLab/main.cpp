/*/*Sadko Viacheslav*/
#include <iostream>
using namespace std;
void first_figure()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
        if (i < 4)
            {
                if (j < 4)
                {
                    cout << " ";
                }
                if ((j - (i + 1)) > 0)
                {
                    cout << "*";
                }
            }   
        }                           
    cout<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
        
      for (int j = 4; j >= 0; j--)
        {
          if ((j-i)>0)
            {
              cout << " ";
            }
            else
            {
                cout<<"*";
            }
        }
    cout << endl;
    }
}
void second_figure()
{
    for (int i=0; i < 8; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if((i-j)<0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
    void third_figure()
    {
        for (int i=0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if((i-j)<0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        } 
    }
    void fourth_figure()
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 8; j >= 0; j--)
            {
              if ((j-i)>0)
                {
                  cout << "*";
                }
                else
                {
                    cout<<" ";
                }
           
            }
        cout<<endl;
        }
    }
    void fifth_figure()
    {
      for (int i = 0; i < 8; i++)
        {
            for (int j = 8; j >= 0; j--)
            {
              if ((j-i)>0)
                {
                  cout << " ";
                }
                else
                {
                    cout<<"*";
                }
            }  
            cout<<endl;
        }
    }
    void sixth_figure()
    {
        for(int i=0; i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if((j==0||j==8)||(i==0||i==8))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void seventh_figure()
    {
        for(int i=0; i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if((j==0||j==8)||(i==0||i==8)||(j==i))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
          }
            cout<<endl;
        }
    }
    void eight_figure()
    {
        for(int i=0; i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if((j==0||j==8)||(i==0||i==8)||(((8-j)==i)))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
          }
            cout<<endl;}
    }
    void nineth_figure()
    {
        for(int i=0; i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if((j==0||j==8)||(i==0||i==8)||(((8-j)==i))||(j==i))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
          }
            cout<<endl;}
    }
    void tenth_figure()
    {
        for(int i=0; i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if((j==0||j==8)||(i==0||i==8)||(i==4||j==4))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
          }
            cout<<endl;}
    }
    void eleventh_figure()
    {
         for(int i=0; i<9;i++)
            {
            for(int j=0;j<9;j++)
            {
                if(((((8-j)==i))||(j==i)))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
            }
    }
    void twelwe_figure()
    {
        for(int i=0; i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if((i+4)==(j)||(i)==(j+4)||(4-j)==i||(12-i)==j)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
          }
            cout<<endl;
        }
    }
    void tirdth_figure()
    {
         for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((i == 3 || j == 3) || i == 1 && (j > 1 && j < 5) || i == 5 && (j > 1 && j < 5))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    }
    void fourtenth_figure()
    {
          for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if ((((7-j) == i) || (j-7 == i))||(j>5&& j < 9&&i==2)|| (j>3&&j<12&&i == 4))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    }
int main()
{ 
    int figure=0;
    while(figure<15)
    {
        cout<<"select figure: ";
        cin>>figure;
        switch (figure)
        {
            case 0:
            return 0;
            break;
            case 1:
            first_figure();
            break;
            case 2:
            second_figure();
            break;
            case 3:
            third_figure();
            break;
            case 4:
            fourth_figure();
            break;
            case 5:
            fifth_figure();
            break;
            case 6:
            sixth_figure();
            break;
            case 7:
            seventh_figure();
            break;
            case 8:
            eight_figure();
            break;
            case 9:
            nineth_figure();
            break;
            case 10:
            tenth_figure();
            break;
            case 11:
            eleventh_figure();
            break;
            case 12:
            twelwe_figure();
            break;
            case 13:
            tirdth_figure();
            break;
            case 14:
            fourtenth_figure();
            break;
            default:
            cout<<"Can`t find this figure"<<endl;
            break;
        }
    }
}
