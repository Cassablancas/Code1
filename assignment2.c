#include <stdio.h>

int extraction(int segment,char ring)
{
    if (ring =='S')
    {
        segment = segment;
    }
    else if (ring =='D')
    {
        segment = segment*2;
    }
    else if (ring == 'T')
    {
        segment = segment*3;
    }    
    else if (ring == 'O')
    {
        segment = 25;
    }
    else if (ring == 'I')
    {
        segment = 50;
    }
    
    return segment;
}


 int remaing_point(int initial_value,int value,int segment,int ring)
    {  
        
        if(value==initial_value && ring!='D')
        {
           value = value;
        }
        else 
        {
           value = value-extraction(segment,ring);
           if(value == 1 || value < 0 || (value == 0 && ring != 'D')) 
           {
                value=value+extraction(segment,ring);  
           }
           
        }
        return value;
    }
  

int main()
{ 
  char ring;    
  int segment;
  int initial_value;
  int value;
  
  printf("Target: ");
  scanf("%d",&initial_value);
  
  value = initial_value;
  
  while (value!=0)
  { 
    printf("Throw: ");
    scanf("%d %c",&segment,&ring);
    value=remaing_point(initial_value,value,segment,ring);
    printf("Points: %d\n",value);
    
  }
  
 return 0;   
}