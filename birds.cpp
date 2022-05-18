#include <iostream>
using std::cout;
using std::string;
using std::endl;

class Bird
{
protected:
	string name;
	int weight;
	int eggs;

public:
	Bird(const string& n, const int& w, const int& e) : name(n), weight(w), eggs(e){};

	virtual void fly()
	{
		cout << this->name<<" Flying..." << endl; 
	}
};

class Strauss : public Bird
{
public:
	Strauss(const string& n, const int& w, const int& e) : Bird(n,w,e){};

	void fly() override
	{
		cout << this->name <<" Not flying" << endl;
	}	

};


void CallFly(Bird& b)
{
	b.fly();
}



int main()
{
	Strauss a("Koko",2,3);
	Bird& a_r = a;
	a_r.fly();

	return 0;
}