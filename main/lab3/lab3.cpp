#include<iostream>
#include<string>
#include <limits>
#include "lab3.h"

using namespace std;

void openTikTok();
void openInstagram();
void openTwitter();


void Lab3 ::start(){
    cout << "Lab3 started" << endl;
    int flag = 1, choice;

    while(flag){
        do{
            cout <<"Choose what to open:"<<endl;
            cout<<"1. Open TikTok" << endl;
            cout<<"2. Open Instagram" << endl;
            cout<<"3. Open Twitter" << endl;
            cout<<"4. Exit" << endl;

            cin >>choice;
            // while (!(cin >> choice)) {
            //     cin.clear();
            //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // }
        }while(choice<=0 || choice > 4);

        switch(choice){
            case 1:
                openTikTok();
                break;
            case 2:
                openInstagram();
                break;
            case 3:
                openTwitter();
                break;
            case 4:
                cout << "Program completed";
                flag = 0;
                break;
        }

    }

}

void openTikTok(){
    cout << "You are on TikTok" <<endl;
    int flag = 1, choice;
    TikTok tt = TikTok();

    while(flag){
        do{
            cout<<"Choose what to do:"<<endl;
            cout<<"1. Send message"<<endl;
            cout<<"2. Send comment"<<endl;
            cout<<"3. Read comments"<<endl;
            cout<<"4. Select sound"<<endl;
            cout<<"5. Select title of the video"<<endl;
            cout<<"6. Play the video"<<endl;
            cout<<"7. Like the video"<<endl;
            cout<<"8. View the number of likes"<<endl;
            cout<<"9.View the number of views"<<endl;
            cout<<"10.Exit"<<endl;

            cin>>choice;
        }while(choice<=0||choice>10);

        switch(choice){
            case 1:
                tt.sendMessage();
                break;
            case 2:
                tt.sendComment();
                break;
            case 3:
                tt.readComments();
                break;
            case 4:
                tt.setSound();
                break;
            case 5:
                tt.enterTitle();
                break;
            case 6:
                tt.playVideo();
                break;
            case 7:
                tt.like();
                break;
            case 8:
                tt.getLikes();
                break;
            case 9:
                tt.setViews();
                break;
            case 10:
                flag = 0;
                break;
        }

    }

}

void openInstagram(){
    cout << "You are on Instagram" <<endl;
    int flag = 1, choice;
    Instagram ig = Instagram();

    while(flag){
        do{
            cout<<"Choose what to do:"<<endl;
            cout<<"1. Send message"<<endl;
            cout<<"2. Send comment"<<endl;
            cout<<"3. Read comments"<<endl;
            cout<<"4. Select sound"<<endl;
            cout<<"5. Create story"<<endl;
            cout<<"6. Play the video"<<endl;
            cout<<"7. Like "<<endl;
            cout<<"8. View the number of likes"<<endl;
            cout<<"9.View the number of story views"<<endl;
            cout<<"10.Exit"<<endl;

            cin>>choice;
        }while(choice<=0||choice>10);

        switch(choice){
            case 1:
                ig.sendMessage();
                break;
            case 2:
                ig.sendComment();
                break;
            case 3:
                ig.readComments();
                break;
            case 4:
                ig.setSound();
                break;
            case 5:
                ig.creatStory();
                break;
            case 6:
                ig.playVideo();
                break;
            case 7:
                ig.like();
                break;
            case 8:
                ig.getLikes();
                break;
            case 9:
                ig.getStoryViews();
                break;
            case 10:
                flag = 0;
                break;
        }

    }
}

void openTwitter(){
    cout << "You are on Twitter" <<endl;
    int flag = 1, choice;
    Twitter tw = Twitter();

    while(flag){
        do{
            cout<<"Choose what to do:"<<endl;
            cout<<"1. Send message"<<endl;
            cout<<"2. Send comment"<<endl;
            cout<<"3. Read comments"<<endl;
            cout<<"4. Create tweet"<<endl;
            cout<<"5. Retweet tweet"<<endl;
            cout<<"6. Play the video"<<endl;
            cout<<"7. Like "<<endl;
            cout<<"8. View the number of likes"<<endl;
            cout<<"9.View the number of retweets"<<endl;
            cout<<"10.Exit"<<endl;

            cin>>choice;
        }while(choice<=0||choice>10);

        switch(choice){
            case 1:
                tw.sendMessage();
                break;
            case 2:
                tw.sendComment();
                break;
            case 3:
                tw.readComments();
                break;
            case 4:
                tw.createTweet();
                break;
            case 5:
                tw.retweet();
                break;
            case 6:
                tw.playVideo();
                break;
            case 7:
                tw.like();
                break;
            case 8:
                tw.getLikes();
                break;
            case 9:
                tw.amountOfRetweets();
                break;
            case 10:
                flag = 0;
                break;
        }

    }

}