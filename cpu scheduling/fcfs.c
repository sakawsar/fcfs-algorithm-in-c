#include <stdio.h>
int main(){
    printf("Enter the number of processes:");
    int size;
    scanf("%d",&size);
    int arr[size];
    int pid[size];
    for( int i = 0; size > i; i++ ) {
        pid[i] = i + 1;
        printf("Enter the execution time of process %d: ",pid[i]);
        scanf("%d",&arr[i]);
    }
    int wt[size];
    int temp_wt = 0;
    float total_wt;
    for(int k = 0; size > k; k++){
        wt[k] = temp_wt;
        total_wt = total_wt + wt[k];
        printf("Waiting time for process %d is %d\n",pid[k],wt[k]);
        temp_wt = temp_wt + arr[k];
    }
    float avg_wt;
    avg_wt = total_wt / size;
    printf("Total waiting time is: %f\n",total_wt);
    printf("Average witing time for FCFS scheduling algorithm is: %f",avg_wt);
    return 0;
}