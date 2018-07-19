#include <cstdio>
#include <algorithm>

using namespace std;


typedef struct home_color{
	int r;
	int g;
	int b;
} C;

C data[2];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i ++){
		scanf("%d %d %d", &(data[i%2].r), &(data[i%2].g), &(data[i%2].b));
		if(i){
			data[i%2].r += min(data[(i+1)%2].g, data[(i+1)%2].b);
			data[i%2].g += min(data[(i+1)%2].r, data[(i+1)%2].b);
			data[i%2].b += min(data[(i+1)%2].r, data[(i+1)%2].g);
		}
	}

	printf("%d\n", min(min(data[(n-1)%2].r, data[(n-1)%2].g), data[(n-1)%2].b));

	return 0;
}
