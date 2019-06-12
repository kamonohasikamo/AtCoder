#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell {
  int a;
  char *s;
};

int main(int argc, char* argv[]) {
  int i, j;
  struct cell cellIntAndString[argc];
  for (i = 0; i < argc; i++) {
    char* tp;
    tp = strtok(argv[i+1], ":");
    cellIntAndString[i].a = atoi(tp);
    while(tp = strtok(NULL, ":") ){
      strcpy(cellIntAndString[i].s,tp);
    }
  }
	for (i=0;i<3;i++) {
		printf("i = %d, a[i] =%d\n", i, cellIntAndString[i].a);
	}
  // int m = atoi(argv[argc+1]);
  // int checkFlag = 0;
  // int count=1;
  // int ansStruct[10];
  // for(i=0;i<argc;i++) {
  //   if (cellIntAndString[i].a % m == 0) {
  //     if (checkFlag == 0) {
  //       checkFlag = 1;
  //       ansStruct[0] = i;
  //     } else if (checkFlag == 1){
  //       checkFlag = 2;
  //       ansStruct[count] = i;
  //       count++;
  //     }
  //   }
  // }
  // struct cell tmp;
  // int ansStructLength = sizeof ansStruct / sizeof ansStruct[0];
  // switch (checkFlag) {
  //   case 0:
  //     printf("%d\n", m);
  //     break;
  //   case 1:
  //     printf("%s\n", cellIntAndString[ansStruct[0]].s);
  //     break;
  //   case 2:
  //     for (i=0; i < ansStructLength; i++) {
  //       for (j=i+1; j < ansStructLength; j++) {
  //         if (cellIntAndString[i].a > cellIntAndString[j].a) {
  //           tmp =  cellIntAndString[i];
  //           cellIntAndString[i] = cellIntAndString[j];
  //           cellIntAndString[j] = tmp;
  //         }
  //       }
  //     }
  //     for (i = 0; i < ansStructLength; i++) {
  //       printf("%s",cellIntAndString[i].s);
  //     }
  //     printf("\n");
  //     break;
  // }
  return 0;
}
