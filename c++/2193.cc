#include <cstdio>

int cache[2] = {0, 1};
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2 ; i <= n ; i ++){
		if(i<=3){
			cache[i%2] = cache[i%2] + cache[(i+1)%2];
			continue;
		}
		cache[i%2] = cache[i%2]*2+cache[(i+1)%2];
	}
	printf("%d\n", cache[n%2]);
	return 0;
}
