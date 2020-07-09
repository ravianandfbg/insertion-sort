#include<iostream>
using namespace std;
int main()
{
    int n,i,a[30],temp,j;
    cout<<"Enter the number of an array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of an array: "<<endl;
    for(i=0;i<=n-1;i++)
        cin>>a[i];
        cout<<"Elements of an array before sorting: "<<endl;
        for(i=0;i<=n-1;i++)
            cout<<a[i]<<endl;

    //Insertion sort
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
     cout<<"Elements of an array after sorting: "<<endl;
     for(i=0;i<=n-1;i++)
        cout<<a[i]<<endl;
}
