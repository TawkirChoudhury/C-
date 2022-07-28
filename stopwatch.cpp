// THIS IS NOT A PRECISED STOPWATCH!
/* This is made assuming it takes 1s to increment a number 10 times
(for my computer)(you may change accordingly)*/

# include<iostream>
using namespace std;

class Clock{
    public:
        void stopwatch();

};
void Clock :: stopwatch(){
    int i=0, secs=0, mins=0, hrs=0;
    bool loop=true;
    do{
        ++i;
        // (here you can play with the values by changing 'i')
        if (i==10){
            secs++;
            i=0;
        }
        if (secs==60){
            mins++;
            secs=0;
        }
        if (mins == 60){
            hrs++;
            mins=0;
        }
        cout<<" "<<endl;
        cout<<"S: "<<secs<<"    M: "<<mins<<"    H: "<<hrs<<" "<<endl;
        system("CLS");
    }while(loop); 
}
int main(){
    Clock c;
    c.stopwatch();
    return 0;
}

