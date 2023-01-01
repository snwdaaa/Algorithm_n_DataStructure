// N개의 정수 a0 ~ aN-1 중 두 정수를 골라 뺄셈한 결과가 최대인 값을 구하는 O(N) 알고리즘

#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    unsigned int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a.at(i);

    // 두 정수를 골라서 뺄셈하기

    return 0;
}