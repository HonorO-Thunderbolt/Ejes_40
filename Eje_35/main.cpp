//¿Cuál es la salida del siguiente código? 
int* a = new int[4]{1,2,3,4}; 
int* p = a; 
cout << *(p+3); 
delete[] a; 
//A) 4     B) 0     C) 3     D) 1   Respuesta: A