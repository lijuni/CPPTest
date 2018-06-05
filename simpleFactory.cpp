#include<iostream>
#include<string>

using namespace std;

/*typedef enum
{
	T80=1;
	T99=2;
}TankType;
*/

class Tank{
public:
	virtual void message() = 0;
};

class Tank80 : public Tank{
public:
	void message(){ cout<<"Tank80"<<endl; }
};

class Tank90 : public Tank{
public:
	void message()
	{
		cout<<"Tank90"<<endl;
	}
};

class TankFactory
{
public:	
	Tank* createTank(int type)
	{
		switch(type)
		{
			case 1:
				return new Tank80();
			case 2:
				return new Tank90();
			default:
				return NULL;
		}
	}
};


int main()
{
	TankFactory tf;
	//Tank80 *t8 = tf.createTank(1);
	Tank *t8 = tf.createTank(1);
	t8->message();
}
