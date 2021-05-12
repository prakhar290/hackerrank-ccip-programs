//question//

Aryan loves Computer Network and he wants to learn about the implementation of Go Back-N protocol. He took a set of integer and a variable ‘k’ and decided to find the maximum possible sum of ‘k’ consecutive elements from the set of integers.

Input Format

Given the value of ‘k’ , ‘n’ and an array of size ‘n’ as input in 3 separate lines

Constraints

1<= k <= 20 1<= n <= 20

Output Format

Print the maximum obtained sum

Sample Input 0

2
4
2 8 1 5
Sample Output 0

10
Sample Input 1

3
5
-3 8 -4 14 5
Sample Output 1

18


//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k,i,j;
    cin>>k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxsum = INT_MIN;
    for(i=0;i<n;i++)
    {
        int sum=0;
        int count=0;
        for(j=i;j<(i+k);j++)
        {
            
            if(j>n-1)
                break;
            sum = sum + a[j];
            count++;
            if(sum>maxsum && count==k)
            maxsum = sum;
        }
        
    }
    cout<<maxsum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
