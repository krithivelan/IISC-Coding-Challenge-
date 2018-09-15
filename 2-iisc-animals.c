#include<stdio.h>

int main(){
    int t=0,count=0,condition=0;
    unsigned long int n,arr[100000],arr_spread[100000],i,j,max,arr_ans[100];
    scanf("%d",&t);
    count = t;
//do{
    //t=condition;
    //test condition
    do{
        //total no of elements
        scanf("%d",&n);

        //checking total elements
        if(n>=1&&n<=100000){

            //scanning array elements
            for(i=1;i<=n;i++){
                scanf("%d",&arr[i]);
            }

            //giving first spread as 1
            arr_spread[0]=1;

            //checking the birth count - before and present counts
            for(i=1;i<=n;i++){

                for(j=i;j>=1;j--){

                    if( arr[j] <= arr[i] ) {
                        arr_spread[i] += 1;
                    }
                    else{
                        break;
                    }
                }
            }

            //calculating the maximum elements
            max=0;
            for(i=1;i<=n;i++){
                if( arr_spread[i] > arr_spread[max] ){
                    max=i;
                }
            }

            //printing the answer
            arr_ans[t] = arr_spread[max];
            n=0;
        }
        t--;
    }while(t>=1&&t<=100);

    t=0;//count=0;

    while(count>0){
        printf("%d\n",arr_ans[count]);
        count--;
    }
    scanf("%d",&condition);

//}while(condition!=NULL);

    return 0;
}
