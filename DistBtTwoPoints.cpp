#include<iostream>
#include<math.h>
using namespace std;

int dist(int,int,int,int);

int main()
{
    int iNo1,iNo2,iNo1_1,iNO2_1;

    cout<<"Enter two Number First Point -1 : ";
    cin>>iNo1>>iNo2;

    cout<<"Enter two Number Second Point -2 : ";
    cin>>iNo1_1>>iNO2_1;

    int d = dist(iNo1,iNo2,iNo1_1,iNO2_1);

    cout<<"\nDistance Betweeen Two Points is : "<<d;

    return 0;
}

int dist(int x1,int y1,int y2,int x2)
{
    return (sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1),2))));
}