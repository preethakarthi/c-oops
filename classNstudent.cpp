
#include<iostream>
using namespace std;
class studentinfo
{
 private:
    int regno;
    char name[56];
    int year;
 public:
    void getdata(void);
    void putdata(void);
};
int main()
{
    studentinfo s[60];
    int i,n;
    cout<<"enter no of student";
    cin>>n;
    cout<<"\nSTUDENT ENTRY";
    for(i=0;i<n;i++)
    {
        cout<<"\nenter detail of student"<<i+1;
        s[i].getdata();
    }
    cout<<"\nSTUDENT DETAILS";
    for(i=0;i<n;i++)
    {
        cout<<"\ndetail of student"<<i+1;
        s[i].putdata();
    }
 return 0;
}
void studentinfo::getdata(void)
{
    cout<<"\nenter regno,name,year of student";
    cin>>regno>>name>>year;
}
void studentinfo::putdata(void)
{
    cout<<"\nRegno\t"<<regno<<"\nName\t"<<name<<"\nyear\t"<<year;
}
