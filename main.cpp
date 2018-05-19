#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int n,m;

class Nest
{
public:

     int T[INT_MAX][0];
     int M[INT_MAX][0];
     int P[INT_MAX][0];
     int tmp[INT_MAX][0];

     int Cmax;

};



int main()
{
     Nest ob;
     int i=0;
     int j=0;
     int k=0;
     int l=0;
	ifstream file;
	file.open("Dane9.txt", ios::in);
	file >> n;
	cout << n << endl;

	for( i=1; i<=n; i++){
          ob.T[i][0]=0;
          file >> ob.T[i][0];
          cout << ob.T[i][0] << " ";
	}
	cout << endl;
	for( j=1; j<=n; j++){
          ob.M[j][0]=0;
          file >> ob.M[j][0];
          cout << ob.M[j][0] << " ";
	}
	cout << endl;
	for(k=1; k<=n; k++){
          ob.P[k][0]=0;
          file >> ob.P[k][0];
          cout << ob.P[k][0] << " ";
	}

	file >> m;
	cout << endl << m << endl;

	for(l=1; l<=n; l++){
          ob.tmp[l][0];
          file >> ob.tmp[l][0];
          cout << ob.tmp[l][0] << " ";
	}



     return 0;
}
