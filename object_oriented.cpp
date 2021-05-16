
#include <iostream>

using namespace std;

class some
{
    public:
    some()
    {
        int a = 10;
        cout << "value of a " << a <<"\n";
    }
    
    void execute(int b , int c = 0)
    {
        cout << "in execute function, " << b  << "   is  value of b." <<"\n" << c <<" is value of c :" << endl; 
    }
    void shutdown(int &d )
    {
		cout << " you are in shutdown function" ; 
        delete &d ;
    }
};
int main()
{
    some s1;
    s1.execute(10);
    int *a;
    s1.shutdown(*a);

    return 0;
}
