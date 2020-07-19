//Name: Bo Ying Liu

#include <iostream>
using namespace std;
int main()
{
    //initial integer variables.
    int totalFloors=0;//total floor in hotel.
    int rooms=0;//rooms in each floor, used in each floor itertion.
    int totalRoom=0;// total room in hotel.
    int occupiedRoom=0;//occupied room on each floor, used in each floor iteration
    int totalOccupied=0; //total occupied room in hotel, summation of occupied room from each floor.
    
    cout<<"How many floors the hotel has? "<<endl;
    cin>>totalFloors;
    //create while loop to not accept the floor number less than 1.
    while(totalFloors<1)
    {
        cout<<"Please enter floor number greater than or equal to 1 "<<endl;
        cin>>totalFloors;
    }
    
    
    if(totalFloors>=1){
        
        //create for loop for each floor
        for(int floor=1;floor<=totalFloors;floor++)
        {
            //skip floor 13
            if (floor==13){
                floor++;
            }
            
            cout<<"How many rooms on floor "<<floor<<" ? "<<endl;//in each floor, ask how many rooms.
            cin>>rooms;
            
            //create while room to not accept the rooms less than 10 on each floor.
            while(rooms<10)
            {
                cout<<"Please enter room number greater than or equal to 10 "<<endl;
                cin>>rooms;
            }
            
            //ask how many rooms occupied on each floor.
            cout<<"How many rooms occupied ? "<<endl;
            cin>>occupiedRoom;
            
            //ask user to enter occupied room less than or equal to total room on this floor in logical sense.
            while(occupiedRoom>rooms)
            {
                cout<<"Enter occupied room less than or equal than total rooms on this floor. "<<endl;
                cin>>occupiedRoom;
            }
            
            //add occupied room on each floor to the total occupied room in hotel.
            totalOccupied=totalOccupied+occupiedRoom;
            
            //add rooms on each floor to the total room in the hotel.
            totalRoom=totalRoom+rooms;
            
            
        }
        
        //after all iterations, print out the total room in hotel, and occupied room, and occupied rate.
        cout<<"The hotel has "<<totalRoom<<" rooms."<<endl;
        cout<<totalOccupied<<" rooms have been occupied."<<endl;
        cout<<"There are "<<totalRoom-totalOccupied<<" rooms are unoccupied."<<endl;
        cout<<"The occupied percentage is "<<(totalOccupied*100.00)/(totalRoom)<<" %"<<endl;
        
    
    }
    
    return 0;
}

