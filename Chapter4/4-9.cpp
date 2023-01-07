#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a)
{
    // 베이스 케이스
    if(i == 0)                      // i == 0 & w == 0이면 0개의 수를 더해 합이 0이므로 항상 true
    {
        if(w == 0) return true;
        else return false;
    }

    // func(i-1, w)가 true면 func(i,w)는 무조건 true
    if(func(i - 1, w, a)) return true;

    // func(i-1, w)가 true가 아니면 func(i-1, w-a[i-1])까지 조사
    if(func(i - 1, w - a[i - 1], a)) return true;

    return false;   // func(i-1, w)와 func(i-1, w-a[i-1])가 둘 다 true가 아니면 false
}

int main(void)
{
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    // 재귀적으로 풀기
    if(func(N, W, a)) cout << "Yes" << endl;
    else cout << "No" << endl;
        
    return 0;
}