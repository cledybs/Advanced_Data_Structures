#include <iostream>
#include <vector>
using namespace std;
/**/
//Matricial
void multiply(int M[2][2], int N[2][2]) {
   int tmp1 = M[0][0]*N[0][0] + M[0][1]*N[1][0];
   int tmp2 = M[0][0]*N[0][1] + M[0][1]*N[1][1];
   int tmp3 = M[1][0]*N[0][0] + M[1][1]*N[1][0];
   int tmp4 = M[1][0]*N[0][1] + M[1][1]*N[1][1];
   M[0][0] = tmp1; M[0][1] = tmp2;
   M[1][0] = tmp3; M[1][1] = tmp4;
}
void power(int M[2][2], int n) {
   if (n == 1) return;
   int N[2][2] = {{0,1},{1,1}};
   power(M, n / 2);
   multiply(M, M);
   if (n % 2 != 0) multiply(M, N);
}
int fib(int x) {
   int N[2][2] = {{0,1},{1,1}};
   if (x == 0) return 0;
   power(N, x-1);
   return N[1][0];
}
int main() {
   int x;
   while(true){
      cin >> x;
      if (x == 0) break;
      cout << fib(x) << endl;
   }
	
   return 0;
}


/*
//Lineal
vector<int> f;

void fib(int x){
	int tmp1 = f.back();
	f.pop_back();
	int tmp2 = tmp1 + f.back();
	f.push_back(tmp1);
	f.push_back(tmp2);
}

int main(){
	int x = 10;
	f.push_back(0);
	f.push_back(1);

	for(int i = 2; i < x; i++)
		fib(i);

	for(int i = 0; i < x; i++)
		cout << f[i] << " ";
	
	return 0;
}*/

/*
//Exponencial
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cin >> x;
   while(i < x) {
      cout << fib(i) << " ";
      i++;
   }
   return 0;
}*/