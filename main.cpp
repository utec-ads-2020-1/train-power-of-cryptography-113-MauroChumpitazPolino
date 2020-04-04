#include <iostream>
#include <cmath>
using namespace std;

int main (){
    /* Since unsigned long long int can just store the complete number of the integer,
     double would be better option because it can store exponent values.
     But, float is useful because its enough to store the exponent bits (by looking the debugging variables). */
    float p;
    unsigned short int n;

    for (int i = 0; i < 3; i++){
        cin >> n;
        cin >> p;

        /* p = (1 <= p && p < pow(10, 101))? p : 0;
        n = (1 <= n && n <= 200)? n : 0; */    

        /* Based on function reference, the exponent has to be float too (1.0 or it won't work). */
        cout << pow(p, 1.0/n) << endl;
    }
    
    return 0;
}

