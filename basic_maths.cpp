#include <bits/stdc++.h>
using namespace std;
void abstractDigit(int n)
{
    while (n > 0)
    {
        cout << n % 10 << " "; // 9 8 7 7
        n /= 10;
    }
}
int countDigit1(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int countDigit2(int n)
{
    cout << log10(n);
    int cnt = (int)(log10(n) + 1);
    return cnt;
}
int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n /= 10;
    }
    return rev;
}
//tricky
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// gcd(48, 18)
// → gcd(18, 12)
// → gcd(12, 6)
// → gcd(6, 0)
// → 6 ✅

// gcd(20,28)
// gcd(28,20) //20%28=20
// gcd(20,8)     //28%20=8
// gcd(8,4)  //20%8=4
// gcd(4,0)      //8%4=0
// 4
void amstrongNumber(int n){
    int length = countDigit1(n);
    int temp = n;
    int num1=0;
    while (n>0)
    {
        num1 += (int)round(pow(n%10, length));
        n/=10;
    }
    if (temp==num1)
    {
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
}
void printAllDivisors(int n){
   for (int i = 1; i <= n; i++)
   {
    if(n%i==0) cout<<i<<" ";
   }
      
}
void printAllDivisorsNew(int n){ 
    //O(sqrt(N))
    vector<int> vec;
    for (int i = 1; i <= sqrt(n); i++) //loop run 1 to half
    {
        if(n%i==0){
            vec.push_back(i); //1 2 3 4 6
            if(n/i!=i) vec.push_back(n/i); //remove duplicate middle position //36 18 12 9
        }
    }
    sort(vec.begin(),vec.end());
    for(auto x:vec){
        cout<<x<<" ";
    }
}
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    // abstractDigit(7789);
    // cout<<countDigit1(156);
    // cout<<countDigit2(156);
    // cout<<reverseNumber(10400);
    // cout<<gcd(48,18);
    // amstrongNumber(1634);
    // printAllDivisors(36);
    // printAllDivisorsNew(36);
    isPrime(3);
    return 0;
}


// 1 2 3 5 7 11 13

