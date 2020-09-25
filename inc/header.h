#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>


#define MaxItems 5 
#define BufferSize 5 

sem_t empty;
sem_t full;
int in = 0;
int out = 0;
int buffer[BufferSize];
pthread_mutex_t mutex;
