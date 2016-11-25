// Multiples of 3 and 5
/*   
  If we list all the natural numbers below 10 that are multiples
  of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
  Find the sum of all the multiples of 3 or 5 below 1000.   

*/

/*
 Multiples 0f 3 ---- 3,6,9,12, 15 , 18,21,24,27, 30 ,33..........
 Multiples of 5 ---- 5,10    , 15 , 20,25,       30 ,35..........

 Observation -- multiples of (5*3=) 15 is repeated

        SM(3 or 5) = SM(3)+M(5)-SM(15)
*/

#include <iostream>

using namespace std;

typedef long long ll;

int main(){
	std::ios::sync_with_stdio(false);

	ll n = 1000; //Given

	ll n3 = (n-1)/3; // Below n, so n-1
	ll s3 = (n3 * (n3+1) /2 ) * 3;  // (1,2,3)*3 => (3,6,9)

	ll n5 = (n-1)/5;
	ll s5 = (n5 * (n5+1) /2 ) * 5;

	ll n15 = (n-1)/15;
	ll s15 = (n15 * (n15+1) /2 ) * 15;

	cout<< s3+s5-s15 <<endl;
	return 0;
}
