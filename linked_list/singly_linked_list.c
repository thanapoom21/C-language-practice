#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node
{
  int info;
  struct node *link;
} vertex;

struct node *start = NULL;

struct node *createNode()
{
  struct node *t;
  t = (struct node *)malloc(sizeof(struct node));
  return (t);
}

int insert(int pos, int d)
{
  struct node *new;
  new = createNode();
  new->info = d;

  if (pos == 1)
  {
    new->link = NULL;

    if (start == NULL)
    {
      start = new;
    }
    else
    {
      new->link = start;
      start = new;
    }
  }
  else
  {
    struct node *pre = start;
    for (int i = 2; i < pos; i++)
    {
      if (pre == NULL)
      {
        break;
      }
      pre = pre->link;
    }

    if (pre == NULL)
    {
      printf("Position not found.");
      return 0;
    }

    new->link = pre->link;
    pre->link = new;
  }
  return 0;
}

static void test()
{
  insert(2, 9);
  printf("Self-tests successfully passed!\n");
}

int main(void)
{
  vertex s1;
  s1.info = 5;

  printf("return nothing first.\n");

  test();

  printf("return %d\n", s1.info);

  return 0;
}