#include<iostream>
#include<string.h>

using namespace std;


class message{
	private :
		char A[100];
		public : 
		message(char B[])
		{
		   strcpy(A, B);
		}
		void print()
		{
			cout<<"name is = "<<endl;
		}
		void print(char B[])
		{
			cout<<A<<" "<<B; 
		}
		
};
int main()
{
	message obj("abce" );
	obj.print();
	obj.print("xyze" );
	return 0;
	
	
}
