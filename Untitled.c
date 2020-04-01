#include <stdio.h>

void main()
{
    FILE *fptr;
    int pass, i, n;
    char suf[20], pre[20];
    int  suff, pree, pc, sc, type, gap;

    /*  open for writing */
    fptr = fopen("password.txt", "w");

    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("                                    Created by \n");
    printf("                                   SAJIB AHAMED \n");
printf("\n");

        printf("    Enter the password total you need :> ");
    scanf("%d",&n);
    printf("    Enter the password's gap (between two password):> ");
    scanf("%d",&gap);
     system("COLOR 3");
     printf("\n");
        printf("    Enter the number start from [should be integer (123..)]"); printf("       wait for update with other data type\n");
        printf("    >>>>>> ");
    scanf("%d", &pass);
printf("\n");
    printf("    Enter some-thing to add prefix\n");
    printf("    1: for integer\n");
    printf("    2: for character \n");
    printf("    3: for both \n");
    printf("   >>>>>> ");
    scanf("%d",&pc);


    //**Enter prefix**//

    if(pc==1)
        {
       printf("     Enter prefix (integer)\n");
       printf("    >>>>>> ");
    scanf("%d",&pree);
        }
        else if (pc==2)
        {
       printf("     Enter prefix (character)\n");
       printf("    >>>>>> ");
    scanf("%s",&pre);
        }
        else if(pc==3)
        {
       printf("     Enter prefix (integer)\n");
       printf("    >>>>>> ");
    scanf("%d", &pree);

       printf("     Enter prefix (character)\n");
       printf("    >>>>>> ");
       scanf("%s", &pre);
        }
        else {
                system("COLOR 4");
            printf("wrong value\n");
            return;
        }

        //*Enter suffix*//

    printf("    Enter some-thing to add suffix \n");
    printf("    1: for integer\n");
    printf("    2: for character\n");
    printf("    3: for both\n");
    printf("    >>>>>> ");
    scanf("%d",&sc);

            if(sc==1)
        {
          printf("     Enter suffix (integer)\n");
          printf("     >>>>>> ");
    scanf("%d",&suff);
        }
        else if (sc==2)
        {
          printf("     Enter suffix (character)\n");
          printf("     >>>>>> ");
    scanf("%s",&suf);
        }
        else if(sc==3)
        {
          printf("     Enter suffix (integer)\n");
          printf("     >>>>>> ");
    scanf("%d", &suff);

          printf("     Enter suffix (character)\n");
          printf("     >>>>>> ");
       scanf("%s", &suf);
        }
        else {
                system("COLOR 4");
            printf("    wrong value");
            return;
        }

//*password setting part*//

system("COLOR 6");


printf("    set your password out type\n");

if (pc==3 && sc==3)
      {
        printf("        %d %s <%d> %s %d   press 1>\n",pree,pre,pass,suf,suff);
        printf("        %s %d <%d> %s %d   press 2>\n",pre,pree,pass,suf,suff);
        printf("        %s %d <%d> %d %s   press 3>\n",pre,pree,pass,suff,suf);
        printf("        %d %s <%d> %d %s   press 4>\n",pree,pre,pass,suff,suf);
        printf("        >>>>>> ");
        scanf("%d",&type);

      }

      else if (pc==3 && sc==2)
      {
        printf("         %d %s <%d> %s   press 5>\n",pree,pre,pass,suf);
        printf("         %s %d <%d> %s   press 6>\n",pre,pree,pass,suf);
        printf("        >>>>>> ");
        scanf("%d",&type);

      }

      else if (pc==3 && sc==1)
      {
        printf("      %d %s <%d> %d   press 7>\n",pree,pre,pass,suff);
        printf("      %s %d <%d> %d   press 8>\n",pre,pree,pass,suff);
        printf("        >>>>>> ");
        scanf("%d",&type);

      }

      else if (pc==2 && sc==3)
      {
        printf("      %s <%d> %s %d   press 9>\n",pre,pass,suf,suff);
        printf("      %s <%d> %d %s   press 10>\n",pre,pass,suff,suf);
        printf("        >>>>>> ");
        scanf("%d",&type);

      }

      else if (pc==1 && sc==3)
      {
        printf("      %d <%d> %s %d   press 11>\n",pree,pass,suf,suff);
        printf("      %d <%d> %d %s   press 12>\n",pree,pass,suff,suf);
        printf("        >>>>>> ");
        scanf("%d",&type);
      }


      else if (pc==2 && sc==1)
      {
        printf("      %s <%d> %d \n",pre,pass,suff);
        type = 13;
      }

      else if (pc==2 && sc==2)
      {
        printf("      %s <%d> %s \n",pre,pass,suf);
        type = 14;
      }

      else if (pc==1 && sc==1)
      {
        printf("      %d <%d> %d \n",pree,pass,suff);
        type = 15;
      }

      else if (pc==1 && sc==2)
      {
        printf("      %d <%d> %s \n",pree,pass,suf);
        type = 16;
      }

      else{
            system("COLOR 4");
      printf("    wrong value\n");
      return;
      }



    for(i=0; i<n; i++)
        {
                   if(type==1)
                   {
                   fprintf(fptr, "%d%s%d%s%d \n",pree,pre,pass,suf,suff);
                    }
                    else if (type==2)
                    {
                   fprintf(fptr, "%s%d%d%s%d \n",pre,pree,pass,suf,suff);
                    }
                     else if (type==3)
                    {
                   fprintf(fptr, "%s%d%d%d%s \n",pre,pree,pass,suff,suf);
                    }
                     else if (type==4)
                    {
                   fprintf(fptr, "%d%s%d%d%s \n",pree,pre,pass,suff,suf);
                    }

                   else if(type==5)
                    {
                   fprintf(fptr, "%d%s%d%s \n",pree,pre,pass,suf);
                    }
                     else if (type==6)
                    {
                   fprintf(fptr, "%s%d%d%s \n",pre,pree,pass,suf);
                    }

                    else if (type==7)
                    {
                   fprintf(fptr, "%d%s%d%d \n",pree,pre,pass,suff);
                    }
                     else if (type==8)
                    {
                   fprintf(fptr, "%s%d%d%d \n",pre,pree,pass,suff);
                    }

                    else if (type==9)
                    {
                   fprintf(fptr, "%s%d%s%d \n",pre,pass,suf,suff);
                    }

                     else if (type==10)
                    {
                   fprintf(fptr, "%s%d%d%s \n",pre,pass,suff,suf);
                    }

                   else if (type==11)
                    {
                   fprintf(fptr, "%d%d%s%d \n",pree,pass,suf,suff);
                    }

                     else if (type==12)
                    {
                   fprintf(fptr, "%d%d%d%s \n",pree,pass,suff,suf);
                    }

                    else if (type==13)
                    {
                   fprintf(fptr,"%s%d%d \n",pre,pass,suff);
                    }

                    else if (type==14)
                    {
                   fprintf(fptr,"%s%d%s \n",pre,pass,suf);
                    }

                    else if (type==15)
                    {
                   fprintf(fptr,"%d%d%d \n",pree,pass,suff);
                    }

                    else if (type==16)
                    {
                   fprintf(fptr,"%d%d%s \n",pree,pass,suf);
                    }

                else{
                     system("COLOR 4");
                    printf("    wrong value\n");
                   return;
                    }


    pass=pass+gap;
    }

    fclose(fptr);
    if (fclose==NULL || fprintf==NULL)
    {
        system("COLOR 4");
        printf("                              ERROR\n");
    }
    else{
        system("COLOR 2");
    printf("                                  SUCCESS \n");
    printf("                file successfully  saved password.txt \n");
    }
}
