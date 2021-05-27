//question//

Rashu got a task to match the characters inside the string. She got two different string as input and verify that if both have same length then the first three characters of both the strings are same or not. If same then print ‘Yes’ else print ‘No’.

Input Format

Enter two different strings of length ‘n’ separated by spaces.

Constraints

1<= n <= 20

Output Format

Print ‘Yes’ or ‘No’

Sample Input 0

aryan ary@@
Sample Output 0

Yes



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    int len1 = s1.length();
    int len2 = s2.length();
    bool flag1 = false, flag2 = false;
    if(len1==len2)
        flag1=true;
    for(int i=0;i<3;i++)
    {
        if(s1[i]==s2[i])
        {
            flag2 = true;
            continue;
        }
        else
            flag2 = false;
    }
    if(flag1==true && flag2==true)
        cout<<"Yes";
    else
        cout<<"No";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
