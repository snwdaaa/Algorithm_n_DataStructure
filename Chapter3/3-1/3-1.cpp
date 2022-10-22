// 선형 탐색

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 입력
    int N, v;
    cin >> N; // 자료 개수
    cin >> v; // 탐색할 값
    vector<int> a(N); // 용적이 N인 벡터 선언
    for(int i = 0; i < N; i++) cin >> a[i];

    // 선형 탐색
    bool exist = false; // 값 발견 여부를 저장할 플래그
    for(int i = 0; i < N; i++)
    {
        if(a[i] == v)
            exist = true; // 발견하면 플래그 설정
    }

    // 결과 출력
    if(exist)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}