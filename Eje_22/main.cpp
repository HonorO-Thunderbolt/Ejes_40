//¿Cuál es la salida del siguiente código? 
int a[] = {1,2,3}; 
int* p = a; 
for(int i=0;i<3;i++) *(p+i) *= 2; 
cout << a[0] << " " << a[2]; 
//A) 2 3     B) 1 3     C) 2 6     D) 3 6   Respuesta: C