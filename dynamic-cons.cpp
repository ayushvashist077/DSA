#include <iostream> 
using namespace std; 
  class geeks { 
    int* p; 
 public: 
 geeks()
 {
   cout<<"lund"<<endl;
 }
      geeks(int m, int n, int o ) 
    { 
         
        p = new int[3]{m,n,o};
        
          for (int i = 0; i < 3; i++) { 
            cout << p[i] << " "; 
        } 
          cout << endl; 
    } 
    ~geeks()
    {
      cout<<"achillies mc"<<endl;
    }
}; 
  int main() 
{ 
  geeks* ptr = new geeks[2];
 ptr[0]=geeks(10,20,30);
 ptr[1]=geeks(11,22,33);
 ptr[2]=geeks(100,200,300);
 ptr[3]=geeks(1,2,3);

} 

