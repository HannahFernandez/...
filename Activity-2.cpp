#include <iostream>
using namespace std;

int main(){

    int ic , pay , c1 , v = 99 , c = 203 , m = 301 , u = 68;

        cout << "Choose What Product You Want " << endl;
        cout << "                             " <<endl;
        cout << "     [1]Vanilla = 99         " << endl ;
        cout << "     [2]Chocolate = 203      " << endl;
        cout << "     [3]Mango = 301          " << endl;
        cout << "     [4]Ube= 68              " << endl;
        cout << "                             " <<endl;

        cout << endl<< "Enter Number: ";
        cin >> ic;

        if(ic==1){
            cout << "Vanilla = 99"<<endl;
        }
            else if(ic==2){
                cout << "Chocolate = 203"<<endl;
            }
             else if(ic==3){
                cout << "Mango = 301"<<endl;
            }
            else if (ic==4){
                cout << "Ube = 68"<<endl;
            }
        cout << "Your payment: ";
        cin >> pay;
            if( ic == 1){
                c1 = pay - v;
                if(pay < v){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }
            if( ic == 2){
                c1 = pay - c;
                if(pay < c){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }if( ic == 3){
                c1 = pay - m;
                if(pay < m){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }if( ic == 4){
                c1 = pay - u;
                if(pay < u){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }
    return 0;
}
