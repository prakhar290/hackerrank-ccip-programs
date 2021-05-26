//question//

Arjun was working on a research paper based on binary number system. He designed an algorithm to find maximum number of consecutive set bits in the binary array.

Binary array is an array that contains only 0’s & 1’s.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines.

Constraints

1<= n <= 20

Output Format

Print the integer output.

Sample Input 0

4
0 0 0 0
Sample Output 0

0



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
    int count=0;
    for(i=0;i<n;i++)
    {
        /*if((a[i]==0 && a[i+1]==1) || (a[i]==1 && a[i+1]==0))
        {
            if((a[i+2]==0 && a[i+1]==1) || (a[i+2]==0 && a[i+1]==1))
            count++;
        }
        else
            break;*/
        if(a[i]==0)
            count = 0;
        else if(a[i]==1)
        {
            count++;
        }
    }
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
