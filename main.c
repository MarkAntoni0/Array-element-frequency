#include <stdio.h>
#include <stdlib.h>
int main()
{
    //gathering the array size
    int originalArraySize;
    printf("Insert the number of elements in your array: \n");
    scanf("%d",&originalArraySize);
    //initializing the array and th frequency array
    int originalArray[originalArraySize];
    int freqArray[originalArraySize];
    //filling the original array
    for(int i=0; i<originalArraySize;i++){
        printf("insert the element number [%d] in the array: ", (i+1));
        scanf("%d",&originalArray[i]);
        freqArray[i]=-1;
    }
    //discovering the elements frequency
    for(int i=0; i<originalArraySize;i++){
            int count=1;
        for(int j=i+1;j<originalArraySize;j++){
            if(originalArray[i]==originalArray[j]){
                count++;
                freqArray[j] = 0; // marking those repeated items to avoid double counting them
            }
        }
        if(freqArray[i]!=0){
            freqArray[i]=count; //assigning the frequency to its related item
            printf("the item %d appeared %d times.\n",originalArray[i],freqArray[i]);
        }
    }
    return 0;
}
