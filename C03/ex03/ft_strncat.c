char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i ;
    i=0;
    while (dest[i] != '\0'){

        i++;
    }
    unsigned int count =0;
    int b = i;
    i=0;
    while (src[i] != '\0' && count < nb){
      dest[b] = src[i];
      i++;
      b++;
      count++;
      
    }
    dest[b] = '\0';
    return dest;
}
