#include<iostream>
using namespace std;
int main()
{
    int number[5];
    number[0]=10;
    number[1]=20;
    number[2]=30;
    number[3]=40;
    number[4]=50;
    for(int i=0;i<5;i++)
    {
        cout<<"element at index:"<<i<<"is"<<number[i]<<endl;
    }
    return 0;
}