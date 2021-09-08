1.   #include <stdio.h>
2.   #include <conio.h>
3.  struct student
4.   {
5.   char name[50];
6.   int roll;
7.    int marks;
8.   };
9.   void main()
10.     }
11.  struct student s[10];
12.  int i;
13.  clrscr();
14.  printf("Enter information of students;\n");
15
16. for(i=0;i<10;++i)
17.   {
18.    s[i].roll=i+1;
19.      printf("\nfor roll number %d\n",s[i].roll);
21.    printf("Enter name;");
22.     scanf("%s",s[i].name);
23.      printf("Enter marks;");
24.     scanf("%d",&s[i].marks);
25.      printf("\n");
26.  }
27.  printf("Displaying information of students;\n\n");
28.   for(i=0;i<10;++i)
29.  {
30.   printf("\nInformation for roll number %d;\n",i+1);
31.   printf("Name;");
32.   puts(s[i].name);
33.   printf("Marks; %d",s[i].marks);
34.   }
35.  getch();
36.    }
