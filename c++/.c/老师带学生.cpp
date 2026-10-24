#include<iostream>
using namespace std;
#include <string>
int& _6()
{static int a=6;return a;
}
main(){int& six=_6();cout<<six<<endl;
_6()=8;cout<<six<<endl;
}
