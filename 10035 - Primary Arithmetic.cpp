#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c , _a, _b, result, carry;


	while (scanf("%lld %lld",&a,&b)){
		if ( !a && !b) break;
		carry = c = 0;
		while (a || b){
			_a=a%10;
			a/=10;
			_b=b% 10;
			b/=10;

			result = _a + _b + c;
			if (result>9){
				c=1;
				carry++;
			}
			else
				c=0;
		}
		if (!carry){
			printf("No carry operation.\n");
		}
		else if (carry == 1){
			printf("1 carry operation.\n");
		}
		else
			printf("%lld carry operations.\n",carry);
	}

	return 0;
}
