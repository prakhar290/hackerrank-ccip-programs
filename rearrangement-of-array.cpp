//question//

Harish got a task to shift the values of array nder given condition that the last element of array should get raplaced with first element of array and all the other elements must shift to their left index by one position only.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines.

Constraints

1<= n <= 20

Output Format

Provide the reaaranged array in output.

Sample Input 0

4
1 2 3 4
Sample Output 0

2 3 4 1


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
    int first = a[0];
    for(i=0;i<n;i++)
    {
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        if(i==n-1)
            a[n-1] = first;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}