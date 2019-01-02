#include <stdio.h>
void butler(void);
int fathm_ft(int);

int main() {
    int num;
    num = 1;

    printf("I am a simplee\b ");
    printf("computer.\n");
    printf("My favorite number\t is %d because it is first.\n", num);

    //fathm_ft
    int feet,fathmos;

    fathmos = 2;
    feet = fathm_ft(fathmos);
    printf("There are %d feet in %d fathmos!\n",feet,fathmos);
    printf("Yes, I said %d feet!\n", 6 * fathmos);

    //two_func
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler (void){
    printf("You rang, sir?\n");
}

/**
 * 把英寻转换为英尺
 * @param fathoms 英寻
 * @return 英尺
 */
int fathm_ft(int fathoms){
    int feet;

    feet = 6 * fathoms;
    return feet;
}