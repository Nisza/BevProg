#include "std_lib_facilities.h"

int main()
{
	vector<double> v;
	double a=0.0;
	constexpr double m=100.0;
	constexpr double u=2.54;
	constexpr double z=12.0;
	string c;
	double sum=0;
	
	
	while (cin>>a>>c)
	{
		if (c=="|")
		{
		break;
		}
		else if (c=="m")
		{
			v.push_back(a);
		}
		else if(c=="cm")
		{
			a=a/m;
			v.push_back(a);
		}		
		else if (c=="in")
		{
			a=a*u/m;
			v.push_back(a);
		}
		else if(c=="ft")
		{
			a=a*z*u/m;
			v.push_back(a);
		}
		else
		{ 
			cout<<"Invalid unit"<<endl;
		}
	}
	sort(v);
		cout<<"the smallest so far "<< v[0] <<"m"<<endl;
	sort(v.begin(),v.end(),greater<double>());	
		cout<<"the largest so far "<< v[0] <<"m"<<endl;
	for (double x : v) sum += x;
	cout << "Sum of the values:" << sum << "m"<<endl;
	sort(v);
	for( int i = 0; i < v.size(); i++ )
    	cout << v[i] <<"m"<<endl;
}	



