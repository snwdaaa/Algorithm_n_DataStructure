// 트리보나치 수열
// T[0] = 0
// T[1] = 0
// T[2] = 1
// T[N] = T[N-1] + T[N-2] + T[N-3] (N=3,4,...)
// 트리보나치 수열의 제N항의 값을 구하는 재귀함수 설계

#include <iostream>
using namespace std;

int Tribo(int N)
{
    if(N == 0 || N == 1) return 0;
    if(N == 2) return 1;

    return Tribo(N-1) + Tribo(N-2) + Tribo(N-3);    

    // 베이스 케이스
    
}

int main(void)
{
    int N;
    cin >> N;

    cout << "트라보나치 수열의 제" << N << "항: " << Tribo(N) << endl;

    return 0;
}