#include<stdio.h>
int x1 = 1, x2 = 1, x3 = 1;
void x_2 ()
{
  if (x2 == 1)
    printf ("\n\nOUTPUT IS: C\n\n");
  else
    printf ("\n\nOUTPUT IS: D\n\n");
  x2 = -x2;
}
void x_1 ()
{
  if (x1 == 1)
    printf ("\n\nOUTPUT IS: C\n\n");
  else
    x_2 ();
  x1 = -x1;
}
void x_3 ()
{
  if (x3 == 1)
    x_2 ();
  else
    printf ("\n\nOUTPUT IS: D\n\n");
  x3 = -x3;
}
int main ()
{
  int ch_continue;
  char ch;
  do
    {
      fflush (stdin);
      printf ("\nEnter a character - A or B: ");
      scanf (" %c", &ch);	//lesson: put a space between the opening of quotes and the delimiter.
      switch (ch)
	{
	case 'A':
	  x_1 ();
	  break;
	case 'B':
	  x_3 ();
	  break;
	default:
	  printf
	    ("\nAn incorrect input has been entered. Enter 'A' or 'B' only.");
	}
      fflush (stdin);
      printf
	("\nDo you want to enter one more character? Press '1'. Otherwise, press '2'.\nEnter your choice: ");
      scanf ("%d", &ch_continue);
    }
  while (ch_continue == 1);
  return 0;
}