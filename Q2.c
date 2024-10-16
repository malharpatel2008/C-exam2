int main() {
    int a, b=1, c=8, lowest;
    printf("enter 1 number :");
    scanf("%d",&a);
    printf("enter 1 number :");
    scanf("%d",&b);
    printf("enter 1 number :");
    scanf("%d",&c);


    if (a < b) {
        if (a < c) {
            lowest = a;
        } else {
            lowest = c;
        }
    } else {
        if (b < c) {
            lowest = b;
        } else {
            lowest = c;
        }
        
}
printf("%d",lowest);
}
	
	

