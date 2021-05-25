//question//

amesh got a set of numbers and alloted a task to find the minimum of all the royal numbers present in the set if available otherwise print ‘No’. Royal numbers are those numbers which are divisible by 2,3 & 5 all three numbers.

Input Format

Enter all the numbers in the array of size ‘n’

Constraints

1<= n <= 20

Output Format

Print the minimum royal number.

Sample Input 0

32 30 62 90
Sample Output 0

30




//solution//


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    int a[4];
    bool flag = false;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int min = INT_MAX;
    for(int i=0;i<4;i++)
    {
        if(a[i]%2==0 && a[i]%3==0 && a[i]%5==0)
        {
            flag = true;
            if(a[i]<min)
                min = a[i];
        }
    }
    if(flag==false)
        cout<<"No";
    else
        cout<<min;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
