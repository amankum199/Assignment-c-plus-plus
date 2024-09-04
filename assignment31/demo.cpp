#include <iostream>
using namespace std;
class A
{
private:
    void privateFunctionA()
    {
        cout << "This is private of A" << endl;
    }

protected:
    void ProtectedFunctionA()
    {
        cout << "This is protected of A" << endl;
    }

public:
    void PublicFunctionA()
    {
        cout << "This is public of A" << endl;
    }
};
class AV2 : public A
{

private:
    void privateFunctionAV2()
    {
        cout << "This is private of AV2" << endl;
    }

protected:
    void ProtectedFunctionAV2()
    {
        cout << "This is protected of AV2" << endl;
    }

public:
    void PublicFunctionAV2()
    {
        cout << "This is public of AV2" << endl;
    }
};
int main()
{
    AV2 a;
    // a.privateFunctionA();
    // a.ProtectedFunctionA();
    a.PublicFunctionA();
    return 0;
}