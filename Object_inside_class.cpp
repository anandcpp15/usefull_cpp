/* create object in class it self*/
class Test{
public:
Test b;
}// it is not possible it will trhow an error
// memory iniliztion in side class is not possible

class Test{
public:
static Test b;
}// it will get compiled with out any error be cuase memory initialazatio is out the class


class Test{
public:
Test *b;
}// it will get compiled with out any error 
