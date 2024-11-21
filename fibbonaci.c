int fibonacci(int pstn) {
  	if(pstn == 0 || pstn == 1 ) {
  		return 1;
	  }
	  else
	  return fibonacci(pstn -1) + fibonacci(pstn -2);
  }
  // main
  int main() {
  		int num,i;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("All fibonacci series up to %d are :", num);
    for(i=0; i<=num; i++){
    printf("%ld,", fibonacci(i));
}
}
