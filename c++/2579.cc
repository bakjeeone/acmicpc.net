#include <cstdio>
#include <algorithm>

using namespace std;

int arr[301];
int cache[301][3];


int solve(int x, int i){
	if(x <= 0) {
		return 0;
	}
	int &ans = cache[x][i];
	
	if(ans){
		return ans;
	}else if(i){
		return ans = solve(x-2, 0) + arr[x];
	}else{
		return ans = max(solve(x-2, 0), max(solve(x-1, 1), solve(x-1, 2))) + arr[x];
	}
}

int main(){
	int n;
	scanf("%d", &n);

	for(int i = 1 ; i <= n ; i ++){
		scanf("%d", &arr[i]);
	}
	
	printf("%d\n", max(solve(n-2, 0), max(solve(n-1, 1), solve(n-1, 2))) + arr[n]);

	return 0;
}
