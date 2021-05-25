//question//

Raju bought 10 gram of gold and the price of gold will increase as the stock market gets down. If stock market gets down by 1% it will increase the gold price by 4%. of the buying price. If the buying price is ‘k’ and the market gets down by ‘p’ percent some day. Find out the gold price of that day.

Input Format

Enter buying price & percentage decrese in stock price.

Constraints

1<= k <= 20000 1<= p <= 100

Output Format

Print the gold price

Sample Input 0

10000
4
Sample Output 0

11600


//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k,p,total=0;
    cin>>k;
    cin>>p;
    total  = k + (p*(k*4/100));
    cout<<total;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
