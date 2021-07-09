#include <stdio.h>
#include <string.h>
void GetDataByString(char *strInput)
{
  if (strInput == NULL) {
    return;
  }
  int data = 0;
  char *temp = NULL;
  temp = strtok(strInput, ",");
  while (temp != NULL) {
    sscanf(temp, "%x", &data);
    printf("%x\n", data);
    temp = strtok(NULL, ",");
  }
}

int main()
{
    char str[] = "123, 456, 001, 354";
  GetDataByString(str);
  system("pause");
  return 0;
}
