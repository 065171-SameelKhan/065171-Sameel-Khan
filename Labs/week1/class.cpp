#include<iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    void introduction()
    {
        cout<<"hi i am: "<< name <<"and i am: "<< age <<"years old"<<endl;
    };
};
int main()
{
    person person1;
    person1.age=20;
    person1.name="usman";
    person person2;
    person2.age=30;
    person2.name="ali";
    person1.introduction();
    person2.introduction();
return 0;
}