#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(long long unsigned int Input)
{
    bool prime[Input+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=Input; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=Input; i += p)
                prime[i] = false;
        }
    }
    
    for (int p=2; p<=Input; p++)
       if (prime[p])
          cout << p << " ";
}

int main()
{
    //long long unsigned int for bigger number capacity
    long long unsigned int Input;
    cout << "Enter a number to check : " << endl;
    //User has to enter a number and it will be stored in Input
    cin >> Input;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << Input << endl;
    SieveOfEratosthenes(Input);
    return 0;
}
