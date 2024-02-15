1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	 
4.	int main()
5.	{
6.	    int gil,p,kot,bar,kol,win;
7.	    char ulang='1';
8.	   
9.	    while(ulang=='1'){
10.	        win=0;
11.	        char b[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
12.	   
13.	        for(gil=0; gil<9 && win==0; gil++){
14.	            system("cls");
15.	            printf(" >>>  %d  <<<\n",gil+1);
16.	       
17.	            printf("\n  %c | %c | %c \n",b[0][0],b[0][1],b[0][2]);
18.	            printf(" ---+---+---\n");
19.	            printf("  %c | %c | %c \n",b[1][0],b[1][1],b[1][2]);
20.	            printf(" ---+---+---\n");
21.	            printf("  %c | %c | %c \n",b[2][0],b[2][1],b[2][2]);
22.	       
23.	            p=gil%2+1;
24.	            printf("\n*Player %d",p);
25.	       
26.	            do{
27.	                printf("\n Masukkan Kotak Yang Anda Pilih : ");
28.	                scanf("%d",&kot);
29.	           
30.	                if(kot>=1 && kot<=3){
31.	                    bar=0;
32.	                    kol=kot-1;
33.	                }else if(kot>=4 && kot<=6){
34.	                    bar=1;
35.	                    kol=kot-4;
36.	                }else{
37.	                    bar=2;
38.	                    kol=kot-7;
39.	                }
40.	            }while(kot<1 || kot>9 || b[bar][kol]=='X' || b[bar][kol]=='O');
41.	       
42.	            if(p==1){
43.	                b[bar][kol]='X';  
44.	                }else{
45.	                b[bar][kol]='O';
46.	            }
47.	       
48.	            for(bar=0; bar<3; bar++){
49.	                if(b[bar][0]==b[bar][1] && b[bar][1]==b[bar][2]){
50.	                    win=p;
51.	                }
52.	            }
53.	            for(kol=0; kol<3; kol++){
54.	                if(b[0][kol]==b[1][kol] && b[1][kol]==b[2][kol]){
55.	                    win=p;
56.	                }
57.	            }
58.	            if(b[0][0]==b[1][1] && b[1][1]==b[2][2]){
59.	                win=p;
60.	            }
61.	            else if(b[0][2]==b[1][1] && b[1][1]==b[2][0]){
62.	                win=p; 
63.	            }
64.	               
65.	        }
66.	       
67.	        system("cls");
68.	        printf(" ==Selesai==\n");
69.	       
70.	        printf("\n  %c | %c | %c \n",b[0][0],b[0][1],b[0][2]);
71.	        printf(" ---+---+---\n");
72.	        printf("  %c | %c | %c \n",b[1][0],b[1][1],b[1][2]);
73.	        printf(" ---+---+---\n");
74.	        printf("  %c | %c | %c \n",b[2][0],b[2][1],b[2][2]);
75.	   
76.	        if(win!=0){
77.	            printf("\n =Player %d!=\n >>>>win<<<<\n",win);
78.	        }else{
79.	            printf("\n >>>Seri!<<<\n");
80.	        }
81.	       
82.	        printf("\n Ketik 1 Untuk Duel Ulang : ");
83.	        scanf(" %c",&ulang);
84.	    }
85.	    return 0;
86.	}
