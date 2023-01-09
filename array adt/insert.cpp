#include <stdio.h>

int  main(){
    printf("Gaurang gaur\n");
    printf("2100320120066\n");
    int set1[1000], set2[1000], diff[2000];
    int n, m, dir, present, ind = 0;
    printf("Enter n, m: ");
    scanf("%d%d", &n, &m);
    printf("set 1:");
    for (int i = 0; i < n; i++){
        scanf("%d", &set1[i]);
    }printf("set 2:");
    for (int i = 0; i < m; i++){
        scanf("%d", &set2[i]);
    }
    printf("a - b(1), b - a(2): ");
    scanf("%d", &dir);
    if (dir == 1){
        for (int i = 0; i < n; i++){
            present = 0;
            for (int j = 0; j < m; j++){
                if (set1[i] == set2[j]){
                    present = 1;
                    break;
                }
            }
            if (present == 0){
                diff[ind] = set1[i];
                ind += 1;
            }
        }
    }
    else{
        for (int i = 0; i < m; i++){
            present = 0;
            for (int j = 0; j < n; j++){
                if (set2[i] == set1[j]){
                    present = 1;
                    break;
                }
            }
            if (present == 0){
                diff[ind] = set2[i];
                ind += 1;
            }
        }
    }
    for (int i = 0; i < ind; i++){
        printf("%d", diff[i]);
    }
    return 0;
}
