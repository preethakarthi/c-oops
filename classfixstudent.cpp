
#include<iostream>
using namespace std;
class student
{
  private:
    int  regno;
    char  name[46];
    int  year;
  public:
    void getdata()
    {
        cout<<"\nenter regno,name,year";
        cin>>regno>>name>>year;
    }
    void putdata()
    {
       cout<<"\nregno\t"<<regno<<"\nname\t"<<name<<"\nyear\t"<<year;
    }
};
int main()
{
    class student s,s1,s2;
    cout<<"enter detail of student1";
    s.getdata();
    cout<<"\nenter detail of student2";
    s1.getdata();
     cout<<"\nenter detail of student3";
    s2.getdata();
    cout<<"\ndetail of students1";
    s.putdata();

    cout<<"\ndetail of student2";
    s1.putdata();

    cout<<"\ndetail of student3";
    s2.putdata();
 return 0;
}
