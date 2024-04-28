#include <bits/stdc++.h>
using namespace std;
//Ô¼Éª·ò»·
queue<int> ch;
int m,n,tmp;
void find() {
	while(ch.size()>0) {
		for(int i=1; i<m+1; i++) {
			tmp=ch.front();
			if(ch.size()>0) {

				if(i%m==0) {
					cout<<ch.front()<<" ";ch.pop();
				} else {
					ch.pop();
					ch.push(tmp);
				}
			} else break;
		}
	}
}
int main () {
	cin>>n>>m;
	for(int i=0; i<n; i++)ch.push(i+1);
	find();
	return 0;
}

