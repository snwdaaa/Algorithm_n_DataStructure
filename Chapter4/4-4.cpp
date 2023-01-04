// 유클리드 호제법
// m과 n의 최대공약수 구하기
// 1. m을 n으로 나눈 나머지를 r이라고 한다
// 2-1. r=0이면 그 시점에서 n이 최대 공약수이므로 n을 출력 후 종료
// 2-2. r!=0이면 m->n, n->r로 변경 후 1로 돌아감

#include <iostream>
using namespace std;

int GCD(int m, int n)
{
    if(n == 0) return m;
    return GCD(n, m % n);
}

int main(void)
{
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
    return 0;
}