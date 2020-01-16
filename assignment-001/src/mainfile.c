#include"helperfile.c"

int main(int argc, char* argv[])
{
  float iNum1 = 0, iNum2 = 0, iAns = 0;
  int iChoice = 0;
  
  while(1)
    {
      
      printf("\nENTER NUMBER 1 : ");
      scanf("%f", &iNum1);

      printf("\nENTER NUMBER 2 : ");
      scanf("%f", &iNum2);

      printf("\n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION \n5.EXIT\n");
      printf("\nENTER CHOICE : ");
      scanf("%d", &iChoice);

      switch(iChoice)
	{
	case 1:
	  printf("\nAddition of %f & %f is : %f\n", iNum1, iNum2, AddNums(iNum1, iNum2));
	  break;

	case 2:
	  printf("\nSubtraction of %f & %f is : %f\n", iNum1, iNum2, SubNums(iNum1, iNum2));
	  break;

	case 3:
	  printf("\nMultiplication of %f & %f is : %f\n", iNum1, iNum2, MultNums(iNum1, iNum2));
	  break;

	case 4:
	  printf("\nDivision of %f & %f is : %f\n", iNum1, iNum2, DivNums(iNum1, iNum2));
	  break;

	case 5:
	  exit(0);

	default:
	  printf("\nENTER CORRECT CHOICE...!!!");
	  break;
	}
    }
  return 0;
}
