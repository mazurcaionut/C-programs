#include<iostream>
using namespace std;

struct data{
	int zi,luna,an;
};

struct elev{
	char nume[30];
	struct data data_nasterii;
	float media;
}ev;

int main()
{
	ev.data_nasterii.an=1990;
	cout<<ev.data_nasterii.an;
	return 0;
}
