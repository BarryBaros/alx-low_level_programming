#ifndef DOG_H
#define DOG_H


/**
 * struct dog_t - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog_t
 */
typedef struct dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

