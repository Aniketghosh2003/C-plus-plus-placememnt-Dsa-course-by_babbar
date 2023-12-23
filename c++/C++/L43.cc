#include<iostream>
using namespace std;


//Encapsulation
// class student{
//     private:
//        string name;
//        int age;
//        int height;
//     public:
//         int getage(){
//             return this->age;
//         }   
          
//      student(){
//         cout << "simple contructer called " << endl;
//      }

// };

//Inheritance
class human{
      public:
         int height;
         int age ;
         int weight;

       public :
          int getage(){
            return this->age;
          } 
           int getweight(){
            return this->weight;
          } 

            
          

};
class male : public human{
    public:
      string colour;

};

int main(int argc, char const *argv[])
{
    
    return 0;
}
