// Problem: https://www.hackerrank.com/challenges/box-it
// Author: Marcelo Linck

#include<bits/stdc++.h>
using namespace std

///////////// SOLUTION

class Box{
private:
    int l;
    int b;
    int h;

public:
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    
    Box(int len, int bre, int hei){
        l = len;
        b = bre;
        h = hei;
    }
    
    Box(const Box & B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLength(){
        return l;
    }
    
    int getBreadth(){
        return b;
    }
    
    int getHeight(){
        return h;
    }
    
    long long CalculateVolume(){
        return ((long) ((long) l * (long) b * (long) h));
    }
    
    bool operator< (Box & B){
        if(l < B.l ||
          (l == B.l && b < B.b) ||
          (l == B.l && b == B.b && h < B.h))
            return 1;
        else
            return 0;
    }    
};

ostream & operator<< (ostream & out, Box & B){
        out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight() << " ";
        return out;
}  

///////////// 

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
