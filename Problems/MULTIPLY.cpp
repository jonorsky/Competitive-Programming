/* Problem: https://www.codechef.com/CDTR1502/problems/MULTIPLY/ */

#include <bits/stdc++.h>
using namespace std;

// A[] represents coefficients of first polynomial
// B[] represents coefficients of second polynomial
// m and n are sizes of A[] and B[] respectively
int *multiply(int A[], int B[], int m, int n)
{
   int *prod = new int[m+n-1];

   // Initialize the porduct polynomial
   for (int i = 0; i<m+n-1; i++)
     prod[i] = 0;

   // Multiply two polynomials term by term

   // Take ever term of first polynomial
   for (int i=0; i<m; i++)
   {
     // Multiply the current term of first polynomial
     // with every term of second polynomial.
     for (int j=0; j<n; j++)
         prod[i+j] += A[i]*B[j];
   }

   return prod;
}

// A utility function to print a polynomial
void printPoly(int poly[], int n)
{
    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}

int main() {

		int firstT;
		int secondT;
		cin >> firstT >> secondT;

		int k1 = firstT;
		int k2 = secondT;

		vector<int> vec;
    int temp;

			while(firstT--) {
				cin >> temp;
				vec.push_back(temp);
			}

			int A[k1];

			for(int i=0; i<vec.size();i++)
				A[i] = vec[i];

			vec.clear();

			while(secondT--) {
				cin >> temp;
				vec.push_back(temp);
			}
				int B[k2];

			for(int i=0; i<vec.size();i++)
				B[i] = vec[i];

	int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);

    int *prod = multiply(A, B, m, n);

    printPoly(prod, m+n-1);

    return 0;
}
