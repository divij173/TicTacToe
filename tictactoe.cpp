#include<iostream>
using namespace std;
int main()
{
    char arr[3][3];
    cout<<"Enter The Numbers you want to display as help in the game in the form of matrix = ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"";
    cout<<"PlayerOne[X]\nPlayerTwo[O]\n\n\n";

    cout<<"\t\t \t|\t \t|\t\n";
    cout<<"\t\t"<<arr[0][0]<<"\t|\t"<<arr[0][1]<<"\t|\t"<<arr[0][2]<<"\n";
    cout<<"\t________________|_______________|_____________\n";
    cout<<"\t\t \t|\t \t|\t\n";
    cout<<"\t\t"<<arr[1][0]<<"\t|\t"<<arr[1][1]<<"\t|\t"<<arr[1][2]<<"\n";
    cout<<"\t________________|_______________|_____________\n";
    cout<<"\t\t \t|\t \t|\t\n";
    cout<<"\t\t"<<arr[2][0]<<"\t|\t"<<arr[2][1]<<"\t|\t"<<arr[2][2]<<"\n";
    cout<<"\t\t \t|\t \t|\t\n";

    cout<<"\n\nPlayerOne[X] Turn = ";

    int place;
    cin>>place;

    switch(place)
    {
    case 1:
        arr[0][0]='X';
        break;
    case 2:
        arr[0][1]='X';
        break;
    case 3:
        arr[0][2]='X';
        break;
    default:
        cout<<"Invalid Input Bro";
        break;
    }

    cout<<"PlayerOne[X]\nPlayerTwo[O]\n\n\n";

    cout<<"\t\t \t|\t \t|\t\n";
    cout<<"\t\t"<<arr[0][0]<<"\t|\t"<<arr[0][1]<<"\t|\t"<<arr[0][2]<<"\n";
    cout<<"\t________________|_______________|_____________\n";
    cout<<"\t\t \t|\t \t|\t\n";
    cout<<"\t\t"<<arr[1][0]<<"\t|\t"<<arr[1][1]<<"\t|\t"<<arr[1][2]<<"\n";
    cout<<"\t________________|_______________|_____________\n";
    cout<<"\t\t \t|\t \t|\t\n";
    cout<<"\t\t"<<arr[2][0]<<"\t|\t"<<arr[2][1]<<"\t|\t"<<arr[2][2]<<"\n";
    cout<<"\t\t \t|\t \t|\t\n";

    cout<<"\n\nPlayerOne[X] Turn = ";

 return 0;
}
