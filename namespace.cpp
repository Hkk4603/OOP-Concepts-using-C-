#include <iostream>
using namespace std; 

namespace ns1{
    int i; 
}

namespace ns2{
    int i; 
}

using namespace ns1; 
using namespace ns2; 

int main()
{
    ns1::i = 10; 
    cout<<ns1::i<<endl;
    return 0; 
}