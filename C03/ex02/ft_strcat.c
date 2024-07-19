char *ft_strcat(char *dest, char *src){
    int i ;
    i=0;
    while (dest[i] != '\0'){
        
        i++;
    }
    int count = i;
    i =0;
    while (src[i] != '\0'){
      dest[count] = src[i];
      count++;
      i++;
    }
    dest[count] = '\0';
    return dest;
}
