#include <iostream>
#include <string>
using namespace std;

void BoyerMoore(string P, string T)
{

}
int main(void)
{

	string P = "babababcaabbccedabcabcab";
	string T = "edabcabcab";
	string temp = NULL;

	int T_length = T.length();
	int T_idx = T.length() - 1;
	int P_idx = T_idx;
	int i=0,j=0;

	//edabcab
	std::cout << T.length() << std::endl;
	std::cout << P[T.length() - 1] << std::endl;
	//std::cout << P[T.length()] << std::endl;

	while (P_idx > (P.length() -1)){

		while (P[P_idx--] == T[T_idx--])
		{
			if (T_idx == 0)
				// P_idx ∏Æ≈œ 
				// return P_idex;
				break;
		}

//		temp = T.substr(T_idx, T_length - 1);

		P_idx += T.length();

	}
	//P[3]
	return 0;
}