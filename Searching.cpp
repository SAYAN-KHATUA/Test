#include<iostream>
using namespace std;
class Searching
{
    public:
    void search()
    {
        int n;
        cout<<"Enter the array size : ";
        cin>>n;
        int arr[n];
        cout<<endl<<"Enter the array elements....."<<endl;
        for (int i = 0; i < n; i++)
        {
           cout<<endl<<"Enter the "<<i+1<<" element : ";
           cin>>arr[i];
        }
        cout<<endl<<"Enter the searching element that you want : ";
        int s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
           if (s == arr[i])
           {
                cout<<endl<<"The item is found.";
                return;
           }
            
          
        }
        cout<<endl<<"The item is not found.";
        
    }

};
int main()
{
    Searching ss;
    ss.search();
    return 0;
}