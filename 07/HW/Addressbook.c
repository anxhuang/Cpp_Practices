#include <stdio.h>

typedef struct Member {
    char name[80];
    char phone[80];
    char email[80];
} Member;

int main() {
    
    Member ms[50];
    int i = 0;
    
    char filename[80];
    FILE *f;

    char op;
    while (op != 'q') {
        scanf("%c", &op);
        switch (op) {
            case 'i':
                scanf("%s", ms[i].name);
                scanf("%s", ms[i].phone);
                scanf("%s", ms[i].email);
                i++;
                break;
            case 'l':
                if (i > 0) {
                    for (int j=0; j<i; j++) {
                        printf("#%d\n", j+1);
                        printf("Name: %s\n", ms[j].name);
                        printf("Phone: %s\n", ms[j].phone);
                        printf("Email: %s\n", ms[j].email);
                    }
                } else {
                    printf("No data.\n");
                }
                break;
            case 's':
                scanf("%s", filename);
                f = fopen(filename, "w");
                fprintf(f, "%d\n", i);
                for (int j=0; j<i; j++) {
                    fprintf(f, "%s\t", ms[j].name);
                    fprintf(f, "%s\t", ms[j].phone);
                    fprintf(f, "%s\n", ms[j].email);
                }
                fclose(f);
                break;
            case 'o':
                scanf("%s", filename);
                f = fopen(filename, "r");
                fscanf(f, "%d", &i);
                for (int j=0; j<i; j++) {
                    fscanf(f, "%s\t", ms[j].name);
                    fscanf(f, "%s\t", ms[j].phone);
                    fscanf(f, "%s\n", ms[j].email);
                }
                break;
            case 'c':
                i = 0;
                break;
            case 'q':
                break;
            default:
                break;
        }
    }
    
    return 0;
}
