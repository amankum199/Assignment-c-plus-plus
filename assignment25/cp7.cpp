/* Define a class Greatest and define instance member function to find Largest among
 3 numbers using classes*/
 #include<iostream>
 using namespace std;
 class Greatest
 {
    private:
    int a,b,c;
    int larg;
    public:
    void set(int j,int k, int l)
    {
        a = j;
        b = k;
        c = l;
    }
    int getn()
    {
        return larg;
    }
    void large()
    {
        if(a>b && a>c)
        larg=a;
        if(b>a && b>c)
        larg=b;
        if(c>a && c>b)
        larg=c;
    }
 };
 int main()
 {
    Greatest num;
    int x,y,z;
    cout<<"Enter the three number"<<endl;
    cin>>x>>y>>z;
    num.set(x,y,z);
    num.large();
    cout<<"Greatest number is "<<num.getn()<<endl;
    return 0;
 }