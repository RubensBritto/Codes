#include <stdio.h>

int main(void) {
  int num,i,j,result = 0;
  printf("Digite o tamanho do vetor\n");
  scanf("%d",&num);
  int ver[num];
  for(i = 0; i < num; i++)
  {
    scanf("%d",&ver[i]);
  }
  for(i = 0; i < num; i++)
  {
    for(j = i+1; j < num; j++)
    {
      if(ver[i] > ver[j])
      {
        int aux = ver[i];
        ver[i] = ver[j];
        ver[j] = aux;
      }
    }
  }

  for(i = 0; i < num; i++)
  {
    if ((ver[i+1] - ver[i])>= result)
    {
      result = ver[i+1] - ver[i]; 
    } 
  }

  printf("A maior diferença é %d",result); 
}
