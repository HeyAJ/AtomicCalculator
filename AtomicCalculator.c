# include <stdio.h>

int main() {

    int AtomicNum;
    float AtomicWeight;

    printf("Please enter the Atomic Number of the Element: ");
    scanf("%d", &AtomicNum);

    printf("Please enter the Atomic Weight of the Element: ");
    scanf("%f", &AtomicWeight);

    int Neutron = AtomicWeight - AtomicNum;

    printf("The Protons of the Element Which you have Entered are:  %d\n", AtomicNum);

    printf("The Electrons of the Element Which you have Entered are:  %d\n", AtomicNum);

    printf("The Neutrons of the Element Which you have Entered are:  %d\n", Neutron);
    

    return 0;


}
