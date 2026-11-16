//¿Cuál es la salida del siguiente código? 
int a[] = {1,2,3,4}; 
int* p = a; 
int suma = 0; 
for (int i=0; i<4; i++) suma += *(p+i); 
cout << suma; 
//A) 6     B) 24     C) 10     D) 4   Respuesta: C