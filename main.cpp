#include <iostream>
#include <stdlib.h>
#include <time.h>
#include"que.h"

using namespace std;

int main()
{
    int ans=0,counter=0,i=0;

    srand(time(NULL));
    for (i=0;i<=10;i++)
    {
    int rand_fun =(rand()% 20 );
    switch(rand_fun)
    {
    case 1:
        counter=que1(counter,ans);
        break;
         case 2:
        counter=que2(counter,ans);
        break;
         case 3:
        counter=que3(counter,ans);
        break;
         case 4:
        counter=que4(counter,ans);
        break;
         case 5:
        counter=que5(counter,ans);
        break;
         case 6:
        counter=que6(counter,ans);
        break;
         case 7:
        counter=que7(counter,ans);
        break;
         case 8:
        counter=que8(counter,ans);
        break;
         case 9:
        counter=que9(counter,ans);
        break;
         case 10:
        counter=que10(counter,ans);
        break;
         case 11:
        counter=que11(counter,ans);
        break;
         case 12:
        counter=que12(counter,ans);
        break;
         case 13:
        counter=que13(counter,ans);
        break;
         case 14:
        counter=que14(counter,ans);
        break;
         case 15:
        counter=que15(counter,ans);
        break;
         case 16:
        counter=que16(counter,ans);
        break;
         case 17:
        counter=que17(counter,ans);
        break;
         case 18:
        counter=que18(counter,ans);
        break;
         case 19:
        counter=que19(counter,ans);
        break;
         case 20:
        counter=que20(counter,ans);
        break;
         default:
            break;

        }
    }

    return 0;


}
