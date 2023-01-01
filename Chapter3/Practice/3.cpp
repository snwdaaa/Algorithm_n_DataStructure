// N(>=2) 개의 서로 다른 정수 a0 ~ aN-1에서 두 번째로 작은 값 구하는 O(N) 알고리즘

#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    unsigned int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a.at(i);

    // 가장 최솟값 찾기
    int firstMin = 10000000;    // 임의의 최솟값
    for(int i = 0; i < N; ++i)
    {
        if(a.at(i) < firstMin) firstMin = a.at(i);
    }

    // 두 번째 최솟값 찾기
    int secondMin = 10000000;   // 임의의 최솟값
    for(int i = 0; i < N; ++i)
    {
        if(a.at(i) < secondMin)
        {
            if(a.at(i) != firstMin) secondMin = a.at(i);
        }
    }    

    cout << secondMin << endl;

    return 0;
}