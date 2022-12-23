int minPartitions(char * n){
    int maxval = 0;
    for(int i = 0; n[i] != '\0'; i++){
        if(n[i]-'0' > maxval){
            maxval = n[i] - '0';
        }
        if(n[i] - '0' == 9){
            break;
        }
    }
    return maxval;
}
