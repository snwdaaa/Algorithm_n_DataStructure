// 메모이제이션(memoization) 기법
// 이전 계산과 동일한 값이 나오면 재귀 호출을 하지 않고 메모에 저장된 값 반환

#include <iostream>
#include <vector>
using namespace std;

// 재귀 함수의 계산값을 저장할 메모
vector<unsigned long long> memo;

int fibo(int N)
{
    if(N == 0) return 0;
    else if(N == 1) return 1;

    // 만약 이미 계산한 값이면 재귀호출을 하지 않고 메모에 저장된 값 반환
    if(memo[N] != -1) return memo[N];

    // 아니라면 메모에 계산값 저장하면서 재귀 호출
    return memo[N] = fibo(N-1) + fibo(N-2);
}

int main(void)
{
    // 메모이제이션 할 배열을 -1로 초기화
    memo.assign(50, -1);

    fibo(49);

    // memo에 답이 저장됨
    for(int N = 2; N < 50; ++N)
        cout << N << " 항째: " << memo[N] << endl;

    return 0;
}