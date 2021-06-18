#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
struct student
{
  string name;
  int year;
  int course;
  string group;
  int number_st_book;
  struct{int Math; int English; int PE; int IT; int Biology;}subject_mark;
};
struct node 
{
student inf_field; 
node *next; 
};
void slist_sort(node*& lst, bool (*cmp)(const node&, const node&));
void slist_add(node*& lst, string name,int year,int course,string group,int number_st_book, int Math, int English, int PE, int IT, int Biology);
void slist_clear(node*& lst);
void slist_print(const node* lst);
bool cmp_asc(const  node& a, const node& b){ return (a.inf_field.year < b.inf_field.year); }
bool cmp_desc(const node& a, const node& b){ return (a.inf_field.year > b.inf_field.year); }
 
int main(void){
	string name, group;
	int n,n1,year,course, number_st_book, Math, English, PE, IT, Biology;
    node* lst = NULL;
    slist_add(lst, "Sasha      ", 1998, 3, "DS-91", 2301, 3,4,5,4,3);
    slist_add(lst, "Stas       ", 2002, 2, "DS-81", 2302, 4,4,5,2,1);
    slist_add(lst, "Maks       ", 2001, 1, "DS-01", 3201, 3,4,5,2,1);
    slist_add(lst, "Viacheslav ", 1995, 6, "DS-51", 7331, 5,5,5,5,5);
    slist_add(lst, "Lena       ", 1999, 5, "DS-41", 2431, 3,4,5,3,4);
    slist_add(lst, "Oksana     ", 1999, 5, "DS-41", 2431, 3,4,5,3,4);
    slist_add(lst, "Alexey     ", 1999, 5, "DS-41", 2431, 3,4,5,3,4);
    cout<<endl;
    do{
    cout<<"1) Вивести список студентів\n2) Відсортувати за роком народження\n3) Додати нового студента\n4) Очистити список\n5)Вийти\n";
    cout<<endl;
    cin>>n;
    switch(n)
    {
    	case 1:
    	cout<<endl;
    	slist_print(lst);
    	cout<<endl;
    	break;
    	case 2:
    	cout<<"1) За зростанням\n2) За спаданням\n";
    	cin>>n1;
    	switch(n1){
    		case 1:
    		slist_sort(lst, &cmp_asc);
    		slist_print(lst);
    		cout<<endl;
    		break;
    		case 2:
    		slist_sort(lst, &cmp_desc);
    		slist_print(lst);
    		cout<<endl;
    		break;
    	}

    	break;
    	case 3:
    	cin>>name>>year>>course>>group>>number_st_book>>Math>>English>>PE>>IT>>Biology;
		slist_add(lst, name,year,course,group, number_st_book,Math, English,  PE, IT, Biology);
		cout<<endl;
		break;
		case 4:
		slist_clear(lst);
		cout<<endl;
		break;
		case 5:
		break;
		default:
		cout<<"Немає такого пункту\n";
		break;
    }
    }
	while(n!=5);
    return 0;
}

void slist_sort(node*& lst, bool (*cmp)(const node&, const node&)){
    node* a, *b, *p, *h = NULL;
    for(node* i = lst; i != NULL; ) {
        a = i;
        i = i->next;
        b = h;
        for(p = NULL; (b != NULL) && (*cmp)(*b, *a); ) {
            p = b;
            b = b->next;
        }
 
        if(p == NULL){
            a->next = h;
            h       = a;
        } else {
            a->next = b;
            p->next = a;
        }
    }
    if(h != NULL)
        lst = h;    
}

void slist_add(node*& lst, string name,int year,int course,string group,int number_st_book, int Math, int English, int PE, int IT, int Biology){
    node* p = new node();
    p-> inf_field.name   = name;
    p->inf_field.year   = year;
    p->inf_field.course   = course;
    p->inf_field.group    = group;
    p->inf_field.number_st_book    = number_st_book;
    p->inf_field.subject_mark.Math    = Math;
	p->inf_field.subject_mark.English    = English;
	p->inf_field.subject_mark.PE    = PE;
	p->inf_field.subject_mark.IT    = IT;
	p->inf_field.subject_mark.Biology    = Biology;
    p->next   = lst;
    lst = p;
}
 
void slist_clear(node*& lst){
    node* p;
    while(lst != NULL){
        p   = lst;
        lst = lst->next;
        delete p;
    }
}
 
void slist_print(const node* lst){
    cout<<setw(70)<<"Оцінки"<<endl;
    cout<<"Ім'я"<<setw(25)<<"Рік н-ння"<<setw(9)<<"Курс"<<setw(15)<<"Група"<<setw(12)<<"№ з.к."<<setw(20)<<"Математика-Англійська-Ф.В.-Інформатика-Біологія"<<endl;
    for(; lst != NULL; lst = lst->next)
        cout<<lst->inf_field.name<<"\t"<<lst->inf_field.year<<"\t"<<lst->inf_field.course<<"\t"
        <<lst->inf_field.group<<"\t"<<lst->inf_field.number_st_book<<"\t"<<lst->inf_field.subject_mark.Math
        <<"\t"<<lst->inf_field.subject_mark.English<<"\t"<<lst->inf_field.subject_mark.PE<<"\t"
        <<lst->inf_field.subject_mark.IT<<"\t"<<lst->inf_field.subject_mark.Biology<<endl;
}