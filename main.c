#include <stdio.h>


int main()
{
  unsigned int a,b,c ;
  scanf("%d%d%d",&a,&b,&c);

  if (check(&a,&b,&c) == 0)
           printf("NO");

   else
   {
       if (check_main(&a,&b,&c) == 1)
              printf("YES");
       else
            printf("NO");
   }

}

int check (int *a , int *b , int *c)
{
    int x ;
    if((*a + *b > *c) && (*a + *c > *b) && (*c + *b > *a))
           x = 1;
    else
         x = 0 ;

    return x ;
}

int check_main (int *a , int *b , int *c)
{
    int x ;
    if( (*a)*(*a) + (*b)*(*b) == (*c)*(*c) || (*c)*(*c) + (*b)*(*b) == (*a)*(*a) || (*a)*(*a) + (*c)*(*c) == (*b)*(*b)  )
           x = 1;
    else
         x = 0 ;

    return x ;
}
