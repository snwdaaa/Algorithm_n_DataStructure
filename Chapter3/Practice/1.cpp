// N개의 정수 a0 ~ aN-1에서 ai = v를 만족하는 i 찾기
// 조건을 만족하는 i가 여러 개 존재할 때 변수 found_id에 가장 큰 i값 저장

#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    unsigned int N;
    int v;
    cin >> N >> v;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a.at(i);

    int found_id = -1;
    for(int i = 0; i < N; ++i)
    {
        if(a.at(i) == v)
        {
            if(i > found_id) found_id = i;  // 최대 i만 저장
        }
    }

    if(found_id != -1) cout << found_id << endl;
    else cout << "not found" << endl;

    return 0;
}