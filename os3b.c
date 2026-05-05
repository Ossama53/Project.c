for(int I = 0; I < 10; I++){

    #ifdef D
     printf("BD%d\n",(I *a)); 
     #else
     printf("B: %d\n",I);
    #endif
}