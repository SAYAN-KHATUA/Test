#include <iostream>
using namespace std;
class sayan
{
private:
    int a, b;

public:
    void add()
    {
        cin >> a >> b;
        cout << "the sum is : " << a + b << endl;
        cout << "the mul is : " << a * b;
    }
};
int main()
{
    sayan ss;
    ss.add();
}