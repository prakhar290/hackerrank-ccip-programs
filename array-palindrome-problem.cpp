//question//

Priyanka got an array as input and assigned a task to verify that the reversal of array gives the same array or not. If array and its reverse version both are same then print “ Verified” else print “ Not Verified”.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines

Constraints

1<= n <= 20

Output Format

Print the output as Verified or Not Verified.

Sample Input 0

4
1 2 2 1
Sample Output 0

Verified
Sample Input 1

4
9 5 4 2
Sample Output 1

Not Verified



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool p = false;
    int mid = n/2;
    for(i=0;i<=mid;i++)
    {
        if(a[i]==a[n-1-i])
        { 
            p = true;
            continue;
        }
        else
        {
            p = false;
            break;
        }
        
    }
    if(p)
        cout<<"Verified";
    else
        cout<<"Not Verified";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

