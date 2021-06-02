//question//

In a round table conference the comissioner decided to meet with ‘n’ junior fellows. All the fellows along with commisioner will sit around a table. In how many ways they can sit around the table.

Input Format

Enter the value of ‘n’

Constraints

5 <= n <=10

Output Format

Print the output.

Sample Input 0

6
Sample Output 0

60




//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
     n=  n-1;
    int fact=1;
    while(n>0)
    {
        fact  = fact*n;
        n--;
    }
        
    int total = fact/2;
    cout<<total;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
