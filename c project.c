#include<stdio.h>
#include<stdlib.h>

#define RUNS_WEIGHT 1.0
#define WICKETS_WEIGHT 1.5
#define FOURS_WEIGHT 0.5
#define SIXES_WEIGHT 1.0
void printWelcomeMessage() {
    printf("\033[1;33m"); // Set text color to yellow (ASCII escape code for color)
    printf("                                ***************************************************\n");
    printf("                                *  Welcome to CODECRICK:ALL-IN-ONE MATCH ANALYSIS *\n");
    printf("                                ***************************************************\n");


    printf("CodeCrick is a command-line program designed to provide a comprehensive and interactive way to keep track of cricket match statistics and scores.\n");

    printf("Here's a brief summary of what you can do here:\n");
    printf("- Input match details to create a customized match scenario.\n");
    printf("- View match summary.\n");
    printf("- Discover the performance of each player with their match statistics.\n");
    printf("- Identify the Man of the Match based on outstanding performances.\n\n\n");
     printf("\033[1;34m"); // Set text color to a deep shade of blue (ASCII escape code for color)

   printf("\033[1;33m"); // Set text color to a deep shade of blue (ASCII escape code for color)
printf("        ***********************************************\n");
printf("       *                    So                         *\n");
printf("      *      Unveil the Thrills of CRICKET FANTASY!     *\n");
printf("     *      Get Ready to Embark on a Digital Journey     *\n");
printf("      *          into the Heart of the Game!            *\n");
printf("       *                                               *\n");
printf("        ***********************************************\n");
printf("\033[0m"); // Reset text color to default (ASCII escape code)

}

 int motmIndex=0;

struct batsman
 {
   char name[100];
   int runs,score,dots,toruns,tobal,ones,twos,threes,fours,sixes,overallScore,balls;
   int max_six,max_run,max_four;

   float str;

 }pl1[400],pl3;

struct bowler
 {
   char name[100];
   int runsgv,wkttkn,overs,overallScore1,overallScore;
   int max_w;
   float econ;
 }pl2[400],pl4;

int main()
{
  FILE *file = fopen("player_details.txt", "w");
 int plno,choice;
  int i,n,m,y[100],z[100];
 printWelcomeMessage();
 printf("\n Press any key to continue:");
 getchar();
 system("cls");

 printf("Enter the name of first team:");
 scanf("%s",y);
  printf("Enter the name of second team:");
 scanf("%s",z);
  printf("Enter the Batsman detail:\n");
  printf("Enter the number of batsman:\n");
  scanf("%d",&m);
  for(i=0;i<m;i++)
   {
if (file == NULL) {
    printf("Error opening file for writing.\n");
    return 1;
}

for (i = 0; i < m; i++)  {
 while (getchar() != '\n');
       printf("Enter name of batsman%d:\n",i+1);
      scanf("%[^\n]s", pl1[i].name);

   

       printf("Enter the number of ones scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].ones);

       printf("Enter the number of twos scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].twos);
       printf("Enter the number of threes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].threes);

       printf("Enter the number of fours scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].fours);

       printf("Enter the number of sixes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].sixes);


       printf("Enter the dots played by the player%d:\n",i+1);
       scanf("%d",&pl1[i].dots);

         pl1[i].balls= pl1[i].ones+pl1[i].twos+pl1[i].threes+pl1[i].fours+pl1[i].sixes+pl1[i].dots;
}
 fprintf(file,"                      Batting details :                        \n ");
              fprintf(file,"==============================================================\n");
              fprintf(file," Batsman   Ones   Twos   Three    Fours    sixes   Balls \n");
              fprintf(file,"==============================================================\n");
              for (i = 0; i < m; i++) {
                 fprintf(file,"  %s\t   %d\t   %d\t   %d\t   %d\t   %d\t   %d\n",pl1[i].name,pl1[i].ones,pl1[i].twos,pl1[i].threes,pl1[i].fours,pl1[i].sixes,pl1[i].balls);
              }
   printf("\nEnter the bowlers details:\n");
   printf("Enter the number of bowlers:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      while (getchar() != '\n');
       printf("\nEnter name of bowler%d:\n",i+1);
       scanf("%[^\n]s",pl2[i].name); 
       

       printf("Enter the runs given by the bowler%d:\n ",i+1);
       scanf("%d",&pl2[i].runsgv);

       printf("Enter the overs bowled by the bowler%d:\n",i+1);
       scanf("%d",&pl2[i].overs);



       printf("Enter the wickets taken by the bowler%d\n",i+1);
       scanf("%d",&pl2[i].wkttkn);

   }
              fprintf(file,"                      Bowling details :                        \n ");
              fprintf(file,"==============================================================\n");
              fprintf(file," Names     Runs Given     Overs      Wickets \n");
              fprintf(file,"==============================================================\n");
              for (i = 0; i < n; i++) {
                 fprintf(file,"   %s         %d            %d             %d\n",pl2[i].name,pl2[i].runsgv,pl2[i].overs,pl2[i].wkttkn);
              }
fclose(file);
   printf("Thank you all details are recorded\n");
printf("\n");

   do{
   printf("\033[1;33m");

    printf("      |   Enter your choice:              **       \n");
    printf("   |-----|    1)Batsman detail:        *      *     \n");
    printf("   |     |    2)Bowlers detail:      *           *   \n");
    printf("   |     |    3)Match summary:      *             * \n");
    printf("   |     |    4)Record:              *          *    \n");
    printf("   |     |    5)Man of the Match:       *    *       \n");
    printf("   |_____|    6)Exit                      **            \n");
   printf("\033[0m");

       scanf("%d",&choice);

     switch(choice)
      {

        case 1:
              printf("Enter the batsman number to see his details\n");
              scanf("%d",&plno);

              plno--;
              printf("                      %s vs %s                                 \n ",y,z);
              printf("                       Player Detail\n");
              printf("===========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         Strike rate   \n");
              printf("===========================================================================\n");

              pl1[plno].runs=(1*pl1[plno].ones)+(2*pl1[plno].twos)+(3*pl1[plno].threes)+(4*pl1[plno].fours)+(6*pl1[plno].sixes);
              pl1[plno].str=(pl1[plno].runs*100.00)/pl1[plno].balls;
              printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[plno].name,pl1[plno].runs,pl1[plno].balls,pl1[plno].fours,pl1[plno].sixes,pl1[plno].str);

              break;

        case 2:

             printf("Enter the bowlers number to see his details\n");
             scanf("%d",&plno);

             plno--;
             printf("                         %s vs %s                                           \n ",y,z);
              printf("                         Player Detail\n  ");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       Economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
        
               for(i=0;i<n;i++)
               {   pl2[plno].econ=pl2[plno].runsgv/pl2[plno].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n",pl2[plno].name,pl2[plno].overs,pl2[plno].runsgv,pl2[plno].wkttkn,pl2[plno].econ);
               }
             break;

        case 3:
             printf("                     %s vs %s                                           \n ",y,z);
              printf("                     Match summary\n");
              printf("==========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         Strike Rate\n");
              printf("==========================================================================\n");

              for(i=0;i<m;i++)
                {
                    pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                    pl3.toruns+=pl1[i].runs;
                    pl1[i].str=(pl1[i].runs*100.00)/pl1[i].balls;
                    printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[i].name,pl1[i].runs,pl1[i].balls,pl1[i].fours,pl1[i].sixes,pl1[i].str);
                }
                printf("TOTAL RUNS:%d\n\n",pl3.toruns);
              printf("\n\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   pl2[i].econ=pl2[i].runsgv/pl2[i].overs;
                   printf("%-15s %-14d %-13d %-11d %-11.2f\n\n\n",pl2[i].name,pl2[i].overs,pl2[i].runsgv,pl2[i].wkttkn,pl2[i].econ);
               }
               break;

        case 4: pl3.max_run=0,pl4.max_w=0,pl3.max_four=0,pl3.max_six=0;

                for(i=0;i<m;i++)
                  {
                     pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                     if(pl3.max_run<pl1[i].runs)
                        {
                          pl3.max_run=pl1[i].runs;
                        }

                     if(pl3.max_six<pl1[i].sixes)
                       {
                        pl3.max_six=pl1[i].sixes;
                       }

                     if(pl3.max_four<pl1[i].fours)
                       {
                        pl3.max_four=pl1[i].fours;
                       }

                     if(pl4.max_w<pl2[i].wkttkn)
                      {
                      pl4.max_w=pl2[i].wkttkn;
                      }
                  }
                  
              printf("Highest runs scored by the batsman:%d\n",pl3.max_run);
              printf("Maximum fours scored by the batsman:%d\n",pl3.max_four);
              printf("Maximum sixes scored by the batsman: %d\n",pl3.max_six);
             printf("Maximum wickets taken by the bowler:%d\n",pl4.max_w);

             break;

        case 5:




    for (i = 0; i < m; i++) {
        // Calculate batsman's statistics

        // Calculate the overall performance score based on weighted statistics
        float overallScore = (pl1[i].runs * RUNS_WEIGHT) +
                             (pl1[i].fours * FOURS_WEIGHT) + (pl1[i].sixes * SIXES_WEIGHT);

        if (overallScore > pl1[motmIndex].overallScore) {
            motmIndex = i; // Update Man of the Match index
            pl1[motmIndex].overallScore = overallScore; // Update player's overall score
        }
    }

    for (i = 0; i < n; i++) {
        // Calculate bowler's statistics
motmIndex=0;
        // Calculate the overall performance score based on weighted statistics
        float overallScore1 = pl2[i].wkttkn * WICKETS_WEIGHT;

        if (overallScore1 >pl2[motmIndex].overallScore) {
            motmIndex = i; // Update Man of the Match index
            pl2[motmIndex].overallScore1 = overallScore1; // Update player's overall score
        }
    }

    printf("\n\n") ;
    printf("                  %s vs %s                                           \n ", y, z);
    printf("===============================================\n");
    printf("     Man of the Match: %s\n", (pl1[motmIndex].overallScore>pl2[motmIndex].overallScore ) ? pl1[motmIndex].name : pl2[motmIndex].name);
    printf("===============================================\n");

    // ... (Rest of the code)
break;

        case 6:
            exit(1);

        default:
             printf("Enter the correct choice\n");
             break;
      }

    }while(choice!=6);
   return 0;

}
}
