//question//

Aakanksha got the task to find the first even pair in the array. Even pair signifies the two consecutive even numbers inside the array.

Note: If there are two consecutivr even elements present at index k & (k+1), form an even pair.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines

Constraints

1<= n <= 20

Output Format

Print the index of first element of pair.

Sample Input 0

4
1 2 4 4
Sample Output 0

1



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
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i+1]%2==0)
        {
            cout<<i;
            break;
        }   
        
        else
            continue;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}