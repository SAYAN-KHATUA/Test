#include <iostream>
using namespace std;
class A
{
public:
    void sorting()
    {
        int n;
        cout << "Enter the size of array : ";
        cin >> n;
        int arr[n];
        cout << endl
             << "Enter the array element : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << endl
             << "After sorting the array elements are : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    A aa;
    aa.sorting();
    return 0;
}