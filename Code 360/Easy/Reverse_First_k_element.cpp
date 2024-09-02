#include <bits/stdc++.h> 
using namespace std;

void reverse(queue<int> &que, int k)
{
    vector<int> arr;
    while (!que.empty()) {
        arr.push_back(que.front());
        que.pop();
    }
    
    int i = 0;
    int j = k - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++, j--;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        que.push(arr[i]); // push the reversed elements back into the queue
    }
}

int main() {
    queue<int> que;
    que.push(5);
    que.push(6);
    que.push(7);
    que.push(8);
    que.push(9);
    que.push(5);
    que.push(1);

    int k = 4;
    reverse(que, k);

    // Print the queue after reversing the first k elements
    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }

    return 0;
}
