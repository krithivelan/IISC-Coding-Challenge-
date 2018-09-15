#include<stdio.h>
#include<math.h>

int main()
{
int arr[50][50],i,j,a=0,m,n,t=0,one_count=0,zero_count=0,row,col;
int check=1,arr_print[50],i_sum=0,k=0,con;
float sum=0.0f,float_n=0.0f;

scanf("%d",&t);

if(t>=1 && t<=100)
{
    while( check<=t )
    {
        scanf("%d %d",&m,&n);

        if( m>=1 && m<=50 && n>=1 && n<=50 )
        {
                /////////////////////////////////

                for(i=1;i<=m;i++){
                    for(j=1;j<=n;j++){
                        scanf("%d",&arr[i][j]);
                    }
                }

                row=m;
                col=n;

                for(i=1;i<=row;i++){
                    if(arr[i][1]==0){
                        for(j=1;j<=col;j++){
                            if(arr[i][j]==0){
                                arr[i][j]=1;
                            }
                            else{
                                arr[i][j]=0;
                            }
                        }
                    }
                }

                for(j=2;j<=col;j++){
                    zero_count = 0;
                    one_count = 0;
                    for(i=1;i<=row;i++){
                        if(arr[i][j]==0){
                            zero_count +=1;
                        }
                        else{
                            one_count +=1;
                        }
                        con = 0;
                        if(i==row && con == 0){
                            if(zero_count > one_count){
                                for(a=1;a<=row;a++){

                                    con = 1;

                                    if(arr[a][j]==0){
                                        arr[a][j] = 1;
                                    }
                                    else{
                                        arr[a][j] = 0;
                                    }
                                }
                            }
                        }
                    }
                }

                ///////////////////////////////////////////

                for(i=1;i<=row;i++)
                {
                        for(j=1;j<=col;j++)
                        {
                            printf("%d",arr[i][j]);
                        }
                    printf("\n");
                }

                //////////////////////////////////////////


                while(row>0)
                {
                    col = n;
                    k=0;
                    while(col>0)
                    {
                        float_n = arr[row][col] * ( pow(2,k) ) ;
                        sum = sum + float_n;
                        k++;
                        col--;
                        printf("sum => %f",sum);
                    }
                    row--;
                }
                i_sum = sum;

                arr_print[check] = i_sum;
                i_sum = 0;
                sum = 0;
                check++;

                /////////////////////////////////
        }
    }

    if(arr_print!=NULL){
        for(i=1;i<=t;i++){
            printf("%d\n",arr_print[i]);
        }
    }
}



return 0;

}
