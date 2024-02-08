//this program is just made for revision of Structure topic in C-language

#include<stdio.h>
#include<stdlib.h>
struct cards
{
    int face;  //for 0-13 for all cards
    int shape; //0-3 for all shapes
    int color; //0-1 for all colors
};

int main()
{
    //initializing array of structures
    struct cards deck_of_cards[52];

    for(int i =0; i<52;i++)
    {
        printf("Enter face value for card %d",i+1);
        scanf("%d",&deck_of_cards[i].face);

        printf("Enter shape value for card %d",i+1);
        scanf("%d",&deck_of_cards[i].shape);
        
        printf("Enter color value for card %d",i+1);
        scanf("%d",&deck_of_cards[i].color);
        
    }


    for(int i =0; i<52;i++)
    {
        printf(" face value for card %d is %d",i+1, deck_of_cards[i].face);

        printf(" shape value for card %d is %d",i+1,deck_of_cards[i].shape);

        
        printf(" color value for card %d is %d ",i+1,deck_of_cards[i].color);

        
    }

    

    
}
