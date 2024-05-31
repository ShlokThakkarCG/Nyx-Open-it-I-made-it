#include<stdio.h>
main(){
	char c;
	do{
    int n,id;
    char name[10];
    printf("Enter your id: ");
    scanf("%d",&id);
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter number of subjects :");
    scanf("%d",&n);
    char subname[n][20];
    int a[n],sum=0;
    for(int i=0;i<n;i++){
    	printf("Enter name of subject: ");
    	scanf("%s",subname[i]);
        printf("Enter marks of subject- %s :",subname[i]);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int per;
    char grade;
    per=sum/n;
    for(int z=0;z<50;z++){
    	printf("-");
	}
	printf("\nID: %d",id);
	printf("\nName: %s\n",name);
	for(int z=0;z<50;z++){
    	printf("-");
	}
	printf("\nSubject-Marks-Grade");
    for (int i = 0; i < n; i++) {
    	if(a[i]>=90){
    		grade='A';
		}
		else if (a[i]>=75){
			grade='B';
		}
		else if (a[i]>=50){
			grade='C';
		}
		else if (a[i]>=35){
			grade='D';
		}
		else{
			grade='F';
		}
    	printf("\n%s-%d-%c", subname[i], a[i],grade);
    }
    printf("\n");
    for(int z=0;z<50;z++){
    	printf("-");
	}
	printf("\n");
	printf("You have scored %d percent",per);
	printf("\n");
	for(int z=0;z<50;z++){
    	printf("-");
	}
	printf("\nWant to add more? (y/n)\n");
	scanf("%c",&c);
	}
	while(c='y');
}
