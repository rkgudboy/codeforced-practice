/*Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a×a.
What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.

Sample test(s)
input
6 6 4
output
*/
#include <bits/stdc++.h>
using namespace std;
long long roundUp(long long number, long long fixedBase) {
    if (fixedBase != 0 && number != 0) {
        int sign = number > 0 ? 1 : -1;
        int baseSign = fixedBase > 0 ? 1 : 0;
        number *= sign;
        int fixedPoint = (number + baseSign * (fixedBase - 1)) / fixedBase;
        number = fixedPoint * fixedBase;
        number *= sign;
    }
    return number;
}
int main(){
long long n,m,a;
cin>>n>>m>>a;
n=roundUp(n,a)/a;
m=roundUp(m,a)/a;
cout<<n*m;
return(0);
}
