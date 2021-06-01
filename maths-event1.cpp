//question//

Given two martix of size (M X N) & (N X P). Find out the number of addition operation require to multiply two matrices.

Input Format

Enter the value of M,N & P.

Constraints

1 <= M,N,P <= 10

Output Format

Print the desired output

Sample Input 0

3 2 3
Sample Output 0

18
Sample Input 1

2 2 3
Sample Output 1

12




//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,p,m;
    cin>>n>>p>>m;
    int count = n*p*m;
        cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
