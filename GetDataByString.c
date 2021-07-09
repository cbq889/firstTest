void GetDataByString(char *strInput)
{
  if (strInput == NULL) {
    return;
  }
  int data = 0;
  char *temp = NULL;
  temp = strtok(strInput, ",");
  while (temp != NULL) {
    sprintf(temp, "%x", data);
    printf("%d\n", data);
    temp = strtok(NULL, ",");
  }
}

int main()
{
  GetDataByString("123, 456, 001, 354");
  return 0;
}
