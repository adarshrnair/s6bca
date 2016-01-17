#include<stdio.h>  
#include<string.h>  
int main()  
{  
       int i;  
      char data[200];  
      strncpy(data, "This is Adarsh", 200);
      for(i=0;i<strlen(data);i++)  
      {     
       if(data[i]==' ')   
        {  
          continue;
        }
       else  
        {   
          if(data[i]>= 'x')  
           {  
            data[i]=data[i]-26;  
            }  

           data[i]=data[i]+3;  
          }  
     }  
      printf("%s\n",data); //cipher text.  
    return 0;
  }  

