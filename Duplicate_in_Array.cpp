#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	
	unordered_map<int,int> m ;

	for(int i=0;i<n;i++){
		m[arr[i]]++ ;
	}

	int ans = -1 ;

	for(int i=0;i<n;i++){
		if(m[arr[i]] >1){
			ans = arr[i];
		}
	}

	return ans ;
}
