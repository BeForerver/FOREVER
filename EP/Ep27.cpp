#include <stdio.h> 
#define max_n 1000000


int prime[max_n] = {0};
int num[max_n + 5] = {0};
void init(){
	for(int i = 2; i < max_n; i++){
		if(!prime[i]){
			prime[++prime[0]] = i;
            num[i] = 1;
		}
		for(int j = 1; j <= prime[0]; j++){
			if(prime[j] * i > max_n) break;
			prime[i * prime[j]] = 1;
			if(i % prime[j] == 0) break;
		}
	}
	//printf("%d", prime[3]);
}

int get_num(int n, int a, int b){
	return n * n + a * n + b;
}


int main(){
	init();
	int cnt = 0;
	int ans = 0;
	for(int a = -1000; a <= 1000; a++){
		for(int b = -1000; b <= 1000; b++){
			//if(!num[b]) continue;
			for(int n = 0; n < 200; n++){
				if(get_num(n, a, b) < 0) break;
                if(!num[get_num(n, a, b)]) break;
				else if(num[get_num(n, a, b)]){
					cnt++;
					//printf("%d %d %d %d\n", cnt, n, a, b);
				}
				else continue;
			}
			//if(cnt > ans) ans = cnt;
			if(cnt > 70) printf("%d  %d\n", cnt, a * b);
			cnt = 0;
		}
	}
	//printf("%d\n", ans);
	
	return 0;
}
