//Resturant order system in c++//

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;

int num1=0, num2=0, num3=0, num4=0, num5=0,num6=0,num7=0,num8=0,num9=0,num10=0;
int num_customers;
int sentinel=0;
const double UnitPrice1= 65, UnitPrice2= 50,UnitPrice3= 70, UnitPrice4= 85, UnitPrice5= 20 ,UnitPrice6= 60,UnitPrice7= 30,UnitPrice8= 20,UnitPrice9= 85,UnitPrice10= 30;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0 ,AmountofSale6=0 ,AmountofSale7=0 ,AmountofSale8=0 ,AmountofSale9=0 ,AmountofSale10=0;


cout<<":::::::::::::::::::MENU:::::::::::::::::::\n\n"
     <<"\n Item[1] Momos		    65 <===\n"
     <<"\n Item[2] Cheese Burger  	50 <===\n"
	 <<"\n Item[3] cheese Sandwich	70 <===\n"
	 <<"\n Item[4] white pasta		85 <===\n"
	 <<"\n Item[5] Veggie Maggie    20 <===\n"
	 <<"\n Item[6] Choco lava		60 <===\n"
     <<"\n Item[7] Veg Burger  	    30 <===\n"
	 <<"\n Item[8] Sandwich	        20 <===\n"
	 <<"\n Item[9] pizza     		85 <===\n"
	 <<"\n Item[10] cheese Maggie    30 <===\n";
	 
	 

         
         
while (order != sentinel)
{
cout<<"\nFrom The List Of Food Items, What Would You Like?:\n";
cin>>order;
switch(order)
			{
                
                case 0:
                break;
                
				case 1:
                     
                cout<<"\nHow Many Momos  Would You Like To Order:\n";
                               cin>>num1;
                
                AmountofSale1 = UnitPrice1 * num1;
                break;
                
                
          
                 
				case 2: 
                cout<<"\nHow Many Cheese Burgers Would You Like To Order:\n";
				               cin>>num2;
               
                AmountofSale2= UnitPrice2 * num2;
                break;
                
                
                case 3: 
                cout<<"\nHow Many Cheese Sandwiches Would You Like To Order:\n";
                                  cin>>num3;
                
                AmountofSale3= UnitPrice3 * num3;
                break;
                
                
                 
                case 4: 
                cout<<"\nHow Many white pasta Would You Like To Order:\n";
                                cin>>num4;
                
                AmountofSale4= UnitPrice4 * num4;
                break;
                
                
                
                case 5: 
                cout<<"\nHow Many Veggie Maggie You Like To Order:\n";
                                cin>>num5;
                                
                
                AmountofSale5= UnitPrice5 * num5; 
                break;
                
                
                case 6: 
                cout<<"\nHow Many Would Choco Lava You Like To Order:\n";
                                cin>>num6;
                                
                
                AmountofSale6= UnitPrice6 * num6; 
                break;
                
                case 7: 
                cout<<"\nHow Many Veg Burgers You Like To Order:\n";
                                cin>>num7;
                                
                
                AmountofSale7= UnitPrice7 * num7; 
                break;
                
                case 8: 
                cout<<"\nHow Many Sandwiches You Like To Order:\n";
                                cin>>num8;
                                
                
                AmountofSale8= UnitPrice8 * num8; 
                break;
                
                case 9: 
                cout<<"\nHow Many pizza You Like To Order:\n";
                                cin>>num9;
                                
                
                AmountofSale9= UnitPrice9 * num9; 
                break;
                
                case 10: 
                cout<<"\nHow Many Would Cheese Maggie You Like To Order:\n";
                                cin>>num10;
                                
                
                AmountofSale10= UnitPrice10 * num10; 
                break;
                
                
                default: cout<<"Please Choose A Valid Item From Our List\n";
                }
                

{       

cout<<"You Have Ordered:\n\n";
cout<<"===========================================================\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(10)<<"QUANTITY"<<right<<setw(15)<<"UNIT PRICE"<<right<<setw(20)<<"AMOUNT OF SALE\n";

cout<<"===========================================================";

cout<<"\nMomos:\t"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl;

cout<<"\nCheeseBurger:\t"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

cout<<"CheeseSandwich:"<<setw(6)<<left<< num3 <<setw(15)<<right<< UnitPrice3 <<setw(20) <<right<< AmountofSale3<<endl<<endl;

cout<<"white pasta:\t"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

cout<<"Veggie Maggie:\t"<<setw(6)<<left<< num5 <<setw(16)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;

cout<<"Choco Lava:\t"<<setw(6)<<left<< num6 <<setw(16)<<right<< UnitPrice6 <<setw(20) <<right<< AmountofSale6<<endl<<endl;

cout<<"Veg Burger:\t"<<setw(6)<<left<< num7 <<setw(16)<<right<< UnitPrice7 <<setw(20) <<right<< AmountofSale7<<endl<<endl;

cout<<"Sandwiches:\t"<<setw(6)<<left<< num8 <<setw(16)<<right<< UnitPrice8 <<setw(20) <<right<< AmountofSale8<<endl<<endl;

cout<<"pizza:\t"<<setw(6)<<left<< num9 <<setw(16)<<right<< UnitPrice9 <<setw(20) <<right<< AmountofSale9<<endl<<endl;

cout<<"Cheese Maggie:\t"<<setw(6)<<left<< num10 <<setw(16)<<right<< UnitPrice10 <<setw(20) <<right<< AmountofSale10<<endl<<endl;
}
              }

system("PAUSE");
return 0;
}
