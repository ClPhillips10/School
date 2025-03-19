#include <math.h>
#include <stdio.h>


double Add(double x, double y){
    double result = x + y;
    return result;
}
double Divide(double x, double y){
    
        if(x == (int)x && y == (int)y)
        {
            double result = (int)x / (int)y;
            return result;
        }
        else{
        double result = x/y;
        return result;
        }
    
}
double Multiply(double x, double y){
    double result = x * y;
    return result;
}
double Modulus(double x, double y){
    if(x != (int)x || (y != (int) y && y == 0))
    {
    printf("Modulo requires integer.\nCannot modulo by zero.");
    return 0;
    }
    else if(x != (int)x || y != (int) y)
    {
    printf("cannot modulo by zero.\n");
    return 0;
    }
    else
    {
    double modulused = (int)x % (int)y;
    printf("%lf" , modulused);
    return modulused;
    }

    
}
double Exponent(double x, double y){
   /* if(y < 0 && x < 0 && (x < 0 && y != (int)y))
    {
        printf("Exponent cannot be negative\nWith a negative base, exponet must be an int.");
        return 0;
    }
    else if(x < 0 && y != (int)y)
    {
        printf("With a negative base, exponet must be an int.");
        return 0;
    }
    else if(y < 0 && x < 0)
    {
        printf("Exponent cannot be negative.");
        return 0;
    }*/
    
     double exponetial = pow(x,y);
    return exponetial;
    

}
double Subtract(double x, double y){
    double result = x - y;
    
    return result;
}



int main(){
    char operator;
    double x;
    double y;
    double result;
   // {
        printf("Enter the ops: \n");
        //printf("Enter x: \n");
        scanf("%lf", &x);
        //printf("Enter operator: ");
        scanf(" %c", &operator);
       // printf("Enter y: ");
        scanf("%lf", &y );
       
       
       //ENABLE FOR TESTS
       // x = -2;
        // y = -4.5;
        // operator = '^';
    
    if (operator == '+')
    {
        
       result = Add(x,y);
        
    }
    else if (operator == '-')
    {
        result = Subtract(x,y);
        
    }
    else if(operator == '*')
    {
        result = Multiply( x,y);
    }
    else if(operator == '/')
    {
        if(y == 0)
        {
            printf("Cannot divide by zero\n");
            return 0;
        }
        result = Divide(x, y);
    }
    else if(operator == '%')
    {
        if(x != (int)x || (y != (int) y && y == 0))
    {
        printf("Modulo requires integers\nCannot modulo by zero");
        return 0;
    }
        else if(x != (int)x || y != (int) y)
    {
        printf("cannot modulo by zero.\n");
        return 0;
    }
    else
    {
        result = Modulus(x,y);
    }
    }
    else if (operator == '^')
    {
        if( y < 0 && (x < 0 && y >! 0))
        {
            printf("Exponent cannot be negative.\n");
            return 0;
        }
        else if((x != (int)x) && y >! 0 )
            {
                printf("With a negative base, exponent must be an int.\n");
                return 0;
            }
        else if(y < 0 && x < 0)
        {
            printf("Exponent cannot be negative \nWith a negative base, exponent must be an int");
            return 0;
        }
        else
        result = Exponent(x,y);
    }

    else{
        printf("Unknown operator");
        return 0;
    }
    
   if(result != (int)result)
    {
        printf("%lf", result);
    }
    else if(result == (int)result)
    {
        if(x != (int)x && y != (int)y)
        printf("%lf",result);
        else if(x == (int)x || y == (int)y)
        printf("%d", (int)result);
    }
    if(result > 1000)
    printf("Large number\n");
    else if (result < -1000)
    printf("Small number");


    return 0;



}


