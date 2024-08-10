#include<iostream>
using namespace std;
void display(int arr[])
{
    for(int i=0;i<5;i++)
    {
        cout<<"the score of student "<<i+1<<" is: "<<arr[i]<<endl;
    }
}
void average(int arr[])
{
    int avg=0;
    for(int i=0;i<5;i++)
    {
        avg+=arr[i];
    }
    avg=avg/5;
    cout<<"average is:"<<avg<<endl;
}
int main()
{
    cout<<"-------Score Tracker-------"<<endl;
    int score[5]={5,8,9,4,7};
    display(score);
    average(score);
}