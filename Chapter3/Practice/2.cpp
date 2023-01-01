// N개의 정수 a0 ~ aN-1에서 정수 v가 몇 개 포함되는지 구하는 O(N) 복잡도 알고리즘

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

    int v_count = 0;
    for(int i = 0; i < N; ++i)
    {
        if(a.at(i) == v) 
            ++v_count;
    }

    cout << v_count << endl;

    return 0;
}