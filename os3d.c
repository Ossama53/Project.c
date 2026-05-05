#ifdef D
for (int a = 0; a < 10; a++) {
    printf("D: %d\n", a);
#endif

    #ifdef B
      #include "os3b.c"
    #endif

#ifdef D
}
#endif