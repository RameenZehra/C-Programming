
   #include <stdio.h>

   #define YES   1
   #define NO  0

   /* count lines, words, and characters in input */
   main()
   {
       int c, nl, nw, nc, found_space;

       found_space = NO;
       nl = nw = nc = 0;
       while ((c = getchar()) != EOF) {
           ++nc;
           
           if (c == '\n')
               ++nl;
               
           if (c == ' ' || c == '\n' || c == '\t')
               found_space = YES;
           else if (found_space == YES) {
               found_space = NO;
               ++nw;
           }
       }
       printf("%d %d %d\n", nl, nw, nc);
   }
