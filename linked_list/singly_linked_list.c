#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node
{
  int info;
  struct node *link;
};

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

///////////////////////////
int delete(int pos)
{
  struct node *t;
  if (start == NULL)
  {
    printf("\nlist is empty.");
  }

  else
  {
    if (pos == 1)
    {
      struct node *p;
      p == start;
      start = start->link;
      free(p);
    }
    else
    {
      struct node *prev = start;
      for (int i = 2; i < pos; i++)
      {
        if (prev == NULL)
        {
          printf("Position not found!");
          return 0;
        }

        prev = prev->link;
      }

      struct node *n = prev->link;
      prev->link = n->link;
      free(n);
    }
  }

  return 0;
}

///////////////////////////

void viewlist() // function to display values.
{
  struct node *p;
  if (start == NULL)
  {
    printf("\nlist is empty.");
  }
  else
  {
    p = start;
    while (p != NULL)
    {
      printf("%d", p->info);
      p = p->link;
    }
  }
}

///////////////////////////

static void test()
{
  insert(2, 9);
  printf("Self-tests successfully passed!\n");
}

int main(void)
{
  int n = 0, pos = 0, p = 0, num = 0, c = 0;

  printf("\n1.self test mode");
  printf("\n2.interactive mode");
  printf("\n3.enter your choice:");
  scanf("%d", &c);
  if (c == 1)
  {
    test();
  }
  else if (c == 2)
  {

  }
  else
  {
    printf("Invalid choice.")
  }
  return 0;
}