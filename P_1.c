// DATE = 01st June , 2025
// PROJECT 1 : MODERN PERIODIC TABLE 

#include<stdio.h>
int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to Modern Periodic Table\n\n");
    printf("> Enter 1 to know about an element\n\n");
    printf("Enter 2 to close the periodic table\n");

    printf("ENTER\n");
    scanf("%d",&n);

    if(n==1){
        printf("Press 3 to search the element by atomic number\n\n");
        printf("ENTER\n");
        scanf("%d", &m);

        if(m==3){
            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if(a==1){
                printf("Name : Hydrogen\n");
                printf("Symbol : H\n");
                printf("Atomic Number : 1\n");
                printf("Atomic Mass : 1\n");
                printf("Electronic Configuration : 1s^1 \n");
            }
            if(a==2){
                printf("Name : Helium\n");
                printf("Symbol : He\n");
                printf("Atomic Number : 2\n");
                printf("Atomic Mass : 4\n");
                printf("Electronic Configuration : 1s^2 \n");
            }
            if(a==3){
                printf("Name : Lithium\n");
                printf("Symbol : Li\n");
                printf("Atomic Number : 3\n");
                printf("Atomic Mass : 7\n");
                printf("Electronic Configuration : 1s^2 2s^1 \n");
            }
            if(a==4){
                printf("Name : Beryllium\n");
                printf("Symbol : Be\n");
                printf("Atomic Number : 4\n");
                printf("Atomic Mass : 9\n");
                printf("Electronic Configuration : 1s^2 2s^2 \n");
            }
            if(a==5){
                printf("Name : Boron\n");
                printf("Symbol : B\n");
                printf("Atomic Number : 5\n");
                printf("Atomic Mass : 11\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^1 \n");
            }
            if(a==6){
                printf("Name : Carbon\n");
                printf("Symbol : C\n");
                printf("Atomic Number : 6\n");
                printf("Atomic Mass : 12\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^2 \n");
            }
            if(a==7){
                printf("Name : Nitrogen\n");
                printf("Symbol : N\n");
                printf("Atomic Number : 7\n");
                printf("Atomic Mass : 14\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^3 \n");
            }
            if(a==8){
                printf("Name : Oxygen\n");
                printf("Symbol : O\n");
                printf("Atomic Number : 8\n");
                printf("Atomic Mass : 16\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^4 \n");
            }
            if(a==9){
                printf("Name : Flourine\n");
                printf("Symbol : F\n");
                printf("Atomic Number : 9\n");
                printf("Atomic Mass : 18\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^5 \n");
            }
            if(a==10){
                printf("Name : Neon\n");
                printf("Symbol : Ne\n");
                printf("Atomic Number : 10\n");
                printf("Atomic Mass : 20\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^6 \n");
            }
        }
    }
    else if(n==2){
        printf("Do you want to exit? (Yes/No)\n");
        printf("> Press 6 for Yes\n");
        printf("> Press 7 for No\n");

        printf("ENTER\n");
        scanf("%d",&Exit);

        if(Exit==6){
            printf("Are you sure , you want to close the periodic table? (Yes/No)\n");
            printf("> Press 4 for Yes\n");
            printf("> Press 5 for No\n");

            printf("ENTER\n");
            scanf("%d",&Exit);

            if(Exi==4){
                printf("The periodic table has closed.");
            }
            else if(Exi==5){
                printf("Periodic table has not closed and you can continue to learn more about the elements.\n\n");

                printf("Enter the atomic number of the element to be searched :\n\n");
                scanf("%d",&a);

                if(a==1){
                    printf("Name : Hydrogen\n");
                    printf("Symbol : H\n");
                    printf("Atomic Number : 1\n");
                    printf("Atomic Mass : 1\n");
                    printf("Electronic Configuration : 1s^1 \n");
                }
                if(a==2){
                    printf("Name : Helium\n");
                    printf("Symbol : He\n");
                    printf("Atomic Number : 2\n");
                    printf("Atomic Mass : 4\n");
                    printf("Electronic Configuration : 1s^2 \n");
                }
                if(a==3){
                    printf("Name : Lithium\n");
                    printf("Symbol : Li\n");
                    printf("Atomic Number : 3\n");
                    printf("Atomic Mass : 7\n");
                    printf("Electronic Configuration : 1s^2 2s^1 \n");
                }
                if(a==4){
                    printf("Name : Beryllium\n");
                    printf("Symbol : Be\n");
                    printf("Atomic Number : 4\n");
                    printf("Atomic Mass : 9\n");
                    printf("Electronic Configuration : 1s^2 2s^2 \n"); 
                }
                if(a==5){
                    printf("Name : Boron\n");
                    printf("Symbol : B\n");
                    printf("Atomic Number : 5\n");
                    printf("Atomic Mass : 11\n");
                    printf("Electronic Configuration : 1s^2 2s^2 2p^1 \n");  
                }
                if(a==6){
                    printf("Name : Carbon\n");
                    printf("Symbol : C\n");
                    printf("Atomic Number : 6\n");
                    printf("Atomic Mass : 12\n");
                    printf("Electronic Configuration : 1s^2 2s^2 2p^2 \n");
                }
                if(a==7){
                    printf("Name : Nitrogen\n");
                    printf("Symbol : N\n");
                    printf("Atomic Number : 7\n");
                    printf("Atomic Mass : 14\n");
                    printf("Electronic Configuration : 1s^2 2s^2 2p^3 \n");
                }
                if(a==8){
                    printf("Name : Oxygen\n");
                    printf("Symbol : O\n");
                    printf("Atomic Number : 8\n");
                    printf("Atomic Mass : 16\n");
                    printf("Electronic Configuration : 1s^2 2s^2 2p^4 \n");
                }
                if(a==9){
                    printf("Name : Flourine\n");
                    printf("Symbol : F\n");
                    printf("Atomic Number : 9\n");
                    printf("Atomic Mass : 18\n");
                    printf("Electronic Configuration : 1s^2 2s^2 2p^5 \n");
                }
                if(a==10){
                    printf("Name : Neon\n");
                    printf("Symbol : Ne\n");
                    printf("Atomic Number : 10\n");
                    printf("Atomic Mass : 20\n");
                    printf("Electronic Configuration : 1s^2 2s^2 2p^6 \n");
                }
            }
        }
        else if(Exit==7){
            printf("Periodic table has not closed and you can continue to learn more about elements\n\n");

            printf("Enter the atomic number of the element to be searched : ");
            scanf("%d", &a);

            if(a==1){
               printf("Name : Hydrogen\n");
               printf("Symbol : H\n");
               printf("Atomic Number : 1\n");
               printf("Atomic Mass : 1\n");
               printf("Electronic Configuration : 1s^1 \n"); 
            }
            if(a==2){
                printf("Name : Helium\n");
                printf("Symbol : He\n");
                printf("Atomic Number : 2\n");
                printf("Atomic Mass : 4\n");
                printf("Electronic Configuration : 1s^2 \n");
            }
            if(a==3){
                printf("Name : Lithium\n");
                printf("Symbol : Li\n");
                printf("Atomic Number : 3\n");
                printf("Atomic Mass : 7\n");
                printf("Electronic Configuration : 1s^2 2s^1 \n");
            }
            if(a==4){
                printf("Name : Beryllium\n");
                printf("Symbol : Be\n");
                printf("Atomic Number : 4\n");
                printf("Atomic Mass : 9\n");
                printf("Electronic Configuration : 1s^2 2s^2 \n");
            }
            if(a==5){
                printf("Name : Boron\n");
                printf("Symbol : B\n");
                printf("Atomic Number : 5\n");
                printf("Atomic Mass : 11\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^1 \n");  
            }
            if(a==6){
                printf("Name : Carbon\n");
                printf("Symbol : C\n");
                printf("Atomic Number : 6\n");
                printf("Atomic Mass : 12\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^2 \n");
            }
            if(a==7){
                printf("Name : Nitrogen\n");
                printf("Symbol : N\n");
                printf("Atomic Number : 7\n");
                printf("Atomic Mass : 14\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^3 \n");
            }
            if(a==8){
                printf("Name : Oxygen\n");
                printf("Symbol : O\n");
                printf("Atomic Number : 8\n");
                printf("Atomic Mass : 16\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^4 \n"); 
            }
            if(a==9){
                printf("Name : Flourine\n");
                printf("Symbol : F\n");
                printf("Atomic Number : 9\n");
                printf("Atomic Mass : 18\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^5 \n");
            }
            if(a==10){
                printf("Name : Neon\n");
                printf("Symbol : Ne\n");
                printf("Atomic Number : 10\n");
                printf("Atomic Mass : 20\n");
                printf("Electronic Configuration : 1s^2 2s^2 2p^6 \n");
            }
        }
    }
    return 0;
}