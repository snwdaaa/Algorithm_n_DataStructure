// 선형 탐색 - 값이 있는 인덱스 찾기

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

    int found_id = -1; // 값 발견 여부를 저장할 플래그
    for(int i = 0; i < N; i++)
    {
        if(a[i] == v)
        {
            found_id = i; // 발견하면 인덱스를 저장
            break; // 반복문 종료
        }
    }

    // 결과 출력
    cout << found_id << endl; // 발견한거면 인덱스 출력, 아니면 -1 출력

    return 0;
}