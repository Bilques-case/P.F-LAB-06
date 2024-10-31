#include <iostream>
using namespace std;
int main(){
    int number_of_weeks;
    int days_in_weeks;
    cout<<"Enter number of weeks: ";
    cin>>number_of_weeks;
      days_in_weeks=number_of_weeks*7;
    cout<<"Days in given weeks: "<<days_in_weeks<<"\n";
    for (int i=1;i<=number_of_weeks;i++ ){
     cout<<"Week "<<i <<"\n 1,2,3,4,5,6,7\n"; 
    }
    return 0;
}