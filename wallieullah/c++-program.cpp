#include<iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i <= sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main()
{
    int n,i;
    cin>>n;
    cout<<isPrime(n);
    return 0;
}





















/*#include<iostream>
using namespace std;
int main(void)
{
char a[100];
cin.getline(a,100);
cout<<a;
}*/
