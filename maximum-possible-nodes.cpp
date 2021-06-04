//question//

A tree is called as a acyclic graph means a graph with no cycle. In general height of tree is denoted by H. A binary tree with N nodes can have maximum of (pow(2,H) – 1) nodes in a tree. Binary tree is a tree in which a node can have maximum of two childrens. Similarly we can make verious trees such that a node can have 1,2,3,4,..... any number of children. Assume that root is present at height 0.

Fing the maximum number of nodes possible in a ‘n-ary’ tree with height H.

Hint : Binary means 2-ary, ternary means 3-ary and so on.

Input Format

Input contains two integers n & H respectively.

Constraints

1 <= n <= 6

1 <= H <= 10

Output Format

Print the number of nodes.

Sample Input 0

3 10
Sample Output 0

88573
Sample Input 1

2 16
Sample Output 1

131071





//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//it is a tree question in which we have to find the number of leaves with formula (pow(n,h+1)-1)/(n-1)
//where n is the number of nodes h is the hieght of tree 

int main() {
    int n,h,total;
    cin>>n>>h;
    switch(n)
    {
        case 1: cout<<"1";
            break;
        case 2: total = (pow(n,h+1)-1)/(n-1);
            cout<<total;
            break;
        case 3: total = (pow(n,h+1)-1)/(n-1);
            cout<<total;
            break;
        case 4: total = (pow(n,h+1)-1)/(n-1);
            cout<<total;
            break;
        case 5: total = (pow(n,h+1)-1)/(n-1);
            cout<<total;
            break;
        case 6: total = (pow(n,h+1)-1)/(n-1);
            cout<<total;
            break;
        default: break;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
