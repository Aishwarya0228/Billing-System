#include<iostream>
using namespace std;
int main()
{
    int returnTotalBill(void);
   int totalBill = returnTotalBill();
   cout<<" your total bill amount is"<<totalBill<<endl;
   cout<<" Thank you for your order! "<<endl;
}
int returnTotalBill()
{
    char c;
    char item;
    char vegItem;
    int billAmount=0;
    char selectAgain;
    char nonvegItem;
    cout<<" welcome to online food order"<<endl;
    cout<<" please follow the below instruction"<<endl;
    cout<<"  step 1: please press s to start your order"<<endl;
    cout<<"  step 2: you can order both veg and non-veg item "<<endl;
    cout<<"  step 3: please press a to select veg item "<<endl;
    cout<<"  step 4: please press b to select non-veg item "<<endl;
    cout<<"  step 5: you will get your final bill after your order "<<endl;
    start:
    cin>>c;
    if(c=='s'||c=='S')
    {
        items:
        cout<<" please select your choice"<<endl;
        cout<<" (a)  Veg Items         (b) Veg Items "<<endl;
        cin>>item;
        
        if(item == 'a' || item =='A'){
            cout<<" please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<" 1.Paneer : Price : Rs.250"<<endl;
            cout<<" 2.Burger : Price : Rs.50"<<endl;
            cout<<" 3.Pizza : Price : Rs.250"<<endl;
            cout<<" 4.Chowmin : Price : Rs.100"<<endl;
            cout<<" 5.Veg Roll: Price : Rs.150"<<endl;
            vegItemList:
            cin>>vegItem;
            if(vegItem == '1'){
                billAmount = billAmount+250;
            }
            else if(vegItem == '2'){
                billAmount = billAmount+50;
            }
            else if(vegItem == '3'){
                billAmount = billAmount+250;
            }
            else if(vegItem == '4'){
                billAmount = billAmount+100;
            }
            else if(vegItem == '5'){
                billAmount = billAmount+150;
            }
            else{
            cout<<" you have entered wrong value , please try again! "<<endl;
            goto vegItemList;
        }
        cout<<" do you want to add more items y or n ?"<<endl;
            cin>> selectAgain;
            if(selectAgain == 'y'){
                goto items;
            }
            else{
                return billAmount;
            }
        }
        else if(item =='b' || item == 'B'){
            nonvegItemList:
            cout<<" please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<" 1. Chicken : Price : Rs.350"<<endl;
            cout<<" 2.Burger : Price : Rs.520"<<endl;
            cout<<" 3.Pizza : Price : Rs.500"<<endl;
            cout<<" 4.Chowmin : Price : Rs.400"<<endl;
            cout<<" 5.Non Veg Roll: Price : Rs.300"<<endl;
            cin>>nonvegItem;
            if(nonvegItem == '1'){
                billAmount = billAmount+350;
            }
            else if(nonvegItem == '2'){
                billAmount = billAmount+520;
            }
            else if(nonvegItem == '3'){
                billAmount = billAmount+500;
            }
            else if(nonvegItem == '4'){
                billAmount = billAmount+400;
            }
            else if(nonvegItem == '5'){
                billAmount = billAmount+300;
            }
            else{
            cout<<" you have entered wrong value , please try again! "<<endl;
            goto nonvegItemList;
        }
        cout<<" do you want to add more items y or n ?"<<endl;
            cin>> selectAgain;
            if(selectAgain == 'y'){
                goto items;
            }
            else{
                return billAmount;
            } 
        }
        else{
            cout<<" you have entered wrong value , please try again! "<<endl;
            goto items;
        }
    }
    else{
        cout<<" you have entered wrong value , please press s!"<<endl;
        goto start;
    }
    return billAmount;
}

