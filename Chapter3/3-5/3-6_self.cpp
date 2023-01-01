#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i=0; i<N; i++) cin >> a.at(i);

    // 집합 a의 모든 부분집합을 조사해야한다.
    // 부분집합의 모든 원소의 합이 W인 부분집합이 존재하면 된다
    // 원소가 N개인 집합의 부분집합의 개수는 2^N개이고, 2진수 N개의 비트로 표현 가능한 수의 범위는 10진수로 0~(N^2)-1
    // 우리는 부분집합의 특정 요소의 존재 여부를 2진수의 각 자리수가 1인지 0인지로 표현할 것임.
    // 공집합 ~ {a1, .., aN-1} 사이의 모든 부분집합을 조사할거니까 10진수 0~(N^2)-1 사이의 정수를 조사하면 됨
    bool exist = false; // 합이 W가 되는 부분집합의 존재 여부
    for(int bit=0; bit < (1 << N); ++bit) // N^2 == (1 << N), bit 정수는 모든 부분집합을 나타냄
    {
        int sum = 0;    // 부분집합의 모든 원소의 합
        for(int i=0; i < N; i++)    // 부분집합의 각 자리수를 확인할 for문. i가 각 자리수임
        {
            if(bit & (1 << i))  // 비트의 각 자리수를 확인해가며 1이 있는 위치를 확인
            {
                sum += a.at(i); // 비트의 자리수에 맞는 값을 가져옴
            }
        }

        // 부분집합의 모든 요소의 합이 W인 경우
        if(sum == W) exist = true;
    }

    if (exist) cout << "exist" << endl;
    else cout << "doesn't exist" << endl;

    return 0;
}