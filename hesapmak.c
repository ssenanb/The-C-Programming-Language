#include<stdio.h>
#include<math.h>

void toplama(int a, int b)
{
    int topla = a + b;
    printf("%d\n",topla);
}

void çıkarma(int a, int b)
{
    int çıkar = a - b;
    printf("%d\n",çıkar);
}

void bölme(int a, int b)
{
    int böl = a / b;
    printf("%d\n",böl);
}

void çarpma(int a, int b)
{
    int çarp = a * b;
    printf("%d\n",çarp);
}

void mod_alma(int a, int b)
{
    int mod = a % b;
    printf("%d\n",mod);
}

void üs_alma(double a, double b)
{
    int üs = pow(a,b);
    printf("%d\n",üs); 
}

void karekök(float a)
{
    printf("%.2f\n",sqrt(a));
}

int main()
{
    
    char işlem;
    int a,b;

    printf("işlemi seçiniz(+,-,*,/,x,!,#)\nişlem: ");
    // ! mod alma, # kök alma , x üs almak için kullanılır.
    scanf(" %c",&işlem);

   
      if (işlem == '+'){
        printf("sayıları giriniz: ");
        scanf("%d %d", &a,&b);
        toplama(a,b);
    
      }else if(işlem == '-'){
        printf("sayıları giriniz: ");
        scanf("%d %d", &a,&b);
        çıkarma(a,b);
        
      }else if(işlem == '/'){
        printf("sayıları giriniz: ");
        scanf("%d %d", &a,&b);
        bölme(a,b);
        
      }else if(işlem == '*'){
        printf("sayıları giriniz: ");
        scanf("%d %d", &a,&b);
        çarpma(a,b);
        
      }else if(işlem == 'x'){
        printf("sayıları giriniz: ");
        scanf("%d %d", &a,&b);
        üs_alma(a,b);
        
      }else if(işlem == '#'){
        printf("sayıyı giriniz: ");
        scanf("%d",&a);
        karekök(a);
        
      }else if(işlem == '!'){
        printf("sayıları giriniz: ");
        scanf("%d %d", &a,&b);
        mod_alma(a,b);
      }
    
    return 0;
}

