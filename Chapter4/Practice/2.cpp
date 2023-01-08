// 트리보나치 수열
// 1번에서 작성한 프로그램에 메모이제이션 사용
// 복잡도: O(N)

#include <iostream>
#include <vector>
using namespace std;

long long Tribo(int n, vector<long long> &memo)
{
    // 베이스 케이스
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;

    // 메모이제이션
    // 이미 계산된 값이면 memo 벡터에서 가져옴
    if(memo[n] != -1) return memo[n]; 

    // 계산된 값이 아니면 계산 후 메모에 저장
    return memo[n] = Tribo(n-1, memo) + Tribo(n-2, memo) + Tribo(n-3, memo);
}

int main(void)
{
    int N;
    cin >> N;
    vector<long long> memo(N+1, -1);

    cout << Tribo(N, memo) << endl;

    return 0;
}