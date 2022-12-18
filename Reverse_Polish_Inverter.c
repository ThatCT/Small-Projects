int evalRPN(char ** tokens, int tokensSize){
    long long* s = calloc(tokensSize, sizeof(long long));
    int sc = 0;
    for(int i = 0; i < tokensSize; i++) {
        if (strcmp(tokens[i], "+") == 0) {
            s[sc-2] += s[sc-1];
            s[sc-1] = 0;
            sc--;
        }
        else if (strcmp(tokens[i], "-") == 0) {
            s[sc-2] -= s[sc-1];
            s[sc-1] = 0;
            sc--;
        }
        else if (strcmp(tokens[i], "*") == 0) {
            s[sc-2] *= s[sc-1];
            s[sc-1] = 0;
            sc--;
        }   
        else if (strcmp(tokens[i], "/") == 0) {
            s[sc-2] /= s[sc-1];
            s[sc-1] = 0;
            sc--;
        }
        else {
            s[sc++] = atoi(tokens[i]);
        }
    }
    return s[0];
}
