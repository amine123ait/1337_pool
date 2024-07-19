int ft_strncmp(char *s1, char *s2, unsigned int n) {
	unsigned int i;
	i=0;
		if (n == 0){
			return 0;
		}	
		while (s1[i] != '\0' && s2[i] != '\0' && n > i){
			if (!(s1[i] == s2[i])){
				 return s1[i] - s2[i];
			}
			i++;
			

		}
		if (n<i){
			return 0;
		}
	if (i == n) {
    	return 0; 
	} 
	else {
        return s1[i] - s2[i];  
  	
	}

}
