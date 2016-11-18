#include <stdio.h>

main()
{
    int a, b, c;
    int triangolo, scaleno, isoscele, equil;
    if(c<=<+b)
    {
        triangolo=1;
        if(a==b&&b==c)
        {
            equil=1; isoscele=1; scaleno=0;
        }else{
            equil=0;
            if(a==b||b==c){
                isoscele=1;
                scaleno=0;
            }else {
                scaleno=1;
                isoscele=0;
            }
        }
    }
    else triangolo=0;
}