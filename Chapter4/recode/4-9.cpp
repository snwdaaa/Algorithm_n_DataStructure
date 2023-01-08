// 부분합 문제를 재귀함수를 통해 해결
// N개의 수 a0~0N-1이 있고, 이 중 몇 개의 수를 골라 더했을 때 W가 되는 경우가 있는가?
// 재귀적 -> 규칙을 가지고 반복되어야 함
// 해당 문제는 aN-1을 포함하는지, 아닌지 두 경우로 나눠야 함
// 1. aN-1을 포함하는 경우
// a0~aN-2 사이의 n-1개의 수에서 몇 개의 수를 더했을 때 W-a[N-1]인게 존재
// 2. aN-1을 포함하지 않는 경우
// a0~aN-2 사이의 n-1개의 수에서 몇 개의 수를 더했을 때 W인게 존재
// 이걸 계속 반복하면 됨

// 베이스 케이스
// 수가 없고, W=0일 때는 항상 참
// 수가 한 개라도 있는데 W=0일 때는 항상 거짓

#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, vector<int> a)
{
    // 베이스 케이스
    if(i == 0)
    {
        if(w == 0) return true;
        else return false;
    }

    // a[N-1]을 선택하지 않는 경우
    if(func(i-1, w, a)) return true;

    // a[N-1]을 선택하는 경우
    if(func(i-1, w-a[i-1], a)) return true;

    return false;
}

int main(void)
{
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    if(func(N, W, a)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}