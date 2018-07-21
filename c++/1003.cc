#include <cstdio>

int cache[41][2] = {1, 0, 0, 1, };
 
int main(){
	int t;
	for(int i = 2 ; i < 41; i ++){
		cache[i][0] = cache[i-1][0] + cache[i-2][0];
		cache[i][1] = cache[i-1][1] + cache[i-2][1];
	}
	scanf("%d", &t);
	while(t --){
		int n;
		scanf("%d", &n);
		printf("%d %d\n", cache[n][0], cache[n][1]);
	}
	return 0;
}
