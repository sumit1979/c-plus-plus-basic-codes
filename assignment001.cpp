#include <iostream>

using namespace std;
int main()

{

    string home_addres="house no 100";
    string *gully_Boy=&home_addres; // actual variable declaration.
    string**pan_Shop=&gully_Boy;
    cout<<*gully_Boy<<endl;
    cout<<**pan_Shop<<endl;
    
    return 0;
    }
