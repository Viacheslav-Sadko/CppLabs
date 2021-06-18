#include <iostream>
#include<string.h>
#include <iomanip> 
using namespace std;
struct struct_first
{
	string Name;
	string group;
	struct {string math;string physic;string english;}atestation;
}students[10]={
{"Добровольский Андрій Сергійович ", "ДС-01", {"n/a", "n/a", "n/a"}},
{"Базилевич Віктор Андрійович     ", "ДА-01", {"n/a", "a", "n/a"}}, 
{"Марченко Вікторія Сергіївна     ", "ДС-01", {"a", "a", "a"}},
{"Сергієнко Володимр Володиморович", "ДС-01", {"n/a", "a", "n/a"}},
{"Білл Гейтс Вячеславович         ", "ДВ-01", {"a", "a", "a"}},
{"Гончарук Олексій Максимович     ", "ДС-01", {"n/a", "n/a", "n/a"}},
{"Чубашов Максим Григорович       ", "ДС-01", {"a", "n/a", "n/a"}},
{"Петросян Лі Робертович          ", "ДЕ-01", {"n/a", "n/a", "n/a"}},
{"Косий Стас Олександрович        ", "ДЕ-01", {"a", "n/a", "n/a"}}};
void printinf(struct_first *students)
{
		int i;
		for(i=0;i<9;i++)
		{int num=i+1;
		cout<<num<<". "<<students[i].Name<<setw(8)
		<<students[i].group<<setw(6)<<
		students[i].atestation.math<<setw(7)<<
		students[i].atestation.physic<<setw(7)<<
		students[i].atestation.english<<endl;
		}
}
void search(struct_first *students)
{int c=0;
for(int j=0;j<11;j++)
	{
		if(students[j].atestation.math =="n/a" && 
			students[j].atestation.physic =="n/a" && 
			students[j].atestation.english=="n/a")
			{
			cout<<"  "<<students[j].Name<< endl;
				c+=j;
			}
	}
	if(c==0)
	{
		cout<<"Таких немає.";
	}

}
void make_struct(struct_first *students)
{
	for(int i=0; i <11;i++)
	{
		
			cin>>students[i].Name
		>>students[i].group>>
		students[i].atestation.math>>
		students[i].atestation.physic>>
		students[i].atestation.english;
		
	}
}
int main()
{
/*struct_first *students = new struct_first[11];
make_struct(students);*/
cout<<setw(24)<<"П.І.Б."<<setw(25)<<"Група"<<setw(8)<<
"Math"<<setw(7)<<"Physic"<<setw(8)<<"English"<<endl;
printinf(students);
cout<<"Три неатестації: \n";
search(students);
}
