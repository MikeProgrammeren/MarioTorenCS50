#include <stdio.h>
#include <stdlib.h>

int GetInt();
void BuildTower(int Height);

int main (void){
    //input verkrijgen
    int Input = GetInt();

    //toren bouwen
    BuildTower(Input);
}


int GetInt(){   
    //Blijft invoer vragen tot de gebruik 1 - 8 invoert `
    //Converteer de string naar een integer
    char StringInvoer[20];
    int Integer;
    do{
        printf("Invoer 1 tm 8: ");
        fgets(StringInvoer, 20, stdin); 
        Integer = atoi(StringInvoer);
    } while(Integer  < 1 || Integer > 8);

    printf("Validation was succesvol. Your input was: %i\n", Integer);
    return Integer; 
}

void BuildTower(int Height){
    //Breedte van de toren is afhankelijk van de hoogte
    int Witdh = (4 + 2 * Height) -1;
    //De verticale en horizontale as beginnen bij 0. 
    //Daarom -1 om de invoer de compenseren
    Height -=1;
    
    //Verticale as voor de hoogte
    for(int Vertical = 0;Vertical <= Height;Vertical += 1){
        //Horizontale as voor de breedte
        for(int Horizontal  = 0;Horizontal  <= Witdh;Horizontal +=1){
            
            if(     Horizontal ,
                    //Pyramide start bij ##..##. Dat is een # bij horizontaal (>= 0 en < 3) en bij (>= 4 en < 6) 
                    //Hoe hoger de pyramide wordt, hoe meer de oorspronkelijke tekens naar rechts verschuiven. 
                        //Daarom + Height voor de .. erbij vanuit de rechter marge
                    //Bij een volgende laag wordt de pyramide een #-teken per laag links en een rechts breder
                    (Horizontal  >=  Height - Vertical && Horizontal  < 2 + Height ) ||
                    (Horizontal  >= 4 + Height  && Horizontal < 6 + Height + Vertical)

            )printf("#");  
            else printf("."); //Alle vakken zijn gevuld, dus waar geen # staat moet een . staan. 
        }
        printf("\n");
    }
}
