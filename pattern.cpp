#include <bits/stdc++.h>
using namespace std;

void patterns_1(int val)
{
    for (int i = 0; i < val; i++)
    {
        for (int j = 0; j < val; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_2(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_3(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void patterns_4(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void patterns_5(int val)
{
    for (int i = val; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_6(int val)
{
    for (int i = val; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void patterns_7(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= val - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j < i * 2; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_8(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= (2 * val - 1) - 2 * (i - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_9(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= val - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j < i * 2; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= (2 * val - 1) - 2 * (i - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_10(int val)
{
    for (int i = 1; i <= 2 * val - 1; i++)
    {
        int stars = i;
        if (i > val)
            stars = 2 * val - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patterns_11(int val)
{
    for (int i = 1; i <= val; i++)
    {
        int rem = i % 2;
        for (int j = rem; j < i + rem; j++)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
}
void patterns_12(int val)
{
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * (val - i); j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void patterns_13(int val)
{
    int count = 1;
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void patterns_14(int val)
{
    for (int i = 0; i < val; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void patterns_15(int val)
{
    for (int i = 0; i < val; i++)
    {
        for (char j = 'A'; j <= 'A' + val - i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void patterns_16(int val)
{
    char ch = 'A';
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
void patterns_17(int val)
{
    // cout<<1/2+1<<3/2+1<<5/2+1<<(2*i-1)/2+1;
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= val - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << ch << " ";
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
}
// tricky
void patterns_18(int val)
{

    for (int i = 1; i <= val; i++)
    {
        // get last char
        char ch = 'A' + val - 1;
        for (char j = ch - i + 1; j <= ch; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void patterns_19(int val)
{
    for (int i = 0; i < val; i++)
    {
        for (int j = val - i; j >= 1; j--)
        {
            cout << "* ";
        }

        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = val - i; j >= 1; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = 0; i < val; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 0; j < 2 * val - 2 * i - 2; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
// tricky
void patterns_20(int val)
{
    for (int i = 1; i <= 2 * val; i++)
    {
        // stars
        int stars_first = i;
        if (i > val)
            stars_first = 2 * val - i;
        for (int j = 1; j <= stars_first; j++)
        {
            cout << "* ";
        }
        // space
        int space = 2 * (val - i);
        if (i > val)
            space = 2 * (i - val);
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        // stars
        int stars_second = i;
        if (i > val)
            stars_second = 2 * val - i;
        for (int j = 1; j <= stars_second; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void patterns_21(int val){
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= val; j++)
        {  
            if(i==1 || j==1 || i==val || j==val) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    
}
// very tricky
void patterns_22(int val){
   for (int i = 0; i < 2*val-1; i++)
   {
      for (int j = 0; j < 2*val-1; j++)
      {
        int top = i;
        int left = j;
        int right = (2*val-1)-1-j;
        int bottom = (2*val-1)-1-i;
        cout<<4-min(top,min(left,min(right,bottom)))<<" ";
      }
      cout<<endl;
   }
   
}
int main()
{
    // patterns_1(4);
    // patterns_2(5);
    // patterns_3(5);
    // patterns_4(5);
    // patterns_5(5);
    // patterns_6(5);
    // patterns_7(5);
    // patterns_8(5);
    // patterns_9(5);
    // patterns_10(5);
    // patterns_11(5);
    // patterns_12(4);
    // patterns_13(5);
    // patterns_14(5);
    // patterns_15(5);
    // patterns_16(5);
    // patterns_17(4);
    // patterns_18(5);
    // patterns_19(5);
    // patterns_20(5);
    // patterns_21(5);
    patterns_22(4);
    return 0;
}
