#include <iostream>
using namespace std;
class Delete
{
public:
    void deleteItem()
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
        cout << endl
             << "Enter the position to delete a item : ";
        int pos;
        cin >> pos;
        if (pos < 0 || pos > n)
        {
            cout << endl
                 << "You enter a invalid position.";
        }
        else
        {
            for (int i = pos; i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
            cout << endl
                 << "After deleting a element the array is : ";
            for (int i = 0; i < n - 1; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};
int main()
{
    Delete dd;
    dd.deleteItem();
}