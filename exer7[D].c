#include<stdio.h>
      int main()
      {
        int c,f;
        printf("Enter the class = ");
        scanf("%d",&c);
        printf("Enter the number of subjects student got failed = ");
        scanf("%d",&f);
        switch(c)
        {
          case 1:
            switch(f)
            {
              case 0:
              case 1:
              case 2:
              case 3:
                printf("You've got grace of 5 marks per subject");
                break;
               default:
               printf("You didn't got any grace");
               break;
             }
             break;
           case 2:
             switch(f)
             {
               case 0:
               case 1:
               case 2:
               printf("You've got grace of 4 marks per subject");
               break;
               default:
               printf("You didn't got any grace");
               break;
              }
              break;
           case 3:
              switch(f)
              {
               case 0:
               case 1:
               printf("You've got grace of 3 marks per subject");
               break;
               default:
               printf("You didn't got any grace");
               break;
               }
               break;
               default:
               printf("Wrong Choice. Please try again!!");
               break;
              }  
              return 0;
              }
