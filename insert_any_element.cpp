#include <iostream>
using namespace std;
class InsertFirst
{
public:
    void insert()
    {
        int n;
        cout << "Enter the array size : ";
        cin >> n;
        int arr[n];
        cout << endl
             << "Enter the array elements : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a, s;
        cout << endl
             << "Enter the position : ";
        cin >> a;
        if (a < 0 || a > n)
        {
            cout << endl
                 << "Invalid position!.";
        }
        else
        {
            cout << endl
                 << "Enter the number that you want to insert : ";
            cin >> s;
            for (int i = n; i >= a; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[a] = s;
            //  n++;
            cout << endl
                 << "After insert the array element are : ";
            for (int i = 0; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};
int main()
{
    InsertFirst aa;
    aa.insert();
    return 0;
}