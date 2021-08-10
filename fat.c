#include "fat.h"
#include "ds.h"
#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

#define SUPER 0
#define TABLE 2
#define DIR 1

#define SIZE 1024

// the superblock
#define MAGIC_N           0xAC0010DE
typedef struct{
	int magic;
	int number_blocks;
	int n_fat_blocks;
	char empty[BLOCK_SIZE-3*sizeof(int)];
} super;

super sb;

//item
#define MAX_LETTERS 6
#define OK 1
#define NON_OK 0
typedef struct{
	unsigned char used;
	char name[MAX_LETTERS+1];
	unsigned int length;
	unsigned int first;
} dir_item;

#define N_ITEMS (BLOCK_SIZE / sizeof(dir_item))
dir_item dir[N_ITEMS];

// table
unsigned int *fat;

int mountState = 0;

int fat_format(){                   

  
  return -1;
}

void fat_debug()                             
{

}

int fat_mount()                               
{
  return -1;
}

int fat_create(char *name) 
{
  return -1;
}

int fat_delete( char *name )
{

  return -1;
}

int fat_getsize( char *name ){           
  return -1;   
}

int fat_read( char *name, char *buff, int length, int offset )
{

  return -1;

}


int fat_write( char *name, const char *buff, int length, int offset )
{

  return -1;

}
