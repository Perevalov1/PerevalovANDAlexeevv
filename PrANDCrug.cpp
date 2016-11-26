# include <iostream>
using namespace std;
class Pr{public:
int a,b;
	int r;
	int gets() {return a*b;}
	int getp() {return 2*(a+b);}
	int getk() {return 3,14*r*r;}
	int geth() {return 2*3,14*r;}
};
	void main()
	{
	Pr p;
    p.a=8;
	p.b=10;
	p.r=3;
	cout<<p.gets ();
	cout<<" ";
	cout<<p.getp ();
	cout<<" ";
    cout<<p.getk ();
	cout<<" ";
	cout<<p.geth ();
	system ("pause");
}
