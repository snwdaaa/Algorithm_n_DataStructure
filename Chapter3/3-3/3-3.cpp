// 선형 탐색 - 최솟값 구하기

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 입력
    int N;
    cin >> N; // 자료 개수
    vector<int> a(N); // 용적이 N인 벡터 선언
    for(int i = 0; i < N; i++) cin >> a[i];

    // 선형 탐색
    int min_value = a[0]; // 최솟값을 저장할 변수
    for(int i = 0; i < N; i++)
    {
        if(min_value > a[i])
            min_value = a[i];
    }

    // 결과 출력
    cout << min_value << endl;

    return 0;
}