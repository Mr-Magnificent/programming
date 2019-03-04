#include <iostream>
#include <queue>
using namespace std;
#define ull unsigned long long int

int main() {
	int T;
	cin >> T;
	while (T--) {
	    ull n, tot, sum = 0;
	    bool flag = false;
	    cin >> n >> tot;
        queue <ull> q;
        ull front = -1, back = -1;
	    for(ull i = 1; i <= n; i++) {
	        ull temp;
	        cin >> temp;
	        sum += temp;
	        q.push(temp);
	        if (sum > tot) {
	            while (sum > tot) {
	                sum -= q.front();
	                q.pop();
	            }
	        } 
	        if (!flag && sum == tot) {
	            queue <ull> tem = q;
	            back = i - q.size() + 1;
	            front = i;
	            flag = true;
	        }
	    }
	    if  (front == -1) {
	    	cout << "-1\n";
	    	continue;
	    }
	    cout << back << " " << front << "\n";
	}
	return 0;
}