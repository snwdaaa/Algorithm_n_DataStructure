// 부분합 문제 - 부분합 문제를 비트로 표현 후 전체 탐색법으로 조사
// N개의 양의 정수 a0~aN-1과 양의 정수 W가 주어졌을 때 a0~aN-1에서 정수를 몇 개 골라
// 그 합이 W가 될 수 있는지 판정.
// 부분합 문제는 집합 {a0, a1, ..., aN-1}의 부분집합 2^N개를 모두 조사하면 풀 수 있다.

// 부분집합을 이용해 해결ㄱ
// 부분집합의 개수 -> 2^N개
// 부분집합을 N자리수의 2진법 정수로 표현할 수 있다.
// ex) {a0, a2, a3, a6} <=> 01001101 (각 자리수마다 부분집합을 대응)
// 또한 2진법으로 N 자릿수 이하인 정수는 10진법으로 0 이상 2^N 미만인 값이 됨.
// 그러므로 부분집합은 N자리수의 2진법 정수, 0이상 2^N 미만의 10진법 정수로 표현할 수 있다.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 입력
    int N, W;
    cin >> N;
    cin >> W;
    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];

    // bit는 2^N개 존재하는 부분 집합 전체를 대상으로 동작
    bool exist = false;
    // 첫 번째 for문에서는 bit와 (1<<N)은 10진법 정수 생각
    for(int bit = 0; bit < (1 << N); bit++) // 0부터 2^N 미만의 모든 정수를 확인. (1 << N)은 2^N을 나타냄
    {
        int sum = 0; // 부분 집합에 포함된 모든 요소의 합
        for(int i = 0; i < N; i++)
        {
            // i번째 요소 a[i]가 부분집합에 포함되는지 확인
            if(bit & (1 << i)) // 여기에서 bit와 (1 << i)는 2진법 정수로 생각
            {
                sum += a[i];
            }
        }

        // sum과 W이 일치하는지 확인
        if(sum == W) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}