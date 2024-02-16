// Reverse first k elements of queue
#include <bits/stdc++.h>
using namespace std;

void solve(queue<int>& q, int k);

queue<int> reverseFirstK(queue<int> q, int k) {
    solve(q, k);
    int s = q.size() - k;
    while (s-- > 0) {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    return q;
}
 
void solve(queue<int>& q, int k) {
    if (k == 0) return;
    int e = q.front();
    q.pop();
    solve(q, k - 1);
    q.push(e);
}

int main() {
    queue<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);
    queue.push(60);
    queue.push(70);
    queue.push(80);
    queue.push(90);
    queue.push(100);
 
    int k = 5;
    queue = reverseFirstK(queue, k);
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop();
    }
    return 0;
}