
#include <iostream>

using namespace std;

int main() {
    int n=0 , a=1 , b=1 , c=0, s=0;
    cin >> n;
    cout << a << endl << b << endl;
    while (1){
        c = a + b;
        a = b;
        b = c;
    
        s=c;
        if (s<=n)
        {
        cout << c << endl;
            
        }
        else
        {
            break;
            
        }
        
    
    }
    return 0;
}
